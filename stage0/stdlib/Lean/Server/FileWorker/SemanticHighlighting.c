// Lean compiler output
// Module: Lean.Server.FileWorker.SemanticHighlighting
// Imports: public import Lean.Server.Requests
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
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instBEqPosition_beq(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instOrdPosition_ord(lean_object*, lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_endPos(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t l_Lean_isLetterLike(uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isAtom(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree(lean_object*);
extern lean_object* l_Lean_Parser_Term_identProjKind;
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Elab_InfoTree_deepestNodes___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Server_RequestM_checkCancelled(lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_FileMap_lspPosToUtf8Pos(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_mergeSort___redArg(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_SemanticTokenType_toNat(uint8_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_AsyncList_waitUntil___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
uint64_t lean_string_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_Lsp_instFromJsonSemanticTokensRangeParams_fromJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Lean_Server_RequestCancellationToken_cancellationTasks(lean_object*);
lean_object* l_Lean_AsyncList_getFinishedPrefixWithTimeout___redArg(lean_object*, uint32_t, lean_object*);
lean_object* l_Lean_FileMap_lspRangeOfStx_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instBEqSemanticTokenType_beq(uint8_t, uint8_t);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Server_ServerTask_mapCheap___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonSemanticTokensParams_fromJson(lean_object*);
lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonSemanticTokens_toJson(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Server_requestHandlers;
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_Server_statefulRequestHandlers;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonPosition_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonSemanticTokenType_fromJson(lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Lsp_instToJsonSemanticTokenType_toJson(uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
uint64_t l_Lean_Lsp_instHashablePosition_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t l_Lean_Lsp_instHashableSemanticTokenType_hash(uint8_t);
lean_object* l_Lean_Lsp_instToJsonPosition_toJson(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sorry"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__3_value;
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(138, 85, 70, 0, 206, 11, 146, 59)}};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__4 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__5 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__5_value;
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__5_value),LEAN_SCALAR_PTR_LITERAL(64, 200, 114, 122, 5, 59, 103, 167)}};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__6 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "prop"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__7 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__7_value;
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__7_value),LEAN_SCALAR_PTR_LITERAL(200, 217, 246, 140, 179, 171, 30, 243)}};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__8 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__9 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__9_value;
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__9_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__10 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__10_value;
static const lean_array_object l_Lean_Server_FileWorker_noHighlightKinds___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__10_value)}};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__11 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_noHighlightKinds = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__11_value;
static const lean_string_object l_Lean_Server_FileWorker_docKinds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__0_value;
static const lean_string_object l_Lean_Server_FileWorker_docKinds___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "plainDocComment"};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__1_value;
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(130, 89, 58, 24, 132, 56, 253, 137)}};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__2_value;
static const lean_string_object l_Lean_Server_FileWorker_docKinds___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__3_value;
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__4 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__4_value;
static const lean_string_object l_Lean_Server_FileWorker_docKinds___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "moduleDoc"};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__5 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__5_value;
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__5_value),LEAN_SCALAR_PTR_LITERAL(249, 71, 187, 113, 90, 175, 60, 199)}};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__6 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__6_value;
static const lean_array_object l_Lean_Server_FileWorker_docKinds___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__2_value),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__4_value),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__6_value)}};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__7 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_docKinds = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__7_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0;
static const lean_string_object l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "admit"};
static const lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__1_value;
static lean_once_cell_t l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2;
static const lean_string_object l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stop"};
static const lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__3_value;
static lean_once_cell_t l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4;
static const lean_string_object l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "#exit"};
static const lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__5 = (const lean_object*)&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__5_value;
static lean_once_cell_t l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken = (const lean_object*)&l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken = (const lean_object*)&l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0_value;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__1_value;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FileWorker"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__2_value;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "AbsoluteLspSemanticToken"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(232, 14, 27, 113, 182, 128, 119, 36)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 244, 165, 17, 43, 66, 230, 94)}};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__6 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7;
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 67, 188, 228, 198, 126, 180, 88)}};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__8 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "tailPos"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13_value;
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13_value),LEAN_SCALAR_PTR_LITERAL(90, 23, 179, 28, 157, 202, 35, 235)}};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__14 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17;
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__5_value),LEAN_SCALAR_PTR_LITERAL(112, 109, 54, 158, 248, 169, 165, 159)}};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__18 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__18_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "priority"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22_value;
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22_value),LEAN_SCALAR_PTR_LITERAL(119, 157, 28, 87, 58, 42, 19, 197)}};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__23 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__23_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson(lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson(lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken = (const lean_object*)&l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__0_value;
static const lean_ctor_object l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_instInhabitedHandleOverlapState = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_token(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleOverlappingSemanticTokens(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_isVersoKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l_Lean_Server_FileWorker_isVersoKind___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value;
static const lean_string_object l_Lean_Server_FileWorker_isVersoKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l_Lean_Server_FileWorker_isVersoKind___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value;
static const lean_ctor_object l_Lean_Server_FileWorker_isVersoKind___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_isVersoKind___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__2_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Server_FileWorker_isVersoKind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__2_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_object* l_Lean_Server_FileWorker_isVersoKind___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__2_value;
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_isVersoKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_isVersoKind___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr___closed__0 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "arg_ident"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__0 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__1_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__1_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 49, 249, 222, 84, 35, 6, 34)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__1 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__1_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "arg_str"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__2 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__3_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__3_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(28, 110, 66, 227, 168, 59, 232, 226)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__3 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__3_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "arg_num"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__4 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__5_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__5_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(14, 247, 226, 130, 46, 200, 13, 201)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__5 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__5_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "named"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__6 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__6_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__7_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__7_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__6_value),LEAN_SCALAR_PTR_LITERAL(240, 209, 4, 173, 176, 102, 100, 110)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__7 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__7_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "named_no_paren"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__8 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__8_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__9_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__9_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 78, 240, 214, 103, 62, 217, 25)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__9 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__9_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "flag_on"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__10 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__10_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__11_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__11_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__10_value),LEAN_SCALAR_PTR_LITERAL(156, 222, 140, 123, 199, 224, 2, 54)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__11 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__11_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "flag_off"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__12 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__12_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__13_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__13_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__12_value),LEAN_SCALAR_PTR_LITERAL(29, 0, 37, 229, 12, 38, 20, 228)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__13 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__13_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ref"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__14 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__14_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__15_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__15_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__15_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__14_value),LEAN_SCALAR_PTR_LITERAL(157, 197, 143, 220, 44, 158, 31, 133)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__15 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__15_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__16 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__16_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__17_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__17_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__17_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__16_value),LEAN_SCALAR_PTR_LITERAL(97, 109, 202, 165, 136, 148, 125, 206)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__17 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__17_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__18 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__18_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__19_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__19_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__18_value),LEAN_SCALAR_PTR_LITERAL(252, 149, 124, 218, 116, 154, 240, 105)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__19 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__19_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "linebreak"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__20 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__20_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__21_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__21_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__21_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__20_value),LEAN_SCALAR_PTR_LITERAL(204, 183, 85, 224, 226, 177, 67, 207)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__21 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__21_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bold"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__22 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__22_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__23_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__23_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__22_value),LEAN_SCALAR_PTR_LITERAL(217, 240, 207, 144, 35, 3, 119, 11)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__23 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__23_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "emph"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__24 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__24_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__25_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__25_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__25_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__24_value),LEAN_SCALAR_PTR_LITERAL(76, 183, 215, 94, 0, 242, 191, 239)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__25 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__25_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "link"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__26 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__26_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__27_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__27_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__27_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__26_value),LEAN_SCALAR_PTR_LITERAL(129, 184, 35, 28, 112, 167, 76, 80)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__27 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__27_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "image"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__28 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__28_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__29_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__29_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__29_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__28_value),LEAN_SCALAR_PTR_LITERAL(156, 113, 65, 80, 13, 110, 129, 61)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__29 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__29_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "footnote"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__30 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__30_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__31_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__31_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__31_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__30_value),LEAN_SCALAR_PTR_LITERAL(207, 87, 199, 0, 139, 133, 244, 123)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__31 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__31_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__32 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__32_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__33_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__33_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__33_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__32_value),LEAN_SCALAR_PTR_LITERAL(115, 95, 172, 118, 77, 213, 142, 126)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__33 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__33_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "role"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__34 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__34_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__35_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__35_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__35_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__34_value),LEAN_SCALAR_PTR_LITERAL(88, 39, 13, 65, 153, 69, 141, 111)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__35 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__35_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inline_math"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__36 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__36_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__37_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__37_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__37_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__36_value),LEAN_SCALAR_PTR_LITERAL(39, 58, 152, 4, 55, 96, 114, 182)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__37 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__37_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "display_math"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__38 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__38_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__39_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__39_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__39_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__38_value),LEAN_SCALAR_PTR_LITERAL(185, 134, 189, 58, 202, 192, 153, 244)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__39 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__39_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "li"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__40 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__40_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__41_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__41_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__41_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__40_value),LEAN_SCALAR_PTR_LITERAL(86, 229, 0, 156, 136, 247, 163, 99)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__41 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__41_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "desc"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__42 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__42_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__43_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__43_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__43_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__42_value),LEAN_SCALAR_PTR_LITERAL(248, 44, 92, 80, 93, 40, 168, 47)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__43 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__43_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "para"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__44 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__44_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__45_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__45_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__45_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__44_value),LEAN_SCALAR_PTR_LITERAL(114, 72, 198, 245, 142, 145, 171, 144)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__45 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__45_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "codeblock"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__46 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__46_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__47_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__47_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__47_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__46_value),LEAN_SCALAR_PTR_LITERAL(228, 242, 241, 127, 13, 6, 27, 177)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__47 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__47_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "directive"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__48 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__48_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__49_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__49_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__49_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__48_value),LEAN_SCALAR_PTR_LITERAL(59, 236, 126, 236, 245, 181, 4, 182)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__49 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__49_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__50 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__50_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__51_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__51_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__51_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__50_value),LEAN_SCALAR_PTR_LITERAL(163, 102, 246, 27, 44, 229, 232, 70)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__51 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__51_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "metadata_block"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__52 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__52_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__53_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__53_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__53_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__53_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__52_value),LEAN_SCALAR_PTR_LITERAL(75, 201, 5, 85, 129, 97, 253, 216)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__53 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__53_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "link_ref"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__54 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__54_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__55_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__55_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__55_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__54_value),LEAN_SCALAR_PTR_LITERAL(37, 122, 52, 169, 192, 153, 29, 165)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__55 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__55_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "footnote_ref"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__56 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__56_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__57_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__57_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__57_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__57_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__57_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__57_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__56_value),LEAN_SCALAR_PTR_LITERAL(249, 7, 163, 121, 208, 236, 208, 13)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__57 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__57_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__58 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__58_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__59_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__59_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__59_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__59_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__59_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__59_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__58_value),LEAN_SCALAR_PTR_LITERAL(138, 131, 27, 234, 140, 72, 2, 168)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__59 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__59_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ul"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__60 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__60_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__61_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__61_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__61_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__61_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__61_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__61_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__60_value),LEAN_SCALAR_PTR_LITERAL(248, 90, 162, 51, 92, 30, 144, 89)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__61 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__61_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ol"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__62 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__62_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__63_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__63_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__63_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__63_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__63_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__63_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__62_value),LEAN_SCALAR_PTR_LITERAL(70, 73, 192, 118, 161, 88, 51, 173)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__63 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__63_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dl"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__64 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__64_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__65_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__65_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__65_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__65_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__65_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_isVersoKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__65_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__64_value),LEAN_SCALAR_PTR_LITERAL(13, 49, 30, 64, 139, 101, 177, 168)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__65 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__65_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__66 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__66_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__66_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__68 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__68_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__68_value),LEAN_SCALAR_PTR_LITERAL(13, 150, 193, 173, 39, 149, 4, 235)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__70 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__70_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__71_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__71_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__71_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__71_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__71_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__71_value_aux_2),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__70_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__71 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__71_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__72 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__72_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__72_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__73 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__73_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__74 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__74_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__74_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__75 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__75_value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__76 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__76_value;
static const lean_ctor_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__76_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__77 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__77_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__0_value;
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value;
static const lean_string_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pipeProj"};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__2_value;
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 78, 204, 170, 128, 130, 207, 24)}};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value;
static const lean_string_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__4 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__4_value;
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__4_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5_value;
static const lean_array_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_dbgShowTokens___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0_value;
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1_value;
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__0(lean_object*, lean_object*);
static const lean_closure_object l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":\t"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4___redArg(lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_FileWorker_dbgShowTokens___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_dbgShowTokens___closed__0;
static lean_once_cell_t l_Lean_Server_FileWorker_dbgShowTokens___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_dbgShowTokens___closed__1;
static const lean_closure_object l_Lean_Server_FileWorker_dbgShowTokens___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_dbgShowTokens___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_dbgShowTokens___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_dbgShowTokens___closed__2_value;
static const lean_string_object l_Lean_Server_FileWorker_dbgShowTokens___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Server_FileWorker_dbgShowTokens___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_dbgShowTokens___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeSemanticTokens(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeSemanticTokens___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "SemanticTokensState"};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value;
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(232, 14, 27, 113, 182, 128, 119, 36)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value),LEAN_SCALAR_PTR_LITERAL(114, 29, 136, 15, 114, 206, 151, 105)}};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value;
static lean_once_cell_t l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instTypeNameSemanticTokensState;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instInhabitedSemanticTokensState_default;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instInhabitedSemanticTokensState;
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Cannot parse request params: "};
static const lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12___closed__0 = (const lean_object*)&l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Failed to register stateful LSP request handler for '"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "': only possible during initialization"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__3 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__4 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "': already registered"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__0_value;
static const lean_string_object l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Failed to register LSP request handler for '"};
static const lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__1 = (const lean_object*)&l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "textDocument/semanticTokens/range"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleSemanticTokensRange___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "textDocument/semanticTokens/full"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "workspace/semanticTokens/refresh"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__4_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleSemanticTokensFull___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__4_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__4_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__5_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleSemanticTokensDidChange___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__5_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__5_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(lean_object* v_k_64_, lean_object* v_v_65_, lean_object* v_t_66_){
_start:
{
if (lean_obj_tag(v_t_66_) == 0)
{
lean_object* v_size_67_; lean_object* v_k_68_; lean_object* v_v_69_; lean_object* v_l_70_; lean_object* v_r_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_351_; 
v_size_67_ = lean_ctor_get(v_t_66_, 0);
v_k_68_ = lean_ctor_get(v_t_66_, 1);
v_v_69_ = lean_ctor_get(v_t_66_, 2);
v_l_70_ = lean_ctor_get(v_t_66_, 3);
v_r_71_ = lean_ctor_get(v_t_66_, 4);
v_isSharedCheck_351_ = !lean_is_exclusive(v_t_66_);
if (v_isSharedCheck_351_ == 0)
{
v___x_73_ = v_t_66_;
v_isShared_74_ = v_isSharedCheck_351_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_r_71_);
lean_inc(v_l_70_);
lean_inc(v_v_69_);
lean_inc(v_k_68_);
lean_inc(v_size_67_);
lean_dec(v_t_66_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_351_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
uint8_t v___x_75_; 
v___x_75_ = lean_string_compare(v_k_64_, v_k_68_);
switch(v___x_75_)
{
case 0:
{
lean_object* v_impl_76_; lean_object* v___x_77_; 
lean_dec(v_size_67_);
v_impl_76_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v_k_64_, v_v_65_, v_l_70_);
v___x_77_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_71_) == 0)
{
lean_object* v_size_78_; lean_object* v_size_79_; lean_object* v_k_80_; lean_object* v_v_81_; lean_object* v_l_82_; lean_object* v_r_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v_size_78_ = lean_ctor_get(v_r_71_, 0);
v_size_79_ = lean_ctor_get(v_impl_76_, 0);
lean_inc(v_size_79_);
v_k_80_ = lean_ctor_get(v_impl_76_, 1);
lean_inc(v_k_80_);
v_v_81_ = lean_ctor_get(v_impl_76_, 2);
lean_inc(v_v_81_);
v_l_82_ = lean_ctor_get(v_impl_76_, 3);
lean_inc(v_l_82_);
v_r_83_ = lean_ctor_get(v_impl_76_, 4);
lean_inc(v_r_83_);
v___x_84_ = lean_unsigned_to_nat(3u);
v___x_85_ = lean_nat_mul(v___x_84_, v_size_78_);
v___x_86_ = lean_nat_dec_lt(v___x_85_, v_size_79_);
lean_dec(v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_90_; 
lean_dec(v_r_83_);
lean_dec(v_l_82_);
lean_dec(v_v_81_);
lean_dec(v_k_80_);
v___x_87_ = lean_nat_add(v___x_77_, v_size_79_);
lean_dec(v_size_79_);
v___x_88_ = lean_nat_add(v___x_87_, v_size_78_);
lean_dec(v___x_87_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 3, v_impl_76_);
lean_ctor_set(v___x_73_, 0, v___x_88_);
v___x_90_ = v___x_73_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
lean_ctor_set(v_reuseFailAlloc_91_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_91_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_91_, 3, v_impl_76_);
lean_ctor_set(v_reuseFailAlloc_91_, 4, v_r_71_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
else
{
lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_157_; 
v_isSharedCheck_157_ = !lean_is_exclusive(v_impl_76_);
if (v_isSharedCheck_157_ == 0)
{
lean_object* v_unused_158_; lean_object* v_unused_159_; lean_object* v_unused_160_; lean_object* v_unused_161_; lean_object* v_unused_162_; 
v_unused_158_ = lean_ctor_get(v_impl_76_, 4);
lean_dec(v_unused_158_);
v_unused_159_ = lean_ctor_get(v_impl_76_, 3);
lean_dec(v_unused_159_);
v_unused_160_ = lean_ctor_get(v_impl_76_, 2);
lean_dec(v_unused_160_);
v_unused_161_ = lean_ctor_get(v_impl_76_, 1);
lean_dec(v_unused_161_);
v_unused_162_ = lean_ctor_get(v_impl_76_, 0);
lean_dec(v_unused_162_);
v___x_93_ = v_impl_76_;
v_isShared_94_ = v_isSharedCheck_157_;
goto v_resetjp_92_;
}
else
{
lean_dec(v_impl_76_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_157_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_size_95_; lean_object* v_size_96_; lean_object* v_k_97_; lean_object* v_v_98_; lean_object* v_l_99_; lean_object* v_r_100_; lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v_size_95_ = lean_ctor_get(v_l_82_, 0);
v_size_96_ = lean_ctor_get(v_r_83_, 0);
v_k_97_ = lean_ctor_get(v_r_83_, 1);
v_v_98_ = lean_ctor_get(v_r_83_, 2);
v_l_99_ = lean_ctor_get(v_r_83_, 3);
v_r_100_ = lean_ctor_get(v_r_83_, 4);
v___x_101_ = lean_unsigned_to_nat(2u);
v___x_102_ = lean_nat_mul(v___x_101_, v_size_95_);
v___x_103_ = lean_nat_dec_lt(v_size_96_, v___x_102_);
lean_dec(v___x_102_);
if (v___x_103_ == 0)
{
lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_132_; 
lean_inc(v_r_100_);
lean_inc(v_l_99_);
lean_inc(v_v_98_);
lean_inc(v_k_97_);
v_isSharedCheck_132_ = !lean_is_exclusive(v_r_83_);
if (v_isSharedCheck_132_ == 0)
{
lean_object* v_unused_133_; lean_object* v_unused_134_; lean_object* v_unused_135_; lean_object* v_unused_136_; lean_object* v_unused_137_; 
v_unused_133_ = lean_ctor_get(v_r_83_, 4);
lean_dec(v_unused_133_);
v_unused_134_ = lean_ctor_get(v_r_83_, 3);
lean_dec(v_unused_134_);
v_unused_135_ = lean_ctor_get(v_r_83_, 2);
lean_dec(v_unused_135_);
v_unused_136_ = lean_ctor_get(v_r_83_, 1);
lean_dec(v_unused_136_);
v_unused_137_ = lean_ctor_get(v_r_83_, 0);
lean_dec(v_unused_137_);
v___x_105_ = v_r_83_;
v_isShared_106_ = v_isSharedCheck_132_;
goto v_resetjp_104_;
}
else
{
lean_dec(v_r_83_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_132_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___y_110_; lean_object* v___y_111_; lean_object* v___y_112_; lean_object* v___x_120_; lean_object* v___y_122_; 
v___x_107_ = lean_nat_add(v___x_77_, v_size_79_);
lean_dec(v_size_79_);
v___x_108_ = lean_nat_add(v___x_107_, v_size_78_);
lean_dec(v___x_107_);
v___x_120_ = lean_nat_add(v___x_77_, v_size_95_);
if (lean_obj_tag(v_l_99_) == 0)
{
lean_object* v_size_130_; 
v_size_130_ = lean_ctor_get(v_l_99_, 0);
lean_inc(v_size_130_);
v___y_122_ = v_size_130_;
goto v___jp_121_;
}
else
{
lean_object* v___x_131_; 
v___x_131_ = lean_unsigned_to_nat(0u);
v___y_122_ = v___x_131_;
goto v___jp_121_;
}
v___jp_109_:
{
lean_object* v___x_113_; lean_object* v___x_115_; 
v___x_113_ = lean_nat_add(v___y_111_, v___y_112_);
lean_dec(v___y_112_);
lean_dec(v___y_111_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 4, v_r_71_);
lean_ctor_set(v___x_105_, 3, v_r_100_);
lean_ctor_set(v___x_105_, 2, v_v_69_);
lean_ctor_set(v___x_105_, 1, v_k_68_);
lean_ctor_set(v___x_105_, 0, v___x_113_);
v___x_115_ = v___x_105_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_113_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_119_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_119_, 3, v_r_100_);
lean_ctor_set(v_reuseFailAlloc_119_, 4, v_r_71_);
v___x_115_ = v_reuseFailAlloc_119_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
lean_object* v___x_117_; 
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 4, v___x_115_);
lean_ctor_set(v___x_93_, 3, v___y_110_);
lean_ctor_set(v___x_93_, 2, v_v_98_);
lean_ctor_set(v___x_93_, 1, v_k_97_);
lean_ctor_set(v___x_93_, 0, v___x_108_);
v___x_117_ = v___x_93_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v_k_97_);
lean_ctor_set(v_reuseFailAlloc_118_, 2, v_v_98_);
lean_ctor_set(v_reuseFailAlloc_118_, 3, v___y_110_);
lean_ctor_set(v_reuseFailAlloc_118_, 4, v___x_115_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
v___jp_121_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_123_ = lean_nat_add(v___x_120_, v___y_122_);
lean_dec(v___y_122_);
lean_dec(v___x_120_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_l_99_);
lean_ctor_set(v___x_73_, 3, v_l_82_);
lean_ctor_set(v___x_73_, 2, v_v_81_);
lean_ctor_set(v___x_73_, 1, v_k_80_);
lean_ctor_set(v___x_73_, 0, v___x_123_);
v___x_125_ = v___x_73_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v_k_80_);
lean_ctor_set(v_reuseFailAlloc_129_, 2, v_v_81_);
lean_ctor_set(v_reuseFailAlloc_129_, 3, v_l_82_);
lean_ctor_set(v_reuseFailAlloc_129_, 4, v_l_99_);
v___x_125_ = v_reuseFailAlloc_129_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; 
v___x_126_ = lean_nat_add(v___x_77_, v_size_78_);
if (lean_obj_tag(v_r_100_) == 0)
{
lean_object* v_size_127_; 
v_size_127_ = lean_ctor_get(v_r_100_, 0);
lean_inc(v_size_127_);
v___y_110_ = v___x_125_;
v___y_111_ = v___x_126_;
v___y_112_ = v_size_127_;
goto v___jp_109_;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = lean_unsigned_to_nat(0u);
v___y_110_ = v___x_125_;
v___y_111_ = v___x_126_;
v___y_112_ = v___x_128_;
goto v___jp_109_;
}
}
}
}
}
else
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_143_; 
lean_del_object(v___x_73_);
v___x_138_ = lean_nat_add(v___x_77_, v_size_79_);
lean_dec(v_size_79_);
v___x_139_ = lean_nat_add(v___x_138_, v_size_78_);
lean_dec(v___x_138_);
v___x_140_ = lean_nat_add(v___x_77_, v_size_78_);
v___x_141_ = lean_nat_add(v___x_140_, v_size_96_);
lean_dec(v___x_140_);
lean_inc_ref(v_r_71_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 4, v_r_71_);
lean_ctor_set(v___x_93_, 3, v_r_83_);
lean_ctor_set(v___x_93_, 2, v_v_69_);
lean_ctor_set(v___x_93_, 1, v_k_68_);
lean_ctor_set(v___x_93_, 0, v___x_141_);
v___x_143_ = v___x_93_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_156_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_156_, 3, v_r_83_);
lean_ctor_set(v_reuseFailAlloc_156_, 4, v_r_71_);
v___x_143_ = v_reuseFailAlloc_156_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
v_isSharedCheck_150_ = !lean_is_exclusive(v_r_71_);
if (v_isSharedCheck_150_ == 0)
{
lean_object* v_unused_151_; lean_object* v_unused_152_; lean_object* v_unused_153_; lean_object* v_unused_154_; lean_object* v_unused_155_; 
v_unused_151_ = lean_ctor_get(v_r_71_, 4);
lean_dec(v_unused_151_);
v_unused_152_ = lean_ctor_get(v_r_71_, 3);
lean_dec(v_unused_152_);
v_unused_153_ = lean_ctor_get(v_r_71_, 2);
lean_dec(v_unused_153_);
v_unused_154_ = lean_ctor_get(v_r_71_, 1);
lean_dec(v_unused_154_);
v_unused_155_ = lean_ctor_get(v_r_71_, 0);
lean_dec(v_unused_155_);
v___x_145_ = v_r_71_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_dec(v_r_71_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 4, v___x_143_);
lean_ctor_set(v___x_145_, 3, v_l_82_);
lean_ctor_set(v___x_145_, 2, v_v_81_);
lean_ctor_set(v___x_145_, 1, v_k_80_);
lean_ctor_set(v___x_145_, 0, v___x_139_);
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_139_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v_k_80_);
lean_ctor_set(v_reuseFailAlloc_149_, 2, v_v_81_);
lean_ctor_set(v_reuseFailAlloc_149_, 3, v_l_82_);
lean_ctor_set(v_reuseFailAlloc_149_, 4, v___x_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_163_; 
v_l_163_ = lean_ctor_get(v_impl_76_, 3);
lean_inc(v_l_163_);
if (lean_obj_tag(v_l_163_) == 0)
{
lean_object* v_r_164_; lean_object* v_k_165_; lean_object* v_v_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_177_; 
v_r_164_ = lean_ctor_get(v_impl_76_, 4);
v_k_165_ = lean_ctor_get(v_impl_76_, 1);
v_v_166_ = lean_ctor_get(v_impl_76_, 2);
v_isSharedCheck_177_ = !lean_is_exclusive(v_impl_76_);
if (v_isSharedCheck_177_ == 0)
{
lean_object* v_unused_178_; lean_object* v_unused_179_; 
v_unused_178_ = lean_ctor_get(v_impl_76_, 3);
lean_dec(v_unused_178_);
v_unused_179_ = lean_ctor_get(v_impl_76_, 0);
lean_dec(v_unused_179_);
v___x_168_ = v_impl_76_;
v_isShared_169_ = v_isSharedCheck_177_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_r_164_);
lean_inc(v_v_166_);
lean_inc(v_k_165_);
lean_dec(v_impl_76_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_177_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_170_; lean_object* v___x_172_; 
v___x_170_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_164_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 3, v_r_164_);
lean_ctor_set(v___x_168_, 2, v_v_69_);
lean_ctor_set(v___x_168_, 1, v_k_68_);
lean_ctor_set(v___x_168_, 0, v___x_77_);
v___x_172_ = v___x_168_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_176_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_176_, 3, v_r_164_);
lean_ctor_set(v_reuseFailAlloc_176_, 4, v_r_164_);
v___x_172_ = v_reuseFailAlloc_176_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_object* v___x_174_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v___x_172_);
lean_ctor_set(v___x_73_, 3, v_l_163_);
lean_ctor_set(v___x_73_, 2, v_v_166_);
lean_ctor_set(v___x_73_, 1, v_k_165_);
lean_ctor_set(v___x_73_, 0, v___x_170_);
v___x_174_ = v___x_73_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_170_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_k_165_);
lean_ctor_set(v_reuseFailAlloc_175_, 2, v_v_166_);
lean_ctor_set(v_reuseFailAlloc_175_, 3, v_l_163_);
lean_ctor_set(v_reuseFailAlloc_175_, 4, v___x_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
else
{
lean_object* v_r_180_; 
v_r_180_ = lean_ctor_get(v_impl_76_, 4);
lean_inc(v_r_180_);
if (lean_obj_tag(v_r_180_) == 0)
{
lean_object* v_k_181_; lean_object* v_v_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_205_; 
v_k_181_ = lean_ctor_get(v_impl_76_, 1);
v_v_182_ = lean_ctor_get(v_impl_76_, 2);
v_isSharedCheck_205_ = !lean_is_exclusive(v_impl_76_);
if (v_isSharedCheck_205_ == 0)
{
lean_object* v_unused_206_; lean_object* v_unused_207_; lean_object* v_unused_208_; 
v_unused_206_ = lean_ctor_get(v_impl_76_, 4);
lean_dec(v_unused_206_);
v_unused_207_ = lean_ctor_get(v_impl_76_, 3);
lean_dec(v_unused_207_);
v_unused_208_ = lean_ctor_get(v_impl_76_, 0);
lean_dec(v_unused_208_);
v___x_184_ = v_impl_76_;
v_isShared_185_ = v_isSharedCheck_205_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_v_182_);
lean_inc(v_k_181_);
lean_dec(v_impl_76_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_205_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v_k_186_; lean_object* v_v_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_201_; 
v_k_186_ = lean_ctor_get(v_r_180_, 1);
v_v_187_ = lean_ctor_get(v_r_180_, 2);
v_isSharedCheck_201_ = !lean_is_exclusive(v_r_180_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; lean_object* v_unused_203_; lean_object* v_unused_204_; 
v_unused_202_ = lean_ctor_get(v_r_180_, 4);
lean_dec(v_unused_202_);
v_unused_203_ = lean_ctor_get(v_r_180_, 3);
lean_dec(v_unused_203_);
v_unused_204_ = lean_ctor_get(v_r_180_, 0);
lean_dec(v_unused_204_);
v___x_189_ = v_r_180_;
v_isShared_190_ = v_isSharedCheck_201_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_v_187_);
lean_inc(v_k_186_);
lean_dec(v_r_180_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_201_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_191_ = lean_unsigned_to_nat(3u);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 4, v_l_163_);
lean_ctor_set(v___x_189_, 3, v_l_163_);
lean_ctor_set(v___x_189_, 2, v_v_182_);
lean_ctor_set(v___x_189_, 1, v_k_181_);
lean_ctor_set(v___x_189_, 0, v___x_77_);
v___x_193_ = v___x_189_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_k_181_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v_v_182_);
lean_ctor_set(v_reuseFailAlloc_200_, 3, v_l_163_);
lean_ctor_set(v_reuseFailAlloc_200_, 4, v_l_163_);
v___x_193_ = v_reuseFailAlloc_200_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_195_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 4, v_l_163_);
lean_ctor_set(v___x_184_, 2, v_v_69_);
lean_ctor_set(v___x_184_, 1, v_k_68_);
lean_ctor_set(v___x_184_, 0, v___x_77_);
v___x_195_ = v___x_184_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_199_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_199_, 3, v_l_163_);
lean_ctor_set(v_reuseFailAlloc_199_, 4, v_l_163_);
v___x_195_ = v_reuseFailAlloc_199_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_197_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v___x_195_);
lean_ctor_set(v___x_73_, 3, v___x_193_);
lean_ctor_set(v___x_73_, 2, v_v_187_);
lean_ctor_set(v___x_73_, 1, v_k_186_);
lean_ctor_set(v___x_73_, 0, v___x_191_);
v___x_197_ = v___x_73_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_191_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v_k_186_);
lean_ctor_set(v_reuseFailAlloc_198_, 2, v_v_187_);
lean_ctor_set(v_reuseFailAlloc_198_, 3, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_198_, 4, v___x_195_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
}
}
else
{
lean_object* v___x_209_; lean_object* v___x_211_; 
v___x_209_ = lean_unsigned_to_nat(2u);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_r_180_);
lean_ctor_set(v___x_73_, 3, v_impl_76_);
lean_ctor_set(v___x_73_, 0, v___x_209_);
v___x_211_ = v___x_73_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_212_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_212_, 3, v_impl_76_);
lean_ctor_set(v_reuseFailAlloc_212_, 4, v_r_180_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
}
case 1:
{
lean_object* v___x_214_; 
lean_dec(v_v_69_);
lean_dec(v_k_68_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 2, v_v_65_);
lean_ctor_set(v___x_73_, 1, v_k_64_);
v___x_214_ = v___x_73_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_size_67_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v_k_64_);
lean_ctor_set(v_reuseFailAlloc_215_, 2, v_v_65_);
lean_ctor_set(v_reuseFailAlloc_215_, 3, v_l_70_);
lean_ctor_set(v_reuseFailAlloc_215_, 4, v_r_71_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
default: 
{
lean_object* v_impl_216_; lean_object* v___x_217_; 
lean_dec(v_size_67_);
v_impl_216_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v_k_64_, v_v_65_, v_r_71_);
v___x_217_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_70_) == 0)
{
lean_object* v_size_218_; lean_object* v_size_219_; lean_object* v_k_220_; lean_object* v_v_221_; lean_object* v_l_222_; lean_object* v_r_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v_size_218_ = lean_ctor_get(v_l_70_, 0);
v_size_219_ = lean_ctor_get(v_impl_216_, 0);
lean_inc(v_size_219_);
v_k_220_ = lean_ctor_get(v_impl_216_, 1);
lean_inc(v_k_220_);
v_v_221_ = lean_ctor_get(v_impl_216_, 2);
lean_inc(v_v_221_);
v_l_222_ = lean_ctor_get(v_impl_216_, 3);
lean_inc(v_l_222_);
v_r_223_ = lean_ctor_get(v_impl_216_, 4);
lean_inc(v_r_223_);
v___x_224_ = lean_unsigned_to_nat(3u);
v___x_225_ = lean_nat_mul(v___x_224_, v_size_218_);
v___x_226_ = lean_nat_dec_lt(v___x_225_, v_size_219_);
lean_dec(v___x_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_230_; 
lean_dec(v_r_223_);
lean_dec(v_l_222_);
lean_dec(v_v_221_);
lean_dec(v_k_220_);
v___x_227_ = lean_nat_add(v___x_217_, v_size_218_);
v___x_228_ = lean_nat_add(v___x_227_, v_size_219_);
lean_dec(v_size_219_);
lean_dec(v___x_227_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_impl_216_);
lean_ctor_set(v___x_73_, 0, v___x_228_);
v___x_230_ = v___x_73_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_231_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_231_, 3, v_l_70_);
lean_ctor_set(v_reuseFailAlloc_231_, 4, v_impl_216_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
else
{
lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_295_; 
v_isSharedCheck_295_ = !lean_is_exclusive(v_impl_216_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; lean_object* v_unused_297_; lean_object* v_unused_298_; lean_object* v_unused_299_; lean_object* v_unused_300_; 
v_unused_296_ = lean_ctor_get(v_impl_216_, 4);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_impl_216_, 3);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_impl_216_, 2);
lean_dec(v_unused_298_);
v_unused_299_ = lean_ctor_get(v_impl_216_, 1);
lean_dec(v_unused_299_);
v_unused_300_ = lean_ctor_get(v_impl_216_, 0);
lean_dec(v_unused_300_);
v___x_233_ = v_impl_216_;
v_isShared_234_ = v_isSharedCheck_295_;
goto v_resetjp_232_;
}
else
{
lean_dec(v_impl_216_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_295_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v_size_235_; lean_object* v_k_236_; lean_object* v_v_237_; lean_object* v_l_238_; lean_object* v_r_239_; lean_object* v_size_240_; lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v_size_235_ = lean_ctor_get(v_l_222_, 0);
v_k_236_ = lean_ctor_get(v_l_222_, 1);
v_v_237_ = lean_ctor_get(v_l_222_, 2);
v_l_238_ = lean_ctor_get(v_l_222_, 3);
v_r_239_ = lean_ctor_get(v_l_222_, 4);
v_size_240_ = lean_ctor_get(v_r_223_, 0);
v___x_241_ = lean_unsigned_to_nat(2u);
v___x_242_ = lean_nat_mul(v___x_241_, v_size_240_);
v___x_243_ = lean_nat_dec_lt(v_size_235_, v___x_242_);
lean_dec(v___x_242_);
if (v___x_243_ == 0)
{
lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_271_; 
lean_inc(v_r_239_);
lean_inc(v_l_238_);
lean_inc(v_v_237_);
lean_inc(v_k_236_);
v_isSharedCheck_271_ = !lean_is_exclusive(v_l_222_);
if (v_isSharedCheck_271_ == 0)
{
lean_object* v_unused_272_; lean_object* v_unused_273_; lean_object* v_unused_274_; lean_object* v_unused_275_; lean_object* v_unused_276_; 
v_unused_272_ = lean_ctor_get(v_l_222_, 4);
lean_dec(v_unused_272_);
v_unused_273_ = lean_ctor_get(v_l_222_, 3);
lean_dec(v_unused_273_);
v_unused_274_ = lean_ctor_get(v_l_222_, 2);
lean_dec(v_unused_274_);
v_unused_275_ = lean_ctor_get(v_l_222_, 1);
lean_dec(v_unused_275_);
v_unused_276_ = lean_ctor_get(v_l_222_, 0);
lean_dec(v_unused_276_);
v___x_245_ = v_l_222_;
v_isShared_246_ = v_isSharedCheck_271_;
goto v_resetjp_244_;
}
else
{
lean_dec(v_l_222_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_271_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___y_250_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_261_; 
v___x_247_ = lean_nat_add(v___x_217_, v_size_218_);
v___x_248_ = lean_nat_add(v___x_247_, v_size_219_);
lean_dec(v_size_219_);
if (lean_obj_tag(v_l_238_) == 0)
{
lean_object* v_size_269_; 
v_size_269_ = lean_ctor_get(v_l_238_, 0);
lean_inc(v_size_269_);
v___y_261_ = v_size_269_;
goto v___jp_260_;
}
else
{
lean_object* v___x_270_; 
v___x_270_ = lean_unsigned_to_nat(0u);
v___y_261_ = v___x_270_;
goto v___jp_260_;
}
v___jp_249_:
{
lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_253_ = lean_nat_add(v___y_250_, v___y_252_);
lean_dec(v___y_252_);
lean_dec(v___y_250_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 4, v_r_223_);
lean_ctor_set(v___x_245_, 3, v_r_239_);
lean_ctor_set(v___x_245_, 2, v_v_221_);
lean_ctor_set(v___x_245_, 1, v_k_220_);
lean_ctor_set(v___x_245_, 0, v___x_253_);
v___x_255_ = v___x_245_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_k_220_);
lean_ctor_set(v_reuseFailAlloc_259_, 2, v_v_221_);
lean_ctor_set(v_reuseFailAlloc_259_, 3, v_r_239_);
lean_ctor_set(v_reuseFailAlloc_259_, 4, v_r_223_);
v___x_255_ = v_reuseFailAlloc_259_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v___x_257_; 
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 4, v___x_255_);
lean_ctor_set(v___x_233_, 3, v___y_251_);
lean_ctor_set(v___x_233_, 2, v_v_237_);
lean_ctor_set(v___x_233_, 1, v_k_236_);
lean_ctor_set(v___x_233_, 0, v___x_248_);
v___x_257_ = v___x_233_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_248_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_k_236_);
lean_ctor_set(v_reuseFailAlloc_258_, 2, v_v_237_);
lean_ctor_set(v_reuseFailAlloc_258_, 3, v___y_251_);
lean_ctor_set(v_reuseFailAlloc_258_, 4, v___x_255_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
v___jp_260_:
{
lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_262_ = lean_nat_add(v___x_247_, v___y_261_);
lean_dec(v___y_261_);
lean_dec(v___x_247_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_l_238_);
lean_ctor_set(v___x_73_, 0, v___x_262_);
v___x_264_ = v___x_73_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_268_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_268_, 3, v_l_70_);
lean_ctor_set(v_reuseFailAlloc_268_, 4, v_l_238_);
v___x_264_ = v_reuseFailAlloc_268_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
lean_object* v___x_265_; 
v___x_265_ = lean_nat_add(v___x_217_, v_size_240_);
if (lean_obj_tag(v_r_239_) == 0)
{
lean_object* v_size_266_; 
v_size_266_ = lean_ctor_get(v_r_239_, 0);
lean_inc(v_size_266_);
v___y_250_ = v___x_265_;
v___y_251_ = v___x_264_;
v___y_252_ = v_size_266_;
goto v___jp_249_;
}
else
{
lean_object* v___x_267_; 
v___x_267_ = lean_unsigned_to_nat(0u);
v___y_250_ = v___x_265_;
v___y_251_ = v___x_264_;
v___y_252_ = v___x_267_;
goto v___jp_249_;
}
}
}
}
}
else
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_281_; 
lean_del_object(v___x_73_);
v___x_277_ = lean_nat_add(v___x_217_, v_size_218_);
v___x_278_ = lean_nat_add(v___x_277_, v_size_219_);
lean_dec(v_size_219_);
v___x_279_ = lean_nat_add(v___x_277_, v_size_235_);
lean_dec(v___x_277_);
lean_inc_ref(v_l_70_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 4, v_l_222_);
lean_ctor_set(v___x_233_, 3, v_l_70_);
lean_ctor_set(v___x_233_, 2, v_v_69_);
lean_ctor_set(v___x_233_, 1, v_k_68_);
lean_ctor_set(v___x_233_, 0, v___x_279_);
v___x_281_ = v___x_233_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_279_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_294_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_294_, 3, v_l_70_);
lean_ctor_set(v_reuseFailAlloc_294_, 4, v_l_222_);
v___x_281_ = v_reuseFailAlloc_294_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
v_isSharedCheck_288_ = !lean_is_exclusive(v_l_70_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; lean_object* v_unused_290_; lean_object* v_unused_291_; lean_object* v_unused_292_; lean_object* v_unused_293_; 
v_unused_289_ = lean_ctor_get(v_l_70_, 4);
lean_dec(v_unused_289_);
v_unused_290_ = lean_ctor_get(v_l_70_, 3);
lean_dec(v_unused_290_);
v_unused_291_ = lean_ctor_get(v_l_70_, 2);
lean_dec(v_unused_291_);
v_unused_292_ = lean_ctor_get(v_l_70_, 1);
lean_dec(v_unused_292_);
v_unused_293_ = lean_ctor_get(v_l_70_, 0);
lean_dec(v_unused_293_);
v___x_283_ = v_l_70_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_dec(v_l_70_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 4, v_r_223_);
lean_ctor_set(v___x_283_, 3, v___x_281_);
lean_ctor_set(v___x_283_, 2, v_v_221_);
lean_ctor_set(v___x_283_, 1, v_k_220_);
lean_ctor_set(v___x_283_, 0, v___x_278_);
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_k_220_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v_v_221_);
lean_ctor_set(v_reuseFailAlloc_287_, 3, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_287_, 4, v_r_223_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_301_; 
v_l_301_ = lean_ctor_get(v_impl_216_, 3);
lean_inc(v_l_301_);
if (lean_obj_tag(v_l_301_) == 0)
{
lean_object* v_r_302_; lean_object* v_k_303_; lean_object* v_v_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_327_; 
v_r_302_ = lean_ctor_get(v_impl_216_, 4);
v_k_303_ = lean_ctor_get(v_impl_216_, 1);
v_v_304_ = lean_ctor_get(v_impl_216_, 2);
v_isSharedCheck_327_ = !lean_is_exclusive(v_impl_216_);
if (v_isSharedCheck_327_ == 0)
{
lean_object* v_unused_328_; lean_object* v_unused_329_; 
v_unused_328_ = lean_ctor_get(v_impl_216_, 3);
lean_dec(v_unused_328_);
v_unused_329_ = lean_ctor_get(v_impl_216_, 0);
lean_dec(v_unused_329_);
v___x_306_ = v_impl_216_;
v_isShared_307_ = v_isSharedCheck_327_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_r_302_);
lean_inc(v_v_304_);
lean_inc(v_k_303_);
lean_dec(v_impl_216_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_327_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v_k_308_; lean_object* v_v_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_323_; 
v_k_308_ = lean_ctor_get(v_l_301_, 1);
v_v_309_ = lean_ctor_get(v_l_301_, 2);
v_isSharedCheck_323_ = !lean_is_exclusive(v_l_301_);
if (v_isSharedCheck_323_ == 0)
{
lean_object* v_unused_324_; lean_object* v_unused_325_; lean_object* v_unused_326_; 
v_unused_324_ = lean_ctor_get(v_l_301_, 4);
lean_dec(v_unused_324_);
v_unused_325_ = lean_ctor_get(v_l_301_, 3);
lean_dec(v_unused_325_);
v_unused_326_ = lean_ctor_get(v_l_301_, 0);
lean_dec(v_unused_326_);
v___x_311_ = v_l_301_;
v_isShared_312_ = v_isSharedCheck_323_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_v_309_);
lean_inc(v_k_308_);
lean_dec(v_l_301_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_323_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_313_; lean_object* v___x_315_; 
v___x_313_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_302_, 2);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 4, v_r_302_);
lean_ctor_set(v___x_311_, 3, v_r_302_);
lean_ctor_set(v___x_311_, 2, v_v_69_);
lean_ctor_set(v___x_311_, 1, v_k_68_);
lean_ctor_set(v___x_311_, 0, v___x_217_);
v___x_315_ = v___x_311_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_322_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_322_, 3, v_r_302_);
lean_ctor_set(v_reuseFailAlloc_322_, 4, v_r_302_);
v___x_315_ = v_reuseFailAlloc_322_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
lean_object* v___x_317_; 
lean_inc(v_r_302_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 3, v_r_302_);
lean_ctor_set(v___x_306_, 0, v___x_217_);
v___x_317_ = v___x_306_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_k_303_);
lean_ctor_set(v_reuseFailAlloc_321_, 2, v_v_304_);
lean_ctor_set(v_reuseFailAlloc_321_, 3, v_r_302_);
lean_ctor_set(v_reuseFailAlloc_321_, 4, v_r_302_);
v___x_317_ = v_reuseFailAlloc_321_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_319_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v___x_317_);
lean_ctor_set(v___x_73_, 3, v___x_315_);
lean_ctor_set(v___x_73_, 2, v_v_309_);
lean_ctor_set(v___x_73_, 1, v_k_308_);
lean_ctor_set(v___x_73_, 0, v___x_313_);
v___x_319_ = v___x_73_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_313_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_320_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_320_, 3, v___x_315_);
lean_ctor_set(v_reuseFailAlloc_320_, 4, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
}
else
{
lean_object* v_r_330_; 
v_r_330_ = lean_ctor_get(v_impl_216_, 4);
lean_inc(v_r_330_);
if (lean_obj_tag(v_r_330_) == 0)
{
lean_object* v_k_331_; lean_object* v_v_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_343_; 
v_k_331_ = lean_ctor_get(v_impl_216_, 1);
v_v_332_ = lean_ctor_get(v_impl_216_, 2);
v_isSharedCheck_343_ = !lean_is_exclusive(v_impl_216_);
if (v_isSharedCheck_343_ == 0)
{
lean_object* v_unused_344_; lean_object* v_unused_345_; lean_object* v_unused_346_; 
v_unused_344_ = lean_ctor_get(v_impl_216_, 4);
lean_dec(v_unused_344_);
v_unused_345_ = lean_ctor_get(v_impl_216_, 3);
lean_dec(v_unused_345_);
v_unused_346_ = lean_ctor_get(v_impl_216_, 0);
lean_dec(v_unused_346_);
v___x_334_ = v_impl_216_;
v_isShared_335_ = v_isSharedCheck_343_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_v_332_);
lean_inc(v_k_331_);
lean_dec(v_impl_216_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_343_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_338_; 
v___x_336_ = lean_unsigned_to_nat(3u);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 4, v_l_301_);
lean_ctor_set(v___x_334_, 2, v_v_69_);
lean_ctor_set(v___x_334_, 1, v_k_68_);
lean_ctor_set(v___x_334_, 0, v___x_217_);
v___x_338_ = v___x_334_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_342_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_342_, 3, v_l_301_);
lean_ctor_set(v_reuseFailAlloc_342_, 4, v_l_301_);
v___x_338_ = v_reuseFailAlloc_342_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
lean_object* v___x_340_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_r_330_);
lean_ctor_set(v___x_73_, 3, v___x_338_);
lean_ctor_set(v___x_73_, 2, v_v_332_);
lean_ctor_set(v___x_73_, 1, v_k_331_);
lean_ctor_set(v___x_73_, 0, v___x_336_);
v___x_340_ = v___x_73_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_k_331_);
lean_ctor_set(v_reuseFailAlloc_341_, 2, v_v_332_);
lean_ctor_set(v_reuseFailAlloc_341_, 3, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_341_, 4, v_r_330_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
else
{
lean_object* v___x_347_; lean_object* v___x_349_; 
v___x_347_ = lean_unsigned_to_nat(2u);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_impl_216_);
lean_ctor_set(v___x_73_, 3, v_r_330_);
lean_ctor_set(v___x_73_, 0, v___x_347_);
v___x_349_ = v___x_73_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_347_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_350_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_350_, 3, v_r_330_);
lean_ctor_set(v_reuseFailAlloc_350_, 4, v_impl_216_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
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
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(1u);
v___x_353_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v_k_64_);
lean_ctor_set(v___x_353_, 2, v_v_65_);
lean_ctor_set(v___x_353_, 3, v_t_66_);
lean_ctor_set(v___x_353_, 4, v_t_66_);
return v___x_353_;
}
}
}
static lean_object* _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0(void){
_start:
{
lean_object* v___x_354_; uint8_t v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_354_ = lean_box(1);
v___x_355_ = 23;
v___x_356_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds___closed__3));
v___x_357_ = lean_box(v___x_355_);
v___x_358_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v___x_356_, v___x_357_, v___x_354_);
return v___x_358_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2(void){
_start:
{
lean_object* v___x_360_; uint8_t v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_360_ = lean_obj_once(&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0, &l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0_once, _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0);
v___x_361_ = 23;
v___x_362_ = ((lean_object*)(l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__1));
v___x_363_ = lean_box(v___x_361_);
v___x_364_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v___x_362_, v___x_363_, v___x_360_);
return v___x_364_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4(void){
_start:
{
lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_366_ = lean_obj_once(&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2, &l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2_once, _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2);
v___x_367_ = 23;
v___x_368_ = ((lean_object*)(l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__3));
v___x_369_ = lean_box(v___x_367_);
v___x_370_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v___x_368_, v___x_369_, v___x_366_);
return v___x_370_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6(void){
_start:
{
lean_object* v___x_372_; uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_372_ = lean_obj_once(&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4, &l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4_once, _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4);
v___x_373_ = 23;
v___x_374_ = ((lean_object*)(l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__5));
v___x_375_ = lean_box(v___x_373_);
v___x_376_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v___x_374_, v___x_375_, v___x_372_);
return v___x_376_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap(void){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = lean_obj_once(&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6, &l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6_once, _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0(lean_object* v_00_u03b2_378_, lean_object* v_k_379_, lean_object* v_v_380_, lean_object* v_t_381_, lean_object* v_hl_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v_k_379_, v_v_380_, v_t_381_);
return v___x_383_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq(lean_object* v_x_384_, lean_object* v_x_385_){
_start:
{
lean_object* v_pos_386_; lean_object* v_tailPos_387_; uint8_t v_type_388_; lean_object* v_priority_389_; lean_object* v_pos_390_; lean_object* v_tailPos_391_; uint8_t v_type_392_; lean_object* v_priority_393_; uint8_t v___x_394_; 
v_pos_386_ = lean_ctor_get(v_x_384_, 0);
v_tailPos_387_ = lean_ctor_get(v_x_384_, 1);
v_type_388_ = lean_ctor_get_uint8(v_x_384_, sizeof(void*)*3);
v_priority_389_ = lean_ctor_get(v_x_384_, 2);
v_pos_390_ = lean_ctor_get(v_x_385_, 0);
v_tailPos_391_ = lean_ctor_get(v_x_385_, 1);
v_type_392_ = lean_ctor_get_uint8(v_x_385_, sizeof(void*)*3);
v_priority_393_ = lean_ctor_get(v_x_385_, 2);
v___x_394_ = l_Lean_Lsp_instBEqPosition_beq(v_pos_386_, v_pos_390_);
if (v___x_394_ == 0)
{
return v___x_394_;
}
else
{
uint8_t v___x_395_; 
v___x_395_ = l_Lean_Lsp_instBEqPosition_beq(v_tailPos_387_, v_tailPos_391_);
if (v___x_395_ == 0)
{
return v___x_395_;
}
else
{
uint8_t v___x_396_; 
v___x_396_ = l_Lean_Lsp_instBEqSemanticTokenType_beq(v_type_388_, v_type_392_);
if (v___x_396_ == 0)
{
return v___x_396_;
}
else
{
uint8_t v___x_397_; 
v___x_397_ = lean_nat_dec_eq(v_priority_389_, v_priority_393_);
return v___x_397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq___boxed(lean_object* v_x_398_, lean_object* v_x_399_){
_start:
{
uint8_t v_res_400_; lean_object* v_r_401_; 
v_res_400_ = l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq(v_x_398_, v_x_399_);
lean_dec_ref(v_x_399_);
lean_dec_ref(v_x_398_);
v_r_401_ = lean_box(v_res_400_);
return v_r_401_;
}
}
LEAN_EXPORT uint64_t l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash(lean_object* v_x_404_){
_start:
{
lean_object* v_pos_405_; lean_object* v_tailPos_406_; uint8_t v_type_407_; lean_object* v_priority_408_; uint64_t v___x_409_; uint64_t v___x_410_; uint64_t v___x_411_; uint64_t v___x_412_; uint64_t v___x_413_; uint64_t v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint64_t v___x_417_; 
v_pos_405_ = lean_ctor_get(v_x_404_, 0);
v_tailPos_406_ = lean_ctor_get(v_x_404_, 1);
v_type_407_ = lean_ctor_get_uint8(v_x_404_, sizeof(void*)*3);
v_priority_408_ = lean_ctor_get(v_x_404_, 2);
v___x_409_ = 0ULL;
v___x_410_ = l_Lean_Lsp_instHashablePosition_hash(v_pos_405_);
v___x_411_ = lean_uint64_mix_hash(v___x_409_, v___x_410_);
v___x_412_ = l_Lean_Lsp_instHashablePosition_hash(v_tailPos_406_);
v___x_413_ = lean_uint64_mix_hash(v___x_411_, v___x_412_);
v___x_414_ = l_Lean_Lsp_instHashableSemanticTokenType_hash(v_type_407_);
v___x_415_ = lean_uint64_mix_hash(v___x_413_, v___x_414_);
v___x_416_ = lean_uint64_of_nat(v_priority_408_);
v___x_417_ = lean_uint64_mix_hash(v___x_415_, v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash___boxed(lean_object* v_x_418_){
_start:
{
uint64_t v_res_419_; lean_object* v_r_420_; 
v_res_419_ = l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash(v_x_418_);
lean_dec_ref(v_x_418_);
v_r_420_ = lean_box_uint64(v_res_419_);
return v_r_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0(lean_object* v_j_423_, lean_object* v_k_424_){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = l_Lean_Json_getObjValD(v_j_423_, v_k_424_);
v___x_426_ = l_Lean_Lsp_instFromJsonPosition_fromJson(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0___boxed(lean_object* v_j_427_, lean_object* v_k_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0(v_j_427_, v_k_428_);
lean_dec_ref(v_k_428_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1(lean_object* v_j_430_, lean_object* v_k_431_){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = l_Lean_Json_getObjValD(v_j_430_, v_k_431_);
v___x_433_ = l_Lean_Lsp_instFromJsonSemanticTokenType_fromJson(v___x_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1___boxed(lean_object* v_j_434_, lean_object* v_k_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1(v_j_434_, v_k_435_);
lean_dec_ref(v_k_435_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2(lean_object* v_j_437_, lean_object* v_k_438_){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = l_Lean_Json_getObjValD(v_j_437_, v_k_438_);
v___x_440_ = l_Lean_Json_getNat_x3f(v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2___boxed(lean_object* v_j_441_, lean_object* v_k_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2(v_j_441_, v_k_442_);
lean_dec_ref(v_k_442_);
return v_res_443_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5(void){
_start:
{
uint8_t v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_453_ = 1;
v___x_454_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4));
v___x_455_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_454_, v___x_453_);
return v___x_455_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_457_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__6));
v___x_458_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5);
v___x_459_ = lean_string_append(v___x_458_, v___x_457_);
return v___x_459_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9(void){
_start:
{
uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_462_ = 1;
v___x_463_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__8));
v___x_464_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_463_, v___x_462_);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9);
v___x_466_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7);
v___x_467_ = lean_string_append(v___x_466_, v___x_465_);
return v___x_467_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11));
v___x_470_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10);
v___x_471_ = lean_string_append(v___x_470_, v___x_469_);
return v___x_471_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15(void){
_start:
{
uint8_t v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_475_ = 1;
v___x_476_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__14));
v___x_477_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_476_, v___x_475_);
return v___x_477_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_478_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15);
v___x_479_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7);
v___x_480_ = lean_string_append(v___x_479_, v___x_478_);
return v___x_480_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11));
v___x_482_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16);
v___x_483_ = lean_string_append(v___x_482_, v___x_481_);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19(void){
_start:
{
uint8_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_486_ = 1;
v___x_487_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__18));
v___x_488_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_487_, v___x_486_);
return v___x_488_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19);
v___x_490_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7);
v___x_491_ = lean_string_append(v___x_490_, v___x_489_);
return v___x_491_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11));
v___x_493_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20);
v___x_494_ = lean_string_append(v___x_493_, v___x_492_);
return v___x_494_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24(void){
_start:
{
uint8_t v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = 1;
v___x_499_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__23));
v___x_500_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_499_, v___x_498_);
return v___x_500_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_501_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24);
v___x_502_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7);
v___x_503_ = lean_string_append(v___x_502_, v___x_501_);
return v___x_503_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11));
v___x_505_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25);
v___x_506_ = lean_string_append(v___x_505_, v___x_504_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson(lean_object* v_json_507_){
_start:
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0));
lean_inc(v_json_507_);
v___x_509_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0(v_json_507_, v___x_508_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_519_; 
lean_dec(v_json_507_);
v_a_510_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_519_ == 0)
{
v___x_512_ = v___x_509_;
v_isShared_513_ = v_isSharedCheck_519_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_509_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_519_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_514_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12);
v___x_515_ = lean_string_append(v___x_514_, v_a_510_);
lean_dec(v_a_510_);
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 0, v___x_515_);
v___x_517_ = v___x_512_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
else
{
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
lean_dec(v_json_507_);
v_a_520_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_509_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_509_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
lean_ctor_set_tag(v___x_522_, 0);
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
else
{
lean_object* v_a_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_a_528_ = lean_ctor_get(v___x_509_, 0);
lean_inc(v_a_528_);
lean_dec_ref_known(v___x_509_, 1);
v___x_529_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13));
lean_inc(v_json_507_);
v___x_530_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0(v_json_507_, v___x_529_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_540_; 
lean_dec(v_a_528_);
lean_dec(v_json_507_);
v_a_531_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_540_ == 0)
{
v___x_533_ = v___x_530_;
v_isShared_534_ = v_isSharedCheck_540_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_530_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_540_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
v___x_535_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17);
v___x_536_ = lean_string_append(v___x_535_, v_a_531_);
lean_dec(v_a_531_);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v___x_536_);
v___x_538_ = v___x_533_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
else
{
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec(v_a_528_);
lean_dec(v_json_507_);
v_a_541_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_530_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_530_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
lean_ctor_set_tag(v___x_543_, 0);
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
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
lean_object* v_a_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v_a_549_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_549_);
lean_dec_ref_known(v___x_530_, 1);
v___x_550_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds___closed__5));
lean_inc(v_json_507_);
v___x_551_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1(v_json_507_, v___x_550_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_561_; 
lean_dec(v_a_549_);
lean_dec(v_a_528_);
lean_dec(v_json_507_);
v_a_552_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_561_ == 0)
{
v___x_554_ = v___x_551_;
v_isShared_555_ = v_isSharedCheck_561_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_551_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_561_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_559_; 
v___x_556_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21);
v___x_557_ = lean_string_append(v___x_556_, v_a_552_);
lean_dec(v_a_552_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v___x_557_);
v___x_559_ = v___x_554_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_557_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
else
{
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
lean_dec(v_a_549_);
lean_dec(v_a_528_);
lean_dec(v_json_507_);
v_a_562_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_551_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_551_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
lean_ctor_set_tag(v___x_564_, 0);
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_a_570_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_a_570_);
lean_dec_ref_known(v___x_551_, 1);
v___x_571_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22));
v___x_572_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2(v_json_507_, v___x_571_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_582_; 
lean_dec(v_a_570_);
lean_dec(v_a_549_);
lean_dec(v_a_528_);
v_a_573_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_582_ == 0)
{
v___x_575_ = v___x_572_;
v_isShared_576_ = v_isSharedCheck_582_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_572_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_582_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_577_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26);
v___x_578_ = lean_string_append(v___x_577_, v_a_573_);
lean_dec(v_a_573_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_578_);
v___x_580_ = v___x_575_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_578_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
else
{
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
lean_dec(v_a_570_);
lean_dec(v_a_549_);
lean_dec(v_a_528_);
v_a_583_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v___x_572_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_572_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
lean_ctor_set_tag(v___x_585_, 0);
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
else
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_600_; 
v_a_591_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_600_ == 0)
{
v___x_593_ = v___x_572_;
v_isShared_594_ = v_isSharedCheck_600_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_572_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_600_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; uint8_t v___x_596_; lean_object* v___x_598_; 
v___x_595_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_595_, 0, v_a_528_);
lean_ctor_set(v___x_595_, 1, v_a_549_);
lean_ctor_set(v___x_595_, 2, v_a_591_);
v___x_596_ = lean_unbox(v_a_570_);
lean_dec(v_a_570_);
lean_ctor_set_uint8(v___x_595_, sizeof(void*)*3, v___x_596_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v___x_595_);
v___x_598_ = v___x_593_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v___x_595_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson_spec__0(lean_object* v_a_603_, lean_object* v_a_604_){
_start:
{
if (lean_obj_tag(v_a_603_) == 0)
{
lean_object* v___x_605_; 
v___x_605_ = lean_array_to_list(v_a_604_);
return v___x_605_;
}
else
{
lean_object* v_head_606_; lean_object* v_tail_607_; lean_object* v___x_608_; 
v_head_606_ = lean_ctor_get(v_a_603_, 0);
lean_inc(v_head_606_);
v_tail_607_ = lean_ctor_get(v_a_603_, 1);
lean_inc(v_tail_607_);
lean_dec_ref_known(v_a_603_, 2);
v___x_608_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_604_, v_head_606_);
v_a_603_ = v_tail_607_;
v_a_604_ = v___x_608_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson(lean_object* v_x_612_){
_start:
{
lean_object* v_pos_613_; lean_object* v_tailPos_614_; uint8_t v_type_615_; lean_object* v_priority_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v_pos_613_ = lean_ctor_get(v_x_612_, 0);
lean_inc_ref(v_pos_613_);
v_tailPos_614_ = lean_ctor_get(v_x_612_, 1);
lean_inc_ref(v_tailPos_614_);
v_type_615_ = lean_ctor_get_uint8(v_x_612_, sizeof(void*)*3);
v_priority_616_ = lean_ctor_get(v_x_612_, 2);
lean_inc(v_priority_616_);
lean_dec_ref(v_x_612_);
v___x_617_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0));
v___x_618_ = l_Lean_Lsp_instToJsonPosition_toJson(v_pos_613_);
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_617_);
lean_ctor_set(v___x_619_, 1, v___x_618_);
v___x_620_ = lean_box(0);
v___x_621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_619_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13));
v___x_623_ = l_Lean_Lsp_instToJsonPosition_toJson(v_tailPos_614_);
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_622_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
lean_ctor_set(v___x_625_, 1, v___x_620_);
v___x_626_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds___closed__5));
v___x_627_ = l_Lean_Lsp_instToJsonSemanticTokenType_toJson(v_type_615_);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_626_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
lean_ctor_set(v___x_629_, 1, v___x_620_);
v___x_630_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22));
v___x_631_ = l_Lean_JsonNumber_fromNat(v_priority_616_);
v___x_632_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_630_);
lean_ctor_set(v___x_633_, 1, v___x_632_);
v___x_634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
lean_ctor_set(v___x_634_, 1, v___x_620_);
v___x_635_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
lean_ctor_set(v___x_635_, 1, v___x_620_);
v___x_636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_629_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
v___x_637_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_625_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_621_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = ((lean_object*)(l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson___closed__0));
v___x_640_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson_spec__0(v___x_638_, v___x_639_);
v___x_641_ = l_Lean_Json_mkObj(v___x_640_);
lean_dec(v___x_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0(lean_object* v_text_644_, lean_object* v_beginPos_645_, lean_object* v_endPos_x3f_646_, lean_object* v_as_647_, size_t v_i_648_, size_t v_stop_649_, lean_object* v_b_650_){
_start:
{
lean_object* v___y_652_; uint8_t v___x_656_; 
v___x_656_ = lean_usize_dec_eq(v_i_648_, v_stop_649_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; lean_object* v_stx_658_; uint8_t v_type_659_; lean_object* v_priority_660_; lean_object* v___x_661_; 
v___x_657_ = lean_array_uget_borrowed(v_as_647_, v_i_648_);
v_stx_658_ = lean_ctor_get(v___x_657_, 0);
v_type_659_ = lean_ctor_get_uint8(v___x_657_, sizeof(void*)*2);
v_priority_660_ = lean_ctor_get(v___x_657_, 1);
v___x_661_ = l_Lean_Syntax_getPos_x3f(v_stx_658_, v___x_656_);
if (lean_obj_tag(v___x_661_) == 0)
{
v___y_652_ = v_b_650_;
goto v___jp_651_;
}
else
{
lean_object* v_val_662_; lean_object* v___x_663_; 
v_val_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_val_662_);
lean_dec_ref_known(v___x_661_, 1);
v___x_663_ = l_Lean_Syntax_getTailPos_x3f(v_stx_658_, v___x_656_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_dec(v_val_662_);
v___y_652_ = v_b_650_;
goto v___jp_651_;
}
else
{
lean_object* v_val_664_; uint8_t v___y_666_; uint8_t v___x_671_; 
v_val_664_ = lean_ctor_get(v___x_663_, 0);
lean_inc(v_val_664_);
lean_dec_ref_known(v___x_663_, 1);
v___x_671_ = lean_nat_dec_le(v_beginPos_645_, v_val_662_);
if (v___x_671_ == 0)
{
lean_dec(v_val_664_);
lean_dec(v_val_662_);
v___y_652_ = v_b_650_;
goto v___jp_651_;
}
else
{
if (lean_obj_tag(v_endPos_x3f_646_) == 0)
{
v___y_666_ = v___x_671_;
goto v___jp_665_;
}
else
{
lean_object* v_val_672_; lean_object* v___x_673_; lean_object* v___x_674_; uint8_t v___x_675_; 
v_val_672_ = lean_ctor_get(v_endPos_x3f_646_, 0);
v___x_673_ = lean_unsigned_to_nat(1u);
v___x_674_ = lean_nat_add(v_val_662_, v___x_673_);
v___x_675_ = lean_nat_dec_le(v___x_674_, v_val_672_);
lean_dec(v___x_674_);
v___y_666_ = v___x_675_;
goto v___jp_665_;
}
}
v___jp_665_:
{
if (v___y_666_ == 0)
{
lean_dec(v_val_664_);
lean_dec(v_val_662_);
v___y_652_ = v_b_650_;
goto v___jp_651_;
}
else
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
lean_inc_ref_n(v_text_644_, 2);
v___x_667_ = l_Lean_FileMap_utf8PosToLspPos(v_text_644_, v_val_662_);
lean_dec(v_val_662_);
v___x_668_ = l_Lean_FileMap_utf8PosToLspPos(v_text_644_, v_val_664_);
lean_dec(v_val_664_);
lean_inc(v_priority_660_);
v___x_669_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
lean_ctor_set(v___x_669_, 2, v_priority_660_);
lean_ctor_set_uint8(v___x_669_, sizeof(void*)*3, v_type_659_);
v___x_670_ = lean_array_push(v_b_650_, v___x_669_);
v___y_652_ = v___x_670_;
goto v___jp_651_;
}
}
}
}
}
else
{
lean_dec_ref(v_text_644_);
return v_b_650_;
}
v___jp_651_:
{
size_t v___x_653_; size_t v___x_654_; 
v___x_653_ = ((size_t)1ULL);
v___x_654_ = lean_usize_add(v_i_648_, v___x_653_);
v_i_648_ = v___x_654_;
v_b_650_ = v___y_652_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0___boxed(lean_object* v_text_676_, lean_object* v_beginPos_677_, lean_object* v_endPos_x3f_678_, lean_object* v_as_679_, lean_object* v_i_680_, lean_object* v_stop_681_, lean_object* v_b_682_){
_start:
{
size_t v_i_boxed_683_; size_t v_stop_boxed_684_; lean_object* v_res_685_; 
v_i_boxed_683_ = lean_unbox_usize(v_i_680_);
lean_dec(v_i_680_);
v_stop_boxed_684_ = lean_unbox_usize(v_stop_681_);
lean_dec(v_stop_681_);
v_res_685_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0(v_text_676_, v_beginPos_677_, v_endPos_x3f_678_, v_as_679_, v_i_boxed_683_, v_stop_boxed_684_, v_b_682_);
lean_dec_ref(v_as_679_);
lean_dec(v_endPos_x3f_678_);
lean_dec(v_beginPos_677_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0(lean_object* v_text_688_, lean_object* v_beginPos_689_, lean_object* v_endPos_x3f_690_, lean_object* v_as_691_, lean_object* v_start_692_, lean_object* v_stop_693_){
_start:
{
lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_694_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___closed__0));
v___x_695_ = lean_nat_dec_lt(v_start_692_, v_stop_693_);
if (v___x_695_ == 0)
{
lean_dec_ref(v_text_688_);
return v___x_694_;
}
else
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = lean_array_get_size(v_as_691_);
v___x_697_ = lean_nat_dec_le(v_stop_693_, v___x_696_);
if (v___x_697_ == 0)
{
uint8_t v___x_698_; 
v___x_698_ = lean_nat_dec_lt(v_start_692_, v___x_696_);
if (v___x_698_ == 0)
{
lean_dec_ref(v_text_688_);
return v___x_694_;
}
else
{
size_t v___x_699_; size_t v___x_700_; lean_object* v___x_701_; 
v___x_699_ = lean_usize_of_nat(v_start_692_);
v___x_700_ = lean_usize_of_nat(v___x_696_);
v___x_701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0(v_text_688_, v_beginPos_689_, v_endPos_x3f_690_, v_as_691_, v___x_699_, v___x_700_, v___x_694_);
return v___x_701_;
}
}
else
{
size_t v___x_702_; size_t v___x_703_; lean_object* v___x_704_; 
v___x_702_ = lean_usize_of_nat(v_start_692_);
v___x_703_ = lean_usize_of_nat(v_stop_693_);
v___x_704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0(v_text_688_, v_beginPos_689_, v_endPos_x3f_690_, v_as_691_, v___x_702_, v___x_703_, v___x_694_);
return v___x_704_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___boxed(lean_object* v_text_705_, lean_object* v_beginPos_706_, lean_object* v_endPos_x3f_707_, lean_object* v_as_708_, lean_object* v_start_709_, lean_object* v_stop_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0(v_text_705_, v_beginPos_706_, v_endPos_x3f_707_, v_as_708_, v_start_709_, v_stop_710_);
lean_dec(v_stop_710_);
lean_dec(v_start_709_);
lean_dec_ref(v_as_708_);
lean_dec(v_endPos_x3f_707_);
lean_dec(v_beginPos_706_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens(lean_object* v_text_712_, lean_object* v_beginPos_713_, lean_object* v_endPos_x3f_714_, lean_object* v_tokens_715_){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_716_ = lean_unsigned_to_nat(0u);
v___x_717_ = lean_array_get_size(v_tokens_715_);
v___x_718_ = l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0(v_text_712_, v_beginPos_713_, v_endPos_x3f_714_, v_tokens_715_, v___x_716_, v___x_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens___boxed(lean_object* v_text_719_, lean_object* v_beginPos_720_, lean_object* v_endPos_x3f_721_, lean_object* v_tokens_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens(v_text_719_, v_beginPos_720_, v_endPos_x3f_721_, v_tokens_722_);
lean_dec_ref(v_tokens_722_);
lean_dec(v_endPos_x3f_721_);
lean_dec(v_beginPos_720_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding_go(lean_object* v_s_732_, lean_object* v_x_733_){
_start:
{
if (lean_obj_tag(v_x_733_) == 0)
{
lean_object* v___x_734_; 
v___x_734_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_734_, 0, v_s_732_);
lean_ctor_set(v___x_734_, 1, v_x_733_);
return v___x_734_;
}
else
{
lean_object* v_head_735_; lean_object* v_tail_736_; lean_object* v_tailPos_737_; lean_object* v_tailPos_738_; uint8_t v___x_739_; 
v_head_735_ = lean_ctor_get(v_x_733_, 0);
v_tail_736_ = lean_ctor_get(v_x_733_, 1);
v_tailPos_737_ = lean_ctor_get(v_s_732_, 1);
v_tailPos_738_ = lean_ctor_get(v_head_735_, 1);
v___x_739_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_737_, v_tailPos_738_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; 
v___x_740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_740_, 0, v_s_732_);
lean_ctor_set(v___x_740_, 1, v_x_733_);
return v___x_740_;
}
else
{
lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_748_; 
lean_inc(v_tail_736_);
lean_inc(v_head_735_);
v_isSharedCheck_748_ = !lean_is_exclusive(v_x_733_);
if (v_isSharedCheck_748_ == 0)
{
lean_object* v_unused_749_; lean_object* v_unused_750_; 
v_unused_749_ = lean_ctor_get(v_x_733_, 1);
lean_dec(v_unused_749_);
v_unused_750_ = lean_ctor_get(v_x_733_, 0);
lean_dec(v_unused_750_);
v___x_742_ = v_x_733_;
v_isShared_743_ = v_isSharedCheck_748_;
goto v_resetjp_741_;
}
else
{
lean_dec(v_x_733_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_748_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_744_; lean_object* v___x_746_; 
v___x_744_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding_go(v_s_732_, v_tail_736_);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 1, v___x_744_);
v___x_746_ = v___x_742_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_head_735_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v___x_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding(lean_object* v_st_751_, lean_object* v_s_752_){
_start:
{
lean_object* v_nonOverlapping_753_; lean_object* v_current_x3f_754_; lean_object* v_surrounding_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_763_; 
v_nonOverlapping_753_ = lean_ctor_get(v_st_751_, 0);
v_current_x3f_754_ = lean_ctor_get(v_st_751_, 1);
v_surrounding_755_ = lean_ctor_get(v_st_751_, 2);
v_isSharedCheck_763_ = !lean_is_exclusive(v_st_751_);
if (v_isSharedCheck_763_ == 0)
{
v___x_757_ = v_st_751_;
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_surrounding_755_);
lean_inc(v_current_x3f_754_);
lean_inc(v_nonOverlapping_753_);
lean_dec(v_st_751_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_759_; lean_object* v___x_761_; 
v___x_759_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding_go(v_s_752_, v_surrounding_755_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 2, v___x_759_);
v___x_761_ = v___x_757_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_nonOverlapping_753_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v_current_x3f_754_);
lean_ctor_set(v_reuseFailAlloc_762_, 2, v___x_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better(lean_object* v_t_764_, lean_object* v_soFar_765_){
_start:
{
lean_object* v_tailPos_766_; lean_object* v_priority_767_; lean_object* v_tailPos_768_; lean_object* v_priority_769_; uint8_t v___x_770_; 
v_tailPos_766_ = lean_ctor_get(v_soFar_765_, 1);
v_priority_767_ = lean_ctor_get(v_soFar_765_, 2);
v_tailPos_768_ = lean_ctor_get(v_t_764_, 1);
v_priority_769_ = lean_ctor_get(v_t_764_, 2);
v___x_770_ = lean_nat_dec_lt(v_priority_767_, v_priority_769_);
if (v___x_770_ == 0)
{
uint8_t v___x_771_; 
v___x_771_ = lean_nat_dec_eq(v_priority_769_, v_priority_767_);
if (v___x_771_ == 0)
{
return v___x_771_;
}
else
{
uint8_t v___x_772_; 
v___x_772_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_768_, v_tailPos_766_);
if (v___x_772_ == 0)
{
return v___x_771_;
}
else
{
return v___x_770_;
}
}
}
else
{
return v___x_770_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better___boxed(lean_object* v_t_773_, lean_object* v_soFar_774_){
_start:
{
uint8_t v_res_775_; lean_object* v_r_776_; 
v_res_775_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better(v_t_773_, v_soFar_774_);
lean_dec_ref(v_soFar_774_);
lean_dec_ref(v_t_773_);
v_r_776_ = lean_box(v_res_775_);
return v_r_776_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0(lean_object* v_x_777_, lean_object* v_x_778_){
_start:
{
if (lean_obj_tag(v_x_778_) == 0)
{
return v_x_777_;
}
else
{
if (lean_obj_tag(v_x_777_) == 0)
{
lean_object* v_head_779_; lean_object* v_tail_780_; lean_object* v___x_781_; 
v_head_779_ = lean_ctor_get(v_x_778_, 0);
v_tail_780_ = lean_ctor_get(v_x_778_, 1);
lean_inc(v_head_779_);
v___x_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_781_, 0, v_head_779_);
v_x_777_ = v___x_781_;
v_x_778_ = v_tail_780_;
goto _start;
}
else
{
lean_object* v_head_783_; lean_object* v_tail_784_; lean_object* v_val_785_; uint8_t v___x_786_; 
v_head_783_ = lean_ctor_get(v_x_778_, 0);
v_tail_784_ = lean_ctor_get(v_x_778_, 1);
v_val_785_ = lean_ctor_get(v_x_777_, 0);
v___x_786_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better(v_head_783_, v_val_785_);
if (v___x_786_ == 0)
{
v_x_778_ = v_tail_784_;
goto _start;
}
else
{
lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_795_; 
v_isSharedCheck_795_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_795_ == 0)
{
lean_object* v_unused_796_; 
v_unused_796_ = lean_ctor_get(v_x_777_, 0);
lean_dec(v_unused_796_);
v___x_789_ = v_x_777_;
v_isShared_790_ = v_isSharedCheck_795_;
goto v_resetjp_788_;
}
else
{
lean_dec(v_x_777_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_795_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
lean_inc(v_head_783_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v_head_783_);
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_head_783_);
v___x_792_ = v_reuseFailAlloc_794_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
v_x_777_ = v___x_792_;
v_x_778_ = v_tail_784_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0___boxed(lean_object* v_x_797_, lean_object* v_x_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0(v_x_797_, v_x_798_);
lean_dec(v_x_798_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest(lean_object* v_toks_800_){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = lean_box(0);
v___x_802_ = l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0(v___x_801_, v_toks_800_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest___boxed(lean_object* v_toks_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest(v_toks_803_);
lean_dec(v_toks_803_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0(lean_object* v_val_805_, lean_object* v_x_806_){
_start:
{
if (lean_obj_tag(v_x_806_) == 0)
{
return v_x_806_;
}
else
{
lean_object* v_head_807_; lean_object* v_tail_808_; lean_object* v_tailPos_809_; lean_object* v_tailPos_810_; uint8_t v___x_811_; 
v_head_807_ = lean_ctor_get(v_x_806_, 0);
v_tail_808_ = lean_ctor_get(v_x_806_, 1);
v_tailPos_809_ = lean_ctor_get(v_head_807_, 1);
v_tailPos_810_ = lean_ctor_get(v_val_805_, 1);
v___x_811_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_809_, v_tailPos_810_);
if (v___x_811_ == 2)
{
lean_inc_ref(v_x_806_);
return v_x_806_;
}
else
{
v_x_806_ = v_tail_808_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0___boxed(lean_object* v_val_813_, lean_object* v_x_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0(v_val_813_, v_x_814_);
lean_dec(v_x_814_);
lean_dec_ref(v_val_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(lean_object* v_nextToken_x3f_816_, lean_object* v_a_817_){
_start:
{
lean_object* v_current_x3f_818_; 
v_current_x3f_818_ = lean_ctor_get(v_a_817_, 1);
if (lean_obj_tag(v_current_x3f_818_) == 1)
{
lean_object* v_nonOverlapping_819_; lean_object* v_surrounding_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_861_; 
lean_inc_ref(v_current_x3f_818_);
v_nonOverlapping_819_ = lean_ctor_get(v_a_817_, 0);
v_surrounding_820_ = lean_ctor_get(v_a_817_, 2);
v_isSharedCheck_861_ = !lean_is_exclusive(v_a_817_);
if (v_isSharedCheck_861_ == 0)
{
lean_object* v_unused_862_; 
v_unused_862_ = lean_ctor_get(v_a_817_, 1);
lean_dec(v_unused_862_);
v___x_822_ = v_a_817_;
v_isShared_823_ = v_isSharedCheck_861_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_surrounding_820_);
lean_inc(v_nonOverlapping_819_);
lean_dec(v_a_817_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_861_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v_val_824_; lean_object* v___x_825_; lean_object* v___y_827_; lean_object* v___y_828_; 
v_val_824_ = lean_ctor_get(v_current_x3f_818_, 0);
v___x_825_ = l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0(v_val_824_, v_surrounding_820_);
lean_dec(v_surrounding_820_);
if (lean_obj_tag(v_nextToken_x3f_816_) == 1)
{
lean_object* v_val_856_; lean_object* v_tailPos_857_; lean_object* v_pos_858_; uint8_t v___x_859_; 
v_val_856_ = lean_ctor_get(v_nextToken_x3f_816_, 0);
v_tailPos_857_ = lean_ctor_get(v_val_824_, 1);
v_pos_858_ = lean_ctor_get(v_val_856_, 0);
v___x_859_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_857_, v_pos_858_);
if (v___x_859_ == 2)
{
lean_object* v___x_860_; 
lean_del_object(v___x_822_);
v___x_860_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_860_, 0, v_nonOverlapping_819_);
lean_ctor_set(v___x_860_, 1, v_current_x3f_818_);
lean_ctor_set(v___x_860_, 2, v___x_825_);
return v___x_860_;
}
else
{
lean_inc(v_val_824_);
lean_dec_ref_known(v_current_x3f_818_, 1);
goto v___jp_833_;
}
}
else
{
lean_inc(v_val_824_);
lean_dec_ref_known(v_current_x3f_818_, 1);
goto v___jp_833_;
}
v___jp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 2, v___x_825_);
lean_ctor_set(v___x_822_, 1, v___y_828_);
lean_ctor_set(v___x_822_, 0, v___y_827_);
v___x_830_ = v___x_822_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___y_827_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v___y_828_);
lean_ctor_set(v_reuseFailAlloc_832_, 2, v___x_825_);
v___x_830_ = v_reuseFailAlloc_832_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
v_a_817_ = v___x_830_;
goto _start;
}
}
v___jp_833_:
{
lean_object* v___x_834_; lean_object* v___x_835_; 
lean_inc(v_val_824_);
v___x_834_ = lean_array_push(v_nonOverlapping_819_, v_val_824_);
v___x_835_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest(v___x_825_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_dec(v_val_824_);
v___y_827_ = v___x_834_;
v___y_828_ = v___x_835_;
goto v___jp_826_;
}
else
{
lean_object* v_val_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_855_; 
v_val_836_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_855_ == 0)
{
v___x_838_ = v___x_835_;
v_isShared_839_ = v_isSharedCheck_855_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_val_836_);
lean_dec(v___x_835_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_855_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v_tailPos_840_; lean_object* v_tailPos_841_; uint8_t v_type_842_; lean_object* v_priority_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_853_; 
v_tailPos_840_ = lean_ctor_get(v_val_824_, 1);
lean_inc_ref(v_tailPos_840_);
lean_dec(v_val_824_);
v_tailPos_841_ = lean_ctor_get(v_val_836_, 1);
v_type_842_ = lean_ctor_get_uint8(v_val_836_, sizeof(void*)*3);
v_priority_843_ = lean_ctor_get(v_val_836_, 2);
v_isSharedCheck_853_ = !lean_is_exclusive(v_val_836_);
if (v_isSharedCheck_853_ == 0)
{
lean_object* v_unused_854_; 
v_unused_854_ = lean_ctor_get(v_val_836_, 0);
lean_dec(v_unused_854_);
v___x_845_ = v_val_836_;
v_isShared_846_ = v_isSharedCheck_853_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_priority_843_);
lean_inc(v_tailPos_841_);
lean_dec(v_val_836_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_853_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v_tailPos_840_);
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_tailPos_840_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v_tailPos_841_);
lean_ctor_set(v_reuseFailAlloc_852_, 2, v_priority_843_);
lean_ctor_set_uint8(v_reuseFailAlloc_852_, sizeof(void*)*3, v_type_842_);
v___x_848_ = v_reuseFailAlloc_852_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
lean_object* v___x_850_; 
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 0, v___x_848_);
v___x_850_ = v___x_838_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v___x_848_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
v___y_827_ = v___x_834_;
v___y_828_ = v___x_850_;
goto v___jp_826_;
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
lean_object* v_nonOverlapping_863_; lean_object* v_surrounding_864_; lean_object* v___x_865_; 
v_nonOverlapping_863_ = lean_ctor_get(v_a_817_, 0);
v_surrounding_864_ = lean_ctor_get(v_a_817_, 2);
v___x_865_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest(v_surrounding_864_);
if (lean_obj_tag(v___x_865_) == 1)
{
lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_873_; 
lean_inc(v_surrounding_864_);
lean_inc_ref(v_nonOverlapping_863_);
v_isSharedCheck_873_ = !lean_is_exclusive(v_a_817_);
if (v_isSharedCheck_873_ == 0)
{
lean_object* v_unused_874_; lean_object* v_unused_875_; lean_object* v_unused_876_; 
v_unused_874_ = lean_ctor_get(v_a_817_, 2);
lean_dec(v_unused_874_);
v_unused_875_ = lean_ctor_get(v_a_817_, 1);
lean_dec(v_unused_875_);
v_unused_876_ = lean_ctor_get(v_a_817_, 0);
lean_dec(v_unused_876_);
v___x_867_ = v_a_817_;
v_isShared_868_ = v_isSharedCheck_873_;
goto v_resetjp_866_;
}
else
{
lean_dec(v_a_817_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_873_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 1, v___x_865_);
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_nonOverlapping_863_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v___x_865_);
lean_ctor_set(v_reuseFailAlloc_872_, 2, v_surrounding_864_);
v___x_870_ = v_reuseFailAlloc_872_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
v_a_817_ = v___x_870_;
goto _start;
}
}
}
else
{
lean_dec(v___x_865_);
return v_a_817_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg___boxed(lean_object* v_nextToken_x3f_877_, lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(v_nextToken_x3f_877_, v_a_878_);
lean_dec(v_nextToken_x3f_877_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken(lean_object* v_st_880_, lean_object* v_nextToken_x3f_881_){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(v_nextToken_x3f_881_, v_st_880_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken___boxed(lean_object* v_st_883_, lean_object* v_nextToken_x3f_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken(v_st_883_, v_nextToken_x3f_884_);
lean_dec(v_nextToken_x3f_884_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1(lean_object* v_nextToken_x3f_886_, lean_object* v_inst_887_, lean_object* v_a_888_){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(v_nextToken_x3f_886_, v_a_888_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___boxed(lean_object* v_nextToken_x3f_890_, lean_object* v_inst_891_, lean_object* v_a_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1(v_nextToken_x3f_890_, v_inst_891_, v_a_892_);
lean_dec(v_nextToken_x3f_890_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_token(lean_object* v_st_894_, lean_object* v_t_895_){
_start:
{
lean_object* v___x_896_; lean_object* v_st_897_; lean_object* v_current_x3f_898_; 
lean_inc_ref(v_t_895_);
v___x_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_896_, 0, v_t_895_);
v_st_897_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(v___x_896_, v_st_894_);
v_current_x3f_898_ = lean_ctor_get(v_st_897_, 1);
lean_inc(v_current_x3f_898_);
if (lean_obj_tag(v_current_x3f_898_) == 1)
{
lean_object* v_val_899_; lean_object* v_nonOverlapping_900_; lean_object* v_surrounding_901_; lean_object* v_pos_902_; lean_object* v_tailPos_903_; lean_object* v_priority_904_; lean_object* v_pos_905_; lean_object* v_tailPos_906_; uint8_t v_type_907_; lean_object* v_priority_908_; lean_object* v___y_910_; uint8_t v___y_919_; uint8_t v___x_921_; 
v_val_899_ = lean_ctor_get(v_current_x3f_898_, 0);
lean_inc(v_val_899_);
lean_dec_ref_known(v_current_x3f_898_, 1);
v_nonOverlapping_900_ = lean_ctor_get(v_st_897_, 0);
lean_inc_ref(v_nonOverlapping_900_);
v_surrounding_901_ = lean_ctor_get(v_st_897_, 2);
lean_inc(v_surrounding_901_);
v_pos_902_ = lean_ctor_get(v_t_895_, 0);
v_tailPos_903_ = lean_ctor_get(v_t_895_, 1);
v_priority_904_ = lean_ctor_get(v_t_895_, 2);
v_pos_905_ = lean_ctor_get(v_val_899_, 0);
v_tailPos_906_ = lean_ctor_get(v_val_899_, 1);
v_type_907_ = lean_ctor_get_uint8(v_val_899_, sizeof(void*)*3);
v_priority_908_ = lean_ctor_get(v_val_899_, 2);
v___x_921_ = lean_nat_dec_lt(v_priority_904_, v_priority_908_);
if (v___x_921_ == 0)
{
uint8_t v___x_922_; 
v___x_922_ = lean_nat_dec_eq(v_priority_908_, v_priority_904_);
if (v___x_922_ == 0)
{
lean_inc_ref(v_tailPos_903_);
lean_inc_ref(v_pos_902_);
lean_dec_ref(v_st_897_);
lean_dec_ref(v_t_895_);
goto v___jp_914_;
}
else
{
uint8_t v___x_923_; 
v___x_923_ = l_Lean_Lsp_instBEqPosition_beq(v_pos_905_, v_pos_902_);
if (v___x_923_ == 0)
{
lean_inc_ref(v_tailPos_903_);
lean_inc_ref(v_pos_902_);
lean_dec_ref(v_st_897_);
lean_dec_ref(v_t_895_);
goto v___jp_914_;
}
else
{
uint8_t v___x_924_; 
v___x_924_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_906_, v_tailPos_903_);
if (v___x_924_ == 0)
{
v___y_919_ = v___x_923_;
goto v___jp_918_;
}
else
{
v___y_919_ = v___x_921_;
goto v___jp_918_;
}
}
}
}
else
{
lean_object* v___x_925_; 
lean_dec(v_surrounding_901_);
lean_dec_ref(v_nonOverlapping_900_);
lean_dec(v_val_899_);
lean_dec_ref_known(v___x_896_, 1);
v___x_925_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding(v_st_897_, v_t_895_);
return v___x_925_;
}
v___jp_909_:
{
lean_object* v_st_911_; uint8_t v___x_912_; 
v_st_911_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_st_911_, 0, v___y_910_);
lean_ctor_set(v_st_911_, 1, v___x_896_);
lean_ctor_set(v_st_911_, 2, v_surrounding_901_);
v___x_912_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_903_, v_tailPos_906_);
lean_dec_ref(v_tailPos_903_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; 
v___x_913_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding(v_st_911_, v_val_899_);
return v___x_913_;
}
else
{
lean_dec(v_val_899_);
return v_st_911_;
}
}
v___jp_914_:
{
uint8_t v___x_915_; 
v___x_915_ = l_Lean_Lsp_instOrdPosition_ord(v_pos_905_, v_pos_902_);
if (v___x_915_ == 0)
{
lean_object* v_curr_916_; lean_object* v___x_917_; 
lean_inc(v_priority_908_);
lean_inc_ref(v_pos_905_);
v_curr_916_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_curr_916_, 0, v_pos_905_);
lean_ctor_set(v_curr_916_, 1, v_pos_902_);
lean_ctor_set(v_curr_916_, 2, v_priority_908_);
lean_ctor_set_uint8(v_curr_916_, sizeof(void*)*3, v_type_907_);
v___x_917_ = lean_array_push(v_nonOverlapping_900_, v_curr_916_);
v___y_910_ = v___x_917_;
goto v___jp_909_;
}
else
{
lean_dec_ref(v_pos_902_);
v___y_910_ = v_nonOverlapping_900_;
goto v___jp_909_;
}
}
v___jp_918_:
{
if (v___y_919_ == 0)
{
lean_inc_ref(v_tailPos_903_);
lean_inc_ref(v_pos_902_);
lean_dec_ref(v_st_897_);
lean_dec_ref(v_t_895_);
goto v___jp_914_;
}
else
{
lean_object* v___x_920_; 
lean_dec(v_surrounding_901_);
lean_dec_ref(v_nonOverlapping_900_);
lean_dec(v_val_899_);
lean_dec_ref_known(v___x_896_, 1);
v___x_920_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding(v_st_897_, v_t_895_);
return v___x_920_;
}
}
}
else
{
lean_object* v_nonOverlapping_926_; lean_object* v_surrounding_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_934_; 
lean_dec(v_current_x3f_898_);
lean_dec_ref(v_t_895_);
v_nonOverlapping_926_ = lean_ctor_get(v_st_897_, 0);
v_surrounding_927_ = lean_ctor_get(v_st_897_, 2);
v_isSharedCheck_934_ = !lean_is_exclusive(v_st_897_);
if (v_isSharedCheck_934_ == 0)
{
lean_object* v_unused_935_; 
v_unused_935_ = lean_ctor_get(v_st_897_, 1);
lean_dec(v_unused_935_);
v___x_929_ = v_st_897_;
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_surrounding_927_);
lean_inc(v_nonOverlapping_926_);
lean_dec(v_st_897_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 1, v___x_896_);
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_nonOverlapping_926_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v___x_896_);
lean_ctor_set(v_reuseFailAlloc_933_, 2, v_surrounding_927_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0(lean_object* v_x_936_, lean_object* v_x_937_){
_start:
{
lean_object* v_pos_938_; lean_object* v_tailPos_939_; lean_object* v_pos_940_; lean_object* v_tailPos_941_; uint8_t v___x_942_; 
v_pos_938_ = lean_ctor_get(v_x_936_, 0);
v_tailPos_939_ = lean_ctor_get(v_x_936_, 1);
v_pos_940_ = lean_ctor_get(v_x_937_, 0);
v_tailPos_941_ = lean_ctor_get(v_x_937_, 1);
v___x_942_ = l_Lean_Lsp_instOrdPosition_ord(v_pos_938_, v_pos_940_);
if (v___x_942_ == 0)
{
uint8_t v___x_943_; 
v___x_943_ = 1;
return v___x_943_;
}
else
{
uint8_t v___x_944_; 
v___x_944_ = l_Lean_Lsp_instBEqPosition_beq(v_pos_938_, v_pos_940_);
if (v___x_944_ == 0)
{
return v___x_944_;
}
else
{
uint8_t v___x_945_; 
v___x_945_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_939_, v_tailPos_941_);
if (v___x_945_ == 2)
{
uint8_t v___x_946_; 
v___x_946_ = 0;
return v___x_946_;
}
else
{
return v___x_944_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0___boxed(lean_object* v_x_947_, lean_object* v_x_948_){
_start:
{
uint8_t v_res_949_; lean_object* v_r_950_; 
v_res_949_ = l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0(v_x_947_, v_x_948_);
lean_dec_ref(v_x_948_);
lean_dec_ref(v_x_947_);
v_r_950_ = lean_box(v_res_949_);
return v_r_950_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg(lean_object* v_as_x27_951_, lean_object* v_b_952_){
_start:
{
if (lean_obj_tag(v_as_x27_951_) == 0)
{
return v_b_952_;
}
else
{
lean_object* v_head_953_; lean_object* v_tail_954_; lean_object* v___x_955_; 
v_head_953_ = lean_ctor_get(v_as_x27_951_, 0);
v_tail_954_ = lean_ctor_get(v_as_x27_951_, 1);
lean_inc(v_head_953_);
v___x_955_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_token(v_b_952_, v_head_953_);
v_as_x27_951_ = v_tail_954_;
v_b_952_ = v___x_955_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg___boxed(lean_object* v_as_x27_957_, lean_object* v_b_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg(v_as_x27_957_, v_b_958_);
lean_dec(v_as_x27_957_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleOverlappingSemanticTokens(lean_object* v_tokens_961_){
_start:
{
lean_object* v___f_962_; lean_object* v_count_963_; lean_object* v___x_964_; lean_object* v_tokens_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v_st_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v_nonOverlapping_976_; 
v___f_962_ = ((lean_object*)(l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___closed__0));
v_count_963_ = lean_array_get_size(v_tokens_961_);
v___x_964_ = lean_array_to_list(v_tokens_961_);
v_tokens_965_ = l_List_mergeSort___redArg(v___x_964_, v___f_962_);
v___x_966_ = lean_unsigned_to_nat(11u);
v___x_967_ = lean_nat_mul(v_count_963_, v___x_966_);
v___x_968_ = lean_unsigned_to_nat(10u);
v___x_969_ = lean_nat_div(v___x_967_, v___x_968_);
lean_dec(v___x_967_);
v___x_970_ = lean_mk_empty_array_with_capacity(v___x_969_);
lean_dec(v___x_969_);
v___x_971_ = lean_box(0);
v___x_972_ = lean_box(0);
v_st_973_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_st_973_, 0, v___x_970_);
lean_ctor_set(v_st_973_, 1, v___x_971_);
lean_ctor_set(v_st_973_, 2, v___x_972_);
v___x_974_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg(v_tokens_965_, v_st_973_);
lean_dec(v_tokens_965_);
v___x_975_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(v___x_971_, v___x_974_);
v_nonOverlapping_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc_ref(v_nonOverlapping_976_);
lean_dec_ref(v___x_975_);
return v_nonOverlapping_976_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0(lean_object* v_as_977_, lean_object* v_as_x27_978_, lean_object* v_b_979_, lean_object* v_a_980_){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg(v_as_x27_978_, v_b_979_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___boxed(lean_object* v_as_982_, lean_object* v_as_x27_983_, lean_object* v_b_984_, lean_object* v_a_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0(v_as_982_, v_as_x27_983_, v_b_984_, v_a_985_);
lean_dec(v_as_x27_983_);
lean_dec(v_as_982_);
return v_res_986_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(uint8_t v___x_987_, lean_object* v_x_988_, lean_object* v_x_989_){
_start:
{
lean_object* v_pos_990_; lean_object* v_tailPos_991_; lean_object* v_pos_992_; lean_object* v_tailPos_993_; uint8_t v___x_994_; 
v_pos_990_ = lean_ctor_get(v_x_988_, 0);
v_tailPos_991_ = lean_ctor_get(v_x_988_, 1);
v_pos_992_ = lean_ctor_get(v_x_989_, 0);
v_tailPos_993_ = lean_ctor_get(v_x_989_, 1);
v___x_994_ = l_Lean_Lsp_instOrdPosition_ord(v_pos_990_, v_pos_992_);
if (v___x_994_ == 0)
{
return v___x_987_;
}
else
{
uint8_t v___x_995_; 
v___x_995_ = l_Lean_Lsp_instBEqPosition_beq(v_pos_990_, v_pos_992_);
if (v___x_995_ == 0)
{
return v___x_995_;
}
else
{
uint8_t v___x_996_; 
v___x_996_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_991_, v_tailPos_993_);
if (v___x_996_ == 2)
{
uint8_t v___x_997_; 
v___x_997_ = 0;
return v___x_997_;
}
else
{
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0___boxed(lean_object* v___x_998_, lean_object* v_x_999_, lean_object* v_x_1000_){
_start:
{
uint8_t v___x_1131__boxed_1001_; uint8_t v_res_1002_; lean_object* v_r_1003_; 
v___x_1131__boxed_1001_ = lean_unbox(v___x_998_);
v_res_1002_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(v___x_1131__boxed_1001_, v_x_999_, v_x_1000_);
lean_dec_ref(v_x_1000_);
lean_dec_ref(v_x_999_);
v_r_1003_ = lean_box(v_res_1002_);
return v_r_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg(lean_object* v_hi_1004_, lean_object* v_pivot_1005_, lean_object* v_as_1006_, lean_object* v_i_1007_, lean_object* v_k_1008_){
_start:
{
uint8_t v___y_1016_; uint8_t v___x_1020_; 
v___x_1020_ = lean_nat_dec_lt(v_k_1008_, v_hi_1004_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
lean_dec(v_k_1008_);
v___x_1021_ = lean_array_fswap(v_as_1006_, v_i_1007_, v_hi_1004_);
v___x_1022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1022_, 0, v_i_1007_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
return v___x_1022_;
}
else
{
lean_object* v___x_1023_; lean_object* v_pos_1024_; lean_object* v_tailPos_1025_; lean_object* v_pos_1026_; lean_object* v_tailPos_1027_; uint8_t v___y_1029_; uint8_t v___x_1032_; 
v___x_1023_ = lean_array_fget_borrowed(v_as_1006_, v_k_1008_);
v_pos_1024_ = lean_ctor_get(v___x_1023_, 0);
v_tailPos_1025_ = lean_ctor_get(v___x_1023_, 1);
v_pos_1026_ = lean_ctor_get(v_pivot_1005_, 0);
v_tailPos_1027_ = lean_ctor_get(v_pivot_1005_, 1);
v___x_1032_ = l_Lean_Lsp_instOrdPosition_ord(v_pos_1024_, v_pos_1026_);
if (v___x_1032_ == 0)
{
if (v___x_1020_ == 0)
{
v___y_1029_ = v___x_1020_;
goto v___jp_1028_;
}
else
{
goto v___jp_1009_;
}
}
else
{
uint8_t v___x_1033_; 
v___x_1033_ = 0;
v___y_1029_ = v___x_1033_;
goto v___jp_1028_;
}
v___jp_1028_:
{
uint8_t v___x_1030_; 
v___x_1030_ = l_Lean_Lsp_instBEqPosition_beq(v_pos_1024_, v_pos_1026_);
if (v___x_1030_ == 0)
{
v___y_1016_ = v___x_1030_;
goto v___jp_1015_;
}
else
{
uint8_t v___x_1031_; 
v___x_1031_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_1025_, v_tailPos_1027_);
if (v___x_1031_ == 2)
{
v___y_1016_ = v___y_1029_;
goto v___jp_1015_;
}
else
{
v___y_1016_ = v___x_1030_;
goto v___jp_1015_;
}
}
}
}
v___jp_1009_:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1010_ = lean_array_fswap(v_as_1006_, v_i_1007_, v_k_1008_);
v___x_1011_ = lean_unsigned_to_nat(1u);
v___x_1012_ = lean_nat_add(v_i_1007_, v___x_1011_);
lean_dec(v_i_1007_);
v___x_1013_ = lean_nat_add(v_k_1008_, v___x_1011_);
lean_dec(v_k_1008_);
v_as_1006_ = v___x_1010_;
v_i_1007_ = v___x_1012_;
v_k_1008_ = v___x_1013_;
goto _start;
}
v___jp_1015_:
{
if (v___y_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = lean_unsigned_to_nat(1u);
v___x_1018_ = lean_nat_add(v_k_1008_, v___x_1017_);
lean_dec(v_k_1008_);
v_k_1008_ = v___x_1018_;
goto _start;
}
else
{
goto v___jp_1009_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg___boxed(lean_object* v_hi_1034_, lean_object* v_pivot_1035_, lean_object* v_as_1036_, lean_object* v_i_1037_, lean_object* v_k_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg(v_hi_1034_, v_pivot_1035_, v_as_1036_, v_i_1037_, v_k_1038_);
lean_dec_ref(v_pivot_1035_);
lean_dec(v_hi_1034_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(lean_object* v_n_1040_, lean_object* v_as_1041_, lean_object* v_lo_1042_, lean_object* v_hi_1043_){
_start:
{
lean_object* v___y_1045_; uint8_t v___x_1055_; 
v___x_1055_ = lean_nat_dec_lt(v_lo_1042_, v_hi_1043_);
if (v___x_1055_ == 0)
{
lean_dec(v_lo_1042_);
return v_as_1041_;
}
else
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v_mid_1058_; lean_object* v___y_1060_; lean_object* v___y_1066_; lean_object* v___x_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v___x_1056_ = lean_nat_add(v_lo_1042_, v_hi_1043_);
v___x_1057_ = lean_unsigned_to_nat(1u);
v_mid_1058_ = lean_nat_shiftr(v___x_1056_, v___x_1057_);
lean_dec(v___x_1056_);
v___x_1071_ = lean_array_fget_borrowed(v_as_1041_, v_mid_1058_);
v___x_1072_ = lean_array_fget_borrowed(v_as_1041_, v_lo_1042_);
v___x_1073_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(v___x_1055_, v___x_1071_, v___x_1072_);
if (v___x_1073_ == 0)
{
v___y_1066_ = v_as_1041_;
goto v___jp_1065_;
}
else
{
lean_object* v___x_1074_; 
v___x_1074_ = lean_array_fswap(v_as_1041_, v_lo_1042_, v_mid_1058_);
v___y_1066_ = v___x_1074_;
goto v___jp_1065_;
}
v___jp_1059_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1061_ = lean_array_fget_borrowed(v___y_1060_, v_mid_1058_);
v___x_1062_ = lean_array_fget_borrowed(v___y_1060_, v_hi_1043_);
v___x_1063_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(v___x_1055_, v___x_1061_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_dec(v_mid_1058_);
v___y_1045_ = v___y_1060_;
goto v___jp_1044_;
}
else
{
lean_object* v___x_1064_; 
v___x_1064_ = lean_array_fswap(v___y_1060_, v_mid_1058_, v_hi_1043_);
lean_dec(v_mid_1058_);
v___y_1045_ = v___x_1064_;
goto v___jp_1044_;
}
}
v___jp_1065_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; uint8_t v___x_1069_; 
v___x_1067_ = lean_array_fget_borrowed(v___y_1066_, v_hi_1043_);
v___x_1068_ = lean_array_fget_borrowed(v___y_1066_, v_lo_1042_);
v___x_1069_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(v___x_1055_, v___x_1067_, v___x_1068_);
if (v___x_1069_ == 0)
{
v___y_1060_ = v___y_1066_;
goto v___jp_1059_;
}
else
{
lean_object* v___x_1070_; 
v___x_1070_ = lean_array_fswap(v___y_1066_, v_lo_1042_, v_hi_1043_);
v___y_1060_ = v___x_1070_;
goto v___jp_1059_;
}
}
}
v___jp_1044_:
{
lean_object* v_pivot_1046_; lean_object* v___x_1047_; lean_object* v_fst_1048_; lean_object* v_snd_1049_; uint8_t v___x_1050_; 
v_pivot_1046_ = lean_array_fget(v___y_1045_, v_hi_1043_);
lean_inc_n(v_lo_1042_, 2);
v___x_1047_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg(v_hi_1043_, v_pivot_1046_, v___y_1045_, v_lo_1042_, v_lo_1042_);
lean_dec(v_pivot_1046_);
v_fst_1048_ = lean_ctor_get(v___x_1047_, 0);
lean_inc(v_fst_1048_);
v_snd_1049_ = lean_ctor_get(v___x_1047_, 1);
lean_inc(v_snd_1049_);
lean_dec_ref(v___x_1047_);
v___x_1050_ = lean_nat_dec_le(v_hi_1043_, v_fst_1048_);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1051_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(v_n_1040_, v_snd_1049_, v_lo_1042_, v_fst_1048_);
v___x_1052_ = lean_unsigned_to_nat(1u);
v___x_1053_ = lean_nat_add(v_fst_1048_, v___x_1052_);
lean_dec(v_fst_1048_);
v_as_1041_ = v___x_1051_;
v_lo_1042_ = v___x_1053_;
goto _start;
}
else
{
lean_dec(v_fst_1048_);
lean_dec(v_lo_1042_);
return v_snd_1049_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___boxed(lean_object* v_n_1075_, lean_object* v_as_1076_, lean_object* v_lo_1077_, lean_object* v_hi_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(v_n_1075_, v_as_1076_, v_lo_1077_, v_hi_1078_);
lean_dec(v_hi_1078_);
lean_dec(v_n_1075_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0(lean_object* v_as_1080_, size_t v_sz_1081_, size_t v_i_1082_, lean_object* v_b_1083_){
_start:
{
uint8_t v___x_1084_; 
v___x_1084_ = lean_usize_dec_lt(v_i_1082_, v_sz_1081_);
if (v___x_1084_ == 0)
{
return v_b_1083_;
}
else
{
lean_object* v_a_1085_; lean_object* v_pos_1086_; lean_object* v_snd_1087_; lean_object* v_tailPos_1088_; uint8_t v_type_1089_; lean_object* v_fst_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1121_; 
v_a_1085_ = lean_array_uget_borrowed(v_as_1080_, v_i_1082_);
v_pos_1086_ = lean_ctor_get(v_a_1085_, 0);
v_snd_1087_ = lean_ctor_get(v_b_1083_, 1);
lean_inc(v_snd_1087_);
v_tailPos_1088_ = lean_ctor_get(v_a_1085_, 1);
v_type_1089_ = lean_ctor_get_uint8(v_a_1085_, sizeof(void*)*3);
v_fst_1090_ = lean_ctor_get(v_b_1083_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_b_1083_);
if (v_isSharedCheck_1121_ == 0)
{
lean_object* v_unused_1122_; 
v_unused_1122_ = lean_ctor_get(v_b_1083_, 1);
lean_dec(v_unused_1122_);
v___x_1092_ = v_b_1083_;
v_isShared_1093_ = v_isSharedCheck_1121_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_fst_1090_);
lean_dec(v_b_1083_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1121_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v_line_1094_; lean_object* v_character_1095_; lean_object* v_line_1096_; lean_object* v_character_1097_; lean_object* v_tokenModifiers_1098_; lean_object* v___x_1099_; lean_object* v___y_1101_; uint8_t v___x_1120_; 
v_line_1094_ = lean_ctor_get(v_pos_1086_, 0);
v_character_1095_ = lean_ctor_get(v_pos_1086_, 1);
v_line_1096_ = lean_ctor_get(v_snd_1087_, 0);
lean_inc(v_line_1096_);
v_character_1097_ = lean_ctor_get(v_snd_1087_, 1);
lean_inc(v_character_1097_);
lean_dec(v_snd_1087_);
v_tokenModifiers_1098_ = lean_unsigned_to_nat(0u);
v___x_1099_ = lean_nat_sub(v_line_1094_, v_line_1096_);
v___x_1120_ = lean_nat_dec_eq(v_line_1094_, v_line_1096_);
lean_dec(v_line_1096_);
if (v___x_1120_ == 0)
{
lean_dec(v_character_1097_);
v___y_1101_ = v_tokenModifiers_1098_;
goto v___jp_1100_;
}
else
{
v___y_1101_ = v_character_1097_;
goto v___jp_1100_;
}
v___jp_1100_:
{
lean_object* v_character_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1115_; 
v_character_1102_ = lean_ctor_get(v_tailPos_1088_, 1);
v___x_1103_ = lean_nat_sub(v_character_1095_, v___y_1101_);
lean_dec(v___y_1101_);
v___x_1104_ = lean_nat_sub(v_character_1102_, v_character_1095_);
v___x_1105_ = l_Lean_Lsp_SemanticTokenType_toNat(v_type_1089_);
v___x_1106_ = lean_unsigned_to_nat(5u);
v___x_1107_ = lean_mk_empty_array_with_capacity(v___x_1106_);
v___x_1108_ = lean_array_push(v___x_1107_, v___x_1099_);
v___x_1109_ = lean_array_push(v___x_1108_, v___x_1103_);
v___x_1110_ = lean_array_push(v___x_1109_, v___x_1104_);
v___x_1111_ = lean_array_push(v___x_1110_, v___x_1105_);
v___x_1112_ = lean_array_push(v___x_1111_, v_tokenModifiers_1098_);
v___x_1113_ = l_Array_append___redArg(v_fst_1090_, v___x_1112_);
lean_dec_ref(v___x_1112_);
lean_inc_ref(v_pos_1086_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 1, v_pos_1086_);
lean_ctor_set(v___x_1092_, 0, v___x_1113_);
v___x_1115_ = v___x_1092_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1113_);
lean_ctor_set(v_reuseFailAlloc_1119_, 1, v_pos_1086_);
v___x_1115_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
size_t v___x_1116_; size_t v___x_1117_; 
v___x_1116_ = ((size_t)1ULL);
v___x_1117_ = lean_usize_add(v_i_1082_, v___x_1116_);
v_i_1082_ = v___x_1117_;
v_b_1083_ = v___x_1115_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0___boxed(lean_object* v_as_1123_, lean_object* v_sz_1124_, lean_object* v_i_1125_, lean_object* v_b_1126_){
_start:
{
size_t v_sz_boxed_1127_; size_t v_i_boxed_1128_; lean_object* v_res_1129_; 
v_sz_boxed_1127_ = lean_unbox_usize(v_sz_1124_);
lean_dec(v_sz_1124_);
v_i_boxed_1128_ = lean_unbox_usize(v_i_1125_);
lean_dec(v_i_1125_);
v_res_1129_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0(v_as_1123_, v_sz_boxed_1127_, v_i_boxed_1128_, v_b_1126_);
lean_dec_ref(v_as_1123_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens(lean_object* v_tokens_1132_){
_start:
{
lean_object* v_tokenModifiers_1133_; lean_object* v___y_1135_; lean_object* v___x_1155_; lean_object* v___y_1157_; lean_object* v___y_1158_; uint8_t v___x_1160_; 
v_tokenModifiers_1133_ = lean_unsigned_to_nat(0u);
v___x_1155_ = lean_array_get_size(v_tokens_1132_);
v___x_1160_ = lean_nat_dec_eq(v___x_1155_, v_tokenModifiers_1133_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___y_1164_; uint8_t v___x_1166_; 
v___x_1161_ = lean_unsigned_to_nat(1u);
v___x_1162_ = lean_nat_sub(v___x_1155_, v___x_1161_);
v___x_1166_ = lean_nat_dec_le(v_tokenModifiers_1133_, v___x_1162_);
if (v___x_1166_ == 0)
{
lean_inc(v___x_1162_);
v___y_1164_ = v___x_1162_;
goto v___jp_1163_;
}
else
{
v___y_1164_ = v_tokenModifiers_1133_;
goto v___jp_1163_;
}
v___jp_1163_:
{
uint8_t v___x_1165_; 
v___x_1165_ = lean_nat_dec_le(v___y_1164_, v___x_1162_);
if (v___x_1165_ == 0)
{
lean_dec(v___x_1162_);
lean_inc(v___y_1164_);
v___y_1157_ = v___y_1164_;
v___y_1158_ = v___y_1164_;
goto v___jp_1156_;
}
else
{
v___y_1157_ = v___y_1164_;
v___y_1158_ = v___x_1162_;
goto v___jp_1156_;
}
}
}
else
{
v___y_1135_ = v_tokens_1132_;
goto v___jp_1134_;
}
v___jp_1134_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v_data_1139_; lean_object* v_lastPos_1140_; lean_object* v___x_1141_; size_t v_sz_1142_; size_t v___x_1143_; lean_object* v___x_1144_; lean_object* v_fst_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1153_; 
v___x_1136_ = lean_unsigned_to_nat(5u);
v___x_1137_ = lean_array_get_size(v___y_1135_);
v___x_1138_ = lean_nat_mul(v___x_1136_, v___x_1137_);
v_data_1139_ = lean_mk_empty_array_with_capacity(v___x_1138_);
lean_dec(v___x_1138_);
v_lastPos_1140_ = ((lean_object*)(l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens___closed__0));
v___x_1141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1141_, 0, v_data_1139_);
lean_ctor_set(v___x_1141_, 1, v_lastPos_1140_);
v_sz_1142_ = lean_array_size(v___y_1135_);
v___x_1143_ = ((size_t)0ULL);
v___x_1144_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0(v___y_1135_, v_sz_1142_, v___x_1143_, v___x_1141_);
lean_dec_ref(v___y_1135_);
v_fst_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1153_ == 0)
{
lean_object* v_unused_1154_; 
v_unused_1154_ = lean_ctor_get(v___x_1144_, 1);
lean_dec(v_unused_1154_);
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1153_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_fst_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1153_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1149_; lean_object* v___x_1151_; 
v___x_1149_ = lean_box(0);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 1, v_fst_1145_);
lean_ctor_set(v___x_1147_, 0, v___x_1149_);
v___x_1151_ = v___x_1147_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v___x_1149_);
lean_ctor_set(v_reuseFailAlloc_1152_, 1, v_fst_1145_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
v___jp_1156_:
{
lean_object* v___x_1159_; 
v___x_1159_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(v___x_1155_, v_tokens_1132_, v___y_1157_, v___y_1158_);
lean_dec(v___y_1158_);
v___y_1135_ = v___x_1159_;
goto v___jp_1134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1(lean_object* v_n_1167_, lean_object* v_as_1168_, lean_object* v_lo_1169_, lean_object* v_hi_1170_, lean_object* v_w_1171_, lean_object* v_hlo_1172_, lean_object* v_hhi_1173_){
_start:
{
lean_object* v___x_1174_; 
v___x_1174_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(v_n_1167_, v_as_1168_, v_lo_1169_, v_hi_1170_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___boxed(lean_object* v_n_1175_, lean_object* v_as_1176_, lean_object* v_lo_1177_, lean_object* v_hi_1178_, lean_object* v_w_1179_, lean_object* v_hlo_1180_, lean_object* v_hhi_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1(v_n_1175_, v_as_1176_, v_lo_1177_, v_hi_1178_, v_w_1179_, v_hlo_1180_, v_hhi_1181_);
lean_dec(v_hi_1178_);
lean_dec(v_n_1175_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1(lean_object* v_n_1183_, lean_object* v_lo_1184_, lean_object* v_hi_1185_, lean_object* v_hhi_1186_, lean_object* v_pivot_1187_, lean_object* v_as_1188_, lean_object* v_i_1189_, lean_object* v_k_1190_, lean_object* v_ilo_1191_, lean_object* v_ik_1192_, lean_object* v_w_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg(v_hi_1185_, v_pivot_1187_, v_as_1188_, v_i_1189_, v_k_1190_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___boxed(lean_object* v_n_1195_, lean_object* v_lo_1196_, lean_object* v_hi_1197_, lean_object* v_hhi_1198_, lean_object* v_pivot_1199_, lean_object* v_as_1200_, lean_object* v_i_1201_, lean_object* v_k_1202_, lean_object* v_ilo_1203_, lean_object* v_ik_1204_, lean_object* v_w_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1(v_n_1195_, v_lo_1196_, v_hi_1197_, v_hhi_1198_, v_pivot_1199_, v_as_1200_, v_i_1201_, v_k_1202_, v_ilo_1203_, v_ik_1204_, v_w_1205_);
lean_dec_ref(v_pivot_1199_);
lean_dec(v_hi_1197_);
lean_dec(v_lo_1196_);
lean_dec(v_n_1195_);
return v_res_1206_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_isVersoKind(lean_object* v_k_1213_){
_start:
{
lean_object* v___x_1214_; uint8_t v___x_1215_; 
v___x_1214_ = ((lean_object*)(l_Lean_Server_FileWorker_isVersoKind___closed__2));
v___x_1215_ = l_Lean_Name_isPrefixOf(v___x_1214_, v_k_1213_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_isVersoKind___boxed(lean_object* v_k_1216_){
_start:
{
uint8_t v_res_1217_; lean_object* v_r_1218_; 
v_res_1217_ = l_Lean_Server_FileWorker_isVersoKind(v_k_1216_);
lean_dec(v_k_1216_);
v_r_1218_ = lean_box(v_res_1217_);
return v_r_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0___redArg(lean_object* v___x_1219_, lean_object* v_stop_1220_, lean_object* v_text_1221_, lean_object* v_range_1222_, lean_object* v_b_1223_, lean_object* v_i_1224_){
_start:
{
lean_object* v_stop_1225_; lean_object* v_step_1226_; uint8_t v___x_1227_; 
v_stop_1225_ = lean_ctor_get(v_range_1222_, 1);
v_step_1226_ = lean_ctor_get(v_range_1222_, 2);
v___x_1227_ = lean_nat_dec_lt(v_i_1224_, v_stop_1225_);
if (v___x_1227_ == 0)
{
lean_dec(v_i_1224_);
lean_dec(v_stop_1220_);
return v_b_1223_;
}
else
{
lean_object* v_fst_1228_; lean_object* v_snd_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1253_; 
v_fst_1228_ = lean_ctor_get(v_b_1223_, 0);
v_snd_1229_ = lean_ctor_get(v_b_1223_, 1);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_b_1223_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1231_ = v_b_1223_;
v_isShared_1232_ = v_isSharedCheck_1253_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_snd_1229_);
lean_inc(v_fst_1228_);
lean_dec(v_b_1223_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1253_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v_pos_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; 
v_pos_1233_ = lean_array_fget_borrowed(v___x_1219_, v_i_1224_);
v___x_1234_ = lean_unsigned_to_nat(1u);
v___x_1235_ = lean_nat_add(v_stop_1220_, v___x_1234_);
v___x_1236_ = lean_nat_dec_le(v___x_1235_, v_pos_1233_);
lean_dec(v___x_1235_);
if (v___x_1236_ == 0)
{
lean_object* v_source_1237_; lean_object* v_l_x27_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v_stxs_1241_; lean_object* v___x_1243_; 
v_source_1237_ = lean_ctor_get(v_text_1221_, 0);
v_l_x27_1238_ = lean_string_utf8_prev(v_source_1237_, v_pos_1233_);
v___x_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1239_, 0, v_fst_1228_);
lean_ctor_set(v___x_1239_, 1, v_l_x27_1238_);
v___x_1240_ = l_Lean_Syntax_ofRange(v___x_1239_, v___x_1227_);
v_stxs_1241_ = lean_array_push(v_snd_1229_, v___x_1240_);
lean_inc(v_pos_1233_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 1, v_stxs_1241_);
lean_ctor_set(v___x_1231_, 0, v_pos_1233_);
v___x_1243_ = v___x_1231_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_pos_1233_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v_stxs_1241_);
v___x_1243_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
lean_object* v___x_1244_; 
v___x_1244_ = lean_nat_add(v_i_1224_, v_step_1226_);
lean_dec(v_i_1224_);
v_b_1223_ = v___x_1243_;
v_i_1224_ = v___x_1244_;
goto _start;
}
}
else
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v_stxs_1249_; lean_object* v___x_1251_; 
lean_dec(v_i_1224_);
lean_inc(v_fst_1228_);
v___x_1247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1247_, 0, v_fst_1228_);
lean_ctor_set(v___x_1247_, 1, v_stop_1220_);
v___x_1248_ = l_Lean_Syntax_ofRange(v___x_1247_, v___x_1236_);
v_stxs_1249_ = lean_array_push(v_snd_1229_, v___x_1248_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 1, v_stxs_1249_);
v___x_1251_ = v___x_1231_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_fst_1228_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_stxs_1249_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0___redArg___boxed(lean_object* v___x_1254_, lean_object* v_stop_1255_, lean_object* v_text_1256_, lean_object* v_range_1257_, lean_object* v_b_1258_, lean_object* v_i_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0___redArg(v___x_1254_, v_stop_1255_, v_text_1256_, v_range_1257_, v_b_1258_, v_i_1259_);
lean_dec_ref(v_range_1257_);
lean_dec_ref(v_text_1256_);
lean_dec_ref(v___x_1254_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr(lean_object* v_text_1263_, lean_object* v_stx_1264_){
_start:
{
uint8_t v___x_1265_; lean_object* v___x_1266_; 
v___x_1265_ = 0;
v___x_1266_ = l_Lean_Syntax_getRange_x3f(v_stx_1264_, v___x_1265_);
if (lean_obj_tag(v___x_1266_) == 1)
{
lean_object* v_val_1267_; lean_object* v_start_1268_; lean_object* v_stop_1269_; lean_object* v___x_1270_; lean_object* v_line_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1285_; 
v_val_1267_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_val_1267_);
lean_dec_ref_known(v___x_1266_, 1);
v_start_1268_ = lean_ctor_get(v_val_1267_, 0);
lean_inc(v_start_1268_);
v_stop_1269_ = lean_ctor_get(v_val_1267_, 1);
lean_inc(v_stop_1269_);
lean_dec(v_val_1267_);
lean_inc_ref(v_text_1263_);
v___x_1270_ = l_Lean_FileMap_toPosition(v_text_1263_, v_start_1268_);
v_line_1271_ = lean_ctor_get(v___x_1270_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1285_ == 0)
{
lean_object* v_unused_1286_; 
v_unused_1286_ = lean_ctor_get(v___x_1270_, 1);
lean_dec(v_unused_1286_);
v___x_1273_ = v___x_1270_;
v_isShared_1274_ = v_isSharedCheck_1285_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_line_1271_);
lean_dec(v___x_1270_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1285_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v_positions_1275_; lean_object* v_stxs_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1281_; 
v_positions_1275_ = lean_ctor_get(v_text_1263_, 1);
lean_inc_ref(v_positions_1275_);
v_stxs_1276_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr___closed__0));
v___x_1277_ = lean_array_get_size(v_positions_1275_);
v___x_1278_ = lean_unsigned_to_nat(1u);
lean_inc(v_line_1271_);
v___x_1279_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1279_, 0, v_line_1271_);
lean_ctor_set(v___x_1279_, 1, v___x_1277_);
lean_ctor_set(v___x_1279_, 2, v___x_1278_);
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 1, v_stxs_1276_);
lean_ctor_set(v___x_1273_, 0, v_start_1268_);
v___x_1281_ = v___x_1273_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_start_1268_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v_stxs_1276_);
v___x_1281_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
lean_object* v___x_1282_; lean_object* v_snd_1283_; 
v___x_1282_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0___redArg(v_positions_1275_, v_stop_1269_, v_text_1263_, v___x_1279_, v___x_1281_, v_line_1271_);
lean_dec_ref_known(v___x_1279_, 3);
lean_dec_ref(v_text_1263_);
lean_dec_ref(v_positions_1275_);
v_snd_1283_ = lean_ctor_get(v___x_1282_, 1);
lean_inc(v_snd_1283_);
lean_dec_ref(v___x_1282_);
return v_snd_1283_;
}
}
}
else
{
lean_object* v___x_1287_; 
lean_dec(v___x_1266_);
lean_dec_ref(v_text_1263_);
v___x_1287_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr___closed__0));
return v___x_1287_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr___boxed(lean_object* v_text_1288_, lean_object* v_stx_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr(v_text_1288_, v_stx_1289_);
lean_dec(v_stx_1289_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0(lean_object* v___x_1291_, lean_object* v_stop_1292_, lean_object* v_text_1293_, lean_object* v_range_1294_, lean_object* v_b_1295_, lean_object* v_i_1296_, lean_object* v_hs_1297_, lean_object* v_hl_1298_){
_start:
{
lean_object* v___x_1299_; 
v___x_1299_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0___redArg(v___x_1291_, v_stop_1292_, v_text_1293_, v_range_1294_, v_b_1295_, v_i_1296_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0___boxed(lean_object* v___x_1300_, lean_object* v_stop_1301_, lean_object* v_text_1302_, lean_object* v_range_1303_, lean_object* v_b_1304_, lean_object* v_i_1305_, lean_object* v_hs_1306_, lean_object* v_hl_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr_spec__0(v___x_1300_, v_stop_1301_, v_text_1302_, v_range_1303_, v_b_1304_, v_i_1305_, v_hs_1306_, v_hl_1307_);
lean_dec_ref(v_range_1303_);
lean_dec_ref(v_text_1302_);
lean_dec_ref(v___x_1300_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(lean_object* v_tk_1309_, uint8_t v_k_1310_, lean_object* v_a_1311_){
_start:
{
lean_object* v___y_1313_; 
if (v_k_1310_ == 18)
{
lean_object* v___x_1318_; 
v___x_1318_ = lean_unsigned_to_nat(3u);
v___y_1313_ = v___x_1318_;
goto v___jp_1312_;
}
else
{
lean_object* v___x_1319_; 
v___x_1319_ = lean_unsigned_to_nat(5u);
v___y_1313_ = v___x_1319_;
goto v___jp_1312_;
}
v___jp_1312_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1314_ = lean_box(0);
v___x_1315_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1315_, 0, v_tk_1309_);
lean_ctor_set(v___x_1315_, 1, v___y_1313_);
lean_ctor_set_uint8(v___x_1315_, sizeof(void*)*2, v_k_1310_);
v___x_1316_ = lean_array_push(v_a_1311_, v___x_1315_);
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1314_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
return v___x_1317_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok___boxed(lean_object* v_tk_1320_, lean_object* v_k_1321_, lean_object* v_a_1322_){
_start:
{
uint8_t v_k_boxed_1323_; lean_object* v_res_1324_; 
v_k_boxed_1323_ = lean_unbox(v_k_1321_);
v_res_1324_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk_1320_, v_k_boxed_1323_, v_a_1322_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__1(lean_object* v_as_1325_, size_t v_sz_1326_, size_t v_i_1327_, lean_object* v_b_1328_, lean_object* v___y_1329_){
_start:
{
uint8_t v___x_1330_; 
v___x_1330_ = lean_usize_dec_lt(v_i_1327_, v_sz_1326_);
if (v___x_1330_ == 0)
{
lean_object* v___x_1331_; 
v___x_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1331_, 0, v_b_1328_);
lean_ctor_set(v___x_1331_, 1, v___y_1329_);
return v___x_1331_;
}
else
{
lean_object* v_a_1332_; uint8_t v___x_1333_; lean_object* v___x_1334_; lean_object* v_snd_1335_; lean_object* v___x_1336_; size_t v___x_1337_; size_t v___x_1338_; 
v_a_1332_ = lean_array_uget_borrowed(v_as_1325_, v_i_1327_);
v___x_1333_ = 18;
lean_inc(v_a_1332_);
v___x_1334_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_a_1332_, v___x_1333_, v___y_1329_);
v_snd_1335_ = lean_ctor_get(v___x_1334_, 1);
lean_inc(v_snd_1335_);
lean_dec_ref(v___x_1334_);
v___x_1336_ = lean_box(0);
v___x_1337_ = ((size_t)1ULL);
v___x_1338_ = lean_usize_add(v_i_1327_, v___x_1337_);
v_i_1327_ = v___x_1338_;
v_b_1328_ = v___x_1336_;
v___y_1329_ = v_snd_1335_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__1___boxed(lean_object* v_as_1340_, lean_object* v_sz_1341_, lean_object* v_i_1342_, lean_object* v_b_1343_, lean_object* v___y_1344_){
_start:
{
size_t v_sz_boxed_1345_; size_t v_i_boxed_1346_; lean_object* v_res_1347_; 
v_sz_boxed_1345_ = lean_unbox_usize(v_sz_1341_);
lean_dec(v_sz_1341_);
v_i_boxed_1346_ = lean_unbox_usize(v_i_1342_);
lean_dec(v_i_1342_);
v_res_1347_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__1(v_as_1340_, v_sz_boxed_1345_, v_i_boxed_1346_, v_b_1343_, v___y_1344_);
lean_dec_ref(v_as_1340_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go(lean_object* v_text_1570_, lean_object* v_getTokens_1571_, lean_object* v_stx_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v___x_1592_; uint8_t v___x_1593_; 
v___x_1592_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__1));
lean_inc(v_stx_1572_);
v___x_1593_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1592_);
if (v___x_1593_ == 0)
{
lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1594_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__3));
lean_inc(v_stx_1572_);
v___x_1595_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1594_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; uint8_t v___x_1597_; 
v___x_1596_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__5));
lean_inc(v_stx_1572_);
v___x_1597_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1596_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; uint8_t v___x_1599_; 
v___x_1598_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__7));
lean_inc(v_stx_1572_);
v___x_1599_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1598_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; uint8_t v___x_1601_; 
v___x_1600_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__9));
lean_inc(v_stx_1572_);
v___x_1601_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1600_);
if (v___x_1601_ == 0)
{
lean_object* v___x_1602_; uint8_t v___x_1603_; 
v___x_1602_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__11));
lean_inc(v_stx_1572_);
v___x_1603_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1602_);
if (v___x_1603_ == 0)
{
lean_object* v___x_1604_; uint8_t v___x_1605_; 
v___x_1604_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__13));
lean_inc(v_stx_1572_);
v___x_1605_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1604_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; uint8_t v___x_1607_; 
v___x_1606_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__15));
lean_inc(v_stx_1572_);
v___x_1607_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1606_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; uint8_t v___x_1609_; 
v___x_1608_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__17));
lean_inc(v_stx_1572_);
v___x_1609_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1608_);
if (v___x_1609_ == 0)
{
lean_object* v___x_1610_; uint8_t v___x_1611_; 
v___x_1610_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__19));
lean_inc(v_stx_1572_);
v___x_1611_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1610_);
if (v___x_1611_ == 0)
{
lean_object* v___x_1612_; uint8_t v___x_1613_; 
v___x_1612_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__21));
lean_inc(v_stx_1572_);
v___x_1613_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1612_);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; uint8_t v___x_1615_; 
v___x_1614_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__23));
lean_inc(v_stx_1572_);
v___x_1615_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1614_);
if (v___x_1615_ == 0)
{
lean_object* v___x_1616_; uint8_t v___x_1617_; 
v___x_1616_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__25));
lean_inc(v_stx_1572_);
v___x_1617_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1616_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1618_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__27));
lean_inc(v_stx_1572_);
v___x_1619_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; uint8_t v___x_1621_; 
v___x_1620_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__29));
lean_inc(v_stx_1572_);
v___x_1621_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1620_);
if (v___x_1621_ == 0)
{
lean_object* v___x_1622_; uint8_t v___x_1623_; 
v___x_1622_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__31));
lean_inc(v_stx_1572_);
v___x_1623_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1622_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1624_; uint8_t v___x_1625_; 
v___x_1624_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__33));
lean_inc(v_stx_1572_);
v___x_1625_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1624_);
if (v___x_1625_ == 0)
{
lean_object* v___x_1626_; uint8_t v___x_1627_; 
v___x_1626_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__35));
lean_inc(v_stx_1572_);
v___x_1627_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1626_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1628_; uint8_t v___x_1629_; 
v___x_1628_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__37));
lean_inc(v_stx_1572_);
v___x_1629_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1628_);
if (v___x_1629_ == 0)
{
lean_object* v___x_1630_; uint8_t v___x_1631_; 
v___x_1630_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__39));
lean_inc(v_stx_1572_);
v___x_1631_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1630_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; uint8_t v___x_1633_; 
v___x_1632_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__41));
lean_inc(v_stx_1572_);
v___x_1633_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1632_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1634_; uint8_t v___x_1635_; 
v___x_1634_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__43));
lean_inc(v_stx_1572_);
v___x_1635_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1634_);
if (v___x_1635_ == 0)
{
lean_object* v___x_1636_; uint8_t v___x_1637_; 
v___x_1636_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__45));
lean_inc(v_stx_1572_);
v___x_1637_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1636_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; uint8_t v___x_1639_; 
v___x_1638_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__47));
lean_inc(v_stx_1572_);
v___x_1639_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1638_);
if (v___x_1639_ == 0)
{
lean_object* v___x_1640_; uint8_t v___x_1641_; 
v___x_1640_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__49));
lean_inc(v_stx_1572_);
v___x_1641_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1640_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1642_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__51));
lean_inc(v_stx_1572_);
v___x_1643_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1642_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; uint8_t v___x_1645_; 
v___x_1644_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__53));
lean_inc(v_stx_1572_);
v___x_1645_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1644_);
if (v___x_1645_ == 0)
{
lean_object* v___x_1646_; uint8_t v___x_1647_; 
v___x_1646_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__55));
lean_inc(v_stx_1572_);
v___x_1647_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1646_);
if (v___x_1647_ == 0)
{
lean_object* v___x_1648_; uint8_t v___x_1649_; 
v___x_1648_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__57));
lean_inc(v_stx_1572_);
v___x_1649_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1648_);
if (v___x_1649_ == 0)
{
lean_object* v___x_1650_; uint8_t v___x_1651_; 
v___x_1650_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__59));
lean_inc(v_stx_1572_);
v___x_1651_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1650_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1652_; uint8_t v___x_1653_; 
v___x_1652_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__61));
lean_inc(v_stx_1572_);
v___x_1653_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1652_);
if (v___x_1653_ == 0)
{
lean_object* v___x_1654_; uint8_t v___x_1655_; 
v___x_1654_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__63));
lean_inc(v_stx_1572_);
v___x_1655_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1654_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1656_; uint8_t v___x_1657_; 
v___x_1656_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__65));
lean_inc(v_stx_1572_);
v___x_1657_ = l_Lean_Syntax_isOfKind(v_stx_1572_, v___x_1656_);
if (v___x_1657_ == 0)
{
lean_object* v_k_1658_; lean_object* v___x_1659_; uint8_t v___x_1660_; 
lean_inc(v_stx_1572_);
v_k_1658_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_1659_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_1660_ = lean_name_eq(v_k_1658_, v___x_1659_);
if (v___x_1660_ == 0)
{
lean_object* v___x_1661_; uint8_t v___x_1662_; 
v___x_1661_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_1662_ = lean_name_eq(v_k_1658_, v___x_1661_);
lean_dec(v_k_1658_);
if (v___x_1662_ == 0)
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1663_ = lean_box(0);
v___x_1664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
lean_ctor_set(v___x_1664_, 1, v_a_1573_);
return v___x_1664_;
}
else
{
goto v___jp_1574_;
}
}
else
{
lean_dec(v_k_1658_);
goto v___jp_1574_;
}
}
else
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v_items_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; 
v___x_1665_ = lean_unsigned_to_nat(0u);
v___x_1666_ = lean_unsigned_to_nat(1u);
v___x_1667_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1666_);
lean_dec(v_stx_1572_);
v___x_1668_ = l_Lean_Syntax_getArgs(v___x_1667_);
lean_dec(v___x_1667_);
v_items_1669_ = l_unsafeCast___redArg(v___x_1668_);
lean_dec_ref(v___x_1668_);
v___x_1670_ = l_unsafeCast___redArg(v_items_1669_);
lean_dec(v_items_1669_);
v___x_1671_ = lean_array_get_size(v___x_1670_);
v___x_1672_ = lean_box(0);
v___x_1673_ = lean_nat_dec_lt(v___x_1665_, v___x_1671_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; 
lean_dec(v___x_1670_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1672_);
lean_ctor_set(v___x_1674_, 1, v_a_1573_);
return v___x_1674_;
}
else
{
uint8_t v___x_1675_; 
v___x_1675_ = lean_nat_dec_le(v___x_1671_, v___x_1671_);
if (v___x_1675_ == 0)
{
if (v___x_1673_ == 0)
{
lean_object* v___x_1676_; 
lean_dec(v___x_1670_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1672_);
lean_ctor_set(v___x_1676_, 1, v_a_1573_);
return v___x_1676_;
}
else
{
size_t v___x_1677_; size_t v___x_1678_; lean_object* v___x_1679_; 
v___x_1677_ = ((size_t)0ULL);
v___x_1678_ = lean_usize_of_nat(v___x_1671_);
v___x_1679_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1670_, v___x_1677_, v___x_1678_, v___x_1672_, v_a_1573_);
lean_dec(v___x_1670_);
return v___x_1679_;
}
}
else
{
size_t v___x_1680_; size_t v___x_1681_; lean_object* v___x_1682_; 
v___x_1680_ = ((size_t)0ULL);
v___x_1681_ = lean_usize_of_nat(v___x_1671_);
v___x_1682_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1670_, v___x_1680_, v___x_1681_, v___x_1672_, v_a_1573_);
lean_dec(v___x_1670_);
return v___x_1682_;
}
}
}
}
else
{
lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v_items_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; uint8_t v___x_1691_; 
v___x_1683_ = lean_unsigned_to_nat(0u);
v___x_1684_ = lean_unsigned_to_nat(4u);
v___x_1685_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1684_);
lean_dec(v_stx_1572_);
v___x_1686_ = l_Lean_Syntax_getArgs(v___x_1685_);
lean_dec(v___x_1685_);
v_items_1687_ = l_unsafeCast___redArg(v___x_1686_);
lean_dec_ref(v___x_1686_);
v___x_1688_ = l_unsafeCast___redArg(v_items_1687_);
lean_dec(v_items_1687_);
v___x_1689_ = lean_array_get_size(v___x_1688_);
v___x_1690_ = lean_box(0);
v___x_1691_ = lean_nat_dec_lt(v___x_1683_, v___x_1689_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; 
lean_dec(v___x_1688_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1690_);
lean_ctor_set(v___x_1692_, 1, v_a_1573_);
return v___x_1692_;
}
else
{
uint8_t v___x_1693_; 
v___x_1693_ = lean_nat_dec_le(v___x_1689_, v___x_1689_);
if (v___x_1693_ == 0)
{
if (v___x_1691_ == 0)
{
lean_object* v___x_1694_; 
lean_dec(v___x_1688_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1690_);
lean_ctor_set(v___x_1694_, 1, v_a_1573_);
return v___x_1694_;
}
else
{
size_t v___x_1695_; size_t v___x_1696_; lean_object* v___x_1697_; 
v___x_1695_ = ((size_t)0ULL);
v___x_1696_ = lean_usize_of_nat(v___x_1689_);
v___x_1697_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1688_, v___x_1695_, v___x_1696_, v___x_1690_, v_a_1573_);
lean_dec(v___x_1688_);
return v___x_1697_;
}
}
else
{
size_t v___x_1698_; size_t v___x_1699_; lean_object* v___x_1700_; 
v___x_1698_ = ((size_t)0ULL);
v___x_1699_ = lean_usize_of_nat(v___x_1689_);
v___x_1700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1688_, v___x_1698_, v___x_1699_, v___x_1690_, v_a_1573_);
lean_dec(v___x_1688_);
return v___x_1700_;
}
}
}
}
else
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v_items_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; uint8_t v___x_1709_; 
v___x_1701_ = lean_unsigned_to_nat(0u);
v___x_1702_ = lean_unsigned_to_nat(1u);
v___x_1703_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1702_);
lean_dec(v_stx_1572_);
v___x_1704_ = l_Lean_Syntax_getArgs(v___x_1703_);
lean_dec(v___x_1703_);
v_items_1705_ = l_unsafeCast___redArg(v___x_1704_);
lean_dec_ref(v___x_1704_);
v___x_1706_ = l_unsafeCast___redArg(v_items_1705_);
lean_dec(v_items_1705_);
v___x_1707_ = lean_array_get_size(v___x_1706_);
v___x_1708_ = lean_box(0);
v___x_1709_ = lean_nat_dec_lt(v___x_1701_, v___x_1707_);
if (v___x_1709_ == 0)
{
lean_object* v___x_1710_; 
lean_dec(v___x_1706_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1708_);
lean_ctor_set(v___x_1710_, 1, v_a_1573_);
return v___x_1710_;
}
else
{
uint8_t v___x_1711_; 
v___x_1711_ = lean_nat_dec_le(v___x_1707_, v___x_1707_);
if (v___x_1711_ == 0)
{
if (v___x_1709_ == 0)
{
lean_object* v___x_1712_; 
lean_dec(v___x_1706_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1708_);
lean_ctor_set(v___x_1712_, 1, v_a_1573_);
return v___x_1712_;
}
else
{
size_t v___x_1713_; size_t v___x_1714_; lean_object* v___x_1715_; 
v___x_1713_ = ((size_t)0ULL);
v___x_1714_ = lean_usize_of_nat(v___x_1707_);
v___x_1715_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1706_, v___x_1713_, v___x_1714_, v___x_1708_, v_a_1573_);
lean_dec(v___x_1706_);
return v___x_1715_;
}
}
else
{
size_t v___x_1716_; size_t v___x_1717_; lean_object* v___x_1718_; 
v___x_1716_ = ((size_t)0ULL);
v___x_1717_ = lean_usize_of_nat(v___x_1707_);
v___x_1718_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1706_, v___x_1716_, v___x_1717_, v___x_1708_, v_a_1573_);
lean_dec(v___x_1706_);
return v___x_1718_;
}
}
}
}
else
{
lean_object* v___x_1719_; lean_object* v_tk_1720_; uint8_t v___x_1721_; lean_object* v___x_1722_; lean_object* v_snd_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1748_; 
v___x_1719_ = lean_unsigned_to_nat(0u);
v_tk_1720_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1719_);
v___x_1721_ = 0;
v___x_1722_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk_1720_, v___x_1721_, v_a_1573_);
v_snd_1723_ = lean_ctor_get(v___x_1722_, 1);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1748_ == 0)
{
lean_object* v_unused_1749_; 
v_unused_1749_ = lean_ctor_get(v___x_1722_, 0);
lean_dec(v_unused_1749_);
v___x_1725_ = v___x_1722_;
v_isShared_1726_ = v_isSharedCheck_1748_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_snd_1723_);
lean_dec(v___x_1722_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1748_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v_inls_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1727_ = lean_unsigned_to_nat(4u);
v___x_1728_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1727_);
lean_dec(v_stx_1572_);
v___x_1729_ = l_Lean_Syntax_getArgs(v___x_1728_);
lean_dec(v___x_1728_);
v_inls_1730_ = l_unsafeCast___redArg(v___x_1729_);
lean_dec_ref(v___x_1729_);
v___x_1731_ = l_unsafeCast___redArg(v_inls_1730_);
lean_dec(v_inls_1730_);
v___x_1732_ = lean_array_get_size(v___x_1731_);
v___x_1733_ = lean_box(0);
v___x_1734_ = lean_nat_dec_lt(v___x_1719_, v___x_1732_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1736_; 
lean_dec(v___x_1731_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
if (v_isShared_1726_ == 0)
{
lean_ctor_set(v___x_1725_, 0, v___x_1733_);
v___x_1736_ = v___x_1725_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1733_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v_snd_1723_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
else
{
uint8_t v___x_1738_; 
v___x_1738_ = lean_nat_dec_le(v___x_1732_, v___x_1732_);
if (v___x_1738_ == 0)
{
if (v___x_1734_ == 0)
{
lean_object* v___x_1740_; 
lean_dec(v___x_1731_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
if (v_isShared_1726_ == 0)
{
lean_ctor_set(v___x_1725_, 0, v___x_1733_);
v___x_1740_ = v___x_1725_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v___x_1733_);
lean_ctor_set(v_reuseFailAlloc_1741_, 1, v_snd_1723_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
else
{
size_t v___x_1742_; size_t v___x_1743_; lean_object* v___x_1744_; 
lean_del_object(v___x_1725_);
v___x_1742_ = ((size_t)0ULL);
v___x_1743_ = lean_usize_of_nat(v___x_1732_);
v___x_1744_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1731_, v___x_1742_, v___x_1743_, v___x_1733_, v_snd_1723_);
lean_dec(v___x_1731_);
return v___x_1744_;
}
}
else
{
size_t v___x_1745_; size_t v___x_1746_; lean_object* v___x_1747_; 
lean_del_object(v___x_1725_);
v___x_1745_ = ((size_t)0ULL);
v___x_1746_ = lean_usize_of_nat(v___x_1732_);
v___x_1747_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1731_, v___x_1745_, v___x_1746_, v___x_1733_, v_snd_1723_);
lean_dec(v___x_1731_);
return v___x_1747_;
}
}
}
}
}
else
{
lean_object* v___x_1750_; lean_object* v_tk1_1751_; uint8_t v___x_1752_; lean_object* v___x_1753_; lean_object* v_snd_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; uint8_t v___x_1757_; lean_object* v___x_1758_; lean_object* v_snd_1759_; lean_object* v___x_1760_; lean_object* v_tk2_1761_; lean_object* v___x_1762_; lean_object* v_snd_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1788_; 
v___x_1750_ = lean_unsigned_to_nat(0u);
v_tk1_1751_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1750_);
v___x_1752_ = 0;
v___x_1753_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_1751_, v___x_1752_, v_a_1573_);
v_snd_1754_ = lean_ctor_get(v___x_1753_, 1);
lean_inc(v_snd_1754_);
lean_dec_ref(v___x_1753_);
v___x_1755_ = lean_unsigned_to_nat(1u);
v___x_1756_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1755_);
v___x_1757_ = 2;
v___x_1758_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_1756_, v___x_1757_, v_snd_1754_);
v_snd_1759_ = lean_ctor_get(v___x_1758_, 1);
lean_inc(v_snd_1759_);
lean_dec_ref(v___x_1758_);
v___x_1760_ = lean_unsigned_to_nat(2u);
v_tk2_1761_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1760_);
v___x_1762_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_1761_, v___x_1752_, v_snd_1759_);
v_snd_1763_ = lean_ctor_get(v___x_1762_, 1);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1788_ == 0)
{
lean_object* v_unused_1789_; 
v_unused_1789_ = lean_ctor_get(v___x_1762_, 0);
lean_dec(v_unused_1789_);
v___x_1765_ = v___x_1762_;
v_isShared_1766_ = v_isSharedCheck_1788_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_snd_1763_);
lean_dec(v___x_1762_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1788_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v_inls_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; uint8_t v___x_1774_; 
v___x_1767_ = lean_unsigned_to_nat(3u);
v___x_1768_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1767_);
lean_dec(v_stx_1572_);
v___x_1769_ = l_Lean_Syntax_getArgs(v___x_1768_);
lean_dec(v___x_1768_);
v_inls_1770_ = l_unsafeCast___redArg(v___x_1769_);
lean_dec_ref(v___x_1769_);
v___x_1771_ = l_unsafeCast___redArg(v_inls_1770_);
lean_dec(v_inls_1770_);
v___x_1772_ = lean_array_get_size(v___x_1771_);
v___x_1773_ = lean_box(0);
v___x_1774_ = lean_nat_dec_lt(v___x_1750_, v___x_1772_);
if (v___x_1774_ == 0)
{
lean_object* v___x_1776_; 
lean_dec(v___x_1771_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v___x_1773_);
v___x_1776_ = v___x_1765_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1773_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v_snd_1763_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
else
{
uint8_t v___x_1778_; 
v___x_1778_ = lean_nat_dec_le(v___x_1772_, v___x_1772_);
if (v___x_1778_ == 0)
{
if (v___x_1774_ == 0)
{
lean_object* v___x_1780_; 
lean_dec(v___x_1771_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v___x_1773_);
v___x_1780_ = v___x_1765_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___x_1773_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v_snd_1763_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
else
{
size_t v___x_1782_; size_t v___x_1783_; lean_object* v___x_1784_; 
lean_del_object(v___x_1765_);
v___x_1782_ = ((size_t)0ULL);
v___x_1783_ = lean_usize_of_nat(v___x_1772_);
v___x_1784_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1771_, v___x_1782_, v___x_1783_, v___x_1773_, v_snd_1763_);
lean_dec(v___x_1771_);
return v___x_1784_;
}
}
else
{
size_t v___x_1785_; size_t v___x_1786_; lean_object* v___x_1787_; 
lean_del_object(v___x_1765_);
v___x_1785_ = ((size_t)0ULL);
v___x_1786_ = lean_usize_of_nat(v___x_1772_);
v___x_1787_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1771_, v___x_1785_, v___x_1786_, v___x_1773_, v_snd_1763_);
lean_dec(v___x_1771_);
return v___x_1787_;
}
}
}
}
}
else
{
lean_object* v___x_1790_; lean_object* v_tk1_1791_; uint8_t v___x_1792_; lean_object* v___x_1793_; lean_object* v_snd_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; uint8_t v___x_1797_; lean_object* v___x_1798_; lean_object* v_snd_1799_; lean_object* v___x_1800_; lean_object* v_tk2_1801_; lean_object* v___x_1802_; lean_object* v_snd_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; uint8_t v___x_1806_; lean_object* v___x_1807_; 
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1790_ = lean_unsigned_to_nat(0u);
v_tk1_1791_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1790_);
v___x_1792_ = 0;
v___x_1793_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_1791_, v___x_1792_, v_a_1573_);
v_snd_1794_ = lean_ctor_get(v___x_1793_, 1);
lean_inc(v_snd_1794_);
lean_dec_ref(v___x_1793_);
v___x_1795_ = lean_unsigned_to_nat(1u);
v___x_1796_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1795_);
v___x_1797_ = 2;
v___x_1798_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_1796_, v___x_1797_, v_snd_1794_);
v_snd_1799_ = lean_ctor_get(v___x_1798_, 1);
lean_inc(v_snd_1799_);
lean_dec_ref(v___x_1798_);
v___x_1800_ = lean_unsigned_to_nat(2u);
v_tk2_1801_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1800_);
v___x_1802_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_1801_, v___x_1792_, v_snd_1799_);
v_snd_1803_ = lean_ctor_get(v___x_1802_, 1);
lean_inc(v_snd_1803_);
lean_dec_ref(v___x_1802_);
v___x_1804_ = lean_unsigned_to_nat(3u);
v___x_1805_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1804_);
lean_dec(v_stx_1572_);
v___x_1806_ = 18;
v___x_1807_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_1805_, v___x_1806_, v_snd_1803_);
return v___x_1807_;
}
}
else
{
lean_object* v___x_1808_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; uint8_t v___x_1826_; 
v___x_1808_ = lean_unsigned_to_nat(0u);
v___x_1823_ = lean_unsigned_to_nat(1u);
v___x_1824_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1823_);
v___x_1825_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__71));
lean_inc(v___x_1824_);
v___x_1826_ = l_Lean_Syntax_isOfKind(v___x_1824_, v___x_1825_);
if (v___x_1826_ == 0)
{
lean_object* v_k_1827_; lean_object* v___x_1828_; uint8_t v___x_1829_; 
lean_dec(v___x_1824_);
lean_inc(v_stx_1572_);
v_k_1827_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_1828_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_1829_ = lean_name_eq(v_k_1827_, v___x_1828_);
if (v___x_1829_ == 0)
{
lean_object* v___x_1830_; uint8_t v___x_1831_; 
v___x_1830_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_1831_ = lean_name_eq(v_k_1827_, v___x_1830_);
lean_dec(v_k_1827_);
if (v___x_1831_ == 0)
{
lean_object* v___x_1832_; lean_object* v___x_1833_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1832_ = lean_box(0);
v___x_1833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1832_);
lean_ctor_set(v___x_1833_, 1, v_a_1573_);
return v___x_1833_;
}
else
{
goto v___jp_1809_;
}
}
else
{
lean_dec(v_k_1827_);
goto v___jp_1809_;
}
}
else
{
lean_object* v_tk1_1834_; uint8_t v___x_1835_; lean_object* v___x_1836_; lean_object* v_snd_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v_tk2_1840_; lean_object* v_vals_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
lean_dec_ref(v_text_1570_);
v_tk1_1834_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1808_);
v___x_1835_ = 0;
v___x_1836_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_1834_, v___x_1835_, v_a_1573_);
v_snd_1837_ = lean_ctor_get(v___x_1836_, 1);
lean_inc(v_snd_1837_);
lean_dec_ref(v___x_1836_);
v___x_1838_ = l_Lean_Syntax_getArg(v___x_1824_, v___x_1808_);
lean_dec(v___x_1824_);
v___x_1839_ = lean_unsigned_to_nat(2u);
v_tk2_1840_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1839_);
lean_dec(v_stx_1572_);
v_vals_1841_ = l_Lean_Syntax_getArgs(v___x_1838_);
lean_dec(v___x_1838_);
v___x_1842_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_vals_1841_);
lean_dec_ref(v_vals_1841_);
v___x_1843_ = l_unsafeCast___redArg(v___x_1842_);
lean_dec_ref(v___x_1842_);
v___x_1844_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_1845_ = lean_box(2);
v___x_1846_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1845_);
lean_ctor_set(v___x_1846_, 1, v___x_1844_);
lean_ctor_set(v___x_1846_, 2, v___x_1843_);
v___x_1847_ = lean_apply_1(v_getTokens_1571_, v___x_1846_);
v___x_1848_ = l_Array_append___redArg(v_snd_1837_, v___x_1847_);
lean_dec_ref(v___x_1847_);
v___x_1849_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_1840_, v___x_1835_, v___x_1848_);
return v___x_1849_;
}
v___jp_1809_:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; uint8_t v___x_1813_; 
v___x_1810_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_1811_ = lean_array_get_size(v___x_1810_);
v___x_1812_ = lean_box(0);
v___x_1813_ = lean_nat_dec_lt(v___x_1808_, v___x_1811_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1814_; 
lean_dec_ref(v___x_1810_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1812_);
lean_ctor_set(v___x_1814_, 1, v_a_1573_);
return v___x_1814_;
}
else
{
uint8_t v___x_1815_; 
v___x_1815_ = lean_nat_dec_le(v___x_1811_, v___x_1811_);
if (v___x_1815_ == 0)
{
if (v___x_1813_ == 0)
{
lean_object* v___x_1816_; 
lean_dec_ref(v___x_1810_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1812_);
lean_ctor_set(v___x_1816_, 1, v_a_1573_);
return v___x_1816_;
}
else
{
size_t v___x_1817_; size_t v___x_1818_; lean_object* v___x_1819_; 
v___x_1817_ = ((size_t)0ULL);
v___x_1818_ = lean_usize_of_nat(v___x_1811_);
v___x_1819_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1810_, v___x_1817_, v___x_1818_, v___x_1812_, v_a_1573_);
lean_dec_ref(v___x_1810_);
return v___x_1819_;
}
}
else
{
size_t v___x_1820_; size_t v___x_1821_; lean_object* v___x_1822_; 
v___x_1820_ = ((size_t)0ULL);
v___x_1821_ = lean_usize_of_nat(v___x_1811_);
v___x_1822_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1810_, v___x_1820_, v___x_1821_, v___x_1812_, v_a_1573_);
lean_dec_ref(v___x_1810_);
return v___x_1822_;
}
}
}
}
}
else
{
lean_object* v___x_1850_; lean_object* v_tk1_1851_; uint8_t v___x_1852_; lean_object* v___x_1853_; lean_object* v_snd_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; lean_object* v___x_1858_; lean_object* v_snd_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v_tk2_1863_; lean_object* v___y_1865_; lean_object* v___x_1868_; lean_object* v_args_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; uint8_t v___x_1872_; 
v___x_1850_ = lean_unsigned_to_nat(0u);
v_tk1_1851_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1850_);
v___x_1852_ = 0;
v___x_1853_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_1851_, v___x_1852_, v_a_1573_);
v_snd_1854_ = lean_ctor_get(v___x_1853_, 1);
lean_inc(v_snd_1854_);
lean_dec_ref(v___x_1853_);
v___x_1855_ = lean_unsigned_to_nat(1u);
v___x_1856_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1855_);
v___x_1857_ = 3;
v___x_1858_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_1856_, v___x_1857_, v_snd_1854_);
v_snd_1859_ = lean_ctor_get(v___x_1858_, 1);
lean_inc(v_snd_1859_);
lean_dec_ref(v___x_1858_);
v___x_1860_ = lean_unsigned_to_nat(2u);
v___x_1861_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1860_);
v___x_1862_ = lean_unsigned_to_nat(3u);
v_tk2_1863_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1862_);
lean_dec(v_stx_1572_);
v___x_1868_ = l_Lean_Syntax_getArgs(v___x_1861_);
lean_dec(v___x_1861_);
v_args_1869_ = l_unsafeCast___redArg(v___x_1868_);
lean_dec_ref(v___x_1868_);
v___x_1870_ = l_unsafeCast___redArg(v_args_1869_);
lean_dec(v_args_1869_);
v___x_1871_ = lean_array_get_size(v___x_1870_);
v___x_1872_ = lean_nat_dec_lt(v___x_1850_, v___x_1871_);
if (v___x_1872_ == 0)
{
lean_object* v___x_1873_; 
lean_dec(v___x_1870_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1873_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_1863_, v___x_1852_, v_snd_1859_);
return v___x_1873_;
}
else
{
lean_object* v___x_1874_; uint8_t v___x_1875_; 
v___x_1874_ = lean_box(0);
v___x_1875_ = lean_nat_dec_le(v___x_1871_, v___x_1871_);
if (v___x_1875_ == 0)
{
if (v___x_1872_ == 0)
{
lean_object* v___x_1876_; 
lean_dec(v___x_1870_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1876_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_1863_, v___x_1852_, v_snd_1859_);
return v___x_1876_;
}
else
{
size_t v___x_1877_; size_t v___x_1878_; lean_object* v___x_1879_; 
v___x_1877_ = ((size_t)0ULL);
v___x_1878_ = lean_usize_of_nat(v___x_1871_);
v___x_1879_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1870_, v___x_1877_, v___x_1878_, v___x_1874_, v_snd_1859_);
lean_dec(v___x_1870_);
v___y_1865_ = v___x_1879_;
goto v___jp_1864_;
}
}
else
{
size_t v___x_1880_; size_t v___x_1881_; lean_object* v___x_1882_; 
v___x_1880_ = ((size_t)0ULL);
v___x_1881_ = lean_usize_of_nat(v___x_1871_);
v___x_1882_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1870_, v___x_1880_, v___x_1881_, v___x_1874_, v_snd_1859_);
lean_dec(v___x_1870_);
v___y_1865_ = v___x_1882_;
goto v___jp_1864_;
}
}
v___jp_1864_:
{
lean_object* v_snd_1866_; lean_object* v___x_1867_; 
v_snd_1866_ = lean_ctor_get(v___y_1865_, 1);
lean_inc(v_snd_1866_);
lean_dec_ref(v___y_1865_);
v___x_1867_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_1863_, v___x_1852_, v_snd_1866_);
return v___x_1867_;
}
}
}
else
{
lean_object* v___x_1883_; lean_object* v_tk1_1884_; uint8_t v___x_1885_; lean_object* v___x_1886_; lean_object* v_snd_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; uint8_t v___x_1890_; lean_object* v___x_1891_; lean_object* v_snd_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v_tk2_1898_; lean_object* v___y_1900_; lean_object* v___x_1903_; lean_object* v_blks_1904_; lean_object* v_snd_1906_; lean_object* v___y_1921_; lean_object* v___x_1923_; lean_object* v_args_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; uint8_t v___x_1927_; 
v___x_1883_ = lean_unsigned_to_nat(0u);
v_tk1_1884_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1883_);
v___x_1885_ = 0;
v___x_1886_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_1884_, v___x_1885_, v_a_1573_);
v_snd_1887_ = lean_ctor_get(v___x_1886_, 1);
lean_inc(v_snd_1887_);
lean_dec_ref(v___x_1886_);
v___x_1888_ = lean_unsigned_to_nat(1u);
v___x_1889_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1888_);
v___x_1890_ = 3;
v___x_1891_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_1889_, v___x_1890_, v_snd_1887_);
v_snd_1892_ = lean_ctor_get(v___x_1891_, 1);
lean_inc(v_snd_1892_);
lean_dec_ref(v___x_1891_);
v___x_1893_ = lean_unsigned_to_nat(2u);
v___x_1894_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1893_);
v___x_1895_ = lean_unsigned_to_nat(4u);
v___x_1896_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1895_);
v___x_1897_ = lean_unsigned_to_nat(5u);
v_tk2_1898_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1897_);
lean_dec(v_stx_1572_);
v___x_1903_ = l_Lean_Syntax_getArgs(v___x_1896_);
lean_dec(v___x_1896_);
v_blks_1904_ = l_unsafeCast___redArg(v___x_1903_);
lean_dec_ref(v___x_1903_);
v___x_1923_ = l_Lean_Syntax_getArgs(v___x_1894_);
lean_dec(v___x_1894_);
v_args_1924_ = l_unsafeCast___redArg(v___x_1923_);
lean_dec_ref(v___x_1923_);
v___x_1925_ = l_unsafeCast___redArg(v_args_1924_);
lean_dec(v_args_1924_);
v___x_1926_ = lean_array_get_size(v___x_1925_);
v___x_1927_ = lean_nat_dec_lt(v___x_1883_, v___x_1926_);
if (v___x_1927_ == 0)
{
lean_dec(v___x_1925_);
v_snd_1906_ = v_snd_1892_;
goto v___jp_1905_;
}
else
{
lean_object* v___x_1928_; uint8_t v___x_1929_; 
v___x_1928_ = lean_box(0);
v___x_1929_ = lean_nat_dec_le(v___x_1926_, v___x_1926_);
if (v___x_1929_ == 0)
{
if (v___x_1927_ == 0)
{
lean_dec(v___x_1925_);
v_snd_1906_ = v_snd_1892_;
goto v___jp_1905_;
}
else
{
size_t v___x_1930_; size_t v___x_1931_; lean_object* v___x_1932_; 
v___x_1930_ = ((size_t)0ULL);
v___x_1931_ = lean_usize_of_nat(v___x_1926_);
lean_inc_ref(v_getTokens_1571_);
lean_inc_ref(v_text_1570_);
v___x_1932_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1925_, v___x_1930_, v___x_1931_, v___x_1928_, v_snd_1892_);
lean_dec(v___x_1925_);
v___y_1921_ = v___x_1932_;
goto v___jp_1920_;
}
}
else
{
size_t v___x_1933_; size_t v___x_1934_; lean_object* v___x_1935_; 
v___x_1933_ = ((size_t)0ULL);
v___x_1934_ = lean_usize_of_nat(v___x_1926_);
lean_inc_ref(v_getTokens_1571_);
lean_inc_ref(v_text_1570_);
v___x_1935_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1925_, v___x_1933_, v___x_1934_, v___x_1928_, v_snd_1892_);
lean_dec(v___x_1925_);
v___y_1921_ = v___x_1935_;
goto v___jp_1920_;
}
}
v___jp_1899_:
{
lean_object* v_snd_1901_; lean_object* v___x_1902_; 
v_snd_1901_ = lean_ctor_get(v___y_1900_, 1);
lean_inc(v_snd_1901_);
lean_dec_ref(v___y_1900_);
v___x_1902_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_1898_, v___x_1885_, v_snd_1901_);
return v___x_1902_;
}
v___jp_1905_:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; uint8_t v___x_1909_; 
v___x_1907_ = l_unsafeCast___redArg(v_blks_1904_);
lean_dec(v_blks_1904_);
v___x_1908_ = lean_array_get_size(v___x_1907_);
v___x_1909_ = lean_nat_dec_lt(v___x_1883_, v___x_1908_);
if (v___x_1909_ == 0)
{
lean_object* v___x_1910_; 
lean_dec(v___x_1907_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1910_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_1898_, v___x_1885_, v_snd_1906_);
return v___x_1910_;
}
else
{
lean_object* v___x_1911_; uint8_t v___x_1912_; 
v___x_1911_ = lean_box(0);
v___x_1912_ = lean_nat_dec_le(v___x_1908_, v___x_1908_);
if (v___x_1912_ == 0)
{
if (v___x_1909_ == 0)
{
lean_object* v___x_1913_; 
lean_dec(v___x_1907_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1913_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_1898_, v___x_1885_, v_snd_1906_);
return v___x_1913_;
}
else
{
size_t v___x_1914_; size_t v___x_1915_; lean_object* v___x_1916_; 
v___x_1914_ = ((size_t)0ULL);
v___x_1915_ = lean_usize_of_nat(v___x_1908_);
v___x_1916_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1907_, v___x_1914_, v___x_1915_, v___x_1911_, v_snd_1906_);
lean_dec(v___x_1907_);
v___y_1900_ = v___x_1916_;
goto v___jp_1899_;
}
}
else
{
size_t v___x_1917_; size_t v___x_1918_; lean_object* v___x_1919_; 
v___x_1917_ = ((size_t)0ULL);
v___x_1918_ = lean_usize_of_nat(v___x_1908_);
v___x_1919_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1907_, v___x_1917_, v___x_1918_, v___x_1911_, v_snd_1906_);
lean_dec(v___x_1907_);
v___y_1900_ = v___x_1919_;
goto v___jp_1899_;
}
}
}
v___jp_1920_:
{
lean_object* v_snd_1922_; 
v_snd_1922_ = lean_ctor_get(v___y_1921_, 1);
lean_inc(v_snd_1922_);
lean_dec_ref(v___y_1921_);
v_snd_1906_ = v_snd_1922_;
goto v___jp_1905_;
}
}
}
else
{
lean_object* v___x_1936_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; uint8_t v___x_1954_; 
v___x_1936_ = lean_unsigned_to_nat(0u);
v___x_1951_ = lean_unsigned_to_nat(1u);
v___x_1952_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1951_);
v___x_1953_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1952_);
v___x_1954_ = l_Lean_Syntax_matchesNull(v___x_1952_, v___x_1953_);
if (v___x_1954_ == 0)
{
lean_object* v_k_1955_; lean_object* v___x_1956_; uint8_t v___x_1957_; 
lean_dec(v___x_1952_);
lean_inc(v_stx_1572_);
v_k_1955_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_1956_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_1957_ = lean_name_eq(v_k_1955_, v___x_1956_);
if (v___x_1957_ == 0)
{
lean_object* v___x_1958_; uint8_t v___x_1959_; 
v___x_1958_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_1959_ = lean_name_eq(v_k_1955_, v___x_1958_);
lean_dec(v_k_1955_);
if (v___x_1959_ == 0)
{
lean_object* v___x_1960_; lean_object* v___x_1961_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1960_ = lean_box(0);
v___x_1961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
lean_ctor_set(v___x_1961_, 1, v_a_1573_);
return v___x_1961_;
}
else
{
goto v___jp_1937_;
}
}
else
{
lean_dec(v_k_1955_);
goto v___jp_1937_;
}
}
else
{
lean_object* v_tk1_1962_; uint8_t v___x_1963_; lean_object* v___x_1964_; lean_object* v_snd_1965_; lean_object* v___x_1966_; uint8_t v___x_1967_; lean_object* v___x_1968_; lean_object* v_snd_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v_tk2_1974_; lean_object* v_snd_1976_; lean_object* v___y_1985_; lean_object* v___x_1987_; lean_object* v_args_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; uint8_t v___x_1991_; 
v_tk1_1962_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1936_);
v___x_1963_ = 0;
v___x_1964_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_1962_, v___x_1963_, v_a_1573_);
v_snd_1965_ = lean_ctor_get(v___x_1964_, 1);
lean_inc(v_snd_1965_);
lean_dec_ref(v___x_1964_);
v___x_1966_ = l_Lean_Syntax_getArg(v___x_1952_, v___x_1936_);
v___x_1967_ = 3;
v___x_1968_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_1966_, v___x_1967_, v_snd_1965_);
v_snd_1969_ = lean_ctor_get(v___x_1968_, 1);
lean_inc(v_snd_1969_);
lean_dec_ref(v___x_1968_);
v___x_1970_ = l_Lean_Syntax_getArg(v___x_1952_, v___x_1951_);
lean_dec(v___x_1952_);
v___x_1971_ = lean_unsigned_to_nat(3u);
v___x_1972_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1971_);
v___x_1973_ = lean_unsigned_to_nat(4u);
v_tk2_1974_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_1973_);
lean_dec(v_stx_1572_);
v___x_1987_ = l_Lean_Syntax_getArgs(v___x_1970_);
lean_dec(v___x_1970_);
v_args_1988_ = l_unsafeCast___redArg(v___x_1987_);
lean_dec_ref(v___x_1987_);
v___x_1989_ = l_unsafeCast___redArg(v_args_1988_);
lean_dec(v_args_1988_);
v___x_1990_ = lean_array_get_size(v___x_1989_);
v___x_1991_ = lean_nat_dec_lt(v___x_1936_, v___x_1990_);
if (v___x_1991_ == 0)
{
lean_dec(v___x_1989_);
lean_dec_ref(v_getTokens_1571_);
v_snd_1976_ = v_snd_1969_;
goto v___jp_1975_;
}
else
{
lean_object* v___x_1992_; uint8_t v___x_1993_; 
v___x_1992_ = lean_box(0);
v___x_1993_ = lean_nat_dec_le(v___x_1990_, v___x_1990_);
if (v___x_1993_ == 0)
{
if (v___x_1991_ == 0)
{
lean_dec(v___x_1989_);
lean_dec_ref(v_getTokens_1571_);
v_snd_1976_ = v_snd_1969_;
goto v___jp_1975_;
}
else
{
size_t v___x_1994_; size_t v___x_1995_; lean_object* v___x_1996_; 
v___x_1994_ = ((size_t)0ULL);
v___x_1995_ = lean_usize_of_nat(v___x_1990_);
lean_inc_ref(v_text_1570_);
v___x_1996_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1989_, v___x_1994_, v___x_1995_, v___x_1992_, v_snd_1969_);
lean_dec(v___x_1989_);
v___y_1985_ = v___x_1996_;
goto v___jp_1984_;
}
}
else
{
size_t v___x_1997_; size_t v___x_1998_; lean_object* v___x_1999_; 
v___x_1997_ = ((size_t)0ULL);
v___x_1998_ = lean_usize_of_nat(v___x_1990_);
lean_inc_ref(v_text_1570_);
v___x_1999_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1989_, v___x_1997_, v___x_1998_, v___x_1992_, v_snd_1969_);
lean_dec(v___x_1989_);
v___y_1985_ = v___x_1999_;
goto v___jp_1984_;
}
}
v___jp_1975_:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; size_t v_sz_1979_; size_t v___x_1980_; lean_object* v___x_1981_; lean_object* v_snd_1982_; lean_object* v___x_1983_; 
v___x_1977_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_splitStr(v_text_1570_, v___x_1972_);
lean_dec(v___x_1972_);
v___x_1978_ = lean_box(0);
v_sz_1979_ = lean_array_size(v___x_1977_);
v___x_1980_ = ((size_t)0ULL);
v___x_1981_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__1(v___x_1977_, v_sz_1979_, v___x_1980_, v___x_1978_, v_snd_1976_);
lean_dec_ref(v___x_1977_);
v_snd_1982_ = lean_ctor_get(v___x_1981_, 1);
lean_inc(v_snd_1982_);
lean_dec_ref(v___x_1981_);
v___x_1983_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_1974_, v___x_1963_, v_snd_1982_);
return v___x_1983_;
}
v___jp_1984_:
{
lean_object* v_snd_1986_; 
v_snd_1986_ = lean_ctor_get(v___y_1985_, 1);
lean_inc(v_snd_1986_);
lean_dec_ref(v___y_1985_);
v_snd_1976_ = v_snd_1986_;
goto v___jp_1975_;
}
}
v___jp_1937_:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; uint8_t v___x_1941_; 
v___x_1938_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_1939_ = lean_array_get_size(v___x_1938_);
v___x_1940_ = lean_box(0);
v___x_1941_ = lean_nat_dec_lt(v___x_1936_, v___x_1939_);
if (v___x_1941_ == 0)
{
lean_object* v___x_1942_; 
lean_dec_ref(v___x_1938_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1942_, 0, v___x_1940_);
lean_ctor_set(v___x_1942_, 1, v_a_1573_);
return v___x_1942_;
}
else
{
uint8_t v___x_1943_; 
v___x_1943_ = lean_nat_dec_le(v___x_1939_, v___x_1939_);
if (v___x_1943_ == 0)
{
if (v___x_1941_ == 0)
{
lean_object* v___x_1944_; 
lean_dec_ref(v___x_1938_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1940_);
lean_ctor_set(v___x_1944_, 1, v_a_1573_);
return v___x_1944_;
}
else
{
size_t v___x_1945_; size_t v___x_1946_; lean_object* v___x_1947_; 
v___x_1945_ = ((size_t)0ULL);
v___x_1946_ = lean_usize_of_nat(v___x_1939_);
v___x_1947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1938_, v___x_1945_, v___x_1946_, v___x_1940_, v_a_1573_);
lean_dec_ref(v___x_1938_);
return v___x_1947_;
}
}
else
{
size_t v___x_1948_; size_t v___x_1949_; lean_object* v___x_1950_; 
v___x_1948_ = ((size_t)0ULL);
v___x_1949_ = lean_usize_of_nat(v___x_1939_);
v___x_1950_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1938_, v___x_1948_, v___x_1949_, v___x_1940_, v_a_1573_);
lean_dec_ref(v___x_1938_);
return v___x_1950_;
}
}
}
}
}
else
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v_inl_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; uint8_t v___x_2008_; 
v___x_2000_ = lean_unsigned_to_nat(0u);
v___x_2001_ = lean_unsigned_to_nat(1u);
v___x_2002_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2001_);
lean_dec(v_stx_1572_);
v___x_2003_ = l_Lean_Syntax_getArgs(v___x_2002_);
lean_dec(v___x_2002_);
v_inl_2004_ = l_unsafeCast___redArg(v___x_2003_);
lean_dec_ref(v___x_2003_);
v___x_2005_ = l_unsafeCast___redArg(v_inl_2004_);
lean_dec(v_inl_2004_);
v___x_2006_ = lean_array_get_size(v___x_2005_);
v___x_2007_ = lean_box(0);
v___x_2008_ = lean_nat_dec_lt(v___x_2000_, v___x_2006_);
if (v___x_2008_ == 0)
{
lean_object* v___x_2009_; 
lean_dec(v___x_2005_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2007_);
lean_ctor_set(v___x_2009_, 1, v_a_1573_);
return v___x_2009_;
}
else
{
uint8_t v___x_2010_; 
v___x_2010_ = lean_nat_dec_le(v___x_2006_, v___x_2006_);
if (v___x_2010_ == 0)
{
if (v___x_2008_ == 0)
{
lean_object* v___x_2011_; 
lean_dec(v___x_2005_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2007_);
lean_ctor_set(v___x_2011_, 1, v_a_1573_);
return v___x_2011_;
}
else
{
size_t v___x_2012_; size_t v___x_2013_; lean_object* v___x_2014_; 
v___x_2012_ = ((size_t)0ULL);
v___x_2013_ = lean_usize_of_nat(v___x_2006_);
v___x_2014_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2005_, v___x_2012_, v___x_2013_, v___x_2007_, v_a_1573_);
lean_dec(v___x_2005_);
return v___x_2014_;
}
}
else
{
size_t v___x_2015_; size_t v___x_2016_; lean_object* v___x_2017_; 
v___x_2015_ = ((size_t)0ULL);
v___x_2016_ = lean_usize_of_nat(v___x_2006_);
v___x_2017_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2005_, v___x_2015_, v___x_2016_, v___x_2007_, v_a_1573_);
lean_dec(v___x_2005_);
return v___x_2017_;
}
}
}
}
else
{
lean_object* v___x_2018_; lean_object* v_tk_2019_; uint8_t v___x_2020_; lean_object* v___x_2021_; lean_object* v_snd_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2067_; 
v___x_2018_ = lean_unsigned_to_nat(0u);
v_tk_2019_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2018_);
v___x_2020_ = 0;
v___x_2021_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk_2019_, v___x_2020_, v_a_1573_);
v_snd_2022_ = lean_ctor_get(v___x_2021_, 1);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2067_ == 0)
{
lean_object* v_unused_2068_; 
v_unused_2068_ = lean_ctor_get(v___x_2021_, 0);
lean_dec(v_unused_2068_);
v___x_2024_ = v___x_2021_;
v_isShared_2025_ = v_isSharedCheck_2067_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_snd_2022_);
lean_dec(v___x_2021_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2067_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v_blks_2031_; lean_object* v_snd_2033_; lean_object* v___y_2052_; lean_object* v___x_2054_; lean_object* v_inls_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; 
v___x_2026_ = lean_unsigned_to_nat(1u);
v___x_2027_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2026_);
v___x_2028_ = lean_unsigned_to_nat(3u);
v___x_2029_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2028_);
lean_dec(v_stx_1572_);
v___x_2030_ = l_Lean_Syntax_getArgs(v___x_2029_);
lean_dec(v___x_2029_);
v_blks_2031_ = l_unsafeCast___redArg(v___x_2030_);
lean_dec_ref(v___x_2030_);
v___x_2054_ = l_Lean_Syntax_getArgs(v___x_2027_);
lean_dec(v___x_2027_);
v_inls_2055_ = l_unsafeCast___redArg(v___x_2054_);
lean_dec_ref(v___x_2054_);
v___x_2056_ = l_unsafeCast___redArg(v_inls_2055_);
lean_dec(v_inls_2055_);
v___x_2057_ = lean_array_get_size(v___x_2056_);
v___x_2058_ = lean_nat_dec_lt(v___x_2018_, v___x_2057_);
if (v___x_2058_ == 0)
{
lean_dec(v___x_2056_);
v_snd_2033_ = v_snd_2022_;
goto v___jp_2032_;
}
else
{
lean_object* v___x_2059_; uint8_t v___x_2060_; 
v___x_2059_ = lean_box(0);
v___x_2060_ = lean_nat_dec_le(v___x_2057_, v___x_2057_);
if (v___x_2060_ == 0)
{
if (v___x_2058_ == 0)
{
lean_dec(v___x_2056_);
v_snd_2033_ = v_snd_2022_;
goto v___jp_2032_;
}
else
{
size_t v___x_2061_; size_t v___x_2062_; lean_object* v___x_2063_; 
v___x_2061_ = ((size_t)0ULL);
v___x_2062_ = lean_usize_of_nat(v___x_2057_);
lean_inc_ref(v_getTokens_1571_);
lean_inc_ref(v_text_1570_);
v___x_2063_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2056_, v___x_2061_, v___x_2062_, v___x_2059_, v_snd_2022_);
lean_dec(v___x_2056_);
v___y_2052_ = v___x_2063_;
goto v___jp_2051_;
}
}
else
{
size_t v___x_2064_; size_t v___x_2065_; lean_object* v___x_2066_; 
v___x_2064_ = ((size_t)0ULL);
v___x_2065_ = lean_usize_of_nat(v___x_2057_);
lean_inc_ref(v_getTokens_1571_);
lean_inc_ref(v_text_1570_);
v___x_2066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2056_, v___x_2064_, v___x_2065_, v___x_2059_, v_snd_2022_);
lean_dec(v___x_2056_);
v___y_2052_ = v___x_2066_;
goto v___jp_2051_;
}
}
v___jp_2032_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; uint8_t v___x_2037_; 
v___x_2034_ = l_unsafeCast___redArg(v_blks_2031_);
lean_dec(v_blks_2031_);
v___x_2035_ = lean_array_get_size(v___x_2034_);
v___x_2036_ = lean_box(0);
v___x_2037_ = lean_nat_dec_lt(v___x_2018_, v___x_2035_);
if (v___x_2037_ == 0)
{
lean_object* v___x_2039_; 
lean_dec(v___x_2034_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 1, v_snd_2033_);
lean_ctor_set(v___x_2024_, 0, v___x_2036_);
v___x_2039_ = v___x_2024_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v___x_2036_);
lean_ctor_set(v_reuseFailAlloc_2040_, 1, v_snd_2033_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
else
{
uint8_t v___x_2041_; 
v___x_2041_ = lean_nat_dec_le(v___x_2035_, v___x_2035_);
if (v___x_2041_ == 0)
{
if (v___x_2037_ == 0)
{
lean_object* v___x_2043_; 
lean_dec(v___x_2034_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 1, v_snd_2033_);
lean_ctor_set(v___x_2024_, 0, v___x_2036_);
v___x_2043_ = v___x_2024_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v___x_2036_);
lean_ctor_set(v_reuseFailAlloc_2044_, 1, v_snd_2033_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
return v___x_2043_;
}
}
else
{
size_t v___x_2045_; size_t v___x_2046_; lean_object* v___x_2047_; 
lean_del_object(v___x_2024_);
v___x_2045_ = ((size_t)0ULL);
v___x_2046_ = lean_usize_of_nat(v___x_2035_);
v___x_2047_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2034_, v___x_2045_, v___x_2046_, v___x_2036_, v_snd_2033_);
lean_dec(v___x_2034_);
return v___x_2047_;
}
}
else
{
size_t v___x_2048_; size_t v___x_2049_; lean_object* v___x_2050_; 
lean_del_object(v___x_2024_);
v___x_2048_ = ((size_t)0ULL);
v___x_2049_ = lean_usize_of_nat(v___x_2035_);
v___x_2050_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2034_, v___x_2048_, v___x_2049_, v___x_2036_, v_snd_2033_);
lean_dec(v___x_2034_);
return v___x_2050_;
}
}
}
v___jp_2051_:
{
lean_object* v_snd_2053_; 
v_snd_2053_ = lean_ctor_get(v___y_2052_, 1);
lean_inc(v_snd_2053_);
lean_dec_ref(v___y_2052_);
v_snd_2033_ = v_snd_2053_;
goto v___jp_2032_;
}
}
}
}
else
{
lean_object* v___x_2069_; lean_object* v_tk_2070_; uint8_t v___x_2071_; lean_object* v___x_2072_; lean_object* v_snd_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2098_; 
v___x_2069_ = lean_unsigned_to_nat(0u);
v_tk_2070_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2069_);
v___x_2071_ = 0;
v___x_2072_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk_2070_, v___x_2071_, v_a_1573_);
v_snd_2073_ = lean_ctor_get(v___x_2072_, 1);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2098_ == 0)
{
lean_object* v_unused_2099_; 
v_unused_2099_ = lean_ctor_get(v___x_2072_, 0);
lean_dec(v_unused_2099_);
v___x_2075_ = v___x_2072_;
v_isShared_2076_ = v_isSharedCheck_2098_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_snd_2073_);
lean_dec(v___x_2072_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2098_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v_inls_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; uint8_t v___x_2084_; 
v___x_2077_ = lean_unsigned_to_nat(1u);
v___x_2078_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2077_);
lean_dec(v_stx_1572_);
v___x_2079_ = l_Lean_Syntax_getArgs(v___x_2078_);
lean_dec(v___x_2078_);
v_inls_2080_ = l_unsafeCast___redArg(v___x_2079_);
lean_dec_ref(v___x_2079_);
v___x_2081_ = l_unsafeCast___redArg(v_inls_2080_);
lean_dec(v_inls_2080_);
v___x_2082_ = lean_array_get_size(v___x_2081_);
v___x_2083_ = lean_box(0);
v___x_2084_ = lean_nat_dec_lt(v___x_2069_, v___x_2082_);
if (v___x_2084_ == 0)
{
lean_object* v___x_2086_; 
lean_dec(v___x_2081_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 0, v___x_2083_);
v___x_2086_ = v___x_2075_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v___x_2083_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v_snd_2073_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
else
{
uint8_t v___x_2088_; 
v___x_2088_ = lean_nat_dec_le(v___x_2082_, v___x_2082_);
if (v___x_2088_ == 0)
{
if (v___x_2084_ == 0)
{
lean_object* v___x_2090_; 
lean_dec(v___x_2081_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 0, v___x_2083_);
v___x_2090_ = v___x_2075_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2083_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v_snd_2073_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
else
{
size_t v___x_2092_; size_t v___x_2093_; lean_object* v___x_2094_; 
lean_del_object(v___x_2075_);
v___x_2092_ = ((size_t)0ULL);
v___x_2093_ = lean_usize_of_nat(v___x_2082_);
v___x_2094_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2081_, v___x_2092_, v___x_2093_, v___x_2083_, v_snd_2073_);
lean_dec(v___x_2081_);
return v___x_2094_;
}
}
else
{
size_t v___x_2095_; size_t v___x_2096_; lean_object* v___x_2097_; 
lean_del_object(v___x_2075_);
v___x_2095_ = ((size_t)0ULL);
v___x_2096_ = lean_usize_of_nat(v___x_2082_);
v___x_2097_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2081_, v___x_2095_, v___x_2096_, v___x_2083_, v_snd_2073_);
lean_dec(v___x_2081_);
return v___x_2097_;
}
}
}
}
}
else
{
lean_object* v___x_2100_; lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; 
v___x_2100_ = lean_unsigned_to_nat(0u);
v___x_2115_ = lean_unsigned_to_nat(1u);
v___x_2116_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2115_);
lean_inc(v___x_2116_);
v___x_2117_ = l_Lean_Syntax_isOfKind(v___x_2116_, v___x_1624_);
if (v___x_2117_ == 0)
{
lean_object* v_k_2118_; lean_object* v___x_2119_; uint8_t v___x_2120_; 
lean_dec(v___x_2116_);
lean_inc(v_stx_1572_);
v_k_2118_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_2119_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_2120_ = lean_name_eq(v_k_2118_, v___x_2119_);
if (v___x_2120_ == 0)
{
lean_object* v___x_2121_; uint8_t v___x_2122_; 
v___x_2121_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_2122_ = lean_name_eq(v_k_2118_, v___x_2121_);
lean_dec(v_k_2118_);
if (v___x_2122_ == 0)
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2123_ = lean_box(0);
v___x_2124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
lean_ctor_set(v___x_2124_, 1, v_a_1573_);
return v___x_2124_;
}
else
{
goto v___jp_2101_;
}
}
else
{
lean_dec(v_k_2118_);
goto v___jp_2101_;
}
}
else
{
lean_object* v_tk1_2125_; uint8_t v___x_2126_; lean_object* v___x_2127_; lean_object* v_snd_2128_; lean_object* v___x_2129_; uint8_t v___x_2130_; lean_object* v___x_2131_; lean_object* v_snd_2132_; lean_object* v_tk2_2133_; lean_object* v___x_2134_; lean_object* v_snd_2135_; lean_object* v___x_2136_; lean_object* v_tk3_2137_; lean_object* v___x_2138_; 
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v_tk1_2125_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2100_);
lean_dec(v_stx_1572_);
v___x_2126_ = 0;
v___x_2127_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2125_, v___x_2126_, v_a_1573_);
v_snd_2128_ = lean_ctor_get(v___x_2127_, 1);
lean_inc(v_snd_2128_);
lean_dec_ref(v___x_2127_);
v___x_2129_ = l_Lean_Syntax_getArg(v___x_2116_, v___x_2115_);
v___x_2130_ = 18;
v___x_2131_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2129_, v___x_2130_, v_snd_2128_);
v_snd_2132_ = lean_ctor_get(v___x_2131_, 1);
lean_inc(v_snd_2132_);
lean_dec_ref(v___x_2131_);
v_tk2_2133_ = l_Lean_Syntax_getArg(v___x_2116_, v___x_2100_);
v___x_2134_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2133_, v___x_2126_, v_snd_2132_);
v_snd_2135_ = lean_ctor_get(v___x_2134_, 1);
lean_inc(v_snd_2135_);
lean_dec_ref(v___x_2134_);
v___x_2136_ = lean_unsigned_to_nat(2u);
v_tk3_2137_ = l_Lean_Syntax_getArg(v___x_2116_, v___x_2136_);
lean_dec(v___x_2116_);
v___x_2138_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk3_2137_, v___x_2126_, v_snd_2135_);
return v___x_2138_;
}
v___jp_2101_:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; uint8_t v___x_2105_; 
v___x_2102_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_2103_ = lean_array_get_size(v___x_2102_);
v___x_2104_ = lean_box(0);
v___x_2105_ = lean_nat_dec_lt(v___x_2100_, v___x_2103_);
if (v___x_2105_ == 0)
{
lean_object* v___x_2106_; 
lean_dec_ref(v___x_2102_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2104_);
lean_ctor_set(v___x_2106_, 1, v_a_1573_);
return v___x_2106_;
}
else
{
uint8_t v___x_2107_; 
v___x_2107_ = lean_nat_dec_le(v___x_2103_, v___x_2103_);
if (v___x_2107_ == 0)
{
if (v___x_2105_ == 0)
{
lean_object* v___x_2108_; 
lean_dec_ref(v___x_2102_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2104_);
lean_ctor_set(v___x_2108_, 1, v_a_1573_);
return v___x_2108_;
}
else
{
size_t v___x_2109_; size_t v___x_2110_; lean_object* v___x_2111_; 
v___x_2109_ = ((size_t)0ULL);
v___x_2110_ = lean_usize_of_nat(v___x_2103_);
v___x_2111_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2102_, v___x_2109_, v___x_2110_, v___x_2104_, v_a_1573_);
lean_dec_ref(v___x_2102_);
return v___x_2111_;
}
}
else
{
size_t v___x_2112_; size_t v___x_2113_; lean_object* v___x_2114_; 
v___x_2112_ = ((size_t)0ULL);
v___x_2113_ = lean_usize_of_nat(v___x_2103_);
v___x_2114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2102_, v___x_2112_, v___x_2113_, v___x_2104_, v_a_1573_);
lean_dec_ref(v___x_2102_);
return v___x_2114_;
}
}
}
}
}
else
{
lean_object* v___x_2139_; lean_object* v___x_2154_; lean_object* v___x_2155_; uint8_t v___x_2156_; 
v___x_2139_ = lean_unsigned_to_nat(0u);
v___x_2154_ = lean_unsigned_to_nat(1u);
v___x_2155_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2154_);
lean_inc(v___x_2155_);
v___x_2156_ = l_Lean_Syntax_isOfKind(v___x_2155_, v___x_1624_);
if (v___x_2156_ == 0)
{
lean_object* v_k_2157_; lean_object* v___x_2158_; uint8_t v___x_2159_; 
lean_dec(v___x_2155_);
lean_inc(v_stx_1572_);
v_k_2157_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_2158_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_2159_ = lean_name_eq(v_k_2157_, v___x_2158_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; uint8_t v___x_2161_; 
v___x_2160_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_2161_ = lean_name_eq(v_k_2157_, v___x_2160_);
lean_dec(v_k_2157_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; lean_object* v___x_2163_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2162_ = lean_box(0);
v___x_2163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2162_);
lean_ctor_set(v___x_2163_, 1, v_a_1573_);
return v___x_2163_;
}
else
{
goto v___jp_2140_;
}
}
else
{
lean_dec(v_k_2157_);
goto v___jp_2140_;
}
}
else
{
lean_object* v_tk1_2164_; uint8_t v___x_2165_; lean_object* v___x_2166_; lean_object* v_snd_2167_; lean_object* v___x_2168_; uint8_t v___x_2169_; lean_object* v___x_2170_; lean_object* v_snd_2171_; lean_object* v_tk2_2172_; lean_object* v___x_2173_; lean_object* v_snd_2174_; lean_object* v___x_2175_; lean_object* v_tk3_2176_; lean_object* v___x_2177_; 
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v_tk1_2164_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2139_);
lean_dec(v_stx_1572_);
v___x_2165_ = 0;
v___x_2166_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2164_, v___x_2165_, v_a_1573_);
v_snd_2167_ = lean_ctor_get(v___x_2166_, 1);
lean_inc(v_snd_2167_);
lean_dec_ref(v___x_2166_);
v___x_2168_ = l_Lean_Syntax_getArg(v___x_2155_, v___x_2154_);
v___x_2169_ = 18;
v___x_2170_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2168_, v___x_2169_, v_snd_2167_);
v_snd_2171_ = lean_ctor_get(v___x_2170_, 1);
lean_inc(v_snd_2171_);
lean_dec_ref(v___x_2170_);
v_tk2_2172_ = l_Lean_Syntax_getArg(v___x_2155_, v___x_2139_);
v___x_2173_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2172_, v___x_2165_, v_snd_2171_);
v_snd_2174_ = lean_ctor_get(v___x_2173_, 1);
lean_inc(v_snd_2174_);
lean_dec_ref(v___x_2173_);
v___x_2175_ = lean_unsigned_to_nat(2u);
v_tk3_2176_ = l_Lean_Syntax_getArg(v___x_2155_, v___x_2175_);
lean_dec(v___x_2155_);
v___x_2177_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk3_2176_, v___x_2165_, v_snd_2174_);
return v___x_2177_;
}
v___jp_2140_:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; uint8_t v___x_2144_; 
v___x_2141_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_2142_ = lean_array_get_size(v___x_2141_);
v___x_2143_ = lean_box(0);
v___x_2144_ = lean_nat_dec_lt(v___x_2139_, v___x_2142_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; 
lean_dec_ref(v___x_2141_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2143_);
lean_ctor_set(v___x_2145_, 1, v_a_1573_);
return v___x_2145_;
}
else
{
uint8_t v___x_2146_; 
v___x_2146_ = lean_nat_dec_le(v___x_2142_, v___x_2142_);
if (v___x_2146_ == 0)
{
if (v___x_2144_ == 0)
{
lean_object* v___x_2147_; 
lean_dec_ref(v___x_2141_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2147_, 0, v___x_2143_);
lean_ctor_set(v___x_2147_, 1, v_a_1573_);
return v___x_2147_;
}
else
{
size_t v___x_2148_; size_t v___x_2149_; lean_object* v___x_2150_; 
v___x_2148_ = ((size_t)0ULL);
v___x_2149_ = lean_usize_of_nat(v___x_2142_);
v___x_2150_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2141_, v___x_2148_, v___x_2149_, v___x_2143_, v_a_1573_);
lean_dec_ref(v___x_2141_);
return v___x_2150_;
}
}
else
{
size_t v___x_2151_; size_t v___x_2152_; lean_object* v___x_2153_; 
v___x_2151_ = ((size_t)0ULL);
v___x_2152_ = lean_usize_of_nat(v___x_2142_);
v___x_2153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2141_, v___x_2151_, v___x_2152_, v___x_2143_, v_a_1573_);
lean_dec_ref(v___x_2141_);
return v___x_2153_;
}
}
}
}
}
else
{
lean_object* v___x_2178_; lean_object* v_tk1_2179_; uint8_t v___x_2180_; lean_object* v___x_2181_; lean_object* v_snd_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; uint8_t v___x_2185_; lean_object* v___x_2186_; lean_object* v_snd_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v_tk2_2191_; lean_object* v___x_2192_; lean_object* v_tk3_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v_tk4_2197_; lean_object* v___y_2199_; lean_object* v___x_2202_; lean_object* v_inls_2203_; lean_object* v_snd_2205_; lean_object* v___y_2224_; lean_object* v___x_2226_; lean_object* v_args_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; uint8_t v___x_2230_; 
v___x_2178_ = lean_unsigned_to_nat(0u);
v_tk1_2179_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2178_);
v___x_2180_ = 0;
v___x_2181_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2179_, v___x_2180_, v_a_1573_);
v_snd_2182_ = lean_ctor_get(v___x_2181_, 1);
lean_inc(v_snd_2182_);
lean_dec_ref(v___x_2181_);
v___x_2183_ = lean_unsigned_to_nat(1u);
v___x_2184_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2183_);
v___x_2185_ = 3;
v___x_2186_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2184_, v___x_2185_, v_snd_2182_);
v_snd_2187_ = lean_ctor_get(v___x_2186_, 1);
lean_inc(v_snd_2187_);
lean_dec_ref(v___x_2186_);
v___x_2188_ = lean_unsigned_to_nat(2u);
v___x_2189_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2188_);
v___x_2190_ = lean_unsigned_to_nat(3u);
v_tk2_2191_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2190_);
v___x_2192_ = lean_unsigned_to_nat(4u);
v_tk3_2193_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2192_);
v___x_2194_ = lean_unsigned_to_nat(5u);
v___x_2195_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2194_);
v___x_2196_ = lean_unsigned_to_nat(6u);
v_tk4_2197_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2196_);
lean_dec(v_stx_1572_);
v___x_2202_ = l_Lean_Syntax_getArgs(v___x_2195_);
lean_dec(v___x_2195_);
v_inls_2203_ = l_unsafeCast___redArg(v___x_2202_);
lean_dec_ref(v___x_2202_);
v___x_2226_ = l_Lean_Syntax_getArgs(v___x_2189_);
lean_dec(v___x_2189_);
v_args_2227_ = l_unsafeCast___redArg(v___x_2226_);
lean_dec_ref(v___x_2226_);
v___x_2228_ = l_unsafeCast___redArg(v_args_2227_);
lean_dec(v_args_2227_);
v___x_2229_ = lean_array_get_size(v___x_2228_);
v___x_2230_ = lean_nat_dec_lt(v___x_2178_, v___x_2229_);
if (v___x_2230_ == 0)
{
lean_dec(v___x_2228_);
v_snd_2205_ = v_snd_2187_;
goto v___jp_2204_;
}
else
{
lean_object* v___x_2231_; uint8_t v___x_2232_; 
v___x_2231_ = lean_box(0);
v___x_2232_ = lean_nat_dec_le(v___x_2229_, v___x_2229_);
if (v___x_2232_ == 0)
{
if (v___x_2230_ == 0)
{
lean_dec(v___x_2228_);
v_snd_2205_ = v_snd_2187_;
goto v___jp_2204_;
}
else
{
size_t v___x_2233_; size_t v___x_2234_; lean_object* v___x_2235_; 
v___x_2233_ = ((size_t)0ULL);
v___x_2234_ = lean_usize_of_nat(v___x_2229_);
lean_inc_ref(v_getTokens_1571_);
lean_inc_ref(v_text_1570_);
v___x_2235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2228_, v___x_2233_, v___x_2234_, v___x_2231_, v_snd_2187_);
lean_dec(v___x_2228_);
v___y_2224_ = v___x_2235_;
goto v___jp_2223_;
}
}
else
{
size_t v___x_2236_; size_t v___x_2237_; lean_object* v___x_2238_; 
v___x_2236_ = ((size_t)0ULL);
v___x_2237_ = lean_usize_of_nat(v___x_2229_);
lean_inc_ref(v_getTokens_1571_);
lean_inc_ref(v_text_1570_);
v___x_2238_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2228_, v___x_2236_, v___x_2237_, v___x_2231_, v_snd_2187_);
lean_dec(v___x_2228_);
v___y_2224_ = v___x_2238_;
goto v___jp_2223_;
}
}
v___jp_2198_:
{
lean_object* v_snd_2200_; lean_object* v___x_2201_; 
v_snd_2200_ = lean_ctor_get(v___y_2199_, 1);
lean_inc(v_snd_2200_);
lean_dec_ref(v___y_2199_);
v___x_2201_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk4_2197_, v___x_2180_, v_snd_2200_);
return v___x_2201_;
}
v___jp_2204_:
{
lean_object* v___x_2206_; lean_object* v_snd_2207_; lean_object* v___x_2208_; lean_object* v_snd_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; uint8_t v___x_2212_; 
v___x_2206_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2191_, v___x_2180_, v_snd_2205_);
v_snd_2207_ = lean_ctor_get(v___x_2206_, 1);
lean_inc(v_snd_2207_);
lean_dec_ref(v___x_2206_);
v___x_2208_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk3_2193_, v___x_2180_, v_snd_2207_);
v_snd_2209_ = lean_ctor_get(v___x_2208_, 1);
lean_inc(v_snd_2209_);
lean_dec_ref(v___x_2208_);
v___x_2210_ = l_unsafeCast___redArg(v_inls_2203_);
lean_dec(v_inls_2203_);
v___x_2211_ = lean_array_get_size(v___x_2210_);
v___x_2212_ = lean_nat_dec_lt(v___x_2178_, v___x_2211_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; 
lean_dec(v___x_2210_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2213_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk4_2197_, v___x_2180_, v_snd_2209_);
return v___x_2213_;
}
else
{
lean_object* v___x_2214_; uint8_t v___x_2215_; 
v___x_2214_ = lean_box(0);
v___x_2215_ = lean_nat_dec_le(v___x_2211_, v___x_2211_);
if (v___x_2215_ == 0)
{
if (v___x_2212_ == 0)
{
lean_object* v___x_2216_; 
lean_dec(v___x_2210_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2216_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk4_2197_, v___x_2180_, v_snd_2209_);
return v___x_2216_;
}
else
{
size_t v___x_2217_; size_t v___x_2218_; lean_object* v___x_2219_; 
v___x_2217_ = ((size_t)0ULL);
v___x_2218_ = lean_usize_of_nat(v___x_2211_);
v___x_2219_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2210_, v___x_2217_, v___x_2218_, v___x_2214_, v_snd_2209_);
lean_dec(v___x_2210_);
v___y_2199_ = v___x_2219_;
goto v___jp_2198_;
}
}
else
{
size_t v___x_2220_; size_t v___x_2221_; lean_object* v___x_2222_; 
v___x_2220_ = ((size_t)0ULL);
v___x_2221_ = lean_usize_of_nat(v___x_2211_);
v___x_2222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2210_, v___x_2220_, v___x_2221_, v___x_2214_, v_snd_2209_);
lean_dec(v___x_2210_);
v___y_2199_ = v___x_2222_;
goto v___jp_2198_;
}
}
}
v___jp_2223_:
{
lean_object* v_snd_2225_; 
v_snd_2225_ = lean_ctor_get(v___y_2224_, 1);
lean_inc(v_snd_2225_);
lean_dec_ref(v___y_2224_);
v_snd_2205_ = v_snd_2225_;
goto v___jp_2204_;
}
}
}
else
{
lean_object* v___x_2239_; lean_object* v_tk1_2240_; uint8_t v___x_2241_; lean_object* v___x_2242_; lean_object* v_snd_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; uint8_t v___x_2246_; lean_object* v___x_2247_; lean_object* v_snd_2248_; lean_object* v___x_2249_; lean_object* v_tk2_2250_; lean_object* v___x_2251_; 
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2239_ = lean_unsigned_to_nat(0u);
v_tk1_2240_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2239_);
v___x_2241_ = 0;
v___x_2242_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2240_, v___x_2241_, v_a_1573_);
v_snd_2243_ = lean_ctor_get(v___x_2242_, 1);
lean_inc(v_snd_2243_);
lean_dec_ref(v___x_2242_);
v___x_2244_ = lean_unsigned_to_nat(1u);
v___x_2245_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2244_);
v___x_2246_ = 18;
v___x_2247_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2245_, v___x_2246_, v_snd_2243_);
v_snd_2248_ = lean_ctor_get(v___x_2247_, 1);
lean_inc(v_snd_2248_);
lean_dec_ref(v___x_2247_);
v___x_2249_ = lean_unsigned_to_nat(2u);
v_tk2_2250_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2249_);
lean_dec(v_stx_1572_);
v___x_2251_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2250_, v___x_2241_, v_snd_2248_);
return v___x_2251_;
}
}
else
{
lean_object* v___x_2252_; lean_object* v_tk1_2253_; uint8_t v___x_2254_; lean_object* v___x_2255_; lean_object* v_snd_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; uint8_t v___x_2259_; lean_object* v___x_2260_; lean_object* v_snd_2261_; lean_object* v___x_2262_; lean_object* v_tk2_2263_; lean_object* v___x_2264_; 
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2252_ = lean_unsigned_to_nat(0u);
v_tk1_2253_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2252_);
v___x_2254_ = 0;
v___x_2255_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2253_, v___x_2254_, v_a_1573_);
v_snd_2256_ = lean_ctor_get(v___x_2255_, 1);
lean_inc(v_snd_2256_);
lean_dec_ref(v___x_2255_);
v___x_2257_ = lean_unsigned_to_nat(1u);
v___x_2258_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2257_);
v___x_2259_ = 2;
v___x_2260_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2258_, v___x_2259_, v_snd_2256_);
v_snd_2261_ = lean_ctor_get(v___x_2260_, 1);
lean_inc(v_snd_2261_);
lean_dec_ref(v___x_2260_);
v___x_2262_ = lean_unsigned_to_nat(2u);
v_tk2_2263_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2262_);
lean_dec(v_stx_1572_);
v___x_2264_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2263_, v___x_2254_, v_snd_2261_);
return v___x_2264_;
}
}
else
{
lean_object* v___x_2265_; lean_object* v_tk1_2266_; uint8_t v___x_2267_; lean_object* v___x_2268_; lean_object* v_snd_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; uint8_t v___x_2272_; lean_object* v___x_2273_; lean_object* v_snd_2274_; lean_object* v___x_2275_; lean_object* v_tk2_2276_; lean_object* v___x_2277_; lean_object* v_snd_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2265_ = lean_unsigned_to_nat(0u);
v_tk1_2266_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2265_);
v___x_2267_ = 0;
v___x_2268_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2266_, v___x_2267_, v_a_1573_);
v_snd_2269_ = lean_ctor_get(v___x_2268_, 1);
lean_inc(v_snd_2269_);
lean_dec_ref(v___x_2268_);
v___x_2270_ = lean_unsigned_to_nat(1u);
v___x_2271_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2270_);
v___x_2272_ = 18;
v___x_2273_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2271_, v___x_2272_, v_snd_2269_);
v_snd_2274_ = lean_ctor_get(v___x_2273_, 1);
lean_inc(v_snd_2274_);
lean_dec_ref(v___x_2273_);
v___x_2275_ = lean_unsigned_to_nat(2u);
v_tk2_2276_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2275_);
v___x_2277_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2276_, v___x_2267_, v_snd_2274_);
v_snd_2278_ = lean_ctor_get(v___x_2277_, 1);
lean_inc(v_snd_2278_);
lean_dec_ref(v___x_2277_);
v___x_2279_ = lean_unsigned_to_nat(3u);
v___x_2280_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2279_);
lean_dec(v_stx_1572_);
v_stx_1572_ = v___x_2280_;
v_a_1573_ = v_snd_2278_;
goto _start;
}
}
else
{
lean_object* v___x_2282_; lean_object* v_tk1_2283_; uint8_t v___x_2284_; lean_object* v___x_2285_; lean_object* v_snd_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v_tk2_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v_snd_2294_; lean_object* v___y_2299_; lean_object* v___x_2301_; lean_object* v_inls_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; uint8_t v___x_2305_; 
v___x_2282_ = lean_unsigned_to_nat(0u);
v_tk1_2283_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2282_);
v___x_2284_ = 0;
v___x_2285_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2283_, v___x_2284_, v_a_1573_);
v_snd_2286_ = lean_ctor_get(v___x_2285_, 1);
lean_inc(v_snd_2286_);
lean_dec_ref(v___x_2285_);
v___x_2287_ = lean_unsigned_to_nat(1u);
v___x_2288_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2287_);
v___x_2289_ = lean_unsigned_to_nat(2u);
v_tk2_2290_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2289_);
v___x_2291_ = lean_unsigned_to_nat(3u);
v___x_2292_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2291_);
lean_dec(v_stx_1572_);
v___x_2301_ = l_Lean_Syntax_getArgs(v___x_2288_);
lean_dec(v___x_2288_);
v_inls_2302_ = l_unsafeCast___redArg(v___x_2301_);
lean_dec_ref(v___x_2301_);
v___x_2303_ = l_unsafeCast___redArg(v_inls_2302_);
lean_dec(v_inls_2302_);
v___x_2304_ = lean_array_get_size(v___x_2303_);
v___x_2305_ = lean_nat_dec_lt(v___x_2282_, v___x_2304_);
if (v___x_2305_ == 0)
{
lean_dec(v___x_2303_);
v_snd_2294_ = v_snd_2286_;
goto v___jp_2293_;
}
else
{
lean_object* v___x_2306_; uint8_t v___x_2307_; 
v___x_2306_ = lean_box(0);
v___x_2307_ = lean_nat_dec_le(v___x_2304_, v___x_2304_);
if (v___x_2307_ == 0)
{
if (v___x_2305_ == 0)
{
lean_dec(v___x_2303_);
v_snd_2294_ = v_snd_2286_;
goto v___jp_2293_;
}
else
{
size_t v___x_2308_; size_t v___x_2309_; lean_object* v___x_2310_; 
v___x_2308_ = ((size_t)0ULL);
v___x_2309_ = lean_usize_of_nat(v___x_2304_);
lean_inc_ref(v_getTokens_1571_);
lean_inc_ref(v_text_1570_);
v___x_2310_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2303_, v___x_2308_, v___x_2309_, v___x_2306_, v_snd_2286_);
lean_dec(v___x_2303_);
v___y_2299_ = v___x_2310_;
goto v___jp_2298_;
}
}
else
{
size_t v___x_2311_; size_t v___x_2312_; lean_object* v___x_2313_; 
v___x_2311_ = ((size_t)0ULL);
v___x_2312_ = lean_usize_of_nat(v___x_2304_);
lean_inc_ref(v_getTokens_1571_);
lean_inc_ref(v_text_1570_);
v___x_2313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2303_, v___x_2311_, v___x_2312_, v___x_2306_, v_snd_2286_);
lean_dec(v___x_2303_);
v___y_2299_ = v___x_2313_;
goto v___jp_2298_;
}
}
v___jp_2293_:
{
lean_object* v___x_2295_; lean_object* v_snd_2296_; 
v___x_2295_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2290_, v___x_2284_, v_snd_2294_);
v_snd_2296_ = lean_ctor_get(v___x_2295_, 1);
lean_inc(v_snd_2296_);
lean_dec_ref(v___x_2295_);
v_stx_1572_ = v___x_2292_;
v_a_1573_ = v_snd_2296_;
goto _start;
}
v___jp_2298_:
{
lean_object* v_snd_2300_; 
v_snd_2300_ = lean_ctor_get(v___y_2299_, 1);
lean_inc(v_snd_2300_);
lean_dec_ref(v___y_2299_);
v_snd_2294_ = v_snd_2300_;
goto v___jp_2293_;
}
}
}
else
{
lean_object* v___x_2314_; lean_object* v_tk1_2315_; uint8_t v___x_2316_; lean_object* v___x_2317_; lean_object* v_snd_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v_tk2_2322_; lean_object* v___y_2324_; lean_object* v___x_2327_; lean_object* v_inls_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; uint8_t v___x_2331_; 
v___x_2314_ = lean_unsigned_to_nat(0u);
v_tk1_2315_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2314_);
v___x_2316_ = 0;
v___x_2317_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2315_, v___x_2316_, v_a_1573_);
v_snd_2318_ = lean_ctor_get(v___x_2317_, 1);
lean_inc(v_snd_2318_);
lean_dec_ref(v___x_2317_);
v___x_2319_ = lean_unsigned_to_nat(1u);
v___x_2320_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2319_);
v___x_2321_ = lean_unsigned_to_nat(2u);
v_tk2_2322_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2321_);
lean_dec(v_stx_1572_);
v___x_2327_ = l_Lean_Syntax_getArgs(v___x_2320_);
lean_dec(v___x_2320_);
v_inls_2328_ = l_unsafeCast___redArg(v___x_2327_);
lean_dec_ref(v___x_2327_);
v___x_2329_ = l_unsafeCast___redArg(v_inls_2328_);
lean_dec(v_inls_2328_);
v___x_2330_ = lean_array_get_size(v___x_2329_);
v___x_2331_ = lean_nat_dec_lt(v___x_2314_, v___x_2330_);
if (v___x_2331_ == 0)
{
lean_object* v___x_2332_; 
lean_dec(v___x_2329_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2332_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2322_, v___x_2316_, v_snd_2318_);
return v___x_2332_;
}
else
{
lean_object* v___x_2333_; uint8_t v___x_2334_; 
v___x_2333_ = lean_box(0);
v___x_2334_ = lean_nat_dec_le(v___x_2330_, v___x_2330_);
if (v___x_2334_ == 0)
{
if (v___x_2331_ == 0)
{
lean_object* v___x_2335_; 
lean_dec(v___x_2329_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2335_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2322_, v___x_2316_, v_snd_2318_);
return v___x_2335_;
}
else
{
size_t v___x_2336_; size_t v___x_2337_; lean_object* v___x_2338_; 
v___x_2336_ = ((size_t)0ULL);
v___x_2337_ = lean_usize_of_nat(v___x_2330_);
v___x_2338_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2329_, v___x_2336_, v___x_2337_, v___x_2333_, v_snd_2318_);
lean_dec(v___x_2329_);
v___y_2324_ = v___x_2338_;
goto v___jp_2323_;
}
}
else
{
size_t v___x_2339_; size_t v___x_2340_; lean_object* v___x_2341_; 
v___x_2339_ = ((size_t)0ULL);
v___x_2340_ = lean_usize_of_nat(v___x_2330_);
v___x_2341_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2329_, v___x_2339_, v___x_2340_, v___x_2333_, v_snd_2318_);
lean_dec(v___x_2329_);
v___y_2324_ = v___x_2341_;
goto v___jp_2323_;
}
}
v___jp_2323_:
{
lean_object* v_snd_2325_; lean_object* v___x_2326_; 
v_snd_2325_ = lean_ctor_get(v___y_2324_, 1);
lean_inc(v_snd_2325_);
lean_dec_ref(v___y_2324_);
v___x_2326_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2322_, v___x_2316_, v_snd_2325_);
return v___x_2326_;
}
}
}
else
{
lean_object* v___x_2342_; lean_object* v_tk1_2343_; uint8_t v___x_2344_; lean_object* v___x_2345_; lean_object* v_snd_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v_tk2_2350_; lean_object* v___y_2352_; lean_object* v___x_2355_; lean_object* v_inls_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; uint8_t v___x_2359_; 
v___x_2342_ = lean_unsigned_to_nat(0u);
v_tk1_2343_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2342_);
v___x_2344_ = 0;
v___x_2345_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2343_, v___x_2344_, v_a_1573_);
v_snd_2346_ = lean_ctor_get(v___x_2345_, 1);
lean_inc(v_snd_2346_);
lean_dec_ref(v___x_2345_);
v___x_2347_ = lean_unsigned_to_nat(1u);
v___x_2348_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2347_);
v___x_2349_ = lean_unsigned_to_nat(2u);
v_tk2_2350_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2349_);
lean_dec(v_stx_1572_);
v___x_2355_ = l_Lean_Syntax_getArgs(v___x_2348_);
lean_dec(v___x_2348_);
v_inls_2356_ = l_unsafeCast___redArg(v___x_2355_);
lean_dec_ref(v___x_2355_);
v___x_2357_ = l_unsafeCast___redArg(v_inls_2356_);
lean_dec(v_inls_2356_);
v___x_2358_ = lean_array_get_size(v___x_2357_);
v___x_2359_ = lean_nat_dec_lt(v___x_2342_, v___x_2358_);
if (v___x_2359_ == 0)
{
lean_object* v___x_2360_; 
lean_dec(v___x_2357_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2360_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2350_, v___x_2344_, v_snd_2346_);
return v___x_2360_;
}
else
{
lean_object* v___x_2361_; uint8_t v___x_2362_; 
v___x_2361_ = lean_box(0);
v___x_2362_ = lean_nat_dec_le(v___x_2358_, v___x_2358_);
if (v___x_2362_ == 0)
{
if (v___x_2359_ == 0)
{
lean_object* v___x_2363_; 
lean_dec(v___x_2357_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2363_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2350_, v___x_2344_, v_snd_2346_);
return v___x_2363_;
}
else
{
size_t v___x_2364_; size_t v___x_2365_; lean_object* v___x_2366_; 
v___x_2364_ = ((size_t)0ULL);
v___x_2365_ = lean_usize_of_nat(v___x_2358_);
v___x_2366_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2357_, v___x_2364_, v___x_2365_, v___x_2361_, v_snd_2346_);
lean_dec(v___x_2357_);
v___y_2352_ = v___x_2366_;
goto v___jp_2351_;
}
}
else
{
size_t v___x_2367_; size_t v___x_2368_; lean_object* v___x_2369_; 
v___x_2367_ = ((size_t)0ULL);
v___x_2368_ = lean_usize_of_nat(v___x_2358_);
v___x_2369_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2357_, v___x_2367_, v___x_2368_, v___x_2361_, v_snd_2346_);
lean_dec(v___x_2357_);
v___y_2352_ = v___x_2369_;
goto v___jp_2351_;
}
}
v___jp_2351_:
{
lean_object* v_snd_2353_; lean_object* v___x_2354_; 
v_snd_2353_ = lean_ctor_get(v___y_2352_, 1);
lean_inc(v_snd_2353_);
lean_dec_ref(v___y_2352_);
v___x_2354_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2350_, v___x_2344_, v_snd_2353_);
return v___x_2354_;
}
}
}
else
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2370_ = lean_box(0);
v___x_2371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2370_);
lean_ctor_set(v___x_2371_, 1, v_a_1573_);
return v___x_2371_;
}
}
else
{
if (v___x_1609_ == 0)
{
lean_object* v___x_2372_; lean_object* v___x_2387_; lean_object* v___x_2388_; uint8_t v___x_2389_; 
v___x_2372_ = lean_unsigned_to_nat(0u);
v___x_2387_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2372_);
v___x_2388_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__73));
v___x_2389_ = l_Lean_Syntax_isOfKind(v___x_2387_, v___x_2388_);
if (v___x_2389_ == 0)
{
lean_object* v_k_2390_; lean_object* v___x_2391_; uint8_t v___x_2392_; 
lean_inc(v_stx_1572_);
v_k_2390_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_2391_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_2392_ = lean_name_eq(v_k_2390_, v___x_2391_);
if (v___x_2392_ == 0)
{
lean_object* v___x_2393_; uint8_t v___x_2394_; 
v___x_2393_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_2394_ = lean_name_eq(v_k_2390_, v___x_2393_);
lean_dec(v_k_2390_);
if (v___x_2394_ == 0)
{
lean_object* v___x_2395_; lean_object* v___x_2396_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2395_ = lean_box(0);
v___x_2396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
lean_ctor_set(v___x_2396_, 1, v_a_1573_);
return v___x_2396_;
}
else
{
goto v___jp_2373_;
}
}
else
{
lean_dec(v_k_2390_);
goto v___jp_2373_;
}
}
else
{
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
goto v___jp_1589_;
}
v___jp_2373_:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; uint8_t v___x_2377_; 
v___x_2374_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_2375_ = lean_array_get_size(v___x_2374_);
v___x_2376_ = lean_box(0);
v___x_2377_ = lean_nat_dec_lt(v___x_2372_, v___x_2375_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2378_; 
lean_dec_ref(v___x_2374_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2376_);
lean_ctor_set(v___x_2378_, 1, v_a_1573_);
return v___x_2378_;
}
else
{
uint8_t v___x_2379_; 
v___x_2379_ = lean_nat_dec_le(v___x_2375_, v___x_2375_);
if (v___x_2379_ == 0)
{
if (v___x_2377_ == 0)
{
lean_object* v___x_2380_; 
lean_dec_ref(v___x_2374_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2376_);
lean_ctor_set(v___x_2380_, 1, v_a_1573_);
return v___x_2380_;
}
else
{
size_t v___x_2381_; size_t v___x_2382_; lean_object* v___x_2383_; 
v___x_2381_ = ((size_t)0ULL);
v___x_2382_ = lean_usize_of_nat(v___x_2375_);
v___x_2383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2374_, v___x_2381_, v___x_2382_, v___x_2376_, v_a_1573_);
lean_dec_ref(v___x_2374_);
return v___x_2383_;
}
}
else
{
size_t v___x_2384_; size_t v___x_2385_; lean_object* v___x_2386_; 
v___x_2384_ = ((size_t)0ULL);
v___x_2385_ = lean_usize_of_nat(v___x_2375_);
v___x_2386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2374_, v___x_2384_, v___x_2385_, v___x_2376_, v_a_1573_);
lean_dec_ref(v___x_2374_);
return v___x_2386_;
}
}
}
}
else
{
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
goto v___jp_1589_;
}
}
}
else
{
lean_object* v___x_2397_; lean_object* v_tk1_2398_; uint8_t v___x_2399_; lean_object* v___x_2400_; lean_object* v_snd_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; uint8_t v___x_2404_; lean_object* v___x_2405_; lean_object* v_snd_2406_; lean_object* v___x_2407_; lean_object* v_tk2_2408_; lean_object* v___x_2409_; 
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2397_ = lean_unsigned_to_nat(0u);
v_tk1_2398_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2397_);
v___x_2399_ = 0;
v___x_2400_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2398_, v___x_2399_, v_a_1573_);
v_snd_2401_ = lean_ctor_get(v___x_2400_, 1);
lean_inc(v_snd_2401_);
lean_dec_ref(v___x_2400_);
v___x_2402_ = lean_unsigned_to_nat(1u);
v___x_2403_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2402_);
v___x_2404_ = 18;
v___x_2405_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2403_, v___x_2404_, v_snd_2401_);
v_snd_2406_ = lean_ctor_get(v___x_2405_, 1);
lean_inc(v_snd_2406_);
lean_dec_ref(v___x_2405_);
v___x_2407_ = lean_unsigned_to_nat(2u);
v_tk2_2408_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2407_);
lean_dec(v_stx_1572_);
v___x_2409_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2408_, v___x_2399_, v_snd_2406_);
return v___x_2409_;
}
}
else
{
lean_object* v___x_2410_; lean_object* v_tk1_2411_; uint8_t v___x_2412_; lean_object* v___x_2413_; lean_object* v_snd_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; uint8_t v___x_2417_; lean_object* v___x_2418_; lean_object* v_snd_2419_; lean_object* v___x_2420_; lean_object* v_tk2_2421_; lean_object* v___x_2422_; 
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2410_ = lean_unsigned_to_nat(0u);
v_tk1_2411_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2410_);
v___x_2412_ = 0;
v___x_2413_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2411_, v___x_2412_, v_a_1573_);
v_snd_2414_ = lean_ctor_get(v___x_2413_, 1);
lean_inc(v_snd_2414_);
lean_dec_ref(v___x_2413_);
v___x_2415_ = lean_unsigned_to_nat(1u);
v___x_2416_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2415_);
v___x_2417_ = 2;
v___x_2418_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2416_, v___x_2417_, v_snd_2414_);
v_snd_2419_ = lean_ctor_get(v___x_2418_, 1);
lean_inc(v_snd_2419_);
lean_dec_ref(v___x_2418_);
v___x_2420_ = lean_unsigned_to_nat(2u);
v_tk2_2421_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2420_);
lean_dec(v_stx_1572_);
v___x_2422_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2421_, v___x_2412_, v_snd_2419_);
return v___x_2422_;
}
}
else
{
lean_object* v___x_2423_; lean_object* v_tk_2424_; uint8_t v___x_2425_; lean_object* v___x_2426_; lean_object* v_snd_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; uint8_t v___x_2430_; lean_object* v___x_2431_; 
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2423_ = lean_unsigned_to_nat(0u);
v_tk_2424_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2423_);
v___x_2425_ = 0;
v___x_2426_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk_2424_, v___x_2425_, v_a_1573_);
v_snd_2427_ = lean_ctor_get(v___x_2426_, 1);
lean_inc(v_snd_2427_);
lean_dec_ref(v___x_2426_);
v___x_2428_ = lean_unsigned_to_nat(1u);
v___x_2429_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2428_);
lean_dec(v_stx_1572_);
v___x_2430_ = 2;
v___x_2431_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2429_, v___x_2430_, v_snd_2427_);
return v___x_2431_;
}
}
else
{
lean_object* v___x_2432_; lean_object* v_tk_2433_; uint8_t v___x_2434_; lean_object* v___x_2435_; lean_object* v_snd_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; uint8_t v___x_2439_; lean_object* v___x_2440_; 
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2432_ = lean_unsigned_to_nat(0u);
v_tk_2433_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2432_);
v___x_2434_ = 0;
v___x_2435_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk_2433_, v___x_2434_, v_a_1573_);
v_snd_2436_ = lean_ctor_get(v___x_2435_, 1);
lean_inc(v_snd_2436_);
lean_dec_ref(v___x_2435_);
v___x_2437_ = lean_unsigned_to_nat(1u);
v___x_2438_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2437_);
lean_dec(v_stx_1572_);
v___x_2439_ = 2;
v___x_2440_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2438_, v___x_2439_, v_snd_2436_);
return v___x_2440_;
}
}
else
{
lean_object* v___x_2441_; lean_object* v___x_2456_; 
v___x_2441_ = lean_unsigned_to_nat(0u);
v___x_2456_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2441_);
if (v___x_1599_ == 0)
{
lean_object* v___x_2469_; uint8_t v___x_2470_; 
v___x_2469_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__75));
lean_inc(v___x_2456_);
v___x_2470_ = l_Lean_Syntax_isOfKind(v___x_2456_, v___x_2469_);
if (v___x_2470_ == 0)
{
lean_object* v_k_2471_; lean_object* v___x_2472_; uint8_t v___x_2473_; 
lean_dec(v___x_2456_);
lean_inc(v_stx_1572_);
v_k_2471_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_2472_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_2473_ = lean_name_eq(v_k_2471_, v___x_2472_);
if (v___x_2473_ == 0)
{
lean_object* v___x_2474_; uint8_t v___x_2475_; 
v___x_2474_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_2475_ = lean_name_eq(v_k_2471_, v___x_2474_);
lean_dec(v_k_2471_);
if (v___x_2475_ == 0)
{
lean_object* v___x_2476_; lean_object* v___x_2477_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2476_ = lean_box(0);
v___x_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
lean_ctor_set(v___x_2477_, 1, v_a_1573_);
return v___x_2477_;
}
else
{
goto v___jp_2442_;
}
}
else
{
lean_dec(v_k_2471_);
goto v___jp_2442_;
}
}
else
{
goto v___jp_2457_;
}
}
else
{
goto v___jp_2457_;
}
v___jp_2442_:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; uint8_t v___x_2446_; 
v___x_2443_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_2444_ = lean_array_get_size(v___x_2443_);
v___x_2445_ = lean_box(0);
v___x_2446_ = lean_nat_dec_lt(v___x_2441_, v___x_2444_);
if (v___x_2446_ == 0)
{
lean_object* v___x_2447_; 
lean_dec_ref(v___x_2443_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2445_);
lean_ctor_set(v___x_2447_, 1, v_a_1573_);
return v___x_2447_;
}
else
{
uint8_t v___x_2448_; 
v___x_2448_ = lean_nat_dec_le(v___x_2444_, v___x_2444_);
if (v___x_2448_ == 0)
{
if (v___x_2446_ == 0)
{
lean_object* v___x_2449_; 
lean_dec_ref(v___x_2443_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2445_);
lean_ctor_set(v___x_2449_, 1, v_a_1573_);
return v___x_2449_;
}
else
{
size_t v___x_2450_; size_t v___x_2451_; lean_object* v___x_2452_; 
v___x_2450_ = ((size_t)0ULL);
v___x_2451_ = lean_usize_of_nat(v___x_2444_);
v___x_2452_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2443_, v___x_2450_, v___x_2451_, v___x_2445_, v_a_1573_);
lean_dec_ref(v___x_2443_);
return v___x_2452_;
}
}
else
{
size_t v___x_2453_; size_t v___x_2454_; lean_object* v___x_2455_; 
v___x_2453_ = ((size_t)0ULL);
v___x_2454_ = lean_usize_of_nat(v___x_2444_);
v___x_2455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2443_, v___x_2453_, v___x_2454_, v___x_2445_, v_a_1573_);
lean_dec_ref(v___x_2443_);
return v___x_2455_;
}
}
}
v___jp_2457_:
{
uint8_t v___x_2458_; lean_object* v___x_2459_; lean_object* v_snd_2460_; lean_object* v___x_2461_; lean_object* v_tk_2462_; uint8_t v___x_2463_; lean_object* v___x_2464_; lean_object* v_snd_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2458_ = 2;
v___x_2459_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2456_, v___x_2458_, v_a_1573_);
v_snd_2460_ = lean_ctor_get(v___x_2459_, 1);
lean_inc(v_snd_2460_);
lean_dec_ref(v___x_2459_);
v___x_2461_ = lean_unsigned_to_nat(1u);
v_tk_2462_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2461_);
v___x_2463_ = 0;
v___x_2464_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk_2462_, v___x_2463_, v_snd_2460_);
v_snd_2465_ = lean_ctor_get(v___x_2464_, 1);
lean_inc(v_snd_2465_);
lean_dec_ref(v___x_2464_);
v___x_2466_ = lean_unsigned_to_nat(2u);
v___x_2467_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2466_);
lean_dec(v_stx_1572_);
v_stx_1572_ = v___x_2467_;
v_a_1573_ = v_snd_2465_;
goto _start;
}
}
}
else
{
lean_object* v___x_2478_; lean_object* v_tk1_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2478_ = lean_unsigned_to_nat(0u);
v_tk1_2493_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2478_);
v___x_2494_ = lean_unsigned_to_nat(1u);
v___x_2495_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2494_);
if (v___x_1597_ == 0)
{
lean_object* v___x_2514_; uint8_t v___x_2515_; 
v___x_2514_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__75));
lean_inc(v___x_2495_);
v___x_2515_ = l_Lean_Syntax_isOfKind(v___x_2495_, v___x_2514_);
if (v___x_2515_ == 0)
{
lean_object* v_k_2516_; lean_object* v___x_2517_; uint8_t v___x_2518_; 
lean_dec(v___x_2495_);
lean_dec(v_tk1_2493_);
lean_inc(v_stx_1572_);
v_k_2516_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_2517_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_2518_ = lean_name_eq(v_k_2516_, v___x_2517_);
if (v___x_2518_ == 0)
{
lean_object* v___x_2519_; uint8_t v___x_2520_; 
v___x_2519_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_2520_ = lean_name_eq(v_k_2516_, v___x_2519_);
lean_dec(v_k_2516_);
if (v___x_2520_ == 0)
{
lean_object* v___x_2521_; lean_object* v___x_2522_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2521_ = lean_box(0);
v___x_2522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2521_);
lean_ctor_set(v___x_2522_, 1, v_a_1573_);
return v___x_2522_;
}
else
{
goto v___jp_2479_;
}
}
else
{
lean_dec(v_k_2516_);
goto v___jp_2479_;
}
}
else
{
goto v___jp_2496_;
}
}
else
{
goto v___jp_2496_;
}
v___jp_2479_:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; uint8_t v___x_2483_; 
v___x_2480_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_2481_ = lean_array_get_size(v___x_2480_);
v___x_2482_ = lean_box(0);
v___x_2483_ = lean_nat_dec_lt(v___x_2478_, v___x_2481_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; 
lean_dec_ref(v___x_2480_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2482_);
lean_ctor_set(v___x_2484_, 1, v_a_1573_);
return v___x_2484_;
}
else
{
uint8_t v___x_2485_; 
v___x_2485_ = lean_nat_dec_le(v___x_2481_, v___x_2481_);
if (v___x_2485_ == 0)
{
if (v___x_2483_ == 0)
{
lean_object* v___x_2486_; 
lean_dec_ref(v___x_2480_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2482_);
lean_ctor_set(v___x_2486_, 1, v_a_1573_);
return v___x_2486_;
}
else
{
size_t v___x_2487_; size_t v___x_2488_; lean_object* v___x_2489_; 
v___x_2487_ = ((size_t)0ULL);
v___x_2488_ = lean_usize_of_nat(v___x_2481_);
v___x_2489_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2480_, v___x_2487_, v___x_2488_, v___x_2482_, v_a_1573_);
lean_dec_ref(v___x_2480_);
return v___x_2489_;
}
}
else
{
size_t v___x_2490_; size_t v___x_2491_; lean_object* v___x_2492_; 
v___x_2490_ = ((size_t)0ULL);
v___x_2491_ = lean_usize_of_nat(v___x_2481_);
v___x_2492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2480_, v___x_2490_, v___x_2491_, v___x_2482_, v_a_1573_);
lean_dec_ref(v___x_2480_);
return v___x_2492_;
}
}
}
v___jp_2496_:
{
uint8_t v___x_2497_; lean_object* v___x_2498_; lean_object* v_snd_2499_; uint8_t v___x_2500_; lean_object* v___x_2501_; lean_object* v_snd_2502_; lean_object* v___x_2503_; lean_object* v_tk2_2504_; lean_object* v___x_2505_; lean_object* v_snd_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v_snd_2510_; lean_object* v___x_2511_; lean_object* v_tk3_2512_; lean_object* v___x_2513_; 
v___x_2497_ = 0;
v___x_2498_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk1_2493_, v___x_2497_, v_a_1573_);
v_snd_2499_ = lean_ctor_get(v___x_2498_, 1);
lean_inc(v_snd_2499_);
lean_dec_ref(v___x_2498_);
v___x_2500_ = 2;
v___x_2501_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2495_, v___x_2500_, v_snd_2499_);
v_snd_2502_ = lean_ctor_get(v___x_2501_, 1);
lean_inc(v_snd_2502_);
lean_dec_ref(v___x_2501_);
v___x_2503_ = lean_unsigned_to_nat(2u);
v_tk2_2504_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2503_);
v___x_2505_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk2_2504_, v___x_2497_, v_snd_2502_);
v_snd_2506_ = lean_ctor_get(v___x_2505_, 1);
lean_inc(v_snd_2506_);
lean_dec_ref(v___x_2505_);
v___x_2507_ = lean_unsigned_to_nat(3u);
v___x_2508_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2507_);
v___x_2509_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go(v_text_1570_, v_getTokens_1571_, v___x_2508_, v_snd_2506_);
v_snd_2510_ = lean_ctor_get(v___x_2509_, 1);
lean_inc(v_snd_2510_);
lean_dec_ref(v___x_2509_);
v___x_2511_ = lean_unsigned_to_nat(4u);
v_tk3_2512_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2511_);
lean_dec(v_stx_1572_);
v___x_2513_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk3_2512_, v___x_2497_, v_snd_2510_);
return v___x_2513_;
}
}
}
else
{
lean_object* v___x_2523_; lean_object* v___x_2538_; 
v___x_2523_ = lean_unsigned_to_nat(0u);
v___x_2538_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2523_);
if (v___x_1595_ == 0)
{
lean_object* v___x_2542_; uint8_t v___x_2543_; 
v___x_2542_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__77));
lean_inc(v___x_2538_);
v___x_2543_ = l_Lean_Syntax_isOfKind(v___x_2538_, v___x_2542_);
if (v___x_2543_ == 0)
{
lean_object* v_k_2544_; lean_object* v___x_2545_; uint8_t v___x_2546_; 
lean_dec(v___x_2538_);
lean_inc(v_stx_1572_);
v_k_2544_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_2545_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_2546_ = lean_name_eq(v_k_2544_, v___x_2545_);
if (v___x_2546_ == 0)
{
lean_object* v___x_2547_; uint8_t v___x_2548_; 
v___x_2547_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_2548_ = lean_name_eq(v_k_2544_, v___x_2547_);
lean_dec(v_k_2544_);
if (v___x_2548_ == 0)
{
lean_object* v___x_2549_; lean_object* v___x_2550_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2549_ = lean_box(0);
v___x_2550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2549_);
lean_ctor_set(v___x_2550_, 1, v_a_1573_);
return v___x_2550_;
}
else
{
goto v___jp_2524_;
}
}
else
{
lean_dec(v_k_2544_);
goto v___jp_2524_;
}
}
else
{
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
goto v___jp_2539_;
}
}
else
{
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
goto v___jp_2539_;
}
v___jp_2524_:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; uint8_t v___x_2528_; 
v___x_2525_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_2526_ = lean_array_get_size(v___x_2525_);
v___x_2527_ = lean_box(0);
v___x_2528_ = lean_nat_dec_lt(v___x_2523_, v___x_2526_);
if (v___x_2528_ == 0)
{
lean_object* v___x_2529_; 
lean_dec_ref(v___x_2525_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2527_);
lean_ctor_set(v___x_2529_, 1, v_a_1573_);
return v___x_2529_;
}
else
{
uint8_t v___x_2530_; 
v___x_2530_ = lean_nat_dec_le(v___x_2526_, v___x_2526_);
if (v___x_2530_ == 0)
{
if (v___x_2528_ == 0)
{
lean_object* v___x_2531_; 
lean_dec_ref(v___x_2525_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2527_);
lean_ctor_set(v___x_2531_, 1, v_a_1573_);
return v___x_2531_;
}
else
{
size_t v___x_2532_; size_t v___x_2533_; lean_object* v___x_2534_; 
v___x_2532_ = ((size_t)0ULL);
v___x_2533_ = lean_usize_of_nat(v___x_2526_);
v___x_2534_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2525_, v___x_2532_, v___x_2533_, v___x_2527_, v_a_1573_);
lean_dec_ref(v___x_2525_);
return v___x_2534_;
}
}
else
{
size_t v___x_2535_; size_t v___x_2536_; lean_object* v___x_2537_; 
v___x_2535_ = ((size_t)0ULL);
v___x_2536_ = lean_usize_of_nat(v___x_2526_);
v___x_2537_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2525_, v___x_2535_, v___x_2536_, v___x_2527_, v_a_1573_);
lean_dec_ref(v___x_2525_);
return v___x_2537_;
}
}
}
v___jp_2539_:
{
uint8_t v___x_2540_; lean_object* v___x_2541_; 
v___x_2540_ = 11;
v___x_2541_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2538_, v___x_2540_, v_a_1573_);
return v___x_2541_;
}
}
}
else
{
lean_object* v___x_2551_; lean_object* v___x_2566_; 
v___x_2551_ = lean_unsigned_to_nat(0u);
v___x_2566_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2551_);
if (v___x_1593_ == 0)
{
lean_object* v___x_2570_; uint8_t v___x_2571_; 
v___x_2570_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__73));
lean_inc(v___x_2566_);
v___x_2571_ = l_Lean_Syntax_isOfKind(v___x_2566_, v___x_2570_);
if (v___x_2571_ == 0)
{
lean_object* v_k_2572_; lean_object* v___x_2573_; uint8_t v___x_2574_; 
lean_dec(v___x_2566_);
lean_inc(v_stx_1572_);
v_k_2572_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_2573_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_2574_ = lean_name_eq(v_k_2572_, v___x_2573_);
if (v___x_2574_ == 0)
{
lean_object* v___x_2575_; uint8_t v___x_2576_; 
v___x_2575_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_2576_ = lean_name_eq(v_k_2572_, v___x_2575_);
lean_dec(v_k_2572_);
if (v___x_2576_ == 0)
{
lean_object* v___x_2577_; lean_object* v___x_2578_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2577_ = lean_box(0);
v___x_2578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2577_);
lean_ctor_set(v___x_2578_, 1, v_a_1573_);
return v___x_2578_;
}
else
{
goto v___jp_2552_;
}
}
else
{
lean_dec(v_k_2572_);
goto v___jp_2552_;
}
}
else
{
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
goto v___jp_2567_;
}
}
else
{
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
goto v___jp_2567_;
}
v___jp_2552_:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; uint8_t v___x_2556_; 
v___x_2553_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_2554_ = lean_array_get_size(v___x_2553_);
v___x_2555_ = lean_box(0);
v___x_2556_ = lean_nat_dec_lt(v___x_2551_, v___x_2554_);
if (v___x_2556_ == 0)
{
lean_object* v___x_2557_; 
lean_dec_ref(v___x_2553_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2555_);
lean_ctor_set(v___x_2557_, 1, v_a_1573_);
return v___x_2557_;
}
else
{
uint8_t v___x_2558_; 
v___x_2558_ = lean_nat_dec_le(v___x_2554_, v___x_2554_);
if (v___x_2558_ == 0)
{
if (v___x_2556_ == 0)
{
lean_object* v___x_2559_; 
lean_dec_ref(v___x_2553_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2555_);
lean_ctor_set(v___x_2559_, 1, v_a_1573_);
return v___x_2559_;
}
else
{
size_t v___x_2560_; size_t v___x_2561_; lean_object* v___x_2562_; 
v___x_2560_ = ((size_t)0ULL);
v___x_2561_ = lean_usize_of_nat(v___x_2554_);
v___x_2562_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2553_, v___x_2560_, v___x_2561_, v___x_2555_, v_a_1573_);
lean_dec_ref(v___x_2553_);
return v___x_2562_;
}
}
else
{
size_t v___x_2563_; size_t v___x_2564_; lean_object* v___x_2565_; 
v___x_2563_ = ((size_t)0ULL);
v___x_2564_ = lean_usize_of_nat(v___x_2554_);
v___x_2565_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2553_, v___x_2563_, v___x_2564_, v___x_2555_, v_a_1573_);
lean_dec_ref(v___x_2553_);
return v___x_2565_;
}
}
}
v___jp_2567_:
{
uint8_t v___x_2568_; lean_object* v___x_2569_; 
v___x_2568_ = 11;
v___x_2569_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2566_, v___x_2568_, v_a_1573_);
return v___x_2569_;
}
}
}
else
{
lean_object* v___x_2579_; lean_object* v___x_2594_; lean_object* v___x_2595_; uint8_t v___x_2596_; 
v___x_2579_ = lean_unsigned_to_nat(0u);
v___x_2594_ = l_Lean_Syntax_getArg(v_stx_1572_, v___x_2579_);
v___x_2595_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__75));
lean_inc(v___x_2594_);
v___x_2596_ = l_Lean_Syntax_isOfKind(v___x_2594_, v___x_2595_);
if (v___x_2596_ == 0)
{
lean_object* v_k_2597_; lean_object* v___x_2598_; uint8_t v___x_2599_; 
lean_dec(v___x_2594_);
lean_inc(v_stx_1572_);
v_k_2597_ = l_Lean_Syntax_getKind(v_stx_1572_);
v___x_2598_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__67));
v___x_2599_ = lean_name_eq(v_k_2597_, v___x_2598_);
if (v___x_2599_ == 0)
{
lean_object* v___x_2600_; uint8_t v___x_2601_; 
v___x_2600_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__69));
v___x_2601_ = lean_name_eq(v_k_2597_, v___x_2600_);
lean_dec(v_k_2597_);
if (v___x_2601_ == 0)
{
lean_object* v___x_2602_; lean_object* v___x_2603_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2602_ = lean_box(0);
v___x_2603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2603_, 0, v___x_2602_);
lean_ctor_set(v___x_2603_, 1, v_a_1573_);
return v___x_2603_;
}
else
{
goto v___jp_2580_;
}
}
else
{
lean_dec(v_k_2597_);
goto v___jp_2580_;
}
}
else
{
uint8_t v___x_2604_; lean_object* v___x_2605_; 
lean_dec(v_stx_1572_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2604_ = 11;
v___x_2605_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v___x_2594_, v___x_2604_, v_a_1573_);
return v___x_2605_;
}
v___jp_2580_:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; uint8_t v___x_2584_; 
v___x_2581_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_2582_ = lean_array_get_size(v___x_2581_);
v___x_2583_ = lean_box(0);
v___x_2584_ = lean_nat_dec_lt(v___x_2579_, v___x_2582_);
if (v___x_2584_ == 0)
{
lean_object* v___x_2585_; 
lean_dec_ref(v___x_2581_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2583_);
lean_ctor_set(v___x_2585_, 1, v_a_1573_);
return v___x_2585_;
}
else
{
uint8_t v___x_2586_; 
v___x_2586_ = lean_nat_dec_le(v___x_2582_, v___x_2582_);
if (v___x_2586_ == 0)
{
if (v___x_2584_ == 0)
{
lean_object* v___x_2587_; 
lean_dec_ref(v___x_2581_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_2587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2583_);
lean_ctor_set(v___x_2587_, 1, v_a_1573_);
return v___x_2587_;
}
else
{
size_t v___x_2588_; size_t v___x_2589_; lean_object* v___x_2590_; 
v___x_2588_ = ((size_t)0ULL);
v___x_2589_ = lean_usize_of_nat(v___x_2582_);
v___x_2590_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2581_, v___x_2588_, v___x_2589_, v___x_2583_, v_a_1573_);
lean_dec_ref(v___x_2581_);
return v___x_2590_;
}
}
else
{
size_t v___x_2591_; size_t v___x_2592_; lean_object* v___x_2593_; 
v___x_2591_ = ((size_t)0ULL);
v___x_2592_ = lean_usize_of_nat(v___x_2582_);
v___x_2593_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_2581_, v___x_2591_, v___x_2592_, v___x_2583_, v_a_1573_);
lean_dec_ref(v___x_2581_);
return v___x_2593_;
}
}
}
}
v___jp_1574_:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; uint8_t v___x_1579_; 
v___x_1575_ = l_Lean_Syntax_getArgs(v_stx_1572_);
lean_dec(v_stx_1572_);
v___x_1576_ = lean_unsigned_to_nat(0u);
v___x_1577_ = lean_array_get_size(v___x_1575_);
v___x_1578_ = lean_box(0);
v___x_1579_ = lean_nat_dec_lt(v___x_1576_, v___x_1577_);
if (v___x_1579_ == 0)
{
lean_object* v___x_1580_; 
lean_dec_ref(v___x_1575_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1578_);
lean_ctor_set(v___x_1580_, 1, v_a_1573_);
return v___x_1580_;
}
else
{
uint8_t v___x_1581_; 
v___x_1581_ = lean_nat_dec_le(v___x_1577_, v___x_1577_);
if (v___x_1581_ == 0)
{
if (v___x_1579_ == 0)
{
lean_object* v___x_1582_; 
lean_dec_ref(v___x_1575_);
lean_dec_ref(v_getTokens_1571_);
lean_dec_ref(v_text_1570_);
v___x_1582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1578_);
lean_ctor_set(v___x_1582_, 1, v_a_1573_);
return v___x_1582_;
}
else
{
size_t v___x_1583_; size_t v___x_1584_; lean_object* v___x_1585_; 
v___x_1583_ = ((size_t)0ULL);
v___x_1584_ = lean_usize_of_nat(v___x_1577_);
v___x_1585_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1575_, v___x_1583_, v___x_1584_, v___x_1578_, v_a_1573_);
lean_dec_ref(v___x_1575_);
return v___x_1585_;
}
}
else
{
size_t v___x_1586_; size_t v___x_1587_; lean_object* v___x_1588_; 
v___x_1586_ = ((size_t)0ULL);
v___x_1587_ = lean_usize_of_nat(v___x_1577_);
v___x_1588_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_1570_, v_getTokens_1571_, v___x_1575_, v___x_1586_, v___x_1587_, v___x_1578_, v_a_1573_);
lean_dec_ref(v___x_1575_);
return v___x_1588_;
}
}
}
v___jp_1589_:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1590_ = lean_box(0);
v___x_1591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
lean_ctor_set(v___x_1591_, 1, v_a_1573_);
return v___x_1591_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(lean_object* v_text_2606_, lean_object* v_getTokens_2607_, lean_object* v_as_2608_, size_t v_i_2609_, size_t v_stop_2610_, lean_object* v_b_2611_, lean_object* v___y_2612_){
_start:
{
uint8_t v___x_2613_; 
v___x_2613_ = lean_usize_dec_eq(v_i_2609_, v_stop_2610_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v_fst_2616_; lean_object* v_snd_2617_; size_t v___x_2618_; size_t v___x_2619_; 
v___x_2614_ = lean_array_uget_borrowed(v_as_2608_, v_i_2609_);
lean_inc(v___x_2614_);
lean_inc_ref(v_getTokens_2607_);
lean_inc_ref(v_text_2606_);
v___x_2615_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go(v_text_2606_, v_getTokens_2607_, v___x_2614_, v___y_2612_);
v_fst_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_fst_2616_);
v_snd_2617_ = lean_ctor_get(v___x_2615_, 1);
lean_inc(v_snd_2617_);
lean_dec_ref(v___x_2615_);
v___x_2618_ = ((size_t)1ULL);
v___x_2619_ = lean_usize_add(v_i_2609_, v___x_2618_);
v_i_2609_ = v___x_2619_;
v_b_2611_ = v_fst_2616_;
v___y_2612_ = v_snd_2617_;
goto _start;
}
else
{
lean_object* v___x_2621_; 
lean_dec_ref(v_getTokens_2607_);
lean_dec_ref(v_text_2606_);
v___x_2621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2621_, 0, v_b_2611_);
lean_ctor_set(v___x_2621_, 1, v___y_2612_);
return v___x_2621_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0___boxed(lean_object* v_text_2622_, lean_object* v_getTokens_2623_, lean_object* v_as_2624_, lean_object* v_i_2625_, lean_object* v_stop_2626_, lean_object* v_b_2627_, lean_object* v___y_2628_){
_start:
{
size_t v_i_boxed_2629_; size_t v_stop_boxed_2630_; lean_object* v_res_2631_; 
v_i_boxed_2629_ = lean_unbox_usize(v_i_2625_);
lean_dec(v_i_2625_);
v_stop_boxed_2630_ = lean_unbox_usize(v_stop_2626_);
lean_dec(v_stop_2626_);
v_res_2631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__0(v_text_2622_, v_getTokens_2623_, v_as_2624_, v_i_boxed_2629_, v_stop_boxed_2630_, v_b_2627_, v___y_2628_);
lean_dec_ref(v_as_2624_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(lean_object* v_text_2634_, lean_object* v_stx_2635_, lean_object* v_getTokens_2636_){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v_snd_2639_; 
v___x_2637_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
v___x_2638_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go(v_text_2634_, v_getTokens_2636_, v_stx_2635_, v___x_2637_);
v_snd_2639_ = lean_ctor_get(v___x_2638_, 1);
lean_inc(v_snd_2639_);
lean_dec_ref(v___x_2638_);
return v_snd_2639_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(lean_object* v_s_2640_){
_start:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; uint8_t v_decide_2643_; 
v___x_2641_ = lean_unsigned_to_nat(0u);
v___x_2642_ = lean_string_utf8_byte_size(v_s_2640_);
v_decide_2643_ = lean_nat_dec_eq(v___x_2641_, v___x_2642_);
if (v_decide_2643_ == 0)
{
uint32_t v___x_2644_; uint32_t v___x_2645_; uint8_t v___x_2646_; 
v___x_2644_ = 35;
v___x_2645_ = lean_string_utf8_get_fast(v_s_2640_, v___x_2641_);
v___x_2646_ = lean_uint32_dec_eq(v___x_2645_, v___x_2644_);
if (v___x_2646_ == 0)
{
lean_object* v___x_2647_; 
lean_dec_ref(v_s_2640_);
v___x_2647_ = lean_box(0);
return v___x_2647_;
}
else
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2648_ = lean_string_utf8_next_fast(v_s_2640_, v___x_2641_);
v___x_2649_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2649_, 0, v_s_2640_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
lean_ctor_set(v___x_2649_, 2, v___x_2642_);
v___x_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2649_);
return v___x_2650_;
}
}
else
{
lean_object* v___x_2651_; 
lean_dec_ref(v_s_2640_);
v___x_2651_ = lean_box(0);
return v___x_2651_;
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2(lean_object* v_s_2652_, uint32_t v_pat_2653_){
_start:
{
lean_object* v___x_2654_; 
v___x_2654_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v_s_2652_);
return v___x_2654_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___boxed(lean_object* v_s_2655_, lean_object* v_pat_2656_){
_start:
{
uint32_t v_pat_boxed_2657_; lean_object* v_res_2658_; 
v_pat_boxed_2657_ = lean_unbox_uint32(v_pat_2656_);
lean_dec(v_pat_2656_);
v_res_2658_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2(v_s_2655_, v_pat_boxed_2657_);
return v_res_2658_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0(lean_object* v_a_2659_, lean_object* v_as_2660_, size_t v_i_2661_, size_t v_stop_2662_){
_start:
{
uint8_t v___x_2663_; 
v___x_2663_ = lean_usize_dec_eq(v_i_2661_, v_stop_2662_);
if (v___x_2663_ == 0)
{
lean_object* v___x_2664_; uint8_t v___x_2665_; 
v___x_2664_ = lean_array_uget_borrowed(v_as_2660_, v_i_2661_);
v___x_2665_ = lean_name_eq(v_a_2659_, v___x_2664_);
if (v___x_2665_ == 0)
{
size_t v___x_2666_; size_t v___x_2667_; 
v___x_2666_ = ((size_t)1ULL);
v___x_2667_ = lean_usize_add(v_i_2661_, v___x_2666_);
v_i_2661_ = v___x_2667_;
goto _start;
}
else
{
return v___x_2665_;
}
}
else
{
uint8_t v___x_2669_; 
v___x_2669_ = 0;
return v___x_2669_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0___boxed(lean_object* v_a_2670_, lean_object* v_as_2671_, lean_object* v_i_2672_, lean_object* v_stop_2673_){
_start:
{
size_t v_i_boxed_2674_; size_t v_stop_boxed_2675_; uint8_t v_res_2676_; lean_object* v_r_2677_; 
v_i_boxed_2674_ = lean_unbox_usize(v_i_2672_);
lean_dec(v_i_2672_);
v_stop_boxed_2675_ = lean_unbox_usize(v_stop_2673_);
lean_dec(v_stop_2673_);
v_res_2676_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0(v_a_2670_, v_as_2671_, v_i_boxed_2674_, v_stop_boxed_2675_);
lean_dec_ref(v_as_2671_);
lean_dec(v_a_2670_);
v_r_2677_ = lean_box(v_res_2676_);
return v_r_2677_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(lean_object* v_as_2678_, lean_object* v_a_2679_){
_start:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; uint8_t v___x_2682_; 
v___x_2680_ = lean_unsigned_to_nat(0u);
v___x_2681_ = lean_array_get_size(v_as_2678_);
v___x_2682_ = lean_nat_dec_lt(v___x_2680_, v___x_2681_);
if (v___x_2682_ == 0)
{
return v___x_2682_;
}
else
{
if (v___x_2682_ == 0)
{
return v___x_2682_;
}
else
{
size_t v___x_2683_; size_t v___x_2684_; uint8_t v___x_2685_; 
v___x_2683_ = ((size_t)0ULL);
v___x_2684_ = lean_usize_of_nat(v___x_2681_);
v___x_2685_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0(v_a_2679_, v_as_2678_, v___x_2683_, v___x_2684_);
return v___x_2685_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0___boxed(lean_object* v_as_2686_, lean_object* v_a_2687_){
_start:
{
uint8_t v_res_2688_; lean_object* v_r_2689_; 
v_res_2688_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v_as_2686_, v_a_2687_);
lean_dec(v_a_2687_);
lean_dec_ref(v_as_2686_);
v_r_2689_ = lean_box(v_res_2688_);
return v_r_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(lean_object* v_as_2690_, size_t v_i_2691_, size_t v_stop_2692_, lean_object* v_b_2693_){
_start:
{
uint8_t v___x_2694_; 
v___x_2694_ = lean_usize_dec_eq(v_i_2691_, v_stop_2692_);
if (v___x_2694_ == 0)
{
lean_object* v___x_2695_; lean_object* v___x_2696_; size_t v___x_2697_; size_t v___x_2698_; 
v___x_2695_ = lean_array_uget_borrowed(v_as_2690_, v_i_2691_);
v___x_2696_ = l_Array_append___redArg(v_b_2693_, v___x_2695_);
v___x_2697_ = ((size_t)1ULL);
v___x_2698_ = lean_usize_add(v_i_2691_, v___x_2697_);
v_i_2691_ = v___x_2698_;
v_b_2693_ = v___x_2696_;
goto _start;
}
else
{
return v_b_2693_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4___boxed(lean_object* v_as_2700_, lean_object* v_i_2701_, lean_object* v_stop_2702_, lean_object* v_b_2703_){
_start:
{
size_t v_i_boxed_2704_; size_t v_stop_boxed_2705_; lean_object* v_res_2706_; 
v_i_boxed_2704_ = lean_unbox_usize(v_i_2701_);
lean_dec(v_i_2701_);
v_stop_boxed_2705_ = lean_unbox_usize(v_stop_2702_);
lean_dec(v_stop_2702_);
v_res_2706_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v_as_2700_, v_i_boxed_2704_, v_stop_boxed_2705_, v_b_2703_);
lean_dec_ref(v_as_2700_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(lean_object* v_t_2707_, lean_object* v_k_2708_, lean_object* v_fallback_2709_){
_start:
{
if (lean_obj_tag(v_t_2707_) == 0)
{
lean_object* v_k_2710_; lean_object* v_v_2711_; lean_object* v_l_2712_; lean_object* v_r_2713_; uint8_t v___x_2714_; 
v_k_2710_ = lean_ctor_get(v_t_2707_, 1);
v_v_2711_ = lean_ctor_get(v_t_2707_, 2);
v_l_2712_ = lean_ctor_get(v_t_2707_, 3);
v_r_2713_ = lean_ctor_get(v_t_2707_, 4);
v___x_2714_ = lean_string_compare(v_k_2708_, v_k_2710_);
switch(v___x_2714_)
{
case 0:
{
v_t_2707_ = v_l_2712_;
goto _start;
}
case 1:
{
lean_inc(v_v_2711_);
return v_v_2711_;
}
default: 
{
v_t_2707_ = v_r_2713_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_2709_);
return v_fallback_2709_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg___boxed(lean_object* v_t_2717_, lean_object* v_k_2718_, lean_object* v_fallback_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v_t_2717_, v_k_2718_, v_fallback_2719_);
lean_dec(v_fallback_2719_);
lean_dec_ref(v_k_2718_);
lean_dec(v_t_2717_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(lean_object* v_text_2738_, lean_object* v_x_2739_){
_start:
{
lean_object* v___y_2741_; lean_object* v___y_2742_; uint8_t v___y_2743_; lean_object* v___y_2753_; lean_object* v___y_2754_; uint8_t v___y_2755_; lean_object* v___y_2765_; lean_object* v___y_2766_; uint8_t v___y_2767_; lean_object* v___y_2777_; lean_object* v___y_2778_; uint8_t v___y_2779_; uint8_t v___y_2789_; uint8_t v___y_2790_; lean_object* v___y_2791_; uint8_t v___y_2792_; lean_object* v___y_2793_; uint8_t v___y_2794_; uint8_t v___y_2796_; lean_object* v___y_2797_; uint8_t v___y_2798_; uint8_t v___y_2799_; lean_object* v___y_2800_; uint8_t v___y_2801_; uint8_t v___y_2803_; uint32_t v___y_2804_; uint8_t v___y_2805_; lean_object* v___y_2806_; uint8_t v___y_2807_; lean_object* v___y_2808_; uint8_t v___y_2813_; uint32_t v___y_2814_; lean_object* v___y_2815_; uint8_t v___y_2816_; uint8_t v___y_2817_; lean_object* v___y_2818_; uint8_t v___y_2819_; lean_object* v___y_2825_; lean_object* v___y_2826_; uint8_t v___y_2827_; lean_object* v___x_2836_; uint8_t v___x_2837_; 
v___x_2836_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1));
lean_inc(v_x_2739_);
v___x_2837_ = l_Lean_Syntax_isOfKind(v_x_2739_, v___x_2836_);
if (v___x_2837_ == 0)
{
lean_object* v___x_2838_; uint8_t v___x_2839_; uint8_t v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; uint8_t v___y_2844_; uint8_t v___y_2845_; uint8_t v___y_2847_; uint8_t v___y_2848_; lean_object* v___y_2849_; lean_object* v___y_2850_; uint8_t v___y_2851_; uint8_t v___y_2853_; uint8_t v___y_2854_; lean_object* v___y_2855_; uint32_t v___y_2856_; lean_object* v___y_2857_; uint8_t v___y_2862_; uint8_t v___y_2863_; lean_object* v___y_2864_; uint32_t v___y_2865_; lean_object* v___y_2866_; uint8_t v___y_2867_; 
v___x_2838_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3));
lean_inc(v_x_2739_);
v___x_2839_ = l_Lean_Syntax_isOfKind(v_x_2739_, v___x_2838_);
if (v___x_2839_ == 0)
{
lean_object* v___x_2872_; lean_object* v___x_2873_; uint8_t v___x_2874_; 
v___x_2872_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds));
lean_inc(v_x_2739_);
v___x_2873_ = l_Lean_Syntax_getKind(v_x_2739_);
v___x_2874_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2872_, v___x_2873_);
if (v___x_2874_ == 0)
{
lean_object* v___x_2875_; uint8_t v___x_2876_; lean_object* v___y_2878_; lean_object* v___y_2879_; uint8_t v___y_2880_; lean_object* v___y_2882_; lean_object* v___y_2883_; uint8_t v___y_2884_; uint8_t v___y_2885_; uint32_t v___y_2887_; lean_object* v___y_2888_; lean_object* v___y_2889_; uint8_t v___y_2890_; uint32_t v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; uint8_t v___y_2898_; uint8_t v___y_2899_; lean_object* v___y_2905_; lean_object* v___y_2906_; uint8_t v___y_2907_; uint32_t v___y_2922_; lean_object* v___y_2923_; lean_object* v___y_2924_; uint32_t v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; uint8_t v___y_2932_; lean_object* v___y_2938_; 
v___x_2875_ = ((lean_object*)(l_Lean_Server_FileWorker_docKinds));
v___x_2876_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2875_, v___x_2873_);
lean_dec(v___x_2873_);
if (v___x_2876_ == 0)
{
lean_object* v___x_2953_; uint8_t v___x_2954_; 
v___x_2953_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5));
lean_inc(v_x_2739_);
v___x_2954_ = l_Lean_Syntax_isOfKind(v_x_2739_, v___x_2953_);
if (v___x_2954_ == 0)
{
lean_object* v___x_2955_; size_t v_sz_2956_; size_t v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; uint8_t v___x_2964_; 
v___x_2955_ = l_Lean_Syntax_getArgs(v_x_2739_);
v_sz_2956_ = lean_array_size(v___x_2955_);
v___x_2957_ = ((size_t)0ULL);
v___x_2958_ = l_unsafeCast___redArg(v___x_2955_);
lean_dec_ref(v___x_2955_);
v___x_2959_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_2738_, v_sz_2956_, v___x_2957_, v___x_2958_);
v___x_2960_ = l_unsafeCast___redArg(v___x_2959_);
lean_dec_ref(v___x_2959_);
v___x_2961_ = lean_unsigned_to_nat(0u);
v___x_2962_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6));
v___x_2963_ = lean_array_get_size(v___x_2960_);
v___x_2964_ = lean_nat_dec_lt(v___x_2961_, v___x_2963_);
if (v___x_2964_ == 0)
{
lean_dec(v___x_2960_);
v___y_2938_ = v___x_2962_;
goto v___jp_2937_;
}
else
{
size_t v___x_2965_; lean_object* v___x_2966_; 
v___x_2965_ = lean_usize_of_nat(v___x_2963_);
v___x_2966_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v___x_2960_, v___x_2957_, v___x_2965_, v___x_2962_);
lean_dec(v___x_2960_);
v___y_2938_ = v___x_2966_;
goto v___jp_2937_;
}
}
else
{
lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v___x_2967_ = lean_unsigned_to_nat(0u);
v___x_2968_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_2967_);
v___x_2969_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_2738_, v___x_2968_);
v___y_2938_ = v___x_2969_;
goto v___jp_2937_;
}
}
else
{
lean_object* v___x_2970_; lean_object* v___x_2971_; uint8_t v___x_2972_; 
v___x_2970_ = lean_unsigned_to_nat(1u);
v___x_2971_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_2970_);
lean_dec(v_x_2739_);
v___x_2972_ = l_Lean_Syntax_isAtom(v___x_2971_);
if (v___x_2972_ == 0)
{
lean_object* v___x_2973_; lean_object* v___x_2974_; 
lean_inc_ref(v_text_2738_);
v___x_2973_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens), 2, 1);
lean_closure_set(v___x_2973_, 0, v_text_2738_);
v___x_2974_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(v_text_2738_, v___x_2971_, v___x_2973_);
return v___x_2974_;
}
else
{
lean_object* v___x_2975_; 
lean_dec(v___x_2971_);
lean_dec_ref(v_text_2738_);
v___x_2975_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2975_;
}
}
v___jp_2877_:
{
if (v___y_2880_ == 0)
{
lean_dec_ref(v___y_2879_);
lean_dec(v_x_2739_);
return v___y_2878_;
}
else
{
v___y_2753_ = v___y_2878_;
v___y_2754_ = v___y_2879_;
v___y_2755_ = v___x_2876_;
goto v___jp_2752_;
}
}
v___jp_2881_:
{
if (v___y_2884_ == 0)
{
v___y_2878_ = v___y_2882_;
v___y_2879_ = v___y_2883_;
v___y_2880_ = v___y_2885_;
goto v___jp_2877_;
}
else
{
if (v___x_2876_ == 0)
{
v___y_2753_ = v___y_2882_;
v___y_2754_ = v___y_2883_;
v___y_2755_ = v___x_2876_;
goto v___jp_2752_;
}
else
{
v___y_2878_ = v___y_2882_;
v___y_2879_ = v___y_2883_;
v___y_2880_ = v___y_2885_;
goto v___jp_2877_;
}
}
}
v___jp_2886_:
{
uint32_t v___x_2891_; uint8_t v___x_2892_; 
v___x_2891_ = 95;
v___x_2892_ = lean_uint32_dec_eq(v___y_2887_, v___x_2891_);
if (v___x_2892_ == 0)
{
uint8_t v___x_2893_; 
v___x_2893_ = l_Lean_isLetterLike(v___y_2887_);
v___y_2882_ = v___y_2888_;
v___y_2883_ = v___y_2889_;
v___y_2884_ = v___y_2890_;
v___y_2885_ = v___x_2893_;
goto v___jp_2881_;
}
else
{
v___y_2882_ = v___y_2888_;
v___y_2883_ = v___y_2889_;
v___y_2884_ = v___y_2890_;
v___y_2885_ = v___x_2892_;
goto v___jp_2881_;
}
}
v___jp_2894_:
{
if (v___y_2899_ == 0)
{
uint32_t v___x_2900_; uint8_t v___x_2901_; 
v___x_2900_ = 97;
v___x_2901_ = lean_uint32_dec_le(v___x_2900_, v___y_2895_);
if (v___x_2901_ == 0)
{
v___y_2887_ = v___y_2895_;
v___y_2888_ = v___y_2896_;
v___y_2889_ = v___y_2897_;
v___y_2890_ = v___y_2898_;
goto v___jp_2886_;
}
else
{
uint32_t v___x_2902_; uint8_t v___x_2903_; 
v___x_2902_ = 122;
v___x_2903_ = lean_uint32_dec_le(v___y_2895_, v___x_2902_);
if (v___x_2903_ == 0)
{
v___y_2887_ = v___y_2895_;
v___y_2888_ = v___y_2896_;
v___y_2889_ = v___y_2897_;
v___y_2890_ = v___y_2898_;
goto v___jp_2886_;
}
else
{
v___y_2882_ = v___y_2896_;
v___y_2883_ = v___y_2897_;
v___y_2884_ = v___y_2898_;
v___y_2885_ = v___x_2903_;
goto v___jp_2881_;
}
}
}
else
{
v___y_2882_ = v___y_2896_;
v___y_2883_ = v___y_2897_;
v___y_2884_ = v___y_2898_;
v___y_2885_ = v___y_2899_;
goto v___jp_2881_;
}
}
v___jp_2904_:
{
lean_object* v___x_2908_; 
lean_inc_ref(v___y_2906_);
v___x_2908_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v___y_2906_);
if (lean_obj_tag(v___x_2908_) == 0)
{
v___y_2882_ = v___y_2905_;
v___y_2883_ = v___y_2906_;
v___y_2884_ = v___y_2907_;
v___y_2885_ = v___x_2876_;
goto v___jp_2881_;
}
else
{
lean_object* v_val_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v_val_2909_ = lean_ctor_get(v___x_2908_, 0);
lean_inc(v_val_2909_);
lean_dec_ref_known(v___x_2908_, 1);
v___x_2910_ = lean_unsigned_to_nat(0u);
v___x_2911_ = l_String_Slice_Pos_get_x3f(v_val_2909_, v___x_2910_);
lean_dec(v_val_2909_);
if (lean_obj_tag(v___x_2911_) == 0)
{
v___y_2882_ = v___y_2905_;
v___y_2883_ = v___y_2906_;
v___y_2884_ = v___y_2907_;
v___y_2885_ = v___x_2876_;
goto v___jp_2881_;
}
else
{
lean_object* v_val_2912_; uint32_t v___x_2913_; uint32_t v___x_2914_; uint8_t v___x_2915_; 
v_val_2912_ = lean_ctor_get(v___x_2911_, 0);
lean_inc(v_val_2912_);
lean_dec_ref_known(v___x_2911_, 1);
v___x_2913_ = 65;
v___x_2914_ = lean_unbox_uint32(v_val_2912_);
v___x_2915_ = lean_uint32_dec_le(v___x_2913_, v___x_2914_);
if (v___x_2915_ == 0)
{
uint32_t v___x_2916_; 
v___x_2916_ = lean_unbox_uint32(v_val_2912_);
lean_dec(v_val_2912_);
v___y_2895_ = v___x_2916_;
v___y_2896_ = v___y_2905_;
v___y_2897_ = v___y_2906_;
v___y_2898_ = v___y_2907_;
v___y_2899_ = v___x_2915_;
goto v___jp_2894_;
}
else
{
uint32_t v___x_2917_; uint32_t v___x_2918_; uint8_t v___x_2919_; uint32_t v___x_2920_; 
v___x_2917_ = 90;
v___x_2918_ = lean_unbox_uint32(v_val_2912_);
v___x_2919_ = lean_uint32_dec_le(v___x_2918_, v___x_2917_);
v___x_2920_ = lean_unbox_uint32(v_val_2912_);
lean_dec(v_val_2912_);
v___y_2895_ = v___x_2920_;
v___y_2896_ = v___y_2905_;
v___y_2897_ = v___y_2906_;
v___y_2898_ = v___y_2907_;
v___y_2899_ = v___x_2919_;
goto v___jp_2894_;
}
}
}
}
v___jp_2921_:
{
uint32_t v___x_2925_; uint8_t v___x_2926_; 
v___x_2925_ = 95;
v___x_2926_ = lean_uint32_dec_eq(v___y_2922_, v___x_2925_);
if (v___x_2926_ == 0)
{
uint8_t v___x_2927_; 
v___x_2927_ = l_Lean_isLetterLike(v___y_2922_);
v___y_2905_ = v___y_2923_;
v___y_2906_ = v___y_2924_;
v___y_2907_ = v___x_2927_;
goto v___jp_2904_;
}
else
{
v___y_2905_ = v___y_2923_;
v___y_2906_ = v___y_2924_;
v___y_2907_ = v___x_2926_;
goto v___jp_2904_;
}
}
v___jp_2928_:
{
if (v___y_2932_ == 0)
{
uint32_t v___x_2933_; uint8_t v___x_2934_; 
v___x_2933_ = 97;
v___x_2934_ = lean_uint32_dec_le(v___x_2933_, v___y_2929_);
if (v___x_2934_ == 0)
{
v___y_2922_ = v___y_2929_;
v___y_2923_ = v___y_2930_;
v___y_2924_ = v___y_2931_;
goto v___jp_2921_;
}
else
{
uint32_t v___x_2935_; uint8_t v___x_2936_; 
v___x_2935_ = 122;
v___x_2936_ = lean_uint32_dec_le(v___y_2929_, v___x_2935_);
if (v___x_2936_ == 0)
{
v___y_2922_ = v___y_2929_;
v___y_2923_ = v___y_2930_;
v___y_2924_ = v___y_2931_;
goto v___jp_2921_;
}
else
{
v___y_2905_ = v___y_2930_;
v___y_2906_ = v___y_2931_;
v___y_2907_ = v___x_2936_;
goto v___jp_2904_;
}
}
}
else
{
v___y_2905_ = v___y_2930_;
v___y_2906_ = v___y_2931_;
v___y_2907_ = v___y_2932_;
goto v___jp_2904_;
}
}
v___jp_2937_:
{
if (lean_obj_tag(v_x_2739_) == 2)
{
lean_object* v_val_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v_val_2939_ = lean_ctor_get(v_x_2739_, 1);
v___x_2940_ = lean_unsigned_to_nat(0u);
v___x_2941_ = lean_string_utf8_byte_size(v_val_2939_);
lean_inc_ref(v_val_2939_);
v___x_2942_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2942_, 0, v_val_2939_);
lean_ctor_set(v___x_2942_, 1, v___x_2940_);
lean_ctor_set(v___x_2942_, 2, v___x_2941_);
v___x_2943_ = l_String_Slice_Pos_get_x3f(v___x_2942_, v___x_2940_);
lean_dec_ref_known(v___x_2942_, 3);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_inc_ref(v_val_2939_);
v___y_2905_ = v___y_2938_;
v___y_2906_ = v_val_2939_;
v___y_2907_ = v___x_2876_;
goto v___jp_2904_;
}
else
{
lean_object* v_val_2944_; uint32_t v___x_2945_; uint32_t v___x_2946_; uint8_t v___x_2947_; 
v_val_2944_ = lean_ctor_get(v___x_2943_, 0);
lean_inc(v_val_2944_);
lean_dec_ref_known(v___x_2943_, 1);
v___x_2945_ = 65;
v___x_2946_ = lean_unbox_uint32(v_val_2944_);
v___x_2947_ = lean_uint32_dec_le(v___x_2945_, v___x_2946_);
if (v___x_2947_ == 0)
{
uint32_t v___x_2948_; 
v___x_2948_ = lean_unbox_uint32(v_val_2944_);
lean_dec(v_val_2944_);
lean_inc_ref(v_val_2939_);
v___y_2929_ = v___x_2948_;
v___y_2930_ = v___y_2938_;
v___y_2931_ = v_val_2939_;
v___y_2932_ = v___x_2947_;
goto v___jp_2928_;
}
else
{
uint32_t v___x_2949_; uint32_t v___x_2950_; uint8_t v___x_2951_; uint32_t v___x_2952_; 
v___x_2949_ = 90;
v___x_2950_ = lean_unbox_uint32(v_val_2944_);
v___x_2951_ = lean_uint32_dec_le(v___x_2950_, v___x_2949_);
v___x_2952_ = lean_unbox_uint32(v_val_2944_);
lean_dec(v_val_2944_);
lean_inc_ref(v_val_2939_);
v___y_2929_ = v___x_2952_;
v___y_2930_ = v___y_2938_;
v___y_2931_ = v_val_2939_;
v___y_2932_ = v___x_2951_;
goto v___jp_2928_;
}
}
}
else
{
lean_dec(v_x_2739_);
return v___y_2938_;
}
}
}
else
{
lean_object* v___x_2976_; 
lean_dec(v___x_2873_);
lean_dec(v_x_2739_);
lean_dec_ref(v_text_2738_);
v___x_2976_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2976_;
}
}
else
{
lean_object* v___x_2977_; uint8_t v___y_2979_; lean_object* v___y_2980_; lean_object* v___y_2981_; uint8_t v___y_2982_; uint8_t v___y_2996_; lean_object* v___y_2997_; uint32_t v___y_2998_; lean_object* v___y_2999_; uint8_t v___y_3004_; lean_object* v___y_3005_; uint32_t v___y_3006_; lean_object* v___y_3007_; uint8_t v___y_3008_; uint8_t v___y_3014_; lean_object* v___y_3015_; uint8_t v___y_3030_; lean_object* v___y_3031_; uint8_t v___y_3032_; lean_object* v___y_3033_; uint8_t v___y_3034_; uint32_t v___y_3048_; lean_object* v___y_3049_; uint8_t v___y_3050_; uint8_t v___y_3051_; lean_object* v___y_3052_; uint32_t v___y_3057_; uint8_t v___y_3058_; lean_object* v___y_3059_; uint8_t v___y_3060_; lean_object* v___y_3061_; uint8_t v___y_3062_; uint8_t v___y_3068_; uint8_t v___y_3069_; lean_object* v___y_3070_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_2977_ = lean_unsigned_to_nat(0u);
v___x_3084_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_2977_);
v___x_3085_ = lean_unsigned_to_nat(1u);
v___x_3086_ = lean_unsigned_to_nat(2u);
v___x_3087_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_3086_);
if (v___x_2837_ == 0)
{
lean_object* v___x_3150_; uint8_t v___x_3151_; 
v___x_3150_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__75));
lean_inc(v___x_3087_);
v___x_3151_ = l_Lean_Syntax_isOfKind(v___x_3087_, v___x_3150_);
if (v___x_3151_ == 0)
{
lean_object* v___x_3152_; lean_object* v___x_3153_; uint8_t v___x_3154_; 
lean_dec(v___x_3087_);
v___x_3152_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds));
lean_inc(v_x_2739_);
v___x_3153_ = l_Lean_Syntax_getKind(v_x_2739_);
v___x_3154_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_3152_, v___x_3153_);
if (v___x_3154_ == 0)
{
lean_object* v___x_3155_; uint8_t v___x_3156_; lean_object* v___y_3158_; lean_object* v___y_3159_; uint8_t v___y_3160_; uint8_t v___y_3161_; lean_object* v___y_3163_; uint8_t v___y_3164_; lean_object* v___y_3165_; uint8_t v___y_3166_; uint32_t v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; uint8_t v___y_3171_; uint32_t v___y_3176_; lean_object* v___y_3177_; uint8_t v___y_3178_; lean_object* v___y_3179_; uint8_t v___y_3180_; lean_object* v___y_3186_; lean_object* v___y_3187_; uint8_t v___y_3188_; lean_object* v___y_3202_; lean_object* v___y_3203_; uint32_t v___y_3204_; lean_object* v___y_3209_; lean_object* v___y_3210_; uint32_t v___y_3211_; uint8_t v___y_3212_; lean_object* v___y_3218_; 
v___x_3155_ = ((lean_object*)(l_Lean_Server_FileWorker_docKinds));
v___x_3156_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_3155_, v___x_3153_);
lean_dec(v___x_3153_);
if (v___x_3156_ == 0)
{
lean_object* v___x_3232_; uint8_t v___x_3233_; 
v___x_3232_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5));
lean_inc(v_x_2739_);
v___x_3233_ = l_Lean_Syntax_isOfKind(v_x_2739_, v___x_3232_);
if (v___x_3233_ == 0)
{
lean_object* v___x_3234_; size_t v_sz_3235_; size_t v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; uint8_t v___x_3242_; 
lean_dec(v___x_3084_);
v___x_3234_ = l_Lean_Syntax_getArgs(v_x_2739_);
v_sz_3235_ = lean_array_size(v___x_3234_);
v___x_3236_ = ((size_t)0ULL);
v___x_3237_ = l_unsafeCast___redArg(v___x_3234_);
lean_dec_ref(v___x_3234_);
v___x_3238_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_2738_, v_sz_3235_, v___x_3236_, v___x_3237_);
v___x_3239_ = l_unsafeCast___redArg(v___x_3238_);
lean_dec_ref(v___x_3238_);
v___x_3240_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6));
v___x_3241_ = lean_array_get_size(v___x_3239_);
v___x_3242_ = lean_nat_dec_lt(v___x_2977_, v___x_3241_);
if (v___x_3242_ == 0)
{
lean_dec(v___x_3239_);
v___y_3218_ = v___x_3240_;
goto v___jp_3217_;
}
else
{
size_t v___x_3243_; lean_object* v___x_3244_; 
v___x_3243_ = lean_usize_of_nat(v___x_3241_);
v___x_3244_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v___x_3239_, v___x_3236_, v___x_3243_, v___x_3240_);
lean_dec(v___x_3239_);
v___y_3218_ = v___x_3244_;
goto v___jp_3217_;
}
}
else
{
lean_object* v___x_3245_; 
v___x_3245_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_2738_, v___x_3084_);
v___y_3218_ = v___x_3245_;
goto v___jp_3217_;
}
}
else
{
lean_object* v___x_3246_; uint8_t v___x_3247_; 
lean_dec(v___x_3084_);
v___x_3246_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_3085_);
lean_dec(v_x_2739_);
v___x_3247_ = l_Lean_Syntax_isAtom(v___x_3246_);
if (v___x_3247_ == 0)
{
lean_object* v___x_3248_; lean_object* v___x_3249_; 
lean_inc_ref(v_text_2738_);
v___x_3248_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens), 2, 1);
lean_closure_set(v___x_3248_, 0, v_text_2738_);
v___x_3249_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(v_text_2738_, v___x_3246_, v___x_3248_);
return v___x_3249_;
}
else
{
lean_object* v___x_3250_; 
lean_dec(v___x_3246_);
lean_dec_ref(v_text_2738_);
v___x_3250_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_3250_;
}
}
v___jp_3157_:
{
if (v___y_3161_ == 0)
{
v___y_2825_ = v___y_3158_;
v___y_2826_ = v___y_3159_;
v___y_2827_ = v___x_3156_;
goto v___jp_2824_;
}
else
{
if (v___y_3160_ == 0)
{
v___y_2825_ = v___y_3158_;
v___y_2826_ = v___y_3159_;
v___y_2827_ = v___x_2839_;
goto v___jp_2824_;
}
else
{
v___y_2825_ = v___y_3158_;
v___y_2826_ = v___y_3159_;
v___y_2827_ = v___x_3156_;
goto v___jp_2824_;
}
}
}
v___jp_3162_:
{
if (v___y_3164_ == 0)
{
v___y_3158_ = v___y_3163_;
v___y_3159_ = v___y_3165_;
v___y_3160_ = v___y_3166_;
v___y_3161_ = v___x_2839_;
goto v___jp_3157_;
}
else
{
v___y_3158_ = v___y_3163_;
v___y_3159_ = v___y_3165_;
v___y_3160_ = v___y_3166_;
v___y_3161_ = v___x_3156_;
goto v___jp_3157_;
}
}
v___jp_3167_:
{
uint32_t v___x_3172_; uint8_t v___x_3173_; 
v___x_3172_ = 95;
v___x_3173_ = lean_uint32_dec_eq(v___y_3168_, v___x_3172_);
if (v___x_3173_ == 0)
{
uint8_t v___x_3174_; 
v___x_3174_ = l_Lean_isLetterLike(v___y_3168_);
v___y_3163_ = v___y_3169_;
v___y_3164_ = v___y_3171_;
v___y_3165_ = v___y_3170_;
v___y_3166_ = v___x_3174_;
goto v___jp_3162_;
}
else
{
v___y_3163_ = v___y_3169_;
v___y_3164_ = v___y_3171_;
v___y_3165_ = v___y_3170_;
v___y_3166_ = v___x_3173_;
goto v___jp_3162_;
}
}
v___jp_3175_:
{
if (v___y_3180_ == 0)
{
uint32_t v___x_3181_; uint8_t v___x_3182_; 
v___x_3181_ = 97;
v___x_3182_ = lean_uint32_dec_le(v___x_3181_, v___y_3176_);
if (v___x_3182_ == 0)
{
v___y_3168_ = v___y_3176_;
v___y_3169_ = v___y_3177_;
v___y_3170_ = v___y_3179_;
v___y_3171_ = v___y_3178_;
goto v___jp_3167_;
}
else
{
uint32_t v___x_3183_; uint8_t v___x_3184_; 
v___x_3183_ = 122;
v___x_3184_ = lean_uint32_dec_le(v___y_3176_, v___x_3183_);
if (v___x_3184_ == 0)
{
v___y_3168_ = v___y_3176_;
v___y_3169_ = v___y_3177_;
v___y_3170_ = v___y_3179_;
v___y_3171_ = v___y_3178_;
goto v___jp_3167_;
}
else
{
v___y_3163_ = v___y_3177_;
v___y_3164_ = v___y_3178_;
v___y_3165_ = v___y_3179_;
v___y_3166_ = v___x_3184_;
goto v___jp_3162_;
}
}
}
else
{
v___y_3163_ = v___y_3177_;
v___y_3164_ = v___y_3178_;
v___y_3165_ = v___y_3179_;
v___y_3166_ = v___y_3180_;
goto v___jp_3162_;
}
}
v___jp_3185_:
{
lean_object* v___x_3189_; 
lean_inc_ref(v___y_3187_);
v___x_3189_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v___y_3187_);
if (lean_obj_tag(v___x_3189_) == 0)
{
v___y_3163_ = v___y_3186_;
v___y_3164_ = v___y_3188_;
v___y_3165_ = v___y_3187_;
v___y_3166_ = v___x_3156_;
goto v___jp_3162_;
}
else
{
lean_object* v_val_3190_; lean_object* v___x_3191_; 
v_val_3190_ = lean_ctor_get(v___x_3189_, 0);
lean_inc(v_val_3190_);
lean_dec_ref_known(v___x_3189_, 1);
v___x_3191_ = l_String_Slice_Pos_get_x3f(v_val_3190_, v___x_2977_);
lean_dec(v_val_3190_);
if (lean_obj_tag(v___x_3191_) == 0)
{
v___y_3163_ = v___y_3186_;
v___y_3164_ = v___y_3188_;
v___y_3165_ = v___y_3187_;
v___y_3166_ = v___x_3156_;
goto v___jp_3162_;
}
else
{
lean_object* v_val_3192_; uint32_t v___x_3193_; uint32_t v___x_3194_; uint8_t v___x_3195_; 
v_val_3192_ = lean_ctor_get(v___x_3191_, 0);
lean_inc(v_val_3192_);
lean_dec_ref_known(v___x_3191_, 1);
v___x_3193_ = 65;
v___x_3194_ = lean_unbox_uint32(v_val_3192_);
v___x_3195_ = lean_uint32_dec_le(v___x_3193_, v___x_3194_);
if (v___x_3195_ == 0)
{
uint32_t v___x_3196_; 
v___x_3196_ = lean_unbox_uint32(v_val_3192_);
lean_dec(v_val_3192_);
v___y_3176_ = v___x_3196_;
v___y_3177_ = v___y_3186_;
v___y_3178_ = v___y_3188_;
v___y_3179_ = v___y_3187_;
v___y_3180_ = v___x_3195_;
goto v___jp_3175_;
}
else
{
uint32_t v___x_3197_; uint32_t v___x_3198_; uint8_t v___x_3199_; uint32_t v___x_3200_; 
v___x_3197_ = 90;
v___x_3198_ = lean_unbox_uint32(v_val_3192_);
v___x_3199_ = lean_uint32_dec_le(v___x_3198_, v___x_3197_);
v___x_3200_ = lean_unbox_uint32(v_val_3192_);
lean_dec(v_val_3192_);
v___y_3176_ = v___x_3200_;
v___y_3177_ = v___y_3186_;
v___y_3178_ = v___y_3188_;
v___y_3179_ = v___y_3187_;
v___y_3180_ = v___x_3199_;
goto v___jp_3175_;
}
}
}
}
v___jp_3201_:
{
uint32_t v___x_3205_; uint8_t v___x_3206_; 
v___x_3205_ = 95;
v___x_3206_ = lean_uint32_dec_eq(v___y_3204_, v___x_3205_);
if (v___x_3206_ == 0)
{
uint8_t v___x_3207_; 
v___x_3207_ = l_Lean_isLetterLike(v___y_3204_);
v___y_3186_ = v___y_3202_;
v___y_3187_ = v___y_3203_;
v___y_3188_ = v___x_3207_;
goto v___jp_3185_;
}
else
{
v___y_3186_ = v___y_3202_;
v___y_3187_ = v___y_3203_;
v___y_3188_ = v___x_3206_;
goto v___jp_3185_;
}
}
v___jp_3208_:
{
if (v___y_3212_ == 0)
{
uint32_t v___x_3213_; uint8_t v___x_3214_; 
v___x_3213_ = 97;
v___x_3214_ = lean_uint32_dec_le(v___x_3213_, v___y_3211_);
if (v___x_3214_ == 0)
{
v___y_3202_ = v___y_3209_;
v___y_3203_ = v___y_3210_;
v___y_3204_ = v___y_3211_;
goto v___jp_3201_;
}
else
{
uint32_t v___x_3215_; uint8_t v___x_3216_; 
v___x_3215_ = 122;
v___x_3216_ = lean_uint32_dec_le(v___y_3211_, v___x_3215_);
if (v___x_3216_ == 0)
{
v___y_3202_ = v___y_3209_;
v___y_3203_ = v___y_3210_;
v___y_3204_ = v___y_3211_;
goto v___jp_3201_;
}
else
{
v___y_3186_ = v___y_3209_;
v___y_3187_ = v___y_3210_;
v___y_3188_ = v___x_3216_;
goto v___jp_3185_;
}
}
}
else
{
v___y_3186_ = v___y_3209_;
v___y_3187_ = v___y_3210_;
v___y_3188_ = v___y_3212_;
goto v___jp_3185_;
}
}
v___jp_3217_:
{
if (lean_obj_tag(v_x_2739_) == 2)
{
lean_object* v_val_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v_val_3219_ = lean_ctor_get(v_x_2739_, 1);
v___x_3220_ = lean_string_utf8_byte_size(v_val_3219_);
lean_inc_ref(v_val_3219_);
v___x_3221_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3221_, 0, v_val_3219_);
lean_ctor_set(v___x_3221_, 1, v___x_2977_);
lean_ctor_set(v___x_3221_, 2, v___x_3220_);
v___x_3222_ = l_String_Slice_Pos_get_x3f(v___x_3221_, v___x_2977_);
lean_dec_ref_known(v___x_3221_, 3);
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_inc_ref(v_val_3219_);
v___y_3186_ = v___y_3218_;
v___y_3187_ = v_val_3219_;
v___y_3188_ = v___x_3156_;
goto v___jp_3185_;
}
else
{
lean_object* v_val_3223_; uint32_t v___x_3224_; uint32_t v___x_3225_; uint8_t v___x_3226_; 
v_val_3223_ = lean_ctor_get(v___x_3222_, 0);
lean_inc(v_val_3223_);
lean_dec_ref_known(v___x_3222_, 1);
v___x_3224_ = 65;
v___x_3225_ = lean_unbox_uint32(v_val_3223_);
v___x_3226_ = lean_uint32_dec_le(v___x_3224_, v___x_3225_);
if (v___x_3226_ == 0)
{
uint32_t v___x_3227_; 
v___x_3227_ = lean_unbox_uint32(v_val_3223_);
lean_dec(v_val_3223_);
lean_inc_ref(v_val_3219_);
v___y_3209_ = v___y_3218_;
v___y_3210_ = v_val_3219_;
v___y_3211_ = v___x_3227_;
v___y_3212_ = v___x_3226_;
goto v___jp_3208_;
}
else
{
uint32_t v___x_3228_; uint32_t v___x_3229_; uint8_t v___x_3230_; uint32_t v___x_3231_; 
v___x_3228_ = 90;
v___x_3229_ = lean_unbox_uint32(v_val_3223_);
v___x_3230_ = lean_uint32_dec_le(v___x_3229_, v___x_3228_);
v___x_3231_ = lean_unbox_uint32(v_val_3223_);
lean_dec(v_val_3223_);
lean_inc_ref(v_val_3219_);
v___y_3209_ = v___y_3218_;
v___y_3210_ = v_val_3219_;
v___y_3211_ = v___x_3231_;
v___y_3212_ = v___x_3230_;
goto v___jp_3208_;
}
}
}
else
{
lean_dec(v_x_2739_);
return v___y_3218_;
}
}
}
else
{
lean_object* v___x_3251_; 
lean_dec(v___x_3153_);
lean_dec(v___x_3084_);
lean_dec(v_x_2739_);
lean_dec_ref(v_text_2738_);
v___x_3251_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_3251_;
}
}
else
{
goto v___jp_3088_;
}
}
else
{
goto v___jp_3088_;
}
v___jp_2978_:
{
lean_object* v___x_2983_; 
lean_inc_ref(v___y_2980_);
v___x_2983_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v___y_2980_);
if (lean_obj_tag(v___x_2983_) == 0)
{
v___y_2847_ = v___y_2982_;
v___y_2848_ = v___y_2979_;
v___y_2849_ = v___y_2980_;
v___y_2850_ = v___y_2981_;
v___y_2851_ = v___y_2979_;
goto v___jp_2846_;
}
else
{
lean_object* v_val_2984_; lean_object* v___x_2985_; 
v_val_2984_ = lean_ctor_get(v___x_2983_, 0);
lean_inc(v_val_2984_);
lean_dec_ref_known(v___x_2983_, 1);
v___x_2985_ = l_String_Slice_Pos_get_x3f(v_val_2984_, v___x_2977_);
lean_dec(v_val_2984_);
if (lean_obj_tag(v___x_2985_) == 0)
{
v___y_2847_ = v___y_2982_;
v___y_2848_ = v___y_2979_;
v___y_2849_ = v___y_2980_;
v___y_2850_ = v___y_2981_;
v___y_2851_ = v___y_2979_;
goto v___jp_2846_;
}
else
{
lean_object* v_val_2986_; uint32_t v___x_2987_; uint32_t v___x_2988_; uint8_t v___x_2989_; 
v_val_2986_ = lean_ctor_get(v___x_2985_, 0);
lean_inc(v_val_2986_);
lean_dec_ref_known(v___x_2985_, 1);
v___x_2987_ = 65;
v___x_2988_ = lean_unbox_uint32(v_val_2986_);
v___x_2989_ = lean_uint32_dec_le(v___x_2987_, v___x_2988_);
if (v___x_2989_ == 0)
{
uint32_t v___x_2990_; 
v___x_2990_ = lean_unbox_uint32(v_val_2986_);
lean_dec(v_val_2986_);
v___y_2862_ = v___y_2982_;
v___y_2863_ = v___y_2979_;
v___y_2864_ = v___y_2980_;
v___y_2865_ = v___x_2990_;
v___y_2866_ = v___y_2981_;
v___y_2867_ = v___x_2989_;
goto v___jp_2861_;
}
else
{
uint32_t v___x_2991_; uint32_t v___x_2992_; uint8_t v___x_2993_; uint32_t v___x_2994_; 
v___x_2991_ = 90;
v___x_2992_ = lean_unbox_uint32(v_val_2986_);
v___x_2993_ = lean_uint32_dec_le(v___x_2992_, v___x_2991_);
v___x_2994_ = lean_unbox_uint32(v_val_2986_);
lean_dec(v_val_2986_);
v___y_2862_ = v___y_2982_;
v___y_2863_ = v___y_2979_;
v___y_2864_ = v___y_2980_;
v___y_2865_ = v___x_2994_;
v___y_2866_ = v___y_2981_;
v___y_2867_ = v___x_2993_;
goto v___jp_2861_;
}
}
}
}
v___jp_2995_:
{
uint32_t v___x_3000_; uint8_t v___x_3001_; 
v___x_3000_ = 95;
v___x_3001_ = lean_uint32_dec_eq(v___y_2998_, v___x_3000_);
if (v___x_3001_ == 0)
{
uint8_t v___x_3002_; 
v___x_3002_ = l_Lean_isLetterLike(v___y_2998_);
v___y_2979_ = v___y_2996_;
v___y_2980_ = v___y_2997_;
v___y_2981_ = v___y_2999_;
v___y_2982_ = v___x_3002_;
goto v___jp_2978_;
}
else
{
v___y_2979_ = v___y_2996_;
v___y_2980_ = v___y_2997_;
v___y_2981_ = v___y_2999_;
v___y_2982_ = v___x_3001_;
goto v___jp_2978_;
}
}
v___jp_3003_:
{
if (v___y_3008_ == 0)
{
uint32_t v___x_3009_; uint8_t v___x_3010_; 
v___x_3009_ = 97;
v___x_3010_ = lean_uint32_dec_le(v___x_3009_, v___y_3006_);
if (v___x_3010_ == 0)
{
v___y_2996_ = v___y_3004_;
v___y_2997_ = v___y_3005_;
v___y_2998_ = v___y_3006_;
v___y_2999_ = v___y_3007_;
goto v___jp_2995_;
}
else
{
uint32_t v___x_3011_; uint8_t v___x_3012_; 
v___x_3011_ = 122;
v___x_3012_ = lean_uint32_dec_le(v___y_3006_, v___x_3011_);
if (v___x_3012_ == 0)
{
v___y_2996_ = v___y_3004_;
v___y_2997_ = v___y_3005_;
v___y_2998_ = v___y_3006_;
v___y_2999_ = v___y_3007_;
goto v___jp_2995_;
}
else
{
v___y_2979_ = v___y_3004_;
v___y_2980_ = v___y_3005_;
v___y_2981_ = v___y_3007_;
v___y_2982_ = v___x_3012_;
goto v___jp_2978_;
}
}
}
else
{
v___y_2979_ = v___y_3004_;
v___y_2980_ = v___y_3005_;
v___y_2981_ = v___y_3007_;
v___y_2982_ = v___y_3008_;
goto v___jp_2978_;
}
}
v___jp_3013_:
{
if (lean_obj_tag(v_x_2739_) == 2)
{
lean_object* v_val_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
v_val_3016_ = lean_ctor_get(v_x_2739_, 1);
v___x_3017_ = lean_string_utf8_byte_size(v_val_3016_);
lean_inc_ref(v_val_3016_);
v___x_3018_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3018_, 0, v_val_3016_);
lean_ctor_set(v___x_3018_, 1, v___x_2977_);
lean_ctor_set(v___x_3018_, 2, v___x_3017_);
v___x_3019_ = l_String_Slice_Pos_get_x3f(v___x_3018_, v___x_2977_);
lean_dec_ref_known(v___x_3018_, 3);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_inc_ref(v_val_3016_);
v___y_2979_ = v___y_3014_;
v___y_2980_ = v_val_3016_;
v___y_2981_ = v___y_3015_;
v___y_2982_ = v___y_3014_;
goto v___jp_2978_;
}
else
{
lean_object* v_val_3020_; uint32_t v___x_3021_; uint32_t v___x_3022_; uint8_t v___x_3023_; 
v_val_3020_ = lean_ctor_get(v___x_3019_, 0);
lean_inc(v_val_3020_);
lean_dec_ref_known(v___x_3019_, 1);
v___x_3021_ = 65;
v___x_3022_ = lean_unbox_uint32(v_val_3020_);
v___x_3023_ = lean_uint32_dec_le(v___x_3021_, v___x_3022_);
if (v___x_3023_ == 0)
{
uint32_t v___x_3024_; 
v___x_3024_ = lean_unbox_uint32(v_val_3020_);
lean_dec(v_val_3020_);
lean_inc_ref(v_val_3016_);
v___y_3004_ = v___y_3014_;
v___y_3005_ = v_val_3016_;
v___y_3006_ = v___x_3024_;
v___y_3007_ = v___y_3015_;
v___y_3008_ = v___x_3023_;
goto v___jp_3003_;
}
else
{
uint32_t v___x_3025_; uint32_t v___x_3026_; uint8_t v___x_3027_; uint32_t v___x_3028_; 
v___x_3025_ = 90;
v___x_3026_ = lean_unbox_uint32(v_val_3020_);
v___x_3027_ = lean_uint32_dec_le(v___x_3026_, v___x_3025_);
v___x_3028_ = lean_unbox_uint32(v_val_3020_);
lean_dec(v_val_3020_);
lean_inc_ref(v_val_3016_);
v___y_3004_ = v___y_3014_;
v___y_3005_ = v_val_3016_;
v___y_3006_ = v___x_3028_;
v___y_3007_ = v___y_3015_;
v___y_3008_ = v___x_3027_;
goto v___jp_3003_;
}
}
}
else
{
lean_dec(v_x_2739_);
return v___y_3015_;
}
}
v___jp_3029_:
{
lean_object* v___x_3035_; 
lean_inc_ref(v___y_3033_);
v___x_3035_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v___y_3033_);
if (lean_obj_tag(v___x_3035_) == 0)
{
v___y_2796_ = v___y_3034_;
v___y_2797_ = v___y_3031_;
v___y_2798_ = v___y_3030_;
v___y_2799_ = v___y_3032_;
v___y_2800_ = v___y_3033_;
v___y_2801_ = v___y_3032_;
goto v___jp_2795_;
}
else
{
lean_object* v_val_3036_; lean_object* v___x_3037_; 
v_val_3036_ = lean_ctor_get(v___x_3035_, 0);
lean_inc(v_val_3036_);
lean_dec_ref_known(v___x_3035_, 1);
v___x_3037_ = l_String_Slice_Pos_get_x3f(v_val_3036_, v___x_2977_);
lean_dec(v_val_3036_);
if (lean_obj_tag(v___x_3037_) == 0)
{
v___y_2796_ = v___y_3034_;
v___y_2797_ = v___y_3031_;
v___y_2798_ = v___y_3030_;
v___y_2799_ = v___y_3032_;
v___y_2800_ = v___y_3033_;
v___y_2801_ = v___y_3032_;
goto v___jp_2795_;
}
else
{
lean_object* v_val_3038_; uint32_t v___x_3039_; uint32_t v___x_3040_; uint8_t v___x_3041_; 
v_val_3038_ = lean_ctor_get(v___x_3037_, 0);
lean_inc(v_val_3038_);
lean_dec_ref_known(v___x_3037_, 1);
v___x_3039_ = 65;
v___x_3040_ = lean_unbox_uint32(v_val_3038_);
v___x_3041_ = lean_uint32_dec_le(v___x_3039_, v___x_3040_);
if (v___x_3041_ == 0)
{
uint32_t v___x_3042_; 
v___x_3042_ = lean_unbox_uint32(v_val_3038_);
lean_dec(v_val_3038_);
v___y_2813_ = v___y_3034_;
v___y_2814_ = v___x_3042_;
v___y_2815_ = v___y_3031_;
v___y_2816_ = v___y_3030_;
v___y_2817_ = v___y_3032_;
v___y_2818_ = v___y_3033_;
v___y_2819_ = v___x_3041_;
goto v___jp_2812_;
}
else
{
uint32_t v___x_3043_; uint32_t v___x_3044_; uint8_t v___x_3045_; uint32_t v___x_3046_; 
v___x_3043_ = 90;
v___x_3044_ = lean_unbox_uint32(v_val_3038_);
v___x_3045_ = lean_uint32_dec_le(v___x_3044_, v___x_3043_);
v___x_3046_ = lean_unbox_uint32(v_val_3038_);
lean_dec(v_val_3038_);
v___y_2813_ = v___y_3034_;
v___y_2814_ = v___x_3046_;
v___y_2815_ = v___y_3031_;
v___y_2816_ = v___y_3030_;
v___y_2817_ = v___y_3032_;
v___y_2818_ = v___y_3033_;
v___y_2819_ = v___x_3045_;
goto v___jp_2812_;
}
}
}
}
v___jp_3047_:
{
uint32_t v___x_3053_; uint8_t v___x_3054_; 
v___x_3053_ = 95;
v___x_3054_ = lean_uint32_dec_eq(v___y_3048_, v___x_3053_);
if (v___x_3054_ == 0)
{
uint8_t v___x_3055_; 
v___x_3055_ = l_Lean_isLetterLike(v___y_3048_);
v___y_3030_ = v___y_3050_;
v___y_3031_ = v___y_3049_;
v___y_3032_ = v___y_3051_;
v___y_3033_ = v___y_3052_;
v___y_3034_ = v___x_3055_;
goto v___jp_3029_;
}
else
{
v___y_3030_ = v___y_3050_;
v___y_3031_ = v___y_3049_;
v___y_3032_ = v___y_3051_;
v___y_3033_ = v___y_3052_;
v___y_3034_ = v___x_3054_;
goto v___jp_3029_;
}
}
v___jp_3056_:
{
if (v___y_3062_ == 0)
{
uint32_t v___x_3063_; uint8_t v___x_3064_; 
v___x_3063_ = 97;
v___x_3064_ = lean_uint32_dec_le(v___x_3063_, v___y_3057_);
if (v___x_3064_ == 0)
{
v___y_3048_ = v___y_3057_;
v___y_3049_ = v___y_3059_;
v___y_3050_ = v___y_3058_;
v___y_3051_ = v___y_3060_;
v___y_3052_ = v___y_3061_;
goto v___jp_3047_;
}
else
{
uint32_t v___x_3065_; uint8_t v___x_3066_; 
v___x_3065_ = 122;
v___x_3066_ = lean_uint32_dec_le(v___y_3057_, v___x_3065_);
if (v___x_3066_ == 0)
{
v___y_3048_ = v___y_3057_;
v___y_3049_ = v___y_3059_;
v___y_3050_ = v___y_3058_;
v___y_3051_ = v___y_3060_;
v___y_3052_ = v___y_3061_;
goto v___jp_3047_;
}
else
{
v___y_3030_ = v___y_3058_;
v___y_3031_ = v___y_3059_;
v___y_3032_ = v___y_3060_;
v___y_3033_ = v___y_3061_;
v___y_3034_ = v___x_3066_;
goto v___jp_3029_;
}
}
}
else
{
v___y_3030_ = v___y_3058_;
v___y_3031_ = v___y_3059_;
v___y_3032_ = v___y_3060_;
v___y_3033_ = v___y_3061_;
v___y_3034_ = v___y_3062_;
goto v___jp_3029_;
}
}
v___jp_3067_:
{
if (lean_obj_tag(v_x_2739_) == 2)
{
lean_object* v_val_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
v_val_3071_ = lean_ctor_get(v_x_2739_, 1);
v___x_3072_ = lean_string_utf8_byte_size(v_val_3071_);
lean_inc_ref(v_val_3071_);
v___x_3073_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3073_, 0, v_val_3071_);
lean_ctor_set(v___x_3073_, 1, v___x_2977_);
lean_ctor_set(v___x_3073_, 2, v___x_3072_);
v___x_3074_ = l_String_Slice_Pos_get_x3f(v___x_3073_, v___x_2977_);
lean_dec_ref_known(v___x_3073_, 3);
if (lean_obj_tag(v___x_3074_) == 0)
{
lean_inc_ref(v_val_3071_);
v___y_3030_ = v___y_3068_;
v___y_3031_ = v___y_3070_;
v___y_3032_ = v___y_3069_;
v___y_3033_ = v_val_3071_;
v___y_3034_ = v___y_3069_;
goto v___jp_3029_;
}
else
{
lean_object* v_val_3075_; uint32_t v___x_3076_; uint32_t v___x_3077_; uint8_t v___x_3078_; 
v_val_3075_ = lean_ctor_get(v___x_3074_, 0);
lean_inc(v_val_3075_);
lean_dec_ref_known(v___x_3074_, 1);
v___x_3076_ = 65;
v___x_3077_ = lean_unbox_uint32(v_val_3075_);
v___x_3078_ = lean_uint32_dec_le(v___x_3076_, v___x_3077_);
if (v___x_3078_ == 0)
{
uint32_t v___x_3079_; 
v___x_3079_ = lean_unbox_uint32(v_val_3075_);
lean_dec(v_val_3075_);
lean_inc_ref(v_val_3071_);
v___y_3057_ = v___x_3079_;
v___y_3058_ = v___y_3068_;
v___y_3059_ = v___y_3070_;
v___y_3060_ = v___y_3069_;
v___y_3061_ = v_val_3071_;
v___y_3062_ = v___x_3078_;
goto v___jp_3056_;
}
else
{
uint32_t v___x_3080_; uint32_t v___x_3081_; uint8_t v___x_3082_; uint32_t v___x_3083_; 
v___x_3080_ = 90;
v___x_3081_ = lean_unbox_uint32(v_val_3075_);
v___x_3082_ = lean_uint32_dec_le(v___x_3081_, v___x_3080_);
v___x_3083_ = lean_unbox_uint32(v_val_3075_);
lean_dec(v_val_3075_);
lean_inc_ref(v_val_3071_);
v___y_3057_ = v___x_3083_;
v___y_3058_ = v___y_3068_;
v___y_3059_ = v___y_3070_;
v___y_3060_ = v___y_3069_;
v___y_3061_ = v_val_3071_;
v___y_3062_ = v___x_3082_;
goto v___jp_3056_;
}
}
}
else
{
lean_dec(v_x_2739_);
return v___y_3070_;
}
}
v___jp_3088_:
{
lean_object* v___x_3089_; lean_object* v___x_3090_; uint8_t v___x_3091_; 
v___x_3089_ = lean_unsigned_to_nat(3u);
v___x_3090_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_3089_);
v___x_3091_ = l_Lean_Syntax_matchesNull(v___x_3090_, v___x_2977_);
if (v___x_3091_ == 0)
{
lean_object* v___x_3092_; lean_object* v___x_3093_; uint8_t v___x_3094_; 
lean_dec(v___x_3087_);
v___x_3092_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds));
lean_inc(v_x_2739_);
v___x_3093_ = l_Lean_Syntax_getKind(v_x_2739_);
v___x_3094_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_3092_, v___x_3093_);
if (v___x_3094_ == 0)
{
lean_object* v___x_3095_; uint8_t v___x_3096_; 
v___x_3095_ = ((lean_object*)(l_Lean_Server_FileWorker_docKinds));
v___x_3096_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_3095_, v___x_3093_);
lean_dec(v___x_3093_);
if (v___x_3096_ == 0)
{
lean_object* v___x_3097_; uint8_t v___x_3098_; 
v___x_3097_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5));
lean_inc(v_x_2739_);
v___x_3098_ = l_Lean_Syntax_isOfKind(v_x_2739_, v___x_3097_);
if (v___x_3098_ == 0)
{
lean_object* v___x_3099_; size_t v_sz_3100_; size_t v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; uint8_t v___x_3107_; 
lean_dec(v___x_3084_);
v___x_3099_ = l_Lean_Syntax_getArgs(v_x_2739_);
v_sz_3100_ = lean_array_size(v___x_3099_);
v___x_3101_ = ((size_t)0ULL);
v___x_3102_ = l_unsafeCast___redArg(v___x_3099_);
lean_dec_ref(v___x_3099_);
v___x_3103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_2738_, v_sz_3100_, v___x_3101_, v___x_3102_);
v___x_3104_ = l_unsafeCast___redArg(v___x_3103_);
lean_dec_ref(v___x_3103_);
v___x_3105_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6));
v___x_3106_ = lean_array_get_size(v___x_3104_);
v___x_3107_ = lean_nat_dec_lt(v___x_2977_, v___x_3106_);
if (v___x_3107_ == 0)
{
lean_dec(v___x_3104_);
v___y_3014_ = v___x_3096_;
v___y_3015_ = v___x_3105_;
goto v___jp_3013_;
}
else
{
size_t v___x_3108_; lean_object* v___x_3109_; 
v___x_3108_ = lean_usize_of_nat(v___x_3106_);
v___x_3109_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v___x_3104_, v___x_3101_, v___x_3108_, v___x_3105_);
lean_dec(v___x_3104_);
v___y_3014_ = v___x_3096_;
v___y_3015_ = v___x_3109_;
goto v___jp_3013_;
}
}
else
{
lean_object* v___x_3110_; 
v___x_3110_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_2738_, v___x_3084_);
v___y_3014_ = v___x_3096_;
v___y_3015_ = v___x_3110_;
goto v___jp_3013_;
}
}
else
{
lean_object* v___x_3111_; uint8_t v___x_3112_; 
lean_dec(v___x_3084_);
v___x_3111_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_3085_);
lean_dec(v_x_2739_);
v___x_3112_ = l_Lean_Syntax_isAtom(v___x_3111_);
if (v___x_3112_ == 0)
{
lean_object* v___x_3113_; lean_object* v___x_3114_; 
lean_inc_ref(v_text_2738_);
v___x_3113_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens), 2, 1);
lean_closure_set(v___x_3113_, 0, v_text_2738_);
v___x_3114_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(v_text_2738_, v___x_3111_, v___x_3113_);
return v___x_3114_;
}
else
{
lean_object* v___x_3115_; 
lean_dec(v___x_3111_);
lean_dec_ref(v_text_2738_);
v___x_3115_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_3115_;
}
}
}
else
{
lean_object* v___x_3116_; 
lean_dec(v___x_3093_);
lean_dec(v___x_3084_);
lean_dec(v_x_2739_);
lean_dec_ref(v_text_2738_);
v___x_3116_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_3116_;
}
}
else
{
lean_object* v___x_3117_; lean_object* v___x_3118_; uint8_t v___x_3119_; 
v___x_3117_ = lean_unsigned_to_nat(4u);
v___x_3118_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_3117_);
v___x_3119_ = l_Lean_Syntax_matchesNull(v___x_3118_, v___x_2977_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3120_; lean_object* v___x_3121_; uint8_t v___x_3122_; 
lean_dec(v___x_3087_);
v___x_3120_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds));
lean_inc(v_x_2739_);
v___x_3121_ = l_Lean_Syntax_getKind(v_x_2739_);
v___x_3122_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_3120_, v___x_3121_);
if (v___x_3122_ == 0)
{
lean_object* v___x_3123_; uint8_t v___x_3124_; 
v___x_3123_ = ((lean_object*)(l_Lean_Server_FileWorker_docKinds));
v___x_3124_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_3123_, v___x_3121_);
lean_dec(v___x_3121_);
if (v___x_3124_ == 0)
{
lean_object* v___x_3125_; uint8_t v___x_3126_; 
v___x_3125_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5));
lean_inc(v_x_2739_);
v___x_3126_ = l_Lean_Syntax_isOfKind(v_x_2739_, v___x_3125_);
if (v___x_3126_ == 0)
{
lean_object* v___x_3127_; size_t v_sz_3128_; size_t v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; 
lean_dec(v___x_3084_);
v___x_3127_ = l_Lean_Syntax_getArgs(v_x_2739_);
v_sz_3128_ = lean_array_size(v___x_3127_);
v___x_3129_ = ((size_t)0ULL);
v___x_3130_ = l_unsafeCast___redArg(v___x_3127_);
lean_dec_ref(v___x_3127_);
v___x_3131_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_2738_, v_sz_3128_, v___x_3129_, v___x_3130_);
v___x_3132_ = l_unsafeCast___redArg(v___x_3131_);
lean_dec_ref(v___x_3131_);
v___x_3133_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6));
v___x_3134_ = lean_array_get_size(v___x_3132_);
v___x_3135_ = lean_nat_dec_lt(v___x_2977_, v___x_3134_);
if (v___x_3135_ == 0)
{
lean_dec(v___x_3132_);
v___y_3068_ = v___x_3091_;
v___y_3069_ = v___x_3124_;
v___y_3070_ = v___x_3133_;
goto v___jp_3067_;
}
else
{
size_t v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = lean_usize_of_nat(v___x_3134_);
v___x_3137_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v___x_3132_, v___x_3129_, v___x_3136_, v___x_3133_);
lean_dec(v___x_3132_);
v___y_3068_ = v___x_3091_;
v___y_3069_ = v___x_3124_;
v___y_3070_ = v___x_3137_;
goto v___jp_3067_;
}
}
else
{
lean_object* v___x_3138_; 
v___x_3138_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_2738_, v___x_3084_);
v___y_3068_ = v___x_3091_;
v___y_3069_ = v___x_3124_;
v___y_3070_ = v___x_3138_;
goto v___jp_3067_;
}
}
else
{
lean_object* v___x_3139_; uint8_t v___x_3140_; 
lean_dec(v___x_3084_);
v___x_3139_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_3085_);
lean_dec(v_x_2739_);
v___x_3140_ = l_Lean_Syntax_isAtom(v___x_3139_);
if (v___x_3140_ == 0)
{
lean_object* v___x_3141_; lean_object* v___x_3142_; 
lean_inc_ref(v_text_2738_);
v___x_3141_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens), 2, 1);
lean_closure_set(v___x_3141_, 0, v_text_2738_);
v___x_3142_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(v_text_2738_, v___x_3139_, v___x_3141_);
return v___x_3142_;
}
else
{
lean_object* v___x_3143_; 
lean_dec(v___x_3139_);
lean_dec_ref(v_text_2738_);
v___x_3143_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_3143_;
}
}
}
else
{
lean_object* v___x_3144_; 
lean_dec(v___x_3121_);
lean_dec(v___x_3084_);
lean_dec(v_x_2739_);
lean_dec_ref(v_text_2738_);
v___x_3144_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_3144_;
}
}
else
{
lean_object* v_tokens_3145_; uint8_t v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
lean_dec(v_x_2739_);
v_tokens_3145_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_2738_, v___x_3084_);
v___x_3146_ = 2;
v___x_3147_ = lean_unsigned_to_nat(5u);
v___x_3148_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3148_, 0, v___x_3087_);
lean_ctor_set(v___x_3148_, 1, v___x_3147_);
lean_ctor_set_uint8(v___x_3148_, sizeof(void*)*2, v___x_3146_);
v___x_3149_ = lean_array_push(v_tokens_3145_, v___x_3148_);
return v___x_3149_;
}
}
}
}
v___jp_2840_:
{
if (v___y_2845_ == 0)
{
v___y_2765_ = v___y_2842_;
v___y_2766_ = v___y_2843_;
v___y_2767_ = v___y_2841_;
goto v___jp_2764_;
}
else
{
if (v___y_2844_ == 0)
{
v___y_2765_ = v___y_2842_;
v___y_2766_ = v___y_2843_;
v___y_2767_ = v___x_2839_;
goto v___jp_2764_;
}
else
{
v___y_2765_ = v___y_2842_;
v___y_2766_ = v___y_2843_;
v___y_2767_ = v___y_2841_;
goto v___jp_2764_;
}
}
}
v___jp_2846_:
{
if (v___y_2847_ == 0)
{
v___y_2841_ = v___y_2848_;
v___y_2842_ = v___y_2849_;
v___y_2843_ = v___y_2850_;
v___y_2844_ = v___y_2851_;
v___y_2845_ = v___x_2839_;
goto v___jp_2840_;
}
else
{
v___y_2841_ = v___y_2848_;
v___y_2842_ = v___y_2849_;
v___y_2843_ = v___y_2850_;
v___y_2844_ = v___y_2851_;
v___y_2845_ = v___y_2848_;
goto v___jp_2840_;
}
}
v___jp_2852_:
{
uint32_t v___x_2858_; uint8_t v___x_2859_; 
v___x_2858_ = 95;
v___x_2859_ = lean_uint32_dec_eq(v___y_2856_, v___x_2858_);
if (v___x_2859_ == 0)
{
uint8_t v___x_2860_; 
v___x_2860_ = l_Lean_isLetterLike(v___y_2856_);
v___y_2847_ = v___y_2854_;
v___y_2848_ = v___y_2853_;
v___y_2849_ = v___y_2855_;
v___y_2850_ = v___y_2857_;
v___y_2851_ = v___x_2860_;
goto v___jp_2846_;
}
else
{
v___y_2847_ = v___y_2854_;
v___y_2848_ = v___y_2853_;
v___y_2849_ = v___y_2855_;
v___y_2850_ = v___y_2857_;
v___y_2851_ = v___x_2859_;
goto v___jp_2846_;
}
}
v___jp_2861_:
{
if (v___y_2867_ == 0)
{
uint32_t v___x_2868_; uint8_t v___x_2869_; 
v___x_2868_ = 97;
v___x_2869_ = lean_uint32_dec_le(v___x_2868_, v___y_2865_);
if (v___x_2869_ == 0)
{
v___y_2853_ = v___y_2863_;
v___y_2854_ = v___y_2862_;
v___y_2855_ = v___y_2864_;
v___y_2856_ = v___y_2865_;
v___y_2857_ = v___y_2866_;
goto v___jp_2852_;
}
else
{
uint32_t v___x_2870_; uint8_t v___x_2871_; 
v___x_2870_ = 122;
v___x_2871_ = lean_uint32_dec_le(v___y_2865_, v___x_2870_);
if (v___x_2871_ == 0)
{
v___y_2853_ = v___y_2863_;
v___y_2854_ = v___y_2862_;
v___y_2855_ = v___y_2864_;
v___y_2856_ = v___y_2865_;
v___y_2857_ = v___y_2866_;
goto v___jp_2852_;
}
else
{
v___y_2847_ = v___y_2862_;
v___y_2848_ = v___y_2863_;
v___y_2849_ = v___y_2864_;
v___y_2850_ = v___y_2866_;
v___y_2851_ = v___x_2871_;
goto v___jp_2846_;
}
}
}
else
{
v___y_2847_ = v___y_2862_;
v___y_2848_ = v___y_2863_;
v___y_2849_ = v___y_2864_;
v___y_2850_ = v___y_2866_;
v___y_2851_ = v___y_2867_;
goto v___jp_2846_;
}
}
}
else
{
lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; uint8_t v___x_3256_; 
v___x_3252_ = lean_unsigned_to_nat(0u);
v___x_3253_ = lean_unsigned_to_nat(2u);
v___x_3254_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_3253_);
v___x_3255_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__75));
lean_inc(v___x_3254_);
v___x_3256_ = l_Lean_Syntax_isOfKind(v___x_3254_, v___x_3255_);
if (v___x_3256_ == 0)
{
lean_object* v___x_3257_; lean_object* v___x_3258_; uint8_t v___x_3259_; 
lean_dec(v___x_3254_);
v___x_3257_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds));
lean_inc(v_x_2739_);
v___x_3258_ = l_Lean_Syntax_getKind(v_x_2739_);
v___x_3259_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_3257_, v___x_3258_);
if (v___x_3259_ == 0)
{
lean_object* v___x_3260_; uint8_t v___x_3261_; lean_object* v___y_3263_; uint8_t v___y_3264_; lean_object* v___y_3265_; uint8_t v___y_3266_; uint8_t v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; uint8_t v___y_3271_; uint8_t v___y_3273_; uint32_t v___y_3274_; lean_object* v___y_3275_; lean_object* v___y_3276_; uint8_t v___y_3281_; uint32_t v___y_3282_; lean_object* v___y_3283_; lean_object* v___y_3284_; uint8_t v___y_3285_; lean_object* v___y_3291_; lean_object* v___y_3292_; uint8_t v___y_3293_; uint32_t v___y_3307_; lean_object* v___y_3308_; lean_object* v___y_3309_; uint32_t v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; uint8_t v___y_3317_; lean_object* v___y_3323_; 
v___x_3260_ = ((lean_object*)(l_Lean_Server_FileWorker_docKinds));
v___x_3261_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_3260_, v___x_3258_);
lean_dec(v___x_3258_);
if (v___x_3261_ == 0)
{
lean_object* v___x_3337_; uint8_t v___x_3338_; 
v___x_3337_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5));
lean_inc(v_x_2739_);
v___x_3338_ = l_Lean_Syntax_isOfKind(v_x_2739_, v___x_3337_);
if (v___x_3338_ == 0)
{
lean_object* v___x_3339_; size_t v_sz_3340_; size_t v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; uint8_t v___x_3347_; 
v___x_3339_ = l_Lean_Syntax_getArgs(v_x_2739_);
v_sz_3340_ = lean_array_size(v___x_3339_);
v___x_3341_ = ((size_t)0ULL);
v___x_3342_ = l_unsafeCast___redArg(v___x_3339_);
lean_dec_ref(v___x_3339_);
v___x_3343_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_2738_, v_sz_3340_, v___x_3341_, v___x_3342_);
v___x_3344_ = l_unsafeCast___redArg(v___x_3343_);
lean_dec_ref(v___x_3343_);
v___x_3345_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6));
v___x_3346_ = lean_array_get_size(v___x_3344_);
v___x_3347_ = lean_nat_dec_lt(v___x_3252_, v___x_3346_);
if (v___x_3347_ == 0)
{
lean_dec(v___x_3344_);
v___y_3323_ = v___x_3345_;
goto v___jp_3322_;
}
else
{
size_t v___x_3348_; lean_object* v___x_3349_; 
v___x_3348_ = lean_usize_of_nat(v___x_3346_);
v___x_3349_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v___x_3344_, v___x_3341_, v___x_3348_, v___x_3345_);
lean_dec(v___x_3344_);
v___y_3323_ = v___x_3349_;
goto v___jp_3322_;
}
}
else
{
lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3350_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_3252_);
v___x_3351_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_2738_, v___x_3350_);
v___y_3323_ = v___x_3351_;
goto v___jp_3322_;
}
}
else
{
lean_object* v___x_3352_; lean_object* v___x_3353_; uint8_t v___x_3354_; 
v___x_3352_ = lean_unsigned_to_nat(1u);
v___x_3353_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_3352_);
lean_dec(v_x_2739_);
v___x_3354_ = l_Lean_Syntax_isAtom(v___x_3353_);
if (v___x_3354_ == 0)
{
lean_object* v___x_3355_; lean_object* v___x_3356_; 
lean_inc_ref(v_text_2738_);
v___x_3355_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens), 2, 1);
lean_closure_set(v___x_3355_, 0, v_text_2738_);
v___x_3356_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(v_text_2738_, v___x_3353_, v___x_3355_);
return v___x_3356_;
}
else
{
lean_object* v___x_3357_; 
lean_dec(v___x_3353_);
lean_dec_ref(v_text_2738_);
v___x_3357_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_3357_;
}
}
v___jp_3262_:
{
if (v___y_3266_ == 0)
{
v___y_2741_ = v___y_3263_;
v___y_2742_ = v___y_3265_;
v___y_2743_ = v___x_3261_;
goto v___jp_2740_;
}
else
{
if (v___y_3264_ == 0)
{
v___y_2741_ = v___y_3263_;
v___y_2742_ = v___y_3265_;
v___y_2743_ = v___x_2837_;
goto v___jp_2740_;
}
else
{
v___y_2741_ = v___y_3263_;
v___y_2742_ = v___y_3265_;
v___y_2743_ = v___x_3261_;
goto v___jp_2740_;
}
}
}
v___jp_3267_:
{
if (v___y_3268_ == 0)
{
v___y_3263_ = v___y_3269_;
v___y_3264_ = v___y_3271_;
v___y_3265_ = v___y_3270_;
v___y_3266_ = v___x_2837_;
goto v___jp_3262_;
}
else
{
v___y_3263_ = v___y_3269_;
v___y_3264_ = v___y_3271_;
v___y_3265_ = v___y_3270_;
v___y_3266_ = v___x_3261_;
goto v___jp_3262_;
}
}
v___jp_3272_:
{
uint32_t v___x_3277_; uint8_t v___x_3278_; 
v___x_3277_ = 95;
v___x_3278_ = lean_uint32_dec_eq(v___y_3274_, v___x_3277_);
if (v___x_3278_ == 0)
{
uint8_t v___x_3279_; 
v___x_3279_ = l_Lean_isLetterLike(v___y_3274_);
v___y_3268_ = v___y_3273_;
v___y_3269_ = v___y_3275_;
v___y_3270_ = v___y_3276_;
v___y_3271_ = v___x_3279_;
goto v___jp_3267_;
}
else
{
v___y_3268_ = v___y_3273_;
v___y_3269_ = v___y_3275_;
v___y_3270_ = v___y_3276_;
v___y_3271_ = v___x_3278_;
goto v___jp_3267_;
}
}
v___jp_3280_:
{
if (v___y_3285_ == 0)
{
uint32_t v___x_3286_; uint8_t v___x_3287_; 
v___x_3286_ = 97;
v___x_3287_ = lean_uint32_dec_le(v___x_3286_, v___y_3282_);
if (v___x_3287_ == 0)
{
v___y_3273_ = v___y_3281_;
v___y_3274_ = v___y_3282_;
v___y_3275_ = v___y_3283_;
v___y_3276_ = v___y_3284_;
goto v___jp_3272_;
}
else
{
uint32_t v___x_3288_; uint8_t v___x_3289_; 
v___x_3288_ = 122;
v___x_3289_ = lean_uint32_dec_le(v___y_3282_, v___x_3288_);
if (v___x_3289_ == 0)
{
v___y_3273_ = v___y_3281_;
v___y_3274_ = v___y_3282_;
v___y_3275_ = v___y_3283_;
v___y_3276_ = v___y_3284_;
goto v___jp_3272_;
}
else
{
v___y_3268_ = v___y_3281_;
v___y_3269_ = v___y_3283_;
v___y_3270_ = v___y_3284_;
v___y_3271_ = v___x_3289_;
goto v___jp_3267_;
}
}
}
else
{
v___y_3268_ = v___y_3281_;
v___y_3269_ = v___y_3283_;
v___y_3270_ = v___y_3284_;
v___y_3271_ = v___y_3285_;
goto v___jp_3267_;
}
}
v___jp_3290_:
{
lean_object* v___x_3294_; 
lean_inc_ref(v___y_3291_);
v___x_3294_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v___y_3291_);
if (lean_obj_tag(v___x_3294_) == 0)
{
v___y_3268_ = v___y_3293_;
v___y_3269_ = v___y_3291_;
v___y_3270_ = v___y_3292_;
v___y_3271_ = v___x_3261_;
goto v___jp_3267_;
}
else
{
lean_object* v_val_3295_; lean_object* v___x_3296_; 
v_val_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_val_3295_);
lean_dec_ref_known(v___x_3294_, 1);
v___x_3296_ = l_String_Slice_Pos_get_x3f(v_val_3295_, v___x_3252_);
lean_dec(v_val_3295_);
if (lean_obj_tag(v___x_3296_) == 0)
{
v___y_3268_ = v___y_3293_;
v___y_3269_ = v___y_3291_;
v___y_3270_ = v___y_3292_;
v___y_3271_ = v___x_3261_;
goto v___jp_3267_;
}
else
{
lean_object* v_val_3297_; uint32_t v___x_3298_; uint32_t v___x_3299_; uint8_t v___x_3300_; 
v_val_3297_ = lean_ctor_get(v___x_3296_, 0);
lean_inc(v_val_3297_);
lean_dec_ref_known(v___x_3296_, 1);
v___x_3298_ = 65;
v___x_3299_ = lean_unbox_uint32(v_val_3297_);
v___x_3300_ = lean_uint32_dec_le(v___x_3298_, v___x_3299_);
if (v___x_3300_ == 0)
{
uint32_t v___x_3301_; 
v___x_3301_ = lean_unbox_uint32(v_val_3297_);
lean_dec(v_val_3297_);
v___y_3281_ = v___y_3293_;
v___y_3282_ = v___x_3301_;
v___y_3283_ = v___y_3291_;
v___y_3284_ = v___y_3292_;
v___y_3285_ = v___x_3300_;
goto v___jp_3280_;
}
else
{
uint32_t v___x_3302_; uint32_t v___x_3303_; uint8_t v___x_3304_; uint32_t v___x_3305_; 
v___x_3302_ = 90;
v___x_3303_ = lean_unbox_uint32(v_val_3297_);
v___x_3304_ = lean_uint32_dec_le(v___x_3303_, v___x_3302_);
v___x_3305_ = lean_unbox_uint32(v_val_3297_);
lean_dec(v_val_3297_);
v___y_3281_ = v___y_3293_;
v___y_3282_ = v___x_3305_;
v___y_3283_ = v___y_3291_;
v___y_3284_ = v___y_3292_;
v___y_3285_ = v___x_3304_;
goto v___jp_3280_;
}
}
}
}
v___jp_3306_:
{
uint32_t v___x_3310_; uint8_t v___x_3311_; 
v___x_3310_ = 95;
v___x_3311_ = lean_uint32_dec_eq(v___y_3307_, v___x_3310_);
if (v___x_3311_ == 0)
{
uint8_t v___x_3312_; 
v___x_3312_ = l_Lean_isLetterLike(v___y_3307_);
v___y_3291_ = v___y_3308_;
v___y_3292_ = v___y_3309_;
v___y_3293_ = v___x_3312_;
goto v___jp_3290_;
}
else
{
v___y_3291_ = v___y_3308_;
v___y_3292_ = v___y_3309_;
v___y_3293_ = v___x_3311_;
goto v___jp_3290_;
}
}
v___jp_3313_:
{
if (v___y_3317_ == 0)
{
uint32_t v___x_3318_; uint8_t v___x_3319_; 
v___x_3318_ = 97;
v___x_3319_ = lean_uint32_dec_le(v___x_3318_, v___y_3314_);
if (v___x_3319_ == 0)
{
v___y_3307_ = v___y_3314_;
v___y_3308_ = v___y_3315_;
v___y_3309_ = v___y_3316_;
goto v___jp_3306_;
}
else
{
uint32_t v___x_3320_; uint8_t v___x_3321_; 
v___x_3320_ = 122;
v___x_3321_ = lean_uint32_dec_le(v___y_3314_, v___x_3320_);
if (v___x_3321_ == 0)
{
v___y_3307_ = v___y_3314_;
v___y_3308_ = v___y_3315_;
v___y_3309_ = v___y_3316_;
goto v___jp_3306_;
}
else
{
v___y_3291_ = v___y_3315_;
v___y_3292_ = v___y_3316_;
v___y_3293_ = v___x_3321_;
goto v___jp_3290_;
}
}
}
else
{
v___y_3291_ = v___y_3315_;
v___y_3292_ = v___y_3316_;
v___y_3293_ = v___y_3317_;
goto v___jp_3290_;
}
}
v___jp_3322_:
{
if (lean_obj_tag(v_x_2739_) == 2)
{
lean_object* v_val_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; 
v_val_3324_ = lean_ctor_get(v_x_2739_, 1);
v___x_3325_ = lean_string_utf8_byte_size(v_val_3324_);
lean_inc_ref(v_val_3324_);
v___x_3326_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3326_, 0, v_val_3324_);
lean_ctor_set(v___x_3326_, 1, v___x_3252_);
lean_ctor_set(v___x_3326_, 2, v___x_3325_);
v___x_3327_ = l_String_Slice_Pos_get_x3f(v___x_3326_, v___x_3252_);
lean_dec_ref_known(v___x_3326_, 3);
if (lean_obj_tag(v___x_3327_) == 0)
{
lean_inc_ref(v_val_3324_);
v___y_3291_ = v_val_3324_;
v___y_3292_ = v___y_3323_;
v___y_3293_ = v___x_3261_;
goto v___jp_3290_;
}
else
{
lean_object* v_val_3328_; uint32_t v___x_3329_; uint32_t v___x_3330_; uint8_t v___x_3331_; 
v_val_3328_ = lean_ctor_get(v___x_3327_, 0);
lean_inc(v_val_3328_);
lean_dec_ref_known(v___x_3327_, 1);
v___x_3329_ = 65;
v___x_3330_ = lean_unbox_uint32(v_val_3328_);
v___x_3331_ = lean_uint32_dec_le(v___x_3329_, v___x_3330_);
if (v___x_3331_ == 0)
{
uint32_t v___x_3332_; 
v___x_3332_ = lean_unbox_uint32(v_val_3328_);
lean_dec(v_val_3328_);
lean_inc_ref(v_val_3324_);
v___y_3314_ = v___x_3332_;
v___y_3315_ = v_val_3324_;
v___y_3316_ = v___y_3323_;
v___y_3317_ = v___x_3331_;
goto v___jp_3313_;
}
else
{
uint32_t v___x_3333_; uint32_t v___x_3334_; uint8_t v___x_3335_; uint32_t v___x_3336_; 
v___x_3333_ = 90;
v___x_3334_ = lean_unbox_uint32(v_val_3328_);
v___x_3335_ = lean_uint32_dec_le(v___x_3334_, v___x_3333_);
v___x_3336_ = lean_unbox_uint32(v_val_3328_);
lean_dec(v_val_3328_);
lean_inc_ref(v_val_3324_);
v___y_3314_ = v___x_3336_;
v___y_3315_ = v_val_3324_;
v___y_3316_ = v___y_3323_;
v___y_3317_ = v___x_3335_;
goto v___jp_3313_;
}
}
}
else
{
lean_dec(v_x_2739_);
return v___y_3323_;
}
}
}
else
{
lean_object* v___x_3358_; 
lean_dec(v___x_3258_);
lean_dec(v_x_2739_);
lean_dec_ref(v_text_2738_);
v___x_3358_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_3358_;
}
}
else
{
lean_object* v___x_3359_; lean_object* v_tokens_3360_; uint8_t v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3359_ = l_Lean_Syntax_getArg(v_x_2739_, v___x_3252_);
lean_dec(v_x_2739_);
v_tokens_3360_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_2738_, v___x_3359_);
v___x_3361_ = 2;
v___x_3362_ = lean_unsigned_to_nat(5u);
v___x_3363_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3363_, 0, v___x_3254_);
lean_ctor_set(v___x_3363_, 1, v___x_3362_);
lean_ctor_set_uint8(v___x_3363_, sizeof(void*)*2, v___x_3361_);
v___x_3364_ = lean_array_push(v_tokens_3360_, v___x_3363_);
return v___x_3364_;
}
}
v___jp_2740_:
{
if (v___y_2743_ == 0)
{
lean_object* v___x_2744_; uint8_t v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; uint8_t v___x_2750_; lean_object* v___x_2751_; 
v___x_2744_ = l_Lean_Server_FileWorker_keywordSemanticTokenMap;
v___x_2745_ = 0;
v___x_2746_ = lean_box(v___x_2745_);
v___x_2747_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v___x_2744_, v___y_2741_, v___x_2746_);
lean_dec(v___x_2746_);
lean_dec_ref(v___y_2741_);
v___x_2748_ = lean_unsigned_to_nat(5u);
v___x_2749_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2749_, 0, v_x_2739_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
v___x_2750_ = lean_unbox(v___x_2747_);
lean_dec(v___x_2747_);
lean_ctor_set_uint8(v___x_2749_, sizeof(void*)*2, v___x_2750_);
v___x_2751_ = lean_array_push(v___y_2742_, v___x_2749_);
return v___x_2751_;
}
else
{
lean_dec_ref(v___y_2741_);
lean_dec(v_x_2739_);
return v___y_2742_;
}
}
v___jp_2752_:
{
if (v___y_2755_ == 0)
{
lean_object* v___x_2756_; uint8_t v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; uint8_t v___x_2762_; lean_object* v___x_2763_; 
v___x_2756_ = l_Lean_Server_FileWorker_keywordSemanticTokenMap;
v___x_2757_ = 0;
v___x_2758_ = lean_box(v___x_2757_);
v___x_2759_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v___x_2756_, v___y_2754_, v___x_2758_);
lean_dec(v___x_2758_);
lean_dec_ref(v___y_2754_);
v___x_2760_ = lean_unsigned_to_nat(5u);
v___x_2761_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2761_, 0, v_x_2739_);
lean_ctor_set(v___x_2761_, 1, v___x_2760_);
v___x_2762_ = lean_unbox(v___x_2759_);
lean_dec(v___x_2759_);
lean_ctor_set_uint8(v___x_2761_, sizeof(void*)*2, v___x_2762_);
v___x_2763_ = lean_array_push(v___y_2753_, v___x_2761_);
return v___x_2763_;
}
else
{
lean_dec_ref(v___y_2754_);
lean_dec(v_x_2739_);
return v___y_2753_;
}
}
v___jp_2764_:
{
if (v___y_2767_ == 0)
{
lean_object* v___x_2768_; uint8_t v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; uint8_t v___x_2774_; lean_object* v___x_2775_; 
v___x_2768_ = l_Lean_Server_FileWorker_keywordSemanticTokenMap;
v___x_2769_ = 0;
v___x_2770_ = lean_box(v___x_2769_);
v___x_2771_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v___x_2768_, v___y_2765_, v___x_2770_);
lean_dec(v___x_2770_);
lean_dec_ref(v___y_2765_);
v___x_2772_ = lean_unsigned_to_nat(5u);
v___x_2773_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2773_, 0, v_x_2739_);
lean_ctor_set(v___x_2773_, 1, v___x_2772_);
v___x_2774_ = lean_unbox(v___x_2771_);
lean_dec(v___x_2771_);
lean_ctor_set_uint8(v___x_2773_, sizeof(void*)*2, v___x_2774_);
v___x_2775_ = lean_array_push(v___y_2766_, v___x_2773_);
return v___x_2775_;
}
else
{
lean_dec_ref(v___y_2765_);
lean_dec(v_x_2739_);
return v___y_2766_;
}
}
v___jp_2776_:
{
if (v___y_2779_ == 0)
{
lean_object* v___x_2780_; uint8_t v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; uint8_t v___x_2786_; lean_object* v___x_2787_; 
v___x_2780_ = l_Lean_Server_FileWorker_keywordSemanticTokenMap;
v___x_2781_ = 0;
v___x_2782_ = lean_box(v___x_2781_);
v___x_2783_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v___x_2780_, v___y_2778_, v___x_2782_);
lean_dec(v___x_2782_);
lean_dec_ref(v___y_2778_);
v___x_2784_ = lean_unsigned_to_nat(5u);
v___x_2785_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2785_, 0, v_x_2739_);
lean_ctor_set(v___x_2785_, 1, v___x_2784_);
v___x_2786_ = lean_unbox(v___x_2783_);
lean_dec(v___x_2783_);
lean_ctor_set_uint8(v___x_2785_, sizeof(void*)*2, v___x_2786_);
v___x_2787_ = lean_array_push(v___y_2777_, v___x_2785_);
return v___x_2787_;
}
else
{
lean_dec_ref(v___y_2778_);
lean_dec(v_x_2739_);
return v___y_2777_;
}
}
v___jp_2788_:
{
if (v___y_2794_ == 0)
{
v___y_2777_ = v___y_2791_;
v___y_2778_ = v___y_2793_;
v___y_2779_ = v___y_2792_;
goto v___jp_2776_;
}
else
{
if (v___y_2789_ == 0)
{
v___y_2777_ = v___y_2791_;
v___y_2778_ = v___y_2793_;
v___y_2779_ = v___y_2790_;
goto v___jp_2776_;
}
else
{
v___y_2777_ = v___y_2791_;
v___y_2778_ = v___y_2793_;
v___y_2779_ = v___y_2792_;
goto v___jp_2776_;
}
}
}
v___jp_2795_:
{
if (v___y_2796_ == 0)
{
v___y_2789_ = v___y_2801_;
v___y_2790_ = v___y_2798_;
v___y_2791_ = v___y_2797_;
v___y_2792_ = v___y_2799_;
v___y_2793_ = v___y_2800_;
v___y_2794_ = v___y_2798_;
goto v___jp_2788_;
}
else
{
v___y_2789_ = v___y_2801_;
v___y_2790_ = v___y_2798_;
v___y_2791_ = v___y_2797_;
v___y_2792_ = v___y_2799_;
v___y_2793_ = v___y_2800_;
v___y_2794_ = v___y_2799_;
goto v___jp_2788_;
}
}
v___jp_2802_:
{
uint32_t v___x_2809_; uint8_t v___x_2810_; 
v___x_2809_ = 95;
v___x_2810_ = lean_uint32_dec_eq(v___y_2804_, v___x_2809_);
if (v___x_2810_ == 0)
{
uint8_t v___x_2811_; 
v___x_2811_ = l_Lean_isLetterLike(v___y_2804_);
v___y_2796_ = v___y_2803_;
v___y_2797_ = v___y_2806_;
v___y_2798_ = v___y_2805_;
v___y_2799_ = v___y_2807_;
v___y_2800_ = v___y_2808_;
v___y_2801_ = v___x_2811_;
goto v___jp_2795_;
}
else
{
v___y_2796_ = v___y_2803_;
v___y_2797_ = v___y_2806_;
v___y_2798_ = v___y_2805_;
v___y_2799_ = v___y_2807_;
v___y_2800_ = v___y_2808_;
v___y_2801_ = v___x_2810_;
goto v___jp_2795_;
}
}
v___jp_2812_:
{
if (v___y_2819_ == 0)
{
uint32_t v___x_2820_; uint8_t v___x_2821_; 
v___x_2820_ = 97;
v___x_2821_ = lean_uint32_dec_le(v___x_2820_, v___y_2814_);
if (v___x_2821_ == 0)
{
v___y_2803_ = v___y_2813_;
v___y_2804_ = v___y_2814_;
v___y_2805_ = v___y_2816_;
v___y_2806_ = v___y_2815_;
v___y_2807_ = v___y_2817_;
v___y_2808_ = v___y_2818_;
goto v___jp_2802_;
}
else
{
uint32_t v___x_2822_; uint8_t v___x_2823_; 
v___x_2822_ = 122;
v___x_2823_ = lean_uint32_dec_le(v___y_2814_, v___x_2822_);
if (v___x_2823_ == 0)
{
v___y_2803_ = v___y_2813_;
v___y_2804_ = v___y_2814_;
v___y_2805_ = v___y_2816_;
v___y_2806_ = v___y_2815_;
v___y_2807_ = v___y_2817_;
v___y_2808_ = v___y_2818_;
goto v___jp_2802_;
}
else
{
v___y_2796_ = v___y_2813_;
v___y_2797_ = v___y_2815_;
v___y_2798_ = v___y_2816_;
v___y_2799_ = v___y_2817_;
v___y_2800_ = v___y_2818_;
v___y_2801_ = v___x_2823_;
goto v___jp_2795_;
}
}
}
else
{
v___y_2796_ = v___y_2813_;
v___y_2797_ = v___y_2815_;
v___y_2798_ = v___y_2816_;
v___y_2799_ = v___y_2817_;
v___y_2800_ = v___y_2818_;
v___y_2801_ = v___y_2819_;
goto v___jp_2795_;
}
}
v___jp_2824_:
{
if (v___y_2827_ == 0)
{
lean_object* v___x_2828_; uint8_t v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; uint8_t v___x_2834_; lean_object* v___x_2835_; 
v___x_2828_ = l_Lean_Server_FileWorker_keywordSemanticTokenMap;
v___x_2829_ = 0;
v___x_2830_ = lean_box(v___x_2829_);
v___x_2831_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v___x_2828_, v___y_2826_, v___x_2830_);
lean_dec(v___x_2830_);
lean_dec_ref(v___y_2826_);
v___x_2832_ = lean_unsigned_to_nat(5u);
v___x_2833_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2833_, 0, v_x_2739_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
v___x_2834_ = lean_unbox(v___x_2831_);
lean_dec(v___x_2831_);
lean_ctor_set_uint8(v___x_2833_, sizeof(void*)*2, v___x_2834_);
v___x_2835_ = lean_array_push(v___y_2825_, v___x_2833_);
return v___x_2835_;
}
else
{
lean_dec_ref(v___y_2826_);
lean_dec(v_x_2739_);
return v___y_2825_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(lean_object* v_text_3365_, size_t v_sz_3366_, size_t v_i_3367_, lean_object* v_bs_3368_){
_start:
{
uint8_t v___x_3369_; 
v___x_3369_ = lean_usize_dec_lt(v_i_3367_, v_sz_3366_);
if (v___x_3369_ == 0)
{
lean_object* v___x_3370_; 
lean_dec_ref(v_text_3365_);
v___x_3370_ = l_unsafeCast___redArg(v_bs_3368_);
lean_dec_ref(v_bs_3368_);
return v___x_3370_;
}
else
{
lean_object* v_v_3371_; lean_object* v___x_3372_; lean_object* v_bs_x27_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; size_t v___x_3376_; size_t v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; 
v_v_3371_ = lean_array_uget(v_bs_3368_, v_i_3367_);
v___x_3372_ = lean_unsigned_to_nat(0u);
v_bs_x27_3373_ = lean_array_uset(v_bs_3368_, v_i_3367_, v___x_3372_);
v___x_3374_ = l_unsafeCast___redArg(v_v_3371_);
lean_dec(v_v_3371_);
lean_inc_ref(v_text_3365_);
v___x_3375_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_3365_, v___x_3374_);
v___x_3376_ = ((size_t)1ULL);
v___x_3377_ = lean_usize_add(v_i_3367_, v___x_3376_);
v___x_3378_ = l_unsafeCast___redArg(v___x_3375_);
lean_dec_ref(v___x_3375_);
v___x_3379_ = lean_array_uset(v_bs_x27_3373_, v_i_3367_, v___x_3378_);
v_i_3367_ = v___x_3377_;
v_bs_3368_ = v___x_3379_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3___boxed(lean_object* v_text_3381_, lean_object* v_sz_3382_, lean_object* v_i_3383_, lean_object* v_bs_3384_){
_start:
{
size_t v_sz_boxed_3385_; size_t v_i_boxed_3386_; lean_object* v_res_3387_; 
v_sz_boxed_3385_ = lean_unbox_usize(v_sz_3382_);
lean_dec(v_sz_3382_);
v_i_boxed_3386_ = lean_unbox_usize(v_i_3383_);
lean_dec(v_i_3383_);
v_res_3387_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_3381_, v_sz_boxed_3385_, v_i_boxed_3386_, v_bs_3384_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1(lean_object* v_00_u03b4_3388_, lean_object* v_t_3389_, lean_object* v_k_3390_, lean_object* v_fallback_3391_){
_start:
{
lean_object* v___x_3392_; 
v___x_3392_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v_t_3389_, v_k_3390_, v_fallback_3391_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___boxed(lean_object* v_00_u03b4_3393_, lean_object* v_t_3394_, lean_object* v_k_3395_, lean_object* v_fallback_3396_){
_start:
{
lean_object* v_res_3397_; 
v_res_3397_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1(v_00_u03b4_3393_, v_t_3394_, v_k_3395_, v_fallback_3396_);
lean_dec(v_fallback_3396_);
lean_dec_ref(v_k_3395_);
lean_dec(v_t_3394_);
return v_res_3397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0(lean_object* v_x_3398_, lean_object* v_info_3399_, lean_object* v_x_3400_){
_start:
{
if (lean_obj_tag(v_info_3399_) == 1)
{
lean_object* v_i_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3445_; 
v_i_3401_ = lean_ctor_get(v_info_3399_, 0);
v_isSharedCheck_3445_ = !lean_is_exclusive(v_info_3399_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3403_ = v_info_3399_;
v_isShared_3404_ = v_isSharedCheck_3445_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_i_3401_);
lean_dec(v_info_3399_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3445_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v_toElabInfo_3405_; lean_object* v_lctx_3406_; lean_object* v_expr_3407_; uint8_t v_isBinder_3408_; lean_object* v_stx_3409_; lean_object* v___x_3426_; 
v_toElabInfo_3405_ = lean_ctor_get(v_i_3401_, 0);
lean_inc_ref(v_toElabInfo_3405_);
v_lctx_3406_ = lean_ctor_get(v_i_3401_, 1);
lean_inc_ref(v_lctx_3406_);
v_expr_3407_ = lean_ctor_get(v_i_3401_, 3);
lean_inc_ref(v_expr_3407_);
v_isBinder_3408_ = lean_ctor_get_uint8(v_i_3401_, sizeof(void*)*4);
lean_dec_ref(v_i_3401_);
v_stx_3409_ = lean_ctor_get(v_toElabInfo_3405_, 1);
lean_inc(v_stx_3409_);
lean_dec_ref(v_toElabInfo_3405_);
v___x_3426_ = l_Lean_Syntax_getHeadInfo(v_stx_3409_);
if (lean_obj_tag(v___x_3426_) == 0)
{
lean_object* v___x_3427_; uint8_t v___x_3428_; 
lean_dec_ref_known(v___x_3426_, 4);
v___x_3427_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go___closed__75));
lean_inc(v_stx_3409_);
v___x_3428_ = l_Lean_Syntax_isOfKind(v_stx_3409_, v___x_3427_);
if (v___x_3428_ == 0)
{
lean_dec_ref(v_expr_3407_);
lean_dec_ref(v_lctx_3406_);
lean_del_object(v___x_3403_);
goto v___jp_3417_;
}
else
{
if (lean_obj_tag(v_expr_3407_) == 1)
{
lean_object* v_fvarId_3429_; lean_object* v___x_3430_; 
v_fvarId_3429_ = lean_ctor_get(v_expr_3407_, 0);
lean_inc(v_fvarId_3429_);
lean_dec_ref_known(v_expr_3407_, 1);
v___x_3430_ = lean_local_ctx_find(v_lctx_3406_, v_fvarId_3429_);
if (lean_obj_tag(v___x_3430_) == 1)
{
lean_object* v_val_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3443_; 
v_val_3431_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3443_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3443_ == 0)
{
v___x_3433_ = v___x_3430_;
v_isShared_3434_ = v_isSharedCheck_3443_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_val_3431_);
lean_dec(v___x_3430_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3443_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
uint8_t v___x_3435_; 
v___x_3435_ = l_Lean_LocalDecl_isAuxDecl(v_val_3431_);
if (v___x_3435_ == 0)
{
uint8_t v___x_3436_; 
lean_del_object(v___x_3433_);
v___x_3436_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3431_);
lean_dec(v_val_3431_);
if (v___x_3436_ == 0)
{
goto v___jp_3410_;
}
else
{
if (v___x_3435_ == 0)
{
lean_del_object(v___x_3403_);
goto v___jp_3417_;
}
else
{
goto v___jp_3410_;
}
}
}
else
{
lean_dec(v_val_3431_);
lean_del_object(v___x_3403_);
if (v_isBinder_3408_ == 0)
{
lean_del_object(v___x_3433_);
goto v___jp_3417_;
}
else
{
uint8_t v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3441_; 
v___x_3437_ = 3;
v___x_3438_ = lean_unsigned_to_nat(5u);
v___x_3439_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3439_, 0, v_stx_3409_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
lean_ctor_set_uint8(v___x_3439_, sizeof(void*)*2, v___x_3437_);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v___x_3439_);
v___x_3441_ = v___x_3433_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v___x_3439_);
v___x_3441_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
return v___x_3441_;
}
}
}
}
}
else
{
lean_dec(v___x_3430_);
lean_del_object(v___x_3403_);
goto v___jp_3417_;
}
}
else
{
lean_dec_ref(v_expr_3407_);
lean_dec_ref(v_lctx_3406_);
lean_del_object(v___x_3403_);
goto v___jp_3417_;
}
}
}
else
{
lean_object* v___x_3444_; 
lean_dec(v___x_3426_);
lean_dec(v_stx_3409_);
lean_dec_ref(v_expr_3407_);
lean_dec_ref(v_lctx_3406_);
lean_del_object(v___x_3403_);
v___x_3444_ = lean_box(0);
return v___x_3444_;
}
v___jp_3410_:
{
uint8_t v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3415_; 
v___x_3411_ = 1;
v___x_3412_ = lean_unsigned_to_nat(5u);
v___x_3413_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3413_, 0, v_stx_3409_);
lean_ctor_set(v___x_3413_, 1, v___x_3412_);
lean_ctor_set_uint8(v___x_3413_, sizeof(void*)*2, v___x_3411_);
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 0, v___x_3413_);
v___x_3415_ = v___x_3403_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v___x_3413_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
v___jp_3417_:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; uint8_t v___x_3420_; 
lean_inc(v_stx_3409_);
v___x_3418_ = l_Lean_Syntax_getKind(v_stx_3409_);
v___x_3419_ = l_Lean_Parser_Term_identProjKind;
v___x_3420_ = lean_name_eq(v___x_3418_, v___x_3419_);
lean_dec(v___x_3418_);
if (v___x_3420_ == 0)
{
lean_object* v___x_3421_; 
lean_dec(v_stx_3409_);
v___x_3421_ = lean_box(0);
return v___x_3421_;
}
else
{
uint8_t v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3422_ = 2;
v___x_3423_ = lean_unsigned_to_nat(5u);
v___x_3424_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3424_, 0, v_stx_3409_);
lean_ctor_set(v___x_3424_, 1, v___x_3423_);
lean_ctor_set_uint8(v___x_3424_, sizeof(void*)*2, v___x_3422_);
v___x_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
return v___x_3425_;
}
}
}
}
else
{
lean_object* v___x_3446_; 
lean_dec_ref(v_info_3399_);
v___x_3446_ = lean_box(0);
return v___x_3446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0___boxed(lean_object* v_x_3447_, lean_object* v_info_3448_, lean_object* v_x_3449_){
_start:
{
lean_object* v_res_3450_; 
v_res_3450_ = l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0(v_x_3447_, v_info_3448_, v_x_3449_);
lean_dec_ref(v_x_3449_);
lean_dec_ref(v_x_3447_);
return v_res_3450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens(lean_object* v_i_3452_){
_start:
{
lean_object* v___f_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___f_3453_ = ((lean_object*)(l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___closed__0));
v___x_3454_ = l_Lean_Elab_InfoTree_deepestNodes___redArg(v___f_3453_, v_i_3452_);
v___x_3455_ = lean_array_mk(v___x_3454_);
return v___x_3455_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_dbgShowTokens___lam__0(lean_object* v_x_3456_, lean_object* v_y_3457_){
_start:
{
lean_object* v_fst_3458_; lean_object* v_fst_3459_; uint8_t v___x_3460_; 
v_fst_3458_ = lean_ctor_get(v_x_3456_, 0);
v_fst_3459_ = lean_ctor_get(v_y_3457_, 0);
v___x_3460_ = lean_nat_dec_le(v_fst_3458_, v_fst_3459_);
return v___x_3460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens___lam__0___boxed(lean_object* v_x_3461_, lean_object* v_y_3462_){
_start:
{
uint8_t v_res_3463_; lean_object* v_r_3464_; 
v_res_3463_ = l_Lean_Server_FileWorker_dbgShowTokens___lam__0(v_x_3461_, v_y_3462_);
lean_dec_ref(v_y_3462_);
lean_dec_ref(v_x_3461_);
v_r_3464_ = lean_box(v_res_3463_);
return v_r_3464_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5(lean_object* v_x_3465_, lean_object* v_x_3466_){
_start:
{
if (lean_obj_tag(v_x_3466_) == 0)
{
lean_inc(v_x_3465_);
return v_x_3465_;
}
else
{
lean_object* v_key_3467_; lean_object* v_value_3468_; lean_object* v_tail_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; 
v_key_3467_ = lean_ctor_get(v_x_3466_, 0);
v_value_3468_ = lean_ctor_get(v_x_3466_, 1);
v_tail_3469_ = lean_ctor_get(v_x_3466_, 2);
v___x_3470_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5(v_x_3465_, v_tail_3469_);
lean_inc(v_value_3468_);
lean_inc(v_key_3467_);
v___x_3471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3471_, 0, v_key_3467_);
lean_ctor_set(v___x_3471_, 1, v_value_3468_);
v___x_3472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3472_, 0, v___x_3471_);
lean_ctor_set(v___x_3472_, 1, v___x_3470_);
return v___x_3472_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5___boxed(lean_object* v_x_3473_, lean_object* v_x_3474_){
_start:
{
lean_object* v_res_3475_; 
v_res_3475_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5(v_x_3473_, v_x_3474_);
lean_dec(v_x_3474_);
lean_dec(v_x_3473_);
return v_res_3475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6(lean_object* v_as_3476_, size_t v_i_3477_, size_t v_stop_3478_, lean_object* v_b_3479_){
_start:
{
uint8_t v___x_3480_; 
v___x_3480_ = lean_usize_dec_eq(v_i_3477_, v_stop_3478_);
if (v___x_3480_ == 0)
{
size_t v___x_3481_; size_t v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
v___x_3481_ = ((size_t)1ULL);
v___x_3482_ = lean_usize_sub(v_i_3477_, v___x_3481_);
v___x_3483_ = lean_array_uget_borrowed(v_as_3476_, v___x_3482_);
v___x_3484_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5(v_b_3479_, v___x_3483_);
lean_dec(v_b_3479_);
v_i_3477_ = v___x_3482_;
v_b_3479_ = v___x_3484_;
goto _start;
}
else
{
return v_b_3479_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6___boxed(lean_object* v_as_3486_, lean_object* v_i_3487_, lean_object* v_stop_3488_, lean_object* v_b_3489_){
_start:
{
size_t v_i_boxed_3490_; size_t v_stop_boxed_3491_; lean_object* v_res_3492_; 
v_i_boxed_3490_ = lean_unbox_usize(v_i_3487_);
lean_dec(v_i_3487_);
v_stop_boxed_3491_ = lean_unbox_usize(v_stop_3488_);
lean_dec(v_stop_3488_);
v_res_3492_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6(v_as_3486_, v_i_boxed_3490_, v_stop_boxed_3491_, v_b_3489_);
lean_dec_ref(v_as_3486_);
return v_res_3492_;
}
}
LEAN_EXPORT uint8_t l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0(lean_object* v_x_3493_, lean_object* v_y_3494_){
_start:
{
lean_object* v_fst_3495_; lean_object* v_fst_3496_; uint8_t v___x_3497_; 
v_fst_3495_ = lean_ctor_get(v_x_3493_, 0);
v_fst_3496_ = lean_ctor_get(v_y_3494_, 0);
v___x_3497_ = lean_nat_dec_le(v_fst_3495_, v_fst_3496_);
return v___x_3497_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0___boxed(lean_object* v_x_3498_, lean_object* v_y_3499_){
_start:
{
uint8_t v_res_3500_; lean_object* v_r_3501_; 
v_res_3500_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0(v_x_3498_, v_y_3499_);
lean_dec_ref(v_y_3499_);
lean_dec_ref(v_x_3498_);
v_r_3501_ = lean_box(v_res_3500_);
return v_r_3501_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1(lean_object* v_x_3505_, lean_object* v_x_3506_){
_start:
{
if (lean_obj_tag(v_x_3506_) == 0)
{
return v_x_3505_;
}
else
{
lean_object* v_head_3507_; lean_object* v_snd_3508_; lean_object* v_snd_3509_; lean_object* v_tail_3510_; lean_object* v_fst_3511_; lean_object* v_fst_3512_; lean_object* v_fst_3513_; lean_object* v_snd_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; uint8_t v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v_fst_3524_; lean_object* v_snd_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v_head_3507_ = lean_ctor_get(v_x_3506_, 0);
lean_inc(v_head_3507_);
v_snd_3508_ = lean_ctor_get(v_head_3507_, 1);
lean_inc(v_snd_3508_);
v_snd_3509_ = lean_ctor_get(v_snd_3508_, 1);
lean_inc(v_snd_3509_);
v_tail_3510_ = lean_ctor_get(v_x_3506_, 1);
lean_inc(v_tail_3510_);
lean_dec_ref_known(v_x_3506_, 2);
v_fst_3511_ = lean_ctor_get(v_head_3507_, 0);
lean_inc(v_fst_3511_);
lean_dec(v_head_3507_);
v_fst_3512_ = lean_ctor_get(v_snd_3508_, 0);
lean_inc(v_fst_3512_);
lean_dec(v_snd_3508_);
v_fst_3513_ = lean_ctor_get(v_snd_3509_, 0);
lean_inc(v_fst_3513_);
v_snd_3514_ = lean_ctor_get(v_snd_3509_, 1);
lean_inc(v_snd_3514_);
lean_dec(v_snd_3509_);
v___x_3515_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0));
v___x_3516_ = l_Nat_reprFast(v_fst_3511_);
v___x_3517_ = lean_string_append(v___x_3515_, v___x_3516_);
lean_dec_ref(v___x_3516_);
v___x_3518_ = lean_box(0);
v___x_3519_ = 0;
v___x_3520_ = l_Lean_Syntax_formatStx(v_fst_3513_, v___x_3518_, v___x_3519_);
v___x_3521_ = l_Std_Format_defWidth;
v___x_3522_ = lean_unsigned_to_nat(0u);
v___x_3523_ = l_Std_Format_pretty(v___x_3520_, v___x_3521_, v___x_3522_, v___x_3522_);
v_fst_3524_ = lean_ctor_get(v_snd_3514_, 0);
lean_inc(v_fst_3524_);
v_snd_3525_ = lean_ctor_get(v_snd_3514_, 1);
lean_inc(v_snd_3525_);
lean_dec(v_snd_3514_);
v___x_3526_ = l_Nat_reprFast(v_fst_3512_);
v___x_3527_ = lean_string_append(v___x_3515_, v___x_3526_);
lean_dec_ref(v___x_3526_);
v___x_3528_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1));
v___x_3529_ = lean_string_append(v_x_3505_, v___x_3528_);
v___x_3530_ = lean_string_append(v___x_3517_, v___x_3528_);
v___x_3531_ = lean_string_append(v___x_3527_, v___x_3528_);
v___x_3532_ = lean_string_append(v___x_3515_, v___x_3523_);
lean_dec_ref(v___x_3523_);
v___x_3533_ = lean_string_append(v___x_3532_, v___x_3528_);
v___x_3534_ = lean_unsigned_to_nat(80u);
v___x_3535_ = l_Lean_Json_pretty(v_fst_3524_, v___x_3534_);
v___x_3536_ = lean_string_append(v___x_3515_, v___x_3535_);
lean_dec_ref(v___x_3535_);
v___x_3537_ = lean_string_append(v___x_3536_, v___x_3528_);
v___x_3538_ = l_Nat_reprFast(v_snd_3525_);
v___x_3539_ = lean_string_append(v___x_3537_, v___x_3538_);
lean_dec_ref(v___x_3538_);
v___x_3540_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2));
v___x_3541_ = lean_string_append(v___x_3539_, v___x_3540_);
v___x_3542_ = lean_string_append(v___x_3533_, v___x_3541_);
lean_dec_ref(v___x_3541_);
v___x_3543_ = lean_string_append(v___x_3542_, v___x_3540_);
v___x_3544_ = lean_string_append(v___x_3531_, v___x_3543_);
lean_dec_ref(v___x_3543_);
v___x_3545_ = lean_string_append(v___x_3544_, v___x_3540_);
v___x_3546_ = lean_string_append(v___x_3530_, v___x_3545_);
lean_dec_ref(v___x_3545_);
v___x_3547_ = lean_string_append(v___x_3546_, v___x_3540_);
v___x_3548_ = lean_string_append(v___x_3529_, v___x_3547_);
lean_dec_ref(v___x_3547_);
v_x_3505_ = v___x_3548_;
v_x_3506_ = v_tail_3510_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1(lean_object* v_x_3553_){
_start:
{
if (lean_obj_tag(v_x_3553_) == 0)
{
lean_object* v___x_3554_; 
v___x_3554_ = ((lean_object*)(l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__0));
return v___x_3554_;
}
else
{
lean_object* v_tail_3555_; 
v_tail_3555_ = lean_ctor_get(v_x_3553_, 1);
if (lean_obj_tag(v_tail_3555_) == 0)
{
lean_object* v_head_3556_; lean_object* v_snd_3557_; lean_object* v_snd_3558_; lean_object* v_fst_3559_; lean_object* v_fst_3560_; lean_object* v_fst_3561_; lean_object* v_snd_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; uint8_t v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v_fst_3572_; lean_object* v_snd_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v_head_3556_ = lean_ctor_get(v_x_3553_, 0);
lean_inc(v_head_3556_);
lean_dec_ref_known(v_x_3553_, 2);
v_snd_3557_ = lean_ctor_get(v_head_3556_, 1);
lean_inc(v_snd_3557_);
v_snd_3558_ = lean_ctor_get(v_snd_3557_, 1);
lean_inc(v_snd_3558_);
v_fst_3559_ = lean_ctor_get(v_head_3556_, 0);
lean_inc(v_fst_3559_);
lean_dec(v_head_3556_);
v_fst_3560_ = lean_ctor_get(v_snd_3557_, 0);
lean_inc(v_fst_3560_);
lean_dec(v_snd_3557_);
v_fst_3561_ = lean_ctor_get(v_snd_3558_, 0);
lean_inc(v_fst_3561_);
v_snd_3562_ = lean_ctor_get(v_snd_3558_, 1);
lean_inc(v_snd_3562_);
lean_dec(v_snd_3558_);
v___x_3563_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0));
v___x_3564_ = l_Nat_reprFast(v_fst_3559_);
v___x_3565_ = lean_string_append(v___x_3563_, v___x_3564_);
lean_dec_ref(v___x_3564_);
v___x_3566_ = lean_box(0);
v___x_3567_ = 0;
v___x_3568_ = l_Lean_Syntax_formatStx(v_fst_3561_, v___x_3566_, v___x_3567_);
v___x_3569_ = l_Std_Format_defWidth;
v___x_3570_ = lean_unsigned_to_nat(0u);
v___x_3571_ = l_Std_Format_pretty(v___x_3568_, v___x_3569_, v___x_3570_, v___x_3570_);
v_fst_3572_ = lean_ctor_get(v_snd_3562_, 0);
lean_inc(v_fst_3572_);
v_snd_3573_ = lean_ctor_get(v_snd_3562_, 1);
lean_inc(v_snd_3573_);
lean_dec(v_snd_3562_);
v___x_3574_ = l_Nat_reprFast(v_fst_3560_);
v___x_3575_ = lean_string_append(v___x_3563_, v___x_3574_);
lean_dec_ref(v___x_3574_);
v___x_3576_ = ((lean_object*)(l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__1));
v___x_3577_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1));
v___x_3578_ = lean_string_append(v___x_3565_, v___x_3577_);
v___x_3579_ = lean_string_append(v___x_3575_, v___x_3577_);
v___x_3580_ = lean_string_append(v___x_3563_, v___x_3571_);
lean_dec_ref(v___x_3571_);
v___x_3581_ = lean_string_append(v___x_3580_, v___x_3577_);
v___x_3582_ = lean_unsigned_to_nat(80u);
v___x_3583_ = l_Lean_Json_pretty(v_fst_3572_, v___x_3582_);
v___x_3584_ = lean_string_append(v___x_3563_, v___x_3583_);
lean_dec_ref(v___x_3583_);
v___x_3585_ = lean_string_append(v___x_3584_, v___x_3577_);
v___x_3586_ = l_Nat_reprFast(v_snd_3573_);
v___x_3587_ = lean_string_append(v___x_3585_, v___x_3586_);
lean_dec_ref(v___x_3586_);
v___x_3588_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2));
v___x_3589_ = lean_string_append(v___x_3587_, v___x_3588_);
v___x_3590_ = lean_string_append(v___x_3581_, v___x_3589_);
lean_dec_ref(v___x_3589_);
v___x_3591_ = lean_string_append(v___x_3590_, v___x_3588_);
v___x_3592_ = lean_string_append(v___x_3579_, v___x_3591_);
lean_dec_ref(v___x_3591_);
v___x_3593_ = lean_string_append(v___x_3592_, v___x_3588_);
v___x_3594_ = lean_string_append(v___x_3578_, v___x_3593_);
lean_dec_ref(v___x_3593_);
v___x_3595_ = lean_string_append(v___x_3594_, v___x_3588_);
v___x_3596_ = lean_string_append(v___x_3576_, v___x_3595_);
lean_dec_ref(v___x_3595_);
v___x_3597_ = ((lean_object*)(l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__2));
v___x_3598_ = lean_string_append(v___x_3596_, v___x_3597_);
return v___x_3598_;
}
else
{
lean_object* v_head_3599_; lean_object* v_snd_3600_; lean_object* v_snd_3601_; lean_object* v_fst_3602_; lean_object* v_fst_3603_; lean_object* v_fst_3604_; lean_object* v_snd_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; uint8_t v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v_fst_3615_; lean_object* v_snd_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; uint32_t v___x_3641_; lean_object* v___x_3642_; 
lean_inc(v_tail_3555_);
v_head_3599_ = lean_ctor_get(v_x_3553_, 0);
lean_inc(v_head_3599_);
lean_dec_ref_known(v_x_3553_, 2);
v_snd_3600_ = lean_ctor_get(v_head_3599_, 1);
lean_inc(v_snd_3600_);
v_snd_3601_ = lean_ctor_get(v_snd_3600_, 1);
lean_inc(v_snd_3601_);
v_fst_3602_ = lean_ctor_get(v_head_3599_, 0);
lean_inc(v_fst_3602_);
lean_dec(v_head_3599_);
v_fst_3603_ = lean_ctor_get(v_snd_3600_, 0);
lean_inc(v_fst_3603_);
lean_dec(v_snd_3600_);
v_fst_3604_ = lean_ctor_get(v_snd_3601_, 0);
lean_inc(v_fst_3604_);
v_snd_3605_ = lean_ctor_get(v_snd_3601_, 1);
lean_inc(v_snd_3605_);
lean_dec(v_snd_3601_);
v___x_3606_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0));
v___x_3607_ = l_Nat_reprFast(v_fst_3602_);
v___x_3608_ = lean_string_append(v___x_3606_, v___x_3607_);
lean_dec_ref(v___x_3607_);
v___x_3609_ = lean_box(0);
v___x_3610_ = 0;
v___x_3611_ = l_Lean_Syntax_formatStx(v_fst_3604_, v___x_3609_, v___x_3610_);
v___x_3612_ = l_Std_Format_defWidth;
v___x_3613_ = lean_unsigned_to_nat(0u);
v___x_3614_ = l_Std_Format_pretty(v___x_3611_, v___x_3612_, v___x_3613_, v___x_3613_);
v_fst_3615_ = lean_ctor_get(v_snd_3605_, 0);
lean_inc(v_fst_3615_);
v_snd_3616_ = lean_ctor_get(v_snd_3605_, 1);
lean_inc(v_snd_3616_);
lean_dec(v_snd_3605_);
v___x_3617_ = l_Nat_reprFast(v_fst_3603_);
v___x_3618_ = lean_string_append(v___x_3606_, v___x_3617_);
lean_dec_ref(v___x_3617_);
v___x_3619_ = ((lean_object*)(l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__1));
v___x_3620_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1));
v___x_3621_ = lean_string_append(v___x_3608_, v___x_3620_);
v___x_3622_ = lean_string_append(v___x_3618_, v___x_3620_);
v___x_3623_ = lean_string_append(v___x_3606_, v___x_3614_);
lean_dec_ref(v___x_3614_);
v___x_3624_ = lean_string_append(v___x_3623_, v___x_3620_);
v___x_3625_ = lean_unsigned_to_nat(80u);
v___x_3626_ = l_Lean_Json_pretty(v_fst_3615_, v___x_3625_);
v___x_3627_ = lean_string_append(v___x_3606_, v___x_3626_);
lean_dec_ref(v___x_3626_);
v___x_3628_ = lean_string_append(v___x_3627_, v___x_3620_);
v___x_3629_ = l_Nat_reprFast(v_snd_3616_);
v___x_3630_ = lean_string_append(v___x_3628_, v___x_3629_);
lean_dec_ref(v___x_3629_);
v___x_3631_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2));
v___x_3632_ = lean_string_append(v___x_3630_, v___x_3631_);
v___x_3633_ = lean_string_append(v___x_3624_, v___x_3632_);
lean_dec_ref(v___x_3632_);
v___x_3634_ = lean_string_append(v___x_3633_, v___x_3631_);
v___x_3635_ = lean_string_append(v___x_3622_, v___x_3634_);
lean_dec_ref(v___x_3634_);
v___x_3636_ = lean_string_append(v___x_3635_, v___x_3631_);
v___x_3637_ = lean_string_append(v___x_3621_, v___x_3636_);
lean_dec_ref(v___x_3636_);
v___x_3638_ = lean_string_append(v___x_3637_, v___x_3631_);
v___x_3639_ = lean_string_append(v___x_3619_, v___x_3638_);
lean_dec_ref(v___x_3638_);
v___x_3640_ = l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1(v___x_3639_, v_tail_3555_);
v___x_3641_ = 93;
v___x_3642_ = lean_string_push(v___x_3640_, v___x_3641_);
return v___x_3642_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__0(lean_object* v_a_3643_, lean_object* v_a_3644_){
_start:
{
if (lean_obj_tag(v_a_3643_) == 0)
{
lean_object* v___x_3645_; 
v___x_3645_ = l_List_reverse___redArg(v_a_3644_);
return v___x_3645_;
}
else
{
lean_object* v_head_3646_; lean_object* v_snd_3647_; lean_object* v_snd_3648_; lean_object* v_tail_3649_; lean_object* v___x_3651_; uint8_t v_isShared_3652_; uint8_t v_isSharedCheck_3681_; 
v_head_3646_ = lean_ctor_get(v_a_3643_, 0);
lean_inc(v_head_3646_);
v_snd_3647_ = lean_ctor_get(v_head_3646_, 1);
lean_inc(v_snd_3647_);
v_snd_3648_ = lean_ctor_get(v_snd_3647_, 1);
lean_inc(v_snd_3648_);
v_tail_3649_ = lean_ctor_get(v_a_3643_, 1);
v_isSharedCheck_3681_ = !lean_is_exclusive(v_a_3643_);
if (v_isSharedCheck_3681_ == 0)
{
lean_object* v_unused_3682_; 
v_unused_3682_ = lean_ctor_get(v_a_3643_, 0);
lean_dec(v_unused_3682_);
v___x_3651_ = v_a_3643_;
v_isShared_3652_ = v_isSharedCheck_3681_;
goto v_resetjp_3650_;
}
else
{
lean_inc(v_tail_3649_);
lean_dec(v_a_3643_);
v___x_3651_ = lean_box(0);
v_isShared_3652_ = v_isSharedCheck_3681_;
goto v_resetjp_3650_;
}
v_resetjp_3650_:
{
lean_object* v_fst_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3679_; 
v_fst_3653_ = lean_ctor_get(v_head_3646_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v_head_3646_);
if (v_isSharedCheck_3679_ == 0)
{
lean_object* v_unused_3680_; 
v_unused_3680_ = lean_ctor_get(v_head_3646_, 1);
lean_dec(v_unused_3680_);
v___x_3655_ = v_head_3646_;
v_isShared_3656_ = v_isSharedCheck_3679_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_fst_3653_);
lean_dec(v_head_3646_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3679_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v_fst_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3677_; 
v_fst_3657_ = lean_ctor_get(v_snd_3647_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v_snd_3647_);
if (v_isSharedCheck_3677_ == 0)
{
lean_object* v_unused_3678_; 
v_unused_3678_ = lean_ctor_get(v_snd_3647_, 1);
lean_dec(v_unused_3678_);
v___x_3659_ = v_snd_3647_;
v_isShared_3660_ = v_isSharedCheck_3677_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_fst_3657_);
lean_dec(v_snd_3647_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3677_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v_stx_3661_; uint8_t v_type_3662_; lean_object* v_priority_3663_; lean_object* v___x_3664_; lean_object* v___x_3666_; 
v_stx_3661_ = lean_ctor_get(v_snd_3648_, 0);
lean_inc(v_stx_3661_);
v_type_3662_ = lean_ctor_get_uint8(v_snd_3648_, sizeof(void*)*2);
v_priority_3663_ = lean_ctor_get(v_snd_3648_, 1);
lean_inc(v_priority_3663_);
lean_dec(v_snd_3648_);
v___x_3664_ = l_Lean_Lsp_instToJsonSemanticTokenType_toJson(v_type_3662_);
if (v_isShared_3660_ == 0)
{
lean_ctor_set(v___x_3659_, 1, v_priority_3663_);
lean_ctor_set(v___x_3659_, 0, v___x_3664_);
v___x_3666_ = v___x_3659_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v___x_3664_);
lean_ctor_set(v_reuseFailAlloc_3676_, 1, v_priority_3663_);
v___x_3666_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
lean_object* v___x_3668_; 
if (v_isShared_3656_ == 0)
{
lean_ctor_set(v___x_3655_, 1, v___x_3666_);
lean_ctor_set(v___x_3655_, 0, v_stx_3661_);
v___x_3668_ = v___x_3655_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v_stx_3661_);
lean_ctor_set(v_reuseFailAlloc_3675_, 1, v___x_3666_);
v___x_3668_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3672_; 
v___x_3669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3669_, 0, v_fst_3657_);
lean_ctor_set(v___x_3669_, 1, v___x_3668_);
v___x_3670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3670_, 0, v_fst_3653_);
lean_ctor_set(v___x_3670_, 1, v___x_3669_);
if (v_isShared_3652_ == 0)
{
lean_ctor_set(v___x_3651_, 1, v_a_3644_);
lean_ctor_set(v___x_3651_, 0, v___x_3670_);
v___x_3672_ = v___x_3651_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v___x_3670_);
lean_ctor_set(v_reuseFailAlloc_3674_, 1, v_a_3644_);
v___x_3672_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
v_a_3643_ = v_tail_3649_;
v_a_3644_ = v___x_3672_;
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
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg(lean_object* v_as_x27_3686_, lean_object* v_b_3687_){
_start:
{
if (lean_obj_tag(v_as_x27_3686_) == 0)
{
return v_b_3687_;
}
else
{
lean_object* v_head_3688_; lean_object* v_tail_3689_; lean_object* v_fst_3690_; lean_object* v_snd_3691_; lean_object* v___f_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
v_head_3688_ = lean_ctor_get(v_as_x27_3686_, 0);
v_tail_3689_ = lean_ctor_get(v_as_x27_3686_, 1);
v_fst_3690_ = lean_ctor_get(v_head_3688_, 0);
v_snd_3691_ = lean_ctor_get(v_head_3688_, 1);
v___f_3692_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__0));
lean_inc(v_snd_3691_);
v___x_3693_ = lean_array_to_list(v_snd_3691_);
v___x_3694_ = l_List_mergeSort___redArg(v___x_3693_, v___f_3692_);
lean_inc(v_fst_3690_);
v___x_3695_ = l_Nat_reprFast(v_fst_3690_);
v___x_3696_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__1));
v___x_3697_ = lean_string_append(v___x_3695_, v___x_3696_);
v___x_3698_ = lean_box(0);
v___x_3699_ = l_List_mapTR_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__0(v___x_3694_, v___x_3698_);
v___x_3700_ = l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1(v___x_3699_);
v___x_3701_ = lean_string_append(v___x_3697_, v___x_3700_);
lean_dec_ref(v___x_3700_);
v___x_3702_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__2));
v___x_3703_ = lean_string_append(v___x_3701_, v___x_3702_);
v___x_3704_ = lean_string_append(v_b_3687_, v___x_3703_);
lean_dec_ref(v___x_3703_);
v_as_x27_3686_ = v_tail_3689_;
v_b_3687_ = v___x_3704_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___boxed(lean_object* v_as_x27_3706_, lean_object* v_b_3707_){
_start:
{
lean_object* v_res_3708_; 
v_res_3708_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg(v_as_x27_3706_, v_b_3707_);
lean_dec(v_as_x27_3706_);
return v_res_3708_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(lean_object* v_a_3709_, lean_object* v_x_3710_){
_start:
{
if (lean_obj_tag(v_x_3710_) == 0)
{
uint8_t v___x_3711_; 
v___x_3711_ = 0;
return v___x_3711_;
}
else
{
lean_object* v_key_3712_; lean_object* v_tail_3713_; uint8_t v___x_3714_; 
v_key_3712_ = lean_ctor_get(v_x_3710_, 0);
v_tail_3713_ = lean_ctor_get(v_x_3710_, 2);
v___x_3714_ = lean_nat_dec_eq(v_key_3712_, v_a_3709_);
if (v___x_3714_ == 0)
{
v_x_3710_ = v_tail_3713_;
goto _start;
}
else
{
return v___x_3714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg___boxed(lean_object* v_a_3716_, lean_object* v_x_3717_){
_start:
{
uint8_t v_res_3718_; lean_object* v_r_3719_; 
v_res_3718_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(v_a_3716_, v_x_3717_);
lean_dec(v_x_3717_);
lean_dec(v_a_3716_);
v_r_3719_ = lean_box(v_res_3718_);
return v_r_3719_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10___redArg(lean_object* v_x_3720_, lean_object* v_x_3721_){
_start:
{
if (lean_obj_tag(v_x_3721_) == 0)
{
return v_x_3720_;
}
else
{
lean_object* v_key_3722_; lean_object* v_value_3723_; lean_object* v_tail_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3747_; 
v_key_3722_ = lean_ctor_get(v_x_3721_, 0);
v_value_3723_ = lean_ctor_get(v_x_3721_, 1);
v_tail_3724_ = lean_ctor_get(v_x_3721_, 2);
v_isSharedCheck_3747_ = !lean_is_exclusive(v_x_3721_);
if (v_isSharedCheck_3747_ == 0)
{
v___x_3726_ = v_x_3721_;
v_isShared_3727_ = v_isSharedCheck_3747_;
goto v_resetjp_3725_;
}
else
{
lean_inc(v_tail_3724_);
lean_inc(v_value_3723_);
lean_inc(v_key_3722_);
lean_dec(v_x_3721_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3747_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v___x_3728_; uint64_t v___x_3729_; uint64_t v___x_3730_; uint64_t v___x_3731_; uint64_t v_fold_3732_; uint64_t v___x_3733_; uint64_t v___x_3734_; uint64_t v___x_3735_; size_t v___x_3736_; size_t v___x_3737_; size_t v___x_3738_; size_t v___x_3739_; size_t v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3743_; 
v___x_3728_ = lean_array_get_size(v_x_3720_);
v___x_3729_ = lean_uint64_of_nat(v_key_3722_);
v___x_3730_ = 32ULL;
v___x_3731_ = lean_uint64_shift_right(v___x_3729_, v___x_3730_);
v_fold_3732_ = lean_uint64_xor(v___x_3729_, v___x_3731_);
v___x_3733_ = 16ULL;
v___x_3734_ = lean_uint64_shift_right(v_fold_3732_, v___x_3733_);
v___x_3735_ = lean_uint64_xor(v_fold_3732_, v___x_3734_);
v___x_3736_ = lean_uint64_to_usize(v___x_3735_);
v___x_3737_ = lean_usize_of_nat(v___x_3728_);
v___x_3738_ = ((size_t)1ULL);
v___x_3739_ = lean_usize_sub(v___x_3737_, v___x_3738_);
v___x_3740_ = lean_usize_land(v___x_3736_, v___x_3739_);
v___x_3741_ = lean_array_uget_borrowed(v_x_3720_, v___x_3740_);
lean_inc(v___x_3741_);
if (v_isShared_3727_ == 0)
{
lean_ctor_set(v___x_3726_, 2, v___x_3741_);
v___x_3743_ = v___x_3726_;
goto v_reusejp_3742_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v_key_3722_);
lean_ctor_set(v_reuseFailAlloc_3746_, 1, v_value_3723_);
lean_ctor_set(v_reuseFailAlloc_3746_, 2, v___x_3741_);
v___x_3743_ = v_reuseFailAlloc_3746_;
goto v_reusejp_3742_;
}
v_reusejp_3742_:
{
lean_object* v___x_3744_; 
v___x_3744_ = lean_array_uset(v_x_3720_, v___x_3740_, v___x_3743_);
v_x_3720_ = v___x_3744_;
v_x_3721_ = v_tail_3724_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5___redArg(lean_object* v_i_3748_, lean_object* v_source_3749_, lean_object* v_target_3750_){
_start:
{
lean_object* v___x_3751_; uint8_t v___x_3752_; 
v___x_3751_ = lean_array_get_size(v_source_3749_);
v___x_3752_ = lean_nat_dec_lt(v_i_3748_, v___x_3751_);
if (v___x_3752_ == 0)
{
lean_dec_ref(v_source_3749_);
lean_dec(v_i_3748_);
return v_target_3750_;
}
else
{
lean_object* v_es_3753_; lean_object* v___x_3754_; lean_object* v_source_3755_; lean_object* v_target_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; 
v_es_3753_ = lean_array_fget(v_source_3749_, v_i_3748_);
v___x_3754_ = lean_box(0);
v_source_3755_ = lean_array_fset(v_source_3749_, v_i_3748_, v___x_3754_);
v_target_3756_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10___redArg(v_target_3750_, v_es_3753_);
v___x_3757_ = lean_unsigned_to_nat(1u);
v___x_3758_ = lean_nat_add(v_i_3748_, v___x_3757_);
lean_dec(v_i_3748_);
v_i_3748_ = v___x_3758_;
v_source_3749_ = v_source_3755_;
v_target_3750_ = v_target_3756_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4___redArg(lean_object* v_data_3760_){
_start:
{
lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v_nbuckets_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; 
v___x_3761_ = lean_array_get_size(v_data_3760_);
v___x_3762_ = lean_unsigned_to_nat(2u);
v_nbuckets_3763_ = lean_nat_mul(v___x_3761_, v___x_3762_);
v___x_3764_ = lean_unsigned_to_nat(0u);
v___x_3765_ = lean_box(0);
v___x_3766_ = lean_mk_array(v_nbuckets_3763_, v___x_3765_);
v___x_3767_ = lean_array_propagate_mark(v_data_3760_, v___x_3766_);
v___x_3768_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5___redArg(v___x_3764_, v_data_3760_, v___x_3767_);
return v___x_3768_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0(lean_object* v_character_3771_, lean_object* v_a_3772_, lean_object* v_character_3773_, lean_object* v_x_x3f_3774_){
_start:
{
lean_object* v___y_3776_; 
if (lean_obj_tag(v_x_x3f_3774_) == 0)
{
lean_object* v___x_3781_; 
v___x_3781_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0___closed__0));
v___y_3776_ = v___x_3781_;
goto v___jp_3775_;
}
else
{
lean_object* v_val_3782_; 
v_val_3782_ = lean_ctor_get(v_x_x3f_3774_, 0);
lean_inc(v_val_3782_);
lean_dec_ref_known(v_x_x3f_3774_, 1);
v___y_3776_ = v_val_3782_;
goto v___jp_3775_;
}
v___jp_3775_:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; 
v___x_3777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3777_, 0, v_character_3771_);
lean_ctor_set(v___x_3777_, 1, v_a_3772_);
v___x_3778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3778_, 0, v_character_3773_);
lean_ctor_set(v___x_3778_, 1, v___x_3777_);
v___x_3779_ = lean_array_push(v___y_3776_, v___x_3778_);
v___x_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3779_);
return v___x_3780_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5(lean_object* v_character_3783_, lean_object* v_a_3784_, lean_object* v_character_3785_, lean_object* v_a_3786_, lean_object* v_x_3787_){
_start:
{
if (lean_obj_tag(v_x_3787_) == 0)
{
lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v_val_3790_; lean_object* v___x_3791_; 
v___x_3788_ = lean_box(0);
v___x_3789_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0(v_character_3783_, v_a_3784_, v_character_3785_, v___x_3788_);
v_val_3790_ = lean_ctor_get(v___x_3789_, 0);
lean_inc(v_val_3790_);
lean_dec(v___x_3789_);
v___x_3791_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3791_, 0, v_a_3786_);
lean_ctor_set(v___x_3791_, 1, v_val_3790_);
lean_ctor_set(v___x_3791_, 2, v_x_3787_);
return v___x_3791_;
}
else
{
lean_object* v_key_3792_; lean_object* v_value_3793_; lean_object* v_tail_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3809_; 
v_key_3792_ = lean_ctor_get(v_x_3787_, 0);
v_value_3793_ = lean_ctor_get(v_x_3787_, 1);
v_tail_3794_ = lean_ctor_get(v_x_3787_, 2);
v_isSharedCheck_3809_ = !lean_is_exclusive(v_x_3787_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3796_ = v_x_3787_;
v_isShared_3797_ = v_isSharedCheck_3809_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_tail_3794_);
lean_inc(v_value_3793_);
lean_inc(v_key_3792_);
lean_dec(v_x_3787_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3809_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
uint8_t v___x_3798_; 
v___x_3798_ = lean_nat_dec_eq(v_key_3792_, v_a_3786_);
if (v___x_3798_ == 0)
{
lean_object* v_tail_3799_; lean_object* v___x_3801_; 
v_tail_3799_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5(v_character_3783_, v_a_3784_, v_character_3785_, v_a_3786_, v_tail_3794_);
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 2, v_tail_3799_);
v___x_3801_ = v___x_3796_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_key_3792_);
lean_ctor_set(v_reuseFailAlloc_3802_, 1, v_value_3793_);
lean_ctor_set(v_reuseFailAlloc_3802_, 2, v_tail_3799_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
else
{
lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v_val_3805_; lean_object* v___x_3807_; 
lean_dec(v_key_3792_);
v___x_3803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3803_, 0, v_value_3793_);
v___x_3804_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0(v_character_3783_, v_a_3784_, v_character_3785_, v___x_3803_);
v_val_3805_ = lean_ctor_get(v___x_3804_, 0);
lean_inc(v_val_3805_);
lean_dec(v___x_3804_);
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 1, v_val_3805_);
lean_ctor_set(v___x_3796_, 0, v_a_3786_);
v___x_3807_ = v___x_3796_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3786_);
lean_ctor_set(v_reuseFailAlloc_3808_, 1, v_val_3805_);
lean_ctor_set(v_reuseFailAlloc_3808_, 2, v_tail_3794_);
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
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2(lean_object* v_character_3810_, lean_object* v_a_3811_, lean_object* v_character_3812_, lean_object* v_m_3813_, lean_object* v_a_3814_){
_start:
{
lean_object* v_size_3815_; lean_object* v_buckets_3816_; lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3868_; 
v_size_3815_ = lean_ctor_get(v_m_3813_, 0);
v_buckets_3816_ = lean_ctor_get(v_m_3813_, 1);
v_isSharedCheck_3868_ = !lean_is_exclusive(v_m_3813_);
if (v_isSharedCheck_3868_ == 0)
{
v___x_3818_ = v_m_3813_;
v_isShared_3819_ = v_isSharedCheck_3868_;
goto v_resetjp_3817_;
}
else
{
lean_inc(v_buckets_3816_);
lean_inc(v_size_3815_);
lean_dec(v_m_3813_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3868_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v___x_3820_; uint64_t v___x_3821_; uint64_t v___x_3822_; uint64_t v___x_3823_; uint64_t v_fold_3824_; uint64_t v___x_3825_; uint64_t v___x_3826_; uint64_t v___x_3827_; size_t v___x_3828_; size_t v___x_3829_; size_t v___x_3830_; size_t v___x_3831_; size_t v___x_3832_; lean_object* v_bkt_3833_; uint8_t v___x_3834_; 
v___x_3820_ = lean_array_get_size(v_buckets_3816_);
v___x_3821_ = lean_uint64_of_nat(v_a_3814_);
v___x_3822_ = 32ULL;
v___x_3823_ = lean_uint64_shift_right(v___x_3821_, v___x_3822_);
v_fold_3824_ = lean_uint64_xor(v___x_3821_, v___x_3823_);
v___x_3825_ = 16ULL;
v___x_3826_ = lean_uint64_shift_right(v_fold_3824_, v___x_3825_);
v___x_3827_ = lean_uint64_xor(v_fold_3824_, v___x_3826_);
v___x_3828_ = lean_uint64_to_usize(v___x_3827_);
v___x_3829_ = lean_usize_of_nat(v___x_3820_);
v___x_3830_ = ((size_t)1ULL);
v___x_3831_ = lean_usize_sub(v___x_3829_, v___x_3830_);
v___x_3832_ = lean_usize_land(v___x_3828_, v___x_3831_);
v_bkt_3833_ = lean_array_uget_borrowed(v_buckets_3816_, v___x_3832_);
v___x_3834_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(v_a_3814_, v_bkt_3833_);
if (v___x_3834_ == 0)
{
lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v_size_x27_3840_; lean_object* v___x_3841_; lean_object* v_buckets_x27_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; uint8_t v___x_3848_; 
v___x_3835_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0___closed__0));
v___x_3836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3836_, 0, v_character_3810_);
lean_ctor_set(v___x_3836_, 1, v_a_3811_);
v___x_3837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3837_, 0, v_character_3812_);
lean_ctor_set(v___x_3837_, 1, v___x_3836_);
v___x_3838_ = lean_array_push(v___x_3835_, v___x_3837_);
v___x_3839_ = lean_unsigned_to_nat(1u);
v_size_x27_3840_ = lean_nat_add(v_size_3815_, v___x_3839_);
lean_dec(v_size_3815_);
lean_inc(v_bkt_3833_);
v___x_3841_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3841_, 0, v_a_3814_);
lean_ctor_set(v___x_3841_, 1, v___x_3838_);
lean_ctor_set(v___x_3841_, 2, v_bkt_3833_);
v_buckets_x27_3842_ = lean_array_uset(v_buckets_3816_, v___x_3832_, v___x_3841_);
v___x_3843_ = lean_unsigned_to_nat(4u);
v___x_3844_ = lean_nat_mul(v_size_x27_3840_, v___x_3843_);
v___x_3845_ = lean_unsigned_to_nat(3u);
v___x_3846_ = lean_nat_div(v___x_3844_, v___x_3845_);
lean_dec(v___x_3844_);
v___x_3847_ = lean_array_get_size(v_buckets_x27_3842_);
v___x_3848_ = lean_nat_dec_le(v___x_3846_, v___x_3847_);
lean_dec(v___x_3846_);
if (v___x_3848_ == 0)
{
lean_object* v_val_3849_; lean_object* v___x_3851_; 
v_val_3849_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4___redArg(v_buckets_x27_3842_);
if (v_isShared_3819_ == 0)
{
lean_ctor_set(v___x_3818_, 1, v_val_3849_);
lean_ctor_set(v___x_3818_, 0, v_size_x27_3840_);
v___x_3851_ = v___x_3818_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3852_; 
v_reuseFailAlloc_3852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3852_, 0, v_size_x27_3840_);
lean_ctor_set(v_reuseFailAlloc_3852_, 1, v_val_3849_);
v___x_3851_ = v_reuseFailAlloc_3852_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
return v___x_3851_;
}
}
else
{
lean_object* v___x_3854_; 
if (v_isShared_3819_ == 0)
{
lean_ctor_set(v___x_3818_, 1, v_buckets_x27_3842_);
lean_ctor_set(v___x_3818_, 0, v_size_x27_3840_);
v___x_3854_ = v___x_3818_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v_size_x27_3840_);
lean_ctor_set(v_reuseFailAlloc_3855_, 1, v_buckets_x27_3842_);
v___x_3854_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
return v___x_3854_;
}
}
}
else
{
lean_object* v___x_3856_; lean_object* v_buckets_x27_3857_; lean_object* v_bkt_x27_3858_; lean_object* v___y_3860_; uint8_t v___x_3865_; 
lean_inc(v_bkt_3833_);
v___x_3856_ = lean_box(0);
v_buckets_x27_3857_ = lean_array_uset(v_buckets_3816_, v___x_3832_, v___x_3856_);
lean_inc(v_a_3814_);
v_bkt_x27_3858_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5(v_character_3810_, v_a_3811_, v_character_3812_, v_a_3814_, v_bkt_3833_);
v___x_3865_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(v_a_3814_, v_bkt_x27_3858_);
lean_dec(v_a_3814_);
if (v___x_3865_ == 0)
{
lean_object* v___x_3866_; lean_object* v___x_3867_; 
v___x_3866_ = lean_unsigned_to_nat(1u);
v___x_3867_ = lean_nat_sub(v_size_3815_, v___x_3866_);
lean_dec(v_size_3815_);
v___y_3860_ = v___x_3867_;
goto v___jp_3859_;
}
else
{
v___y_3860_ = v_size_3815_;
goto v___jp_3859_;
}
v___jp_3859_:
{
lean_object* v___x_3861_; lean_object* v___x_3863_; 
v___x_3861_ = lean_array_uset(v_buckets_x27_3857_, v___x_3832_, v_bkt_x27_3858_);
if (v_isShared_3819_ == 0)
{
lean_ctor_set(v___x_3818_, 1, v___x_3861_);
lean_ctor_set(v___x_3818_, 0, v___y_3860_);
v___x_3863_ = v___x_3818_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v___y_3860_);
lean_ctor_set(v_reuseFailAlloc_3864_, 1, v___x_3861_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
return v___x_3863_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3(lean_object* v_text_3869_, lean_object* v_as_3870_, size_t v_sz_3871_, size_t v_i_3872_, lean_object* v_b_3873_){
_start:
{
lean_object* v_a_3875_; uint8_t v___x_3879_; 
v___x_3879_ = lean_usize_dec_lt(v_i_3872_, v_sz_3871_);
if (v___x_3879_ == 0)
{
lean_dec_ref(v_text_3869_);
return v_b_3873_;
}
else
{
lean_object* v_a_3880_; lean_object* v_stx_3881_; uint8_t v___x_3882_; lean_object* v___x_3883_; 
v_a_3880_ = lean_array_uget_borrowed(v_as_3870_, v_i_3872_);
v_stx_3881_ = lean_ctor_get(v_a_3880_, 0);
v___x_3882_ = 0;
lean_inc_ref(v_text_3869_);
v___x_3883_ = l_Lean_FileMap_lspRangeOfStx_x3f(v_text_3869_, v_stx_3881_, v___x_3882_);
if (lean_obj_tag(v___x_3883_) == 1)
{
lean_object* v_val_3884_; lean_object* v_start_3885_; lean_object* v_end_3886_; lean_object* v_line_3887_; lean_object* v_character_3888_; lean_object* v_character_3889_; lean_object* v___x_3890_; 
v_val_3884_ = lean_ctor_get(v___x_3883_, 0);
lean_inc(v_val_3884_);
lean_dec_ref_known(v___x_3883_, 1);
v_start_3885_ = lean_ctor_get(v_val_3884_, 0);
lean_inc_ref(v_start_3885_);
v_end_3886_ = lean_ctor_get(v_val_3884_, 1);
lean_inc_ref(v_end_3886_);
lean_dec(v_val_3884_);
v_line_3887_ = lean_ctor_get(v_start_3885_, 0);
lean_inc(v_line_3887_);
v_character_3888_ = lean_ctor_get(v_start_3885_, 1);
lean_inc(v_character_3888_);
lean_dec_ref(v_start_3885_);
v_character_3889_ = lean_ctor_get(v_end_3886_, 1);
lean_inc(v_character_3889_);
lean_dec_ref(v_end_3886_);
lean_inc(v_a_3880_);
v___x_3890_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2(v_character_3889_, v_a_3880_, v_character_3888_, v_b_3873_, v_line_3887_);
v_a_3875_ = v___x_3890_;
goto v___jp_3874_;
}
else
{
lean_dec(v___x_3883_);
v_a_3875_ = v_b_3873_;
goto v___jp_3874_;
}
}
v___jp_3874_:
{
size_t v___x_3876_; size_t v___x_3877_; 
v___x_3876_ = ((size_t)1ULL);
v___x_3877_ = lean_usize_add(v_i_3872_, v___x_3876_);
v_i_3872_ = v___x_3877_;
v_b_3873_ = v_a_3875_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3___boxed(lean_object* v_text_3891_, lean_object* v_as_3892_, lean_object* v_sz_3893_, lean_object* v_i_3894_, lean_object* v_b_3895_){
_start:
{
size_t v_sz_boxed_3896_; size_t v_i_boxed_3897_; lean_object* v_res_3898_; 
v_sz_boxed_3896_ = lean_unbox_usize(v_sz_3893_);
lean_dec(v_sz_3893_);
v_i_boxed_3897_ = lean_unbox_usize(v_i_3894_);
lean_dec(v_i_3894_);
v_res_3898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3(v_text_3891_, v_as_3892_, v_sz_boxed_3896_, v_i_boxed_3897_, v_b_3895_);
lean_dec_ref(v_as_3892_);
return v_res_3898_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_dbgShowTokens___closed__0(void){
_start:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; 
v___x_3899_ = lean_box(0);
v___x_3900_ = lean_unsigned_to_nat(16u);
v___x_3901_ = lean_mk_array(v___x_3900_, v___x_3899_);
return v___x_3901_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_dbgShowTokens___closed__1(void){
_start:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v_byLine_3904_; 
v___x_3902_ = lean_obj_once(&l_Lean_Server_FileWorker_dbgShowTokens___closed__0, &l_Lean_Server_FileWorker_dbgShowTokens___closed__0_once, _init_l_Lean_Server_FileWorker_dbgShowTokens___closed__0);
v___x_3903_ = lean_unsigned_to_nat(0u);
v_byLine_3904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_byLine_3904_, 0, v___x_3903_);
lean_ctor_set(v_byLine_3904_, 1, v___x_3902_);
return v_byLine_3904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens(lean_object* v_text_3907_, lean_object* v_toks_3908_){
_start:
{
lean_object* v___x_3909_; lean_object* v_byLine_3910_; size_t v_sz_3911_; size_t v___x_3912_; lean_object* v___x_3913_; lean_object* v_buckets_3914_; lean_object* v___f_3915_; lean_object* v___x_3916_; lean_object* v___y_3918_; lean_object* v___x_3921_; lean_object* v___x_3922_; uint8_t v___x_3923_; 
v___x_3909_ = lean_unsigned_to_nat(0u);
v_byLine_3910_ = lean_obj_once(&l_Lean_Server_FileWorker_dbgShowTokens___closed__1, &l_Lean_Server_FileWorker_dbgShowTokens___closed__1_once, _init_l_Lean_Server_FileWorker_dbgShowTokens___closed__1);
v_sz_3911_ = lean_array_size(v_toks_3908_);
v___x_3912_ = ((size_t)0ULL);
v___x_3913_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3(v_text_3907_, v_toks_3908_, v_sz_3911_, v___x_3912_, v_byLine_3910_);
v_buckets_3914_ = lean_ctor_get(v___x_3913_, 1);
lean_inc_ref(v_buckets_3914_);
lean_dec_ref(v___x_3913_);
v___f_3915_ = ((lean_object*)(l_Lean_Server_FileWorker_dbgShowTokens___closed__2));
v___x_3916_ = ((lean_object*)(l_Lean_Server_FileWorker_dbgShowTokens___closed__3));
v___x_3921_ = lean_box(0);
v___x_3922_ = lean_array_get_size(v_buckets_3914_);
v___x_3923_ = lean_nat_dec_lt(v___x_3909_, v___x_3922_);
if (v___x_3923_ == 0)
{
lean_dec_ref(v_buckets_3914_);
v___y_3918_ = v___x_3921_;
goto v___jp_3917_;
}
else
{
size_t v___x_3924_; lean_object* v___x_3925_; 
v___x_3924_ = lean_usize_of_nat(v___x_3922_);
v___x_3925_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6(v_buckets_3914_, v___x_3924_, v___x_3912_, v___x_3921_);
lean_dec_ref(v_buckets_3914_);
v___y_3918_ = v___x_3925_;
goto v___jp_3917_;
}
v___jp_3917_:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3919_ = l_List_mergeSort___redArg(v___y_3918_, v___f_3915_);
v___x_3920_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg(v___x_3919_, v___x_3916_);
lean_dec(v___x_3919_);
return v___x_3920_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens___boxed(lean_object* v_text_3926_, lean_object* v_toks_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l_Lean_Server_FileWorker_dbgShowTokens(v_text_3926_, v_toks_3927_);
lean_dec_ref(v_toks_3927_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4(lean_object* v_as_3929_, lean_object* v_as_x27_3930_, lean_object* v_b_3931_, lean_object* v_a_3932_){
_start:
{
lean_object* v___x_3933_; 
v___x_3933_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg(v_as_x27_3930_, v_b_3931_);
return v___x_3933_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___boxed(lean_object* v_as_3934_, lean_object* v_as_x27_3935_, lean_object* v_b_3936_, lean_object* v_a_3937_){
_start:
{
lean_object* v_res_3938_; 
v_res_3938_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4(v_as_3934_, v_as_x27_3935_, v_b_3936_, v_a_3937_);
lean_dec(v_as_x27_3935_);
lean_dec(v_as_3934_);
return v_res_3938_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3(lean_object* v_00_u03b2_3939_, lean_object* v_a_3940_, lean_object* v_x_3941_){
_start:
{
uint8_t v___x_3942_; 
v___x_3942_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(v_a_3940_, v_x_3941_);
return v___x_3942_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___boxed(lean_object* v_00_u03b2_3943_, lean_object* v_a_3944_, lean_object* v_x_3945_){
_start:
{
uint8_t v_res_3946_; lean_object* v_r_3947_; 
v_res_3946_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3(v_00_u03b2_3943_, v_a_3944_, v_x_3945_);
lean_dec(v_x_3945_);
lean_dec(v_a_3944_);
v_r_3947_ = lean_box(v_res_3946_);
return v_r_3947_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4(lean_object* v_00_u03b2_3948_, lean_object* v_data_3949_){
_start:
{
lean_object* v___x_3950_; 
v___x_3950_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4___redArg(v_data_3949_);
return v___x_3950_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_3951_, lean_object* v_i_3952_, lean_object* v_source_3953_, lean_object* v_target_3954_){
_start:
{
lean_object* v___x_3955_; 
v___x_3955_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5___redArg(v_i_3952_, v_source_3953_, v_target_3954_);
return v___x_3955_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10(lean_object* v_00_u03b2_3956_, lean_object* v_x_3957_, lean_object* v_x_3958_){
_start:
{
lean_object* v___x_3959_; 
v___x_3959_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10___redArg(v_x_3957_, v_x_3958_);
return v___x_3959_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg(lean_object* v_beginPos_3960_, lean_object* v_doc_3961_, lean_object* v_as_x27_3962_, lean_object* v_b_3963_, lean_object* v___y_3964_){
_start:
{
if (lean_obj_tag(v_as_x27_3962_) == 0)
{
lean_object* v___x_3966_; 
lean_dec_ref(v_doc_3961_);
v___x_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3966_, 0, v_b_3963_);
return v___x_3966_;
}
else
{
lean_object* v_head_3967_; lean_object* v_tail_3968_; lean_object* v___x_3969_; uint8_t v___x_3970_; 
v_head_3967_ = lean_ctor_get(v_as_x27_3962_, 0);
v_tail_3968_ = lean_ctor_get(v_as_x27_3962_, 1);
v___x_3969_ = l_Lean_Server_Snapshots_Snapshot_endPos(v_head_3967_);
v___x_3970_ = lean_nat_dec_le(v___x_3969_, v_beginPos_3960_);
lean_dec(v___x_3969_);
if (v___x_3970_ == 0)
{
lean_object* v_toEditableDocumentCore_3971_; lean_object* v_meta_3972_; lean_object* v_text_3973_; lean_object* v_stx_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; 
v_toEditableDocumentCore_3971_ = lean_ctor_get(v_doc_3961_, 0);
v_meta_3972_ = lean_ctor_get(v_toEditableDocumentCore_3971_, 0);
v_text_3973_ = lean_ctor_get(v_meta_3972_, 3);
v_stx_3974_ = lean_ctor_get(v_head_3967_, 0);
lean_inc(v_stx_3974_);
lean_inc_ref(v_text_3973_);
v___x_3975_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_3973_, v_stx_3974_);
lean_inc(v_head_3967_);
v___x_3976_ = l_Lean_Server_Snapshots_Snapshot_infoTree(v_head_3967_);
v___x_3977_ = l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens(v___x_3976_);
v___x_3978_ = l_Array_append___redArg(v_b_3963_, v___x_3975_);
lean_dec_ref(v___x_3975_);
v___x_3979_ = l_Array_append___redArg(v___x_3978_, v___x_3977_);
lean_dec_ref(v___x_3977_);
v___x_3980_ = l_Lean_Server_RequestM_checkCancelled(v___y_3964_);
if (lean_obj_tag(v___x_3980_) == 0)
{
lean_dec_ref_known(v___x_3980_, 1);
v_as_x27_3962_ = v_tail_3968_;
v_b_3963_ = v___x_3979_;
goto _start;
}
else
{
lean_object* v_a_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_3989_; 
lean_dec_ref(v___x_3979_);
lean_dec_ref(v_doc_3961_);
v_a_3982_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_3989_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_3989_ == 0)
{
v___x_3984_ = v___x_3980_;
v_isShared_3985_ = v_isSharedCheck_3989_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_a_3982_);
lean_dec(v___x_3980_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_3989_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v___x_3987_; 
if (v_isShared_3985_ == 0)
{
v___x_3987_ = v___x_3984_;
goto v_reusejp_3986_;
}
else
{
lean_object* v_reuseFailAlloc_3988_; 
v_reuseFailAlloc_3988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3988_, 0, v_a_3982_);
v___x_3987_ = v_reuseFailAlloc_3988_;
goto v_reusejp_3986_;
}
v_reusejp_3986_:
{
return v___x_3987_;
}
}
}
}
else
{
v_as_x27_3962_ = v_tail_3968_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg___boxed(lean_object* v_beginPos_3991_, lean_object* v_doc_3992_, lean_object* v_as_x27_3993_, lean_object* v_b_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_){
_start:
{
lean_object* v_res_3997_; 
v_res_3997_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg(v_beginPos_3991_, v_doc_3992_, v_as_x27_3993_, v_b_3994_, v___y_3995_);
lean_dec_ref(v___y_3995_);
lean_dec(v_as_x27_3993_);
lean_dec(v_beginPos_3991_);
return v_res_3997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeSemanticTokens(lean_object* v_doc_3998_, lean_object* v_beginPos_3999_, lean_object* v_endPos_x3f_4000_, lean_object* v_snaps_4001_, lean_object* v_a_4002_){
_start:
{
lean_object* v_leanSemanticTokens_4004_; lean_object* v___x_4005_; 
v_leanSemanticTokens_4004_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
lean_inc_ref(v_doc_3998_);
v___x_4005_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg(v_beginPos_3999_, v_doc_3998_, v_snaps_4001_, v_leanSemanticTokens_4004_, v_a_4002_);
if (lean_obj_tag(v___x_4005_) == 0)
{
lean_object* v_toEditableDocumentCore_4006_; lean_object* v_meta_4007_; lean_object* v_a_4008_; lean_object* v_text_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
v_toEditableDocumentCore_4006_ = lean_ctor_get(v_doc_3998_, 0);
lean_inc_ref(v_toEditableDocumentCore_4006_);
lean_dec_ref(v_doc_3998_);
v_meta_4007_ = lean_ctor_get(v_toEditableDocumentCore_4006_, 0);
lean_inc_ref(v_meta_4007_);
lean_dec_ref(v_toEditableDocumentCore_4006_);
v_a_4008_ = lean_ctor_get(v___x_4005_, 0);
lean_inc(v_a_4008_);
lean_dec_ref_known(v___x_4005_, 1);
v_text_4009_ = lean_ctor_get(v_meta_4007_, 3);
lean_inc_ref(v_text_4009_);
lean_dec_ref(v_meta_4007_);
v___x_4010_ = l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens(v_text_4009_, v_beginPos_3999_, v_endPos_x3f_4000_, v_a_4008_);
lean_dec(v_a_4008_);
v___x_4011_ = l_Lean_Server_RequestM_checkCancelled(v_a_4002_);
if (lean_obj_tag(v___x_4011_) == 0)
{
lean_object* v___x_4012_; lean_object* v___x_4013_; 
lean_dec_ref_known(v___x_4011_, 1);
v___x_4012_ = l_Lean_Server_FileWorker_handleOverlappingSemanticTokens(v___x_4010_);
v___x_4013_ = l_Lean_Server_RequestM_checkCancelled(v_a_4002_);
if (lean_obj_tag(v___x_4013_) == 0)
{
lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4021_; 
v_isSharedCheck_4021_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4021_ == 0)
{
lean_object* v_unused_4022_; 
v_unused_4022_ = lean_ctor_get(v___x_4013_, 0);
lean_dec(v_unused_4022_);
v___x_4015_ = v___x_4013_;
v_isShared_4016_ = v_isSharedCheck_4021_;
goto v_resetjp_4014_;
}
else
{
lean_dec(v___x_4013_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4021_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4017_; lean_object* v___x_4019_; 
v___x_4017_ = l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens(v___x_4012_);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v___x_4017_);
v___x_4019_ = v___x_4015_;
goto v_reusejp_4018_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v___x_4017_);
v___x_4019_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4018_;
}
v_reusejp_4018_:
{
return v___x_4019_;
}
}
}
else
{
lean_object* v_a_4023_; lean_object* v___x_4025_; uint8_t v_isShared_4026_; uint8_t v_isSharedCheck_4030_; 
lean_dec_ref(v___x_4012_);
v_a_4023_ = lean_ctor_get(v___x_4013_, 0);
v_isSharedCheck_4030_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4030_ == 0)
{
v___x_4025_ = v___x_4013_;
v_isShared_4026_ = v_isSharedCheck_4030_;
goto v_resetjp_4024_;
}
else
{
lean_inc(v_a_4023_);
lean_dec(v___x_4013_);
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
lean_dec_ref(v___x_4010_);
v_a_4031_ = lean_ctor_get(v___x_4011_, 0);
v_isSharedCheck_4038_ = !lean_is_exclusive(v___x_4011_);
if (v_isSharedCheck_4038_ == 0)
{
v___x_4033_ = v___x_4011_;
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_a_4031_);
lean_dec(v___x_4011_);
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
lean_object* v_a_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4046_; 
lean_dec_ref(v_doc_3998_);
v_a_4039_ = lean_ctor_get(v___x_4005_, 0);
v_isSharedCheck_4046_ = !lean_is_exclusive(v___x_4005_);
if (v_isSharedCheck_4046_ == 0)
{
v___x_4041_ = v___x_4005_;
v_isShared_4042_ = v_isSharedCheck_4046_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_a_4039_);
lean_dec(v___x_4005_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4046_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
lean_object* v___x_4044_; 
if (v_isShared_4042_ == 0)
{
v___x_4044_ = v___x_4041_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v_a_4039_);
v___x_4044_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
return v___x_4044_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeSemanticTokens___boxed(lean_object* v_doc_4047_, lean_object* v_beginPos_4048_, lean_object* v_endPos_x3f_4049_, lean_object* v_snaps_4050_, lean_object* v_a_4051_, lean_object* v_a_4052_){
_start:
{
lean_object* v_res_4053_; 
v_res_4053_ = l_Lean_Server_FileWorker_computeSemanticTokens(v_doc_4047_, v_beginPos_4048_, v_endPos_x3f_4049_, v_snaps_4050_, v_a_4051_);
lean_dec_ref(v_a_4051_);
lean_dec(v_snaps_4050_);
lean_dec(v_endPos_x3f_4049_);
lean_dec(v_beginPos_4048_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0(lean_object* v_beginPos_4054_, lean_object* v_doc_4055_, lean_object* v_as_4056_, lean_object* v_as_x27_4057_, lean_object* v_b_4058_, lean_object* v_a_4059_, lean_object* v___y_4060_){
_start:
{
lean_object* v___x_4062_; 
v___x_4062_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg(v_beginPos_4054_, v_doc_4055_, v_as_x27_4057_, v_b_4058_, v___y_4060_);
return v___x_4062_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___boxed(lean_object* v_beginPos_4063_, lean_object* v_doc_4064_, lean_object* v_as_4065_, lean_object* v_as_x27_4066_, lean_object* v_b_4067_, lean_object* v_a_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
lean_object* v_res_4071_; 
v_res_4071_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0(v_beginPos_4063_, v_doc_4064_, v_as_4065_, v_as_x27_4066_, v_b_4067_, v_a_4068_, v___y_4069_);
lean_dec_ref(v___y_4069_);
lean_dec(v_as_x27_4066_);
lean_dec(v_as_4065_);
lean_dec(v_beginPos_4063_);
return v_res_4071_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_(void){
_start:
{
lean_object* v___x_4078_; lean_object* v___x_4079_; 
v___x_4078_ = ((lean_object*)(l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_));
v___x_4079_ = l_unsafeCast___redArg(v___x_4078_);
return v___x_4079_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_(void){
_start:
{
lean_object* v___x_4080_; 
v___x_4080_ = lean_obj_once(&l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_, &l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__once, _init_l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_);
return v___x_4080_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instTypeNameSemanticTokensState(void){
_start:
{
lean_object* v___x_4081_; 
v___x_4081_ = l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_;
return v___x_4081_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instInhabitedSemanticTokensState_default(void){
_start:
{
lean_object* v___x_4082_; 
v___x_4082_ = lean_box(0);
return v___x_4082_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instInhabitedSemanticTokensState(void){
_start:
{
lean_object* v___x_4083_; 
v___x_4083_ = lean_box(0);
return v___x_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0(lean_object* v___y_4084_){
_start:
{
lean_object* v_doc_4086_; lean_object* v___x_4087_; 
v_doc_4086_ = lean_ctor_get(v___y_4084_, 1);
lean_inc_ref(v_doc_4086_);
v___x_4087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4087_, 0, v_doc_4086_);
return v___x_4087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0___boxed(lean_object* v___y_4088_, lean_object* v___y_4089_){
_start:
{
lean_object* v_res_4090_; 
v_res_4090_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0(v___y_4088_);
lean_dec_ref(v___y_4088_);
return v_res_4090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg(lean_object* v_a_4091_){
_start:
{
lean_object* v___x_4093_; lean_object* v_a_4094_; lean_object* v_toEditableDocumentCore_4095_; lean_object* v_cmdSnaps_4096_; lean_object* v_cancelTk_4097_; uint32_t v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v_snd_4101_; lean_object* v_fst_4102_; lean_object* v_snd_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4132_; 
v___x_4093_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0(v_a_4091_);
v_a_4094_ = lean_ctor_get(v___x_4093_, 0);
lean_inc(v_a_4094_);
lean_dec_ref(v___x_4093_);
v_toEditableDocumentCore_4095_ = lean_ctor_get(v_a_4094_, 0);
v_cmdSnaps_4096_ = lean_ctor_get(v_toEditableDocumentCore_4095_, 2);
v_cancelTk_4097_ = lean_ctor_get(v_a_4091_, 4);
v___x_4098_ = 3000;
v___x_4099_ = l_Lean_Server_RequestCancellationToken_cancellationTasks(v_cancelTk_4097_);
lean_inc(v_cmdSnaps_4096_);
v___x_4100_ = l_Lean_AsyncList_getFinishedPrefixWithTimeout___redArg(v_cmdSnaps_4096_, v___x_4098_, v___x_4099_);
v_snd_4101_ = lean_ctor_get(v___x_4100_, 1);
lean_inc(v_snd_4101_);
v_fst_4102_ = lean_ctor_get(v___x_4100_, 0);
lean_inc(v_fst_4102_);
lean_dec_ref(v___x_4100_);
v_snd_4103_ = lean_ctor_get(v_snd_4101_, 1);
v_isSharedCheck_4132_ = !lean_is_exclusive(v_snd_4101_);
if (v_isSharedCheck_4132_ == 0)
{
lean_object* v_unused_4133_; 
v_unused_4133_ = lean_ctor_get(v_snd_4101_, 0);
lean_dec(v_unused_4133_);
v___x_4105_ = v_snd_4101_;
v_isShared_4106_ = v_isSharedCheck_4132_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_snd_4103_);
lean_dec(v_snd_4101_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4132_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; 
v___x_4107_ = lean_unsigned_to_nat(0u);
v___x_4108_ = lean_box(0);
v___x_4109_ = l_Lean_Server_FileWorker_computeSemanticTokens(v_a_4094_, v___x_4107_, v___x_4108_, v_fst_4102_, v_a_4091_);
lean_dec(v_fst_4102_);
if (lean_obj_tag(v___x_4109_) == 0)
{
lean_object* v_a_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4123_; 
v_a_4110_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4123_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4112_ = v___x_4109_;
v_isShared_4113_ = v_isSharedCheck_4123_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_a_4110_);
lean_dec(v___x_4109_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4123_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
lean_object* v___x_4114_; uint8_t v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4118_; 
v___x_4114_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4114_, 0, v_a_4110_);
v___x_4115_ = lean_unbox(v_snd_4103_);
lean_dec(v_snd_4103_);
lean_ctor_set_uint8(v___x_4114_, sizeof(void*)*1, v___x_4115_);
v___x_4116_ = lean_box(0);
if (v_isShared_4106_ == 0)
{
lean_ctor_set(v___x_4105_, 1, v___x_4116_);
lean_ctor_set(v___x_4105_, 0, v___x_4114_);
v___x_4118_ = v___x_4105_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v___x_4114_);
lean_ctor_set(v_reuseFailAlloc_4122_, 1, v___x_4116_);
v___x_4118_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
lean_object* v___x_4120_; 
if (v_isShared_4113_ == 0)
{
lean_ctor_set(v___x_4112_, 0, v___x_4118_);
v___x_4120_ = v___x_4112_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4118_);
v___x_4120_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
return v___x_4120_;
}
}
}
}
else
{
lean_object* v_a_4124_; lean_object* v___x_4126_; uint8_t v_isShared_4127_; uint8_t v_isSharedCheck_4131_; 
lean_del_object(v___x_4105_);
lean_dec(v_snd_4103_);
v_a_4124_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4131_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4131_ == 0)
{
v___x_4126_ = v___x_4109_;
v_isShared_4127_ = v_isSharedCheck_4131_;
goto v_resetjp_4125_;
}
else
{
lean_inc(v_a_4124_);
lean_dec(v___x_4109_);
v___x_4126_ = lean_box(0);
v_isShared_4127_ = v_isSharedCheck_4131_;
goto v_resetjp_4125_;
}
v_resetjp_4125_:
{
lean_object* v___x_4129_; 
if (v_isShared_4127_ == 0)
{
v___x_4129_ = v___x_4126_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4130_; 
v_reuseFailAlloc_4130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4130_, 0, v_a_4124_);
v___x_4129_ = v_reuseFailAlloc_4130_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
return v___x_4129_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg___boxed(lean_object* v_a_4134_, lean_object* v_a_4135_){
_start:
{
lean_object* v_res_4136_; 
v_res_4136_ = l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg(v_a_4134_);
lean_dec_ref(v_a_4134_);
return v_res_4136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull(lean_object* v_x_4137_, lean_object* v_x_4138_, lean_object* v_a_4139_){
_start:
{
lean_object* v___x_4141_; 
v___x_4141_ = l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg(v_a_4139_);
return v___x_4141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___boxed(lean_object* v_x_4142_, lean_object* v_x_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l_Lean_Server_FileWorker_handleSemanticTokensFull(v_x_4142_, v_x_4143_, v_a_4144_);
lean_dec_ref(v_a_4144_);
lean_dec_ref(v_x_4142_);
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg(lean_object* v_a_4147_){
_start:
{
lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; 
v___x_4149_ = lean_box(0);
v___x_4150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4150_, 0, v___x_4149_);
lean_ctor_set(v___x_4150_, 1, v_a_4147_);
v___x_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4151_, 0, v___x_4150_);
return v___x_4151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg___boxed(lean_object* v_a_4152_, lean_object* v_a_4153_){
_start:
{
lean_object* v_res_4154_; 
v_res_4154_ = l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg(v_a_4152_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange(lean_object* v_x_4155_, lean_object* v_a_4156_, lean_object* v_a_4157_){
_start:
{
lean_object* v___x_4159_; 
v___x_4159_ = l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg(v_a_4156_);
return v___x_4159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___boxed(lean_object* v_x_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l_Lean_Server_FileWorker_handleSemanticTokensDidChange(v_x_4160_, v_a_4161_, v_a_4162_);
lean_dec_ref(v_a_4162_);
lean_dec_ref(v_x_4160_);
return v_res_4164_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0(lean_object* v___x_4165_, lean_object* v_x_4166_){
_start:
{
lean_object* v___x_4167_; uint8_t v___x_4168_; 
v___x_4167_ = l_Lean_Server_Snapshots_Snapshot_endPos(v_x_4166_);
v___x_4168_ = lean_nat_dec_le(v___x_4165_, v___x_4167_);
lean_dec(v___x_4167_);
return v___x_4168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0___boxed(lean_object* v___x_4169_, lean_object* v_x_4170_){
_start:
{
uint8_t v_res_4171_; lean_object* v_r_4172_; 
v_res_4171_ = l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0(v___x_4169_, v_x_4170_);
lean_dec_ref(v_x_4170_);
lean_dec(v___x_4169_);
v_r_4172_ = lean_box(v_res_4171_);
return v_r_4172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1(lean_object* v___x_4173_, lean_object* v_a_4174_, lean_object* v___x_4175_, lean_object* v_x_4176_, lean_object* v___y_4177_){
_start:
{
lean_object* v_fst_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; 
v_fst_4179_ = lean_ctor_get(v_x_4176_, 0);
v___x_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4180_, 0, v___x_4173_);
v___x_4181_ = l_Lean_Server_FileWorker_computeSemanticTokens(v_a_4174_, v___x_4175_, v___x_4180_, v_fst_4179_, v___y_4177_);
lean_dec_ref_known(v___x_4180_, 1);
return v___x_4181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1___boxed(lean_object* v___x_4182_, lean_object* v_a_4183_, lean_object* v___x_4184_, lean_object* v_x_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_){
_start:
{
lean_object* v_res_4188_; 
v_res_4188_ = l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1(v___x_4182_, v_a_4183_, v___x_4184_, v_x_4185_, v___y_4186_);
lean_dec_ref(v___y_4186_);
lean_dec_ref(v_x_4185_);
lean_dec(v___x_4184_);
return v_res_4188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange(lean_object* v_p_4189_, lean_object* v_a_4190_){
_start:
{
lean_object* v___x_4192_; lean_object* v_a_4193_; lean_object* v_toEditableDocumentCore_4194_; lean_object* v_meta_4195_; lean_object* v_range_4196_; lean_object* v_cmdSnaps_4197_; lean_object* v_text_4198_; lean_object* v_start_4199_; lean_object* v_end_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___f_4203_; lean_object* v___f_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
v___x_4192_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0(v_a_4190_);
v_a_4193_ = lean_ctor_get(v___x_4192_, 0);
lean_inc(v_a_4193_);
lean_dec_ref(v___x_4192_);
v_toEditableDocumentCore_4194_ = lean_ctor_get(v_a_4193_, 0);
v_meta_4195_ = lean_ctor_get(v_toEditableDocumentCore_4194_, 0);
v_range_4196_ = lean_ctor_get(v_p_4189_, 1);
lean_inc_ref(v_range_4196_);
lean_dec_ref(v_p_4189_);
v_cmdSnaps_4197_ = lean_ctor_get(v_toEditableDocumentCore_4194_, 2);
lean_inc(v_cmdSnaps_4197_);
v_text_4198_ = lean_ctor_get(v_meta_4195_, 3);
v_start_4199_ = lean_ctor_get(v_range_4196_, 0);
lean_inc_ref(v_start_4199_);
v_end_4200_ = lean_ctor_get(v_range_4196_, 1);
lean_inc_ref(v_end_4200_);
lean_dec_ref(v_range_4196_);
v___x_4201_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_4198_, v_start_4199_);
v___x_4202_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_4198_, v_end_4200_);
lean_inc(v___x_4202_);
v___f_4203_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4203_, 0, v___x_4202_);
v___f_4204_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1___boxed), 6, 3);
lean_closure_set(v___f_4204_, 0, v___x_4202_);
lean_closure_set(v___f_4204_, 1, v_a_4193_);
lean_closure_set(v___f_4204_, 2, v___x_4201_);
v___x_4205_ = l_Lean_AsyncList_waitUntil___redArg(v___f_4203_, v_cmdSnaps_4197_);
v___x_4206_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_4205_, v___f_4204_, v_a_4190_);
return v___x_4206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___boxed(lean_object* v_p_4207_, lean_object* v_a_4208_, lean_object* v_a_4209_){
_start:
{
lean_object* v_res_4210_; 
v_res_4210_ = l_Lean_Server_FileWorker_handleSemanticTokensRange(v_p_4207_, v_a_4208_);
lean_dec_ref(v_a_4208_);
return v_res_4210_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg(lean_object* v_keys_4211_, lean_object* v_i_4212_, lean_object* v_k_4213_){
_start:
{
lean_object* v___x_4214_; uint8_t v___x_4215_; 
v___x_4214_ = lean_array_get_size(v_keys_4211_);
v___x_4215_ = lean_nat_dec_lt(v_i_4212_, v___x_4214_);
if (v___x_4215_ == 0)
{
lean_dec(v_i_4212_);
return v___x_4215_;
}
else
{
lean_object* v_k_x27_4216_; uint8_t v___x_4217_; 
v_k_x27_4216_ = lean_array_fget_borrowed(v_keys_4211_, v_i_4212_);
v___x_4217_ = lean_string_dec_eq(v_k_4213_, v_k_x27_4216_);
if (v___x_4217_ == 0)
{
lean_object* v___x_4218_; lean_object* v___x_4219_; 
v___x_4218_ = lean_unsigned_to_nat(1u);
v___x_4219_ = lean_nat_add(v_i_4212_, v___x_4218_);
lean_dec(v_i_4212_);
v_i_4212_ = v___x_4219_;
goto _start;
}
else
{
lean_dec(v_i_4212_);
return v___x_4215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_keys_4221_, lean_object* v_i_4222_, lean_object* v_k_4223_){
_start:
{
uint8_t v_res_4224_; lean_object* v_r_4225_; 
v_res_4224_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg(v_keys_4221_, v_i_4222_, v_k_4223_);
lean_dec_ref(v_k_4223_);
lean_dec_ref(v_keys_4221_);
v_r_4225_ = lean_box(v_res_4224_);
return v_r_4225_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg(lean_object* v_x_4226_, size_t v_x_4227_, lean_object* v_x_4228_){
_start:
{
if (lean_obj_tag(v_x_4226_) == 0)
{
lean_object* v_es_4229_; lean_object* v___x_4230_; size_t v___x_4231_; size_t v___x_4232_; lean_object* v_j_4233_; lean_object* v___x_4234_; 
v_es_4229_ = lean_ctor_get(v_x_4226_, 0);
v___x_4230_ = lean_box(2);
v___x_4231_ = ((size_t)31ULL);
v___x_4232_ = lean_usize_land(v_x_4227_, v___x_4231_);
v_j_4233_ = lean_usize_to_nat(v___x_4232_);
v___x_4234_ = lean_array_get_borrowed(v___x_4230_, v_es_4229_, v_j_4233_);
lean_dec(v_j_4233_);
switch(lean_obj_tag(v___x_4234_))
{
case 0:
{
lean_object* v_key_4235_; uint8_t v___x_4236_; 
v_key_4235_ = lean_ctor_get(v___x_4234_, 0);
v___x_4236_ = lean_string_dec_eq(v_x_4228_, v_key_4235_);
return v___x_4236_;
}
case 1:
{
lean_object* v_node_4237_; size_t v___x_4238_; size_t v___x_4239_; 
v_node_4237_ = lean_ctor_get(v___x_4234_, 0);
v___x_4238_ = ((size_t)5ULL);
v___x_4239_ = lean_usize_shift_right(v_x_4227_, v___x_4238_);
v_x_4226_ = v_node_4237_;
v_x_4227_ = v___x_4239_;
goto _start;
}
default: 
{
uint8_t v___x_4241_; 
v___x_4241_ = 0;
return v___x_4241_;
}
}
}
else
{
lean_object* v_ks_4242_; lean_object* v___x_4243_; uint8_t v___x_4244_; 
v_ks_4242_ = lean_ctor_get(v_x_4226_, 0);
v___x_4243_ = lean_unsigned_to_nat(0u);
v___x_4244_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg(v_ks_4242_, v___x_4243_, v_x_4228_);
return v___x_4244_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_x_4245_, lean_object* v_x_4246_, lean_object* v_x_4247_){
_start:
{
size_t v_x_2478__boxed_4248_; uint8_t v_res_4249_; lean_object* v_r_4250_; 
v_x_2478__boxed_4248_ = lean_unbox_usize(v_x_4246_);
lean_dec(v_x_4246_);
v_res_4249_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg(v_x_4245_, v_x_2478__boxed_4248_, v_x_4247_);
lean_dec_ref(v_x_4247_);
lean_dec_ref(v_x_4245_);
v_r_4250_ = lean_box(v_res_4249_);
return v_r_4250_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object* v_x_4251_, lean_object* v_x_4252_){
_start:
{
uint64_t v___x_4253_; size_t v___x_4254_; uint8_t v___x_4255_; 
v___x_4253_ = lean_string_hash(v_x_4252_);
v___x_4254_ = lean_uint64_to_usize(v___x_4253_);
v___x_4255_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg(v_x_4251_, v___x_4254_, v_x_4252_);
return v___x_4255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg___boxed(lean_object* v_x_4256_, lean_object* v_x_4257_){
_start:
{
uint8_t v_res_4258_; lean_object* v_r_4259_; 
v_res_4258_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(v_x_4256_, v_x_4257_);
lean_dec_ref(v_x_4257_);
lean_dec_ref(v_x_4256_);
v_r_4259_ = lean_box(v_res_4258_);
return v_r_4259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4(lean_object* v___x_4260_, lean_object* v_x_4261_){
_start:
{
return v___x_4260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4___boxed(lean_object* v___x_4262_, lean_object* v_x_4263_){
_start:
{
lean_object* v_res_4264_; 
v_res_4264_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4(v___x_4262_, v_x_4263_);
lean_dec_ref(v_x_4263_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10___redArg(lean_object* v_x_4265_, lean_object* v_x_4266_, lean_object* v_x_4267_, lean_object* v_x_4268_){
_start:
{
lean_object* v_ks_4269_; lean_object* v_vs_4270_; lean_object* v___x_4272_; uint8_t v_isShared_4273_; uint8_t v_isSharedCheck_4294_; 
v_ks_4269_ = lean_ctor_get(v_x_4265_, 0);
v_vs_4270_ = lean_ctor_get(v_x_4265_, 1);
v_isSharedCheck_4294_ = !lean_is_exclusive(v_x_4265_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4272_ = v_x_4265_;
v_isShared_4273_ = v_isSharedCheck_4294_;
goto v_resetjp_4271_;
}
else
{
lean_inc(v_vs_4270_);
lean_inc(v_ks_4269_);
lean_dec(v_x_4265_);
v___x_4272_ = lean_box(0);
v_isShared_4273_ = v_isSharedCheck_4294_;
goto v_resetjp_4271_;
}
v_resetjp_4271_:
{
lean_object* v___x_4274_; uint8_t v___x_4275_; 
v___x_4274_ = lean_array_get_size(v_ks_4269_);
v___x_4275_ = lean_nat_dec_lt(v_x_4266_, v___x_4274_);
if (v___x_4275_ == 0)
{
lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4279_; 
lean_dec(v_x_4266_);
v___x_4276_ = lean_array_push(v_ks_4269_, v_x_4267_);
v___x_4277_ = lean_array_push(v_vs_4270_, v_x_4268_);
if (v_isShared_4273_ == 0)
{
lean_ctor_set(v___x_4272_, 1, v___x_4277_);
lean_ctor_set(v___x_4272_, 0, v___x_4276_);
v___x_4279_ = v___x_4272_;
goto v_reusejp_4278_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v___x_4276_);
lean_ctor_set(v_reuseFailAlloc_4280_, 1, v___x_4277_);
v___x_4279_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4278_;
}
v_reusejp_4278_:
{
return v___x_4279_;
}
}
else
{
lean_object* v_k_x27_4281_; uint8_t v___x_4282_; 
v_k_x27_4281_ = lean_array_fget_borrowed(v_ks_4269_, v_x_4266_);
v___x_4282_ = lean_string_dec_eq(v_x_4267_, v_k_x27_4281_);
if (v___x_4282_ == 0)
{
lean_object* v___x_4284_; 
if (v_isShared_4273_ == 0)
{
v___x_4284_ = v___x_4272_;
goto v_reusejp_4283_;
}
else
{
lean_object* v_reuseFailAlloc_4288_; 
v_reuseFailAlloc_4288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4288_, 0, v_ks_4269_);
lean_ctor_set(v_reuseFailAlloc_4288_, 1, v_vs_4270_);
v___x_4284_ = v_reuseFailAlloc_4288_;
goto v_reusejp_4283_;
}
v_reusejp_4283_:
{
lean_object* v___x_4285_; lean_object* v___x_4286_; 
v___x_4285_ = lean_unsigned_to_nat(1u);
v___x_4286_ = lean_nat_add(v_x_4266_, v___x_4285_);
lean_dec(v_x_4266_);
v_x_4265_ = v___x_4284_;
v_x_4266_ = v___x_4286_;
goto _start;
}
}
else
{
lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4292_; 
v___x_4289_ = lean_array_fset(v_ks_4269_, v_x_4266_, v_x_4267_);
v___x_4290_ = lean_array_fset(v_vs_4270_, v_x_4266_, v_x_4268_);
lean_dec(v_x_4266_);
if (v_isShared_4273_ == 0)
{
lean_ctor_set(v___x_4272_, 1, v___x_4290_);
lean_ctor_set(v___x_4272_, 0, v___x_4289_);
v___x_4292_ = v___x_4272_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v___x_4289_);
lean_ctor_set(v_reuseFailAlloc_4293_, 1, v___x_4290_);
v___x_4292_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
return v___x_4292_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8___redArg(lean_object* v_n_4295_, lean_object* v_k_4296_, lean_object* v_v_4297_){
_start:
{
lean_object* v___x_4298_; lean_object* v___x_4299_; 
v___x_4298_ = lean_unsigned_to_nat(0u);
v___x_4299_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10___redArg(v_n_4295_, v___x_4298_, v_k_4296_, v_v_4297_);
return v___x_4299_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_4300_; lean_object* v___x_4301_; 
v___x_4300_ = lean_box(0);
v___x_4301_ = l_unsafeCast___redArg(v___x_4300_);
return v___x_4301_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_4302_; 
v___x_4302_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_4302_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(lean_object* v_x_4303_, size_t v_x_4304_, size_t v_x_4305_, lean_object* v_x_4306_, lean_object* v_x_4307_){
_start:
{
if (lean_obj_tag(v_x_4303_) == 0)
{
lean_object* v_es_4308_; size_t v___x_4309_; size_t v___x_4310_; lean_object* v_j_4311_; lean_object* v___x_4312_; uint8_t v___x_4313_; 
v_es_4308_ = lean_ctor_get(v_x_4303_, 0);
v___x_4309_ = ((size_t)31ULL);
v___x_4310_ = lean_usize_land(v_x_4304_, v___x_4309_);
v_j_4311_ = lean_usize_to_nat(v___x_4310_);
v___x_4312_ = lean_array_get_size(v_es_4308_);
v___x_4313_ = lean_nat_dec_lt(v_j_4311_, v___x_4312_);
if (v___x_4313_ == 0)
{
lean_dec(v_j_4311_);
lean_dec(v_x_4307_);
lean_dec_ref(v_x_4306_);
return v_x_4303_;
}
else
{
lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4352_; 
lean_inc_ref(v_es_4308_);
v_isSharedCheck_4352_ = !lean_is_exclusive(v_x_4303_);
if (v_isSharedCheck_4352_ == 0)
{
lean_object* v_unused_4353_; 
v_unused_4353_ = lean_ctor_get(v_x_4303_, 0);
lean_dec(v_unused_4353_);
v___x_4315_ = v_x_4303_;
v_isShared_4316_ = v_isSharedCheck_4352_;
goto v_resetjp_4314_;
}
else
{
lean_dec(v_x_4303_);
v___x_4315_ = lean_box(0);
v_isShared_4316_ = v_isSharedCheck_4352_;
goto v_resetjp_4314_;
}
v_resetjp_4314_:
{
lean_object* v_v_4317_; lean_object* v___x_4318_; lean_object* v_xs_x27_4319_; lean_object* v___y_4321_; 
v_v_4317_ = lean_array_fget(v_es_4308_, v_j_4311_);
v___x_4318_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0);
v_xs_x27_4319_ = lean_array_fset(v_es_4308_, v_j_4311_, v___x_4318_);
switch(lean_obj_tag(v_v_4317_))
{
case 0:
{
lean_object* v_key_4326_; lean_object* v_val_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4337_; 
v_key_4326_ = lean_ctor_get(v_v_4317_, 0);
v_val_4327_ = lean_ctor_get(v_v_4317_, 1);
v_isSharedCheck_4337_ = !lean_is_exclusive(v_v_4317_);
if (v_isSharedCheck_4337_ == 0)
{
v___x_4329_ = v_v_4317_;
v_isShared_4330_ = v_isSharedCheck_4337_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_val_4327_);
lean_inc(v_key_4326_);
lean_dec(v_v_4317_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4337_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
uint8_t v___x_4331_; 
v___x_4331_ = lean_string_dec_eq(v_x_4306_, v_key_4326_);
if (v___x_4331_ == 0)
{
lean_object* v___x_4332_; lean_object* v___x_4333_; 
lean_del_object(v___x_4329_);
v___x_4332_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_4326_, v_val_4327_, v_x_4306_, v_x_4307_);
v___x_4333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4333_, 0, v___x_4332_);
v___y_4321_ = v___x_4333_;
goto v___jp_4320_;
}
else
{
lean_object* v___x_4335_; 
lean_dec(v_val_4327_);
lean_dec(v_key_4326_);
if (v_isShared_4330_ == 0)
{
lean_ctor_set(v___x_4329_, 1, v_x_4307_);
lean_ctor_set(v___x_4329_, 0, v_x_4306_);
v___x_4335_ = v___x_4329_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4336_; 
v_reuseFailAlloc_4336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4336_, 0, v_x_4306_);
lean_ctor_set(v_reuseFailAlloc_4336_, 1, v_x_4307_);
v___x_4335_ = v_reuseFailAlloc_4336_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
v___y_4321_ = v___x_4335_;
goto v___jp_4320_;
}
}
}
}
case 1:
{
lean_object* v_node_4338_; lean_object* v___x_4340_; uint8_t v_isShared_4341_; uint8_t v_isSharedCheck_4350_; 
v_node_4338_ = lean_ctor_get(v_v_4317_, 0);
v_isSharedCheck_4350_ = !lean_is_exclusive(v_v_4317_);
if (v_isSharedCheck_4350_ == 0)
{
v___x_4340_ = v_v_4317_;
v_isShared_4341_ = v_isSharedCheck_4350_;
goto v_resetjp_4339_;
}
else
{
lean_inc(v_node_4338_);
lean_dec(v_v_4317_);
v___x_4340_ = lean_box(0);
v_isShared_4341_ = v_isSharedCheck_4350_;
goto v_resetjp_4339_;
}
v_resetjp_4339_:
{
size_t v___x_4342_; size_t v___x_4343_; size_t v___x_4344_; size_t v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4348_; 
v___x_4342_ = ((size_t)5ULL);
v___x_4343_ = lean_usize_shift_right(v_x_4304_, v___x_4342_);
v___x_4344_ = ((size_t)1ULL);
v___x_4345_ = lean_usize_add(v_x_4305_, v___x_4344_);
v___x_4346_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_node_4338_, v___x_4343_, v___x_4345_, v_x_4306_, v_x_4307_);
if (v_isShared_4341_ == 0)
{
lean_ctor_set(v___x_4340_, 0, v___x_4346_);
v___x_4348_ = v___x_4340_;
goto v_reusejp_4347_;
}
else
{
lean_object* v_reuseFailAlloc_4349_; 
v_reuseFailAlloc_4349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4349_, 0, v___x_4346_);
v___x_4348_ = v_reuseFailAlloc_4349_;
goto v_reusejp_4347_;
}
v_reusejp_4347_:
{
v___y_4321_ = v___x_4348_;
goto v___jp_4320_;
}
}
}
default: 
{
lean_object* v___x_4351_; 
v___x_4351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4351_, 0, v_x_4306_);
lean_ctor_set(v___x_4351_, 1, v_x_4307_);
v___y_4321_ = v___x_4351_;
goto v___jp_4320_;
}
}
v___jp_4320_:
{
lean_object* v___x_4322_; lean_object* v___x_4324_; 
v___x_4322_ = lean_array_fset(v_xs_x27_4319_, v_j_4311_, v___y_4321_);
lean_dec(v_j_4311_);
if (v_isShared_4316_ == 0)
{
lean_ctor_set(v___x_4315_, 0, v___x_4322_);
v___x_4324_ = v___x_4315_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v___x_4322_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
}
}
else
{
lean_object* v_ks_4354_; lean_object* v_vs_4355_; lean_object* v___x_4357_; uint8_t v_isShared_4358_; uint8_t v_isSharedCheck_4373_; 
v_ks_4354_ = lean_ctor_get(v_x_4303_, 0);
v_vs_4355_ = lean_ctor_get(v_x_4303_, 1);
v_isSharedCheck_4373_ = !lean_is_exclusive(v_x_4303_);
if (v_isSharedCheck_4373_ == 0)
{
v___x_4357_ = v_x_4303_;
v_isShared_4358_ = v_isSharedCheck_4373_;
goto v_resetjp_4356_;
}
else
{
lean_inc(v_vs_4355_);
lean_inc(v_ks_4354_);
lean_dec(v_x_4303_);
v___x_4357_ = lean_box(0);
v_isShared_4358_ = v_isSharedCheck_4373_;
goto v_resetjp_4356_;
}
v_resetjp_4356_:
{
lean_object* v___x_4360_; 
if (v_isShared_4358_ == 0)
{
v___x_4360_ = v___x_4357_;
goto v_reusejp_4359_;
}
else
{
lean_object* v_reuseFailAlloc_4372_; 
v_reuseFailAlloc_4372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4372_, 0, v_ks_4354_);
lean_ctor_set(v_reuseFailAlloc_4372_, 1, v_vs_4355_);
v___x_4360_ = v_reuseFailAlloc_4372_;
goto v_reusejp_4359_;
}
v_reusejp_4359_:
{
lean_object* v_newNode_4361_; size_t v___x_4362_; uint8_t v___x_4363_; 
v_newNode_4361_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8___redArg(v___x_4360_, v_x_4306_, v_x_4307_);
v___x_4362_ = ((size_t)7ULL);
v___x_4363_ = lean_usize_dec_le(v___x_4362_, v_x_4305_);
if (v___x_4363_ == 0)
{
lean_object* v___x_4364_; lean_object* v___x_4365_; uint8_t v___x_4366_; 
v___x_4364_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_4361_);
v___x_4365_ = lean_unsigned_to_nat(4u);
v___x_4366_ = lean_nat_dec_lt(v___x_4364_, v___x_4365_);
lean_dec(v___x_4364_);
if (v___x_4366_ == 0)
{
lean_object* v_ks_4367_; lean_object* v_vs_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; 
v_ks_4367_ = lean_ctor_get(v_newNode_4361_, 0);
lean_inc_ref(v_ks_4367_);
v_vs_4368_ = lean_ctor_get(v_newNode_4361_, 1);
lean_inc_ref(v_vs_4368_);
lean_dec_ref(v_newNode_4361_);
v___x_4369_ = lean_unsigned_to_nat(0u);
v___x_4370_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1);
v___x_4371_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg(v_x_4305_, v_ks_4367_, v_vs_4368_, v___x_4369_, v___x_4370_);
lean_dec_ref(v_vs_4368_);
lean_dec_ref(v_ks_4367_);
return v___x_4371_;
}
else
{
return v_newNode_4361_;
}
}
else
{
return v_newNode_4361_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg(size_t v_depth_4374_, lean_object* v_keys_4375_, lean_object* v_vals_4376_, lean_object* v_i_4377_, lean_object* v_entries_4378_){
_start:
{
lean_object* v___x_4379_; uint8_t v___x_4380_; 
v___x_4379_ = lean_array_get_size(v_keys_4375_);
v___x_4380_ = lean_nat_dec_lt(v_i_4377_, v___x_4379_);
if (v___x_4380_ == 0)
{
lean_dec(v_i_4377_);
return v_entries_4378_;
}
else
{
lean_object* v_k_4381_; lean_object* v_v_4382_; uint64_t v___x_4383_; size_t v_h_4384_; size_t v___x_4385_; lean_object* v___x_4386_; size_t v___x_4387_; size_t v___x_4388_; size_t v___x_4389_; size_t v_h_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; 
v_k_4381_ = lean_array_fget_borrowed(v_keys_4375_, v_i_4377_);
v_v_4382_ = lean_array_fget_borrowed(v_vals_4376_, v_i_4377_);
v___x_4383_ = lean_string_hash(v_k_4381_);
v_h_4384_ = lean_uint64_to_usize(v___x_4383_);
v___x_4385_ = ((size_t)5ULL);
v___x_4386_ = lean_unsigned_to_nat(1u);
v___x_4387_ = ((size_t)1ULL);
v___x_4388_ = lean_usize_sub(v_depth_4374_, v___x_4387_);
v___x_4389_ = lean_usize_mul(v___x_4385_, v___x_4388_);
v_h_4390_ = lean_usize_shift_right(v_h_4384_, v___x_4389_);
v___x_4391_ = lean_nat_add(v_i_4377_, v___x_4386_);
lean_dec(v_i_4377_);
lean_inc(v_v_4382_);
lean_inc(v_k_4381_);
v___x_4392_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_entries_4378_, v_h_4390_, v_depth_4374_, v_k_4381_, v_v_4382_);
v_i_4377_ = v___x_4391_;
v_entries_4378_ = v___x_4392_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_depth_4394_, lean_object* v_keys_4395_, lean_object* v_vals_4396_, lean_object* v_i_4397_, lean_object* v_entries_4398_){
_start:
{
size_t v_depth_boxed_4399_; lean_object* v_res_4400_; 
v_depth_boxed_4399_ = lean_unbox_usize(v_depth_4394_);
lean_dec(v_depth_4394_);
v_res_4400_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg(v_depth_boxed_4399_, v_keys_4395_, v_vals_4396_, v_i_4397_, v_entries_4398_);
lean_dec_ref(v_vals_4396_);
lean_dec_ref(v_keys_4395_);
return v_res_4400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___boxed(lean_object* v_x_4401_, lean_object* v_x_4402_, lean_object* v_x_4403_, lean_object* v_x_4404_, lean_object* v_x_4405_){
_start:
{
size_t v_x_2617__boxed_4406_; size_t v_x_2618__boxed_4407_; lean_object* v_res_4408_; 
v_x_2617__boxed_4406_ = lean_unbox_usize(v_x_4402_);
lean_dec(v_x_4402_);
v_x_2618__boxed_4407_ = lean_unbox_usize(v_x_4403_);
lean_dec(v_x_4403_);
v_res_4408_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_x_4401_, v_x_2617__boxed_4406_, v_x_2618__boxed_4407_, v_x_4404_, v_x_4405_);
return v_res_4408_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3___redArg(lean_object* v_x_4409_, lean_object* v_x_4410_, lean_object* v_x_4411_){
_start:
{
uint64_t v___x_4412_; size_t v___x_4413_; size_t v___x_4414_; lean_object* v___x_4415_; 
v___x_4412_ = lean_string_hash(v_x_4410_);
v___x_4413_ = lean_uint64_to_usize(v___x_4412_);
v___x_4414_ = ((size_t)1ULL);
v___x_4415_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_x_4409_, v___x_4413_, v___x_4414_, v_x_4410_, v_x_4411_);
return v___x_4415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12(lean_object* v_params_4417_){
_start:
{
lean_object* v___x_4418_; 
lean_inc(v_params_4417_);
v___x_4418_ = l_Lean_Lsp_instFromJsonSemanticTokensParams_fromJson(v_params_4417_);
if (lean_obj_tag(v___x_4418_) == 0)
{
lean_object* v_a_4419_; lean_object* v___x_4421_; uint8_t v_isShared_4422_; uint8_t v_isSharedCheck_4434_; 
v_a_4419_ = lean_ctor_get(v___x_4418_, 0);
v_isSharedCheck_4434_ = !lean_is_exclusive(v___x_4418_);
if (v_isSharedCheck_4434_ == 0)
{
v___x_4421_ = v___x_4418_;
v_isShared_4422_ = v_isSharedCheck_4434_;
goto v_resetjp_4420_;
}
else
{
lean_inc(v_a_4419_);
lean_dec(v___x_4418_);
v___x_4421_ = lean_box(0);
v_isShared_4422_ = v_isSharedCheck_4434_;
goto v_resetjp_4420_;
}
v_resetjp_4420_:
{
uint8_t v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4432_; 
v___x_4423_ = 3;
v___x_4424_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12___closed__0));
v___x_4425_ = l_Lean_Json_compress(v_params_4417_);
v___x_4426_ = lean_string_append(v___x_4424_, v___x_4425_);
lean_dec_ref(v___x_4425_);
v___x_4427_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__2));
v___x_4428_ = lean_string_append(v___x_4426_, v___x_4427_);
v___x_4429_ = lean_string_append(v___x_4428_, v_a_4419_);
lean_dec(v_a_4419_);
v___x_4430_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4430_, 0, v___x_4429_);
lean_ctor_set_uint8(v___x_4430_, sizeof(void*)*1, v___x_4423_);
if (v_isShared_4422_ == 0)
{
lean_ctor_set(v___x_4421_, 0, v___x_4430_);
v___x_4432_ = v___x_4421_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4433_; 
v_reuseFailAlloc_4433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4433_, 0, v___x_4430_);
v___x_4432_ = v_reuseFailAlloc_4433_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
return v___x_4432_;
}
}
}
else
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4442_; 
lean_dec(v_params_4417_);
v_a_4435_ = lean_ctor_get(v___x_4418_, 0);
v_isSharedCheck_4442_ = !lean_is_exclusive(v___x_4418_);
if (v_isSharedCheck_4442_ == 0)
{
v___x_4437_ = v___x_4418_;
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v___x_4418_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4440_; 
if (v_isShared_4438_ == 0)
{
v___x_4440_ = v___x_4437_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v_a_4435_);
v___x_4440_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
return v___x_4440_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg(lean_object* v_params_4443_){
_start:
{
lean_object* v___x_4445_; 
v___x_4445_ = l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12(v_params_4443_);
if (lean_obj_tag(v___x_4445_) == 0)
{
lean_object* v_a_4446_; lean_object* v___x_4448_; uint8_t v_isShared_4449_; uint8_t v_isSharedCheck_4453_; 
v_a_4446_ = lean_ctor_get(v___x_4445_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v___x_4445_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4448_ = v___x_4445_;
v_isShared_4449_ = v_isSharedCheck_4453_;
goto v_resetjp_4447_;
}
else
{
lean_inc(v_a_4446_);
lean_dec(v___x_4445_);
v___x_4448_ = lean_box(0);
v_isShared_4449_ = v_isSharedCheck_4453_;
goto v_resetjp_4447_;
}
v_resetjp_4447_:
{
lean_object* v___x_4451_; 
if (v_isShared_4449_ == 0)
{
lean_ctor_set_tag(v___x_4448_, 1);
v___x_4451_ = v___x_4448_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v_a_4446_);
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
lean_object* v_a_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4461_; 
v_a_4454_ = lean_ctor_get(v___x_4445_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v___x_4445_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4456_ = v___x_4445_;
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_a_4454_);
lean_dec(v___x_4445_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg___boxed(lean_object* v_params_4462_, lean_object* v_a_4463_){
_start:
{
lean_object* v_res_4464_; 
v_res_4464_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg(v_params_4462_);
return v_res_4464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1(lean_object* v_method_4465_, lean_object* v_inst_4466_, lean_object* v_handler_4467_, lean_object* v_param_4468_, lean_object* v_state_4469_, lean_object* v___y_4470_){
_start:
{
lean_object* v___x_4472_; 
v___x_4472_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg(v_param_4468_);
if (lean_obj_tag(v___x_4472_) == 0)
{
lean_object* v_a_4473_; lean_object* v___x_4474_; 
v_a_4473_ = lean_ctor_get(v___x_4472_, 0);
lean_inc(v_a_4473_);
lean_dec_ref_known(v___x_4472_, 1);
v___x_4474_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(v_method_4465_, v_state_4469_, lean_box(0), v_inst_4466_, v___y_4470_);
if (lean_obj_tag(v___x_4474_) == 0)
{
lean_object* v_a_4475_; lean_object* v___x_4476_; 
v_a_4475_ = lean_ctor_get(v___x_4474_, 0);
lean_inc(v_a_4475_);
lean_dec_ref_known(v___x_4474_, 1);
lean_inc_ref(v___y_4470_);
v___x_4476_ = lean_apply_4(v_handler_4467_, v_a_4473_, v_a_4475_, v___y_4470_, lean_box(0));
if (lean_obj_tag(v___x_4476_) == 0)
{
lean_object* v_a_4477_; lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4500_; 
v_a_4477_ = lean_ctor_get(v___x_4476_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4476_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4479_ = v___x_4476_;
v_isShared_4480_ = v_isSharedCheck_4500_;
goto v_resetjp_4478_;
}
else
{
lean_inc(v_a_4477_);
lean_dec(v___x_4476_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4500_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v_fst_4481_; lean_object* v_snd_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4499_; 
v_fst_4481_ = lean_ctor_get(v_a_4477_, 0);
v_snd_4482_ = lean_ctor_get(v_a_4477_, 1);
v_isSharedCheck_4499_ = !lean_is_exclusive(v_a_4477_);
if (v_isSharedCheck_4499_ == 0)
{
v___x_4484_ = v_a_4477_;
v_isShared_4485_ = v_isSharedCheck_4499_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_snd_4482_);
lean_inc(v_fst_4481_);
lean_dec(v_a_4477_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4499_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v_response_4486_; uint8_t v_isComplete_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4494_; 
v_response_4486_ = lean_ctor_get(v_fst_4481_, 0);
lean_inc(v_response_4486_);
v_isComplete_4487_ = lean_ctor_get_uint8(v_fst_4481_, sizeof(void*)*1);
lean_dec(v_fst_4481_);
v___x_4488_ = l_Lean_Lsp_instToJsonSemanticTokens_toJson(v_response_4486_);
lean_inc(v___x_4488_);
v___x_4489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4489_, 0, v___x_4488_);
v___x_4490_ = l_Lean_Json_compress(v___x_4488_);
v___x_4491_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4491_, 0, v___x_4489_);
lean_ctor_set(v___x_4491_, 1, v___x_4490_);
lean_ctor_set_uint8(v___x_4491_, sizeof(void*)*2, v_isComplete_4487_);
v___x_4492_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_4466_, v_snd_4482_);
lean_dec(v_snd_4482_);
if (v_isShared_4485_ == 0)
{
lean_ctor_set(v___x_4484_, 1, v___x_4492_);
lean_ctor_set(v___x_4484_, 0, v___x_4491_);
v___x_4494_ = v___x_4484_;
goto v_reusejp_4493_;
}
else
{
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v___x_4491_);
lean_ctor_set(v_reuseFailAlloc_4498_, 1, v___x_4492_);
v___x_4494_ = v_reuseFailAlloc_4498_;
goto v_reusejp_4493_;
}
v_reusejp_4493_:
{
lean_object* v___x_4496_; 
if (v_isShared_4480_ == 0)
{
lean_ctor_set(v___x_4479_, 0, v___x_4494_);
v___x_4496_ = v___x_4479_;
goto v_reusejp_4495_;
}
else
{
lean_object* v_reuseFailAlloc_4497_; 
v_reuseFailAlloc_4497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4497_, 0, v___x_4494_);
v___x_4496_ = v_reuseFailAlloc_4497_;
goto v_reusejp_4495_;
}
v_reusejp_4495_:
{
return v___x_4496_;
}
}
}
}
}
else
{
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4508_; 
v_a_4501_ = lean_ctor_get(v___x_4476_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4476_);
if (v_isSharedCheck_4508_ == 0)
{
v___x_4503_ = v___x_4476_;
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_a_4501_);
lean_dec(v___x_4476_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4506_; 
if (v_isShared_4504_ == 0)
{
v___x_4506_ = v___x_4503_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_a_4501_);
v___x_4506_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
return v___x_4506_;
}
}
}
}
else
{
lean_object* v_a_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4516_; 
lean_dec(v_a_4473_);
lean_dec_ref(v_handler_4467_);
v_a_4509_ = lean_ctor_get(v___x_4474_, 0);
v_isSharedCheck_4516_ = !lean_is_exclusive(v___x_4474_);
if (v_isSharedCheck_4516_ == 0)
{
v___x_4511_ = v___x_4474_;
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_a_4509_);
lean_dec(v___x_4474_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v___x_4514_; 
if (v_isShared_4512_ == 0)
{
v___x_4514_ = v___x_4511_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4515_; 
v_reuseFailAlloc_4515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4515_, 0, v_a_4509_);
v___x_4514_ = v_reuseFailAlloc_4515_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
return v___x_4514_;
}
}
}
}
else
{
lean_object* v_a_4517_; lean_object* v___x_4519_; uint8_t v_isShared_4520_; uint8_t v_isSharedCheck_4524_; 
lean_dec_ref(v_handler_4467_);
v_a_4517_ = lean_ctor_get(v___x_4472_, 0);
v_isSharedCheck_4524_ = !lean_is_exclusive(v___x_4472_);
if (v_isSharedCheck_4524_ == 0)
{
v___x_4519_ = v___x_4472_;
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
else
{
lean_inc(v_a_4517_);
lean_dec(v___x_4472_);
v___x_4519_ = lean_box(0);
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
v_resetjp_4518_:
{
lean_object* v___x_4522_; 
if (v_isShared_4520_ == 0)
{
v___x_4522_ = v___x_4519_;
goto v_reusejp_4521_;
}
else
{
lean_object* v_reuseFailAlloc_4523_; 
v_reuseFailAlloc_4523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4523_, 0, v_a_4517_);
v___x_4522_ = v_reuseFailAlloc_4523_;
goto v_reusejp_4521_;
}
v_reusejp_4521_:
{
return v___x_4522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1___boxed(lean_object* v_method_4525_, lean_object* v_inst_4526_, lean_object* v_handler_4527_, lean_object* v_param_4528_, lean_object* v_state_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_){
_start:
{
lean_object* v_res_4532_; 
v_res_4532_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1(v_method_4525_, v_inst_4526_, v_handler_4527_, v_param_4528_, v_state_4529_, v___y_4530_);
lean_dec_ref(v___y_4530_);
lean_dec(v_state_4529_);
lean_dec(v_inst_4526_);
lean_dec_ref(v_method_4525_);
return v_res_4532_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0(lean_object* v_mutex_4533_, lean_object* v_a_x3f_4534_){
_start:
{
lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4536_ = lean_io_basemutex_unlock(v_mutex_4533_);
v___x_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4537_, 0, v___x_4536_);
return v___x_4537_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0___boxed(lean_object* v_mutex_4538_, lean_object* v_a_x3f_4539_, lean_object* v___y_4540_){
_start:
{
lean_object* v_res_4541_; 
v_res_4541_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0(v_mutex_4538_, v_a_x3f_4539_);
lean_dec(v_a_x3f_4539_);
lean_dec(v_mutex_4538_);
return v_res_4541_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(lean_object* v_mutex_4542_, lean_object* v_k_4543_, lean_object* v___y_4544_){
_start:
{
lean_object* v_ref_4546_; lean_object* v_mutex_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; 
v_ref_4546_ = lean_ctor_get(v_mutex_4542_, 0);
lean_inc(v_ref_4546_);
v_mutex_4547_ = lean_ctor_get(v_mutex_4542_, 1);
lean_inc(v_mutex_4547_);
lean_dec_ref(v_mutex_4542_);
v___x_4548_ = lean_io_basemutex_lock(v_mutex_4547_);
lean_inc_ref(v___y_4544_);
v___x_4549_ = lean_apply_3(v_k_4543_, v_ref_4546_, v___y_4544_, lean_box(0));
if (lean_obj_tag(v___x_4549_) == 0)
{
lean_object* v_a_4550_; lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4566_; 
v_a_4550_ = lean_ctor_get(v___x_4549_, 0);
v_isSharedCheck_4566_ = !lean_is_exclusive(v___x_4549_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4552_ = v___x_4549_;
v_isShared_4553_ = v_isSharedCheck_4566_;
goto v_resetjp_4551_;
}
else
{
lean_inc(v_a_4550_);
lean_dec(v___x_4549_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4566_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
lean_object* v___x_4555_; 
lean_inc(v_a_4550_);
if (v_isShared_4553_ == 0)
{
lean_ctor_set_tag(v___x_4552_, 1);
v___x_4555_ = v___x_4552_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4565_; 
v_reuseFailAlloc_4565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4565_, 0, v_a_4550_);
v___x_4555_ = v_reuseFailAlloc_4565_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
lean_object* v___x_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4563_; 
v___x_4556_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0(v_mutex_4547_, v___x_4555_);
lean_dec_ref(v___x_4555_);
lean_dec(v_mutex_4547_);
v_isSharedCheck_4563_ = !lean_is_exclusive(v___x_4556_);
if (v_isSharedCheck_4563_ == 0)
{
lean_object* v_unused_4564_; 
v_unused_4564_ = lean_ctor_get(v___x_4556_, 0);
lean_dec(v_unused_4564_);
v___x_4558_ = v___x_4556_;
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
else
{
lean_dec(v___x_4556_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4561_; 
if (v_isShared_4559_ == 0)
{
lean_ctor_set(v___x_4558_, 0, v_a_4550_);
v___x_4561_ = v___x_4558_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v_a_4550_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
return v___x_4561_;
}
}
}
}
}
else
{
lean_object* v_a_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4576_; 
v_a_4567_ = lean_ctor_get(v___x_4549_, 0);
lean_inc(v_a_4567_);
lean_dec_ref_known(v___x_4549_, 1);
v___x_4568_ = lean_box(0);
v___x_4569_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0(v_mutex_4547_, v___x_4568_);
lean_dec(v_mutex_4547_);
v_isSharedCheck_4576_ = !lean_is_exclusive(v___x_4569_);
if (v_isSharedCheck_4576_ == 0)
{
lean_object* v_unused_4577_; 
v_unused_4577_ = lean_ctor_get(v___x_4569_, 0);
lean_dec(v_unused_4577_);
v___x_4571_ = v___x_4569_;
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
else
{
lean_dec(v___x_4569_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___x_4574_; 
if (v_isShared_4572_ == 0)
{
lean_ctor_set_tag(v___x_4571_, 1);
lean_ctor_set(v___x_4571_, 0, v_a_4567_);
v___x_4574_ = v___x_4571_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v_a_4567_);
v___x_4574_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
return v___x_4574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___boxed(lean_object* v_mutex_4578_, lean_object* v_k_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_){
_start:
{
lean_object* v_res_4582_; 
v_res_4582_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(v_mutex_4578_, v_k_4579_, v___y_4580_);
lean_dec_ref(v___y_4580_);
return v_res_4582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8(lean_object* v_val_4583_, lean_object* v___f_4584_, lean_object* v_param_4585_, lean_object* v___x_4586_, lean_object* v_x_4587_, lean_object* v___y_4588_){
_start:
{
lean_object* v___x_4590_; lean_object* v___x_4591_; 
v___x_4590_ = lean_st_ref_get(v_val_4583_);
lean_inc_ref(v___y_4588_);
v___x_4591_ = lean_apply_4(v___f_4584_, v_param_4585_, v___x_4590_, v___y_4588_, lean_box(0));
if (lean_obj_tag(v___x_4591_) == 0)
{
lean_object* v_a_4592_; lean_object* v___x_4594_; uint8_t v_isShared_4595_; uint8_t v_isSharedCheck_4601_; 
v_a_4592_ = lean_ctor_get(v___x_4591_, 0);
v_isSharedCheck_4601_ = !lean_is_exclusive(v___x_4591_);
if (v_isSharedCheck_4601_ == 0)
{
v___x_4594_ = v___x_4591_;
v_isShared_4595_ = v_isSharedCheck_4601_;
goto v_resetjp_4593_;
}
else
{
lean_inc(v_a_4592_);
lean_dec(v___x_4591_);
v___x_4594_ = lean_box(0);
v_isShared_4595_ = v_isSharedCheck_4601_;
goto v_resetjp_4593_;
}
v_resetjp_4593_:
{
lean_object* v_snd_4596_; lean_object* v___x_4597_; lean_object* v___x_4599_; 
v_snd_4596_ = lean_ctor_get(v_a_4592_, 1);
lean_inc(v_snd_4596_);
lean_dec(v_a_4592_);
v___x_4597_ = lean_st_ref_swap(v_val_4583_, v_snd_4596_);
lean_dec(v___x_4597_);
if (v_isShared_4595_ == 0)
{
lean_ctor_set(v___x_4594_, 0, v___x_4586_);
v___x_4599_ = v___x_4594_;
goto v_reusejp_4598_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v___x_4586_);
v___x_4599_ = v_reuseFailAlloc_4600_;
goto v_reusejp_4598_;
}
v_reusejp_4598_:
{
return v___x_4599_;
}
}
}
else
{
lean_object* v_a_4602_; lean_object* v___x_4604_; uint8_t v_isShared_4605_; uint8_t v_isSharedCheck_4609_; 
v_a_4602_ = lean_ctor_get(v___x_4591_, 0);
v_isSharedCheck_4609_ = !lean_is_exclusive(v___x_4591_);
if (v_isSharedCheck_4609_ == 0)
{
v___x_4604_ = v___x_4591_;
v_isShared_4605_ = v_isSharedCheck_4609_;
goto v_resetjp_4603_;
}
else
{
lean_inc(v_a_4602_);
lean_dec(v___x_4591_);
v___x_4604_ = lean_box(0);
v_isShared_4605_ = v_isSharedCheck_4609_;
goto v_resetjp_4603_;
}
v_resetjp_4603_:
{
lean_object* v___x_4607_; 
if (v_isShared_4605_ == 0)
{
v___x_4607_ = v___x_4604_;
goto v_reusejp_4606_;
}
else
{
lean_object* v_reuseFailAlloc_4608_; 
v_reuseFailAlloc_4608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4608_, 0, v_a_4602_);
v___x_4607_ = v_reuseFailAlloc_4608_;
goto v_reusejp_4606_;
}
v_reusejp_4606_:
{
return v___x_4607_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8___boxed(lean_object* v_val_4610_, lean_object* v___f_4611_, lean_object* v_param_4612_, lean_object* v___x_4613_, lean_object* v_x_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_){
_start:
{
lean_object* v_res_4617_; 
v_res_4617_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8(v_val_4610_, v___f_4611_, v_param_4612_, v___x_4613_, v_x_4614_, v___y_4615_);
lean_dec_ref(v___y_4615_);
lean_dec(v_val_4610_);
return v_res_4617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9(lean_object* v___f_4618_, lean_object* v___f_4619_, lean_object* v___x_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_){
_start:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; 
v___x_4624_ = lean_st_ref_get(v___y_4621_);
v___x_4625_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_4624_, v___f_4618_, v___y_4622_);
if (lean_obj_tag(v___x_4625_) == 0)
{
lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4635_; 
v_a_4626_ = lean_ctor_get(v___x_4625_, 0);
v_isSharedCheck_4635_ = !lean_is_exclusive(v___x_4625_);
if (v_isSharedCheck_4635_ == 0)
{
v___x_4628_ = v___x_4625_;
v_isShared_4629_ = v_isSharedCheck_4635_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_dec(v___x_4625_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4635_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4633_; 
v___x_4630_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_4619_, v_a_4626_);
v___x_4631_ = lean_st_ref_swap(v___y_4621_, v___x_4630_);
lean_dec(v___x_4631_);
if (v_isShared_4629_ == 0)
{
lean_ctor_set(v___x_4628_, 0, v___x_4620_);
v___x_4633_ = v___x_4628_;
goto v_reusejp_4632_;
}
else
{
lean_object* v_reuseFailAlloc_4634_; 
v_reuseFailAlloc_4634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4634_, 0, v___x_4620_);
v___x_4633_ = v_reuseFailAlloc_4634_;
goto v_reusejp_4632_;
}
v_reusejp_4632_:
{
return v___x_4633_;
}
}
}
else
{
lean_object* v_a_4636_; lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4643_; 
lean_dec_ref(v___f_4619_);
v_a_4636_ = lean_ctor_get(v___x_4625_, 0);
v_isSharedCheck_4643_ = !lean_is_exclusive(v___x_4625_);
if (v_isSharedCheck_4643_ == 0)
{
v___x_4638_ = v___x_4625_;
v_isShared_4639_ = v_isSharedCheck_4643_;
goto v_resetjp_4637_;
}
else
{
lean_inc(v_a_4636_);
lean_dec(v___x_4625_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4643_;
goto v_resetjp_4637_;
}
v_resetjp_4637_:
{
lean_object* v___x_4641_; 
if (v_isShared_4639_ == 0)
{
v___x_4641_ = v___x_4638_;
goto v_reusejp_4640_;
}
else
{
lean_object* v_reuseFailAlloc_4642_; 
v_reuseFailAlloc_4642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4642_, 0, v_a_4636_);
v___x_4641_ = v_reuseFailAlloc_4642_;
goto v_reusejp_4640_;
}
v_reusejp_4640_:
{
return v___x_4641_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9___boxed(lean_object* v___f_4644_, lean_object* v___f_4645_, lean_object* v___x_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_){
_start:
{
lean_object* v_res_4650_; 
v_res_4650_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9(v___f_4644_, v___f_4645_, v___x_4646_, v___y_4647_, v___y_4648_);
lean_dec_ref(v___y_4648_);
lean_dec(v___y_4647_);
return v_res_4650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10(lean_object* v_val_4651_, lean_object* v___f_4652_, lean_object* v___x_4653_, lean_object* v___f_4654_, lean_object* v_val_4655_, lean_object* v_param_4656_, lean_object* v___y_4657_){
_start:
{
lean_object* v___f_4659_; lean_object* v___f_4660_; lean_object* v___x_4661_; 
v___f_4659_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8___boxed), 7, 4);
lean_closure_set(v___f_4659_, 0, v_val_4651_);
lean_closure_set(v___f_4659_, 1, v___f_4652_);
lean_closure_set(v___f_4659_, 2, v_param_4656_);
lean_closure_set(v___f_4659_, 3, v___x_4653_);
v___f_4660_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9___boxed), 6, 3);
lean_closure_set(v___f_4660_, 0, v___f_4659_);
lean_closure_set(v___f_4660_, 1, v___f_4654_);
lean_closure_set(v___f_4660_, 2, v___x_4653_);
v___x_4661_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(v_val_4655_, v___f_4660_, v___y_4657_);
return v___x_4661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10___boxed(lean_object* v_val_4662_, lean_object* v___f_4663_, lean_object* v___x_4664_, lean_object* v___f_4665_, lean_object* v_val_4666_, lean_object* v_param_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_){
_start:
{
lean_object* v_res_4670_; 
v_res_4670_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10(v_val_4662_, v___f_4663_, v___x_4664_, v___f_4665_, v_val_4666_, v_param_4667_, v___y_4668_);
lean_dec_ref(v___y_4668_);
return v_res_4670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3(lean_object* v___x_4671_, lean_object* v_x_4672_){
_start:
{
return v___x_4671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3___boxed(lean_object* v___x_4673_, lean_object* v_x_4674_){
_start:
{
lean_object* v_res_4675_; 
v_res_4675_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3(v___x_4673_, v_x_4674_);
lean_dec_ref(v_x_4674_);
return v_res_4675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__0(lean_object* v_j_4676_){
_start:
{
lean_object* v___x_4677_; 
v___x_4677_ = l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12(v_j_4676_);
if (lean_obj_tag(v___x_4677_) == 0)
{
lean_object* v_a_4678_; lean_object* v___x_4680_; uint8_t v_isShared_4681_; uint8_t v_isSharedCheck_4685_; 
v_a_4678_ = lean_ctor_get(v___x_4677_, 0);
v_isSharedCheck_4685_ = !lean_is_exclusive(v___x_4677_);
if (v_isSharedCheck_4685_ == 0)
{
v___x_4680_ = v___x_4677_;
v_isShared_4681_ = v_isSharedCheck_4685_;
goto v_resetjp_4679_;
}
else
{
lean_inc(v_a_4678_);
lean_dec(v___x_4677_);
v___x_4680_ = lean_box(0);
v_isShared_4681_ = v_isSharedCheck_4685_;
goto v_resetjp_4679_;
}
v_resetjp_4679_:
{
lean_object* v___x_4683_; 
if (v_isShared_4681_ == 0)
{
v___x_4683_ = v___x_4680_;
goto v_reusejp_4682_;
}
else
{
lean_object* v_reuseFailAlloc_4684_; 
v_reuseFailAlloc_4684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4684_, 0, v_a_4678_);
v___x_4683_ = v_reuseFailAlloc_4684_;
goto v_reusejp_4682_;
}
v_reusejp_4682_:
{
return v___x_4683_;
}
}
}
else
{
lean_object* v_a_4686_; lean_object* v___x_4688_; uint8_t v_isShared_4689_; uint8_t v_isSharedCheck_4693_; 
v_a_4686_ = lean_ctor_get(v___x_4677_, 0);
v_isSharedCheck_4693_ = !lean_is_exclusive(v___x_4677_);
if (v_isSharedCheck_4693_ == 0)
{
v___x_4688_ = v___x_4677_;
v_isShared_4689_ = v_isSharedCheck_4693_;
goto v_resetjp_4687_;
}
else
{
lean_inc(v_a_4686_);
lean_dec(v___x_4677_);
v___x_4688_ = lean_box(0);
v_isShared_4689_ = v_isSharedCheck_4693_;
goto v_resetjp_4687_;
}
v_resetjp_4687_:
{
lean_object* v___x_4691_; 
if (v_isShared_4689_ == 0)
{
v___x_4691_ = v___x_4688_;
goto v_reusejp_4690_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v_a_4686_);
v___x_4691_ = v_reuseFailAlloc_4692_;
goto v_reusejp_4690_;
}
v_reusejp_4690_:
{
return v___x_4691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5(lean_object* v_val_4694_, lean_object* v___f_4695_, lean_object* v_param_4696_, lean_object* v_x_4697_, lean_object* v___y_4698_){
_start:
{
lean_object* v___x_4700_; lean_object* v___x_4701_; 
v___x_4700_ = lean_st_ref_get(v_val_4694_);
lean_inc_ref(v___y_4698_);
v___x_4701_ = lean_apply_4(v___f_4695_, v_param_4696_, v___x_4700_, v___y_4698_, lean_box(0));
if (lean_obj_tag(v___x_4701_) == 0)
{
lean_object* v_a_4702_; lean_object* v___x_4704_; uint8_t v_isShared_4705_; uint8_t v_isSharedCheck_4712_; 
v_a_4702_ = lean_ctor_get(v___x_4701_, 0);
v_isSharedCheck_4712_ = !lean_is_exclusive(v___x_4701_);
if (v_isSharedCheck_4712_ == 0)
{
v___x_4704_ = v___x_4701_;
v_isShared_4705_ = v_isSharedCheck_4712_;
goto v_resetjp_4703_;
}
else
{
lean_inc(v_a_4702_);
lean_dec(v___x_4701_);
v___x_4704_ = lean_box(0);
v_isShared_4705_ = v_isSharedCheck_4712_;
goto v_resetjp_4703_;
}
v_resetjp_4703_:
{
lean_object* v_fst_4706_; lean_object* v_snd_4707_; lean_object* v___x_4708_; lean_object* v___x_4710_; 
v_fst_4706_ = lean_ctor_get(v_a_4702_, 0);
lean_inc(v_fst_4706_);
v_snd_4707_ = lean_ctor_get(v_a_4702_, 1);
lean_inc(v_snd_4707_);
lean_dec(v_a_4702_);
v___x_4708_ = lean_st_ref_swap(v_val_4694_, v_snd_4707_);
lean_dec(v___x_4708_);
if (v_isShared_4705_ == 0)
{
lean_ctor_set(v___x_4704_, 0, v_fst_4706_);
v___x_4710_ = v___x_4704_;
goto v_reusejp_4709_;
}
else
{
lean_object* v_reuseFailAlloc_4711_; 
v_reuseFailAlloc_4711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4711_, 0, v_fst_4706_);
v___x_4710_ = v_reuseFailAlloc_4711_;
goto v_reusejp_4709_;
}
v_reusejp_4709_:
{
return v___x_4710_;
}
}
}
else
{
lean_object* v_a_4713_; lean_object* v___x_4715_; uint8_t v_isShared_4716_; uint8_t v_isSharedCheck_4720_; 
v_a_4713_ = lean_ctor_get(v___x_4701_, 0);
v_isSharedCheck_4720_ = !lean_is_exclusive(v___x_4701_);
if (v_isSharedCheck_4720_ == 0)
{
v___x_4715_ = v___x_4701_;
v_isShared_4716_ = v_isSharedCheck_4720_;
goto v_resetjp_4714_;
}
else
{
lean_inc(v_a_4713_);
lean_dec(v___x_4701_);
v___x_4715_ = lean_box(0);
v_isShared_4716_ = v_isSharedCheck_4720_;
goto v_resetjp_4714_;
}
v_resetjp_4714_:
{
lean_object* v___x_4718_; 
if (v_isShared_4716_ == 0)
{
v___x_4718_ = v___x_4715_;
goto v_reusejp_4717_;
}
else
{
lean_object* v_reuseFailAlloc_4719_; 
v_reuseFailAlloc_4719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4719_, 0, v_a_4713_);
v___x_4718_ = v_reuseFailAlloc_4719_;
goto v_reusejp_4717_;
}
v_reusejp_4717_:
{
return v___x_4718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5___boxed(lean_object* v_val_4721_, lean_object* v___f_4722_, lean_object* v_param_4723_, lean_object* v_x_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_){
_start:
{
lean_object* v_res_4727_; 
v_res_4727_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5(v_val_4721_, v___f_4722_, v_param_4723_, v_x_4724_, v___y_4725_);
lean_dec_ref(v___y_4725_);
lean_dec(v_val_4721_);
return v_res_4727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6(lean_object* v___f_4728_, lean_object* v___f_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_){
_start:
{
lean_object* v___x_4733_; lean_object* v___x_4734_; 
v___x_4733_ = lean_st_ref_get(v___y_4730_);
v___x_4734_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_4733_, v___f_4728_, v___y_4731_);
if (lean_obj_tag(v___x_4734_) == 0)
{
lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4744_; 
v_a_4735_ = lean_ctor_get(v___x_4734_, 0);
v_isSharedCheck_4744_ = !lean_is_exclusive(v___x_4734_);
if (v_isSharedCheck_4744_ == 0)
{
v___x_4737_ = v___x_4734_;
v_isShared_4738_ = v_isSharedCheck_4744_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v___x_4734_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4744_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4742_; 
lean_inc(v_a_4735_);
v___x_4739_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_4729_, v_a_4735_);
v___x_4740_ = lean_st_ref_swap(v___y_4730_, v___x_4739_);
lean_dec(v___x_4740_);
if (v_isShared_4738_ == 0)
{
v___x_4742_ = v___x_4737_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v_a_4735_);
v___x_4742_ = v_reuseFailAlloc_4743_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
return v___x_4742_;
}
}
}
else
{
lean_dec_ref(v___f_4729_);
return v___x_4734_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6___boxed(lean_object* v___f_4745_, lean_object* v___f_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_){
_start:
{
lean_object* v_res_4750_; 
v_res_4750_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6(v___f_4745_, v___f_4746_, v___y_4747_, v___y_4748_);
lean_dec_ref(v___y_4748_);
lean_dec(v___y_4747_);
return v_res_4750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7(lean_object* v_val_4751_, lean_object* v___f_4752_, lean_object* v___f_4753_, lean_object* v_val_4754_, lean_object* v_param_4755_, lean_object* v___y_4756_){
_start:
{
lean_object* v___f_4758_; lean_object* v___f_4759_; lean_object* v___x_4760_; 
v___f_4758_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5___boxed), 6, 3);
lean_closure_set(v___f_4758_, 0, v_val_4751_);
lean_closure_set(v___f_4758_, 1, v___f_4752_);
lean_closure_set(v___f_4758_, 2, v_param_4755_);
v___f_4759_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6___boxed), 5, 2);
lean_closure_set(v___f_4759_, 0, v___f_4758_);
lean_closure_set(v___f_4759_, 1, v___f_4753_);
v___x_4760_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(v_val_4754_, v___f_4759_, v___y_4756_);
return v___x_4760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7___boxed(lean_object* v_val_4761_, lean_object* v___f_4762_, lean_object* v___f_4763_, lean_object* v_val_4764_, lean_object* v_param_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_){
_start:
{
lean_object* v_res_4768_; 
v_res_4768_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7(v_val_4761_, v___f_4762_, v___f_4763_, v_val_4764_, v_param_4765_, v___y_4766_);
lean_dec_ref(v___y_4766_);
return v_res_4768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2(lean_object* v_method_4769_, lean_object* v_inst_4770_, lean_object* v_onDidChange_4771_, lean_object* v_param_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_){
_start:
{
lean_object* v___x_4776_; 
v___x_4776_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(v_method_4769_, v___y_4773_, lean_box(0), v_inst_4770_, v___y_4774_);
if (lean_obj_tag(v___x_4776_) == 0)
{
lean_object* v_a_4777_; lean_object* v___x_4778_; 
v_a_4777_ = lean_ctor_get(v___x_4776_, 0);
lean_inc(v_a_4777_);
lean_dec_ref_known(v___x_4776_, 1);
lean_inc_ref(v___y_4774_);
v___x_4778_ = lean_apply_4(v_onDidChange_4771_, v_param_4772_, v_a_4777_, v___y_4774_, lean_box(0));
if (lean_obj_tag(v___x_4778_) == 0)
{
lean_object* v_a_4779_; lean_object* v___x_4781_; uint8_t v_isShared_4782_; uint8_t v_isSharedCheck_4797_; 
v_a_4779_ = lean_ctor_get(v___x_4778_, 0);
v_isSharedCheck_4797_ = !lean_is_exclusive(v___x_4778_);
if (v_isSharedCheck_4797_ == 0)
{
v___x_4781_ = v___x_4778_;
v_isShared_4782_ = v_isSharedCheck_4797_;
goto v_resetjp_4780_;
}
else
{
lean_inc(v_a_4779_);
lean_dec(v___x_4778_);
v___x_4781_ = lean_box(0);
v_isShared_4782_ = v_isSharedCheck_4797_;
goto v_resetjp_4780_;
}
v_resetjp_4780_:
{
lean_object* v_snd_4783_; lean_object* v___x_4785_; uint8_t v_isShared_4786_; uint8_t v_isSharedCheck_4795_; 
v_snd_4783_ = lean_ctor_get(v_a_4779_, 1);
v_isSharedCheck_4795_ = !lean_is_exclusive(v_a_4779_);
if (v_isSharedCheck_4795_ == 0)
{
lean_object* v_unused_4796_; 
v_unused_4796_ = lean_ctor_get(v_a_4779_, 0);
lean_dec(v_unused_4796_);
v___x_4785_ = v_a_4779_;
v_isShared_4786_ = v_isSharedCheck_4795_;
goto v_resetjp_4784_;
}
else
{
lean_inc(v_snd_4783_);
lean_dec(v_a_4779_);
v___x_4785_ = lean_box(0);
v_isShared_4786_ = v_isSharedCheck_4795_;
goto v_resetjp_4784_;
}
v_resetjp_4784_:
{
lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4790_; 
v___x_4787_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_4770_, v_snd_4783_);
lean_dec(v_snd_4783_);
v___x_4788_ = lean_box(0);
if (v_isShared_4786_ == 0)
{
lean_ctor_set(v___x_4785_, 1, v___x_4787_);
lean_ctor_set(v___x_4785_, 0, v___x_4788_);
v___x_4790_ = v___x_4785_;
goto v_reusejp_4789_;
}
else
{
lean_object* v_reuseFailAlloc_4794_; 
v_reuseFailAlloc_4794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4794_, 0, v___x_4788_);
lean_ctor_set(v_reuseFailAlloc_4794_, 1, v___x_4787_);
v___x_4790_ = v_reuseFailAlloc_4794_;
goto v_reusejp_4789_;
}
v_reusejp_4789_:
{
lean_object* v___x_4792_; 
if (v_isShared_4782_ == 0)
{
lean_ctor_set(v___x_4781_, 0, v___x_4790_);
v___x_4792_ = v___x_4781_;
goto v_reusejp_4791_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v___x_4790_);
v___x_4792_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4791_;
}
v_reusejp_4791_:
{
return v___x_4792_;
}
}
}
}
}
else
{
lean_object* v_a_4798_; lean_object* v___x_4800_; uint8_t v_isShared_4801_; uint8_t v_isSharedCheck_4805_; 
v_a_4798_ = lean_ctor_get(v___x_4778_, 0);
v_isSharedCheck_4805_ = !lean_is_exclusive(v___x_4778_);
if (v_isSharedCheck_4805_ == 0)
{
v___x_4800_ = v___x_4778_;
v_isShared_4801_ = v_isSharedCheck_4805_;
goto v_resetjp_4799_;
}
else
{
lean_inc(v_a_4798_);
lean_dec(v___x_4778_);
v___x_4800_ = lean_box(0);
v_isShared_4801_ = v_isSharedCheck_4805_;
goto v_resetjp_4799_;
}
v_resetjp_4799_:
{
lean_object* v___x_4803_; 
if (v_isShared_4801_ == 0)
{
v___x_4803_ = v___x_4800_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v_a_4798_);
v___x_4803_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
return v___x_4803_;
}
}
}
}
else
{
lean_object* v_a_4806_; lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4813_; 
lean_dec_ref(v_param_4772_);
lean_dec_ref(v_onDidChange_4771_);
v_a_4806_ = lean_ctor_get(v___x_4776_, 0);
v_isSharedCheck_4813_ = !lean_is_exclusive(v___x_4776_);
if (v_isSharedCheck_4813_ == 0)
{
v___x_4808_ = v___x_4776_;
v_isShared_4809_ = v_isSharedCheck_4813_;
goto v_resetjp_4807_;
}
else
{
lean_inc(v_a_4806_);
lean_dec(v___x_4776_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4813_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
lean_object* v___x_4811_; 
if (v_isShared_4809_ == 0)
{
v___x_4811_ = v___x_4808_;
goto v_reusejp_4810_;
}
else
{
lean_object* v_reuseFailAlloc_4812_; 
v_reuseFailAlloc_4812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4812_, 0, v_a_4806_);
v___x_4811_ = v_reuseFailAlloc_4812_;
goto v_reusejp_4810_;
}
v_reusejp_4810_:
{
return v___x_4811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2___boxed(lean_object* v_method_4814_, lean_object* v_inst_4815_, lean_object* v_onDidChange_4816_, lean_object* v_param_4817_, lean_object* v___y_4818_, lean_object* v___y_4819_, lean_object* v___y_4820_){
_start:
{
lean_object* v_res_4821_; 
v_res_4821_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2(v_method_4814_, v_inst_4815_, v_onDidChange_4816_, v_param_4817_, v___y_4818_, v___y_4819_);
lean_dec_ref(v___y_4819_);
lean_dec(v___y_4818_);
lean_dec(v_inst_4815_);
lean_dec_ref(v_method_4814_);
return v_res_4821_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_4829_; lean_object* v___x_4830_; 
v___x_4829_ = lean_box(0);
v___x_4830_ = lean_task_pure(v___x_4829_);
return v___x_4830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg(lean_object* v_method_4831_, lean_object* v_completeness_4832_, lean_object* v_inst_4833_, lean_object* v_initState_4834_, lean_object* v_handler_4835_, lean_object* v_onDidChange_4836_){
_start:
{
lean_object* v___f_4838_; lean_object* v___f_4839_; lean_object* v___f_4840_; uint8_t v___x_4841_; 
v___f_4838_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__0));
lean_inc_n(v_inst_4833_, 2);
lean_inc_ref_n(v_method_4831_, 2);
v___f_4839_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1___boxed), 7, 3);
lean_closure_set(v___f_4839_, 0, v_method_4831_);
lean_closure_set(v___f_4839_, 1, v_inst_4833_);
lean_closure_set(v___f_4839_, 2, v_handler_4835_);
v___f_4840_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2___boxed), 7, 3);
lean_closure_set(v___f_4840_, 0, v_method_4831_);
lean_closure_set(v___f_4840_, 1, v_inst_4833_);
lean_closure_set(v___f_4840_, 2, v_onDidChange_4836_);
v___x_4841_ = l_Lean_initializing();
if (v___x_4841_ == 0)
{
lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; 
lean_dec_ref(v___f_4840_);
lean_dec_ref(v___f_4839_);
lean_dec(v_inst_4833_);
lean_dec(v_completeness_4832_);
v___x_4842_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__1));
v___x_4843_ = lean_string_append(v___x_4842_, v_method_4831_);
lean_dec_ref(v_method_4831_);
v___x_4844_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__2));
v___x_4845_ = lean_string_append(v___x_4843_, v___x_4844_);
v___x_4846_ = lean_mk_io_user_error(v___x_4845_);
v___x_4847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4847_, 0, v___x_4846_);
return v___x_4847_;
}
else
{
lean_object* v___x_4848_; lean_object* v___f_4849_; lean_object* v___f_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___f_4855_; lean_object* v___f_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; 
v___x_4848_ = lean_box(0);
v___f_4849_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__3));
v___f_4850_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__4));
v___x_4851_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5);
v___x_4852_ = l_Std_Mutex_new___redArg(v___x_4851_);
v___x_4853_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_4833_, v_initState_4834_);
lean_dec(v_inst_4833_);
lean_inc(v___x_4853_);
v___x_4854_ = lean_st_mk_ref(v___x_4853_);
lean_inc_ref_n(v___x_4852_, 2);
lean_inc_ref(v___f_4839_);
lean_inc_n(v___x_4854_, 2);
v___f_4855_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7___boxed), 7, 4);
lean_closure_set(v___f_4855_, 0, v___x_4854_);
lean_closure_set(v___f_4855_, 1, v___f_4839_);
lean_closure_set(v___f_4855_, 2, v___f_4849_);
lean_closure_set(v___f_4855_, 3, v___x_4852_);
lean_inc_ref(v___f_4840_);
v___f_4856_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10___boxed), 8, 5);
lean_closure_set(v___f_4856_, 0, v___x_4854_);
lean_closure_set(v___f_4856_, 1, v___f_4840_);
lean_closure_set(v___f_4856_, 2, v___x_4848_);
lean_closure_set(v___f_4856_, 3, v___f_4850_);
lean_closure_set(v___f_4856_, 4, v___x_4852_);
v___x_4857_ = l_Lean_Server_statefulRequestHandlers;
v___x_4858_ = lean_st_ref_take(v___x_4857_);
v___x_4859_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4859_, 0, v___f_4838_);
lean_ctor_set(v___x_4859_, 1, v___f_4839_);
lean_ctor_set(v___x_4859_, 2, v___f_4855_);
lean_ctor_set(v___x_4859_, 3, v___f_4840_);
lean_ctor_set(v___x_4859_, 4, v___f_4856_);
lean_ctor_set(v___x_4859_, 5, v___x_4852_);
lean_ctor_set(v___x_4859_, 6, v___x_4853_);
lean_ctor_set(v___x_4859_, 7, v___x_4854_);
lean_ctor_set(v___x_4859_, 8, v_completeness_4832_);
v___x_4860_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3___redArg(v___x_4858_, v_method_4831_, v___x_4859_);
v___x_4861_ = lean_st_ref_put(v___x_4857_, v___x_4860_);
v___x_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4862_, 0, v___x_4861_);
return v___x_4862_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___boxed(lean_object* v_method_4863_, lean_object* v_completeness_4864_, lean_object* v_inst_4865_, lean_object* v_initState_4866_, lean_object* v_handler_4867_, lean_object* v_onDidChange_4868_, lean_object* v_a_4869_){
_start:
{
lean_object* v_res_4870_; 
v_res_4870_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg(v_method_4863_, v_completeness_4864_, v_inst_4865_, v_initState_4866_, v_handler_4867_, v_onDidChange_4868_);
lean_dec(v_initState_4866_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg(lean_object* v_method_4872_, lean_object* v_completeness_4873_, lean_object* v_inst_4874_, lean_object* v_initState_4875_, lean_object* v_handler_4876_, lean_object* v_onDidChange_4877_){
_start:
{
lean_object* v___x_4879_; lean_object* v___x_4880_; uint8_t v___x_4881_; 
v___x_4879_ = l_Lean_Server_requestHandlers;
v___x_4880_ = lean_st_ref_get(v___x_4879_);
v___x_4881_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(v___x_4880_, v_method_4872_);
lean_dec(v___x_4880_);
if (v___x_4881_ == 0)
{
lean_object* v___x_4882_; 
v___x_4882_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg(v_method_4872_, v_completeness_4873_, v_inst_4874_, v_initState_4875_, v_handler_4876_, v_onDidChange_4877_);
return v___x_4882_;
}
else
{
lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; 
lean_dec_ref(v_onDidChange_4877_);
lean_dec_ref(v_handler_4876_);
lean_dec(v_inst_4874_);
lean_dec(v_completeness_4873_);
v___x_4883_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__1));
v___x_4884_ = lean_string_append(v___x_4883_, v_method_4872_);
lean_dec_ref(v_method_4872_);
v___x_4885_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___closed__0));
v___x_4886_ = lean_string_append(v___x_4884_, v___x_4885_);
v___x_4887_ = lean_mk_io_user_error(v___x_4886_);
v___x_4888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4888_, 0, v___x_4887_);
return v___x_4888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___boxed(lean_object* v_method_4889_, lean_object* v_completeness_4890_, lean_object* v_inst_4891_, lean_object* v_initState_4892_, lean_object* v_handler_4893_, lean_object* v_onDidChange_4894_, lean_object* v_a_4895_){
_start:
{
lean_object* v_res_4896_; 
v_res_4896_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg(v_method_4889_, v_completeness_4890_, v_inst_4891_, v_initState_4892_, v_handler_4893_, v_onDidChange_4894_);
lean_dec(v_initState_4892_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg(lean_object* v_method_4897_, lean_object* v_refreshMethod_4898_, lean_object* v_refreshIntervalMs_4899_, lean_object* v_inst_4900_, lean_object* v_initState_4901_, lean_object* v_handler_4902_, lean_object* v_onDidChange_4903_){
_start:
{
lean_object* v___x_4905_; lean_object* v___x_4906_; 
v___x_4905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4905_, 0, v_refreshMethod_4898_);
lean_ctor_set(v___x_4905_, 1, v_refreshIntervalMs_4899_);
v___x_4906_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg(v_method_4897_, v___x_4905_, v_inst_4900_, v_initState_4901_, v_handler_4902_, v_onDidChange_4903_);
return v___x_4906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_method_4907_, lean_object* v_refreshMethod_4908_, lean_object* v_refreshIntervalMs_4909_, lean_object* v_inst_4910_, lean_object* v_initState_4911_, lean_object* v_handler_4912_, lean_object* v_onDidChange_4913_, lean_object* v_a_4914_){
_start:
{
lean_object* v_res_4915_; 
v_res_4915_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg(v_method_4907_, v_refreshMethod_4908_, v_refreshIntervalMs_4909_, v_inst_4910_, v_initState_4911_, v_handler_4912_, v_onDidChange_4913_);
lean_dec(v_initState_4911_);
return v_res_4915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_params_4916_){
_start:
{
lean_object* v___x_4917_; 
lean_inc(v_params_4916_);
v___x_4917_ = l_Lean_Lsp_instFromJsonSemanticTokensRangeParams_fromJson(v_params_4916_);
if (lean_obj_tag(v___x_4917_) == 0)
{
lean_object* v_a_4918_; lean_object* v___x_4920_; uint8_t v_isShared_4921_; uint8_t v_isSharedCheck_4933_; 
v_a_4918_ = lean_ctor_get(v___x_4917_, 0);
v_isSharedCheck_4933_ = !lean_is_exclusive(v___x_4917_);
if (v_isSharedCheck_4933_ == 0)
{
v___x_4920_ = v___x_4917_;
v_isShared_4921_ = v_isSharedCheck_4933_;
goto v_resetjp_4919_;
}
else
{
lean_inc(v_a_4918_);
lean_dec(v___x_4917_);
v___x_4920_ = lean_box(0);
v_isShared_4921_ = v_isSharedCheck_4933_;
goto v_resetjp_4919_;
}
v_resetjp_4919_:
{
uint8_t v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4931_; 
v___x_4922_ = 3;
v___x_4923_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12___closed__0));
v___x_4924_ = l_Lean_Json_compress(v_params_4916_);
v___x_4925_ = lean_string_append(v___x_4923_, v___x_4924_);
lean_dec_ref(v___x_4924_);
v___x_4926_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__2));
v___x_4927_ = lean_string_append(v___x_4925_, v___x_4926_);
v___x_4928_ = lean_string_append(v___x_4927_, v_a_4918_);
lean_dec(v_a_4918_);
v___x_4929_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4929_, 0, v___x_4928_);
lean_ctor_set_uint8(v___x_4929_, sizeof(void*)*1, v___x_4922_);
if (v_isShared_4921_ == 0)
{
lean_ctor_set(v___x_4920_, 0, v___x_4929_);
v___x_4931_ = v___x_4920_;
goto v_reusejp_4930_;
}
else
{
lean_object* v_reuseFailAlloc_4932_; 
v_reuseFailAlloc_4932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4932_, 0, v___x_4929_);
v___x_4931_ = v_reuseFailAlloc_4932_;
goto v_reusejp_4930_;
}
v_reusejp_4930_:
{
return v___x_4931_;
}
}
}
else
{
lean_object* v_a_4934_; lean_object* v___x_4936_; uint8_t v_isShared_4937_; uint8_t v_isSharedCheck_4941_; 
lean_dec(v_params_4916_);
v_a_4934_ = lean_ctor_get(v___x_4917_, 0);
v_isSharedCheck_4941_ = !lean_is_exclusive(v___x_4917_);
if (v_isSharedCheck_4941_ == 0)
{
v___x_4936_ = v___x_4917_;
v_isShared_4937_ = v_isSharedCheck_4941_;
goto v_resetjp_4935_;
}
else
{
lean_inc(v_a_4934_);
lean_dec(v___x_4917_);
v___x_4936_ = lean_box(0);
v_isShared_4937_ = v_isSharedCheck_4941_;
goto v_resetjp_4935_;
}
v_resetjp_4935_:
{
lean_object* v___x_4939_; 
if (v_isShared_4937_ == 0)
{
v___x_4939_ = v___x_4936_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4940_; 
v_reuseFailAlloc_4940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4940_, 0, v_a_4934_);
v___x_4939_ = v_reuseFailAlloc_4940_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
return v___x_4939_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__0(lean_object* v_j_4942_){
_start:
{
lean_object* v___x_4943_; 
v___x_4943_ = l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__0(v_j_4942_);
if (lean_obj_tag(v___x_4943_) == 0)
{
lean_object* v_a_4944_; lean_object* v___x_4946_; uint8_t v_isShared_4947_; uint8_t v_isSharedCheck_4951_; 
v_a_4944_ = lean_ctor_get(v___x_4943_, 0);
v_isSharedCheck_4951_ = !lean_is_exclusive(v___x_4943_);
if (v_isSharedCheck_4951_ == 0)
{
v___x_4946_ = v___x_4943_;
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
else
{
lean_inc(v_a_4944_);
lean_dec(v___x_4943_);
v___x_4946_ = lean_box(0);
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
v_resetjp_4945_:
{
lean_object* v___x_4949_; 
if (v_isShared_4947_ == 0)
{
v___x_4949_ = v___x_4946_;
goto v_reusejp_4948_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v_a_4944_);
v___x_4949_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4948_;
}
v_reusejp_4948_:
{
return v___x_4949_;
}
}
}
else
{
lean_object* v_a_4952_; lean_object* v___x_4954_; uint8_t v_isShared_4955_; uint8_t v_isSharedCheck_4960_; 
v_a_4952_ = lean_ctor_get(v___x_4943_, 0);
v_isSharedCheck_4960_ = !lean_is_exclusive(v___x_4943_);
if (v_isSharedCheck_4960_ == 0)
{
v___x_4954_ = v___x_4943_;
v_isShared_4955_ = v_isSharedCheck_4960_;
goto v_resetjp_4953_;
}
else
{
lean_inc(v_a_4952_);
lean_dec(v___x_4943_);
v___x_4954_ = lean_box(0);
v_isShared_4955_ = v_isSharedCheck_4960_;
goto v_resetjp_4953_;
}
v_resetjp_4953_:
{
lean_object* v_textDocument_4956_; lean_object* v___x_4958_; 
v_textDocument_4956_ = lean_ctor_get(v_a_4952_, 0);
lean_inc_ref(v_textDocument_4956_);
lean_dec(v_a_4952_);
if (v_isShared_4955_ == 0)
{
lean_ctor_set(v___x_4954_, 0, v_textDocument_4956_);
v___x_4958_ = v___x_4954_;
goto v_reusejp_4957_;
}
else
{
lean_object* v_reuseFailAlloc_4959_; 
v_reuseFailAlloc_4959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4959_, 0, v_textDocument_4956_);
v___x_4958_ = v_reuseFailAlloc_4959_;
goto v_reusejp_4957_;
}
v_reusejp_4957_:
{
return v___x_4958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1(lean_object* v_serialize_x3f_4961_, uint8_t v_val_4962_, lean_object* v___y_4963_){
_start:
{
if (lean_obj_tag(v___y_4963_) == 0)
{
lean_object* v_a_4964_; lean_object* v___x_4966_; uint8_t v_isShared_4967_; uint8_t v_isSharedCheck_4971_; 
lean_dec(v_serialize_x3f_4961_);
v_a_4964_ = lean_ctor_get(v___y_4963_, 0);
v_isSharedCheck_4971_ = !lean_is_exclusive(v___y_4963_);
if (v_isSharedCheck_4971_ == 0)
{
v___x_4966_ = v___y_4963_;
v_isShared_4967_ = v_isSharedCheck_4971_;
goto v_resetjp_4965_;
}
else
{
lean_inc(v_a_4964_);
lean_dec(v___y_4963_);
v___x_4966_ = lean_box(0);
v_isShared_4967_ = v_isSharedCheck_4971_;
goto v_resetjp_4965_;
}
v_resetjp_4965_:
{
lean_object* v___x_4969_; 
if (v_isShared_4967_ == 0)
{
v___x_4969_ = v___x_4966_;
goto v_reusejp_4968_;
}
else
{
lean_object* v_reuseFailAlloc_4970_; 
v_reuseFailAlloc_4970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4970_, 0, v_a_4964_);
v___x_4969_ = v_reuseFailAlloc_4970_;
goto v_reusejp_4968_;
}
v_reusejp_4968_:
{
return v___x_4969_;
}
}
}
else
{
if (lean_obj_tag(v_serialize_x3f_4961_) == 1)
{
lean_object* v_a_4972_; lean_object* v___x_4974_; uint8_t v_isShared_4975_; uint8_t v_isSharedCheck_4983_; 
v_a_4972_ = lean_ctor_get(v___y_4963_, 0);
v_isSharedCheck_4983_ = !lean_is_exclusive(v___y_4963_);
if (v_isSharedCheck_4983_ == 0)
{
v___x_4974_ = v___y_4963_;
v_isShared_4975_ = v_isSharedCheck_4983_;
goto v_resetjp_4973_;
}
else
{
lean_inc(v_a_4972_);
lean_dec(v___y_4963_);
v___x_4974_ = lean_box(0);
v_isShared_4975_ = v_isSharedCheck_4983_;
goto v_resetjp_4973_;
}
v_resetjp_4973_:
{
lean_object* v_val_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4981_; 
v_val_4976_ = lean_ctor_get(v_serialize_x3f_4961_, 0);
lean_inc(v_val_4976_);
lean_dec_ref_known(v_serialize_x3f_4961_, 1);
v___x_4977_ = lean_box(0);
v___x_4978_ = lean_apply_1(v_val_4976_, v_a_4972_);
v___x_4979_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4979_, 0, v___x_4977_);
lean_ctor_set(v___x_4979_, 1, v___x_4978_);
lean_ctor_set_uint8(v___x_4979_, sizeof(void*)*2, v_val_4962_);
if (v_isShared_4975_ == 0)
{
lean_ctor_set(v___x_4974_, 0, v___x_4979_);
v___x_4981_ = v___x_4974_;
goto v_reusejp_4980_;
}
else
{
lean_object* v_reuseFailAlloc_4982_; 
v_reuseFailAlloc_4982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4982_, 0, v___x_4979_);
v___x_4981_ = v_reuseFailAlloc_4982_;
goto v_reusejp_4980_;
}
v_reusejp_4980_:
{
return v___x_4981_;
}
}
}
else
{
lean_object* v_a_4984_; lean_object* v___x_4986_; uint8_t v_isShared_4987_; uint8_t v_isSharedCheck_4995_; 
lean_dec(v_serialize_x3f_4961_);
v_a_4984_ = lean_ctor_get(v___y_4963_, 0);
v_isSharedCheck_4995_ = !lean_is_exclusive(v___y_4963_);
if (v_isSharedCheck_4995_ == 0)
{
v___x_4986_ = v___y_4963_;
v_isShared_4987_ = v_isSharedCheck_4995_;
goto v_resetjp_4985_;
}
else
{
lean_inc(v_a_4984_);
lean_dec(v___y_4963_);
v___x_4986_ = lean_box(0);
v_isShared_4987_ = v_isSharedCheck_4995_;
goto v_resetjp_4985_;
}
v_resetjp_4985_:
{
lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4993_; 
v___x_4988_ = l_Lean_Lsp_instToJsonSemanticTokens_toJson(v_a_4984_);
lean_inc(v___x_4988_);
v___x_4989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4989_, 0, v___x_4988_);
v___x_4990_ = l_Lean_Json_compress(v___x_4988_);
v___x_4991_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4991_, 0, v___x_4989_);
lean_ctor_set(v___x_4991_, 1, v___x_4990_);
lean_ctor_set_uint8(v___x_4991_, sizeof(void*)*2, v_val_4962_);
if (v_isShared_4987_ == 0)
{
lean_ctor_set(v___x_4986_, 0, v___x_4991_);
v___x_4993_ = v___x_4986_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_4994_; 
v_reuseFailAlloc_4994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4994_, 0, v___x_4991_);
v___x_4993_ = v_reuseFailAlloc_4994_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
return v___x_4993_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object* v_serialize_x3f_4996_, lean_object* v_val_4997_, lean_object* v___y_4998_){
_start:
{
uint8_t v_val_3666__boxed_4999_; lean_object* v_res_5000_; 
v_val_3666__boxed_4999_ = lean_unbox(v_val_4997_);
v_res_5000_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1(v_serialize_x3f_4996_, v_val_3666__boxed_4999_, v___y_4998_);
return v_res_5000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_params_5001_){
_start:
{
lean_object* v___x_5003_; 
v___x_5003_ = l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__0(v_params_5001_);
if (lean_obj_tag(v___x_5003_) == 0)
{
lean_object* v_a_5004_; lean_object* v___x_5006_; uint8_t v_isShared_5007_; uint8_t v_isSharedCheck_5011_; 
v_a_5004_ = lean_ctor_get(v___x_5003_, 0);
v_isSharedCheck_5011_ = !lean_is_exclusive(v___x_5003_);
if (v_isSharedCheck_5011_ == 0)
{
v___x_5006_ = v___x_5003_;
v_isShared_5007_ = v_isSharedCheck_5011_;
goto v_resetjp_5005_;
}
else
{
lean_inc(v_a_5004_);
lean_dec(v___x_5003_);
v___x_5006_ = lean_box(0);
v_isShared_5007_ = v_isSharedCheck_5011_;
goto v_resetjp_5005_;
}
v_resetjp_5005_:
{
lean_object* v___x_5009_; 
if (v_isShared_5007_ == 0)
{
lean_ctor_set_tag(v___x_5006_, 1);
v___x_5009_ = v___x_5006_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5010_; 
v_reuseFailAlloc_5010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5010_, 0, v_a_5004_);
v___x_5009_ = v_reuseFailAlloc_5010_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
return v___x_5009_;
}
}
}
else
{
lean_object* v_a_5012_; lean_object* v___x_5014_; uint8_t v_isShared_5015_; uint8_t v_isSharedCheck_5019_; 
v_a_5012_ = lean_ctor_get(v___x_5003_, 0);
v_isSharedCheck_5019_ = !lean_is_exclusive(v___x_5003_);
if (v_isSharedCheck_5019_ == 0)
{
v___x_5014_ = v___x_5003_;
v_isShared_5015_ = v_isSharedCheck_5019_;
goto v_resetjp_5013_;
}
else
{
lean_inc(v_a_5012_);
lean_dec(v___x_5003_);
v___x_5014_ = lean_box(0);
v_isShared_5015_ = v_isSharedCheck_5019_;
goto v_resetjp_5013_;
}
v_resetjp_5013_:
{
lean_object* v___x_5017_; 
if (v_isShared_5015_ == 0)
{
lean_ctor_set_tag(v___x_5014_, 0);
v___x_5017_ = v___x_5014_;
goto v_reusejp_5016_;
}
else
{
lean_object* v_reuseFailAlloc_5018_; 
v_reuseFailAlloc_5018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5018_, 0, v_a_5012_);
v___x_5017_ = v_reuseFailAlloc_5018_;
goto v_reusejp_5016_;
}
v_reusejp_5016_:
{
return v___x_5017_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object* v_params_5020_, lean_object* v_a_5021_){
_start:
{
lean_object* v_res_5022_; 
v_res_5022_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg(v_params_5020_);
return v_res_5022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2(lean_object* v_handler_5023_, lean_object* v___f_5024_, lean_object* v_j_5025_, lean_object* v___y_5026_){
_start:
{
lean_object* v___x_5028_; 
v___x_5028_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg(v_j_5025_);
if (lean_obj_tag(v___x_5028_) == 0)
{
lean_object* v_a_5029_; lean_object* v___x_5030_; 
v_a_5029_ = lean_ctor_get(v___x_5028_, 0);
lean_inc(v_a_5029_);
lean_dec_ref_known(v___x_5028_, 1);
lean_inc_ref(v___y_5026_);
v___x_5030_ = lean_apply_3(v_handler_5023_, v_a_5029_, v___y_5026_, lean_box(0));
if (lean_obj_tag(v___x_5030_) == 0)
{
lean_object* v_a_5031_; lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5039_; 
v_a_5031_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5039_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5039_ == 0)
{
v___x_5033_ = v___x_5030_;
v_isShared_5034_ = v_isSharedCheck_5039_;
goto v_resetjp_5032_;
}
else
{
lean_inc(v_a_5031_);
lean_dec(v___x_5030_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5039_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5035_; lean_object* v___x_5037_; 
v___x_5035_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_5024_, v_a_5031_);
if (v_isShared_5034_ == 0)
{
lean_ctor_set(v___x_5033_, 0, v___x_5035_);
v___x_5037_ = v___x_5033_;
goto v_reusejp_5036_;
}
else
{
lean_object* v_reuseFailAlloc_5038_; 
v_reuseFailAlloc_5038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5038_, 0, v___x_5035_);
v___x_5037_ = v_reuseFailAlloc_5038_;
goto v_reusejp_5036_;
}
v_reusejp_5036_:
{
return v___x_5037_;
}
}
}
else
{
lean_object* v_a_5040_; lean_object* v___x_5042_; uint8_t v_isShared_5043_; uint8_t v_isSharedCheck_5047_; 
lean_dec_ref(v___f_5024_);
v_a_5040_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5047_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5047_ == 0)
{
v___x_5042_ = v___x_5030_;
v_isShared_5043_ = v_isSharedCheck_5047_;
goto v_resetjp_5041_;
}
else
{
lean_inc(v_a_5040_);
lean_dec(v___x_5030_);
v___x_5042_ = lean_box(0);
v_isShared_5043_ = v_isSharedCheck_5047_;
goto v_resetjp_5041_;
}
v_resetjp_5041_:
{
lean_object* v___x_5045_; 
if (v_isShared_5043_ == 0)
{
v___x_5045_ = v___x_5042_;
goto v_reusejp_5044_;
}
else
{
lean_object* v_reuseFailAlloc_5046_; 
v_reuseFailAlloc_5046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5046_, 0, v_a_5040_);
v___x_5045_ = v_reuseFailAlloc_5046_;
goto v_reusejp_5044_;
}
v_reusejp_5044_:
{
return v___x_5045_;
}
}
}
}
else
{
lean_object* v_a_5048_; lean_object* v___x_5050_; uint8_t v_isShared_5051_; uint8_t v_isSharedCheck_5055_; 
lean_dec_ref(v___f_5024_);
lean_dec_ref(v_handler_5023_);
v_a_5048_ = lean_ctor_get(v___x_5028_, 0);
v_isSharedCheck_5055_ = !lean_is_exclusive(v___x_5028_);
if (v_isSharedCheck_5055_ == 0)
{
v___x_5050_ = v___x_5028_;
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
else
{
lean_inc(v_a_5048_);
lean_dec(v___x_5028_);
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
v_reuseFailAlloc_5054_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object* v_handler_5056_, lean_object* v___f_5057_, lean_object* v_j_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_){
_start:
{
lean_object* v_res_5061_; 
v_res_5061_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2(v_handler_5056_, v___f_5057_, v_j_5058_, v___y_5059_);
lean_dec_ref(v___y_5059_);
return v_res_5061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0(lean_object* v_method_5064_, lean_object* v_handler_5065_, lean_object* v_serialize_x3f_5066_){
_start:
{
lean_object* v___f_5068_; uint8_t v___x_5069_; 
v___f_5068_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__0));
v___x_5069_ = l_Lean_initializing();
if (v___x_5069_ == 0)
{
lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; 
lean_dec(v_serialize_x3f_5066_);
lean_dec_ref(v_handler_5065_);
v___x_5070_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__1));
v___x_5071_ = lean_string_append(v___x_5070_, v_method_5064_);
lean_dec_ref(v_method_5064_);
v___x_5072_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__2));
v___x_5073_ = lean_string_append(v___x_5071_, v___x_5072_);
v___x_5074_ = lean_mk_io_user_error(v___x_5073_);
v___x_5075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5075_, 0, v___x_5074_);
return v___x_5075_;
}
else
{
lean_object* v___x_5076_; lean_object* v___f_5077_; lean_object* v___f_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; uint8_t v___x_5081_; 
v___x_5076_ = lean_box(v___x_5069_);
v___f_5077_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1___boxed), 3, 2);
lean_closure_set(v___f_5077_, 0, v_serialize_x3f_5066_);
lean_closure_set(v___f_5077_, 1, v___x_5076_);
v___f_5078_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2___boxed), 5, 2);
lean_closure_set(v___f_5078_, 0, v_handler_5065_);
lean_closure_set(v___f_5078_, 1, v___f_5077_);
v___x_5079_ = l_Lean_Server_requestHandlers;
v___x_5080_ = lean_st_ref_get(v___x_5079_);
v___x_5081_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(v___x_5080_, v_method_5064_);
lean_dec(v___x_5080_);
if (v___x_5081_ == 0)
{
lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; 
v___x_5082_ = lean_st_ref_take(v___x_5079_);
v___x_5083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5083_, 0, v___f_5068_);
lean_ctor_set(v___x_5083_, 1, v___f_5078_);
v___x_5084_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3___redArg(v___x_5082_, v_method_5064_, v___x_5083_);
v___x_5085_ = lean_st_ref_put(v___x_5079_, v___x_5084_);
v___x_5086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5086_, 0, v___x_5085_);
return v___x_5086_;
}
else
{
lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; 
lean_dec_ref(v___f_5078_);
v___x_5087_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__1));
v___x_5088_ = lean_string_append(v___x_5087_, v_method_5064_);
lean_dec_ref(v_method_5064_);
v___x_5089_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___closed__0));
v___x_5090_ = lean_string_append(v___x_5088_, v___x_5089_);
v___x_5091_ = lean_mk_io_user_error(v___x_5090_);
v___x_5092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5092_, 0, v___x_5091_);
return v___x_5092_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___boxed(lean_object* v_method_5093_, lean_object* v_handler_5094_, lean_object* v_serialize_x3f_5095_, lean_object* v_a_5096_){
_start:
{
lean_object* v_res_5097_; 
v_res_5097_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0(v_method_5093_, v_handler_5094_, v_serialize_x3f_5095_);
return v_res_5097_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; 
v___x_5105_ = l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_;
v___x_5106_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_5107_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_5108_ = lean_box(0);
v___x_5109_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0(v___x_5106_, v___x_5107_, v___x_5108_);
if (lean_obj_tag(v___x_5109_) == 0)
{
lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; 
lean_dec_ref_known(v___x_5109_, 1);
v___x_5110_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_5111_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_5112_ = lean_unsigned_to_nat(2000u);
v___x_5113_ = lean_box(0);
v___x_5114_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__4_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_5115_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__5_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_5116_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg(v___x_5110_, v___x_5111_, v___x_5112_, v___x_5105_, v___x_5113_, v___x_5114_, v___x_5115_);
return v___x_5116_;
}
else
{
return v___x_5109_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2____boxed(lean_object* v_a_5117_){
_start:
{
lean_object* v_res_5118_; 
v_res_5118_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_();
return v_res_5118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1(lean_object* v_method_5119_, lean_object* v_refreshMethod_5120_, lean_object* v_refreshIntervalMs_5121_, lean_object* v_stateType_5122_, lean_object* v_inst_5123_, lean_object* v_initState_5124_, lean_object* v_handler_5125_, lean_object* v_onDidChange_5126_){
_start:
{
lean_object* v___x_5128_; 
v___x_5128_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg(v_method_5119_, v_refreshMethod_5120_, v_refreshIntervalMs_5121_, v_inst_5123_, v_initState_5124_, v_handler_5125_, v_onDidChange_5126_);
return v___x_5128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___boxed(lean_object* v_method_5129_, lean_object* v_refreshMethod_5130_, lean_object* v_refreshIntervalMs_5131_, lean_object* v_stateType_5132_, lean_object* v_inst_5133_, lean_object* v_initState_5134_, lean_object* v_handler_5135_, lean_object* v_onDidChange_5136_, lean_object* v_a_5137_){
_start:
{
lean_object* v_res_5138_; 
v_res_5138_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1(v_method_5129_, v_refreshMethod_5130_, v_refreshIntervalMs_5131_, v_stateType_5132_, v_inst_5133_, v_initState_5134_, v_handler_5135_, v_onDidChange_5136_);
lean_dec(v_initState_5134_);
return v_res_5138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_params_5139_, lean_object* v_a_5140_){
_start:
{
lean_object* v___x_5142_; 
v___x_5142_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg(v_params_5139_);
return v___x_5142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_params_5143_, lean_object* v_a_5144_, lean_object* v_a_5145_){
_start:
{
lean_object* v_res_5146_; 
v_res_5146_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1(v_params_5143_, v_a_5144_);
lean_dec_ref(v_a_5144_);
return v_res_5146_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_00_u03b2_5147_, lean_object* v_x_5148_, lean_object* v_x_5149_){
_start:
{
uint8_t v___x_5150_; 
v___x_5150_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(v_x_5148_, v_x_5149_);
return v___x_5150_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___boxed(lean_object* v_00_u03b2_5151_, lean_object* v_x_5152_, lean_object* v_x_5153_){
_start:
{
uint8_t v_res_5154_; lean_object* v_r_5155_; 
v_res_5154_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2(v_00_u03b2_5151_, v_x_5152_, v_x_5153_);
lean_dec_ref(v_x_5153_);
lean_dec_ref(v_x_5152_);
v_r_5155_ = lean_box(v_res_5154_);
return v_r_5155_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3(lean_object* v_00_u03b2_5156_, lean_object* v_x_5157_, lean_object* v_x_5158_, lean_object* v_x_5159_){
_start:
{
lean_object* v___x_5160_; 
v___x_5160_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3___redArg(v_x_5157_, v_x_5158_, v_x_5159_);
return v___x_5160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5(lean_object* v_method_5161_, lean_object* v_completeness_5162_, lean_object* v_stateType_5163_, lean_object* v_inst_5164_, lean_object* v_initState_5165_, lean_object* v_handler_5166_, lean_object* v_onDidChange_5167_){
_start:
{
lean_object* v___x_5169_; 
v___x_5169_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg(v_method_5161_, v_completeness_5162_, v_inst_5164_, v_initState_5165_, v_handler_5166_, v_onDidChange_5167_);
return v___x_5169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___boxed(lean_object* v_method_5170_, lean_object* v_completeness_5171_, lean_object* v_stateType_5172_, lean_object* v_inst_5173_, lean_object* v_initState_5174_, lean_object* v_handler_5175_, lean_object* v_onDidChange_5176_, lean_object* v_a_5177_){
_start:
{
lean_object* v_res_5178_; 
v_res_5178_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5(v_method_5170_, v_completeness_5171_, v_stateType_5172_, v_inst_5173_, v_initState_5174_, v_handler_5175_, v_onDidChange_5176_);
lean_dec(v_initState_5174_);
return v_res_5178_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3(lean_object* v_00_u03b2_5179_, lean_object* v_x_5180_, size_t v_x_5181_, lean_object* v_x_5182_){
_start:
{
uint8_t v___x_5183_; 
v___x_5183_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg(v_x_5180_, v_x_5181_, v_x_5182_);
return v___x_5183_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___boxed(lean_object* v_00_u03b2_5184_, lean_object* v_x_5185_, lean_object* v_x_5186_, lean_object* v_x_5187_){
_start:
{
size_t v_x_3985__boxed_5188_; uint8_t v_res_5189_; lean_object* v_r_5190_; 
v_x_3985__boxed_5188_ = lean_unbox_usize(v_x_5186_);
lean_dec(v_x_5186_);
v_res_5189_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3(v_00_u03b2_5184_, v_x_5185_, v_x_3985__boxed_5188_, v_x_5187_);
lean_dec_ref(v_x_5187_);
lean_dec_ref(v_x_5185_);
v_r_5190_ = lean_box(v_res_5189_);
return v_r_5190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5(lean_object* v_00_u03b2_5191_, lean_object* v_x_5192_, size_t v_x_5193_, size_t v_x_5194_, lean_object* v_x_5195_, lean_object* v_x_5196_){
_start:
{
lean_object* v___x_5197_; 
v___x_5197_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_x_5192_, v_x_5193_, v_x_5194_, v_x_5195_, v_x_5196_);
return v___x_5197_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___boxed(lean_object* v_00_u03b2_5198_, lean_object* v_x_5199_, lean_object* v_x_5200_, lean_object* v_x_5201_, lean_object* v_x_5202_, lean_object* v_x_5203_){
_start:
{
size_t v_x_3996__boxed_5204_; size_t v_x_3997__boxed_5205_; lean_object* v_res_5206_; 
v_x_3996__boxed_5204_ = lean_unbox_usize(v_x_5200_);
lean_dec(v_x_5200_);
v_x_3997__boxed_5205_ = lean_unbox_usize(v_x_5201_);
lean_dec(v_x_5201_);
v_res_5206_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5(v_00_u03b2_5198_, v_x_5199_, v_x_3996__boxed_5204_, v_x_3997__boxed_5205_, v_x_5202_, v_x_5203_);
return v_res_5206_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14(lean_object* v_00_u03b1_5207_, lean_object* v_00_u03b2_5208_, lean_object* v_mutex_5209_, lean_object* v_k_5210_, lean_object* v___y_5211_){
_start:
{
lean_object* v___x_5213_; 
v___x_5213_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(v_mutex_5209_, v_k_5210_, v___y_5211_);
return v___x_5213_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___boxed(lean_object* v_00_u03b1_5214_, lean_object* v_00_u03b2_5215_, lean_object* v_mutex_5216_, lean_object* v_k_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_){
_start:
{
lean_object* v_res_5220_; 
v_res_5220_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14(v_00_u03b1_5214_, v_00_u03b2_5215_, v_mutex_5216_, v_k_5217_, v___y_5218_);
lean_dec_ref(v___y_5218_);
return v_res_5220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8(lean_object* v_method_5221_, lean_object* v_completeness_5222_, lean_object* v_stateType_5223_, lean_object* v_inst_5224_, lean_object* v_initState_5225_, lean_object* v_handler_5226_, lean_object* v_onDidChange_5227_){
_start:
{
lean_object* v___x_5229_; 
v___x_5229_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg(v_method_5221_, v_completeness_5222_, v_inst_5224_, v_initState_5225_, v_handler_5226_, v_onDidChange_5227_);
return v___x_5229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___boxed(lean_object* v_method_5230_, lean_object* v_completeness_5231_, lean_object* v_stateType_5232_, lean_object* v_inst_5233_, lean_object* v_initState_5234_, lean_object* v_handler_5235_, lean_object* v_onDidChange_5236_, lean_object* v_a_5237_){
_start:
{
lean_object* v_res_5238_; 
v_res_5238_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8(v_method_5230_, v_completeness_5231_, v_stateType_5232_, v_inst_5233_, v_initState_5234_, v_handler_5235_, v_onDidChange_5236_);
lean_dec(v_initState_5234_);
return v_res_5238_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_5239_, lean_object* v_keys_5240_, lean_object* v_vals_5241_, lean_object* v_heq_5242_, lean_object* v_i_5243_, lean_object* v_k_5244_){
_start:
{
uint8_t v___x_5245_; 
v___x_5245_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg(v_keys_5240_, v_i_5243_, v_k_5244_);
return v___x_5245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b2_5246_, lean_object* v_keys_5247_, lean_object* v_vals_5248_, lean_object* v_heq_5249_, lean_object* v_i_5250_, lean_object* v_k_5251_){
_start:
{
uint8_t v_res_5252_; lean_object* v_r_5253_; 
v_res_5252_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5(v_00_u03b2_5246_, v_keys_5247_, v_vals_5248_, v_heq_5249_, v_i_5250_, v_k_5251_);
lean_dec_ref(v_k_5251_);
lean_dec_ref(v_vals_5248_);
lean_dec_ref(v_keys_5247_);
v_r_5253_ = lean_box(v_res_5252_);
return v_r_5253_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8(lean_object* v_00_u03b2_5254_, lean_object* v_n_5255_, lean_object* v_k_5256_, lean_object* v_v_5257_){
_start:
{
lean_object* v___x_5258_; 
v___x_5258_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8___redArg(v_n_5255_, v_k_5256_, v_v_5257_);
return v___x_5258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_5259_, size_t v_depth_5260_, lean_object* v_keys_5261_, lean_object* v_vals_5262_, lean_object* v_heq_5263_, lean_object* v_i_5264_, lean_object* v_entries_5265_){
_start:
{
lean_object* v___x_5266_; 
v___x_5266_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg(v_depth_5260_, v_keys_5261_, v_vals_5262_, v_i_5264_, v_entries_5265_);
return v___x_5266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03b2_5267_, lean_object* v_depth_5268_, lean_object* v_keys_5269_, lean_object* v_vals_5270_, lean_object* v_heq_5271_, lean_object* v_i_5272_, lean_object* v_entries_5273_){
_start:
{
size_t v_depth_boxed_5274_; lean_object* v_res_5275_; 
v_depth_boxed_5274_ = lean_unbox_usize(v_depth_5268_);
lean_dec(v_depth_5268_);
v_res_5275_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9(v_00_u03b2_5267_, v_depth_boxed_5274_, v_keys_5269_, v_vals_5270_, v_heq_5271_, v_i_5272_, v_entries_5273_);
lean_dec_ref(v_vals_5270_);
lean_dec_ref(v_keys_5269_);
return v_res_5275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13(lean_object* v_params_5276_, lean_object* v_a_5277_){
_start:
{
lean_object* v___x_5279_; 
v___x_5279_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg(v_params_5276_);
return v___x_5279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___boxed(lean_object* v_params_5280_, lean_object* v_a_5281_, lean_object* v_a_5282_){
_start:
{
lean_object* v_res_5283_; 
v_res_5283_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13(v_params_5280_, v_a_5281_);
lean_dec_ref(v_a_5281_);
return v_res_5283_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10(lean_object* v_00_u03b2_5284_, lean_object* v_x_5285_, lean_object* v_x_5286_, lean_object* v_x_5287_, lean_object* v_x_5288_){
_start:
{
lean_object* v___x_5289_; 
v___x_5289_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10___redArg(v_x_5285_, v_x_5286_, v_x_5287_, v_x_5288_);
return v___x_5289_;
}
}
lean_object* runtime_initialize_Lean_Server_Requests(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_FileWorker_SemanticHighlighting(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Server_FileWorker_keywordSemanticTokenMap = _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap();
lean_mark_persistent(l_Lean_Server_FileWorker_keywordSemanticTokenMap);
l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_ = _init_l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_();
lean_mark_persistent(l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_);
l_Lean_Server_FileWorker_instTypeNameSemanticTokensState = _init_l_Lean_Server_FileWorker_instTypeNameSemanticTokensState();
lean_mark_persistent(l_Lean_Server_FileWorker_instTypeNameSemanticTokensState);
l_Lean_Server_FileWorker_instInhabitedSemanticTokensState_default = _init_l_Lean_Server_FileWorker_instInhabitedSemanticTokensState_default();
lean_mark_persistent(l_Lean_Server_FileWorker_instInhabitedSemanticTokensState_default);
l_Lean_Server_FileWorker_instInhabitedSemanticTokensState = _init_l_Lean_Server_FileWorker_instInhabitedSemanticTokensState();
lean_mark_persistent(l_Lean_Server_FileWorker_instInhabitedSemanticTokensState);
res = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_FileWorker_SemanticHighlighting(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_Requests(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_FileWorker_SemanticHighlighting(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileWorker_SemanticHighlighting(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_FileWorker_SemanticHighlighting(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_FileWorker_SemanticHighlighting(builtin);
}
#ifdef __cplusplus
}
#endif

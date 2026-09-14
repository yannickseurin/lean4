// Lean compiler output
// Module: Lean.Server.FileWorker.InlayHints
// Imports: public import Lean.Server.GoTo public import Lean.Server.Requests
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
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t lean_string_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Server_documentUriFromModule_x3f(lean_object*);
lean_object* l_Lean_FileMap_utf8RangeToLspRange(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonInlayHintParams_fromJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Lsp_instToJsonInlayHint_toJson(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_FileMap_lspRangeToUtf8Range(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Syntax_Range_bsize(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Syntax_Range_overlaps(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_InlayHint_ofCustomInfo_x3f(lean_object*);
lean_object* l_Lean_Elab_InlayHint_resolveDeferred___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestError_ofIoError(lean_object*);
uint8_t l_Lean_Elab_instBEqInlayHintTextEdit_beq(lean_object*, lean_object*);
extern lean_object* l_Lean_Server_requestHandlers;
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_ServerTask_mapCheap___redArg(lean_object*, lean_object*);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
extern lean_object* l_Lean_Server_statefulRequestHandlers;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Server_instInhabitedRequestError_default;
lean_object* l_instInhabitedEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_endPos(lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* l_Lean_Server_RequestCancellationToken_cancellationTasks(lean_object*);
lean_object* l_Lean_AsyncList_getFinishedPrefixWithConsistentLatency___redArg(lean_object*, uint32_t, lean_object*);
uint8_t l_Lean_Server_RequestCancellationToken_wasCancelled(lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLinkLocation_toLspLocation(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLinkLocation_toLspLocation___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed__const__1 = (const lean_object*)&l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_InlayHintKind_toLspInlayHintKind(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintKind_toLspInlayHintKind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintTextEdit_toLspTextEdit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintInfo_toLspInlayHint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintInfo_toLspInlayHint___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__1(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Server.FileWorker.InlayHints"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Server.FileWorker.applyEditToHint\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Got position "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = " that should have been invalidated by edit at range "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_applyEditToHint_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_applyEditToHint_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
static const lean_string_object l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
static const lean_string_object l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FileWorker"};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
static const lean_string_object l_Lean_Server_FileWorker_instImpl___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "InlayHintState"};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(232, 14, 27, 113, 182, 128, 119, 36)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(105, 230, 109, 194, 171, 115, 34, 220)}};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
static lean_once_cell_t l_Lean_Server_FileWorker_instImpl___closed__5_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instImpl___closed__5_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instTypeNameInlayHintState;
static const lean_array_object l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__0_value;
static const lean_ctor_object l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instInhabitedInlayHintState_default = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instInhabitedInlayHintState = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__1_value;
static const lean_array_object l_Lean_Server_FileWorker_InlayHintState_init___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_FileWorker_InlayHintState_init___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__0_value;
static const lean_ctor_object l_Lean_Server_FileWorker_InlayHintState_init___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_FileWorker_InlayHintState_init___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_InlayHintState_init = (const lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__1_value;
static lean_once_cell_t l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unexpected context-free info tree node"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Server.InfoUtils.0.Lean.Elab.InfoTree.visitM.go"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Server.InfoUtils"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_handleInlayHints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Server.FileWorker.handleInlayHints"};
static const lean_object* l_Lean_Server_FileWorker_handleInlayHints___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_handleInlayHints___closed__0_value;
static const lean_string_object l_Lean_Server_FileWorker_handleInlayHints___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 399, .m_capacity = 399, .m_length = 398, .m_data = "assertion violation: finishedSnaps >= oldFinishedSnaps\n  -- VS Code emits inlay hint requests *every time the user scrolls*. This is reasonably expensive,\n  -- so in addition to re-using old inlay hints from parts of the file that haven't been processed\n  -- yet, we also re-use old inlay hints from parts of the file that have been processed already\n  -- with the current state of the document.\n  "};
static const lean_object* l_Lean_Server_FileWorker_handleInlayHints___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_handleInlayHints___closed__1_value;
static lean_once_cell_t l_Lean_Server_FileWorker_handleInlayHints___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_handleInlayHints___closed__2;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHints(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHints___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__0_value)}};
static const lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___closed__0 = (const lean_object*)&l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHintsDidChange(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHintsDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Cannot parse request params: "};
static const lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__0_value;
static const lean_string_object l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Failed to register stateful LSP request handler for '"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "': only possible during initialization"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__3 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__4 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "': already registered"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "textDocument/inlayHint"};
static const lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "workspace/inlayHint/refresh"};
static const lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleInlayHints___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleInlayHintsDidChange___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLinkLocation_toLspLocation(lean_object* v_text_1_, lean_object* v_l_2_){
_start:
{
lean_object* v_module_4_; lean_object* v_range_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_42_; 
v_module_4_ = lean_ctor_get(v_l_2_, 0);
v_range_5_ = lean_ctor_get(v_l_2_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v_l_2_);
if (v_isSharedCheck_42_ == 0)
{
v___x_7_ = v_l_2_;
v_isShared_8_ = v_isSharedCheck_42_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_range_5_);
lean_inc(v_module_4_);
lean_dec(v_l_2_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_42_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Server_documentUriFromModule_x3f(v_module_4_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v_a_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_33_; 
v_a_10_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_33_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_33_ == 0)
{
v___x_12_ = v___x_9_;
v_isShared_13_ = v_isSharedCheck_33_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_a_10_);
lean_dec(v___x_9_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_33_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
if (lean_obj_tag(v_a_10_) == 1)
{
lean_object* v_val_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_28_; 
v_val_14_ = lean_ctor_get(v_a_10_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v_a_10_);
if (v_isSharedCheck_28_ == 0)
{
v___x_16_ = v_a_10_;
v_isShared_17_ = v_isSharedCheck_28_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_val_14_);
lean_dec(v_a_10_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_28_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_18_; lean_object* v___x_20_; 
v___x_18_ = l_Lean_FileMap_utf8RangeToLspRange(v_text_1_, v_range_5_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v___x_18_);
lean_ctor_set(v___x_7_, 0, v_val_14_);
v___x_20_ = v___x_7_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_val_14_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v___x_18_);
v___x_20_ = v_reuseFailAlloc_27_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_22_; 
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v___x_20_);
v___x_22_ = v___x_16_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v___x_20_);
v___x_22_ = v_reuseFailAlloc_26_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
lean_object* v___x_24_; 
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_22_);
v___x_24_ = v___x_12_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v___x_22_);
v___x_24_ = v_reuseFailAlloc_25_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
return v___x_24_;
}
}
}
}
}
else
{
lean_object* v___x_29_; lean_object* v___x_31_; 
lean_dec(v_a_10_);
lean_del_object(v___x_7_);
lean_dec_ref(v_range_5_);
lean_dec_ref(v_text_1_);
v___x_29_ = lean_box(0);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_29_);
v___x_31_ = v___x_12_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_29_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
}
else
{
lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_41_; 
lean_del_object(v___x_7_);
lean_dec_ref(v_range_5_);
lean_dec_ref(v_text_1_);
v_a_34_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_41_ == 0)
{
v___x_36_ = v___x_9_;
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_9_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_39_; 
if (v_isShared_37_ == 0)
{
v___x_39_ = v___x_36_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_a_34_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLinkLocation_toLspLocation___boxed(lean_object* v_text_43_, lean_object* v_l_44_, lean_object* v_a_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_Elab_InlayHintLinkLocation_toLspLocation(v_text_43_, v_l_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart(lean_object* v_text_47_, lean_object* v_p_48_){
_start:
{
lean_object* v_value_50_; lean_object* v_tooltip_x3f_51_; lean_object* v_location_x3f_52_; lean_object* v___y_54_; lean_object* v___y_55_; lean_object* v_a_60_; 
v_value_50_ = lean_ctor_get(v_p_48_, 0);
lean_inc_ref(v_value_50_);
v_tooltip_x3f_51_ = lean_ctor_get(v_p_48_, 1);
lean_inc(v_tooltip_x3f_51_);
v_location_x3f_52_ = lean_ctor_get(v_p_48_, 2);
lean_inc(v_location_x3f_52_);
lean_dec_ref(v_p_48_);
if (lean_obj_tag(v_location_x3f_52_) == 0)
{
lean_object* v___x_73_; 
lean_dec_ref(v_text_47_);
v___x_73_ = lean_box(0);
v_a_60_ = v___x_73_;
goto v___jp_59_;
}
else
{
lean_object* v_val_74_; lean_object* v___x_75_; 
v_val_74_ = lean_ctor_get(v_location_x3f_52_, 0);
lean_inc(v_val_74_);
lean_dec_ref_known(v_location_x3f_52_, 1);
v___x_75_ = l_Lean_Elab_InlayHintLinkLocation_toLspLocation(v_text_47_, v_val_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; 
v_a_76_ = lean_ctor_get(v___x_75_, 0);
lean_inc(v_a_76_);
lean_dec_ref_known(v___x_75_, 1);
v_a_60_ = v_a_76_;
goto v___jp_59_;
}
else
{
lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_84_; 
lean_dec(v_tooltip_x3f_51_);
lean_dec_ref(v_value_50_);
v_a_77_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_84_ == 0)
{
v___x_79_ = v___x_75_;
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_dec(v___x_75_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_a_77_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
}
v___jp_53_:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_box(0);
v___x_57_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_57_, 0, v_value_50_);
lean_ctor_set(v___x_57_, 1, v___y_55_);
lean_ctor_set(v___x_57_, 2, v___y_54_);
lean_ctor_set(v___x_57_, 3, v___x_56_);
v___x_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
v___jp_59_:
{
if (lean_obj_tag(v_tooltip_x3f_51_) == 0)
{
lean_object* v___x_61_; 
v___x_61_ = lean_box(0);
v___y_54_ = v_a_60_;
v___y_55_ = v___x_61_;
goto v___jp_53_;
}
else
{
lean_object* v_val_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_72_; 
v_val_62_ = lean_ctor_get(v_tooltip_x3f_51_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v_tooltip_x3f_51_);
if (v_isSharedCheck_72_ == 0)
{
v___x_64_ = v_tooltip_x3f_51_;
v_isShared_65_ = v_isSharedCheck_72_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_val_62_);
lean_dec(v_tooltip_x3f_51_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_72_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
uint8_t v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_66_ = 1;
v___x_67_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_67_, 0, v_val_62_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*1, v___x_66_);
v___x_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_68_);
v___x_70_ = v___x_64_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
v___y_54_ = v_a_60_;
v___y_55_ = v___x_70_;
goto v___jp_53_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart___boxed(lean_object* v_text_85_, lean_object* v_p_86_, lean_object* v_a_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart(v_text_85_, v_p_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0(lean_object* v_text_89_, size_t v_sz_90_, size_t v_i_91_, lean_object* v_bs_92_){
_start:
{
uint8_t v___x_94_; 
v___x_94_ = lean_usize_dec_lt(v_i_91_, v_sz_90_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; lean_object* v___x_96_; 
lean_dec_ref(v_text_89_);
v___x_95_ = l_unsafeCast___redArg(v_bs_92_);
lean_dec_ref(v_bs_92_);
v___x_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
return v___x_96_;
}
else
{
lean_object* v_v_97_; lean_object* v___x_98_; lean_object* v_bs_x27_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v_v_97_ = lean_array_uget(v_bs_92_, v_i_91_);
v___x_98_ = lean_unsigned_to_nat(0u);
v_bs_x27_99_ = lean_array_uset(v_bs_92_, v_i_91_, v___x_98_);
v___x_100_ = l_unsafeCast___redArg(v_v_97_);
lean_dec(v_v_97_);
lean_inc_ref(v_text_89_);
v___x_101_ = l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart(v_text_89_, v___x_100_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; size_t v___x_103_; size_t v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc(v_a_102_);
lean_dec_ref_known(v___x_101_, 1);
v___x_103_ = ((size_t)1ULL);
v___x_104_ = lean_usize_add(v_i_91_, v___x_103_);
v___x_105_ = l_unsafeCast___redArg(v_a_102_);
lean_dec(v_a_102_);
v___x_106_ = lean_array_uset(v_bs_x27_99_, v_i_91_, v___x_105_);
v_i_91_ = v___x_104_;
v_bs_92_ = v___x_106_;
goto _start;
}
else
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
lean_dec_ref(v_bs_x27_99_);
lean_dec_ref(v_text_89_);
v_a_108_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v___x_101_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_101_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0___boxed(lean_object* v_text_116_, lean_object* v_sz_117_, lean_object* v_i_118_, lean_object* v_bs_119_, lean_object* v___y_120_){
_start:
{
size_t v_sz_boxed_121_; size_t v_i_boxed_122_; lean_object* v_res_123_; 
v_sz_boxed_121_ = lean_unbox_usize(v_sz_117_);
lean_dec(v_sz_117_);
v_i_boxed_122_ = lean_unbox_usize(v_i_118_);
lean_dec(v_i_118_);
v_res_123_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0(v_text_116_, v_sz_boxed_121_, v_i_boxed_122_, v_bs_119_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel(lean_object* v_text_126_, lean_object* v_x_127_){
_start:
{
if (lean_obj_tag(v_x_127_) == 0)
{
lean_object* v_n_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_137_; 
lean_dec_ref(v_text_126_);
v_n_129_ = lean_ctor_get(v_x_127_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v_x_127_);
if (v_isSharedCheck_137_ == 0)
{
v___x_131_ = v_x_127_;
v_isShared_132_ = v_isSharedCheck_137_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_n_129_);
lean_dec(v_x_127_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_137_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
if (v_isShared_132_ == 0)
{
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_n_129_);
v___x_134_ = v_reuseFailAlloc_136_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_135_; 
v___x_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
return v___x_135_;
}
}
}
else
{
lean_object* v_p_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_168_; 
v_p_138_ = lean_ctor_get(v_x_127_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v_x_127_);
if (v_isSharedCheck_168_ == 0)
{
v___x_140_ = v_x_127_;
v_isShared_141_ = v_isSharedCheck_168_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_p_138_);
lean_dec(v_x_127_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_168_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
size_t v_sz_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_259__overap_147_; lean_object* v___x_148_; 
v_sz_142_ = lean_array_size(v_p_138_);
v___x_143_ = l_unsafeCast___redArg(v_p_138_);
lean_dec_ref(v_p_138_);
v___x_144_ = lean_box_usize(v_sz_142_);
v___x_145_ = ((lean_object*)(l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed__const__1));
v___x_146_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0___boxed), 5, 4);
lean_closure_set(v___x_146_, 0, v_text_126_);
lean_closure_set(v___x_146_, 1, v___x_144_);
lean_closure_set(v___x_146_, 2, v___x_145_);
lean_closure_set(v___x_146_, 3, v___x_143_);
v___x_259__overap_147_ = l_unsafeCast___redArg(v___x_146_);
lean_dec_ref(v___x_146_);
v___x_148_ = lean_apply_1(v___x_259__overap_147_, lean_box(0));
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_159_; 
v_a_149_ = lean_ctor_get(v___x_148_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_159_ == 0)
{
v___x_151_ = v___x_148_;
v_isShared_152_ = v_isSharedCheck_159_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v___x_148_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_159_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 0, v_a_149_);
v___x_154_ = v___x_140_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_a_149_);
v___x_154_ = v_reuseFailAlloc_158_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
lean_object* v___x_156_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 0, v___x_154_);
v___x_156_ = v___x_151_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_154_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
else
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
lean_del_object(v___x_140_);
v_a_160_ = lean_ctor_get(v___x_148_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_148_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_148_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed(lean_object* v_text_169_, lean_object* v_x_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel(v_text_169_, v_x_170_);
return v_res_172_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_InlayHintKind_toLspInlayHintKind(uint8_t v_x_173_){
_start:
{
if (v_x_173_ == 0)
{
uint8_t v___x_174_; 
v___x_174_ = 0;
return v___x_174_;
}
else
{
uint8_t v___x_175_; 
v___x_175_ = 1;
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintKind_toLspInlayHintKind___boxed(lean_object* v_x_176_){
_start:
{
uint8_t v_x_18__boxed_177_; uint8_t v_res_178_; lean_object* v_r_179_; 
v_x_18__boxed_177_ = lean_unbox(v_x_176_);
v_res_178_ = l_Lean_Elab_InlayHintKind_toLspInlayHintKind(v_x_18__boxed_177_);
v_r_179_ = lean_box(v_res_178_);
return v_r_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintTextEdit_toLspTextEdit(lean_object* v_text_180_, lean_object* v_e_181_){
_start:
{
lean_object* v_range_182_; lean_object* v_newText_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v_range_182_ = lean_ctor_get(v_e_181_, 0);
lean_inc_ref(v_range_182_);
v_newText_183_ = lean_ctor_get(v_e_181_, 1);
lean_inc_ref(v_newText_183_);
lean_dec_ref(v_e_181_);
v___x_184_ = l_Lean_FileMap_utf8RangeToLspRange(v_text_180_, v_range_182_);
v___x_185_ = lean_box(0);
v___x_186_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_186_, 0, v___x_184_);
lean_ctor_set(v___x_186_, 1, v_newText_183_);
lean_ctor_set(v___x_186_, 2, v___x_185_);
lean_ctor_set(v___x_186_, 3, v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0(lean_object* v_text_187_, size_t v_sz_188_, size_t v_i_189_, lean_object* v_bs_190_){
_start:
{
uint8_t v___x_191_; 
v___x_191_ = lean_usize_dec_lt(v_i_189_, v_sz_188_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; 
lean_dec_ref(v_text_187_);
v___x_192_ = l_unsafeCast___redArg(v_bs_190_);
lean_dec_ref(v_bs_190_);
return v___x_192_;
}
else
{
lean_object* v_v_193_; lean_object* v___x_194_; lean_object* v_bs_x27_195_; lean_object* v___x_196_; lean_object* v___x_197_; size_t v___x_198_; size_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v_v_193_ = lean_array_uget(v_bs_190_, v_i_189_);
v___x_194_ = lean_unsigned_to_nat(0u);
v_bs_x27_195_ = lean_array_uset(v_bs_190_, v_i_189_, v___x_194_);
v___x_196_ = l_unsafeCast___redArg(v_v_193_);
lean_dec(v_v_193_);
lean_inc_ref(v_text_187_);
v___x_197_ = l_Lean_Elab_InlayHintTextEdit_toLspTextEdit(v_text_187_, v___x_196_);
v___x_198_ = ((size_t)1ULL);
v___x_199_ = lean_usize_add(v_i_189_, v___x_198_);
v___x_200_ = l_unsafeCast___redArg(v___x_197_);
lean_dec_ref(v___x_197_);
v___x_201_ = lean_array_uset(v_bs_x27_195_, v_i_189_, v___x_200_);
v_i_189_ = v___x_199_;
v_bs_190_ = v___x_201_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0___boxed(lean_object* v_text_203_, lean_object* v_sz_204_, lean_object* v_i_205_, lean_object* v_bs_206_){
_start:
{
size_t v_sz_boxed_207_; size_t v_i_boxed_208_; lean_object* v_res_209_; 
v_sz_boxed_207_ = lean_unbox_usize(v_sz_204_);
lean_dec(v_sz_204_);
v_i_boxed_208_ = lean_unbox_usize(v_i_205_);
lean_dec(v_i_205_);
v_res_209_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0(v_text_203_, v_sz_boxed_207_, v_i_boxed_208_, v_bs_206_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintInfo_toLspInlayHint(lean_object* v_text_210_, lean_object* v_i_211_){
_start:
{
lean_object* v_position_213_; lean_object* v_label_214_; lean_object* v_kind_x3f_215_; lean_object* v_textEdits_216_; lean_object* v_tooltip_x3f_217_; uint8_t v_paddingLeft_218_; uint8_t v_paddingRight_219_; lean_object* v___x_220_; 
v_position_213_ = lean_ctor_get(v_i_211_, 0);
lean_inc(v_position_213_);
v_label_214_ = lean_ctor_get(v_i_211_, 1);
lean_inc_ref(v_label_214_);
v_kind_x3f_215_ = lean_ctor_get(v_i_211_, 2);
lean_inc(v_kind_x3f_215_);
v_textEdits_216_ = lean_ctor_get(v_i_211_, 3);
lean_inc_ref(v_textEdits_216_);
v_tooltip_x3f_217_ = lean_ctor_get(v_i_211_, 4);
lean_inc(v_tooltip_x3f_217_);
v_paddingLeft_218_ = lean_ctor_get_uint8(v_i_211_, sizeof(void*)*5);
v_paddingRight_219_ = lean_ctor_get_uint8(v_i_211_, sizeof(void*)*5 + 1);
lean_dec_ref(v_i_211_);
lean_inc_ref(v_text_210_);
v___x_220_ = l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel(v_text_210_, v_label_214_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_271_; 
v_a_221_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_271_ == 0)
{
v___x_223_ = v___x_220_;
v_isShared_224_ = v_isSharedCheck_271_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_220_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_271_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_225_; lean_object* v___y_227_; lean_object* v___y_228_; lean_object* v___y_229_; lean_object* v___y_240_; 
lean_inc_ref(v_text_210_);
v___x_225_ = l_Lean_FileMap_utf8PosToLspPos(v_text_210_, v_position_213_);
lean_dec(v_position_213_);
if (lean_obj_tag(v_kind_x3f_215_) == 0)
{
lean_object* v___x_259_; 
v___x_259_ = lean_box(0);
v___y_240_ = v___x_259_;
goto v___jp_239_;
}
else
{
lean_object* v_val_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_270_; 
v_val_260_ = lean_ctor_get(v_kind_x3f_215_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v_kind_x3f_215_);
if (v_isSharedCheck_270_ == 0)
{
v___x_262_ = v_kind_x3f_215_;
v_isShared_263_ = v_isSharedCheck_270_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_val_260_);
lean_dec(v_kind_x3f_215_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_270_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
uint8_t v___x_264_; uint8_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_264_ = lean_unbox(v_val_260_);
lean_dec(v_val_260_);
v___x_265_ = l_Lean_Elab_InlayHintKind_toLspInlayHintKind(v___x_264_);
v___x_266_ = lean_box(v___x_265_);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 0, v___x_266_);
v___x_268_ = v___x_262_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_266_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
v___y_240_ = v___x_268_;
goto v___jp_239_;
}
}
}
v___jp_226_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_237_; 
v___x_230_ = lean_box(v_paddingLeft_218_);
v___x_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
v___x_232_ = lean_box(v_paddingRight_219_);
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
v___x_234_ = lean_box(0);
v___x_235_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_235_, 0, v___x_225_);
lean_ctor_set(v___x_235_, 1, v_a_221_);
lean_ctor_set(v___x_235_, 2, v___y_228_);
lean_ctor_set(v___x_235_, 3, v___y_227_);
lean_ctor_set(v___x_235_, 4, v___y_229_);
lean_ctor_set(v___x_235_, 5, v___x_231_);
lean_ctor_set(v___x_235_, 6, v___x_233_);
lean_ctor_set(v___x_235_, 7, v___x_234_);
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 0, v___x_235_);
v___x_237_ = v___x_223_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_235_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
v___jp_239_:
{
size_t v_sz_241_; size_t v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v_sz_241_ = lean_array_size(v_textEdits_216_);
v___x_242_ = ((size_t)0ULL);
v___x_243_ = l_unsafeCast___redArg(v_textEdits_216_);
lean_dec_ref(v_textEdits_216_);
v___x_244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0(v_text_210_, v_sz_241_, v___x_242_, v___x_243_);
v___x_245_ = l_unsafeCast___redArg(v___x_244_);
lean_dec_ref(v___x_244_);
v___x_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
if (lean_obj_tag(v_tooltip_x3f_217_) == 0)
{
lean_object* v___x_247_; 
v___x_247_ = lean_box(0);
v___y_227_ = v___x_246_;
v___y_228_ = v___y_240_;
v___y_229_ = v___x_247_;
goto v___jp_226_;
}
else
{
lean_object* v_val_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_258_; 
v_val_248_ = lean_ctor_get(v_tooltip_x3f_217_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v_tooltip_x3f_217_);
if (v_isSharedCheck_258_ == 0)
{
v___x_250_ = v_tooltip_x3f_217_;
v_isShared_251_ = v_isSharedCheck_258_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_val_248_);
lean_dec(v_tooltip_x3f_217_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_258_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
uint8_t v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_256_; 
v___x_252_ = 1;
v___x_253_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_253_, 0, v_val_248_);
lean_ctor_set_uint8(v___x_253_, sizeof(void*)*1, v___x_252_);
v___x_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v___x_254_);
v___x_256_ = v___x_250_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_254_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
v___y_227_ = v___x_246_;
v___y_228_ = v___y_240_;
v___y_229_ = v___x_256_;
goto v___jp_226_;
}
}
}
}
}
}
else
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
lean_dec(v_tooltip_x3f_217_);
lean_dec_ref(v_textEdits_216_);
lean_dec(v_kind_x3f_215_);
lean_dec(v_position_213_);
lean_dec_ref(v_text_210_);
v_a_272_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v___x_220_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_220_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintInfo_toLspInlayHint___boxed(lean_object* v_text_280_, lean_object* v_i_281_, lean_object* v_a_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lean_Elab_InlayHintInfo_toLspInlayHint(v_text_280_, v_i_281_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__0(lean_object* v_a_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_nat_to_int(v_a_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__1(lean_object* v_msg_286_){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(0u);
v___x_288_ = lean_panic_fn_borrowed(v___x_287_, v_msg_286_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(lean_object* v_range_294_, lean_object* v_byteOffset_295_, lean_object* v_p_296_){
_start:
{
lean_object* v_start_297_; lean_object* v_stop_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
v_start_297_ = lean_ctor_get(v_range_294_, 0);
lean_inc(v_start_297_);
v_stop_298_ = lean_ctor_get(v_range_294_, 1);
lean_inc(v_stop_298_);
lean_dec_ref(v_range_294_);
v___x_299_ = lean_unsigned_to_nat(1u);
v___x_300_ = lean_nat_add(v_stop_298_, v___x_299_);
v___x_301_ = lean_nat_dec_le(v___x_300_, v_p_296_);
lean_dec(v___x_300_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_nat_add(v_p_296_, v___x_299_);
v___x_303_ = lean_nat_dec_le(v___x_302_, v_start_297_);
lean_dec(v___x_302_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_304_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0));
v___x_305_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__1));
v___x_306_ = lean_unsigned_to_nat(87u);
v___x_307_ = lean_unsigned_to_nat(6u);
v___x_308_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__2));
v___x_309_ = l_Nat_reprFast(v_p_296_);
v___x_310_ = lean_string_append(v___x_308_, v___x_309_);
lean_dec_ref(v___x_309_);
v___x_311_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__3));
v___x_312_ = lean_string_append(v___x_310_, v___x_311_);
v___x_313_ = l_Nat_reprFast(v_start_297_);
v___x_314_ = lean_string_append(v___x_312_, v___x_313_);
lean_dec_ref(v___x_313_);
v___x_315_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__4));
v___x_316_ = lean_string_append(v___x_314_, v___x_315_);
v___x_317_ = l_Nat_reprFast(v_stop_298_);
v___x_318_ = lean_string_append(v___x_316_, v___x_317_);
lean_dec_ref(v___x_317_);
v___x_319_ = l_mkPanicMessageWithDecl(v___x_304_, v___x_305_, v___x_306_, v___x_307_, v___x_318_);
lean_dec_ref(v___x_318_);
v___x_320_ = l_panic___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__1(v___x_319_);
return v___x_320_;
}
else
{
lean_dec(v_stop_298_);
lean_dec(v_start_297_);
return v_p_296_;
}
}
else
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
lean_dec(v_stop_298_);
lean_dec(v_start_297_);
v___x_321_ = lean_nat_to_int(v_p_296_);
v___x_322_ = lean_int_add(v___x_321_, v_byteOffset_295_);
lean_dec(v___x_321_);
v___x_323_ = l_Int_toNat(v___x_322_);
lean_dec(v___x_322_);
return v___x_323_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___boxed(lean_object* v_range_324_, lean_object* v_byteOffset_325_, lean_object* v_p_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_324_, v_byteOffset_325_, v_p_326_);
lean_dec(v_byteOffset_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4(lean_object* v_hintMod_328_, lean_object* v_range_329_, lean_object* v_byteOffset_330_, size_t v_sz_331_, size_t v_i_332_, lean_object* v_bs_333_){
_start:
{
uint8_t v___x_334_; 
v___x_334_ = lean_usize_dec_lt(v_i_332_, v_sz_331_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; 
lean_dec_ref(v_range_329_);
v___x_335_ = l_unsafeCast___redArg(v_bs_333_);
lean_dec_ref(v_bs_333_);
return v___x_335_;
}
else
{
lean_object* v_v_336_; lean_object* v___x_337_; lean_object* v_value_338_; lean_object* v_tooltip_x3f_339_; lean_object* v_location_x3f_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_384_; 
v_v_336_ = lean_array_uget_borrowed(v_bs_333_, v_i_332_);
v___x_337_ = l_unsafeCast___redArg(v_v_336_);
v_value_338_ = lean_ctor_get(v___x_337_, 0);
v_tooltip_x3f_339_ = lean_ctor_get(v___x_337_, 1);
v_location_x3f_340_ = lean_ctor_get(v___x_337_, 2);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_384_ == 0)
{
v___x_342_ = v___x_337_;
v_isShared_343_ = v_isSharedCheck_384_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_location_x3f_340_);
lean_inc(v_tooltip_x3f_339_);
lean_inc(v_value_338_);
lean_dec(v___x_337_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_384_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_344_; lean_object* v_bs_x27_345_; lean_object* v___y_347_; lean_object* v___y_354_; 
v___x_344_ = lean_unsigned_to_nat(0u);
v_bs_x27_345_ = lean_array_uset(v_bs_333_, v_i_332_, v___x_344_);
if (lean_obj_tag(v_location_x3f_340_) == 0)
{
lean_object* v___x_359_; 
lean_del_object(v___x_342_);
v___x_359_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_359_, 0, v_value_338_);
lean_ctor_set(v___x_359_, 1, v_tooltip_x3f_339_);
lean_ctor_set(v___x_359_, 2, v_location_x3f_340_);
v___y_347_ = v___x_359_;
goto v___jp_346_;
}
else
{
lean_object* v_val_360_; lean_object* v_module_361_; lean_object* v_range_362_; uint8_t v___x_363_; 
v_val_360_ = lean_ctor_get(v_location_x3f_340_, 0);
lean_inc(v_val_360_);
lean_dec_ref_known(v_location_x3f_340_, 1);
v_module_361_ = lean_ctor_get(v_val_360_, 0);
v_range_362_ = lean_ctor_get(v_val_360_, 1);
lean_inc_ref(v_range_362_);
v___x_363_ = lean_name_eq(v_module_361_, v_hintMod_328_);
if (v___x_363_ == 0)
{
lean_dec_ref(v_range_362_);
v___y_354_ = v_val_360_;
goto v___jp_353_;
}
else
{
lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_381_; 
lean_inc(v_module_361_);
v_isSharedCheck_381_ = !lean_is_exclusive(v_val_360_);
if (v_isSharedCheck_381_ == 0)
{
lean_object* v_unused_382_; lean_object* v_unused_383_; 
v_unused_382_ = lean_ctor_get(v_val_360_, 1);
lean_dec(v_unused_382_);
v_unused_383_ = lean_ctor_get(v_val_360_, 0);
lean_dec(v_unused_383_);
v___x_365_ = v_val_360_;
v_isShared_366_ = v_isSharedCheck_381_;
goto v_resetjp_364_;
}
else
{
lean_dec(v_val_360_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_381_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v_start_367_; lean_object* v_stop_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_380_; 
v_start_367_ = lean_ctor_get(v_range_362_, 0);
v_stop_368_ = lean_ctor_get(v_range_362_, 1);
v_isSharedCheck_380_ = !lean_is_exclusive(v_range_362_);
if (v_isSharedCheck_380_ == 0)
{
v___x_370_ = v_range_362_;
v_isShared_371_ = v_isSharedCheck_380_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_stop_368_);
lean_inc(v_start_367_);
lean_dec(v_range_362_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_380_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
lean_inc_ref_n(v_range_329_, 2);
v___x_372_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_329_, v_byteOffset_330_, v_start_367_);
v___x_373_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_329_, v_byteOffset_330_, v_stop_368_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 1, v___x_373_);
lean_ctor_set(v___x_370_, 0, v___x_372_);
v___x_375_ = v___x_370_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_372_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v___x_373_);
v___x_375_ = v_reuseFailAlloc_379_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
lean_object* v___x_377_; 
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 1, v___x_375_);
v___x_377_ = v___x_365_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_module_361_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v___x_375_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
v___y_354_ = v___x_377_;
goto v___jp_353_;
}
}
}
}
}
}
v___jp_346_:
{
size_t v___x_348_; size_t v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_348_ = ((size_t)1ULL);
v___x_349_ = lean_usize_add(v_i_332_, v___x_348_);
v___x_350_ = l_unsafeCast___redArg(v___y_347_);
lean_dec_ref(v___y_347_);
v___x_351_ = lean_array_uset(v_bs_x27_345_, v_i_332_, v___x_350_);
v_i_332_ = v___x_349_;
v_bs_333_ = v___x_351_;
goto _start;
}
v___jp_353_:
{
lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_355_, 0, v___y_354_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 2, v___x_355_);
v___x_357_ = v___x_342_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_value_338_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_tooltip_x3f_339_);
lean_ctor_set(v_reuseFailAlloc_358_, 2, v___x_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
v___y_347_ = v___x_357_;
goto v___jp_346_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4___boxed(lean_object* v_hintMod_385_, lean_object* v_range_386_, lean_object* v_byteOffset_387_, lean_object* v_sz_388_, lean_object* v_i_389_, lean_object* v_bs_390_){
_start:
{
size_t v_sz_boxed_391_; size_t v_i_boxed_392_; lean_object* v_res_393_; 
v_sz_boxed_391_ = lean_unbox_usize(v_sz_388_);
lean_dec(v_sz_388_);
v_i_boxed_392_ = lean_unbox_usize(v_i_389_);
lean_dec(v_i_389_);
v_res_393_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4(v_hintMod_385_, v_range_386_, v_byteOffset_387_, v_sz_boxed_391_, v_i_boxed_392_, v_bs_390_);
lean_dec(v_byteOffset_387_);
lean_dec(v_hintMod_385_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3(lean_object* v_hintMod_394_, lean_object* v_range_395_, lean_object* v_byteOffset_396_, size_t v_sz_397_, size_t v_i_398_, lean_object* v_bs_399_){
_start:
{
uint8_t v___x_400_; 
v___x_400_ = lean_usize_dec_lt(v_i_398_, v_sz_397_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; 
lean_dec_ref(v_range_395_);
v___x_401_ = l_unsafeCast___redArg(v_bs_399_);
lean_dec_ref(v_bs_399_);
return v___x_401_;
}
else
{
lean_object* v_v_402_; lean_object* v___x_403_; lean_object* v_value_404_; lean_object* v_tooltip_x3f_405_; lean_object* v_location_x3f_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_450_; 
v_v_402_ = lean_array_uget_borrowed(v_bs_399_, v_i_398_);
v___x_403_ = l_unsafeCast___redArg(v_v_402_);
v_value_404_ = lean_ctor_get(v___x_403_, 0);
v_tooltip_x3f_405_ = lean_ctor_get(v___x_403_, 1);
v_location_x3f_406_ = lean_ctor_get(v___x_403_, 2);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_450_ == 0)
{
v___x_408_ = v___x_403_;
v_isShared_409_ = v_isSharedCheck_450_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_location_x3f_406_);
lean_inc(v_tooltip_x3f_405_);
lean_inc(v_value_404_);
lean_dec(v___x_403_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_450_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_410_; lean_object* v_bs_x27_411_; lean_object* v___y_413_; lean_object* v___y_420_; 
v___x_410_ = lean_unsigned_to_nat(0u);
v_bs_x27_411_ = lean_array_uset(v_bs_399_, v_i_398_, v___x_410_);
if (lean_obj_tag(v_location_x3f_406_) == 0)
{
lean_object* v___x_425_; 
lean_del_object(v___x_408_);
v___x_425_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_425_, 0, v_value_404_);
lean_ctor_set(v___x_425_, 1, v_tooltip_x3f_405_);
lean_ctor_set(v___x_425_, 2, v_location_x3f_406_);
v___y_413_ = v___x_425_;
goto v___jp_412_;
}
else
{
lean_object* v_val_426_; lean_object* v_module_427_; lean_object* v_range_428_; uint8_t v___x_429_; 
v_val_426_ = lean_ctor_get(v_location_x3f_406_, 0);
lean_inc(v_val_426_);
lean_dec_ref_known(v_location_x3f_406_, 1);
v_module_427_ = lean_ctor_get(v_val_426_, 0);
v_range_428_ = lean_ctor_get(v_val_426_, 1);
lean_inc_ref(v_range_428_);
v___x_429_ = lean_name_eq(v_module_427_, v_hintMod_394_);
if (v___x_429_ == 0)
{
lean_dec_ref(v_range_428_);
v___y_420_ = v_val_426_;
goto v___jp_419_;
}
else
{
lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_447_; 
lean_inc(v_module_427_);
v_isSharedCheck_447_ = !lean_is_exclusive(v_val_426_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; lean_object* v_unused_449_; 
v_unused_448_ = lean_ctor_get(v_val_426_, 1);
lean_dec(v_unused_448_);
v_unused_449_ = lean_ctor_get(v_val_426_, 0);
lean_dec(v_unused_449_);
v___x_431_ = v_val_426_;
v_isShared_432_ = v_isSharedCheck_447_;
goto v_resetjp_430_;
}
else
{
lean_dec(v_val_426_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_447_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v_start_433_; lean_object* v_stop_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_446_; 
v_start_433_ = lean_ctor_get(v_range_428_, 0);
v_stop_434_ = lean_ctor_get(v_range_428_, 1);
v_isSharedCheck_446_ = !lean_is_exclusive(v_range_428_);
if (v_isSharedCheck_446_ == 0)
{
v___x_436_ = v_range_428_;
v_isShared_437_ = v_isSharedCheck_446_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_stop_434_);
lean_inc(v_start_433_);
lean_dec(v_range_428_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_446_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_441_; 
lean_inc_ref_n(v_range_395_, 2);
v___x_438_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_395_, v_byteOffset_396_, v_start_433_);
v___x_439_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_395_, v_byteOffset_396_, v_stop_434_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 1, v___x_439_);
lean_ctor_set(v___x_436_, 0, v___x_438_);
v___x_441_ = v___x_436_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v___x_439_);
v___x_441_ = v_reuseFailAlloc_445_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
lean_object* v___x_443_; 
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 1, v___x_441_);
v___x_443_ = v___x_431_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_module_427_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v___x_441_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
v___y_420_ = v___x_443_;
goto v___jp_419_;
}
}
}
}
}
}
v___jp_412_:
{
size_t v___x_414_; size_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_414_ = ((size_t)1ULL);
v___x_415_ = lean_usize_add(v_i_398_, v___x_414_);
v___x_416_ = l_unsafeCast___redArg(v___y_413_);
lean_dec_ref(v___y_413_);
v___x_417_ = lean_array_uset(v_bs_x27_411_, v_i_398_, v___x_416_);
v___x_418_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4(v_hintMod_394_, v_range_395_, v_byteOffset_396_, v_sz_397_, v___x_415_, v___x_417_);
return v___x_418_;
}
v___jp_419_:
{
lean_object* v___x_421_; lean_object* v___x_423_; 
v___x_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_421_, 0, v___y_420_);
if (v_isShared_409_ == 0)
{
lean_ctor_set(v___x_408_, 2, v___x_421_);
v___x_423_ = v___x_408_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_value_404_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v_tooltip_x3f_405_);
lean_ctor_set(v_reuseFailAlloc_424_, 2, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
v___y_413_ = v___x_423_;
goto v___jp_412_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3___boxed(lean_object* v_hintMod_451_, lean_object* v_range_452_, lean_object* v_byteOffset_453_, lean_object* v_sz_454_, lean_object* v_i_455_, lean_object* v_bs_456_){
_start:
{
size_t v_sz_boxed_457_; size_t v_i_boxed_458_; lean_object* v_res_459_; 
v_sz_boxed_457_ = lean_unbox_usize(v_sz_454_);
lean_dec(v_sz_454_);
v_i_boxed_458_ = lean_unbox_usize(v_i_455_);
lean_dec(v_i_455_);
v_res_459_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3(v_hintMod_451_, v_range_452_, v_byteOffset_453_, v_sz_boxed_457_, v_i_boxed_458_, v_bs_456_);
lean_dec(v_byteOffset_453_);
lean_dec(v_hintMod_451_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2(lean_object* v_range_460_, lean_object* v_byteOffset_461_, size_t v_sz_462_, size_t v_i_463_, lean_object* v_bs_464_){
_start:
{
uint8_t v___x_465_; 
v___x_465_ = lean_usize_dec_lt(v_i_463_, v_sz_462_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; 
lean_dec_ref(v_range_460_);
v___x_466_ = l_unsafeCast___redArg(v_bs_464_);
lean_dec_ref(v_bs_464_);
return v___x_466_;
}
else
{
lean_object* v_v_467_; lean_object* v___x_468_; lean_object* v_range_469_; lean_object* v_newText_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_495_; 
v_v_467_ = lean_array_uget_borrowed(v_bs_464_, v_i_463_);
v___x_468_ = l_unsafeCast___redArg(v_v_467_);
v_range_469_ = lean_ctor_get(v___x_468_, 0);
v_newText_470_ = lean_ctor_get(v___x_468_, 1);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_495_ == 0)
{
v___x_472_ = v___x_468_;
v_isShared_473_ = v_isSharedCheck_495_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_newText_470_);
lean_inc(v_range_469_);
lean_dec(v___x_468_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_495_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v_start_474_; lean_object* v_stop_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_494_; 
v_start_474_ = lean_ctor_get(v_range_469_, 0);
v_stop_475_ = lean_ctor_get(v_range_469_, 1);
v_isSharedCheck_494_ = !lean_is_exclusive(v_range_469_);
if (v_isSharedCheck_494_ == 0)
{
v___x_477_ = v_range_469_;
v_isShared_478_ = v_isSharedCheck_494_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_stop_475_);
lean_inc(v_start_474_);
lean_dec(v_range_469_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_494_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; lean_object* v_bs_x27_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_484_; 
v___x_479_ = lean_unsigned_to_nat(0u);
v_bs_x27_480_ = lean_array_uset(v_bs_464_, v_i_463_, v___x_479_);
lean_inc_ref_n(v_range_460_, 2);
v___x_481_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_460_, v_byteOffset_461_, v_start_474_);
v___x_482_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_460_, v_byteOffset_461_, v_stop_475_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 1, v___x_482_);
lean_ctor_set(v___x_477_, 0, v___x_481_);
v___x_484_ = v___x_477_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_481_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v___x_482_);
v___x_484_ = v_reuseFailAlloc_493_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_486_; 
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 0, v___x_484_);
v___x_486_ = v___x_472_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v___x_484_);
lean_ctor_set(v_reuseFailAlloc_492_, 1, v_newText_470_);
v___x_486_ = v_reuseFailAlloc_492_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
size_t v___x_487_; size_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_487_ = ((size_t)1ULL);
v___x_488_ = lean_usize_add(v_i_463_, v___x_487_);
v___x_489_ = l_unsafeCast___redArg(v___x_486_);
lean_dec_ref(v___x_486_);
v___x_490_ = lean_array_uset(v_bs_x27_480_, v_i_463_, v___x_489_);
v_i_463_ = v___x_488_;
v_bs_464_ = v___x_490_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2___boxed(lean_object* v_range_496_, lean_object* v_byteOffset_497_, lean_object* v_sz_498_, lean_object* v_i_499_, lean_object* v_bs_500_){
_start:
{
size_t v_sz_boxed_501_; size_t v_i_boxed_502_; lean_object* v_res_503_; 
v_sz_boxed_501_ = lean_unbox_usize(v_sz_498_);
lean_dec(v_sz_498_);
v_i_boxed_502_ = lean_unbox_usize(v_i_499_);
lean_dec(v_i_499_);
v_res_503_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2(v_range_496_, v_byteOffset_497_, v_sz_boxed_501_, v_i_boxed_502_, v_bs_500_);
lean_dec(v_byteOffset_497_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2(lean_object* v_range_504_, lean_object* v_byteOffset_505_, size_t v_sz_506_, size_t v_i_507_, lean_object* v_bs_508_){
_start:
{
uint8_t v___x_509_; 
v___x_509_ = lean_usize_dec_lt(v_i_507_, v_sz_506_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; 
lean_dec_ref(v_range_504_);
v___x_510_ = l_unsafeCast___redArg(v_bs_508_);
lean_dec_ref(v_bs_508_);
return v___x_510_;
}
else
{
lean_object* v_v_511_; lean_object* v___x_512_; lean_object* v_range_513_; lean_object* v_newText_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_539_; 
v_v_511_ = lean_array_uget_borrowed(v_bs_508_, v_i_507_);
v___x_512_ = l_unsafeCast___redArg(v_v_511_);
v_range_513_ = lean_ctor_get(v___x_512_, 0);
v_newText_514_ = lean_ctor_get(v___x_512_, 1);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_539_ == 0)
{
v___x_516_ = v___x_512_;
v_isShared_517_ = v_isSharedCheck_539_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_newText_514_);
lean_inc(v_range_513_);
lean_dec(v___x_512_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_539_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v_start_518_; lean_object* v_stop_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_538_; 
v_start_518_ = lean_ctor_get(v_range_513_, 0);
v_stop_519_ = lean_ctor_get(v_range_513_, 1);
v_isSharedCheck_538_ = !lean_is_exclusive(v_range_513_);
if (v_isSharedCheck_538_ == 0)
{
v___x_521_ = v_range_513_;
v_isShared_522_ = v_isSharedCheck_538_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_stop_519_);
lean_inc(v_start_518_);
lean_dec(v_range_513_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_538_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; lean_object* v_bs_x27_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_523_ = lean_unsigned_to_nat(0u);
v_bs_x27_524_ = lean_array_uset(v_bs_508_, v_i_507_, v___x_523_);
lean_inc_ref_n(v_range_504_, 2);
v___x_525_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_504_, v_byteOffset_505_, v_start_518_);
v___x_526_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_504_, v_byteOffset_505_, v_stop_519_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 1, v___x_526_);
lean_ctor_set(v___x_521_, 0, v___x_525_);
v___x_528_ = v___x_521_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_525_);
lean_ctor_set(v_reuseFailAlloc_537_, 1, v___x_526_);
v___x_528_ = v_reuseFailAlloc_537_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_530_; 
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_528_);
v___x_530_ = v___x_516_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_536_, 1, v_newText_514_);
v___x_530_ = v_reuseFailAlloc_536_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
size_t v___x_531_; size_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_531_ = ((size_t)1ULL);
v___x_532_ = lean_usize_add(v_i_507_, v___x_531_);
v___x_533_ = l_unsafeCast___redArg(v___x_530_);
lean_dec_ref(v___x_530_);
v___x_534_ = lean_array_uset(v_bs_x27_524_, v_i_507_, v___x_533_);
v___x_535_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2(v_range_504_, v_byteOffset_505_, v_sz_506_, v___x_532_, v___x_534_);
return v___x_535_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___boxed(lean_object* v_range_540_, lean_object* v_byteOffset_541_, lean_object* v_sz_542_, lean_object* v_i_543_, lean_object* v_bs_544_){
_start:
{
size_t v_sz_boxed_545_; size_t v_i_boxed_546_; lean_object* v_res_547_; 
v_sz_boxed_545_ = lean_unbox_usize(v_sz_542_);
lean_dec(v_sz_542_);
v_i_boxed_546_ = lean_unbox_usize(v_i_543_);
lean_dec(v_i_543_);
v_res_547_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2(v_range_540_, v_byteOffset_541_, v_sz_boxed_545_, v_i_boxed_546_, v_bs_544_);
lean_dec(v_byteOffset_541_);
return v_res_547_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5(lean_object* v_hintMod_548_, lean_object* v_range_549_, lean_object* v_as_550_, size_t v_i_551_, size_t v_stop_552_){
_start:
{
uint8_t v___x_557_; 
v___x_557_ = lean_usize_dec_eq(v_i_551_, v_stop_552_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; lean_object* v_location_x3f_559_; 
v___x_558_ = lean_array_uget_borrowed(v_as_550_, v_i_551_);
v_location_x3f_559_ = lean_ctor_get(v___x_558_, 2);
if (lean_obj_tag(v_location_x3f_559_) == 0)
{
goto v___jp_553_;
}
else
{
lean_object* v_val_560_; lean_object* v_module_561_; lean_object* v_range_562_; uint8_t v___x_563_; uint8_t v___y_565_; uint8_t v___x_566_; 
v_val_560_ = lean_ctor_get(v_location_x3f_559_, 0);
v_module_561_ = lean_ctor_get(v_val_560_, 0);
v_range_562_ = lean_ctor_get(v_val_560_, 1);
v___x_563_ = 1;
v___x_566_ = lean_name_eq(v_module_561_, v_hintMod_548_);
if (v___x_566_ == 0)
{
v___y_565_ = v___x_566_;
goto v___jp_564_;
}
else
{
uint8_t v___x_567_; 
v___x_567_ = l_Lean_Syntax_Range_overlaps(v_range_549_, v_range_562_, v___x_566_, v___x_557_);
v___y_565_ = v___x_567_;
goto v___jp_564_;
}
v___jp_564_:
{
if (v___y_565_ == 0)
{
goto v___jp_553_;
}
else
{
return v___x_563_;
}
}
}
}
else
{
uint8_t v___x_568_; 
v___x_568_ = 0;
return v___x_568_;
}
v___jp_553_:
{
size_t v___x_554_; size_t v___x_555_; 
v___x_554_ = ((size_t)1ULL);
v___x_555_ = lean_usize_add(v_i_551_, v___x_554_);
v_i_551_ = v___x_555_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5___boxed(lean_object* v_hintMod_569_, lean_object* v_range_570_, lean_object* v_as_571_, lean_object* v_i_572_, lean_object* v_stop_573_){
_start:
{
size_t v_i_boxed_574_; size_t v_stop_boxed_575_; uint8_t v_res_576_; lean_object* v_r_577_; 
v_i_boxed_574_ = lean_unbox_usize(v_i_572_);
lean_dec(v_i_572_);
v_stop_boxed_575_ = lean_unbox_usize(v_stop_573_);
lean_dec(v_stop_573_);
v_res_576_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5(v_hintMod_569_, v_range_570_, v_as_571_, v_i_boxed_574_, v_stop_boxed_575_);
lean_dec_ref(v_as_571_);
lean_dec_ref(v_range_570_);
lean_dec(v_hintMod_569_);
v_r_577_ = lean_box(v_res_576_);
return v_r_577_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4(lean_object* v_range_578_, uint8_t v___x_579_, lean_object* v_as_580_, size_t v_i_581_, size_t v_stop_582_){
_start:
{
uint8_t v___x_583_; 
v___x_583_ = lean_usize_dec_eq(v_i_581_, v_stop_582_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; lean_object* v_range_585_; uint8_t v___x_586_; uint8_t v___x_587_; 
v___x_584_ = lean_array_uget_borrowed(v_as_580_, v_i_581_);
v_range_585_ = lean_ctor_get(v___x_584_, 0);
v___x_586_ = 1;
v___x_587_ = l_Lean_Syntax_Range_overlaps(v_range_578_, v_range_585_, v___x_586_, v___x_579_);
if (v___x_587_ == 0)
{
size_t v___x_588_; size_t v___x_589_; 
v___x_588_ = ((size_t)1ULL);
v___x_589_ = lean_usize_add(v_i_581_, v___x_588_);
v_i_581_ = v___x_589_;
goto _start;
}
else
{
return v___x_586_;
}
}
else
{
uint8_t v___x_591_; 
v___x_591_ = 0;
return v___x_591_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4___boxed(lean_object* v_range_592_, lean_object* v___x_593_, lean_object* v_as_594_, lean_object* v_i_595_, lean_object* v_stop_596_){
_start:
{
uint8_t v___x_2624__boxed_597_; size_t v_i_boxed_598_; size_t v_stop_boxed_599_; uint8_t v_res_600_; lean_object* v_r_601_; 
v___x_2624__boxed_597_ = lean_unbox(v___x_593_);
v_i_boxed_598_ = lean_unbox_usize(v_i_595_);
lean_dec(v_i_595_);
v_stop_boxed_599_ = lean_unbox_usize(v_stop_596_);
lean_dec(v_stop_596_);
v_res_600_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4(v_range_592_, v___x_2624__boxed_597_, v_as_594_, v_i_boxed_598_, v_stop_boxed_599_);
lean_dec_ref(v_as_594_);
lean_dec_ref(v_range_592_);
v_r_601_ = lean_box(v_res_600_);
return v_r_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_applyEditToHint_x3f(lean_object* v_hintMod_602_, lean_object* v_ihi_603_, lean_object* v_range_604_, lean_object* v_newText_605_){
_start:
{
lean_object* v_position_606_; lean_object* v_label_607_; lean_object* v_kind_x3f_608_; lean_object* v_textEdits_609_; lean_object* v_tooltip_x3f_610_; uint8_t v_paddingLeft_611_; uint8_t v_paddingRight_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_702_; 
v_position_606_ = lean_ctor_get(v_ihi_603_, 0);
v_label_607_ = lean_ctor_get(v_ihi_603_, 1);
v_kind_x3f_608_ = lean_ctor_get(v_ihi_603_, 2);
v_textEdits_609_ = lean_ctor_get(v_ihi_603_, 3);
v_tooltip_x3f_610_ = lean_ctor_get(v_ihi_603_, 4);
v_paddingLeft_611_ = lean_ctor_get_uint8(v_ihi_603_, sizeof(void*)*5);
v_paddingRight_612_ = lean_ctor_get_uint8(v_ihi_603_, sizeof(void*)*5 + 1);
v_isSharedCheck_702_ = !lean_is_exclusive(v_ihi_603_);
if (v_isSharedCheck_702_ == 0)
{
v___x_614_ = v_ihi_603_;
v_isShared_615_ = v_isSharedCheck_702_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_tooltip_x3f_610_);
lean_inc(v_textEdits_609_);
lean_inc(v_kind_x3f_608_);
lean_inc(v_label_607_);
lean_inc(v_position_606_);
lean_dec(v_ihi_603_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_702_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_619_; lean_object* v___y_630_; lean_object* v___y_631_; uint8_t v___y_646_; uint8_t v___y_681_; uint8_t v___y_682_; uint8_t v___y_685_; 
if (lean_obj_tag(v_label_607_) == 0)
{
uint8_t v___x_694_; 
v___x_694_ = 0;
v___y_685_ = v___x_694_;
goto v___jp_684_;
}
else
{
lean_object* v_p_695_; lean_object* v___x_696_; lean_object* v___x_697_; uint8_t v___x_698_; 
v_p_695_ = lean_ctor_get(v_label_607_, 0);
v___x_696_ = lean_unsigned_to_nat(0u);
v___x_697_ = lean_array_get_size(v_p_695_);
v___x_698_ = lean_nat_dec_lt(v___x_696_, v___x_697_);
if (v___x_698_ == 0)
{
v___y_685_ = v___x_698_;
goto v___jp_684_;
}
else
{
if (v___x_698_ == 0)
{
v___y_685_ = v___x_698_;
goto v___jp_684_;
}
else
{
size_t v___x_699_; size_t v___x_700_; uint8_t v___x_701_; 
v___x_699_ = ((size_t)0ULL);
v___x_700_ = lean_usize_of_nat(v___x_697_);
v___x_701_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5(v_hintMod_602_, v_range_604_, v_p_695_, v___x_699_, v___x_700_);
v___y_685_ = v___x_701_;
goto v___jp_684_;
}
}
}
v___jp_616_:
{
size_t v_sz_620_; size_t v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
v_sz_620_ = lean_array_size(v_textEdits_609_);
v___x_621_ = ((size_t)0ULL);
v___x_622_ = l_unsafeCast___redArg(v_textEdits_609_);
lean_dec_ref(v_textEdits_609_);
v___x_623_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2(v_range_604_, v___y_618_, v_sz_620_, v___x_621_, v___x_622_);
lean_dec(v___y_618_);
v___x_624_ = l_unsafeCast___redArg(v___x_623_);
lean_dec_ref(v___x_623_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 3, v___x_624_);
lean_ctor_set(v___x_614_, 1, v___y_619_);
lean_ctor_set(v___x_614_, 0, v___y_617_);
v___x_626_ = v___x_614_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___y_617_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v___y_619_);
lean_ctor_set(v_reuseFailAlloc_628_, 2, v_kind_x3f_608_);
lean_ctor_set(v_reuseFailAlloc_628_, 3, v___x_624_);
lean_ctor_set(v_reuseFailAlloc_628_, 4, v_tooltip_x3f_610_);
lean_ctor_set_uint8(v_reuseFailAlloc_628_, sizeof(void*)*5, v_paddingLeft_611_);
lean_ctor_set_uint8(v_reuseFailAlloc_628_, sizeof(void*)*5 + 1, v_paddingRight_612_);
v___x_626_ = v_reuseFailAlloc_628_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
lean_object* v___x_627_; 
v___x_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
return v___x_627_;
}
}
v___jp_629_:
{
if (lean_obj_tag(v_label_607_) == 0)
{
v___y_617_ = v___y_631_;
v___y_618_ = v___y_630_;
v___y_619_ = v_label_607_;
goto v___jp_616_;
}
else
{
lean_object* v_p_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_644_; 
v_p_632_ = lean_ctor_get(v_label_607_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v_label_607_);
if (v_isSharedCheck_644_ == 0)
{
v___x_634_ = v_label_607_;
v_isShared_635_ = v_isSharedCheck_644_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_p_632_);
lean_dec(v_label_607_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_644_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
size_t v_sz_636_; size_t v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v_sz_636_ = lean_array_size(v_p_632_);
v___x_637_ = ((size_t)0ULL);
v___x_638_ = l_unsafeCast___redArg(v_p_632_);
lean_dec_ref(v_p_632_);
lean_inc_ref(v_range_604_);
v___x_639_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3(v_hintMod_602_, v_range_604_, v___y_630_, v_sz_636_, v___x_637_, v___x_638_);
v___x_640_ = l_unsafeCast___redArg(v___x_639_);
lean_dec_ref(v___x_639_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v___x_640_);
v___x_642_ = v___x_634_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
v___y_617_ = v___y_631_;
v___y_618_ = v___y_630_;
v___y_619_ = v___x_642_;
goto v___jp_616_;
}
}
}
}
v___jp_645_:
{
if (v___y_646_ == 0)
{
lean_object* v_start_647_; lean_object* v_stop_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v_byteOffset_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v_start_647_ = lean_ctor_get(v_range_604_, 0);
v_stop_648_ = lean_ctor_get(v_range_604_, 1);
v___x_649_ = lean_string_utf8_byte_size(v_newText_605_);
v___x_650_ = lean_nat_to_int(v___x_649_);
v___x_651_ = l_Lean_Syntax_Range_bsize(v_range_604_);
v___x_652_ = lean_nat_to_int(v___x_651_);
v_byteOffset_653_ = lean_int_sub(v___x_650_, v___x_652_);
lean_dec(v___x_652_);
lean_dec(v___x_650_);
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_655_ = lean_nat_add(v_stop_648_, v___x_654_);
v___x_656_ = lean_nat_dec_le(v___x_655_, v_position_606_);
lean_dec(v___x_655_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; uint8_t v___x_658_; 
v___x_657_ = lean_nat_add(v_position_606_, v___x_654_);
v___x_658_ = lean_nat_dec_le(v___x_657_, v_start_647_);
lean_dec(v___x_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_659_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0));
v___x_660_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__1));
v___x_661_ = lean_unsigned_to_nat(87u);
v___x_662_ = lean_unsigned_to_nat(6u);
v___x_663_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__2));
v___x_664_ = l_Nat_reprFast(v_position_606_);
v___x_665_ = lean_string_append(v___x_663_, v___x_664_);
lean_dec_ref(v___x_664_);
v___x_666_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__3));
v___x_667_ = lean_string_append(v___x_665_, v___x_666_);
lean_inc(v_start_647_);
v___x_668_ = l_Nat_reprFast(v_start_647_);
v___x_669_ = lean_string_append(v___x_667_, v___x_668_);
lean_dec_ref(v___x_668_);
v___x_670_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__4));
v___x_671_ = lean_string_append(v___x_669_, v___x_670_);
lean_inc(v_stop_648_);
v___x_672_ = l_Nat_reprFast(v_stop_648_);
v___x_673_ = lean_string_append(v___x_671_, v___x_672_);
lean_dec_ref(v___x_672_);
v___x_674_ = l_mkPanicMessageWithDecl(v___x_659_, v___x_660_, v___x_661_, v___x_662_, v___x_673_);
lean_dec_ref(v___x_673_);
v___x_675_ = l_panic___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__1(v___x_674_);
v___y_630_ = v_byteOffset_653_;
v___y_631_ = v___x_675_;
goto v___jp_629_;
}
else
{
v___y_630_ = v_byteOffset_653_;
v___y_631_ = v_position_606_;
goto v___jp_629_;
}
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_676_ = lean_nat_to_int(v_position_606_);
v___x_677_ = lean_int_add(v___x_676_, v_byteOffset_653_);
lean_dec(v___x_676_);
v___x_678_ = l_Int_toNat(v___x_677_);
lean_dec(v___x_677_);
v___y_630_ = v_byteOffset_653_;
v___y_631_ = v___x_678_;
goto v___jp_629_;
}
}
else
{
lean_object* v___x_679_; 
lean_del_object(v___x_614_);
lean_dec(v_tooltip_x3f_610_);
lean_dec_ref(v_textEdits_609_);
lean_dec(v_kind_x3f_608_);
lean_dec_ref(v_label_607_);
lean_dec(v_position_606_);
lean_dec_ref(v_range_604_);
v___x_679_ = lean_box(0);
return v___x_679_;
}
}
v___jp_680_:
{
if (v___y_682_ == 0)
{
v___y_646_ = v___y_681_;
goto v___jp_645_;
}
else
{
lean_object* v___x_683_; 
lean_del_object(v___x_614_);
lean_dec(v_tooltip_x3f_610_);
lean_dec_ref(v_textEdits_609_);
lean_dec(v_kind_x3f_608_);
lean_dec_ref(v_label_607_);
lean_dec(v_position_606_);
lean_dec_ref(v_range_604_);
v___x_683_ = lean_box(0);
return v___x_683_;
}
}
v___jp_684_:
{
uint8_t v___x_686_; uint8_t v___x_687_; 
v___x_686_ = 1;
v___x_687_ = l_Lean_Syntax_Range_contains(v_range_604_, v_position_606_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_688_ = lean_unsigned_to_nat(0u);
v___x_689_ = lean_array_get_size(v_textEdits_609_);
v___x_690_ = lean_nat_dec_lt(v___x_688_, v___x_689_);
if (v___x_690_ == 0)
{
v___y_646_ = v___y_685_;
goto v___jp_645_;
}
else
{
if (v___x_690_ == 0)
{
v___y_646_ = v___y_685_;
goto v___jp_645_;
}
else
{
size_t v___x_691_; size_t v___x_692_; uint8_t v___x_693_; 
v___x_691_ = ((size_t)0ULL);
v___x_692_ = lean_usize_of_nat(v___x_689_);
v___x_693_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4(v_range_604_, v___x_687_, v_textEdits_609_, v___x_691_, v___x_692_);
v___y_681_ = v___y_685_;
v___y_682_ = v___x_693_;
goto v___jp_680_;
}
}
}
else
{
v___y_681_ = v___y_685_;
v___y_682_ = v___x_687_;
goto v___jp_680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_applyEditToHint_x3f___boxed(lean_object* v_hintMod_703_, lean_object* v_ihi_704_, lean_object* v_range_705_, lean_object* v_newText_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lean_Server_FileWorker_applyEditToHint_x3f(v_hintMod_703_, v_ihi_704_, v_range_705_, v_newText_706_);
lean_dec_ref(v_newText_706_);
lean_dec(v_hintMod_703_);
return v_res_707_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instImpl___closed__5_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_(void){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = ((lean_object*)(l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_));
v___x_718_ = l_unsafeCast___redArg(v___x_717_);
return v___x_718_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_(void){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = lean_obj_once(&l_Lean_Server_FileWorker_instImpl___closed__5_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_, &l_Lean_Server_FileWorker_instImpl___closed__5_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__once, _init_l_Lean_Server_FileWorker_instImpl___closed__5_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_);
return v___x_719_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instTypeNameInlayHintState(void){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_;
return v___x_720_;
}
}
static lean_object* _init_l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0(void){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = l_Lean_Server_instInhabitedRequestError_default;
v___x_739_ = lean_alloc_closure((void*)(l_instInhabitedEIO___aux__1___boxed), 4, 3);
lean_closure_set(v___x_739_, 0, lean_box(0));
lean_closure_set(v___x_739_, 1, lean_box(0));
lean_closure_set(v___x_739_, 2, v___x_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0(lean_object* v_msg_740_, lean_object* v___y_741_){
_start:
{
lean_object* v___x_743_; lean_object* v___f_744_; lean_object* v___x_14669__overap_745_; lean_object* v___x_746_; 
v___x_743_ = lean_obj_once(&l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0, &l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0_once, _init_l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0);
v___f_744_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_744_, 0, v___x_743_);
v___x_14669__overap_745_ = lean_panic_fn_borrowed(v___f_744_, v_msg_740_);
lean_dec_ref(v___f_744_);
lean_inc_ref(v___y_741_);
v___x_746_ = lean_apply_2(v___x_14669__overap_745_, v___y_741_, lean_box(0));
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___boxed(lean_object* v_msg_747_, lean_object* v___y_748_, lean_object* v___y_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0(v_msg_747_, v___y_748_);
lean_dec_ref(v___y_748_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__1(uint8_t v___x_751_, lean_object* v_x_752_, lean_object* v_x_753_, lean_object* v_x_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_758_ = lean_box(v___x_751_);
v___x_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
lean_ctor_set(v___x_759_, 1, v___y_755_);
v___x_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__1___boxed(lean_object* v___x_761_, lean_object* v_x_762_, lean_object* v_x_763_, lean_object* v_x_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
uint8_t v___x_17653__boxed_768_; lean_object* v_res_769_; 
v___x_17653__boxed_768_ = lean_unbox(v___x_761_);
v_res_769_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__1(v___x_17653__boxed_768_, v_x_762_, v_x_763_, v_x_764_, v___y_765_, v___y_766_);
lean_dec_ref(v___y_766_);
lean_dec_ref(v_x_764_);
lean_dec_ref(v_x_763_);
lean_dec_ref(v_x_762_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__0(lean_object* v_ci_770_, lean_object* v_i_771_, lean_object* v_x_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
if (lean_obj_tag(v_i_771_) == 10)
{
lean_object* v_i_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_811_; 
v_i_776_ = lean_ctor_get(v_i_771_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v_i_771_);
if (v_isSharedCheck_811_ == 0)
{
v___x_778_ = v_i_771_;
v_isShared_779_ = v_isSharedCheck_811_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_i_776_);
lean_dec(v_i_771_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_811_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lean_Elab_InlayHint_ofCustomInfo_x3f(v_i_776_);
lean_dec_ref(v_i_776_);
if (lean_obj_tag(v___x_780_) == 1)
{
lean_object* v_val_781_; lean_object* v_lctx_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
lean_del_object(v___x_778_);
v_val_781_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_val_781_);
lean_dec_ref_known(v___x_780_, 1);
v_lctx_782_ = lean_ctor_get(v_val_781_, 1);
lean_inc_ref(v_lctx_782_);
v___x_783_ = lean_alloc_closure((void*)(l_Lean_Elab_InlayHint_resolveDeferred___boxed), 6, 1);
lean_closure_set(v___x_783_, 0, v_val_781_);
v___x_784_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ci_770_, v_lctx_782_, v___x_783_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_796_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_796_ == 0)
{
v___x_787_ = v___x_784_;
v_isShared_788_ = v_isSharedCheck_796_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_784_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_796_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v_toInlayHintInfo_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_794_; 
v_toInlayHintInfo_789_ = lean_ctor_get(v_a_785_, 0);
lean_inc_ref(v_toInlayHintInfo_789_);
lean_dec(v_a_785_);
v___x_790_ = lean_box(0);
v___x_791_ = lean_array_push(v___y_773_, v_toInlayHintInfo_789_);
v___x_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_792_, 0, v___x_790_);
lean_ctor_set(v___x_792_, 1, v___x_791_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_792_);
v___x_794_ = v___x_787_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_805_; 
lean_dec_ref(v___y_773_);
v_a_797_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_805_ == 0)
{
v___x_799_ = v___x_784_;
v_isShared_800_ = v_isSharedCheck_805_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_784_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_805_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_803_; 
v___x_801_ = l_Lean_Server_RequestError_ofIoError(v_a_797_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v___x_801_);
v___x_803_ = v___x_799_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
else
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_809_; 
lean_dec(v___x_780_);
lean_dec_ref(v_ci_770_);
v___x_806_ = lean_box(0);
v___x_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
lean_ctor_set(v___x_807_, 1, v___y_773_);
if (v_isShared_779_ == 0)
{
lean_ctor_set_tag(v___x_778_, 0);
lean_ctor_set(v___x_778_, 0, v___x_807_);
v___x_809_ = v___x_778_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
else
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
lean_dec_ref(v_i_771_);
lean_dec_ref(v_ci_770_);
v___x_812_ = lean_box(0);
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
lean_ctor_set(v___x_813_, 1, v___y_773_);
v___x_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__0___boxed(lean_object* v_ci_815_, lean_object* v_i_816_, lean_object* v_x_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__0(v_ci_815_, v_i_816_, v_x_817_, v___y_818_, v___y_819_);
lean_dec_ref(v___y_819_);
lean_dec_ref(v_x_817_);
return v_res_821_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = l_instMonadEIO___redArg();
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg(lean_object* v_msg_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___f_829_; lean_object* v___f_830_; lean_object* v___f_831_; lean_object* v___f_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_17052__overap_841_; lean_object* v___x_842_; 
v___x_827_ = lean_obj_once(&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg___closed__0, &l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg___closed__0_once, _init_l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg___closed__0);
v___x_828_ = l_ReaderT_instMonad___redArg(v___x_827_);
lean_inc_ref_n(v___x_828_, 6);
v___f_829_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_829_, 0, v___x_828_);
v___f_830_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_830_, 0, v___x_828_);
v___f_831_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_831_, 0, v___x_828_);
v___f_832_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_832_, 0, v___x_828_);
v___x_833_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_833_, 0, lean_box(0));
lean_closure_set(v___x_833_, 1, lean_box(0));
lean_closure_set(v___x_833_, 2, v___x_828_);
v___x_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
lean_ctor_set(v___x_834_, 1, v___f_829_);
v___x_835_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_835_, 0, lean_box(0));
lean_closure_set(v___x_835_, 1, lean_box(0));
lean_closure_set(v___x_835_, 2, v___x_828_);
v___x_836_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_836_, 0, v___x_834_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
lean_ctor_set(v___x_836_, 2, v___f_830_);
lean_ctor_set(v___x_836_, 3, v___f_831_);
lean_ctor_set(v___x_836_, 4, v___f_832_);
v___x_837_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_837_, 0, lean_box(0));
lean_closure_set(v___x_837_, 1, lean_box(0));
lean_closure_set(v___x_837_, 2, v___x_828_);
v___x_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_836_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = lean_box(0);
v___x_840_ = l_instInhabitedOfMonad___redArg(v___x_838_, v___x_839_);
v___x_17052__overap_841_ = lean_panic_fn_borrowed(v___x_840_, v_msg_823_);
lean_dec(v___x_840_);
lean_inc_ref(v___y_825_);
v___x_842_ = lean_apply_3(v___x_17052__overap_841_, v___y_824_, v___y_825_, lean_box(0));
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_msg_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg(v_msg_843_, v___y_844_, v___y_845_);
lean_dec_ref(v___y_845_);
return v_res_847_;
}
}
static lean_object* _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_851_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__2));
v___x_852_ = lean_unsigned_to_nat(21u);
v___x_853_ = lean_unsigned_to_nat(65u);
v___x_854_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__1));
v___x_855_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__0));
v___x_856_ = l_mkPanicMessageWithDecl(v___x_855_, v___x_854_, v___x_853_, v___x_852_, v___x_851_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg(lean_object* v_preNode_857_, lean_object* v_postNode_858_, lean_object* v_x_859_, lean_object* v_x_860_, lean_object* v___y_861_, lean_object* v___y_862_){
_start:
{
switch(lean_obj_tag(v_x_860_))
{
case 0:
{
lean_object* v_i_864_; lean_object* v_t_865_; lean_object* v___x_866_; 
v_i_864_ = lean_ctor_get(v_x_860_, 0);
lean_inc_ref(v_i_864_);
v_t_865_ = lean_ctor_get(v_x_860_, 1);
lean_inc_ref(v_t_865_);
lean_dec_ref_known(v_x_860_, 2);
v___x_866_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_864_, v_x_859_);
v_x_859_ = v___x_866_;
v_x_860_ = v_t_865_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_859_) == 0)
{
lean_object* v___x_868_; lean_object* v___x_869_; 
lean_dec_ref_known(v_x_860_, 2);
lean_dec_ref(v_postNode_858_);
lean_dec_ref(v_preNode_857_);
v___x_868_ = lean_obj_once(&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__3, &l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__3_once, _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___closed__3);
v___x_869_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg(v___x_868_, v___y_861_, v___y_862_);
return v___x_869_;
}
else
{
lean_object* v_i_870_; lean_object* v_children_871_; lean_object* v_val_872_; lean_object* v___x_873_; 
v_i_870_ = lean_ctor_get(v_x_860_, 0);
lean_inc_ref_n(v_i_870_, 2);
v_children_871_ = lean_ctor_get(v_x_860_, 1);
lean_inc_ref_n(v_children_871_, 2);
lean_dec_ref_known(v_x_860_, 2);
v_val_872_ = lean_ctor_get(v_x_859_, 0);
lean_inc_n(v_val_872_, 2);
lean_inc_ref(v_preNode_857_);
lean_inc_ref(v___y_862_);
v___x_873_ = lean_apply_6(v_preNode_857_, v_val_872_, v_i_870_, v_children_871_, v___y_861_, v___y_862_, lean_box(0));
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v_fst_875_; uint8_t v___x_876_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_a_874_);
lean_dec_ref_known(v___x_873_, 1);
v_fst_875_ = lean_ctor_get(v_a_874_, 0);
v___x_876_ = lean_unbox(v_fst_875_);
if (v___x_876_ == 0)
{
lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_911_; 
lean_dec_ref(v_preNode_857_);
v_isSharedCheck_911_ = !lean_is_exclusive(v_x_859_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; 
v_unused_912_ = lean_ctor_get(v_x_859_, 0);
lean_dec(v_unused_912_);
v___x_878_ = v_x_859_;
v_isShared_879_ = v_isSharedCheck_911_;
goto v_resetjp_877_;
}
else
{
lean_dec(v_x_859_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_911_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v_snd_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v_snd_880_ = lean_ctor_get(v_a_874_, 1);
lean_inc(v_snd_880_);
lean_dec(v_a_874_);
v___x_881_ = lean_box(0);
lean_inc_ref(v___y_862_);
v___x_882_ = lean_apply_7(v_postNode_858_, v_val_872_, v_i_870_, v_children_871_, v___x_881_, v_snd_880_, v___y_862_, lean_box(0));
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_902_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_902_ == 0)
{
v___x_885_ = v___x_882_;
v_isShared_886_ = v_isSharedCheck_902_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_882_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_902_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v_fst_887_; lean_object* v_snd_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_901_; 
v_fst_887_ = lean_ctor_get(v_a_883_, 0);
v_snd_888_ = lean_ctor_get(v_a_883_, 1);
v_isSharedCheck_901_ = !lean_is_exclusive(v_a_883_);
if (v_isSharedCheck_901_ == 0)
{
v___x_890_ = v_a_883_;
v_isShared_891_ = v_isSharedCheck_901_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_snd_888_);
lean_inc(v_fst_887_);
lean_dec(v_a_883_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_901_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 0, v_fst_887_);
v___x_893_ = v___x_878_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_fst_887_);
v___x_893_ = v_reuseFailAlloc_900_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
lean_object* v___x_895_; 
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 0, v___x_893_);
v___x_895_ = v___x_890_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_893_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_snd_888_);
v___x_895_ = v_reuseFailAlloc_899_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
lean_object* v___x_897_; 
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v___x_895_);
v___x_897_ = v___x_885_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_895_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_del_object(v___x_878_);
v_a_903_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_882_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_882_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
}
else
{
lean_object* v_snd_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_snd_913_ = lean_ctor_get(v_a_874_, 1);
lean_inc(v_snd_913_);
lean_dec(v_a_874_);
v___x_914_ = l_Lean_Elab_Info_updateContext_x3f(v_x_859_, v_i_870_);
v___x_915_ = l_Lean_PersistentArray_toList___redArg(v_children_871_);
v___x_916_ = lean_box(0);
lean_inc_ref(v_postNode_858_);
v___x_917_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5___redArg(v_preNode_857_, v_postNode_858_, v___x_914_, v___x_915_, v___x_916_, v_snd_913_, v___y_862_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v_fst_919_; lean_object* v_snd_920_; lean_object* v___x_921_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_917_, 1);
v_fst_919_ = lean_ctor_get(v_a_918_, 0);
lean_inc(v_fst_919_);
v_snd_920_ = lean_ctor_get(v_a_918_, 1);
lean_inc(v_snd_920_);
lean_dec(v_a_918_);
lean_inc_ref(v___y_862_);
v___x_921_ = lean_apply_7(v_postNode_858_, v_val_872_, v_i_870_, v_children_871_, v_fst_919_, v_snd_920_, v___y_862_, lean_box(0));
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_939_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_939_ == 0)
{
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_939_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_939_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v_fst_926_; lean_object* v_snd_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_938_; 
v_fst_926_ = lean_ctor_get(v_a_922_, 0);
v_snd_927_ = lean_ctor_get(v_a_922_, 1);
v_isSharedCheck_938_ = !lean_is_exclusive(v_a_922_);
if (v_isSharedCheck_938_ == 0)
{
v___x_929_ = v_a_922_;
v_isShared_930_ = v_isSharedCheck_938_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_snd_927_);
lean_inc(v_fst_926_);
lean_dec(v_a_922_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_938_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_931_; lean_object* v___x_933_; 
v___x_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_931_, 0, v_fst_926_);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 0, v___x_931_);
v___x_933_ = v___x_929_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_931_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_snd_927_);
v___x_933_ = v_reuseFailAlloc_937_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
lean_object* v___x_935_; 
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_933_);
v___x_935_ = v___x_924_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_933_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
v_a_940_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_921_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_921_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
lean_dec(v_val_872_);
lean_dec_ref(v_children_871_);
lean_dec_ref(v_i_870_);
lean_dec_ref(v_postNode_858_);
v_a_948_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_917_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_917_);
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
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec(v_val_872_);
lean_dec_ref(v_children_871_);
lean_dec_ref_known(v_x_859_, 1);
lean_dec_ref(v_i_870_);
lean_dec_ref(v_postNode_858_);
lean_dec_ref(v_preNode_857_);
v_a_956_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_873_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_873_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
default: 
{
lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_972_; 
lean_dec(v_x_859_);
lean_dec_ref(v_postNode_858_);
lean_dec_ref(v_preNode_857_);
v_isSharedCheck_972_ = !lean_is_exclusive(v_x_860_);
if (v_isSharedCheck_972_ == 0)
{
lean_object* v_unused_973_; 
v_unused_973_ = lean_ctor_get(v_x_860_, 0);
lean_dec(v_unused_973_);
v___x_965_ = v_x_860_;
v_isShared_966_ = v_isSharedCheck_972_;
goto v_resetjp_964_;
}
else
{
lean_dec(v_x_860_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_972_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_967_ = lean_box(0);
v___x_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
lean_ctor_set(v___x_968_, 1, v___y_861_);
if (v_isShared_966_ == 0)
{
lean_ctor_set_tag(v___x_965_, 0);
lean_ctor_set(v___x_965_, 0, v___x_968_);
v___x_970_ = v___x_965_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5___redArg(lean_object* v_preNode_974_, lean_object* v_postNode_975_, lean_object* v___x_976_, lean_object* v_x_977_, lean_object* v_x_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
if (lean_obj_tag(v_x_977_) == 0)
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
lean_dec(v___x_976_);
lean_dec_ref(v_postNode_975_);
lean_dec_ref(v_preNode_974_);
v___x_982_ = l_List_reverse___redArg(v_x_978_);
v___x_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_982_);
lean_ctor_set(v___x_983_, 1, v___y_979_);
v___x_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
return v___x_984_;
}
else
{
lean_object* v_head_985_; lean_object* v_tail_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1006_; 
v_head_985_ = lean_ctor_get(v_x_977_, 0);
v_tail_986_ = lean_ctor_get(v_x_977_, 1);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_x_977_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_988_ = v_x_977_;
v_isShared_989_ = v_isSharedCheck_1006_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_tail_986_);
lean_inc(v_head_985_);
lean_dec(v_x_977_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1006_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; 
lean_inc(v___x_976_);
lean_inc_ref(v_postNode_975_);
lean_inc_ref(v_preNode_974_);
v___x_990_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg(v_preNode_974_, v_postNode_975_, v___x_976_, v_head_985_, v___y_979_, v___y_980_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v_fst_992_; lean_object* v_snd_993_; lean_object* v___x_995_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_991_);
lean_dec_ref_known(v___x_990_, 1);
v_fst_992_ = lean_ctor_get(v_a_991_, 0);
lean_inc(v_fst_992_);
v_snd_993_ = lean_ctor_get(v_a_991_, 1);
lean_inc(v_snd_993_);
lean_dec(v_a_991_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v_x_978_);
lean_ctor_set(v___x_988_, 0, v_fst_992_);
v___x_995_ = v___x_988_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_fst_992_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v_x_978_);
v___x_995_ = v_reuseFailAlloc_997_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
v_x_977_ = v_tail_986_;
v_x_978_ = v___x_995_;
v___y_979_ = v_snd_993_;
goto _start;
}
}
else
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1005_; 
lean_del_object(v___x_988_);
lean_dec(v_tail_986_);
lean_dec(v_x_978_);
lean_dec(v___x_976_);
lean_dec_ref(v_postNode_975_);
lean_dec_ref(v_preNode_974_);
v_a_998_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_1000_ = v___x_990_;
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_990_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_998_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5___redArg___boxed(lean_object* v_preNode_1007_, lean_object* v_postNode_1008_, lean_object* v___x_1009_, lean_object* v_x_1010_, lean_object* v_x_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5___redArg(v_preNode_1007_, v_postNode_1008_, v___x_1009_, v_x_1010_, v_x_1011_, v___y_1012_, v___y_1013_);
lean_dec_ref(v___y_1013_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg___boxed(lean_object* v_preNode_1016_, lean_object* v_postNode_1017_, lean_object* v_x_1018_, lean_object* v_x_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg(v_preNode_1016_, v_postNode_1017_, v_x_1018_, v_x_1019_, v___y_1020_, v___y_1021_);
lean_dec_ref(v___y_1021_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___lam__0(lean_object* v_postNode_1024_, lean_object* v_ci_1025_, lean_object* v_i_1026_, lean_object* v_cs_1027_, lean_object* v_x_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; 
lean_inc_ref(v___y_1030_);
v___x_1032_ = lean_apply_6(v_postNode_1024_, v_ci_1025_, v_i_1026_, v_cs_1027_, v___y_1029_, v___y_1030_, lean_box(0));
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___lam__0___boxed(lean_object* v_postNode_1033_, lean_object* v_ci_1034_, lean_object* v_i_1035_, lean_object* v_cs_1036_, lean_object* v_x_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___lam__0(v_postNode_1033_, v_ci_1034_, v_i_1035_, v_cs_1036_, v_x_1037_, v___y_1038_, v___y_1039_);
lean_dec_ref(v___y_1039_);
lean_dec(v_x_1037_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3(lean_object* v_preNode_1042_, lean_object* v_postNode_1043_, lean_object* v_ctx_x3f_1044_, lean_object* v_t_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v___f_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___f_1049_ = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1049_, 0, v_postNode_1043_);
v___x_1050_ = lean_box(0);
v___x_1051_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg(v_preNode_1042_, v___f_1049_, v_ctx_x3f_1044_, v_t_1045_, v___y_1046_, v___y_1047_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1068_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1054_ = v___x_1051_;
v_isShared_1055_ = v_isSharedCheck_1068_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1051_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1068_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v_snd_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1066_; 
v_snd_1056_ = lean_ctor_get(v_a_1052_, 1);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_a_1052_);
if (v_isSharedCheck_1066_ == 0)
{
lean_object* v_unused_1067_; 
v_unused_1067_ = lean_ctor_get(v_a_1052_, 0);
lean_dec(v_unused_1067_);
v___x_1058_ = v_a_1052_;
v_isShared_1059_ = v_isSharedCheck_1066_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_snd_1056_);
lean_dec(v_a_1052_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1066_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 0, v___x_1050_);
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1050_);
lean_ctor_set(v_reuseFailAlloc_1065_, 1, v_snd_1056_);
v___x_1061_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_object* v___x_1063_; 
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1061_);
v___x_1063_ = v___x_1054_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1061_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_a_1069_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1051_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1051_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___boxed(lean_object* v_preNode_1077_, lean_object* v_postNode_1078_, lean_object* v_ctx_x3f_1079_, lean_object* v_t_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3(v_preNode_1077_, v_postNode_1078_, v_ctx_x3f_1079_, v_t_1080_, v___y_1081_, v___y_1082_);
lean_dec_ref(v___y_1082_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg(lean_object* v_a_1086_, lean_object* v_b_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_array_1091_; lean_object* v_start_1092_; lean_object* v_stop_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1116_; 
v_array_1091_ = lean_ctor_get(v_a_1086_, 0);
v_start_1092_ = lean_ctor_get(v_a_1086_, 1);
v_stop_1093_ = lean_ctor_get(v_a_1086_, 2);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_a_1086_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1095_ = v_a_1086_;
v_isShared_1096_ = v_isSharedCheck_1116_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_stop_1093_);
lean_inc(v_start_1092_);
lean_inc(v_array_1091_);
lean_dec(v_a_1086_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1116_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
uint8_t v___x_1097_; 
v___x_1097_ = lean_nat_dec_lt(v_start_1092_, v_stop_1093_);
if (v___x_1097_ == 0)
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_del_object(v___x_1095_);
lean_dec(v_stop_1093_);
lean_dec(v_start_1092_);
lean_dec_ref(v_array_1091_);
v___x_1098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1098_, 0, v_b_1087_);
lean_ctor_set(v___x_1098_, 1, v___y_1088_);
v___x_1099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
return v___x_1099_;
}
else
{
lean_object* v___f_1100_; lean_object* v___x_1101_; lean_object* v___f_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
v___f_1100_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___closed__0));
v___x_1101_ = lean_box(v___x_1097_);
v___f_1102_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___lam__1___boxed), 7, 1);
lean_closure_set(v___f_1102_, 0, v___x_1101_);
v___x_1103_ = lean_box(0);
v___x_1104_ = lean_unsigned_to_nat(1u);
v___x_1105_ = lean_nat_add(v_start_1092_, v___x_1104_);
lean_inc_ref(v_array_1091_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 1, v___x_1105_);
v___x_1107_ = v___x_1095_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_array_1091_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v___x_1105_);
lean_ctor_set(v_reuseFailAlloc_1115_, 2, v_stop_1093_);
v___x_1107_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1108_ = lean_array_fget(v_array_1091_, v_start_1092_);
lean_dec(v_start_1092_);
lean_dec_ref(v_array_1091_);
v___x_1109_ = lean_box(0);
v___x_1110_ = l_Lean_Server_Snapshots_Snapshot_infoTree(v___x_1108_);
v___x_1111_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3(v___f_1102_, v___f_1100_, v___x_1109_, v___x_1110_, v___y_1088_, v___y_1089_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v_a_1112_; lean_object* v_snd_1113_; 
v_a_1112_ = lean_ctor_get(v___x_1111_, 0);
lean_inc(v_a_1112_);
lean_dec_ref_known(v___x_1111_, 1);
v_snd_1113_ = lean_ctor_get(v_a_1112_, 1);
lean_inc(v_snd_1113_);
lean_dec(v_a_1112_);
v_a_1086_ = v___x_1107_;
v_b_1087_ = v___x_1103_;
v___y_1088_ = v_snd_1113_;
goto _start;
}
else
{
lean_dec_ref(v___x_1107_);
return v___x_1111_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg___boxed(lean_object* v_a_1117_, lean_object* v_b_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg(v_a_1117_, v_b_1118_, v___y_1119_, v___y_1120_);
lean_dec_ref(v___y_1120_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5(lean_object* v___x_1123_, uint8_t v_val_1124_, lean_object* v_as_1125_, size_t v_i_1126_, size_t v_stop_1127_, lean_object* v_b_1128_){
_start:
{
lean_object* v___y_1130_; uint8_t v___x_1134_; 
v___x_1134_ = lean_usize_dec_eq(v_i_1126_, v_stop_1127_);
if (v___x_1134_ == 0)
{
lean_object* v___x_1135_; lean_object* v_position_1136_; uint8_t v___x_1137_; 
v___x_1135_ = lean_array_uget_borrowed(v_as_1125_, v_i_1126_);
v_position_1136_ = lean_ctor_get(v___x_1135_, 0);
v___x_1137_ = l_Lean_Syntax_Range_contains(v___x_1123_, v_position_1136_, v_val_1124_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; 
lean_inc(v___x_1135_);
v___x_1138_ = lean_array_push(v_b_1128_, v___x_1135_);
v___y_1130_ = v___x_1138_;
goto v___jp_1129_;
}
else
{
v___y_1130_ = v_b_1128_;
goto v___jp_1129_;
}
}
else
{
return v_b_1128_;
}
v___jp_1129_:
{
size_t v___x_1131_; size_t v___x_1132_; 
v___x_1131_ = ((size_t)1ULL);
v___x_1132_ = lean_usize_add(v_i_1126_, v___x_1131_);
v_i_1126_ = v___x_1132_;
v_b_1128_ = v___y_1130_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5___boxed(lean_object* v___x_1139_, lean_object* v_val_1140_, lean_object* v_as_1141_, lean_object* v_i_1142_, lean_object* v_stop_1143_, lean_object* v_b_1144_){
_start:
{
uint8_t v_val_18280__boxed_1145_; size_t v_i_boxed_1146_; size_t v_stop_boxed_1147_; lean_object* v_res_1148_; 
v_val_18280__boxed_1145_ = lean_unbox(v_val_1140_);
v_i_boxed_1146_ = lean_unbox_usize(v_i_1142_);
lean_dec(v_i_1142_);
v_stop_boxed_1147_ = lean_unbox_usize(v_stop_1143_);
lean_dec(v_stop_1143_);
v_res_1148_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5(v___x_1139_, v_val_18280__boxed_1145_, v_as_1141_, v_i_boxed_1146_, v_stop_boxed_1147_, v_b_1144_);
lean_dec_ref(v_as_1141_);
lean_dec_ref(v___x_1139_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___redArg(lean_object* v___x_1149_, size_t v_sz_1150_, size_t v_i_1151_, lean_object* v_bs_1152_){
_start:
{
uint8_t v___x_1154_; 
v___x_1154_ = lean_usize_dec_lt(v_i_1151_, v_sz_1150_);
if (v___x_1154_ == 0)
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
lean_dec_ref(v___x_1149_);
v___x_1155_ = l_unsafeCast___redArg(v_bs_1152_);
lean_dec_ref(v_bs_1152_);
v___x_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
return v___x_1156_;
}
else
{
lean_object* v_v_1157_; lean_object* v___x_1158_; lean_object* v_bs_x27_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_v_1157_ = lean_array_uget(v_bs_1152_, v_i_1151_);
v___x_1158_ = lean_unsigned_to_nat(0u);
v_bs_x27_1159_ = lean_array_uset(v_bs_1152_, v_i_1151_, v___x_1158_);
v___x_1160_ = l_unsafeCast___redArg(v_v_1157_);
lean_dec(v_v_1157_);
lean_inc_ref(v___x_1149_);
v___x_1161_ = l_Lean_Elab_InlayHintInfo_toLspInlayHint(v___x_1149_, v___x_1160_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; size_t v___x_1163_; size_t v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
lean_inc(v_a_1162_);
lean_dec_ref_known(v___x_1161_, 1);
v___x_1163_ = ((size_t)1ULL);
v___x_1164_ = lean_usize_add(v_i_1151_, v___x_1163_);
v___x_1165_ = l_unsafeCast___redArg(v_a_1162_);
lean_dec(v_a_1162_);
v___x_1166_ = lean_array_uset(v_bs_x27_1159_, v_i_1151_, v___x_1165_);
v_i_1151_ = v___x_1164_;
v_bs_1152_ = v___x_1166_;
goto _start;
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1176_; 
lean_dec_ref(v_bs_x27_1159_);
lean_dec_ref(v___x_1149_);
v_a_1168_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1170_ = v___x_1161_;
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1161_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1174_; 
v___x_1172_ = l_Lean_Server_RequestError_ofIoError(v_a_1168_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 0, v___x_1172_);
v___x_1174_ = v___x_1170_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v___x_1172_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___redArg___boxed(lean_object* v___x_1177_, lean_object* v_sz_1178_, lean_object* v_i_1179_, lean_object* v_bs_1180_, lean_object* v___y_1181_){
_start:
{
size_t v_sz_boxed_1182_; size_t v_i_boxed_1183_; lean_object* v_res_1184_; 
v_sz_boxed_1182_ = lean_unbox_usize(v_sz_1178_);
lean_dec(v_sz_1178_);
v_i_boxed_1183_ = lean_unbox_usize(v_i_1179_);
lean_dec(v_i_1179_);
v_res_1184_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___redArg(v___x_1177_, v_sz_boxed_1182_, v_i_boxed_1183_, v_bs_1180_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1(lean_object* v___x_1185_, size_t v_sz_1186_, size_t v_i_1187_, lean_object* v_bs_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___redArg(v___x_1185_, v_sz_1186_, v_i_1187_, v_bs_1188_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___boxed(lean_object* v___x_1192_, lean_object* v_sz_1193_, lean_object* v_i_1194_, lean_object* v_bs_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
size_t v_sz_boxed_1198_; size_t v_i_boxed_1199_; lean_object* v_res_1200_; 
v_sz_boxed_1198_ = lean_unbox_usize(v_sz_1193_);
lean_dec(v_sz_1193_);
v_i_boxed_1199_ = lean_unbox_usize(v_i_1194_);
lean_dec(v_i_1194_);
v_res_1200_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1(v___x_1192_, v_sz_boxed_1198_, v_i_boxed_1199_, v_bs_1195_, v___y_1196_);
lean_dec_ref(v___y_1196_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__2(lean_object* v___x_1201_, lean_object* v_as_1202_, size_t v_i_1203_, size_t v_stop_1204_, lean_object* v_b_1205_){
_start:
{
lean_object* v___y_1207_; uint8_t v___x_1211_; 
v___x_1211_ = lean_usize_dec_eq(v_i_1203_, v_stop_1204_);
if (v___x_1211_ == 0)
{
lean_object* v___x_1212_; lean_object* v_position_1213_; uint8_t v___x_1214_; uint8_t v___x_1215_; 
v___x_1212_ = lean_array_uget_borrowed(v_as_1202_, v_i_1203_);
v_position_1213_ = lean_ctor_get(v___x_1212_, 0);
v___x_1214_ = 1;
v___x_1215_ = l_Lean_Syntax_Range_contains(v___x_1201_, v_position_1213_, v___x_1214_);
if (v___x_1215_ == 0)
{
v___y_1207_ = v_b_1205_;
goto v___jp_1206_;
}
else
{
lean_object* v___x_1216_; 
lean_inc(v___x_1212_);
v___x_1216_ = lean_array_push(v_b_1205_, v___x_1212_);
v___y_1207_ = v___x_1216_;
goto v___jp_1206_;
}
}
else
{
return v_b_1205_;
}
v___jp_1206_:
{
size_t v___x_1208_; size_t v___x_1209_; 
v___x_1208_ = ((size_t)1ULL);
v___x_1209_ = lean_usize_add(v_i_1203_, v___x_1208_);
v_i_1203_ = v___x_1209_;
v_b_1205_ = v___y_1207_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___boxed(lean_object* v___x_1217_, lean_object* v_as_1218_, lean_object* v_i_1219_, lean_object* v_stop_1220_, lean_object* v_b_1221_){
_start:
{
size_t v_i_boxed_1222_; size_t v_stop_boxed_1223_; lean_object* v_res_1224_; 
v_i_boxed_1222_ = lean_unbox_usize(v_i_1219_);
lean_dec(v_i_1219_);
v_stop_boxed_1223_ = lean_unbox_usize(v_stop_1220_);
lean_dec(v_stop_1220_);
v_res_1224_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__2(v___x_1217_, v_as_1218_, v_i_boxed_1222_, v_stop_boxed_1223_, v_b_1221_);
lean_dec_ref(v_as_1218_);
lean_dec_ref(v___x_1217_);
return v_res_1224_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_handleInlayHints___closed__2(void){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1227_ = ((lean_object*)(l_Lean_Server_FileWorker_handleInlayHints___closed__1));
v___x_1228_ = lean_unsigned_to_nat(2u);
v___x_1229_ = lean_unsigned_to_nat(162u);
v___x_1230_ = ((lean_object*)(l_Lean_Server_FileWorker_handleInlayHints___closed__0));
v___x_1231_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0));
v___x_1232_ = l_mkPanicMessageWithDecl(v___x_1231_, v___x_1230_, v___x_1229_, v___x_1228_, v___x_1227_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHints(lean_object* v_p_1233_, lean_object* v_s_1234_, lean_object* v_a_1235_){
_start:
{
lean_object* v_doc_1237_; lean_object* v_toEditableDocumentCore_1238_; lean_object* v_meta_1239_; lean_object* v_cancelTk_1240_; lean_object* v_cmdSnaps_1241_; lean_object* v_text_1242_; lean_object* v_oldInlayHints_1243_; lean_object* v_oldFinishedSnaps_1244_; lean_object* v_lastEditTimestamp_x3f_1245_; uint8_t v_isFirstRequestAfterEdit_1246_; lean_object* v___y_1248_; uint8_t v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; 
v_doc_1237_ = lean_ctor_get(v_a_1235_, 1);
v_toEditableDocumentCore_1238_ = lean_ctor_get(v_doc_1237_, 0);
v_meta_1239_ = lean_ctor_get(v_toEditableDocumentCore_1238_, 0);
v_cancelTk_1240_ = lean_ctor_get(v_a_1235_, 4);
v_cmdSnaps_1241_ = lean_ctor_get(v_toEditableDocumentCore_1238_, 2);
v_text_1242_ = lean_ctor_get(v_meta_1239_, 3);
v_oldInlayHints_1243_ = lean_ctor_get(v_s_1234_, 0);
v_oldFinishedSnaps_1244_ = lean_ctor_get(v_s_1234_, 1);
v_lastEditTimestamp_x3f_1245_ = lean_ctor_get(v_s_1234_, 2);
v_isFirstRequestAfterEdit_1246_ = lean_ctor_get_uint8(v_s_1234_, sizeof(void*)*3);
if (v_isFirstRequestAfterEdit_1246_ == 0)
{
lean_object* v_range_1278_; lean_object* v___x_1279_; lean_object* v___y_1281_; lean_object* v___y_1282_; lean_object* v___y_1283_; uint8_t v___y_1284_; lean_object* v_snd_1285_; lean_object* v___y_1298_; lean_object* v___y_1299_; lean_object* v___y_1300_; uint8_t v___y_1301_; lean_object* v___y_1302_; lean_object* v_lower_1303_; lean_object* v_upper_1304_; lean_object* v___y_1322_; lean_object* v___y_1323_; uint8_t v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; uint8_t v___y_1329_; lean_object* v___y_1330_; lean_object* v___y_1331_; uint8_t v___y_1332_; lean_object* v___y_1333_; lean_object* v___y_1334_; uint8_t v___y_1348_; lean_object* v___y_1349_; uint8_t v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1353_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___y_1362_; 
v_range_1278_ = lean_ctor_get(v_p_1233_, 2);
lean_inc_ref(v_range_1278_);
lean_dec_ref(v_p_1233_);
v___x_1279_ = l_Lean_FileMap_lspRangeToUtf8Range(v_text_1242_, v_range_1278_);
v___x_1359_ = lean_unsigned_to_nat(3000u);
v___x_1360_ = lean_io_mono_ms_now();
if (lean_obj_tag(v_lastEditTimestamp_x3f_1245_) == 0)
{
lean_object* v___x_1415_; 
lean_dec(v___x_1360_);
v___x_1415_ = lean_unsigned_to_nat(0u);
v___y_1362_ = v___x_1415_;
goto v___jp_1361_;
}
else
{
lean_object* v_val_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v_val_1416_ = lean_ctor_get(v_lastEditTimestamp_x3f_1245_, 0);
v___x_1417_ = lean_nat_sub(v___x_1360_, v_val_1416_);
lean_dec(v___x_1360_);
v___x_1418_ = lean_nat_sub(v___x_1359_, v___x_1417_);
lean_dec(v___x_1417_);
v___y_1362_ = v___x_1418_;
goto v___jp_1361_;
}
v___jp_1280_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1286_ = l_Array_append___redArg(v_snd_1285_, v___y_1283_);
lean_dec_ref(v___y_1283_);
v___x_1287_ = lean_array_get_size(v___x_1286_);
v___x_1288_ = lean_mk_empty_array_with_capacity(v___y_1281_);
v___x_1289_ = lean_nat_dec_lt(v___y_1281_, v___x_1287_);
lean_dec(v___y_1281_);
if (v___x_1289_ == 0)
{
lean_dec_ref(v___x_1279_);
v___y_1248_ = v___y_1282_;
v___y_1249_ = v___y_1284_;
v___y_1250_ = v___x_1286_;
v___y_1251_ = v___x_1288_;
goto v___jp_1247_;
}
else
{
uint8_t v___x_1290_; 
v___x_1290_ = lean_nat_dec_le(v___x_1287_, v___x_1287_);
if (v___x_1290_ == 0)
{
if (v___x_1289_ == 0)
{
lean_dec_ref(v___x_1279_);
v___y_1248_ = v___y_1282_;
v___y_1249_ = v___y_1284_;
v___y_1250_ = v___x_1286_;
v___y_1251_ = v___x_1288_;
goto v___jp_1247_;
}
else
{
size_t v___x_1291_; size_t v___x_1292_; lean_object* v___x_1293_; 
v___x_1291_ = ((size_t)0ULL);
v___x_1292_ = lean_usize_of_nat(v___x_1287_);
v___x_1293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__2(v___x_1279_, v___x_1286_, v___x_1291_, v___x_1292_, v___x_1288_);
lean_dec_ref(v___x_1279_);
v___y_1248_ = v___y_1282_;
v___y_1249_ = v___y_1284_;
v___y_1250_ = v___x_1286_;
v___y_1251_ = v___x_1293_;
goto v___jp_1247_;
}
}
else
{
size_t v___x_1294_; size_t v___x_1295_; lean_object* v___x_1296_; 
v___x_1294_ = ((size_t)0ULL);
v___x_1295_ = lean_usize_of_nat(v___x_1287_);
v___x_1296_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__2(v___x_1279_, v___x_1286_, v___x_1294_, v___x_1295_, v___x_1288_);
lean_dec_ref(v___x_1279_);
v___y_1248_ = v___y_1282_;
v___y_1249_ = v___y_1284_;
v___y_1250_ = v___x_1286_;
v___y_1251_ = v___x_1296_;
goto v___jp_1247_;
}
}
}
v___jp_1297_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1305_ = l_Array_toSubarray___redArg(v___y_1302_, v_lower_1303_, v_upper_1304_);
v___x_1306_ = lean_box(0);
v___x_1307_ = lean_mk_empty_array_with_capacity(v___y_1298_);
v___x_1308_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg(v___x_1305_, v___x_1306_, v___x_1307_, v_a_1235_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v_snd_1310_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
lean_dec_ref_known(v___x_1308_, 1);
v_snd_1310_ = lean_ctor_get(v_a_1309_, 1);
lean_inc(v_snd_1310_);
lean_dec(v_a_1309_);
v___y_1281_ = v___y_1298_;
v___y_1282_ = v___y_1299_;
v___y_1283_ = v___y_1300_;
v___y_1284_ = v___y_1301_;
v_snd_1285_ = v_snd_1310_;
goto v___jp_1280_;
}
else
{
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1311_; lean_object* v_snd_1312_; 
v_a_1311_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1308_, 1);
v_snd_1312_ = lean_ctor_get(v_a_1311_, 1);
lean_inc(v_snd_1312_);
lean_dec(v_a_1311_);
v___y_1281_ = v___y_1298_;
v___y_1282_ = v___y_1299_;
v___y_1283_ = v___y_1300_;
v___y_1284_ = v___y_1301_;
v_snd_1285_ = v_snd_1312_;
goto v___jp_1280_;
}
else
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___x_1279_);
lean_dec(v_lastEditTimestamp_x3f_1245_);
v_a_1313_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1308_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1308_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
v___jp_1321_:
{
uint8_t v___x_1327_; 
v___x_1327_ = lean_nat_dec_le(v_oldFinishedSnaps_1244_, v___y_1322_);
if (v___x_1327_ == 0)
{
lean_inc(v___y_1323_);
v___y_1298_ = v___y_1322_;
v___y_1299_ = v___y_1323_;
v___y_1300_ = v___y_1326_;
v___y_1301_ = v___y_1324_;
v___y_1302_ = v___y_1325_;
v_lower_1303_ = v_oldFinishedSnaps_1244_;
v_upper_1304_ = v___y_1323_;
goto v___jp_1297_;
}
else
{
lean_dec(v_oldFinishedSnaps_1244_);
lean_inc(v___y_1323_);
lean_inc(v___y_1322_);
v___y_1298_ = v___y_1322_;
v___y_1299_ = v___y_1323_;
v___y_1300_ = v___y_1326_;
v___y_1301_ = v___y_1324_;
v___y_1302_ = v___y_1325_;
v_lower_1303_ = v___y_1322_;
v_upper_1304_ = v___y_1323_;
goto v___jp_1297_;
}
}
v___jp_1328_:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; uint8_t v___x_1338_; 
v___x_1335_ = lean_unsigned_to_nat(0u);
v___x_1336_ = lean_array_get_size(v_oldInlayHints_1243_);
v___x_1337_ = ((lean_object*)(l_Lean_Server_FileWorker_InlayHintState_init___closed__0));
v___x_1338_ = lean_nat_dec_lt(v___x_1335_, v___x_1336_);
if (v___x_1338_ == 0)
{
lean_dec(v___y_1334_);
lean_dec(v___y_1331_);
lean_dec_ref(v_oldInlayHints_1243_);
v___y_1322_ = v___x_1335_;
v___y_1323_ = v___y_1330_;
v___y_1324_ = v___y_1332_;
v___y_1325_ = v___y_1333_;
v___y_1326_ = v___x_1337_;
goto v___jp_1321_;
}
else
{
lean_object* v___x_1339_; uint8_t v___x_1340_; 
v___x_1339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___y_1331_);
lean_ctor_set(v___x_1339_, 1, v___y_1334_);
v___x_1340_ = lean_nat_dec_le(v___x_1336_, v___x_1336_);
if (v___x_1340_ == 0)
{
if (v___x_1338_ == 0)
{
lean_dec_ref_known(v___x_1339_, 2);
lean_dec_ref(v_oldInlayHints_1243_);
v___y_1322_ = v___x_1335_;
v___y_1323_ = v___y_1330_;
v___y_1324_ = v___y_1332_;
v___y_1325_ = v___y_1333_;
v___y_1326_ = v___x_1337_;
goto v___jp_1321_;
}
else
{
size_t v___x_1341_; size_t v___x_1342_; lean_object* v___x_1343_; 
v___x_1341_ = ((size_t)0ULL);
v___x_1342_ = lean_usize_of_nat(v___x_1336_);
v___x_1343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5(v___x_1339_, v___y_1329_, v_oldInlayHints_1243_, v___x_1341_, v___x_1342_, v___x_1337_);
lean_dec_ref(v_oldInlayHints_1243_);
lean_dec_ref_known(v___x_1339_, 2);
v___y_1322_ = v___x_1335_;
v___y_1323_ = v___y_1330_;
v___y_1324_ = v___y_1332_;
v___y_1325_ = v___y_1333_;
v___y_1326_ = v___x_1343_;
goto v___jp_1321_;
}
}
else
{
size_t v___x_1344_; size_t v___x_1345_; lean_object* v___x_1346_; 
v___x_1344_ = ((size_t)0ULL);
v___x_1345_ = lean_usize_of_nat(v___x_1336_);
v___x_1346_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5(v___x_1339_, v___y_1329_, v_oldInlayHints_1243_, v___x_1344_, v___x_1345_, v___x_1337_);
lean_dec_ref(v_oldInlayHints_1243_);
lean_dec_ref_known(v___x_1339_, 2);
v___y_1322_ = v___x_1335_;
v___y_1323_ = v___y_1330_;
v___y_1324_ = v___y_1332_;
v___y_1325_ = v___y_1333_;
v___y_1326_ = v___x_1346_;
goto v___jp_1321_;
}
}
}
v___jp_1347_:
{
lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1354_ = lean_nat_sub(v___y_1349_, v___y_1351_);
v___x_1355_ = lean_nat_dec_lt(v___x_1354_, v___y_1349_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
lean_dec(v___x_1354_);
v___x_1356_ = lean_unsigned_to_nat(0u);
v___y_1329_ = v___y_1348_;
v___y_1330_ = v___y_1349_;
v___y_1331_ = v___y_1353_;
v___y_1332_ = v___y_1350_;
v___y_1333_ = v___y_1352_;
v___y_1334_ = v___x_1356_;
goto v___jp_1328_;
}
else
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = lean_array_fget_borrowed(v___y_1352_, v___x_1354_);
lean_dec(v___x_1354_);
v___x_1358_ = l_Lean_Server_Snapshots_Snapshot_endPos(v___x_1357_);
v___y_1329_ = v___y_1348_;
v___y_1330_ = v___y_1349_;
v___y_1331_ = v___y_1353_;
v___y_1332_ = v___y_1350_;
v___y_1333_ = v___y_1352_;
v___y_1334_ = v___x_1358_;
goto v___jp_1328_;
}
}
v___jp_1361_:
{
uint32_t v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v_snd_1366_; lean_object* v_fst_1367_; lean_object* v_snd_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1413_; 
v___x_1363_ = lean_uint32_of_nat(v___y_1362_);
lean_dec(v___y_1362_);
v___x_1364_ = l_Lean_Server_RequestCancellationToken_cancellationTasks(v_cancelTk_1240_);
lean_inc(v_cmdSnaps_1241_);
v___x_1365_ = l_Lean_AsyncList_getFinishedPrefixWithConsistentLatency___redArg(v_cmdSnaps_1241_, v___x_1363_, v___x_1364_);
v_snd_1366_ = lean_ctor_get(v___x_1365_, 1);
lean_inc(v_snd_1366_);
v_fst_1367_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_fst_1367_);
lean_dec_ref(v___x_1365_);
v_snd_1368_ = lean_ctor_get(v_snd_1366_, 1);
v_isSharedCheck_1413_ = !lean_is_exclusive(v_snd_1366_);
if (v_isSharedCheck_1413_ == 0)
{
lean_object* v_unused_1414_; 
v_unused_1414_ = lean_ctor_get(v_snd_1366_, 0);
lean_dec(v_unused_1414_);
v___x_1370_ = v_snd_1366_;
v_isShared_1371_ = v_isSharedCheck_1413_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_snd_1368_);
lean_dec(v_snd_1366_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1413_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
uint8_t v___x_1372_; 
v___x_1372_ = l_Lean_Server_RequestCancellationToken_wasCancelled(v_cancelTk_1240_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; lean_object* v___x_1374_; uint8_t v___x_1375_; 
lean_inc(v_lastEditTimestamp_x3f_1245_);
lean_inc(v_oldFinishedSnaps_1244_);
lean_inc_ref(v_oldInlayHints_1243_);
lean_del_object(v___x_1370_);
lean_dec_ref(v_s_1234_);
v___x_1373_ = lean_array_mk(v_fst_1367_);
v___x_1374_ = lean_array_get_size(v___x_1373_);
v___x_1375_ = lean_nat_dec_le(v_oldFinishedSnaps_1244_, v___x_1374_);
if (v___x_1375_ == 0)
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
lean_dec_ref(v___x_1373_);
lean_dec(v_snd_1368_);
lean_dec_ref(v___x_1279_);
lean_dec(v_lastEditTimestamp_x3f_1245_);
lean_dec(v_oldFinishedSnaps_1244_);
lean_dec_ref(v_oldInlayHints_1243_);
v___x_1376_ = lean_obj_once(&l_Lean_Server_FileWorker_handleInlayHints___closed__2, &l_Lean_Server_FileWorker_handleInlayHints___closed__2_once, _init_l_Lean_Server_FileWorker_handleInlayHints___closed__2);
v___x_1377_ = l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0(v___x_1376_, v_a_1235_);
return v___x_1377_;
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1378_ = lean_unsigned_to_nat(1u);
v___x_1379_ = lean_nat_sub(v_oldFinishedSnaps_1244_, v___x_1378_);
v___x_1380_ = lean_nat_dec_lt(v___x_1379_, v___x_1374_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; uint8_t v___x_1382_; 
lean_dec(v___x_1379_);
v___x_1381_ = lean_unsigned_to_nat(0u);
v___x_1382_ = lean_unbox(v_snd_1368_);
lean_dec(v_snd_1368_);
v___y_1348_ = v___x_1372_;
v___y_1349_ = v___x_1374_;
v___y_1350_ = v___x_1382_;
v___y_1351_ = v___x_1378_;
v___y_1352_ = v___x_1373_;
v___y_1353_ = v___x_1381_;
goto v___jp_1347_;
}
else
{
lean_object* v___x_1383_; lean_object* v___x_1384_; uint8_t v___x_1385_; 
v___x_1383_ = lean_array_fget(v___x_1373_, v___x_1379_);
lean_dec(v___x_1379_);
v___x_1384_ = l_Lean_Server_Snapshots_Snapshot_endPos(v___x_1383_);
lean_dec(v___x_1383_);
v___x_1385_ = lean_unbox(v_snd_1368_);
lean_dec(v_snd_1368_);
v___y_1348_ = v___x_1372_;
v___y_1349_ = v___x_1374_;
v___y_1350_ = v___x_1385_;
v___y_1351_ = v___x_1378_;
v___y_1352_ = v___x_1373_;
v___y_1353_ = v___x_1384_;
goto v___jp_1347_;
}
}
}
else
{
size_t v_sz_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_17467__overap_1391_; lean_object* v___x_1392_; 
lean_dec(v_snd_1368_);
lean_dec(v_fst_1367_);
lean_dec_ref(v___x_1279_);
v_sz_1386_ = lean_array_size(v_oldInlayHints_1243_);
v___x_1387_ = l_unsafeCast___redArg(v_oldInlayHints_1243_);
v___x_1388_ = lean_box_usize(v_sz_1386_);
v___x_1389_ = ((lean_object*)(l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed__const__1));
lean_inc_ref(v_text_1242_);
v___x_1390_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___boxed), 6, 4);
lean_closure_set(v___x_1390_, 0, v_text_1242_);
lean_closure_set(v___x_1390_, 1, v___x_1388_);
lean_closure_set(v___x_1390_, 2, v___x_1389_);
lean_closure_set(v___x_1390_, 3, v___x_1387_);
v___x_17467__overap_1391_ = l_unsafeCast___redArg(v___x_1390_);
lean_dec_ref(v___x_1390_);
lean_inc_ref(v_a_1235_);
v___x_1392_ = lean_apply_2(v___x_17467__overap_1391_, v_a_1235_, lean_box(0));
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1404_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1395_ = v___x_1392_;
v_isShared_1396_ = v_isSharedCheck_1404_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1404_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1397_; lean_object* v___x_1399_; 
v___x_1397_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1397_, 0, v_a_1393_);
lean_ctor_set_uint8(v___x_1397_, sizeof(void*)*1, v_isFirstRequestAfterEdit_1246_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 1, v_s_1234_);
lean_ctor_set(v___x_1370_, 0, v___x_1397_);
v___x_1399_ = v___x_1370_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1397_);
lean_ctor_set(v_reuseFailAlloc_1403_, 1, v_s_1234_);
v___x_1399_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
lean_object* v___x_1401_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v___x_1399_);
v___x_1401_ = v___x_1395_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v___x_1399_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
}
else
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1412_; 
lean_del_object(v___x_1370_);
lean_dec_ref(v_s_1234_);
v_a_1405_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1407_ = v___x_1392_;
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1392_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1410_; 
if (v_isShared_1408_ == 0)
{
v___x_1410_ = v___x_1407_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_a_1405_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1451_; 
lean_inc(v_lastEditTimestamp_x3f_1245_);
lean_inc(v_oldFinishedSnaps_1244_);
lean_inc_ref(v_oldInlayHints_1243_);
lean_dec_ref(v_p_1233_);
v_isSharedCheck_1451_ = !lean_is_exclusive(v_s_1234_);
if (v_isSharedCheck_1451_ == 0)
{
lean_object* v_unused_1452_; lean_object* v_unused_1453_; lean_object* v_unused_1454_; 
v_unused_1452_ = lean_ctor_get(v_s_1234_, 2);
lean_dec(v_unused_1452_);
v_unused_1453_ = lean_ctor_get(v_s_1234_, 1);
lean_dec(v_unused_1453_);
v_unused_1454_ = lean_ctor_get(v_s_1234_, 0);
lean_dec(v_unused_1454_);
v___x_1420_ = v_s_1234_;
v_isShared_1421_ = v_isSharedCheck_1451_;
goto v_resetjp_1419_;
}
else
{
lean_dec(v_s_1234_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1451_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
size_t v_sz_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_17470__overap_1427_; lean_object* v___x_1428_; 
v_sz_1422_ = lean_array_size(v_oldInlayHints_1243_);
v___x_1423_ = l_unsafeCast___redArg(v_oldInlayHints_1243_);
v___x_1424_ = lean_box_usize(v_sz_1422_);
v___x_1425_ = ((lean_object*)(l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed__const__1));
lean_inc_ref(v_text_1242_);
v___x_1426_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___boxed), 6, 4);
lean_closure_set(v___x_1426_, 0, v_text_1242_);
lean_closure_set(v___x_1426_, 1, v___x_1424_);
lean_closure_set(v___x_1426_, 2, v___x_1425_);
lean_closure_set(v___x_1426_, 3, v___x_1423_);
v___x_17470__overap_1427_ = l_unsafeCast___redArg(v___x_1426_);
lean_dec_ref(v___x_1426_);
lean_inc_ref(v_a_1235_);
v___x_1428_ = lean_apply_2(v___x_17470__overap_1427_, v_a_1235_, lean_box(0));
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1442_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1431_ = v___x_1428_;
v_isShared_1432_ = v_isSharedCheck_1442_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1428_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1442_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
uint8_t v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1436_; 
v___x_1433_ = 0;
v___x_1434_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1434_, 0, v_a_1429_);
lean_ctor_set_uint8(v___x_1434_, sizeof(void*)*1, v___x_1433_);
if (v_isShared_1421_ == 0)
{
v___x_1436_ = v___x_1420_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_oldInlayHints_1243_);
lean_ctor_set(v_reuseFailAlloc_1441_, 1, v_oldFinishedSnaps_1244_);
lean_ctor_set(v_reuseFailAlloc_1441_, 2, v_lastEditTimestamp_x3f_1245_);
v___x_1436_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1437_; lean_object* v___x_1439_; 
lean_ctor_set_uint8(v___x_1436_, sizeof(void*)*3, v___x_1433_);
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1434_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1437_);
v___x_1439_ = v___x_1431_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
lean_del_object(v___x_1420_);
lean_dec(v_lastEditTimestamp_x3f_1245_);
lean_dec(v_oldFinishedSnaps_1244_);
lean_dec_ref(v_oldInlayHints_1243_);
v_a_1443_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1428_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1428_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
}
v___jp_1247_:
{
size_t v_sz_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_17461__overap_1257_; lean_object* v___x_1258_; 
v_sz_1252_ = lean_array_size(v___y_1251_);
v___x_1253_ = l_unsafeCast___redArg(v___y_1251_);
lean_dec_ref(v___y_1251_);
v___x_1254_ = lean_box_usize(v_sz_1252_);
v___x_1255_ = ((lean_object*)(l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed__const__1));
lean_inc_ref(v_text_1242_);
v___x_1256_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___boxed), 6, 4);
lean_closure_set(v___x_1256_, 0, v_text_1242_);
lean_closure_set(v___x_1256_, 1, v___x_1254_);
lean_closure_set(v___x_1256_, 2, v___x_1255_);
lean_closure_set(v___x_1256_, 3, v___x_1253_);
v___x_17461__overap_1257_ = l_unsafeCast___redArg(v___x_1256_);
lean_dec_ref(v___x_1256_);
lean_inc_ref(v_a_1235_);
v___x_1258_ = lean_apply_2(v___x_17461__overap_1257_, v_a_1235_, lean_box(0));
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1269_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1261_ = v___x_1258_;
v_isShared_1262_ = v_isSharedCheck_1269_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1258_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1269_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1263_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1263_, 0, v_a_1259_);
lean_ctor_set_uint8(v___x_1263_, sizeof(void*)*1, v___y_1249_);
v___x_1264_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1264_, 0, v___y_1250_);
lean_ctor_set(v___x_1264_, 1, v___y_1248_);
lean_ctor_set(v___x_1264_, 2, v_lastEditTimestamp_x3f_1245_);
lean_ctor_set_uint8(v___x_1264_, sizeof(void*)*3, v_isFirstRequestAfterEdit_1246_);
v___x_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v___x_1265_);
v___x_1267_ = v___x_1261_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
else
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1248_);
lean_dec(v_lastEditTimestamp_x3f_1245_);
v_a_1270_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1258_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1258_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHints___boxed(lean_object* v_p_1455_, lean_object* v_s_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_Lean_Server_FileWorker_handleInlayHints(v_p_1455_, v_s_1456_, v_a_1457_);
lean_dec_ref(v_a_1457_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4(lean_object* v_inst_1460_, lean_object* v_R_1461_, lean_object* v_a_1462_, lean_object* v_b_1463_, lean_object* v_c_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___redArg(v_a_1462_, v_b_1463_, v___y_1465_, v___y_1466_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___boxed(lean_object* v_inst_1469_, lean_object* v_R_1470_, lean_object* v_a_1471_, lean_object* v_b_1472_, lean_object* v_c_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__4(v_inst_1469_, v_R_1470_, v_a_1471_, v_b_1472_, v_c_1473_, v___y_1474_, v___y_1475_);
lean_dec_ref(v___y_1475_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4(lean_object* v_00_u03b1_1478_, lean_object* v_msg_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___redArg(v_msg_1479_, v___y_1480_, v___y_1481_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4___boxed(lean_object* v_00_u03b1_1484_, lean_object* v_msg_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__4(v_00_u03b1_1484_, v_msg_1485_, v___y_1486_, v___y_1487_);
lean_dec_ref(v___y_1487_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3(lean_object* v_00_u03b1_1490_, lean_object* v_preNode_1491_, lean_object* v_postNode_1492_, lean_object* v_x_1493_, lean_object* v_x_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___redArg(v_preNode_1491_, v_postNode_1492_, v_x_1493_, v_x_1494_, v___y_1495_, v___y_1496_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3___boxed(lean_object* v_00_u03b1_1499_, lean_object* v_preNode_1500_, lean_object* v_postNode_1501_, lean_object* v_x_1502_, lean_object* v_x_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3(v_00_u03b1_1499_, v_preNode_1500_, v_postNode_1501_, v_x_1502_, v_x_1503_, v___y_1504_, v___y_1505_);
lean_dec_ref(v___y_1505_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5(lean_object* v_00_u03b1_1508_, lean_object* v_preNode_1509_, lean_object* v_postNode_1510_, lean_object* v___x_1511_, lean_object* v_x_1512_, lean_object* v_x_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5___redArg(v_preNode_1509_, v_postNode_1510_, v___x_1511_, v_x_1512_, v_x_1513_, v___y_1514_, v___y_1515_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1518_, lean_object* v_preNode_1519_, lean_object* v_postNode_1520_, lean_object* v___x_1521_, lean_object* v_x_1522_, lean_object* v_x_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__3_spec__3_spec__5(v_00_u03b1_1518_, v_preNode_1519_, v_postNode_1520_, v___x_1521_, v_x_1522_, v_x_1523_, v___y_1524_, v___y_1525_);
lean_dec_ref(v___y_1525_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg(lean_object* v___x_1530_, lean_object* v___x_1531_, lean_object* v_as_1532_, size_t v_sz_1533_, size_t v_i_1534_, lean_object* v_b_1535_){
_start:
{
uint8_t v___x_1537_; 
v___x_1537_ = lean_usize_dec_lt(v_i_1534_, v_sz_1533_);
if (v___x_1537_ == 0)
{
lean_object* v___x_1538_; 
v___x_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1538_, 0, v_b_1535_);
return v___x_1538_;
}
else
{
lean_object* v_snd_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1582_; 
v_snd_1539_ = lean_ctor_get(v_b_1535_, 1);
v_isSharedCheck_1582_ = !lean_is_exclusive(v_b_1535_);
if (v_isSharedCheck_1582_ == 0)
{
lean_object* v_unused_1583_; 
v_unused_1583_ = lean_ctor_get(v_b_1535_, 0);
lean_dec(v_unused_1583_);
v___x_1541_ = v_b_1535_;
v_isShared_1542_ = v_isSharedCheck_1582_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_snd_1539_);
lean_dec(v_b_1535_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1582_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v_fst_1543_; lean_object* v_snd_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1581_; 
v_fst_1543_ = lean_ctor_get(v_snd_1539_, 0);
v_snd_1544_ = lean_ctor_get(v_snd_1539_, 1);
v_isSharedCheck_1581_ = !lean_is_exclusive(v_snd_1539_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1546_ = v_snd_1539_;
v_isShared_1547_ = v_isSharedCheck_1581_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_snd_1544_);
lean_inc(v_fst_1543_);
lean_dec(v_snd_1539_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1581_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v_a_1548_; 
v_a_1548_ = lean_array_uget_borrowed(v_as_1532_, v_i_1534_);
if (lean_obj_tag(v_a_1548_) == 0)
{
lean_object* v_range_1549_; lean_object* v_text_1550_; lean_object* v_mod_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v_range_1549_ = lean_ctor_get(v_a_1548_, 0);
v_text_1550_ = lean_ctor_get(v_a_1548_, 1);
v_mod_1551_ = lean_ctor_get(v___x_1531_, 1);
v___x_1552_ = lean_box(0);
lean_inc_ref(v_range_1549_);
v___x_1553_ = l_Lean_FileMap_lspRangeToUtf8Range(v___x_1530_, v_range_1549_);
lean_inc(v_fst_1543_);
v___x_1554_ = l_Lean_Server_FileWorker_applyEditToHint_x3f(v_mod_1551_, v_fst_1543_, v___x_1553_, v_text_1550_);
if (lean_obj_tag(v___x_1554_) == 1)
{
lean_object* v_val_1555_; lean_object* v___x_1557_; 
lean_dec(v_fst_1543_);
v_val_1555_ = lean_ctor_get(v___x_1554_, 0);
lean_inc(v_val_1555_);
lean_dec_ref_known(v___x_1554_, 1);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 0, v_val_1555_);
v___x_1557_ = v___x_1546_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_val_1555_);
lean_ctor_set(v_reuseFailAlloc_1564_, 1, v_snd_1544_);
v___x_1557_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1559_; 
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 1, v___x_1557_);
lean_ctor_set(v___x_1541_, 0, v___x_1552_);
v___x_1559_ = v___x_1541_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___x_1552_);
lean_ctor_set(v_reuseFailAlloc_1563_, 1, v___x_1557_);
v___x_1559_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
size_t v___x_1560_; size_t v___x_1561_; 
v___x_1560_ = ((size_t)1ULL);
v___x_1561_ = lean_usize_add(v_i_1534_, v___x_1560_);
v_i_1534_ = v___x_1561_;
v_b_1535_ = v___x_1559_;
goto _start;
}
}
}
else
{
lean_object* v___x_1565_; lean_object* v___x_1567_; 
lean_dec(v___x_1554_);
lean_dec(v_snd_1544_);
v___x_1565_ = lean_box(v___x_1537_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 1, v___x_1565_);
v___x_1567_ = v___x_1546_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_fst_1543_);
lean_ctor_set(v_reuseFailAlloc_1572_, 1, v___x_1565_);
v___x_1567_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
lean_object* v___x_1569_; 
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 1, v___x_1567_);
lean_ctor_set(v___x_1541_, 0, v___x_1552_);
v___x_1569_ = v___x_1541_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1552_);
lean_ctor_set(v_reuseFailAlloc_1571_, 1, v___x_1567_);
v___x_1569_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
lean_object* v___x_1570_; 
v___x_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
return v___x_1570_;
}
}
}
}
else
{
lean_object* v___x_1573_; lean_object* v___x_1575_; 
v___x_1573_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___closed__0));
if (v_isShared_1547_ == 0)
{
v___x_1575_ = v___x_1546_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_fst_1543_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v_snd_1544_);
v___x_1575_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
lean_object* v___x_1577_; 
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 1, v___x_1575_);
lean_ctor_set(v___x_1541_, 0, v___x_1573_);
v___x_1577_ = v___x_1541_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v___x_1573_);
lean_ctor_set(v_reuseFailAlloc_1579_, 1, v___x_1575_);
v___x_1577_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1577_);
return v___x_1578_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___boxed(lean_object* v___x_1584_, lean_object* v___x_1585_, lean_object* v_as_1586_, lean_object* v_sz_1587_, lean_object* v_i_1588_, lean_object* v_b_1589_, lean_object* v___y_1590_){
_start:
{
size_t v_sz_boxed_1591_; size_t v_i_boxed_1592_; lean_object* v_res_1593_; 
v_sz_boxed_1591_ = lean_unbox_usize(v_sz_1587_);
lean_dec(v_sz_1587_);
v_i_boxed_1592_ = lean_unbox_usize(v_i_1588_);
lean_dec(v_i_1588_);
v_res_1593_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg(v___x_1584_, v___x_1585_, v_as_1586_, v_sz_boxed_1591_, v_i_boxed_1592_, v_b_1589_);
lean_dec_ref(v_as_1586_);
lean_dec_ref(v___x_1585_);
lean_dec_ref(v___x_1584_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1(lean_object* v_p_1594_, lean_object* v___x_1595_, lean_object* v___x_1596_, lean_object* v_as_1597_, size_t v_sz_1598_, size_t v_i_1599_, lean_object* v_b_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v_a_1604_; uint8_t v___x_1608_; 
v___x_1608_ = lean_usize_dec_lt(v_i_1599_, v_sz_1598_);
if (v___x_1608_ == 0)
{
lean_object* v___x_1609_; 
v___x_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1609_, 0, v_b_1600_);
return v___x_1609_;
}
else
{
lean_object* v_snd_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1674_; 
v_snd_1610_ = lean_ctor_get(v_b_1600_, 1);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_b_1600_);
if (v_isSharedCheck_1674_ == 0)
{
lean_object* v_unused_1675_; 
v_unused_1675_ = lean_ctor_get(v_b_1600_, 0);
lean_dec(v_unused_1675_);
v___x_1612_ = v_b_1600_;
v_isShared_1613_ = v_isSharedCheck_1674_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_snd_1610_);
lean_dec(v_b_1600_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1674_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v_contentChanges_1614_; lean_object* v___x_1615_; lean_object* v_a_1616_; uint8_t v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1620_; 
v_contentChanges_1614_ = lean_ctor_get(v_p_1594_, 1);
v___x_1615_ = lean_box(0);
v_a_1616_ = lean_array_uget_borrowed(v_as_1597_, v_i_1599_);
v___x_1617_ = 0;
v___x_1618_ = lean_box(v___x_1617_);
lean_inc(v_a_1616_);
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 1, v___x_1618_);
lean_ctor_set(v___x_1612_, 0, v_a_1616_);
v___x_1620_ = v___x_1612_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1616_);
lean_ctor_set(v_reuseFailAlloc_1673_, 1, v___x_1618_);
v___x_1620_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
lean_object* v___x_1621_; size_t v_sz_1622_; size_t v___x_1623_; lean_object* v___x_1624_; 
v___x_1621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1615_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
v_sz_1622_ = lean_array_size(v_contentChanges_1614_);
v___x_1623_ = ((size_t)0ULL);
v___x_1624_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg(v___x_1595_, v___x_1596_, v_contentChanges_1614_, v_sz_1622_, v___x_1623_, v___x_1621_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1664_; 
v_a_1625_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1627_ = v___x_1624_;
v_isShared_1628_ = v_isSharedCheck_1664_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1624_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1664_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v_fst_1629_; 
v_fst_1629_ = lean_ctor_get(v_a_1625_, 0);
if (lean_obj_tag(v_fst_1629_) == 0)
{
lean_object* v_snd_1630_; lean_object* v_snd_1631_; uint8_t v___x_1632_; 
lean_del_object(v___x_1627_);
v_snd_1630_ = lean_ctor_get(v_a_1625_, 1);
lean_inc(v_snd_1630_);
lean_dec(v_a_1625_);
v_snd_1631_ = lean_ctor_get(v_snd_1630_, 1);
v___x_1632_ = lean_unbox(v_snd_1631_);
if (v___x_1632_ == 0)
{
lean_object* v_fst_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1641_; 
v_fst_1633_ = lean_ctor_get(v_snd_1630_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_snd_1630_);
if (v_isSharedCheck_1641_ == 0)
{
lean_object* v_unused_1642_; 
v_unused_1642_ = lean_ctor_get(v_snd_1630_, 1);
lean_dec(v_unused_1642_);
v___x_1635_ = v_snd_1630_;
v_isShared_1636_ = v_isSharedCheck_1641_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_fst_1633_);
lean_dec(v_snd_1630_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1641_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1637_; lean_object* v___x_1639_; 
v___x_1637_ = lean_array_push(v_snd_1610_, v_fst_1633_);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 1, v___x_1637_);
lean_ctor_set(v___x_1635_, 0, v___x_1615_);
v___x_1639_ = v___x_1635_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1615_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v___x_1637_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
v_a_1604_ = v___x_1639_;
goto v___jp_1603_;
}
}
}
else
{
lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
v_isSharedCheck_1649_ = !lean_is_exclusive(v_snd_1630_);
if (v_isSharedCheck_1649_ == 0)
{
lean_object* v_unused_1650_; lean_object* v_unused_1651_; 
v_unused_1650_ = lean_ctor_get(v_snd_1630_, 1);
lean_dec(v_unused_1650_);
v_unused_1651_ = lean_ctor_get(v_snd_1630_, 0);
lean_dec(v_unused_1651_);
v___x_1644_ = v_snd_1630_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_dec(v_snd_1630_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 1, v_snd_1610_);
lean_ctor_set(v___x_1644_, 0, v___x_1615_);
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v___x_1615_);
lean_ctor_set(v_reuseFailAlloc_1648_, 1, v_snd_1610_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
v_a_1604_ = v___x_1647_;
goto v___jp_1603_;
}
}
}
}
else
{
lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1661_; 
lean_inc_ref(v_fst_1629_);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_a_1625_);
if (v_isSharedCheck_1661_ == 0)
{
lean_object* v_unused_1662_; lean_object* v_unused_1663_; 
v_unused_1662_ = lean_ctor_get(v_a_1625_, 1);
lean_dec(v_unused_1662_);
v_unused_1663_ = lean_ctor_get(v_a_1625_, 0);
lean_dec(v_unused_1663_);
v___x_1653_ = v_a_1625_;
v_isShared_1654_ = v_isSharedCheck_1661_;
goto v_resetjp_1652_;
}
else
{
lean_dec(v_a_1625_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1661_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
lean_ctor_set(v___x_1653_, 1, v_snd_1610_);
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_fst_1629_);
lean_ctor_set(v_reuseFailAlloc_1660_, 1, v_snd_1610_);
v___x_1656_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v___x_1658_; 
if (v_isShared_1628_ == 0)
{
lean_ctor_set(v___x_1627_, 0, v___x_1656_);
v___x_1658_ = v___x_1627_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v___x_1656_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
}
}
else
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
lean_dec(v_snd_1610_);
v_a_1665_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1667_ = v___x_1624_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1624_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_a_1665_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
}
v___jp_1603_:
{
size_t v___x_1605_; size_t v___x_1606_; 
v___x_1605_ = ((size_t)1ULL);
v___x_1606_ = lean_usize_add(v_i_1599_, v___x_1605_);
v_i_1599_ = v___x_1606_;
v_b_1600_ = v_a_1604_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1___boxed(lean_object* v_p_1676_, lean_object* v___x_1677_, lean_object* v___x_1678_, lean_object* v_as_1679_, lean_object* v_sz_1680_, lean_object* v_i_1681_, lean_object* v_b_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
size_t v_sz_boxed_1685_; size_t v_i_boxed_1686_; lean_object* v_res_1687_; 
v_sz_boxed_1685_ = lean_unbox_usize(v_sz_1680_);
lean_dec(v_sz_1680_);
v_i_boxed_1686_ = lean_unbox_usize(v_i_1681_);
lean_dec(v_i_1681_);
v_res_1687_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1(v_p_1676_, v___x_1677_, v___x_1678_, v_as_1679_, v_sz_boxed_1685_, v_i_boxed_1686_, v_b_1682_, v___y_1683_);
lean_dec_ref(v___y_1683_);
lean_dec_ref(v_as_1679_);
lean_dec_ref(v___x_1678_);
lean_dec_ref(v___x_1677_);
lean_dec_ref(v_p_1676_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints(lean_object* v_p_1691_, lean_object* v_oldInlayHints_1692_, lean_object* v_a_1693_){
_start:
{
lean_object* v_doc_1695_; lean_object* v_toEditableDocumentCore_1696_; lean_object* v_meta_1697_; lean_object* v_text_1698_; lean_object* v___x_1699_; size_t v_sz_1700_; size_t v___x_1701_; lean_object* v___x_1702_; 
v_doc_1695_ = lean_ctor_get(v_a_1693_, 1);
v_toEditableDocumentCore_1696_ = lean_ctor_get(v_doc_1695_, 0);
v_meta_1697_ = lean_ctor_get(v_toEditableDocumentCore_1696_, 0);
v_text_1698_ = lean_ctor_get(v_meta_1697_, 3);
v___x_1699_ = ((lean_object*)(l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___closed__0));
v_sz_1700_ = lean_array_size(v_oldInlayHints_1692_);
v___x_1701_ = ((size_t)0ULL);
v___x_1702_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1(v_p_1691_, v_text_1698_, v_meta_1697_, v_oldInlayHints_1692_, v_sz_1700_, v___x_1701_, v___x_1699_, v_a_1693_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1716_; 
v_a_1703_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1705_ = v___x_1702_;
v_isShared_1706_ = v_isSharedCheck_1716_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1702_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1716_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v_fst_1707_; 
v_fst_1707_ = lean_ctor_get(v_a_1703_, 0);
if (lean_obj_tag(v_fst_1707_) == 0)
{
lean_object* v_snd_1708_; lean_object* v___x_1710_; 
v_snd_1708_ = lean_ctor_get(v_a_1703_, 1);
lean_inc(v_snd_1708_);
lean_dec(v_a_1703_);
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 0, v_snd_1708_);
v___x_1710_ = v___x_1705_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_snd_1708_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
else
{
lean_object* v_val_1712_; lean_object* v___x_1714_; 
lean_inc_ref(v_fst_1707_);
lean_dec(v_a_1703_);
v_val_1712_ = lean_ctor_get(v_fst_1707_, 0);
lean_inc(v_val_1712_);
lean_dec_ref_known(v_fst_1707_, 1);
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 0, v_val_1712_);
v___x_1714_ = v___x_1705_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_val_1712_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
v_a_1717_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1702_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1702_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___boxed(lean_object* v_p_1725_, lean_object* v_oldInlayHints_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints(v_p_1725_, v_oldInlayHints_1726_, v_a_1727_);
lean_dec_ref(v_a_1727_);
lean_dec_ref(v_oldInlayHints_1726_);
lean_dec_ref(v_p_1725_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0(lean_object* v___x_1730_, lean_object* v___x_1731_, lean_object* v_as_1732_, size_t v_sz_1733_, size_t v_i_1734_, lean_object* v_b_1735_, lean_object* v___y_1736_){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg(v___x_1730_, v___x_1731_, v_as_1732_, v_sz_1733_, v_i_1734_, v_b_1735_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___boxed(lean_object* v___x_1739_, lean_object* v___x_1740_, lean_object* v_as_1741_, lean_object* v_sz_1742_, lean_object* v_i_1743_, lean_object* v_b_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_){
_start:
{
size_t v_sz_boxed_1747_; size_t v_i_boxed_1748_; lean_object* v_res_1749_; 
v_sz_boxed_1747_ = lean_unbox_usize(v_sz_1742_);
lean_dec(v_sz_1742_);
v_i_boxed_1748_ = lean_unbox_usize(v_i_1743_);
lean_dec(v_i_1743_);
v_res_1749_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0(v___x_1739_, v___x_1740_, v_as_1741_, v_sz_boxed_1747_, v_i_boxed_1748_, v_b_1744_, v___y_1745_);
lean_dec_ref(v___y_1745_);
lean_dec_ref(v_as_1741_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1739_);
return v_res_1749_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0(lean_object* v_a_1750_, lean_object* v_as_1751_, size_t v_i_1752_, size_t v_stop_1753_){
_start:
{
uint8_t v___x_1754_; 
v___x_1754_ = lean_usize_dec_eq(v_i_1752_, v_stop_1753_);
if (v___x_1754_ == 0)
{
lean_object* v___x_1755_; uint8_t v___x_1756_; 
v___x_1755_ = lean_array_uget_borrowed(v_as_1751_, v_i_1752_);
v___x_1756_ = l_Lean_Elab_instBEqInlayHintTextEdit_beq(v_a_1750_, v___x_1755_);
if (v___x_1756_ == 0)
{
size_t v___x_1757_; size_t v___x_1758_; 
v___x_1757_ = ((size_t)1ULL);
v___x_1758_ = lean_usize_add(v_i_1752_, v___x_1757_);
v_i_1752_ = v___x_1758_;
goto _start;
}
else
{
return v___x_1756_;
}
}
else
{
uint8_t v___x_1760_; 
v___x_1760_ = 0;
return v___x_1760_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0___boxed(lean_object* v_a_1761_, lean_object* v_as_1762_, lean_object* v_i_1763_, lean_object* v_stop_1764_){
_start:
{
size_t v_i_boxed_1765_; size_t v_stop_boxed_1766_; uint8_t v_res_1767_; lean_object* v_r_1768_; 
v_i_boxed_1765_ = lean_unbox_usize(v_i_1763_);
lean_dec(v_i_1763_);
v_stop_boxed_1766_ = lean_unbox_usize(v_stop_1764_);
lean_dec(v_stop_1764_);
v_res_1767_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0(v_a_1761_, v_as_1762_, v_i_boxed_1765_, v_stop_boxed_1766_);
lean_dec_ref(v_as_1762_);
lean_dec_ref(v_a_1761_);
v_r_1768_ = lean_box(v_res_1767_);
return v_r_1768_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0(lean_object* v_as_1769_, lean_object* v_a_1770_){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; uint8_t v___x_1773_; 
v___x_1771_ = lean_unsigned_to_nat(0u);
v___x_1772_ = lean_array_get_size(v_as_1769_);
v___x_1773_ = lean_nat_dec_lt(v___x_1771_, v___x_1772_);
if (v___x_1773_ == 0)
{
return v___x_1773_;
}
else
{
if (v___x_1773_ == 0)
{
return v___x_1773_;
}
else
{
size_t v___x_1774_; size_t v___x_1775_; uint8_t v___x_1776_; 
v___x_1774_ = ((size_t)0ULL);
v___x_1775_ = lean_usize_of_nat(v___x_1772_);
v___x_1776_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0(v_a_1770_, v_as_1769_, v___x_1774_, v___x_1775_);
return v___x_1776_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0___boxed(lean_object* v_as_1777_, lean_object* v_a_1778_){
_start:
{
uint8_t v_res_1779_; lean_object* v_r_1780_; 
v_res_1779_ = l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0(v_as_1777_, v_a_1778_);
lean_dec_ref(v_a_1778_);
lean_dec_ref(v_as_1777_);
v_r_1780_ = lean_box(v_res_1779_);
return v_r_1780_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1(lean_object* v___x_1781_, lean_object* v_as_1782_, size_t v_i_1783_, size_t v_stop_1784_){
_start:
{
uint8_t v___x_1785_; 
v___x_1785_ = lean_usize_dec_eq(v_i_1783_, v_stop_1784_);
if (v___x_1785_ == 0)
{
lean_object* v___x_1786_; lean_object* v_textEdits_1787_; uint8_t v___x_1788_; 
v___x_1786_ = lean_array_uget_borrowed(v_as_1782_, v_i_1783_);
v_textEdits_1787_ = lean_ctor_get(v___x_1786_, 3);
v___x_1788_ = l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0(v_textEdits_1787_, v___x_1781_);
if (v___x_1788_ == 0)
{
size_t v___x_1789_; size_t v___x_1790_; 
v___x_1789_ = ((size_t)1ULL);
v___x_1790_ = lean_usize_add(v_i_1783_, v___x_1789_);
v_i_1783_ = v___x_1790_;
goto _start;
}
else
{
return v___x_1788_;
}
}
else
{
uint8_t v___x_1792_; 
v___x_1792_ = 0;
return v___x_1792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1___boxed(lean_object* v___x_1793_, lean_object* v_as_1794_, lean_object* v_i_1795_, lean_object* v_stop_1796_){
_start:
{
size_t v_i_boxed_1797_; size_t v_stop_boxed_1798_; uint8_t v_res_1799_; lean_object* v_r_1800_; 
v_i_boxed_1797_ = lean_unbox_usize(v_i_1795_);
lean_dec(v_i_1795_);
v_stop_boxed_1798_ = lean_unbox_usize(v_stop_1796_);
lean_dec(v_stop_1796_);
v_res_1799_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1(v___x_1793_, v_as_1794_, v_i_boxed_1797_, v_stop_boxed_1798_);
lean_dec_ref(v_as_1794_);
lean_dec_ref(v___x_1793_);
v_r_1800_ = lean_box(v_res_1799_);
return v_r_1800_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2(lean_object* v_oldInlayHints_1801_, lean_object* v___x_1802_, lean_object* v___x_1803_, lean_object* v_as_1804_, size_t v_i_1805_, size_t v_stop_1806_){
_start:
{
uint8_t v___x_1811_; 
v___x_1811_ = lean_usize_dec_eq(v_i_1805_, v_stop_1806_);
if (v___x_1811_ == 0)
{
lean_object* v___x_1812_; uint8_t v___x_1813_; uint8_t v___x_1814_; lean_object* v___x_1816_; 
v___x_1812_ = lean_unsigned_to_nat(0u);
v___x_1813_ = lean_nat_dec_lt(v___x_1812_, v___x_1802_);
v___x_1814_ = 1;
v___x_1816_ = lean_array_uget(v_as_1804_, v_i_1805_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_range_1817_; lean_object* v_text_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1831_; 
v_range_1817_ = lean_ctor_get(v___x_1816_, 0);
v_text_1818_ = lean_ctor_get(v___x_1816_, 1);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1820_ = v___x_1816_;
v_isShared_1821_ = v_isSharedCheck_1831_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_text_1818_);
lean_inc(v_range_1817_);
lean_dec(v___x_1816_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1831_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1822_; uint8_t v___x_1823_; 
v___x_1822_ = lean_array_get_size(v_oldInlayHints_1801_);
v___x_1823_ = lean_nat_dec_lt(v___x_1812_, v___x_1822_);
if (v___x_1823_ == 0)
{
lean_del_object(v___x_1820_);
lean_dec_ref(v_text_1818_);
lean_dec_ref(v_range_1817_);
goto v___jp_1815_;
}
else
{
if (v___x_1823_ == 0)
{
lean_del_object(v___x_1820_);
lean_dec_ref(v_text_1818_);
lean_dec_ref(v_range_1817_);
return v___x_1814_;
}
else
{
lean_object* v___x_1824_; lean_object* v___x_1826_; 
v___x_1824_ = l_Lean_FileMap_lspRangeToUtf8Range(v___x_1803_, v_range_1817_);
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 0, v___x_1824_);
v___x_1826_ = v___x_1820_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v___x_1824_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_text_1818_);
v___x_1826_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
size_t v___x_1827_; size_t v___x_1828_; uint8_t v___x_1829_; 
v___x_1827_ = ((size_t)0ULL);
v___x_1828_ = lean_usize_of_nat(v___x_1822_);
v___x_1829_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1(v___x_1826_, v_oldInlayHints_1801_, v___x_1827_, v___x_1828_);
lean_dec_ref(v___x_1826_);
if (v___x_1829_ == 0)
{
return v___x_1814_;
}
else
{
goto v___jp_1807_;
}
}
}
}
}
}
else
{
lean_dec(v___x_1816_);
goto v___jp_1815_;
}
v___jp_1815_:
{
if (v___x_1813_ == 0)
{
goto v___jp_1807_;
}
else
{
return v___x_1814_;
}
}
}
else
{
uint8_t v___x_1832_; 
v___x_1832_ = 0;
return v___x_1832_;
}
v___jp_1807_:
{
size_t v___x_1808_; size_t v___x_1809_; 
v___x_1808_ = ((size_t)1ULL);
v___x_1809_ = lean_usize_add(v_i_1805_, v___x_1808_);
v_i_1805_ = v___x_1809_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2___boxed(lean_object* v_oldInlayHints_1833_, lean_object* v___x_1834_, lean_object* v___x_1835_, lean_object* v_as_1836_, lean_object* v_i_1837_, lean_object* v_stop_1838_){
_start:
{
size_t v_i_boxed_1839_; size_t v_stop_boxed_1840_; uint8_t v_res_1841_; lean_object* v_r_1842_; 
v_i_boxed_1839_ = lean_unbox_usize(v_i_1837_);
lean_dec(v_i_1837_);
v_stop_boxed_1840_ = lean_unbox_usize(v_stop_1838_);
lean_dec(v_stop_1838_);
v_res_1841_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2(v_oldInlayHints_1833_, v___x_1834_, v___x_1835_, v_as_1836_, v_i_boxed_1839_, v_stop_boxed_1840_);
lean_dec_ref(v_as_1836_);
lean_dec_ref(v___x_1835_);
lean_dec(v___x_1834_);
lean_dec_ref(v_oldInlayHints_1833_);
v_r_1842_ = lean_box(v_res_1841_);
return v_r_1842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f(lean_object* v_p_1843_, lean_object* v_oldInlayHints_1844_, lean_object* v_a_1845_){
_start:
{
uint8_t v___y_1848_; lean_object* v_contentChanges_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; 
v_contentChanges_1854_ = lean_ctor_get(v_p_1843_, 1);
v___x_1855_ = lean_unsigned_to_nat(0u);
v___x_1856_ = lean_array_get_size(v_contentChanges_1854_);
v___x_1857_ = lean_nat_dec_lt(v___x_1855_, v___x_1856_);
if (v___x_1857_ == 0)
{
uint8_t v___x_1858_; 
v___x_1858_ = 1;
v___y_1848_ = v___x_1858_;
goto v___jp_1847_;
}
else
{
if (v___x_1857_ == 0)
{
v___y_1848_ = v___x_1857_;
goto v___jp_1847_;
}
else
{
lean_object* v_doc_1859_; lean_object* v_toEditableDocumentCore_1860_; lean_object* v_meta_1861_; lean_object* v_text_1862_; size_t v___x_1863_; size_t v___x_1864_; uint8_t v___x_1865_; 
v_doc_1859_ = lean_ctor_get(v_a_1845_, 1);
v_toEditableDocumentCore_1860_ = lean_ctor_get(v_doc_1859_, 0);
v_meta_1861_ = lean_ctor_get(v_toEditableDocumentCore_1860_, 0);
v_text_1862_ = lean_ctor_get(v_meta_1861_, 3);
v___x_1863_ = ((size_t)0ULL);
v___x_1864_ = lean_usize_of_nat(v___x_1856_);
v___x_1865_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2(v_oldInlayHints_1844_, v___x_1856_, v_text_1862_, v_contentChanges_1854_, v___x_1863_, v___x_1864_);
if (v___x_1865_ == 0)
{
v___y_1848_ = v___x_1857_;
goto v___jp_1847_;
}
else
{
uint8_t v___x_1866_; 
v___x_1866_ = 0;
v___y_1848_ = v___x_1866_;
goto v___jp_1847_;
}
}
}
v___jp_1847_:
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_io_mono_ms_now();
if (v___y_1848_ == 0)
{
lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
v___x_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
return v___x_1851_;
}
else
{
lean_object* v___x_1852_; lean_object* v___x_1853_; 
lean_dec(v___x_1849_);
v___x_1852_ = lean_box(0);
v___x_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1852_);
return v___x_1853_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f___boxed(lean_object* v_p_1867_, lean_object* v_oldInlayHints_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f(v_p_1867_, v_oldInlayHints_1868_, v_a_1869_);
lean_dec_ref(v_a_1869_);
lean_dec_ref(v_oldInlayHints_1868_);
lean_dec_ref(v_p_1867_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHintsDidChange(lean_object* v_p_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_){
_start:
{
lean_object* v_oldInlayHints_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1906_; 
v_oldInlayHints_1876_ = lean_ctor_get(v_a_1873_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v_a_1873_);
if (v_isSharedCheck_1906_ == 0)
{
lean_object* v_unused_1907_; lean_object* v_unused_1908_; 
v_unused_1907_ = lean_ctor_get(v_a_1873_, 2);
lean_dec(v_unused_1907_);
v_unused_1908_ = lean_ctor_get(v_a_1873_, 1);
lean_dec(v_unused_1908_);
v___x_1878_ = v_a_1873_;
v_isShared_1879_ = v_isSharedCheck_1906_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_oldInlayHints_1876_);
lean_dec(v_a_1873_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1906_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1880_; 
v___x_1880_ = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints(v_p_1872_, v_oldInlayHints_1876_, v_a_1874_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; lean_object* v___x_1882_; lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1897_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v___x_1880_, 1);
v___x_1882_ = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f(v_p_1872_, v_oldInlayHints_1876_, v_a_1874_);
lean_dec_ref(v_oldInlayHints_1876_);
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1885_ = v___x_1882_;
v_isShared_1886_ = v_isSharedCheck_1897_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1882_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1897_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1887_; uint8_t v___x_1888_; lean_object* v___x_1890_; 
v___x_1887_ = lean_unsigned_to_nat(0u);
v___x_1888_ = 1;
if (v_isShared_1879_ == 0)
{
lean_ctor_set(v___x_1878_, 2, v_a_1883_);
lean_ctor_set(v___x_1878_, 1, v___x_1887_);
lean_ctor_set(v___x_1878_, 0, v_a_1881_);
v___x_1890_ = v___x_1878_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1881_);
lean_ctor_set(v_reuseFailAlloc_1896_, 1, v___x_1887_);
lean_ctor_set(v_reuseFailAlloc_1896_, 2, v_a_1883_);
v___x_1890_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1894_; 
lean_ctor_set_uint8(v___x_1890_, sizeof(void*)*3, v___x_1888_);
v___x_1891_ = lean_box(0);
v___x_1892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
lean_ctor_set(v___x_1892_, 1, v___x_1890_);
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 0, v___x_1892_);
v___x_1894_ = v___x_1885_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v___x_1892_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
}
}
else
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1905_; 
lean_del_object(v___x_1878_);
lean_dec_ref(v_oldInlayHints_1876_);
v_a_1898_ = lean_ctor_get(v___x_1880_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1900_ = v___x_1880_;
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1880_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1901_ == 0)
{
v___x_1903_ = v___x_1900_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_a_1898_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHintsDidChange___boxed(lean_object* v_p_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l_Lean_Server_FileWorker_handleInlayHintsDidChange(v_p_1909_, v_a_1910_, v_a_1911_);
lean_dec_ref(v_a_1911_);
lean_dec_ref(v_p_1909_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3(lean_object* v___x_1914_, lean_object* v_x_1915_){
_start:
{
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3___boxed(lean_object* v___x_1916_, lean_object* v_x_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3(v___x_1916_, v_x_1917_);
lean_dec_ref(v_x_1917_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13___redArg(lean_object* v_x_1919_, lean_object* v_x_1920_, lean_object* v_x_1921_, lean_object* v_x_1922_){
_start:
{
lean_object* v_ks_1923_; lean_object* v_vs_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1948_; 
v_ks_1923_ = lean_ctor_get(v_x_1919_, 0);
v_vs_1924_ = lean_ctor_get(v_x_1919_, 1);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_x_1919_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1926_ = v_x_1919_;
v_isShared_1927_ = v_isSharedCheck_1948_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_vs_1924_);
lean_inc(v_ks_1923_);
lean_dec(v_x_1919_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1948_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1928_; uint8_t v___x_1929_; 
v___x_1928_ = lean_array_get_size(v_ks_1923_);
v___x_1929_ = lean_nat_dec_lt(v_x_1920_, v___x_1928_);
if (v___x_1929_ == 0)
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1933_; 
lean_dec(v_x_1920_);
v___x_1930_ = lean_array_push(v_ks_1923_, v_x_1921_);
v___x_1931_ = lean_array_push(v_vs_1924_, v_x_1922_);
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 1, v___x_1931_);
lean_ctor_set(v___x_1926_, 0, v___x_1930_);
v___x_1933_ = v___x_1926_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1930_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v___x_1931_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
else
{
lean_object* v_k_x27_1935_; uint8_t v___x_1936_; 
v_k_x27_1935_ = lean_array_fget_borrowed(v_ks_1923_, v_x_1920_);
v___x_1936_ = lean_string_dec_eq(v_x_1921_, v_k_x27_1935_);
if (v___x_1936_ == 0)
{
lean_object* v___x_1938_; 
if (v_isShared_1927_ == 0)
{
v___x_1938_ = v___x_1926_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_ks_1923_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v_vs_1924_);
v___x_1938_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1939_ = lean_unsigned_to_nat(1u);
v___x_1940_ = lean_nat_add(v_x_1920_, v___x_1939_);
lean_dec(v_x_1920_);
v_x_1919_ = v___x_1938_;
v_x_1920_ = v___x_1940_;
goto _start;
}
}
else
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1946_; 
v___x_1943_ = lean_array_fset(v_ks_1923_, v_x_1920_, v_x_1921_);
v___x_1944_ = lean_array_fset(v_vs_1924_, v_x_1920_, v_x_1922_);
lean_dec(v_x_1920_);
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 1, v___x_1944_);
lean_ctor_set(v___x_1926_, 0, v___x_1943_);
v___x_1946_ = v___x_1926_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1943_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v___x_1944_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12___redArg(lean_object* v_n_1949_, lean_object* v_k_1950_, lean_object* v_v_1951_){
_start:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1952_ = lean_unsigned_to_nat(0u);
v___x_1953_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13___redArg(v_n_1949_, v___x_1952_, v_k_1950_, v_v_1951_);
return v___x_1953_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1954_ = lean_box(0);
v___x_1955_ = l_unsafeCast___redArg(v___x_1954_);
return v___x_1955_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(lean_object* v_x_1957_, size_t v_x_1958_, size_t v_x_1959_, lean_object* v_x_1960_, lean_object* v_x_1961_){
_start:
{
if (lean_obj_tag(v_x_1957_) == 0)
{
lean_object* v_es_1962_; size_t v___x_1963_; size_t v___x_1964_; lean_object* v_j_1965_; lean_object* v___x_1966_; uint8_t v___x_1967_; 
v_es_1962_ = lean_ctor_get(v_x_1957_, 0);
v___x_1963_ = ((size_t)31ULL);
v___x_1964_ = lean_usize_land(v_x_1958_, v___x_1963_);
v_j_1965_ = lean_usize_to_nat(v___x_1964_);
v___x_1966_ = lean_array_get_size(v_es_1962_);
v___x_1967_ = lean_nat_dec_lt(v_j_1965_, v___x_1966_);
if (v___x_1967_ == 0)
{
lean_dec(v_j_1965_);
lean_dec(v_x_1961_);
lean_dec_ref(v_x_1960_);
return v_x_1957_;
}
else
{
lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_2006_; 
lean_inc_ref(v_es_1962_);
v_isSharedCheck_2006_ = !lean_is_exclusive(v_x_1957_);
if (v_isSharedCheck_2006_ == 0)
{
lean_object* v_unused_2007_; 
v_unused_2007_ = lean_ctor_get(v_x_1957_, 0);
lean_dec(v_unused_2007_);
v___x_1969_ = v_x_1957_;
v_isShared_1970_ = v_isSharedCheck_2006_;
goto v_resetjp_1968_;
}
else
{
lean_dec(v_x_1957_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_2006_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v_v_1971_; lean_object* v___x_1972_; lean_object* v_xs_x27_1973_; lean_object* v___y_1975_; 
v_v_1971_ = lean_array_fget(v_es_1962_, v_j_1965_);
v___x_1972_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0);
v_xs_x27_1973_ = lean_array_fset(v_es_1962_, v_j_1965_, v___x_1972_);
switch(lean_obj_tag(v_v_1971_))
{
case 0:
{
lean_object* v_key_1980_; lean_object* v_val_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1991_; 
v_key_1980_ = lean_ctor_get(v_v_1971_, 0);
v_val_1981_ = lean_ctor_get(v_v_1971_, 1);
v_isSharedCheck_1991_ = !lean_is_exclusive(v_v_1971_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1983_ = v_v_1971_;
v_isShared_1984_ = v_isSharedCheck_1991_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_val_1981_);
lean_inc(v_key_1980_);
lean_dec(v_v_1971_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1991_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
uint8_t v___x_1985_; 
v___x_1985_ = lean_string_dec_eq(v_x_1960_, v_key_1980_);
if (v___x_1985_ == 0)
{
lean_object* v___x_1986_; lean_object* v___x_1987_; 
lean_del_object(v___x_1983_);
v___x_1986_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1980_, v_val_1981_, v_x_1960_, v_x_1961_);
v___x_1987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1986_);
v___y_1975_ = v___x_1987_;
goto v___jp_1974_;
}
else
{
lean_object* v___x_1989_; 
lean_dec(v_val_1981_);
lean_dec(v_key_1980_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 1, v_x_1961_);
lean_ctor_set(v___x_1983_, 0, v_x_1960_);
v___x_1989_ = v___x_1983_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_x_1960_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v_x_1961_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
v___y_1975_ = v___x_1989_;
goto v___jp_1974_;
}
}
}
}
case 1:
{
lean_object* v_node_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2004_; 
v_node_1992_ = lean_ctor_get(v_v_1971_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v_v_1971_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1994_ = v_v_1971_;
v_isShared_1995_ = v_isSharedCheck_2004_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_node_1992_);
lean_dec(v_v_1971_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2004_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
size_t v___x_1996_; size_t v___x_1997_; size_t v___x_1998_; size_t v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2002_; 
v___x_1996_ = ((size_t)5ULL);
v___x_1997_ = lean_usize_shift_right(v_x_1958_, v___x_1996_);
v___x_1998_ = ((size_t)1ULL);
v___x_1999_ = lean_usize_add(v_x_1959_, v___x_1998_);
v___x_2000_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(v_node_1992_, v___x_1997_, v___x_1999_, v_x_1960_, v_x_1961_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_2000_);
v___x_2002_ = v___x_1994_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v___x_2000_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
v___y_1975_ = v___x_2002_;
goto v___jp_1974_;
}
}
}
default: 
{
lean_object* v___x_2005_; 
v___x_2005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2005_, 0, v_x_1960_);
lean_ctor_set(v___x_2005_, 1, v_x_1961_);
v___y_1975_ = v___x_2005_;
goto v___jp_1974_;
}
}
v___jp_1974_:
{
lean_object* v___x_1976_; lean_object* v___x_1978_; 
v___x_1976_ = lean_array_fset(v_xs_x27_1973_, v_j_1965_, v___y_1975_);
lean_dec(v_j_1965_);
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 0, v___x_1976_);
v___x_1978_ = v___x_1969_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v___x_1976_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
}
}
else
{
lean_object* v_ks_2008_; lean_object* v_vs_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2027_; 
v_ks_2008_ = lean_ctor_get(v_x_1957_, 0);
v_vs_2009_ = lean_ctor_get(v_x_1957_, 1);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_x_1957_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2011_ = v_x_1957_;
v_isShared_2012_ = v_isSharedCheck_2027_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_vs_2009_);
lean_inc(v_ks_2008_);
lean_dec(v_x_1957_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2027_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2014_; 
if (v_isShared_2012_ == 0)
{
v___x_2014_ = v___x_2011_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_ks_2008_);
lean_ctor_set(v_reuseFailAlloc_2026_, 1, v_vs_2009_);
v___x_2014_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
lean_object* v_newNode_2015_; size_t v___x_2016_; uint8_t v___x_2017_; 
v_newNode_2015_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12___redArg(v___x_2014_, v_x_1960_, v_x_1961_);
v___x_2016_ = ((size_t)7ULL);
v___x_2017_ = lean_usize_dec_le(v___x_2016_, v_x_1959_);
if (v___x_2017_ == 0)
{
lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; 
v___x_2018_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2015_);
v___x_2019_ = lean_unsigned_to_nat(4u);
v___x_2020_ = lean_nat_dec_lt(v___x_2018_, v___x_2019_);
lean_dec(v___x_2018_);
if (v___x_2020_ == 0)
{
lean_object* v_ks_2021_; lean_object* v_vs_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v_ks_2021_ = lean_ctor_get(v_newNode_2015_, 0);
lean_inc_ref(v_ks_2021_);
v_vs_2022_ = lean_ctor_get(v_newNode_2015_, 1);
lean_inc_ref(v_vs_2022_);
lean_dec_ref(v_newNode_2015_);
v___x_2023_ = lean_unsigned_to_nat(0u);
v___x_2024_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__1);
v___x_2025_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg(v_x_1959_, v_ks_2021_, v_vs_2022_, v___x_2023_, v___x_2024_);
lean_dec_ref(v_vs_2022_);
lean_dec_ref(v_ks_2021_);
return v___x_2025_;
}
else
{
return v_newNode_2015_;
}
}
else
{
return v_newNode_2015_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg(size_t v_depth_2028_, lean_object* v_keys_2029_, lean_object* v_vals_2030_, lean_object* v_i_2031_, lean_object* v_entries_2032_){
_start:
{
lean_object* v___x_2033_; uint8_t v___x_2034_; 
v___x_2033_ = lean_array_get_size(v_keys_2029_);
v___x_2034_ = lean_nat_dec_lt(v_i_2031_, v___x_2033_);
if (v___x_2034_ == 0)
{
lean_dec(v_i_2031_);
return v_entries_2032_;
}
else
{
lean_object* v_k_2035_; lean_object* v_v_2036_; uint64_t v___x_2037_; size_t v_h_2038_; size_t v___x_2039_; lean_object* v___x_2040_; size_t v___x_2041_; size_t v___x_2042_; size_t v___x_2043_; size_t v_h_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v_k_2035_ = lean_array_fget_borrowed(v_keys_2029_, v_i_2031_);
v_v_2036_ = lean_array_fget_borrowed(v_vals_2030_, v_i_2031_);
v___x_2037_ = lean_string_hash(v_k_2035_);
v_h_2038_ = lean_uint64_to_usize(v___x_2037_);
v___x_2039_ = ((size_t)5ULL);
v___x_2040_ = lean_unsigned_to_nat(1u);
v___x_2041_ = ((size_t)1ULL);
v___x_2042_ = lean_usize_sub(v_depth_2028_, v___x_2041_);
v___x_2043_ = lean_usize_mul(v___x_2039_, v___x_2042_);
v_h_2044_ = lean_usize_shift_right(v_h_2038_, v___x_2043_);
v___x_2045_ = lean_nat_add(v_i_2031_, v___x_2040_);
lean_dec(v_i_2031_);
lean_inc(v_v_2036_);
lean_inc(v_k_2035_);
v___x_2046_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(v_entries_2032_, v_h_2044_, v_depth_2028_, v_k_2035_, v_v_2036_);
v_i_2031_ = v___x_2045_;
v_entries_2032_ = v___x_2046_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg___boxed(lean_object* v_depth_2048_, lean_object* v_keys_2049_, lean_object* v_vals_2050_, lean_object* v_i_2051_, lean_object* v_entries_2052_){
_start:
{
size_t v_depth_boxed_2053_; lean_object* v_res_2054_; 
v_depth_boxed_2053_ = lean_unbox_usize(v_depth_2048_);
lean_dec(v_depth_2048_);
v_res_2054_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg(v_depth_boxed_2053_, v_keys_2049_, v_vals_2050_, v_i_2051_, v_entries_2052_);
lean_dec_ref(v_vals_2050_);
lean_dec_ref(v_keys_2049_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___boxed(lean_object* v_x_2055_, lean_object* v_x_2056_, lean_object* v_x_2057_, lean_object* v_x_2058_, lean_object* v_x_2059_){
_start:
{
size_t v_x_2407__boxed_2060_; size_t v_x_2408__boxed_2061_; lean_object* v_res_2062_; 
v_x_2407__boxed_2060_ = lean_unbox_usize(v_x_2056_);
lean_dec(v_x_2056_);
v_x_2408__boxed_2061_ = lean_unbox_usize(v_x_2057_);
lean_dec(v_x_2057_);
v_res_2062_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(v_x_2055_, v_x_2407__boxed_2060_, v_x_2408__boxed_2061_, v_x_2058_, v_x_2059_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8___redArg(lean_object* v_x_2063_, lean_object* v_x_2064_, lean_object* v_x_2065_){
_start:
{
uint64_t v___x_2066_; size_t v___x_2067_; size_t v___x_2068_; lean_object* v___x_2069_; 
v___x_2066_ = lean_string_hash(v_x_2064_);
v___x_2067_ = lean_uint64_to_usize(v___x_2066_);
v___x_2068_ = ((size_t)1ULL);
v___x_2069_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(v_x_2063_, v___x_2067_, v___x_2068_, v_x_2064_, v_x_2065_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0(lean_object* v_mutex_2070_, lean_object* v_a_x3f_2071_){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2073_ = lean_io_basemutex_unlock(v_mutex_2070_);
v___x_2074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2074_, 0, v___x_2073_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0___boxed(lean_object* v_mutex_2075_, lean_object* v_a_x3f_2076_, lean_object* v___y_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0(v_mutex_2075_, v_a_x3f_2076_);
lean_dec(v_a_x3f_2076_);
lean_dec(v_mutex_2075_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(lean_object* v_mutex_2079_, lean_object* v_k_2080_, lean_object* v___y_2081_){
_start:
{
lean_object* v_ref_2083_; lean_object* v_mutex_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
v_ref_2083_ = lean_ctor_get(v_mutex_2079_, 0);
lean_inc(v_ref_2083_);
v_mutex_2084_ = lean_ctor_get(v_mutex_2079_, 1);
lean_inc(v_mutex_2084_);
lean_dec_ref(v_mutex_2079_);
v___x_2085_ = lean_io_basemutex_lock(v_mutex_2084_);
lean_inc_ref(v___y_2081_);
v___x_2086_ = lean_apply_3(v_k_2080_, v_ref_2083_, v___y_2081_, lean_box(0));
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2103_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2089_ = v___x_2086_;
v_isShared_2090_ = v_isSharedCheck_2103_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2086_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2103_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2092_; 
lean_inc(v_a_2087_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set_tag(v___x_2089_, 1);
v___x_2092_ = v___x_2089_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_a_2087_);
v___x_2092_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
lean_object* v___x_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
v___x_2093_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0(v_mutex_2084_, v___x_2092_);
lean_dec_ref(v___x_2092_);
lean_dec(v_mutex_2084_);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2100_ == 0)
{
lean_object* v_unused_2101_; 
v_unused_2101_ = lean_ctor_get(v___x_2093_, 0);
lean_dec(v_unused_2101_);
v___x_2095_ = v___x_2093_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_dec(v___x_2093_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v_a_2087_);
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2087_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
}
else
{
lean_object* v_a_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
v_a_2104_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2104_);
lean_dec_ref_known(v___x_2086_, 1);
v___x_2105_ = lean_box(0);
v___x_2106_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0(v_mutex_2084_, v___x_2105_);
lean_dec(v_mutex_2084_);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2106_);
if (v_isSharedCheck_2113_ == 0)
{
lean_object* v_unused_2114_; 
v_unused_2114_ = lean_ctor_get(v___x_2106_, 0);
lean_dec(v_unused_2114_);
v___x_2108_ = v___x_2106_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_dec(v___x_2106_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
lean_ctor_set_tag(v___x_2108_, 1);
lean_ctor_set(v___x_2108_, 0, v_a_2104_);
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2104_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object* v_mutex_2115_, lean_object* v_k_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(v_mutex_2115_, v_k_2116_, v___y_2117_);
lean_dec_ref(v___y_2117_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8(lean_object* v_val_2120_, lean_object* v___f_2121_, lean_object* v_param_2122_, lean_object* v___x_2123_, lean_object* v_x_2124_, lean_object* v___y_2125_){
_start:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2127_ = lean_st_ref_get(v_val_2120_);
lean_inc_ref(v___y_2125_);
v___x_2128_ = lean_apply_4(v___f_2121_, v_param_2122_, v___x_2127_, v___y_2125_, lean_box(0));
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2138_; 
v_a_2129_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2131_ = v___x_2128_;
v_isShared_2132_ = v_isSharedCheck_2138_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2128_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2138_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v_snd_2133_; lean_object* v___x_2134_; lean_object* v___x_2136_; 
v_snd_2133_ = lean_ctor_get(v_a_2129_, 1);
lean_inc(v_snd_2133_);
lean_dec(v_a_2129_);
v___x_2134_ = lean_st_ref_swap(v_val_2120_, v_snd_2133_);
lean_dec(v___x_2134_);
if (v_isShared_2132_ == 0)
{
lean_ctor_set(v___x_2131_, 0, v___x_2123_);
v___x_2136_ = v___x_2131_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2123_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
else
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2146_; 
v_a_2139_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2141_ = v___x_2128_;
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2128_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2142_ == 0)
{
v___x_2144_ = v___x_2141_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
return v___x_2144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8___boxed(lean_object* v_val_2147_, lean_object* v___f_2148_, lean_object* v_param_2149_, lean_object* v___x_2150_, lean_object* v_x_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8(v_val_2147_, v___f_2148_, v_param_2149_, v___x_2150_, v_x_2151_, v___y_2152_);
lean_dec_ref(v___y_2152_);
lean_dec(v_val_2147_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9(lean_object* v___f_2155_, lean_object* v___f_2156_, lean_object* v___x_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___x_2161_ = lean_st_ref_get(v___y_2158_);
v___x_2162_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_2161_, v___f_2155_, v___y_2159_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2172_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2165_ = v___x_2162_;
v_isShared_2166_ = v_isSharedCheck_2172_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_a_2163_);
lean_dec(v___x_2162_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2172_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2170_; 
v___x_2167_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_2156_, v_a_2163_);
v___x_2168_ = lean_st_ref_swap(v___y_2158_, v___x_2167_);
lean_dec(v___x_2168_);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v___x_2157_);
v___x_2170_ = v___x_2165_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v___x_2157_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_dec_ref(v___f_2156_);
v_a_2173_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2162_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2162_);
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
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9___boxed(lean_object* v___f_2181_, lean_object* v___f_2182_, lean_object* v___x_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_){
_start:
{
lean_object* v_res_2187_; 
v_res_2187_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9(v___f_2181_, v___f_2182_, v___x_2183_, v___y_2184_, v___y_2185_);
lean_dec_ref(v___y_2185_);
lean_dec(v___y_2184_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10(lean_object* v_val_2188_, lean_object* v___f_2189_, lean_object* v___x_2190_, lean_object* v___f_2191_, lean_object* v_val_2192_, lean_object* v_param_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v___f_2196_; lean_object* v___f_2197_; lean_object* v___x_2198_; 
v___f_2196_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8___boxed), 7, 4);
lean_closure_set(v___f_2196_, 0, v_val_2188_);
lean_closure_set(v___f_2196_, 1, v___f_2189_);
lean_closure_set(v___f_2196_, 2, v_param_2193_);
lean_closure_set(v___f_2196_, 3, v___x_2190_);
v___f_2197_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9___boxed), 6, 3);
lean_closure_set(v___f_2197_, 0, v___f_2196_);
lean_closure_set(v___f_2197_, 1, v___f_2191_);
lean_closure_set(v___f_2197_, 2, v___x_2190_);
v___x_2198_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(v_val_2192_, v___f_2197_, v___y_2194_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10___boxed(lean_object* v_val_2199_, lean_object* v___f_2200_, lean_object* v___x_2201_, lean_object* v___f_2202_, lean_object* v_val_2203_, lean_object* v_param_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_){
_start:
{
lean_object* v_res_2207_; 
v_res_2207_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10(v_val_2199_, v___f_2200_, v___x_2201_, v___f_2202_, v_val_2203_, v_param_2204_, v___y_2205_);
lean_dec_ref(v___y_2205_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4(lean_object* v___x_2208_, lean_object* v_x_2209_){
_start:
{
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4___boxed(lean_object* v___x_2210_, lean_object* v_x_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4(v___x_2210_, v_x_2211_);
lean_dec_ref(v_x_2211_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4(lean_object* v_params_2215_){
_start:
{
lean_object* v___x_2216_; 
lean_inc(v_params_2215_);
v___x_2216_ = l_Lean_Lsp_instFromJsonInlayHintParams_fromJson(v_params_2215_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2232_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2232_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2232_ == 0)
{
v___x_2219_ = v___x_2216_;
v_isShared_2220_ = v_isSharedCheck_2232_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2216_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2232_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
uint8_t v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2230_; 
v___x_2221_ = 3;
v___x_2222_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__0));
v___x_2223_ = l_Lean_Json_compress(v_params_2215_);
v___x_2224_ = lean_string_append(v___x_2222_, v___x_2223_);
lean_dec_ref(v___x_2223_);
v___x_2225_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__1));
v___x_2226_ = lean_string_append(v___x_2224_, v___x_2225_);
v___x_2227_ = lean_string_append(v___x_2226_, v_a_2217_);
lean_dec(v_a_2217_);
v___x_2228_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
lean_ctor_set_uint8(v___x_2228_, sizeof(void*)*1, v___x_2221_);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v___x_2228_);
v___x_2230_ = v___x_2219_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v___x_2228_);
v___x_2230_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
return v___x_2230_;
}
}
}
else
{
lean_object* v_a_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2240_; 
lean_dec(v_params_2215_);
v_a_2233_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2235_ = v___x_2216_;
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_a_2233_);
lean_dec(v___x_2216_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2238_; 
if (v_isShared_2236_ == 0)
{
v___x_2238_ = v___x_2235_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_a_2233_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__0(lean_object* v_j_2241_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4(v_j_2241_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2242_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2242_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2259_; 
v_a_2251_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2259_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2259_ == 0)
{
v___x_2253_ = v___x_2242_;
v_isShared_2254_ = v_isSharedCheck_2259_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_2242_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2259_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v_textDocument_2255_; lean_object* v___x_2257_; 
v_textDocument_2255_ = lean_ctor_get(v_a_2251_, 1);
lean_inc_ref(v_textDocument_2255_);
lean_dec(v_a_2251_);
if (v_isShared_2254_ == 0)
{
lean_ctor_set(v___x_2253_, 0, v_textDocument_2255_);
v___x_2257_ = v___x_2253_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v_textDocument_2255_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
return v___x_2257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2(lean_object* v_method_2260_, lean_object* v_inst_2261_, lean_object* v_onDidChange_2262_, lean_object* v_param_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(v_method_2260_, v___y_2264_, lean_box(0), v_inst_2261_, v___y_2265_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v_a_2268_; lean_object* v___x_2269_; 
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
lean_inc(v_a_2268_);
lean_dec_ref_known(v___x_2267_, 1);
lean_inc_ref(v___y_2265_);
v___x_2269_ = lean_apply_4(v_onDidChange_2262_, v_param_2263_, v_a_2268_, v___y_2265_, lean_box(0));
if (lean_obj_tag(v___x_2269_) == 0)
{
lean_object* v_a_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2288_; 
v_a_2270_ = lean_ctor_get(v___x_2269_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2272_ = v___x_2269_;
v_isShared_2273_ = v_isSharedCheck_2288_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_a_2270_);
lean_dec(v___x_2269_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2288_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v_snd_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2286_; 
v_snd_2274_ = lean_ctor_get(v_a_2270_, 1);
v_isSharedCheck_2286_ = !lean_is_exclusive(v_a_2270_);
if (v_isSharedCheck_2286_ == 0)
{
lean_object* v_unused_2287_; 
v_unused_2287_ = lean_ctor_get(v_a_2270_, 0);
lean_dec(v_unused_2287_);
v___x_2276_ = v_a_2270_;
v_isShared_2277_ = v_isSharedCheck_2286_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_snd_2274_);
lean_dec(v_a_2270_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2286_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2281_; 
v___x_2278_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_2261_, v_snd_2274_);
lean_dec(v_snd_2274_);
v___x_2279_ = lean_box(0);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 1, v___x_2278_);
lean_ctor_set(v___x_2276_, 0, v___x_2279_);
v___x_2281_ = v___x_2276_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2279_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v___x_2278_);
v___x_2281_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
lean_object* v___x_2283_; 
if (v_isShared_2273_ == 0)
{
lean_ctor_set(v___x_2272_, 0, v___x_2281_);
v___x_2283_ = v___x_2272_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v___x_2281_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
v_a_2289_ = lean_ctor_get(v___x_2269_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2269_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2269_);
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
v_reuseFailAlloc_2295_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
lean_dec_ref(v_param_2263_);
lean_dec_ref(v_onDidChange_2262_);
v_a_2297_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2267_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2267_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2___boxed(lean_object* v_method_2305_, lean_object* v_inst_2306_, lean_object* v_onDidChange_2307_, lean_object* v_param_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
lean_object* v_res_2312_; 
v_res_2312_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2(v_method_2305_, v_inst_2306_, v_onDidChange_2307_, v_param_2308_, v___y_2309_, v___y_2310_);
lean_dec_ref(v___y_2310_);
lean_dec(v___y_2309_);
lean_dec(v_inst_2306_);
lean_dec_ref(v_method_2305_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8(size_t v_sz_2313_, size_t v_i_2314_, lean_object* v_bs_2315_){
_start:
{
uint8_t v___x_2316_; 
v___x_2316_ = lean_usize_dec_lt(v_i_2314_, v_sz_2313_);
if (v___x_2316_ == 0)
{
lean_object* v___x_2317_; 
v___x_2317_ = l_unsafeCast___redArg(v_bs_2315_);
lean_dec_ref(v_bs_2315_);
return v___x_2317_;
}
else
{
lean_object* v_v_2318_; lean_object* v___x_2319_; lean_object* v_bs_x27_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; size_t v___x_2323_; size_t v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v_v_2318_ = lean_array_uget(v_bs_2315_, v_i_2314_);
v___x_2319_ = lean_unsigned_to_nat(0u);
v_bs_x27_2320_ = lean_array_uset(v_bs_2315_, v_i_2314_, v___x_2319_);
v___x_2321_ = l_unsafeCast___redArg(v_v_2318_);
lean_dec(v_v_2318_);
v___x_2322_ = l_Lean_Lsp_instToJsonInlayHint_toJson(v___x_2321_);
v___x_2323_ = ((size_t)1ULL);
v___x_2324_ = lean_usize_add(v_i_2314_, v___x_2323_);
v___x_2325_ = l_unsafeCast___redArg(v___x_2322_);
lean_dec(v___x_2322_);
v___x_2326_ = lean_array_uset(v_bs_x27_2320_, v_i_2314_, v___x_2325_);
v_i_2314_ = v___x_2324_;
v_bs_2315_ = v___x_2326_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8___boxed(lean_object* v_sz_2328_, lean_object* v_i_2329_, lean_object* v_bs_2330_){
_start:
{
size_t v_sz_boxed_2331_; size_t v_i_boxed_2332_; lean_object* v_res_2333_; 
v_sz_boxed_2331_ = lean_unbox_usize(v_sz_2328_);
lean_dec(v_sz_2328_);
v_i_boxed_2332_ = lean_unbox_usize(v_i_2329_);
lean_dec(v_i_2329_);
v_res_2333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8(v_sz_boxed_2331_, v_i_boxed_2332_, v_bs_2330_);
return v_res_2333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6(lean_object* v_a_2334_){
_start:
{
size_t v_sz_2335_; size_t v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v_sz_2335_ = lean_array_size(v_a_2334_);
v___x_2336_ = ((size_t)0ULL);
v___x_2337_ = l_unsafeCast___redArg(v_a_2334_);
v___x_2338_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8(v_sz_2335_, v___x_2336_, v___x_2337_);
v___x_2339_ = l_unsafeCast___redArg(v___x_2338_);
lean_dec_ref(v___x_2338_);
v___x_2340_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2339_);
return v___x_2340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6___boxed(lean_object* v_a_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6(v_a_2341_);
lean_dec_ref(v_a_2341_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_params_2343_){
_start:
{
lean_object* v___x_2345_; 
v___x_2345_ = l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4(v_params_2343_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v_a_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2353_; 
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2348_ = v___x_2345_;
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_a_2346_);
lean_dec(v___x_2345_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2351_; 
if (v_isShared_2349_ == 0)
{
lean_ctor_set_tag(v___x_2348_, 1);
v___x_2351_ = v___x_2348_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_a_2346_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
else
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2361_; 
v_a_2354_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2356_ = v___x_2345_;
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2345_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2359_; 
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 0);
v___x_2359_ = v___x_2356_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v_a_2354_);
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
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_params_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_params_2362_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1(lean_object* v_method_2365_, lean_object* v_inst_2366_, lean_object* v_handler_2367_, lean_object* v_param_2368_, lean_object* v_state_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v___x_2372_; 
v___x_2372_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_param_2368_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2374_; 
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2372_, 1);
v___x_2374_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(v_method_2365_, v_state_2369_, lean_box(0), v_inst_2366_, v___y_2370_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v___x_2376_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2375_);
lean_dec_ref_known(v___x_2374_, 1);
lean_inc_ref(v___y_2370_);
v___x_2376_ = lean_apply_4(v_handler_2367_, v_a_2373_, v_a_2375_, v___y_2370_, lean_box(0));
if (lean_obj_tag(v___x_2376_) == 0)
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2400_; 
v_a_2377_ = lean_ctor_get(v___x_2376_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2379_ = v___x_2376_;
v_isShared_2380_ = v_isSharedCheck_2400_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v___x_2376_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2400_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v_fst_2381_; lean_object* v_snd_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2399_; 
v_fst_2381_ = lean_ctor_get(v_a_2377_, 0);
v_snd_2382_ = lean_ctor_get(v_a_2377_, 1);
v_isSharedCheck_2399_ = !lean_is_exclusive(v_a_2377_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2384_ = v_a_2377_;
v_isShared_2385_ = v_isSharedCheck_2399_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_snd_2382_);
lean_inc(v_fst_2381_);
lean_dec(v_a_2377_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2399_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v_response_2386_; uint8_t v_isComplete_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2394_; 
v_response_2386_ = lean_ctor_get(v_fst_2381_, 0);
lean_inc(v_response_2386_);
v_isComplete_2387_ = lean_ctor_get_uint8(v_fst_2381_, sizeof(void*)*1);
lean_dec(v_fst_2381_);
v___x_2388_ = l_Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6(v_response_2386_);
lean_dec(v_response_2386_);
lean_inc(v___x_2388_);
v___x_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2389_, 0, v___x_2388_);
v___x_2390_ = l_Lean_Json_compress(v___x_2388_);
v___x_2391_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2391_, 0, v___x_2389_);
lean_ctor_set(v___x_2391_, 1, v___x_2390_);
lean_ctor_set_uint8(v___x_2391_, sizeof(void*)*2, v_isComplete_2387_);
v___x_2392_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_2366_, v_snd_2382_);
lean_dec(v_snd_2382_);
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 1, v___x_2392_);
lean_ctor_set(v___x_2384_, 0, v___x_2391_);
v___x_2394_ = v___x_2384_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v___x_2391_);
lean_ctor_set(v_reuseFailAlloc_2398_, 1, v___x_2392_);
v___x_2394_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
lean_object* v___x_2396_; 
if (v_isShared_2380_ == 0)
{
lean_ctor_set(v___x_2379_, 0, v___x_2394_);
v___x_2396_ = v___x_2379_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v___x_2394_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
}
}
}
else
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2408_; 
v_a_2401_ = lean_ctor_get(v___x_2376_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2403_ = v___x_2376_;
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2376_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2406_; 
if (v_isShared_2404_ == 0)
{
v___x_2406_ = v___x_2403_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_a_2401_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
else
{
lean_object* v_a_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2416_; 
lean_dec(v_a_2373_);
lean_dec_ref(v_handler_2367_);
v_a_2409_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2411_ = v___x_2374_;
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_a_2409_);
lean_dec(v___x_2374_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2414_; 
if (v_isShared_2412_ == 0)
{
v___x_2414_ = v___x_2411_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_a_2409_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
lean_dec_ref(v_handler_2367_);
v_a_2417_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2372_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2372_);
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
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1___boxed(lean_object* v_method_2425_, lean_object* v_inst_2426_, lean_object* v_handler_2427_, lean_object* v_param_2428_, lean_object* v_state_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v_res_2432_; 
v_res_2432_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1(v_method_2425_, v_inst_2426_, v_handler_2427_, v_param_2428_, v_state_2429_, v___y_2430_);
lean_dec_ref(v___y_2430_);
lean_dec(v_state_2429_);
lean_dec(v_inst_2426_);
lean_dec_ref(v_method_2425_);
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6(lean_object* v___f_2433_, lean_object* v___f_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2438_ = lean_st_ref_get(v___y_2435_);
v___x_2439_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_2438_, v___f_2433_, v___y_2436_);
if (lean_obj_tag(v___x_2439_) == 0)
{
lean_object* v_a_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2449_; 
v_a_2440_ = lean_ctor_get(v___x_2439_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2442_ = v___x_2439_;
v_isShared_2443_ = v_isSharedCheck_2449_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_a_2440_);
lean_dec(v___x_2439_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2449_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2447_; 
lean_inc(v_a_2440_);
v___x_2444_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_2434_, v_a_2440_);
v___x_2445_ = lean_st_ref_swap(v___y_2435_, v___x_2444_);
lean_dec(v___x_2445_);
if (v_isShared_2443_ == 0)
{
v___x_2447_ = v___x_2442_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_a_2440_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
else
{
lean_dec_ref(v___f_2434_);
return v___x_2439_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6___boxed(lean_object* v___f_2450_, lean_object* v___f_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6(v___f_2450_, v___f_2451_, v___y_2452_, v___y_2453_);
lean_dec_ref(v___y_2453_);
lean_dec(v___y_2452_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5(lean_object* v_val_2456_, lean_object* v___f_2457_, lean_object* v_param_2458_, lean_object* v_x_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2462_ = lean_st_ref_get(v_val_2456_);
lean_inc_ref(v___y_2460_);
v___x_2463_ = lean_apply_4(v___f_2457_, v_param_2458_, v___x_2462_, v___y_2460_, lean_box(0));
if (lean_obj_tag(v___x_2463_) == 0)
{
lean_object* v_a_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2474_; 
v_a_2464_ = lean_ctor_get(v___x_2463_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2463_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2466_ = v___x_2463_;
v_isShared_2467_ = v_isSharedCheck_2474_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_a_2464_);
lean_dec(v___x_2463_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2474_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v_fst_2468_; lean_object* v_snd_2469_; lean_object* v___x_2470_; lean_object* v___x_2472_; 
v_fst_2468_ = lean_ctor_get(v_a_2464_, 0);
lean_inc(v_fst_2468_);
v_snd_2469_ = lean_ctor_get(v_a_2464_, 1);
lean_inc(v_snd_2469_);
lean_dec(v_a_2464_);
v___x_2470_ = lean_st_ref_swap(v_val_2456_, v_snd_2469_);
lean_dec(v___x_2470_);
if (v_isShared_2467_ == 0)
{
lean_ctor_set(v___x_2466_, 0, v_fst_2468_);
v___x_2472_ = v___x_2466_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_fst_2468_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
v_a_2475_ = lean_ctor_get(v___x_2463_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2463_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2463_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2463_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5___boxed(lean_object* v_val_2483_, lean_object* v___f_2484_, lean_object* v_param_2485_, lean_object* v_x_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5(v_val_2483_, v___f_2484_, v_param_2485_, v_x_2486_, v___y_2487_);
lean_dec_ref(v___y_2487_);
lean_dec(v_val_2483_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7(lean_object* v_val_2490_, lean_object* v___f_2491_, lean_object* v___f_2492_, lean_object* v_val_2493_, lean_object* v_param_2494_, lean_object* v___y_2495_){
_start:
{
lean_object* v___f_2497_; lean_object* v___f_2498_; lean_object* v___x_2499_; 
v___f_2497_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5___boxed), 6, 3);
lean_closure_set(v___f_2497_, 0, v_val_2490_);
lean_closure_set(v___f_2497_, 1, v___f_2491_);
lean_closure_set(v___f_2497_, 2, v_param_2494_);
v___f_2498_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6___boxed), 5, 2);
lean_closure_set(v___f_2498_, 0, v___f_2497_);
lean_closure_set(v___f_2498_, 1, v___f_2492_);
v___x_2499_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(v_val_2493_, v___f_2498_, v___y_2495_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7___boxed(lean_object* v_val_2500_, lean_object* v___f_2501_, lean_object* v___f_2502_, lean_object* v_val_2503_, lean_object* v_param_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7(v_val_2500_, v___f_2501_, v___f_2502_, v_val_2503_, v_param_2504_, v___y_2505_);
lean_dec_ref(v___y_2505_);
return v_res_2507_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = lean_box(0);
v___x_2516_ = lean_task_pure(v___x_2515_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object* v_method_2517_, lean_object* v_completeness_2518_, lean_object* v_inst_2519_, lean_object* v_initState_2520_, lean_object* v_handler_2521_, lean_object* v_onDidChange_2522_){
_start:
{
lean_object* v___f_2524_; lean_object* v___f_2525_; lean_object* v___f_2526_; uint8_t v___x_2527_; 
v___f_2524_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0));
lean_inc_n(v_inst_2519_, 2);
lean_inc_ref_n(v_method_2517_, 2);
v___f_2525_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1___boxed), 7, 3);
lean_closure_set(v___f_2525_, 0, v_method_2517_);
lean_closure_set(v___f_2525_, 1, v_inst_2519_);
lean_closure_set(v___f_2525_, 2, v_handler_2521_);
v___f_2526_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2___boxed), 7, 3);
lean_closure_set(v___f_2526_, 0, v_method_2517_);
lean_closure_set(v___f_2526_, 1, v_inst_2519_);
lean_closure_set(v___f_2526_, 2, v_onDidChange_2522_);
v___x_2527_ = l_Lean_initializing();
if (v___x_2527_ == 0)
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
lean_dec_ref(v___f_2526_);
lean_dec_ref(v___f_2525_);
lean_dec(v_inst_2519_);
lean_dec(v_completeness_2518_);
v___x_2528_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1));
v___x_2529_ = lean_string_append(v___x_2528_, v_method_2517_);
lean_dec_ref(v_method_2517_);
v___x_2530_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__2));
v___x_2531_ = lean_string_append(v___x_2529_, v___x_2530_);
v___x_2532_ = lean_mk_io_user_error(v___x_2531_);
v___x_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2532_);
return v___x_2533_;
}
else
{
lean_object* v___x_2534_; lean_object* v___f_2535_; lean_object* v___f_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___f_2541_; lean_object* v___f_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2534_ = lean_box(0);
v___f_2535_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__3));
v___f_2536_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__4));
v___x_2537_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5);
v___x_2538_ = l_Std_Mutex_new___redArg(v___x_2537_);
v___x_2539_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_2519_, v_initState_2520_);
lean_dec(v_inst_2519_);
lean_inc(v___x_2539_);
v___x_2540_ = lean_st_mk_ref(v___x_2539_);
lean_inc_ref_n(v___x_2538_, 2);
lean_inc_ref(v___f_2525_);
lean_inc_n(v___x_2540_, 2);
v___f_2541_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7___boxed), 7, 4);
lean_closure_set(v___f_2541_, 0, v___x_2540_);
lean_closure_set(v___f_2541_, 1, v___f_2525_);
lean_closure_set(v___f_2541_, 2, v___f_2535_);
lean_closure_set(v___f_2541_, 3, v___x_2538_);
lean_inc_ref(v___f_2526_);
v___f_2542_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10___boxed), 8, 5);
lean_closure_set(v___f_2542_, 0, v___x_2540_);
lean_closure_set(v___f_2542_, 1, v___f_2526_);
lean_closure_set(v___f_2542_, 2, v___x_2534_);
lean_closure_set(v___f_2542_, 3, v___f_2536_);
lean_closure_set(v___f_2542_, 4, v___x_2538_);
v___x_2543_ = l_Lean_Server_statefulRequestHandlers;
v___x_2544_ = lean_st_ref_take(v___x_2543_);
v___x_2545_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2545_, 0, v___f_2524_);
lean_ctor_set(v___x_2545_, 1, v___f_2525_);
lean_ctor_set(v___x_2545_, 2, v___f_2541_);
lean_ctor_set(v___x_2545_, 3, v___f_2526_);
lean_ctor_set(v___x_2545_, 4, v___f_2542_);
lean_ctor_set(v___x_2545_, 5, v___x_2538_);
lean_ctor_set(v___x_2545_, 6, v___x_2539_);
lean_ctor_set(v___x_2545_, 7, v___x_2540_);
lean_ctor_set(v___x_2545_, 8, v_completeness_2518_);
v___x_2546_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8___redArg(v___x_2544_, v_method_2517_, v___x_2545_);
v___x_2547_ = lean_st_ref_put(v___x_2543_, v___x_2546_);
v___x_2548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2547_);
return v___x_2548_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_method_2549_, lean_object* v_completeness_2550_, lean_object* v_inst_2551_, lean_object* v_initState_2552_, lean_object* v_handler_2553_, lean_object* v_onDidChange_2554_, lean_object* v_a_2555_){
_start:
{
lean_object* v_res_2556_; 
v_res_2556_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_method_2549_, v_completeness_2550_, v_inst_2551_, v_initState_2552_, v_handler_2553_, v_onDidChange_2554_);
lean_dec(v_initState_2552_);
return v_res_2556_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_keys_2557_, lean_object* v_i_2558_, lean_object* v_k_2559_){
_start:
{
lean_object* v___x_2560_; uint8_t v___x_2561_; 
v___x_2560_ = lean_array_get_size(v_keys_2557_);
v___x_2561_ = lean_nat_dec_lt(v_i_2558_, v___x_2560_);
if (v___x_2561_ == 0)
{
lean_dec(v_i_2558_);
return v___x_2561_;
}
else
{
lean_object* v_k_x27_2562_; uint8_t v___x_2563_; 
v_k_x27_2562_ = lean_array_fget_borrowed(v_keys_2557_, v_i_2558_);
v___x_2563_ = lean_string_dec_eq(v_k_2559_, v_k_x27_2562_);
if (v___x_2563_ == 0)
{
lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2564_ = lean_unsigned_to_nat(1u);
v___x_2565_ = lean_nat_add(v_i_2558_, v___x_2564_);
lean_dec(v_i_2558_);
v_i_2558_ = v___x_2565_;
goto _start;
}
else
{
lean_dec(v_i_2558_);
return v___x_2561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_keys_2567_, lean_object* v_i_2568_, lean_object* v_k_2569_){
_start:
{
uint8_t v_res_2570_; lean_object* v_r_2571_; 
v_res_2570_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_keys_2567_, v_i_2568_, v_k_2569_);
lean_dec_ref(v_k_2569_);
lean_dec_ref(v_keys_2567_);
v_r_2571_ = lean_box(v_res_2570_);
return v_r_2571_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_2572_, size_t v_x_2573_, lean_object* v_x_2574_){
_start:
{
if (lean_obj_tag(v_x_2572_) == 0)
{
lean_object* v_es_2575_; lean_object* v___x_2576_; size_t v___x_2577_; size_t v___x_2578_; lean_object* v_j_2579_; lean_object* v___x_2580_; 
v_es_2575_ = lean_ctor_get(v_x_2572_, 0);
v___x_2576_ = lean_box(2);
v___x_2577_ = ((size_t)31ULL);
v___x_2578_ = lean_usize_land(v_x_2573_, v___x_2577_);
v_j_2579_ = lean_usize_to_nat(v___x_2578_);
v___x_2580_ = lean_array_get_borrowed(v___x_2576_, v_es_2575_, v_j_2579_);
lean_dec(v_j_2579_);
switch(lean_obj_tag(v___x_2580_))
{
case 0:
{
lean_object* v_key_2581_; uint8_t v___x_2582_; 
v_key_2581_ = lean_ctor_get(v___x_2580_, 0);
v___x_2582_ = lean_string_dec_eq(v_x_2574_, v_key_2581_);
return v___x_2582_;
}
case 1:
{
lean_object* v_node_2583_; size_t v___x_2584_; size_t v___x_2585_; 
v_node_2583_ = lean_ctor_get(v___x_2580_, 0);
v___x_2584_ = ((size_t)5ULL);
v___x_2585_ = lean_usize_shift_right(v_x_2573_, v___x_2584_);
v_x_2572_ = v_node_2583_;
v_x_2573_ = v___x_2585_;
goto _start;
}
default: 
{
uint8_t v___x_2587_; 
v___x_2587_ = 0;
return v___x_2587_;
}
}
}
else
{
lean_object* v_ks_2588_; lean_object* v___x_2589_; uint8_t v___x_2590_; 
v_ks_2588_ = lean_ctor_get(v_x_2572_, 0);
v___x_2589_ = lean_unsigned_to_nat(0u);
v___x_2590_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_ks_2588_, v___x_2589_, v_x_2574_);
return v___x_2590_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_x_2591_, lean_object* v_x_2592_, lean_object* v_x_2593_){
_start:
{
size_t v_x_3375__boxed_2594_; uint8_t v_res_2595_; lean_object* v_r_2596_; 
v_x_3375__boxed_2594_ = lean_unbox_usize(v_x_2592_);
lean_dec(v_x_2592_);
v_res_2595_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_x_2591_, v_x_3375__boxed_2594_, v_x_2593_);
lean_dec_ref(v_x_2593_);
lean_dec_ref(v_x_2591_);
v_r_2596_ = lean_box(v_res_2595_);
return v_r_2596_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_x_2597_, lean_object* v_x_2598_){
_start:
{
uint64_t v___x_2599_; size_t v___x_2600_; uint8_t v___x_2601_; 
v___x_2599_ = lean_string_hash(v_x_2598_);
v___x_2600_ = lean_uint64_to_usize(v___x_2599_);
v___x_2601_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_x_2597_, v___x_2600_, v_x_2598_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_2602_, lean_object* v_x_2603_){
_start:
{
uint8_t v_res_2604_; lean_object* v_r_2605_; 
v_res_2604_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_2602_, v_x_2603_);
lean_dec_ref(v_x_2603_);
lean_dec_ref(v_x_2602_);
v_r_2605_ = lean_box(v_res_2604_);
return v_r_2605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_method_2607_, lean_object* v_completeness_2608_, lean_object* v_inst_2609_, lean_object* v_initState_2610_, lean_object* v_handler_2611_, lean_object* v_onDidChange_2612_){
_start:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; 
v___x_2614_ = l_Lean_Server_requestHandlers;
v___x_2615_ = lean_st_ref_get(v___x_2614_);
v___x_2616_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v___x_2615_, v_method_2607_);
lean_dec(v___x_2615_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; 
v___x_2617_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_method_2607_, v_completeness_2608_, v_inst_2609_, v_initState_2610_, v_handler_2611_, v_onDidChange_2612_);
return v___x_2617_;
}
else
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
lean_dec_ref(v_onDidChange_2612_);
lean_dec_ref(v_handler_2611_);
lean_dec(v_inst_2609_);
lean_dec(v_completeness_2608_);
v___x_2618_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1));
v___x_2619_ = lean_string_append(v___x_2618_, v_method_2607_);
lean_dec_ref(v_method_2607_);
v___x_2620_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0));
v___x_2621_ = lean_string_append(v___x_2619_, v___x_2620_);
v___x_2622_ = lean_mk_io_user_error(v___x_2621_);
v___x_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
return v___x_2623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_method_2624_, lean_object* v_completeness_2625_, lean_object* v_inst_2626_, lean_object* v_initState_2627_, lean_object* v_handler_2628_, lean_object* v_onDidChange_2629_, lean_object* v_a_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg(v_method_2624_, v_completeness_2625_, v_inst_2626_, v_initState_2627_, v_handler_2628_, v_onDidChange_2629_);
lean_dec(v_initState_2627_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg(lean_object* v_method_2632_, lean_object* v_refreshMethod_2633_, lean_object* v_refreshIntervalMs_2634_, lean_object* v_inst_2635_, lean_object* v_initState_2636_, lean_object* v_handler_2637_, lean_object* v_onDidChange_2638_){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2640_, 0, v_refreshMethod_2633_);
lean_ctor_set(v___x_2640_, 1, v_refreshIntervalMs_2634_);
v___x_2641_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg(v_method_2632_, v___x_2640_, v_inst_2635_, v_initState_2636_, v_handler_2637_, v_onDidChange_2638_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_method_2642_, lean_object* v_refreshMethod_2643_, lean_object* v_refreshIntervalMs_2644_, lean_object* v_inst_2645_, lean_object* v_initState_2646_, lean_object* v_handler_2647_, lean_object* v_onDidChange_2648_, lean_object* v_a_2649_){
_start:
{
lean_object* v_res_2650_; 
v_res_2650_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg(v_method_2642_, v_refreshMethod_2643_, v_refreshIntervalMs_2644_, v_inst_2645_, v_initState_2646_, v_handler_2647_, v_onDidChange_2648_);
lean_dec(v_initState_2646_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2656_ = l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_;
v___x_2657_ = ((lean_object*)(l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_));
v___x_2658_ = ((lean_object*)(l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_));
v___x_2659_ = lean_unsigned_to_nat(500u);
v___x_2660_ = ((lean_object*)(l_Lean_Server_FileWorker_InlayHintState_init));
v___x_2661_ = ((lean_object*)(l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_));
v___x_2662_ = ((lean_object*)(l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_));
v___x_2663_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg(v___x_2657_, v___x_2658_, v___x_2659_, v___x_2656_, v___x_2660_, v___x_2661_, v___x_2662_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2____boxed(lean_object* v_a_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_();
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0(lean_object* v_method_2666_, lean_object* v_refreshMethod_2667_, lean_object* v_refreshIntervalMs_2668_, lean_object* v_stateType_2669_, lean_object* v_inst_2670_, lean_object* v_initState_2671_, lean_object* v_handler_2672_, lean_object* v_onDidChange_2673_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg(v_method_2666_, v_refreshMethod_2667_, v_refreshIntervalMs_2668_, v_inst_2670_, v_initState_2671_, v_handler_2672_, v_onDidChange_2673_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___boxed(lean_object* v_method_2676_, lean_object* v_refreshMethod_2677_, lean_object* v_refreshIntervalMs_2678_, lean_object* v_stateType_2679_, lean_object* v_inst_2680_, lean_object* v_initState_2681_, lean_object* v_handler_2682_, lean_object* v_onDidChange_2683_, lean_object* v_a_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0(v_method_2676_, v_refreshMethod_2677_, v_refreshIntervalMs_2678_, v_stateType_2679_, v_inst_2680_, v_initState_2681_, v_handler_2682_, v_onDidChange_2683_);
lean_dec(v_initState_2681_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_method_2686_, lean_object* v_completeness_2687_, lean_object* v_stateType_2688_, lean_object* v_inst_2689_, lean_object* v_initState_2690_, lean_object* v_handler_2691_, lean_object* v_onDidChange_2692_){
_start:
{
lean_object* v___x_2694_; 
v___x_2694_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg(v_method_2686_, v_completeness_2687_, v_inst_2689_, v_initState_2690_, v_handler_2691_, v_onDidChange_2692_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_method_2695_, lean_object* v_completeness_2696_, lean_object* v_stateType_2697_, lean_object* v_inst_2698_, lean_object* v_initState_2699_, lean_object* v_handler_2700_, lean_object* v_onDidChange_2701_, lean_object* v_a_2702_){
_start:
{
lean_object* v_res_2703_; 
v_res_2703_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0(v_method_2695_, v_completeness_2696_, v_stateType_2697_, v_inst_2698_, v_initState_2699_, v_handler_2700_, v_onDidChange_2701_);
lean_dec(v_initState_2699_);
return v_res_2703_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2704_, lean_object* v_x_2705_, lean_object* v_x_2706_){
_start:
{
uint8_t v___x_2707_; 
v___x_2707_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_2705_, v_x_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2708_, lean_object* v_x_2709_, lean_object* v_x_2710_){
_start:
{
uint8_t v_res_2711_; lean_object* v_r_2712_; 
v_res_2711_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_2708_, v_x_2709_, v_x_2710_);
lean_dec_ref(v_x_2710_);
lean_dec_ref(v_x_2709_);
v_r_2712_ = lean_box(v_res_2711_);
return v_r_2712_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7(lean_object* v_00_u03b1_2713_, lean_object* v_00_u03b2_2714_, lean_object* v_mutex_2715_, lean_object* v_k_2716_, lean_object* v___y_2717_){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(v_mutex_2715_, v_k_2716_, v___y_2717_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_00_u03b1_2720_, lean_object* v_00_u03b2_2721_, lean_object* v_mutex_2722_, lean_object* v_k_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7(v_00_u03b1_2720_, v_00_u03b2_2721_, v_mutex_2722_, v_k_2723_, v___y_2724_);
lean_dec_ref(v___y_2724_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object* v_method_2727_, lean_object* v_completeness_2728_, lean_object* v_stateType_2729_, lean_object* v_inst_2730_, lean_object* v_initState_2731_, lean_object* v_handler_2732_, lean_object* v_onDidChange_2733_){
_start:
{
lean_object* v___x_2735_; 
v___x_2735_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_method_2727_, v_completeness_2728_, v_inst_2730_, v_initState_2731_, v_handler_2732_, v_onDidChange_2733_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object* v_method_2736_, lean_object* v_completeness_2737_, lean_object* v_stateType_2738_, lean_object* v_inst_2739_, lean_object* v_initState_2740_, lean_object* v_handler_2741_, lean_object* v_onDidChange_2742_, lean_object* v_a_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2(v_method_2736_, v_completeness_2737_, v_stateType_2738_, v_inst_2739_, v_initState_2740_, v_handler_2741_, v_onDidChange_2742_);
lean_dec(v_initState_2740_);
return v_res_2744_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2745_, lean_object* v_x_2746_, size_t v_x_2747_, lean_object* v_x_2748_){
_start:
{
uint8_t v___x_2749_; 
v___x_2749_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_x_2746_, v_x_2747_, v_x_2748_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2750_, lean_object* v_x_2751_, lean_object* v_x_2752_, lean_object* v_x_2753_){
_start:
{
size_t v_x_3539__boxed_2754_; uint8_t v_res_2755_; lean_object* v_r_2756_; 
v_x_3539__boxed_2754_ = lean_unbox_usize(v_x_2752_);
lean_dec(v_x_2752_);
v_res_2755_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(v_00_u03b2_2750_, v_x_2751_, v_x_3539__boxed_2754_, v_x_2753_);
lean_dec_ref(v_x_2753_);
lean_dec_ref(v_x_2751_);
v_r_2756_ = lean_box(v_res_2755_);
return v_r_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(lean_object* v_params_2757_, lean_object* v_a_2758_){
_start:
{
lean_object* v___x_2760_; 
v___x_2760_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_params_2757_);
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_params_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(v_params_2761_, v_a_2762_);
lean_dec_ref(v_a_2762_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8(lean_object* v_00_u03b2_2765_, lean_object* v_x_2766_, lean_object* v_x_2767_, lean_object* v_x_2768_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8___redArg(v_x_2766_, v_x_2767_, v_x_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2770_, lean_object* v_keys_2771_, lean_object* v_vals_2772_, lean_object* v_heq_2773_, lean_object* v_i_2774_, lean_object* v_k_2775_){
_start:
{
uint8_t v___x_2776_; 
v___x_2776_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_keys_2771_, v_i_2774_, v_k_2775_);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b2_2777_, lean_object* v_keys_2778_, lean_object* v_vals_2779_, lean_object* v_heq_2780_, lean_object* v_i_2781_, lean_object* v_k_2782_){
_start:
{
uint8_t v_res_2783_; lean_object* v_r_2784_; 
v_res_2783_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3(v_00_u03b2_2777_, v_keys_2778_, v_vals_2779_, v_heq_2780_, v_i_2781_, v_k_2782_);
lean_dec_ref(v_k_2782_);
lean_dec_ref(v_vals_2779_);
lean_dec_ref(v_keys_2778_);
v_r_2784_ = lean_box(v_res_2783_);
return v_r_2784_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11(lean_object* v_00_u03b2_2785_, lean_object* v_x_2786_, size_t v_x_2787_, size_t v_x_2788_, lean_object* v_x_2789_, lean_object* v_x_2790_){
_start:
{
lean_object* v___x_2791_; 
v___x_2791_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(v_x_2786_, v_x_2787_, v_x_2788_, v_x_2789_, v_x_2790_);
return v___x_2791_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2792_, lean_object* v_x_2793_, lean_object* v_x_2794_, lean_object* v_x_2795_, lean_object* v_x_2796_, lean_object* v_x_2797_){
_start:
{
size_t v_x_3565__boxed_2798_; size_t v_x_3566__boxed_2799_; lean_object* v_res_2800_; 
v_x_3565__boxed_2798_ = lean_unbox_usize(v_x_2794_);
lean_dec(v_x_2794_);
v_x_3566__boxed_2799_ = lean_unbox_usize(v_x_2795_);
lean_dec(v_x_2795_);
v_res_2800_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11(v_00_u03b2_2792_, v_x_2793_, v_x_3565__boxed_2798_, v_x_3566__boxed_2799_, v_x_2796_, v_x_2797_);
return v_res_2800_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12(lean_object* v_00_u03b2_2801_, lean_object* v_n_2802_, lean_object* v_k_2803_, lean_object* v_v_2804_){
_start:
{
lean_object* v___x_2805_; 
v___x_2805_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12___redArg(v_n_2802_, v_k_2803_, v_v_2804_);
return v___x_2805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13(lean_object* v_00_u03b2_2806_, size_t v_depth_2807_, lean_object* v_keys_2808_, lean_object* v_vals_2809_, lean_object* v_heq_2810_, lean_object* v_i_2811_, lean_object* v_entries_2812_){
_start:
{
lean_object* v___x_2813_; 
v___x_2813_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg(v_depth_2807_, v_keys_2808_, v_vals_2809_, v_i_2811_, v_entries_2812_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___boxed(lean_object* v_00_u03b2_2814_, lean_object* v_depth_2815_, lean_object* v_keys_2816_, lean_object* v_vals_2817_, lean_object* v_heq_2818_, lean_object* v_i_2819_, lean_object* v_entries_2820_){
_start:
{
size_t v_depth_boxed_2821_; lean_object* v_res_2822_; 
v_depth_boxed_2821_ = lean_unbox_usize(v_depth_2815_);
lean_dec(v_depth_2815_);
v_res_2822_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13(v_00_u03b2_2814_, v_depth_boxed_2821_, v_keys_2816_, v_vals_2817_, v_heq_2818_, v_i_2819_, v_entries_2820_);
lean_dec_ref(v_vals_2817_);
lean_dec_ref(v_keys_2816_);
return v_res_2822_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_2823_, lean_object* v_x_2824_, lean_object* v_x_2825_, lean_object* v_x_2826_, lean_object* v_x_2827_){
_start:
{
lean_object* v___x_2828_; 
v___x_2828_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13___redArg(v_x_2824_, v_x_2825_, v_x_2826_, v_x_2827_);
return v___x_2828_;
}
}
lean_object* runtime_initialize_Lean_Server_GoTo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Requests(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_FileWorker_InlayHints(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_GoTo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = _init_l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_();
lean_mark_persistent(l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_);
l_Lean_Server_FileWorker_instTypeNameInlayHintState = _init_l_Lean_Server_FileWorker_instTypeNameInlayHintState();
lean_mark_persistent(l_Lean_Server_FileWorker_instTypeNameInlayHintState);
res = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_FileWorker_InlayHints(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_GoTo(uint8_t builtin);
lean_object* initialize_Lean_Server_Requests(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_FileWorker_InlayHints(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_GoTo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileWorker_InlayHints(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_FileWorker_InlayHints(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_FileWorker_InlayHints(builtin);
}
#ifdef __cplusplus
}
#endif

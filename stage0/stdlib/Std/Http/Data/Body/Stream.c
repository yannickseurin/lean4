// Lean compiler output
// Module: Std.Http.Data.Body.Stream
// Imports: public import Std.Sync public import Std.Async public import Std.Http.Data.Request public import Std.Http.Data.Response public import Std.Http.Data.Chunk public import Std.Http.Data.Body.Basic public import Std.Http.Data.Body.Any public import Init.Data.ByteArray
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
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* l_Std_Http_Response_Builder_body___redArg(lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_Async_Selectable_one___redArg(lean_object*);
lean_object* l_ST_Prim_Ref_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_CancellationToken_selector(lean_object*);
lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
lean_object* l_IO_Promise_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Mutex_atomically___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Request_Builder_body___redArg(lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Any_ofBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Any_ofBody___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_Http_Chunk_ofByteArray(lean_object*);
extern lean_object* l_ByteArray_empty;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0_value;
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_string_object l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Http"};
static const lean_object* l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_string_object l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Body"};
static const lean_object* l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_string_object l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Stream"};
static const lean_object* l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_0),((lean_object*)&l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(62, 74, 245, 198, 196, 207, 141, 173)}};
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_1),((lean_object*)&l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(80, 237, 62, 34, 135, 9, 103, 192)}};
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_2),((lean_object*)&l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(35, 197, 133, 196, 74, 182, 137, 145)}};
static const lean_object* l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static lean_once_cell_t l_Std_Http_Body_instImpl___closed__5_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instImpl___closed__5_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_;
LEAN_EXPORT lean_object* l_Std_Http_Body_instImpl_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_;
LEAN_EXPORT lean_object* l_Std_Http_Body_instTypeNameStream;
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_mkStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_mkStream___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_mkStream___closed__0 = (const lean_object*)&l_Std_Http_Body_mkStream___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_mkStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 8, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_Body_mkStream___closed__1 = (const lean_object*)&l_Std_Http_Body_mkStream___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream();
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0 = (const lean_object*)&l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_tryRecv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecv___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_tryRecv___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecv___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_tryRecv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecv___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_tryRecv___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_tryRecv___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecv___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_tryRecvBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecvBody___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_tryRecvBody___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecvBody___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "the promise linked to the consumer was dropped"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "only one blocked consumer is allowed"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2_value;
static lean_once_cell_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3;
static lean_once_cell_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0_value)} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_recv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recv___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_recv___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recv___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_close___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_close___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_closeIfAbandoned___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_closeIfAbandoned___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_closeIfAbandoned___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_closeIfAbandoned___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_isClosed___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__0_value;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__1;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__2;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_lift___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__3_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__4 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__4_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__4_value),((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__3_value)} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__5 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__5_value;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__6;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__7 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__7_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__8 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__8_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__4_value),((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__8_value)} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__9 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__9_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__9_value),((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__3_value)} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__10 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__10_value;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__11;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__12;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__13;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_getKnownSize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_getKnownSize___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_getKnownSize___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_getKnownSize___closed__0_value;
static lean_once_cell_t l_Std_Http_Body_Stream_getKnownSize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_getKnownSize___closed__1;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value)}};
static const lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recvSelector___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_recvSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_recvSelector___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkAsync___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_Stream_instNextChunkAsync = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__1_value;
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__2 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__2_value;
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__2_value),((lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__1_value),((lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__3_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "body exceeded maximum size of "};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " bytes"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "channel closed"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "only one blocked producer is allowed"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__2_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__3 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__3_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__3_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__4 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__5 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__5_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__6 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__6_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__6_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__7 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__7_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__7_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__8 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__8_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1_value)} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__3, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_hasInterest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_hasInterest___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_hasInterest___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_hasInterest___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "only one blocked interest selector is allowed"};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_interestSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_interestSelector___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_interestSelector___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_interestSelector___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_interestSelector___lam__6___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_interestSelector___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_stream___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_stream___lam__6___closed__0 = (const lean_object*)&l_Std_Http_Body_stream___lam__6___closed__0_value;
static const lean_closure_object l_Std_Http_Body_stream___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_stream___lam__5___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_stream___lam__6___closed__0_value)} };
static const lean_object* l_Std_Http_Body_stream___lam__6___closed__1 = (const lean_object*)&l_Std_Http_Body_stream___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_empty___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_empty___lam__2___closed__0 = (const lean_object*)&l_Std_Http_Body_empty___lam__2___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_empty___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_empty___lam__2___closed__0_value)}};
static const lean_object* l_Std_Http_Body_empty___lam__2___closed__1 = (const lean_object*)&l_Std_Http_Body_empty___lam__2___closed__1_value;
static const lean_closure_object l_Std_Http_Body_empty___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_stream___lam__5___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_empty___lam__2___closed__1_value)} };
static const lean_object* l_Std_Http_Body_empty___lam__2___closed__2 = (const lean_object*)&l_Std_Http_Body_empty___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_empty___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_empty___closed__0 = (const lean_object*)&l_Std_Http_Body_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_empty();
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___boxed(lean_object*);
static const lean_closure_object l_Std_Http_Body_instForInAsyncStreamChunk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_forIn___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instForInAsyncStreamChunk___closed__0 = (const lean_object*)&l_Std_Http_Body_instForInAsyncStreamChunk___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instForInAsyncStreamChunk = (const lean_object*)&l_Std_Http_Body_instForInAsyncStreamChunk___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_forIn_x27___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0 = (const lean_object*)&l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instForInContextAsyncStreamChunk = (const lean_object*)&l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_close___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__0 = (const lean_object*)&l_Std_Http_Body_instStream___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_isClosed___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__1 = (const lean_object*)&l_Std_Http_Body_instStream___closed__1_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recvSelector, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__2 = (const lean_object*)&l_Std_Http_Body_instStream___closed__2_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecvBody___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__3 = (const lean_object*)&l_Std_Http_Body_instStream___closed__3_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_getKnownSize___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__4 = (const lean_object*)&l_Std_Http_Body_instStream___closed__4_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_setKnownSize___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__5 = (const lean_object*)&l_Std_Http_Body_instStream___closed__5_value;
static const lean_ctor_object l_Std_Http_Body_instStream___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value),((lean_object*)&l_Std_Http_Body_instStream___closed__0_value),((lean_object*)&l_Std_Http_Body_instStream___closed__1_value),((lean_object*)&l_Std_Http_Body_instStream___closed__2_value),((lean_object*)&l_Std_Http_Body_instStream___closed__3_value),((lean_object*)&l_Std_Http_Body_instStream___closed__4_value),((lean_object*)&l_Std_Http_Body_instStream___closed__5_value)}};
static const lean_object* l_Std_Http_Body_instStream___closed__6 = (const lean_object*)&l_Std_Http_Body_instStream___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instStream = (const lean_object*)&l_Std_Http_Body_instStream___closed__6_value;
static const lean_closure_object l_Std_Http_Body_instCoeStreamAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Any_ofBody, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Body_instStream___closed__6_value)} };
static const lean_object* l_Std_Http_Body_instCoeStreamAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeStreamAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeStreamAny = (const lean_object*)&l_Std_Http_Body_instCoeStreamAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeResponseStreamAny___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeResponseStreamAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeResponseStreamAny___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instStream___closed__6_value)} };
static const lean_object* l_Std_Http_Body_instCoeResponseStreamAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeResponseStreamAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeResponseStreamAny = (const lean_object*)&l_Std_Http_Body_instCoeResponseStreamAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instStream___closed__6_value)} };
static const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1 = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny = (const lean_object*)&l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
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
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_promise_8_; lean_object* v___x_9_; 
v_promise_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_promise_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_promise_8_);
return v___x_9_;
}
else
{
lean_object* v_finished_10_; lean_object* v___x_11_; 
v_finished_10_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_finished_10_);
lean_dec_ref_known(v_t_6_, 1);
v___x_11_ = lean_apply_1(v_k_7_, v_finished_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim___redArg(lean_object* v_t_24_, lean_object* v_normal_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_24_, v_normal_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_normal_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_28_, v_normal_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim___redArg(lean_object* v_t_32_, lean_object* v_select_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_32_, v_select_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_select_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_36_, v_select_38_);
return v___x_39_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(lean_object* v_x_40_, lean_object* v_w_41_, lean_object* v_lose_42_){
_start:
{
lean_object* v_finished_44_; lean_object* v_promise_45_; lean_object* v___x_46_; uint8_t v___y_48_; uint8_t v___x_55_; 
v_finished_44_ = lean_ctor_get(v_w_41_, 0);
v_promise_45_ = lean_ctor_get(v_w_41_, 1);
v___x_46_ = lean_st_ref_take(v_finished_44_);
v___x_55_ = lean_unbox(v___x_46_);
lean_dec(v___x_46_);
if (v___x_55_ == 0)
{
uint8_t v___x_56_; 
v___x_56_ = 1;
v___y_48_ = v___x_56_;
goto v___jp_47_;
}
else
{
uint8_t v___x_57_; 
v___x_57_ = 0;
v___y_48_ = v___x_57_;
goto v___jp_47_;
}
v___jp_47_:
{
uint8_t v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = 1;
v___x_50_ = lean_box(v___x_49_);
v___x_51_ = lean_st_ref_put(v_finished_44_, v___x_50_);
if (v___y_48_ == 0)
{
lean_object* v___x_52_; uint8_t v___x_53_; 
lean_dec_ref(v_x_40_);
v___x_52_ = lean_apply_1(v_lose_42_, lean_box(0));
v___x_53_ = lean_unbox(v___x_52_);
return v___x_53_;
}
else
{
lean_object* v___x_54_; 
lean_dec_ref(v_lose_42_);
v___x_54_ = lean_io_promise_resolve(v_x_40_, v_promise_45_);
return v___y_48_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0___boxed(lean_object* v_x_58_, lean_object* v_w_59_, lean_object* v_lose_60_, lean_object* v___y_61_){
_start:
{
uint8_t v_res_62_; lean_object* v_r_63_; 
v_res_62_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(v_x_58_, v_w_59_, v_lose_60_);
lean_dec_ref(v_w_59_);
v_r_63_ = lean_box(v_res_62_);
return v_r_63_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0(uint8_t v___x_64_){
_start:
{
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0___boxed(lean_object* v___x_66_, lean_object* v___y_67_){
_start:
{
uint8_t v___x_386__boxed_68_; uint8_t v_res_69_; lean_object* v_r_70_; 
v___x_386__boxed_68_ = lean_unbox(v___x_66_);
v_res_69_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0(v___x_386__boxed_68_);
v_r_70_ = lean_box(v_res_69_);
return v_r_70_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(lean_object* v_c_74_, lean_object* v_x_75_){
_start:
{
if (lean_obj_tag(v_c_74_) == 0)
{
lean_object* v_promise_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v_promise_77_ = lean_ctor_get(v_c_74_, 0);
v___x_78_ = lean_io_promise_resolve(v_x_75_, v_promise_77_);
v___x_79_ = 1;
return v___x_79_;
}
else
{
lean_object* v_finished_80_; lean_object* v_lose_81_; uint8_t v___x_82_; 
v_finished_80_ = lean_ctor_get(v_c_74_, 0);
v_lose_81_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0));
v___x_82_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(v_x_75_, v_finished_80_, v_lose_81_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___boxed(lean_object* v_c_83_, lean_object* v_x_84_, lean_object* v_a_85_){
_start:
{
uint8_t v_res_86_; lean_object* v_r_87_; 
v_res_86_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(v_c_83_, v_x_84_);
lean_dec_ref(v_c_83_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(uint8_t v_x_88_, lean_object* v_w_89_, lean_object* v_lose_90_){
_start:
{
lean_object* v_finished_92_; lean_object* v_promise_93_; lean_object* v___x_94_; uint8_t v___y_96_; uint8_t v___x_105_; 
v_finished_92_ = lean_ctor_get(v_w_89_, 0);
v_promise_93_ = lean_ctor_get(v_w_89_, 1);
v___x_94_ = lean_st_ref_take(v_finished_92_);
v___x_105_ = lean_unbox(v___x_94_);
lean_dec(v___x_94_);
if (v___x_105_ == 0)
{
uint8_t v___x_106_; 
v___x_106_ = 1;
v___y_96_ = v___x_106_;
goto v___jp_95_;
}
else
{
uint8_t v___x_107_; 
v___x_107_ = 0;
v___y_96_ = v___x_107_;
goto v___jp_95_;
}
v___jp_95_:
{
uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = 1;
v___x_98_ = lean_box(v___x_97_);
v___x_99_ = lean_st_ref_put(v_finished_92_, v___x_98_);
if (v___y_96_ == 0)
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = lean_apply_1(v_lose_90_, lean_box(0));
v___x_101_ = lean_unbox(v___x_100_);
return v___x_101_;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
lean_dec_ref(v_lose_90_);
v___x_102_ = lean_box(v_x_88_);
v___x_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
v___x_104_ = lean_io_promise_resolve(v___x_103_, v_promise_93_);
return v___y_96_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0___boxed(lean_object* v_x_108_, lean_object* v_w_109_, lean_object* v_lose_110_, lean_object* v___y_111_){
_start:
{
uint8_t v_x_boxed_112_; uint8_t v_res_113_; lean_object* v_r_114_; 
v_x_boxed_112_ = lean_unbox(v_x_108_);
v_res_113_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(v_x_boxed_112_, v_w_109_, v_lose_110_);
lean_dec_ref(v_w_109_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(lean_object* v_waiter_115_, uint8_t v_x_116_){
_start:
{
lean_object* v_lose_118_; uint8_t v___x_119_; 
v_lose_118_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0));
v___x_119_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(v_x_116_, v_waiter_115_, v_lose_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed(lean_object* v_waiter_120_, lean_object* v_x_121_, lean_object* v_a_122_){
_start:
{
uint8_t v_x_boxed_123_; uint8_t v_res_124_; lean_object* v_r_125_; 
v_x_boxed_123_ = lean_unbox(v_x_121_);
v_res_124_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_waiter_120_, v_x_boxed_123_);
lean_dec_ref(v_waiter_120_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
static lean_object* _init_l_Std_Http_Body_instImpl___closed__5_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = ((lean_object*)(l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_));
v___x_136_ = l_unsafeCast___redArg(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l_Std_Http_Body_instImpl_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_obj_once(&l_Std_Http_Body_instImpl___closed__5_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_, &l_Std_Http_Body_instImpl___closed__5_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__once, _init_l_Std_Http_Body_instImpl___closed__5_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_);
return v___x_137_;
}
}
static lean_object* _init_l_Std_Http_Body_instTypeNameStream(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Std_Http_Body_instImpl_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_;
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0(lean_object* v_x_139_){
_start:
{
if (lean_obj_tag(v_x_139_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_149_; 
v_a_141_ = lean_ctor_get(v_x_139_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_149_ == 0)
{
v___x_143_ = v_x_139_;
v_isShared_144_ = v_isSharedCheck_149_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v_x_139_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_149_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_146_; 
if (v_isShared_144_ == 0)
{
v___x_146_ = v___x_143_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_141_);
v___x_146_ = v_reuseFailAlloc_148_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
lean_object* v___x_147_; 
v___x_147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
return v___x_147_;
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_158_; 
v_a_150_ = lean_ctor_get(v_x_139_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_158_ == 0)
{
v___x_152_ = v_x_139_;
v_isShared_153_ = v_isSharedCheck_158_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v_x_139_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_158_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_150_);
v___x_155_ = v_reuseFailAlloc_157_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_156_; 
v___x_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0___boxed(lean_object* v_x_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Std_Http_Body_mkStream___lam__0(v_x_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream(){
_start:
{
lean_object* v___f_167_; uint8_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___f_167_ = ((lean_object*)(l_Std_Http_Body_mkStream___closed__0));
v___x_168_ = 0;
v___x_169_ = ((lean_object*)(l_Std_Http_Body_mkStream___closed__1));
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = l_Std_Mutex_new___redArg(v___x_169_);
v___x_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
v___x_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
v___x_174_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_170_, v___x_168_, v___x_173_, v___f_167_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___boxed(lean_object* v_a_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Std_Http_Body_mkStream();
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(lean_object* v_knownSize_177_, lean_object* v_chunk_178_){
_start:
{
if (lean_obj_tag(v_knownSize_177_) == 1)
{
lean_object* v_val_179_; 
v_val_179_ = lean_ctor_get(v_knownSize_177_, 0);
lean_inc(v_val_179_);
if (lean_obj_tag(v_val_179_) == 1)
{
lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_197_; 
v_isSharedCheck_197_ = !lean_is_exclusive(v_knownSize_177_);
if (v_isSharedCheck_197_ == 0)
{
lean_object* v_unused_198_; 
v_unused_198_ = lean_ctor_get(v_knownSize_177_, 0);
lean_dec(v_unused_198_);
v___x_181_ = v_knownSize_177_;
v_isShared_182_ = v_isSharedCheck_197_;
goto v_resetjp_180_;
}
else
{
lean_dec(v_knownSize_177_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_197_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v_n_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_196_; 
v_n_183_ = lean_ctor_get(v_val_179_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v_val_179_);
if (v_isSharedCheck_196_ == 0)
{
v___x_185_ = v_val_179_;
v_isShared_186_ = v_isSharedCheck_196_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_n_183_);
lean_dec(v_val_179_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_196_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v_data_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_191_; 
v_data_187_ = lean_ctor_get(v_chunk_178_, 0);
v___x_188_ = lean_byte_array_size(v_data_187_);
v___x_189_ = lean_nat_sub(v_n_183_, v___x_188_);
lean_dec(v_n_183_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_189_);
v___x_191_ = v___x_185_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_189_);
v___x_191_ = v_reuseFailAlloc_195_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_193_; 
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_191_);
v___x_193_ = v___x_181_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
}
else
{
lean_dec(v_val_179_);
return v_knownSize_177_;
}
}
else
{
return v_knownSize_177_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize___boxed(lean_object* v_knownSize_199_, lean_object* v_chunk_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_199_, v_chunk_200_);
lean_dec_ref(v_chunk_200_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0(lean_object* v_pendingProducer_202_, lean_object* v_pendingConsumer_203_, uint8_t v_closed_204_, lean_object* v_knownSize_205_, lean_object* v_pendingIncompleteChunk_206_, lean_object* v_closeError_207_, lean_object* v_inst_208_, lean_object* v_interestWaiter_209_, lean_object* v___y_210_){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_211_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_211_, 0, v_pendingProducer_202_);
lean_ctor_set(v___x_211_, 1, v_pendingConsumer_203_);
lean_ctor_set(v___x_211_, 2, v_interestWaiter_209_);
lean_ctor_set(v___x_211_, 3, v_knownSize_205_);
lean_ctor_set(v___x_211_, 4, v_pendingIncompleteChunk_206_);
lean_ctor_set(v___x_211_, 5, v_closeError_207_);
lean_ctor_set_uint8(v___x_211_, sizeof(void*)*6, v_closed_204_);
lean_inc(v___y_210_);
v___x_212_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_212_, 0, lean_box(0));
lean_closure_set(v___x_212_, 1, lean_box(0));
lean_closure_set(v___x_212_, 2, v___y_210_);
lean_closure_set(v___x_212_, 3, v___x_211_);
v___x_213_ = lean_apply_2(v_inst_208_, lean_box(0), v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0___boxed(lean_object* v_pendingProducer_214_, lean_object* v_pendingConsumer_215_, lean_object* v_closed_216_, lean_object* v_knownSize_217_, lean_object* v_pendingIncompleteChunk_218_, lean_object* v_closeError_219_, lean_object* v_inst_220_, lean_object* v_interestWaiter_221_, lean_object* v___y_222_){
_start:
{
uint8_t v_closed_boxed_223_; lean_object* v_res_224_; 
v_closed_boxed_223_ = lean_unbox(v_closed_216_);
v_res_224_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0(v_pendingProducer_214_, v_pendingConsumer_215_, v_closed_boxed_223_, v_knownSize_217_, v_pendingIncompleteChunk_218_, v_closeError_219_, v_inst_220_, v_interestWaiter_221_, v___y_222_);
lean_dec(v___y_222_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1(lean_object* v___f_225_, lean_object* v___y_226_, lean_object* v_a_227_){
_start:
{
lean_object* v___x_228_; 
lean_inc(v___y_226_);
v___x_228_ = lean_apply_2(v___f_225_, v_a_227_, v___y_226_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed(lean_object* v___f_229_, lean_object* v___y_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1(v___f_229_, v___y_230_, v_a_231_);
lean_dec(v___y_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4(lean_object* v_toApplicative_233_, lean_object* v_interestWaiter_234_, lean_object* v_toBind_235_, lean_object* v___f_236_, lean_object* v___f_237_, uint8_t v_a_238_){
_start:
{
if (v_a_238_ == 0)
{
lean_object* v_toPure_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
lean_dec(v___f_237_);
v_toPure_239_ = lean_ctor_get(v_toApplicative_233_, 1);
lean_inc(v_toPure_239_);
lean_dec_ref(v_toApplicative_233_);
v___x_240_ = lean_apply_2(v_toPure_239_, lean_box(0), v_interestWaiter_234_);
v___x_241_ = lean_apply_4(v_toBind_235_, lean_box(0), lean_box(0), v___x_240_, v___f_236_);
return v___x_241_;
}
else
{
lean_object* v_toPure_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec(v___f_236_);
lean_dec(v_interestWaiter_234_);
v_toPure_242_ = lean_ctor_get(v_toApplicative_233_, 1);
lean_inc(v_toPure_242_);
lean_dec_ref(v_toApplicative_233_);
v___x_243_ = lean_box(0);
v___x_244_ = lean_apply_2(v_toPure_242_, lean_box(0), v___x_243_);
v___x_245_ = lean_apply_4(v_toBind_235_, lean_box(0), lean_box(0), v___x_244_, v___f_237_);
return v___x_245_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4___boxed(lean_object* v_toApplicative_246_, lean_object* v_interestWaiter_247_, lean_object* v_toBind_248_, lean_object* v___f_249_, lean_object* v___f_250_, lean_object* v_a_251_){
_start:
{
uint8_t v_a_boxed_252_; lean_object* v_res_253_; 
v_a_boxed_252_ = lean_unbox(v_a_251_);
v_res_253_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4(v_toApplicative_246_, v_interestWaiter_247_, v_toBind_248_, v___f_249_, v___f_250_, v_a_boxed_252_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2(lean_object* v_pendingProducer_254_, uint8_t v_closed_255_, lean_object* v_knownSize_256_, lean_object* v_pendingIncompleteChunk_257_, lean_object* v_closeError_258_, lean_object* v_inst_259_, lean_object* v_interestWaiter_260_, lean_object* v_toApplicative_261_, lean_object* v_toBind_262_, lean_object* v_pendingConsumer_263_, lean_object* v___y_264_){
_start:
{
lean_object* v___x_265_; lean_object* v___f_266_; 
v___x_265_ = lean_box(v_closed_255_);
lean_inc(v_inst_259_);
v___f_266_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0___boxed), 9, 7);
lean_closure_set(v___f_266_, 0, v_pendingProducer_254_);
lean_closure_set(v___f_266_, 1, v_pendingConsumer_263_);
lean_closure_set(v___f_266_, 2, v___x_265_);
lean_closure_set(v___f_266_, 3, v_knownSize_256_);
lean_closure_set(v___f_266_, 4, v_pendingIncompleteChunk_257_);
lean_closure_set(v___f_266_, 5, v_closeError_258_);
lean_closure_set(v___f_266_, 6, v_inst_259_);
if (lean_obj_tag(v_interestWaiter_260_) == 0)
{
lean_object* v_toPure_267_; lean_object* v___f_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
lean_dec(v_inst_259_);
v_toPure_267_ = lean_ctor_get(v_toApplicative_261_, 1);
lean_inc(v_toPure_267_);
lean_dec_ref(v_toApplicative_261_);
lean_inc(v___y_264_);
v___f_268_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_268_, 0, v___f_266_);
lean_closure_set(v___f_268_, 1, v___y_264_);
v___x_269_ = lean_apply_2(v_toPure_267_, lean_box(0), v_interestWaiter_260_);
v___x_270_ = lean_apply_4(v_toBind_262_, lean_box(0), lean_box(0), v___x_269_, v___f_268_);
return v___x_270_;
}
else
{
lean_object* v_val_271_; lean_object* v_finished_272_; lean_object* v___f_273_; lean_object* v___f_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_val_271_ = lean_ctor_get(v_interestWaiter_260_, 0);
v_finished_272_ = lean_ctor_get(v_val_271_, 0);
lean_inc(v_finished_272_);
lean_inc(v___y_264_);
v___f_273_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_273_, 0, v___f_266_);
lean_closure_set(v___f_273_, 1, v___y_264_);
lean_inc_ref(v___f_273_);
lean_inc(v_toBind_262_);
v___f_274_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_274_, 0, v_toApplicative_261_);
lean_closure_set(v___f_274_, 1, v_interestWaiter_260_);
lean_closure_set(v___f_274_, 2, v_toBind_262_);
lean_closure_set(v___f_274_, 3, v___f_273_);
lean_closure_set(v___f_274_, 4, v___f_273_);
v___x_275_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_275_, 0, lean_box(0));
lean_closure_set(v___x_275_, 1, lean_box(0));
lean_closure_set(v___x_275_, 2, v_finished_272_);
v___x_276_ = lean_apply_2(v_inst_259_, lean_box(0), v___x_275_);
v___x_277_ = lean_apply_4(v_toBind_262_, lean_box(0), lean_box(0), v___x_276_, v___f_274_);
return v___x_277_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2___boxed(lean_object* v_pendingProducer_278_, lean_object* v_closed_279_, lean_object* v_knownSize_280_, lean_object* v_pendingIncompleteChunk_281_, lean_object* v_closeError_282_, lean_object* v_inst_283_, lean_object* v_interestWaiter_284_, lean_object* v_toApplicative_285_, lean_object* v_toBind_286_, lean_object* v_pendingConsumer_287_, lean_object* v___y_288_){
_start:
{
uint8_t v_closed_boxed_289_; lean_object* v_res_290_; 
v_closed_boxed_289_ = lean_unbox(v_closed_279_);
v_res_290_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2(v_pendingProducer_278_, v_closed_boxed_289_, v_knownSize_280_, v_pendingIncompleteChunk_281_, v_closeError_282_, v_inst_283_, v_interestWaiter_284_, v_toApplicative_285_, v_toBind_286_, v_pendingConsumer_287_, v___y_288_);
lean_dec(v___y_288_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3(lean_object* v___f_291_, lean_object* v___y_292_, lean_object* v_a_293_){
_start:
{
lean_object* v___x_294_; 
lean_inc(v___y_292_);
v___x_294_ = lean_apply_2(v___f_291_, v_a_293_, v___y_292_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3___boxed(lean_object* v___f_295_, lean_object* v___y_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3(v___f_295_, v___y_296_, v_a_297_);
lean_dec(v___y_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5(lean_object* v___f_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v___x_302_; 
lean_inc(v_a_300_);
v___x_302_ = lean_apply_2(v___f_299_, v_a_301_, v_a_300_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5___boxed(lean_object* v___f_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5(v___f_303_, v_a_304_, v_a_305_);
lean_dec(v_a_304_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7(lean_object* v_toApplicative_307_, lean_object* v_pendingConsumer_308_, lean_object* v_toBind_309_, lean_object* v___f_310_, lean_object* v___f_311_, uint8_t v_a_312_){
_start:
{
if (v_a_312_ == 0)
{
lean_object* v_toPure_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec(v___f_311_);
v_toPure_313_ = lean_ctor_get(v_toApplicative_307_, 1);
lean_inc(v_toPure_313_);
lean_dec_ref(v_toApplicative_307_);
v___x_314_ = lean_apply_2(v_toPure_313_, lean_box(0), v_pendingConsumer_308_);
v___x_315_ = lean_apply_4(v_toBind_309_, lean_box(0), lean_box(0), v___x_314_, v___f_310_);
return v___x_315_;
}
else
{
lean_object* v_toPure_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
lean_dec(v___f_310_);
lean_dec(v_pendingConsumer_308_);
v_toPure_316_ = lean_ctor_get(v_toApplicative_307_, 1);
lean_inc(v_toPure_316_);
lean_dec_ref(v_toApplicative_307_);
v___x_317_ = lean_box(0);
v___x_318_ = lean_apply_2(v_toPure_316_, lean_box(0), v___x_317_);
v___x_319_ = lean_apply_4(v_toBind_309_, lean_box(0), lean_box(0), v___x_318_, v___f_311_);
return v___x_319_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7___boxed(lean_object* v_toApplicative_320_, lean_object* v_pendingConsumer_321_, lean_object* v_toBind_322_, lean_object* v___f_323_, lean_object* v___f_324_, lean_object* v_a_325_){
_start:
{
uint8_t v_a_boxed_326_; lean_object* v_res_327_; 
v_a_boxed_326_ = lean_unbox(v_a_325_);
v_res_327_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7(v_toApplicative_320_, v_pendingConsumer_321_, v_toBind_322_, v___f_323_, v___f_324_, v_a_boxed_326_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6(lean_object* v_inst_328_, lean_object* v_toApplicative_329_, lean_object* v_toBind_330_, lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_pendingProducer_333_; lean_object* v_pendingConsumer_334_; lean_object* v_interestWaiter_335_; uint8_t v_closed_336_; lean_object* v_knownSize_337_; lean_object* v_pendingIncompleteChunk_338_; lean_object* v_closeError_339_; lean_object* v___x_340_; lean_object* v___f_341_; lean_object* v___y_343_; 
v_pendingProducer_333_ = lean_ctor_get(v_a_332_, 0);
lean_inc(v_pendingProducer_333_);
v_pendingConsumer_334_ = lean_ctor_get(v_a_332_, 1);
lean_inc(v_pendingConsumer_334_);
v_interestWaiter_335_ = lean_ctor_get(v_a_332_, 2);
lean_inc(v_interestWaiter_335_);
v_closed_336_ = lean_ctor_get_uint8(v_a_332_, sizeof(void*)*6);
v_knownSize_337_ = lean_ctor_get(v_a_332_, 3);
lean_inc(v_knownSize_337_);
v_pendingIncompleteChunk_338_ = lean_ctor_get(v_a_332_, 4);
lean_inc(v_pendingIncompleteChunk_338_);
v_closeError_339_ = lean_ctor_get(v_a_332_, 5);
lean_inc(v_closeError_339_);
lean_dec_ref(v_a_332_);
v___x_340_ = lean_box(v_closed_336_);
lean_inc(v_toBind_330_);
lean_inc_ref(v_toApplicative_329_);
lean_inc(v_inst_328_);
v___f_341_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2___boxed), 11, 9);
lean_closure_set(v___f_341_, 0, v_pendingProducer_333_);
lean_closure_set(v___f_341_, 1, v___x_340_);
lean_closure_set(v___f_341_, 2, v_knownSize_337_);
lean_closure_set(v___f_341_, 3, v_pendingIncompleteChunk_338_);
lean_closure_set(v___f_341_, 4, v_closeError_339_);
lean_closure_set(v___f_341_, 5, v_inst_328_);
lean_closure_set(v___f_341_, 6, v_interestWaiter_335_);
lean_closure_set(v___f_341_, 7, v_toApplicative_329_);
lean_closure_set(v___f_341_, 8, v_toBind_330_);
if (lean_obj_tag(v_pendingConsumer_334_) == 1)
{
lean_object* v_val_348_; 
v_val_348_ = lean_ctor_get(v_pendingConsumer_334_, 0);
if (lean_obj_tag(v_val_348_) == 1)
{
lean_object* v_finished_349_; lean_object* v_finished_350_; lean_object* v___f_351_; lean_object* v___f_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v_finished_349_ = lean_ctor_get(v_val_348_, 0);
v_finished_350_ = lean_ctor_get(v_finished_349_, 0);
lean_inc(v_finished_350_);
lean_inc(v_a_331_);
v___f_351_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5___boxed), 3, 2);
lean_closure_set(v___f_351_, 0, v___f_341_);
lean_closure_set(v___f_351_, 1, v_a_331_);
lean_inc_ref(v___f_351_);
lean_inc(v_toBind_330_);
v___f_352_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_352_, 0, v_toApplicative_329_);
lean_closure_set(v___f_352_, 1, v_pendingConsumer_334_);
lean_closure_set(v___f_352_, 2, v_toBind_330_);
lean_closure_set(v___f_352_, 3, v___f_351_);
lean_closure_set(v___f_352_, 4, v___f_351_);
v___x_353_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_353_, 0, lean_box(0));
lean_closure_set(v___x_353_, 1, lean_box(0));
lean_closure_set(v___x_353_, 2, v_finished_350_);
v___x_354_ = lean_apply_2(v_inst_328_, lean_box(0), v___x_353_);
v___x_355_ = lean_apply_4(v_toBind_330_, lean_box(0), lean_box(0), v___x_354_, v___f_352_);
return v___x_355_;
}
else
{
lean_dec(v_inst_328_);
v___y_343_ = v_a_331_;
goto v___jp_342_;
}
}
else
{
lean_dec(v_inst_328_);
v___y_343_ = v_a_331_;
goto v___jp_342_;
}
v___jp_342_:
{
lean_object* v_toPure_344_; lean_object* v___f_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_toPure_344_ = lean_ctor_get(v_toApplicative_329_, 1);
lean_inc(v_toPure_344_);
lean_dec_ref(v_toApplicative_329_);
lean_inc(v___y_343_);
v___f_345_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_345_, 0, v___f_341_);
lean_closure_set(v___f_345_, 1, v___y_343_);
v___x_346_ = lean_apply_2(v_toPure_344_, lean_box(0), v_pendingConsumer_334_);
v___x_347_ = lean_apply_4(v_toBind_330_, lean_box(0), lean_box(0), v___x_346_, v___f_345_);
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6___boxed(lean_object* v_inst_356_, lean_object* v_toApplicative_357_, lean_object* v_toBind_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6(v_inst_356_, v_toApplicative_357_, v_toBind_358_, v_a_359_, v_a_360_);
lean_dec(v_a_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(lean_object* v_inst_362_, lean_object* v_inst_363_, lean_object* v_a_364_){
_start:
{
lean_object* v_toApplicative_365_; lean_object* v_toBind_366_; lean_object* v___f_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_toApplicative_365_ = lean_ctor_get(v_inst_362_, 0);
lean_inc_ref(v_toApplicative_365_);
v_toBind_366_ = lean_ctor_get(v_inst_362_, 1);
lean_inc_n(v_toBind_366_, 2);
lean_dec_ref(v_inst_362_);
lean_inc_n(v_a_364_, 2);
lean_inc(v_inst_363_);
v___f_367_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6___boxed), 5, 4);
lean_closure_set(v___f_367_, 0, v_inst_363_);
lean_closure_set(v___f_367_, 1, v_toApplicative_365_);
lean_closure_set(v___f_367_, 2, v_toBind_366_);
lean_closure_set(v___f_367_, 3, v_a_364_);
v___x_368_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_368_, 0, lean_box(0));
lean_closure_set(v___x_368_, 1, lean_box(0));
lean_closure_set(v___x_368_, 2, v_a_364_);
v___x_369_ = lean_apply_2(v_inst_363_, lean_box(0), v___x_368_);
v___x_370_ = lean_apply_4(v_toBind_366_, lean_box(0), lean_box(0), v___x_369_, v___f_367_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___boxed(lean_object* v_inst_371_, lean_object* v_inst_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(v_inst_371_, v_inst_372_, v_a_373_);
lean_dec(v_a_373_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters(lean_object* v_m_375_, lean_object* v_inst_376_, lean_object* v_inst_377_, lean_object* v_a_378_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(v_inst_376_, v_inst_377_, v_a_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___boxed(lean_object* v_m_380_, lean_object* v_inst_381_, lean_object* v_inst_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters(v_m_380_, v_inst_381_, v_inst_382_, v_a_383_);
lean_dec(v_a_383_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0(lean_object* v_pendingProducer_385_, lean_object* v_pendingConsumer_386_, uint8_t v_closed_387_, lean_object* v_knownSize_388_, lean_object* v_pendingIncompleteChunk_389_, lean_object* v_closeError_390_, lean_object* v_a_391_, lean_object* v_inst_392_, lean_object* v_a_393_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_394_ = lean_box(0);
v___x_395_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_395_, 0, v_pendingProducer_385_);
lean_ctor_set(v___x_395_, 1, v_pendingConsumer_386_);
lean_ctor_set(v___x_395_, 2, v___x_394_);
lean_ctor_set(v___x_395_, 3, v_knownSize_388_);
lean_ctor_set(v___x_395_, 4, v_pendingIncompleteChunk_389_);
lean_ctor_set(v___x_395_, 5, v_closeError_390_);
lean_ctor_set_uint8(v___x_395_, sizeof(void*)*6, v_closed_387_);
lean_inc(v_a_391_);
v___x_396_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_396_, 0, lean_box(0));
lean_closure_set(v___x_396_, 1, lean_box(0));
lean_closure_set(v___x_396_, 2, v_a_391_);
lean_closure_set(v___x_396_, 3, v___x_395_);
v___x_397_ = lean_apply_2(v_inst_392_, lean_box(0), v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0___boxed(lean_object* v_pendingProducer_398_, lean_object* v_pendingConsumer_399_, lean_object* v_closed_400_, lean_object* v_knownSize_401_, lean_object* v_pendingIncompleteChunk_402_, lean_object* v_closeError_403_, lean_object* v_a_404_, lean_object* v_inst_405_, lean_object* v_a_406_){
_start:
{
uint8_t v_closed_boxed_407_; lean_object* v_res_408_; 
v_closed_boxed_407_ = lean_unbox(v_closed_400_);
v_res_408_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0(v_pendingProducer_398_, v_pendingConsumer_399_, v_closed_boxed_407_, v_knownSize_401_, v_pendingIncompleteChunk_402_, v_closeError_403_, v_a_404_, v_inst_405_, v_a_406_);
lean_dec(v_a_404_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1(lean_object* v_toApplicative_409_, lean_object* v_a_410_, lean_object* v_inst_411_, lean_object* v_inst_412_, lean_object* v_toBind_413_, lean_object* v_a_414_){
_start:
{
lean_object* v_interestWaiter_415_; 
v_interestWaiter_415_ = lean_ctor_get(v_a_414_, 2);
lean_inc(v_interestWaiter_415_);
if (lean_obj_tag(v_interestWaiter_415_) == 1)
{
lean_object* v_toFunctor_416_; lean_object* v_pendingProducer_417_; lean_object* v_pendingConsumer_418_; uint8_t v_closed_419_; lean_object* v_knownSize_420_; lean_object* v_pendingIncompleteChunk_421_; lean_object* v_closeError_422_; lean_object* v_val_423_; lean_object* v_mapConst_424_; lean_object* v___x_425_; lean_object* v___f_426_; uint8_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v_toFunctor_416_ = lean_ctor_get(v_toApplicative_409_, 0);
lean_inc_ref(v_toFunctor_416_);
lean_dec_ref(v_toApplicative_409_);
v_pendingProducer_417_ = lean_ctor_get(v_a_414_, 0);
lean_inc(v_pendingProducer_417_);
v_pendingConsumer_418_ = lean_ctor_get(v_a_414_, 1);
lean_inc(v_pendingConsumer_418_);
v_closed_419_ = lean_ctor_get_uint8(v_a_414_, sizeof(void*)*6);
v_knownSize_420_ = lean_ctor_get(v_a_414_, 3);
lean_inc(v_knownSize_420_);
v_pendingIncompleteChunk_421_ = lean_ctor_get(v_a_414_, 4);
lean_inc(v_pendingIncompleteChunk_421_);
v_closeError_422_ = lean_ctor_get(v_a_414_, 5);
lean_inc(v_closeError_422_);
lean_dec_ref(v_a_414_);
v_val_423_ = lean_ctor_get(v_interestWaiter_415_, 0);
lean_inc(v_val_423_);
lean_dec_ref_known(v_interestWaiter_415_, 1);
v_mapConst_424_ = lean_ctor_get(v_toFunctor_416_, 1);
lean_inc(v_mapConst_424_);
lean_dec_ref(v_toFunctor_416_);
v___x_425_ = lean_box(v_closed_419_);
lean_inc(v_a_410_);
v___f_426_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_426_, 0, v_pendingProducer_417_);
lean_closure_set(v___f_426_, 1, v_pendingConsumer_418_);
lean_closure_set(v___f_426_, 2, v___x_425_);
lean_closure_set(v___f_426_, 3, v_knownSize_420_);
lean_closure_set(v___f_426_, 4, v_pendingIncompleteChunk_421_);
lean_closure_set(v___f_426_, 5, v_closeError_422_);
lean_closure_set(v___f_426_, 6, v_a_410_);
lean_closure_set(v___f_426_, 7, v_inst_411_);
v___x_427_ = 1;
v___x_428_ = lean_box(v___x_427_);
v___x_429_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed), 3, 2);
lean_closure_set(v___x_429_, 0, v_val_423_);
lean_closure_set(v___x_429_, 1, v___x_428_);
v___x_430_ = lean_apply_2(v_inst_412_, lean_box(0), v___x_429_);
v___x_431_ = lean_box(0);
v___x_432_ = lean_apply_4(v_mapConst_424_, lean_box(0), lean_box(0), v___x_431_, v___x_430_);
v___x_433_ = lean_apply_4(v_toBind_413_, lean_box(0), lean_box(0), v___x_432_, v___f_426_);
return v___x_433_;
}
else
{
lean_object* v_toPure_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
lean_dec(v_interestWaiter_415_);
lean_dec_ref(v_a_414_);
lean_dec(v_toBind_413_);
lean_dec(v_inst_412_);
lean_dec(v_inst_411_);
v_toPure_434_ = lean_ctor_get(v_toApplicative_409_, 1);
lean_inc(v_toPure_434_);
lean_dec_ref(v_toApplicative_409_);
v___x_435_ = lean_box(0);
v___x_436_ = lean_apply_2(v_toPure_434_, lean_box(0), v___x_435_);
return v___x_436_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1___boxed(lean_object* v_toApplicative_437_, lean_object* v_a_438_, lean_object* v_inst_439_, lean_object* v_inst_440_, lean_object* v_toBind_441_, lean_object* v_a_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1(v_toApplicative_437_, v_a_438_, v_inst_439_, v_inst_440_, v_toBind_441_, v_a_442_);
lean_dec(v_a_438_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(lean_object* v_inst_444_, lean_object* v_inst_445_, lean_object* v_inst_446_, lean_object* v_a_447_){
_start:
{
lean_object* v_toApplicative_448_; lean_object* v_toBind_449_; lean_object* v___f_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v_toApplicative_448_ = lean_ctor_get(v_inst_444_, 0);
lean_inc_ref(v_toApplicative_448_);
v_toBind_449_ = lean_ctor_get(v_inst_444_, 1);
lean_inc_n(v_toBind_449_, 2);
lean_dec_ref(v_inst_444_);
lean_inc(v_inst_445_);
lean_inc_n(v_a_447_, 2);
v___f_450_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_450_, 0, v_toApplicative_448_);
lean_closure_set(v___f_450_, 1, v_a_447_);
lean_closure_set(v___f_450_, 2, v_inst_445_);
lean_closure_set(v___f_450_, 3, v_inst_446_);
lean_closure_set(v___f_450_, 4, v_toBind_449_);
v___x_451_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_451_, 0, lean_box(0));
lean_closure_set(v___x_451_, 1, lean_box(0));
lean_closure_set(v___x_451_, 2, v_a_447_);
v___x_452_ = lean_apply_2(v_inst_445_, lean_box(0), v___x_451_);
v___x_453_ = lean_apply_4(v_toBind_449_, lean_box(0), lean_box(0), v___x_452_, v___f_450_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___boxed(lean_object* v_inst_454_, lean_object* v_inst_455_, lean_object* v_inst_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(v_inst_454_, v_inst_455_, v_inst_456_, v_a_457_);
lean_dec(v_a_457_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest(lean_object* v_m_459_, lean_object* v_inst_460_, lean_object* v_inst_461_, lean_object* v_inst_462_, lean_object* v_a_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(v_inst_460_, v_inst_461_, v_inst_462_, v_a_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___boxed(lean_object* v_m_465_, lean_object* v_inst_466_, lean_object* v_inst_467_, lean_object* v_inst_468_, lean_object* v_a_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest(v_m_465_, v_inst_466_, v_inst_467_, v_inst_468_, v_a_469_);
lean_dec(v_a_469_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0(lean_object* v_toApplicative_471_, lean_object* v_a_472_){
_start:
{
uint8_t v___y_474_; lean_object* v_pendingProducer_478_; 
v_pendingProducer_478_ = lean_ctor_get(v_a_472_, 0);
if (lean_obj_tag(v_pendingProducer_478_) == 0)
{
uint8_t v_closed_479_; 
v_closed_479_ = lean_ctor_get_uint8(v_a_472_, sizeof(void*)*6);
v___y_474_ = v_closed_479_;
goto v___jp_473_;
}
else
{
uint8_t v___x_480_; 
v___x_480_ = 1;
v___y_474_ = v___x_480_;
goto v___jp_473_;
}
v___jp_473_:
{
lean_object* v_toPure_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_toPure_475_ = lean_ctor_get(v_toApplicative_471_, 1);
lean_inc(v_toPure_475_);
lean_dec_ref(v_toApplicative_471_);
v___x_476_ = lean_box(v___y_474_);
v___x_477_ = lean_apply_2(v_toPure_475_, lean_box(0), v___x_476_);
return v___x_477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0___boxed(lean_object* v_toApplicative_481_, lean_object* v_a_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0(v_toApplicative_481_, v_a_482_);
lean_dec_ref(v_a_482_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(lean_object* v_inst_484_, lean_object* v_inst_485_, lean_object* v_a_486_){
_start:
{
lean_object* v_toApplicative_487_; lean_object* v_toBind_488_; lean_object* v___f_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_toApplicative_487_ = lean_ctor_get(v_inst_484_, 0);
lean_inc_ref(v_toApplicative_487_);
v_toBind_488_ = lean_ctor_get(v_inst_484_, 1);
lean_inc(v_toBind_488_);
lean_dec_ref(v_inst_484_);
v___f_489_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_489_, 0, v_toApplicative_487_);
lean_inc(v_a_486_);
v___x_490_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_490_, 0, lean_box(0));
lean_closure_set(v___x_490_, 1, lean_box(0));
lean_closure_set(v___x_490_, 2, v_a_486_);
v___x_491_ = lean_apply_2(v_inst_485_, lean_box(0), v___x_490_);
v___x_492_ = lean_apply_4(v_toBind_488_, lean_box(0), lean_box(0), v___x_491_, v___f_489_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___boxed(lean_object* v_inst_493_, lean_object* v_inst_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(v_inst_493_, v_inst_494_, v_a_495_);
lean_dec(v_a_495_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27(lean_object* v_m_497_, lean_object* v_inst_498_, lean_object* v_inst_499_, lean_object* v_a_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(v_inst_498_, v_inst_499_, v_a_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___boxed(lean_object* v_m_502_, lean_object* v_inst_503_, lean_object* v_inst_504_, lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27(v_m_502_, v_inst_503_, v_inst_504_, v_a_505_);
lean_dec(v_a_505_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0(lean_object* v_toApplicative_507_, lean_object* v_a_508_){
_start:
{
uint8_t v___y_510_; lean_object* v_pendingConsumer_514_; 
v_pendingConsumer_514_ = lean_ctor_get(v_a_508_, 1);
if (lean_obj_tag(v_pendingConsumer_514_) == 0)
{
uint8_t v___x_515_; 
v___x_515_ = 0;
v___y_510_ = v___x_515_;
goto v___jp_509_;
}
else
{
uint8_t v___x_516_; 
v___x_516_ = 1;
v___y_510_ = v___x_516_;
goto v___jp_509_;
}
v___jp_509_:
{
lean_object* v_toPure_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v_toPure_511_ = lean_ctor_get(v_toApplicative_507_, 1);
lean_inc(v_toPure_511_);
lean_dec_ref(v_toApplicative_507_);
v___x_512_ = lean_box(v___y_510_);
v___x_513_ = lean_apply_2(v_toPure_511_, lean_box(0), v___x_512_);
return v___x_513_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0___boxed(lean_object* v_toApplicative_517_, lean_object* v_a_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0(v_toApplicative_517_, v_a_518_);
lean_dec_ref(v_a_518_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(lean_object* v_inst_520_, lean_object* v_inst_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_toApplicative_523_; lean_object* v_toBind_524_; lean_object* v___f_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v_toApplicative_523_ = lean_ctor_get(v_inst_520_, 0);
lean_inc_ref(v_toApplicative_523_);
v_toBind_524_ = lean_ctor_get(v_inst_520_, 1);
lean_inc(v_toBind_524_);
lean_dec_ref(v_inst_520_);
v___f_525_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_525_, 0, v_toApplicative_523_);
lean_inc(v_a_522_);
v___x_526_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_526_, 0, lean_box(0));
lean_closure_set(v___x_526_, 1, lean_box(0));
lean_closure_set(v___x_526_, 2, v_a_522_);
v___x_527_ = lean_apply_2(v_inst_521_, lean_box(0), v___x_526_);
v___x_528_ = lean_apply_4(v_toBind_524_, lean_box(0), lean_box(0), v___x_527_, v___f_525_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___boxed(lean_object* v_inst_529_, lean_object* v_inst_530_, lean_object* v_a_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(v_inst_529_, v_inst_530_, v_a_531_);
lean_dec(v_a_531_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27(lean_object* v_m_533_, lean_object* v_inst_534_, lean_object* v_inst_535_, lean_object* v_a_536_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(v_inst_534_, v_inst_535_, v_a_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___boxed(lean_object* v_m_538_, lean_object* v_inst_539_, lean_object* v_inst_540_, lean_object* v_a_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27(v_m_538_, v_inst_539_, v_inst_540_, v_a_541_);
lean_dec(v_a_541_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__0(lean_object* v_toApplicative_543_, lean_object* v_chunk_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_toPure_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v_toPure_546_ = lean_ctor_get(v_toApplicative_543_, 1);
lean_inc(v_toPure_546_);
lean_dec_ref(v_toApplicative_543_);
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v_chunk_544_);
v___x_548_ = lean_apply_2(v_toPure_546_, lean_box(0), v___x_547_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__1(lean_object* v_toApplicative_549_, lean_object* v_done_550_, lean_object* v_inst_551_, lean_object* v_toBind_552_, lean_object* v___f_553_, lean_object* v_a_554_){
_start:
{
lean_object* v_toFunctor_555_; lean_object* v_mapConst_556_; uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_toFunctor_555_ = lean_ctor_get(v_toApplicative_549_, 0);
lean_inc_ref(v_toFunctor_555_);
lean_dec_ref(v_toApplicative_549_);
v_mapConst_556_ = lean_ctor_get(v_toFunctor_555_, 1);
lean_inc(v_mapConst_556_);
lean_dec_ref(v_toFunctor_555_);
v___x_557_ = 1;
v___x_558_ = lean_box(v___x_557_);
v___x_559_ = lean_alloc_closure((void*)(l_IO_Promise_resolve___boxed), 4, 3);
lean_closure_set(v___x_559_, 0, lean_box(0));
lean_closure_set(v___x_559_, 1, v___x_558_);
lean_closure_set(v___x_559_, 2, v_done_550_);
v___x_560_ = lean_apply_2(v_inst_551_, lean_box(0), v___x_559_);
v___x_561_ = lean_box(0);
v___x_562_ = lean_apply_4(v_mapConst_556_, lean_box(0), lean_box(0), v___x_561_, v___x_560_);
v___x_563_ = lean_apply_4(v_toBind_552_, lean_box(0), lean_box(0), v___x_562_, v___f_553_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2(lean_object* v_toApplicative_564_, lean_object* v_inst_565_, lean_object* v_toBind_566_, lean_object* v_a_567_, lean_object* v_inst_568_, lean_object* v_a_569_){
_start:
{
lean_object* v_pendingProducer_570_; 
v_pendingProducer_570_ = lean_ctor_get(v_a_569_, 0);
if (lean_obj_tag(v_pendingProducer_570_) == 1)
{
lean_object* v_val_571_; lean_object* v_pendingConsumer_572_; lean_object* v_interestWaiter_573_; uint8_t v_closed_574_; lean_object* v_knownSize_575_; lean_object* v_pendingIncompleteChunk_576_; lean_object* v_closeError_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_593_; 
v_val_571_ = lean_ctor_get(v_pendingProducer_570_, 0);
lean_inc(v_val_571_);
v_pendingConsumer_572_ = lean_ctor_get(v_a_569_, 1);
v_interestWaiter_573_ = lean_ctor_get(v_a_569_, 2);
v_closed_574_ = lean_ctor_get_uint8(v_a_569_, sizeof(void*)*6);
v_knownSize_575_ = lean_ctor_get(v_a_569_, 3);
v_pendingIncompleteChunk_576_ = lean_ctor_get(v_a_569_, 4);
v_closeError_577_ = lean_ctor_get(v_a_569_, 5);
v_isSharedCheck_593_ = !lean_is_exclusive(v_a_569_);
if (v_isSharedCheck_593_ == 0)
{
lean_object* v_unused_594_; 
v_unused_594_ = lean_ctor_get(v_a_569_, 0);
lean_dec(v_unused_594_);
v___x_579_ = v_a_569_;
v_isShared_580_ = v_isSharedCheck_593_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_closeError_577_);
lean_inc(v_pendingIncompleteChunk_576_);
lean_inc(v_knownSize_575_);
lean_inc(v_interestWaiter_573_);
lean_inc(v_pendingConsumer_572_);
lean_dec(v_a_569_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_593_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v_chunk_581_; lean_object* v_done_582_; lean_object* v___x_583_; lean_object* v___f_584_; lean_object* v___f_585_; lean_object* v___x_586_; lean_object* v___x_588_; 
v_chunk_581_ = lean_ctor_get(v_val_571_, 0);
lean_inc_ref_n(v_chunk_581_, 2);
v_done_582_ = lean_ctor_get(v_val_571_, 1);
lean_inc(v_done_582_);
lean_dec(v_val_571_);
v___x_583_ = lean_box(0);
lean_inc_ref(v_toApplicative_564_);
v___f_584_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__0), 3, 2);
lean_closure_set(v___f_584_, 0, v_toApplicative_564_);
lean_closure_set(v___f_584_, 1, v_chunk_581_);
lean_inc(v_toBind_566_);
v___f_585_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__1), 6, 5);
lean_closure_set(v___f_585_, 0, v_toApplicative_564_);
lean_closure_set(v___f_585_, 1, v_done_582_);
lean_closure_set(v___f_585_, 2, v_inst_565_);
lean_closure_set(v___f_585_, 3, v_toBind_566_);
lean_closure_set(v___f_585_, 4, v___f_584_);
v___x_586_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_575_, v_chunk_581_);
lean_dec_ref(v_chunk_581_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 3, v___x_586_);
lean_ctor_set(v___x_579_, 0, v___x_583_);
v___x_588_ = v___x_579_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_583_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_pendingConsumer_572_);
lean_ctor_set(v_reuseFailAlloc_592_, 2, v_interestWaiter_573_);
lean_ctor_set(v_reuseFailAlloc_592_, 3, v___x_586_);
lean_ctor_set(v_reuseFailAlloc_592_, 4, v_pendingIncompleteChunk_576_);
lean_ctor_set(v_reuseFailAlloc_592_, 5, v_closeError_577_);
lean_ctor_set_uint8(v_reuseFailAlloc_592_, sizeof(void*)*6, v_closed_574_);
v___x_588_ = v_reuseFailAlloc_592_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
lean_inc(v_a_567_);
v___x_589_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_589_, 0, lean_box(0));
lean_closure_set(v___x_589_, 1, lean_box(0));
lean_closure_set(v___x_589_, 2, v_a_567_);
lean_closure_set(v___x_589_, 3, v___x_588_);
v___x_590_ = lean_apply_2(v_inst_568_, lean_box(0), v___x_589_);
v___x_591_ = lean_apply_4(v_toBind_566_, lean_box(0), lean_box(0), v___x_590_, v___f_585_);
return v___x_591_;
}
}
}
else
{
lean_object* v_toPure_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
lean_dec_ref(v_a_569_);
lean_dec(v_inst_568_);
lean_dec(v_toBind_566_);
lean_dec(v_inst_565_);
v_toPure_595_ = lean_ctor_get(v_toApplicative_564_, 1);
lean_inc(v_toPure_595_);
lean_dec_ref(v_toApplicative_564_);
v___x_596_ = lean_box(0);
v___x_597_ = lean_apply_2(v_toPure_595_, lean_box(0), v___x_596_);
return v___x_597_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2___boxed(lean_object* v_toApplicative_598_, lean_object* v_inst_599_, lean_object* v_toBind_600_, lean_object* v_a_601_, lean_object* v_inst_602_, lean_object* v_a_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2(v_toApplicative_598_, v_inst_599_, v_toBind_600_, v_a_601_, v_inst_602_, v_a_603_);
lean_dec(v_a_601_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(lean_object* v_inst_605_, lean_object* v_inst_606_, lean_object* v_inst_607_, lean_object* v_a_608_){
_start:
{
lean_object* v_toApplicative_609_; lean_object* v_toBind_610_; lean_object* v___f_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v_toApplicative_609_ = lean_ctor_get(v_inst_605_, 0);
lean_inc_ref(v_toApplicative_609_);
v_toBind_610_ = lean_ctor_get(v_inst_605_, 1);
lean_inc_n(v_toBind_610_, 2);
lean_dec_ref(v_inst_605_);
lean_inc(v_inst_606_);
lean_inc_n(v_a_608_, 2);
v___f_611_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_611_, 0, v_toApplicative_609_);
lean_closure_set(v___f_611_, 1, v_inst_607_);
lean_closure_set(v___f_611_, 2, v_toBind_610_);
lean_closure_set(v___f_611_, 3, v_a_608_);
lean_closure_set(v___f_611_, 4, v_inst_606_);
v___x_612_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_612_, 0, lean_box(0));
lean_closure_set(v___x_612_, 1, lean_box(0));
lean_closure_set(v___x_612_, 2, v_a_608_);
v___x_613_ = lean_apply_2(v_inst_606_, lean_box(0), v___x_612_);
v___x_614_ = lean_apply_4(v_toBind_610_, lean_box(0), lean_box(0), v___x_613_, v___f_611_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___boxed(lean_object* v_inst_615_, lean_object* v_inst_616_, lean_object* v_inst_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(v_inst_615_, v_inst_616_, v_inst_617_, v_a_618_);
lean_dec(v_a_618_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27(lean_object* v_m_620_, lean_object* v_inst_621_, lean_object* v_inst_622_, lean_object* v_inst_623_, lean_object* v_a_624_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(v_inst_621_, v_inst_622_, v_inst_623_, v_a_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___boxed(lean_object* v_m_626_, lean_object* v_inst_627_, lean_object* v_inst_628_, lean_object* v_inst_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27(v_m_626_, v_inst_627_, v_inst_628_, v_inst_629_, v_a_630_);
lean_dec(v_a_630_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0(lean_object* v_toApplicative_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_closeError_636_; 
v_closeError_636_ = lean_ctor_get(v_a_635_, 5);
lean_inc(v_closeError_636_);
lean_dec_ref(v_a_635_);
if (lean_obj_tag(v_closeError_636_) == 1)
{
lean_object* v_val_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_646_; 
v_val_637_ = lean_ctor_get(v_closeError_636_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v_closeError_636_);
if (v_isSharedCheck_646_ == 0)
{
v___x_639_ = v_closeError_636_;
v_isShared_640_ = v_isSharedCheck_646_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_val_637_);
lean_dec(v_closeError_636_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_646_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v_toPure_641_; lean_object* v___x_643_; 
v_toPure_641_ = lean_ctor_get(v_toApplicative_634_, 1);
lean_inc(v_toPure_641_);
lean_dec_ref(v_toApplicative_634_);
if (v_isShared_640_ == 0)
{
lean_ctor_set_tag(v___x_639_, 0);
v___x_643_ = v___x_639_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_val_637_);
v___x_643_ = v_reuseFailAlloc_645_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_644_; 
v___x_644_ = lean_apply_2(v_toPure_641_, lean_box(0), v___x_643_);
return v___x_644_;
}
}
}
else
{
lean_object* v_toPure_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
lean_dec(v_closeError_636_);
v_toPure_647_ = lean_ctor_get(v_toApplicative_634_, 1);
lean_inc(v_toPure_647_);
lean_dec_ref(v_toApplicative_634_);
v___x_648_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___x_649_ = lean_apply_2(v_toPure_647_, lean_box(0), v___x_648_);
return v___x_649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1(lean_object* v_toApplicative_650_, lean_object* v_a_651_, lean_object* v_inst_652_, lean_object* v_toBind_653_, lean_object* v___f_654_, lean_object* v_a_655_){
_start:
{
if (lean_obj_tag(v_a_655_) == 1)
{
lean_object* v_toPure_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
lean_dec(v___f_654_);
lean_dec(v_toBind_653_);
lean_dec(v_inst_652_);
v_toPure_656_ = lean_ctor_get(v_toApplicative_650_, 1);
lean_inc(v_toPure_656_);
lean_dec_ref(v_toApplicative_650_);
v___x_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_657_, 0, v_a_655_);
v___x_658_ = lean_apply_2(v_toPure_656_, lean_box(0), v___x_657_);
return v___x_658_;
}
else
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
lean_dec(v_a_655_);
lean_dec_ref(v_toApplicative_650_);
lean_inc(v_a_651_);
v___x_659_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_659_, 0, lean_box(0));
lean_closure_set(v___x_659_, 1, lean_box(0));
lean_closure_set(v___x_659_, 2, v_a_651_);
v___x_660_ = lean_apply_2(v_inst_652_, lean_box(0), v___x_659_);
v___x_661_ = lean_apply_4(v_toBind_653_, lean_box(0), lean_box(0), v___x_660_, v___f_654_);
return v___x_661_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1___boxed(lean_object* v_toApplicative_662_, lean_object* v_a_663_, lean_object* v_inst_664_, lean_object* v_toBind_665_, lean_object* v___f_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1(v_toApplicative_662_, v_a_663_, v_inst_664_, v_toBind_665_, v___f_666_, v_a_667_);
lean_dec(v_a_663_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(lean_object* v_inst_669_, lean_object* v_inst_670_, lean_object* v_inst_671_, lean_object* v_a_672_){
_start:
{
lean_object* v_toApplicative_673_; lean_object* v_toBind_674_; lean_object* v___f_675_; lean_object* v___f_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v_toApplicative_673_ = lean_ctor_get(v_inst_669_, 0);
v_toBind_674_ = lean_ctor_get(v_inst_669_, 1);
lean_inc_n(v_toBind_674_, 2);
lean_inc_ref_n(v_toApplicative_673_, 2);
v___f_675_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_675_, 0, v_toApplicative_673_);
lean_inc(v_inst_670_);
lean_inc(v_a_672_);
v___f_676_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_676_, 0, v_toApplicative_673_);
lean_closure_set(v___f_676_, 1, v_a_672_);
lean_closure_set(v___f_676_, 2, v_inst_670_);
lean_closure_set(v___f_676_, 3, v_toBind_674_);
lean_closure_set(v___f_676_, 4, v___f_675_);
v___x_677_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(v_inst_669_, v_inst_670_, v_inst_671_, v_a_672_);
v___x_678_ = lean_apply_4(v_toBind_674_, lean_box(0), lean_box(0), v___x_677_, v___f_676_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___boxed(lean_object* v_inst_679_, lean_object* v_inst_680_, lean_object* v_inst_681_, lean_object* v_a_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(v_inst_679_, v_inst_680_, v_inst_681_, v_a_682_);
lean_dec(v_a_682_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27(lean_object* v_m_684_, lean_object* v_inst_685_, lean_object* v_inst_686_, lean_object* v_inst_687_, lean_object* v_a_688_){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(v_inst_685_, v_inst_686_, v_inst_687_, v_a_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___boxed(lean_object* v_m_690_, lean_object* v_inst_691_, lean_object* v_inst_692_, lean_object* v_inst_693_, lean_object* v_a_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27(v_m_690_, v_inst_691_, v_inst_692_, v_inst_693_, v_a_694_);
lean_dec(v_a_694_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0(uint8_t v___x_696_, lean_object* v_knownSize_697_, lean_object* v_closeError_698_, lean_object* v_inst_699_, lean_object* v_____r_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_702_ = lean_box(0);
v___x_703_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_703_, 0, v___x_702_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
lean_ctor_set(v___x_703_, 2, v___x_702_);
lean_ctor_set(v___x_703_, 3, v_knownSize_697_);
lean_ctor_set(v___x_703_, 4, v___x_702_);
lean_ctor_set(v___x_703_, 5, v_closeError_698_);
lean_ctor_set_uint8(v___x_703_, sizeof(void*)*6, v___x_696_);
lean_inc(v___y_701_);
v___x_704_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_704_, 0, lean_box(0));
lean_closure_set(v___x_704_, 1, lean_box(0));
lean_closure_set(v___x_704_, 2, v___y_701_);
lean_closure_set(v___x_704_, 3, v___x_703_);
v___x_705_ = lean_apply_2(v_inst_699_, lean_box(0), v___x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0___boxed(lean_object* v___x_706_, lean_object* v_knownSize_707_, lean_object* v_closeError_708_, lean_object* v_inst_709_, lean_object* v_____r_710_, lean_object* v___y_711_){
_start:
{
uint8_t v___x_635__boxed_712_; lean_object* v_res_713_; 
v___x_635__boxed_712_ = lean_unbox(v___x_706_);
v_res_713_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0(v___x_635__boxed_712_, v_knownSize_707_, v_closeError_708_, v_inst_709_, v_____r_710_, v___y_711_);
lean_dec(v___y_711_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1(lean_object* v___f_714_, lean_object* v___y_715_, lean_object* v_a_716_){
_start:
{
lean_object* v___x_717_; 
lean_inc(v___y_715_);
v___x_717_ = lean_apply_2(v___f_714_, v_a_716_, v___y_715_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed(lean_object* v___f_718_, lean_object* v___y_719_, lean_object* v_a_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1(v___f_718_, v___y_719_, v_a_720_);
lean_dec(v___y_719_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2(lean_object* v_pendingProducer_722_, lean_object* v_toApplicative_723_, lean_object* v___f_724_, uint8_t v_closed_725_, lean_object* v_inst_726_, lean_object* v_toBind_727_, lean_object* v_____r_728_, lean_object* v___y_729_){
_start:
{
if (lean_obj_tag(v_pendingProducer_722_) == 1)
{
lean_object* v_val_730_; lean_object* v_toFunctor_731_; lean_object* v_done_732_; lean_object* v_mapConst_733_; lean_object* v___f_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v_val_730_ = lean_ctor_get(v_pendingProducer_722_, 0);
lean_inc(v_val_730_);
lean_dec_ref_known(v_pendingProducer_722_, 1);
v_toFunctor_731_ = lean_ctor_get(v_toApplicative_723_, 0);
lean_inc_ref(v_toFunctor_731_);
lean_dec_ref(v_toApplicative_723_);
v_done_732_ = lean_ctor_get(v_val_730_, 1);
lean_inc(v_done_732_);
lean_dec(v_val_730_);
v_mapConst_733_ = lean_ctor_get(v_toFunctor_731_, 1);
lean_inc(v_mapConst_733_);
lean_dec_ref(v_toFunctor_731_);
lean_inc(v___y_729_);
v___f_734_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_734_, 0, v___f_724_);
lean_closure_set(v___f_734_, 1, v___y_729_);
v___x_735_ = lean_box(v_closed_725_);
v___x_736_ = lean_alloc_closure((void*)(l_IO_Promise_resolve___boxed), 4, 3);
lean_closure_set(v___x_736_, 0, lean_box(0));
lean_closure_set(v___x_736_, 1, v___x_735_);
lean_closure_set(v___x_736_, 2, v_done_732_);
v___x_737_ = lean_apply_2(v_inst_726_, lean_box(0), v___x_736_);
v___x_738_ = lean_box(0);
v___x_739_ = lean_apply_4(v_mapConst_733_, lean_box(0), lean_box(0), v___x_738_, v___x_737_);
v___x_740_ = lean_apply_4(v_toBind_727_, lean_box(0), lean_box(0), v___x_739_, v___f_734_);
return v___x_740_;
}
else
{
lean_object* v___x_741_; lean_object* v___x_742_; 
lean_dec(v_toBind_727_);
lean_dec(v_inst_726_);
lean_dec_ref(v_toApplicative_723_);
lean_dec(v_pendingProducer_722_);
v___x_741_ = lean_box(0);
lean_inc(v___y_729_);
v___x_742_ = lean_apply_2(v___f_724_, v___x_741_, v___y_729_);
return v___x_742_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2___boxed(lean_object* v_pendingProducer_743_, lean_object* v_toApplicative_744_, lean_object* v___f_745_, lean_object* v_closed_746_, lean_object* v_inst_747_, lean_object* v_toBind_748_, lean_object* v_____r_749_, lean_object* v___y_750_){
_start:
{
uint8_t v_closed_boxed_751_; lean_object* v_res_752_; 
v_closed_boxed_751_ = lean_unbox(v_closed_746_);
v_res_752_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2(v_pendingProducer_743_, v_toApplicative_744_, v___f_745_, v_closed_boxed_751_, v_inst_747_, v_toBind_748_, v_____r_749_, v___y_750_);
lean_dec(v___y_750_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(lean_object* v_interestWaiter_753_, lean_object* v_toApplicative_754_, lean_object* v___f_755_, uint8_t v_closed_756_, lean_object* v_inst_757_, lean_object* v_toBind_758_, lean_object* v_____r_759_, lean_object* v___y_760_){
_start:
{
if (lean_obj_tag(v_interestWaiter_753_) == 1)
{
lean_object* v_toFunctor_761_; lean_object* v_val_762_; lean_object* v_mapConst_763_; lean_object* v___f_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v_toFunctor_761_ = lean_ctor_get(v_toApplicative_754_, 0);
lean_inc_ref(v_toFunctor_761_);
lean_dec_ref(v_toApplicative_754_);
v_val_762_ = lean_ctor_get(v_interestWaiter_753_, 0);
lean_inc(v_val_762_);
lean_dec_ref_known(v_interestWaiter_753_, 1);
v_mapConst_763_ = lean_ctor_get(v_toFunctor_761_, 1);
lean_inc(v_mapConst_763_);
lean_dec_ref(v_toFunctor_761_);
lean_inc(v___y_760_);
v___f_764_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_764_, 0, v___f_755_);
lean_closure_set(v___f_764_, 1, v___y_760_);
v___x_765_ = lean_box(v_closed_756_);
v___x_766_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed), 3, 2);
lean_closure_set(v___x_766_, 0, v_val_762_);
lean_closure_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lean_apply_2(v_inst_757_, lean_box(0), v___x_766_);
v___x_768_ = lean_box(0);
v___x_769_ = lean_apply_4(v_mapConst_763_, lean_box(0), lean_box(0), v___x_768_, v___x_767_);
v___x_770_ = lean_apply_4(v_toBind_758_, lean_box(0), lean_box(0), v___x_769_, v___f_764_);
return v___x_770_;
}
else
{
lean_object* v___x_771_; lean_object* v___x_772_; 
lean_dec(v_toBind_758_);
lean_dec(v_inst_757_);
lean_dec_ref(v_toApplicative_754_);
lean_dec(v_interestWaiter_753_);
v___x_771_ = lean_box(0);
lean_inc(v___y_760_);
v___x_772_ = lean_apply_2(v___f_755_, v___x_771_, v___y_760_);
return v___x_772_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4___boxed(lean_object* v_interestWaiter_773_, lean_object* v_toApplicative_774_, lean_object* v___f_775_, lean_object* v_closed_776_, lean_object* v_inst_777_, lean_object* v_toBind_778_, lean_object* v_____r_779_, lean_object* v___y_780_){
_start:
{
uint8_t v_closed_boxed_781_; lean_object* v_res_782_; 
v_closed_boxed_781_ = lean_unbox(v_closed_776_);
v_res_782_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(v_interestWaiter_773_, v_toApplicative_774_, v___f_775_, v_closed_boxed_781_, v_inst_777_, v_toBind_778_, v_____r_779_, v___y_780_);
lean_dec(v___y_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3(lean_object* v___f_783_, lean_object* v_a_784_, lean_object* v_a_785_){
_start:
{
lean_object* v___x_786_; 
lean_inc(v_a_784_);
v___x_786_ = lean_apply_2(v___f_783_, v_a_785_, v_a_784_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3___boxed(lean_object* v___f_787_, lean_object* v_a_788_, lean_object* v_a_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3(v___f_787_, v_a_788_, v_a_789_);
lean_dec(v_a_788_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5(lean_object* v_inst_791_, lean_object* v_toApplicative_792_, lean_object* v_inst_793_, lean_object* v_toBind_794_, lean_object* v_a_795_, lean_object* v_a_796_){
_start:
{
uint8_t v_closed_797_; 
v_closed_797_ = lean_ctor_get_uint8(v_a_796_, sizeof(void*)*6);
if (v_closed_797_ == 0)
{
lean_object* v_pendingProducer_798_; lean_object* v_pendingConsumer_799_; lean_object* v_interestWaiter_800_; lean_object* v_knownSize_801_; lean_object* v_closeError_802_; uint8_t v___x_803_; lean_object* v___x_804_; lean_object* v___f_805_; lean_object* v___x_806_; lean_object* v___f_807_; lean_object* v___x_808_; lean_object* v___f_809_; 
v_pendingProducer_798_ = lean_ctor_get(v_a_796_, 0);
lean_inc(v_pendingProducer_798_);
v_pendingConsumer_799_ = lean_ctor_get(v_a_796_, 1);
lean_inc(v_pendingConsumer_799_);
v_interestWaiter_800_ = lean_ctor_get(v_a_796_, 2);
lean_inc_n(v_interestWaiter_800_, 2);
v_knownSize_801_ = lean_ctor_get(v_a_796_, 3);
lean_inc(v_knownSize_801_);
v_closeError_802_ = lean_ctor_get(v_a_796_, 5);
lean_inc_n(v_closeError_802_, 2);
lean_dec_ref(v_a_796_);
v___x_803_ = 1;
v___x_804_ = lean_box(v___x_803_);
v___f_805_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_805_, 0, v___x_804_);
lean_closure_set(v___f_805_, 1, v_knownSize_801_);
lean_closure_set(v___f_805_, 2, v_closeError_802_);
lean_closure_set(v___f_805_, 3, v_inst_791_);
v___x_806_ = lean_box(v_closed_797_);
lean_inc_n(v_toBind_794_, 2);
lean_inc_n(v_inst_793_, 2);
lean_inc_ref_n(v_toApplicative_792_, 2);
v___f_807_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2___boxed), 8, 6);
lean_closure_set(v___f_807_, 0, v_pendingProducer_798_);
lean_closure_set(v___f_807_, 1, v_toApplicative_792_);
lean_closure_set(v___f_807_, 2, v___f_805_);
lean_closure_set(v___f_807_, 3, v___x_806_);
lean_closure_set(v___f_807_, 4, v_inst_793_);
lean_closure_set(v___f_807_, 5, v_toBind_794_);
v___x_808_ = lean_box(v_closed_797_);
lean_inc_ref(v___f_807_);
v___f_809_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_809_, 0, v_interestWaiter_800_);
lean_closure_set(v___f_809_, 1, v_toApplicative_792_);
lean_closure_set(v___f_809_, 2, v___f_807_);
lean_closure_set(v___f_809_, 3, v___x_808_);
lean_closure_set(v___f_809_, 4, v_inst_793_);
lean_closure_set(v___f_809_, 5, v_toBind_794_);
if (lean_obj_tag(v_pendingConsumer_799_) == 1)
{
lean_object* v_val_810_; lean_object* v___f_811_; lean_object* v___y_813_; 
lean_dec_ref(v___f_807_);
lean_dec(v_interestWaiter_800_);
v_val_810_ = lean_ctor_get(v_pendingConsumer_799_, 0);
lean_inc(v_val_810_);
lean_dec_ref_known(v_pendingConsumer_799_, 1);
lean_inc(v_a_795_);
v___f_811_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_811_, 0, v___f_809_);
lean_closure_set(v___f_811_, 1, v_a_795_);
if (lean_obj_tag(v_closeError_802_) == 0)
{
lean_object* v___x_821_; 
v___x_821_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___y_813_ = v___x_821_;
goto v___jp_812_;
}
else
{
lean_object* v_val_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
v_val_822_ = lean_ctor_get(v_closeError_802_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v_closeError_802_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v_closeError_802_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_val_822_);
lean_dec(v_closeError_802_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
lean_ctor_set_tag(v___x_824_, 0);
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_val_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
v___y_813_ = v___x_827_;
goto v___jp_812_;
}
}
}
v___jp_812_:
{
lean_object* v_toFunctor_814_; lean_object* v_mapConst_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v_toFunctor_814_ = lean_ctor_get(v_toApplicative_792_, 0);
lean_inc_ref(v_toFunctor_814_);
lean_dec_ref(v_toApplicative_792_);
v_mapConst_815_ = lean_ctor_get(v_toFunctor_814_, 1);
lean_inc(v_mapConst_815_);
lean_dec_ref(v_toFunctor_814_);
v___x_816_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___boxed), 3, 2);
lean_closure_set(v___x_816_, 0, v_val_810_);
lean_closure_set(v___x_816_, 1, v___y_813_);
v___x_817_ = lean_apply_2(v_inst_793_, lean_box(0), v___x_816_);
v___x_818_ = lean_box(0);
v___x_819_ = lean_apply_4(v_mapConst_815_, lean_box(0), lean_box(0), v___x_818_, v___x_817_);
v___x_820_ = lean_apply_4(v_toBind_794_, lean_box(0), lean_box(0), v___x_819_, v___f_811_);
return v___x_820_;
}
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; 
lean_dec_ref(v___f_809_);
lean_dec(v_closeError_802_);
lean_dec(v_pendingConsumer_799_);
v___x_830_ = lean_box(0);
v___x_831_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(v_interestWaiter_800_, v_toApplicative_792_, v___f_807_, v_closed_797_, v_inst_793_, v_toBind_794_, v___x_830_, v_a_795_);
return v___x_831_;
}
}
else
{
lean_object* v_toPure_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
lean_dec_ref(v_a_796_);
lean_dec(v_toBind_794_);
lean_dec(v_inst_793_);
lean_dec(v_inst_791_);
v_toPure_832_ = lean_ctor_get(v_toApplicative_792_, 1);
lean_inc(v_toPure_832_);
lean_dec_ref(v_toApplicative_792_);
v___x_833_ = lean_box(0);
v___x_834_ = lean_apply_2(v_toPure_832_, lean_box(0), v___x_833_);
return v___x_834_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5___boxed(lean_object* v_inst_835_, lean_object* v_toApplicative_836_, lean_object* v_inst_837_, lean_object* v_toBind_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5(v_inst_835_, v_toApplicative_836_, v_inst_837_, v_toBind_838_, v_a_839_, v_a_840_);
lean_dec(v_a_839_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(lean_object* v_inst_842_, lean_object* v_inst_843_, lean_object* v_inst_844_, lean_object* v_a_845_){
_start:
{
lean_object* v_toApplicative_846_; lean_object* v_toBind_847_; lean_object* v___f_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v_toApplicative_846_ = lean_ctor_get(v_inst_842_, 0);
lean_inc_ref(v_toApplicative_846_);
v_toBind_847_ = lean_ctor_get(v_inst_842_, 1);
lean_inc_n(v_toBind_847_, 2);
lean_dec_ref(v_inst_842_);
lean_inc_n(v_a_845_, 2);
lean_inc(v_inst_843_);
v___f_848_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5___boxed), 6, 5);
lean_closure_set(v___f_848_, 0, v_inst_843_);
lean_closure_set(v___f_848_, 1, v_toApplicative_846_);
lean_closure_set(v___f_848_, 2, v_inst_844_);
lean_closure_set(v___f_848_, 3, v_toBind_847_);
lean_closure_set(v___f_848_, 4, v_a_845_);
v___x_849_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_849_, 0, lean_box(0));
lean_closure_set(v___x_849_, 1, lean_box(0));
lean_closure_set(v___x_849_, 2, v_a_845_);
v___x_850_ = lean_apply_2(v_inst_843_, lean_box(0), v___x_849_);
v___x_851_ = lean_apply_4(v_toBind_847_, lean_box(0), lean_box(0), v___x_850_, v___f_848_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___boxed(lean_object* v_inst_852_, lean_object* v_inst_853_, lean_object* v_inst_854_, lean_object* v_a_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(v_inst_852_, v_inst_853_, v_inst_854_, v_a_855_);
lean_dec(v_a_855_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27(lean_object* v_m_857_, lean_object* v_inst_858_, lean_object* v_inst_859_, lean_object* v_inst_860_, lean_object* v_a_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(v_inst_858_, v_inst_859_, v_inst_860_, v_a_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___boxed(lean_object* v_m_863_, lean_object* v_inst_864_, lean_object* v_inst_865_, lean_object* v_inst_866_, lean_object* v_a_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27(v_m_863_, v_inst_864_, v_inst_865_, v_inst_866_, v_a_867_);
lean_dec(v_a_867_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0(lean_object* v_pendingProducer_873_, lean_object* v_pendingConsumer_874_, uint8_t v_closed_875_, lean_object* v_knownSize_876_, lean_object* v_pendingIncompleteChunk_877_, lean_object* v_closeError_878_, lean_object* v_interestWaiter_879_, lean_object* v___y_880_){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_882_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_882_, 0, v_pendingProducer_873_);
lean_ctor_set(v___x_882_, 1, v_pendingConsumer_874_);
lean_ctor_set(v___x_882_, 2, v_interestWaiter_879_);
lean_ctor_set(v___x_882_, 3, v_knownSize_876_);
lean_ctor_set(v___x_882_, 4, v_pendingIncompleteChunk_877_);
lean_ctor_set(v___x_882_, 5, v_closeError_878_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*6, v_closed_875_);
v___x_883_ = lean_st_ref_swap(v___y_880_, v___x_882_);
lean_dec(v___x_883_);
v___x_884_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___boxed(lean_object* v_pendingProducer_885_, lean_object* v_pendingConsumer_886_, lean_object* v_closed_887_, lean_object* v_knownSize_888_, lean_object* v_pendingIncompleteChunk_889_, lean_object* v_closeError_890_, lean_object* v_interestWaiter_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
uint8_t v_closed_boxed_894_; lean_object* v_res_895_; 
v_closed_boxed_894_ = lean_unbox(v_closed_887_);
v_res_895_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0(v_pendingProducer_885_, v_pendingConsumer_886_, v_closed_boxed_894_, v_knownSize_888_, v_pendingIncompleteChunk_889_, v_closeError_890_, v_interestWaiter_891_, v___y_892_);
lean_dec(v___y_892_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1(lean_object* v___f_896_, lean_object* v___y_897_, lean_object* v_x_898_){
_start:
{
if (lean_obj_tag(v_x_898_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_908_; 
lean_dec_ref(v___f_896_);
v_a_900_ = lean_ctor_get(v_x_898_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v_x_898_);
if (v_isSharedCheck_908_ == 0)
{
v___x_902_ = v_x_898_;
v_isShared_903_ = v_isSharedCheck_908_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v_x_898_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_908_;
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
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_900_);
v___x_905_ = v_reuseFailAlloc_907_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_object* v___x_906_; 
v___x_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
return v___x_906_;
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_910_; 
v_a_909_ = lean_ctor_get(v_x_898_, 0);
lean_inc(v_a_909_);
lean_dec_ref_known(v_x_898_, 1);
lean_inc(v___y_897_);
v___x_910_ = lean_apply_3(v___f_896_, v_a_909_, v___y_897_, lean_box(0));
return v___x_910_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed(lean_object* v___f_911_, lean_object* v___y_912_, lean_object* v_x_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1(v___f_911_, v___y_912_, v_x_913_);
lean_dec(v___y_912_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4(lean_object* v_interestWaiter_920_, lean_object* v___f_921_, lean_object* v___f_922_, lean_object* v_x_923_){
_start:
{
if (lean_obj_tag(v_x_923_) == 0)
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_933_; 
lean_dec_ref(v___f_922_);
lean_dec_ref(v___f_921_);
lean_dec(v_interestWaiter_920_);
v_a_925_ = lean_ctor_get(v_x_923_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v_x_923_);
if (v_isSharedCheck_933_ == 0)
{
v___x_927_ = v_x_923_;
v_isShared_928_ = v_isSharedCheck_933_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v_x_923_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_933_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_932_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v___x_931_; 
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
return v___x_931_;
}
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_950_; 
v_a_934_ = lean_ctor_get(v_x_923_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v_x_923_);
if (v_isSharedCheck_950_ == 0)
{
v___x_936_ = v_x_923_;
v_isShared_937_ = v_isSharedCheck_950_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v_x_923_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_950_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
uint8_t v___x_938_; 
v___x_938_ = lean_unbox(v_a_934_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; lean_object* v___x_941_; 
lean_dec_ref(v___f_922_);
v___x_939_ = lean_unsigned_to_nat(0u);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 0, v_interestWaiter_920_);
v___x_941_ = v___x_936_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_interestWaiter_920_);
v___x_941_ = v_reuseFailAlloc_945_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_942_; uint8_t v___x_943_; lean_object* v___x_944_; 
v___x_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_942_, 0, v___x_941_);
v___x_943_ = lean_unbox(v_a_934_);
lean_dec(v_a_934_);
v___x_944_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_939_, v___x_943_, v___x_942_, v___f_921_);
return v___x_944_;
}
}
else
{
lean_object* v___x_946_; uint8_t v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
lean_del_object(v___x_936_);
lean_dec(v_a_934_);
lean_dec_ref(v___f_921_);
lean_dec(v_interestWaiter_920_);
v___x_946_ = lean_unsigned_to_nat(0u);
v___x_947_ = 0;
v___x_948_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1));
v___x_949_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_946_, v___x_947_, v___x_948_, v___f_922_);
return v___x_949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___boxed(lean_object* v_interestWaiter_951_, lean_object* v___f_952_, lean_object* v___f_953_, lean_object* v_x_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4(v_interestWaiter_951_, v___f_952_, v___f_953_, v_x_954_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2(lean_object* v_pendingProducer_957_, uint8_t v_closed_958_, lean_object* v_knownSize_959_, lean_object* v_pendingIncompleteChunk_960_, lean_object* v_closeError_961_, lean_object* v_interestWaiter_962_, lean_object* v_pendingConsumer_963_, lean_object* v___y_964_){
_start:
{
lean_object* v___x_966_; lean_object* v___f_967_; 
v___x_966_ = lean_box(v_closed_958_);
v___f_967_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___boxed), 9, 6);
lean_closure_set(v___f_967_, 0, v_pendingProducer_957_);
lean_closure_set(v___f_967_, 1, v_pendingConsumer_963_);
lean_closure_set(v___f_967_, 2, v___x_966_);
lean_closure_set(v___f_967_, 3, v_knownSize_959_);
lean_closure_set(v___f_967_, 4, v_pendingIncompleteChunk_960_);
lean_closure_set(v___f_967_, 5, v_closeError_961_);
if (lean_obj_tag(v_interestWaiter_962_) == 0)
{
lean_object* v___f_968_; lean_object* v___x_969_; uint8_t v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
lean_inc(v___y_964_);
v___f_968_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed), 4, 2);
lean_closure_set(v___f_968_, 0, v___f_967_);
lean_closure_set(v___f_968_, 1, v___y_964_);
v___x_969_ = lean_unsigned_to_nat(0u);
v___x_970_ = 0;
v___x_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_971_, 0, v_interestWaiter_962_);
v___x_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_972_, 0, v___x_971_);
v___x_973_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_969_, v___x_970_, v___x_972_, v___f_968_);
return v___x_973_;
}
else
{
lean_object* v_val_974_; lean_object* v_finished_975_; lean_object* v___f_976_; lean_object* v___f_977_; lean_object* v___x_978_; uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v_val_974_ = lean_ctor_get(v_interestWaiter_962_, 0);
v_finished_975_ = lean_ctor_get(v_val_974_, 0);
lean_inc(v_finished_975_);
lean_inc(v___y_964_);
v___f_976_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed), 4, 2);
lean_closure_set(v___f_976_, 0, v___f_967_);
lean_closure_set(v___f_976_, 1, v___y_964_);
lean_inc_ref(v___f_976_);
v___f_977_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___boxed), 5, 3);
lean_closure_set(v___f_977_, 0, v_interestWaiter_962_);
lean_closure_set(v___f_977_, 1, v___f_976_);
lean_closure_set(v___f_977_, 2, v___f_976_);
v___x_978_ = lean_unsigned_to_nat(0u);
v___x_979_ = 0;
v___x_980_ = lean_st_ref_get(v_finished_975_);
lean_dec(v_finished_975_);
v___x_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
v___x_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
v___x_983_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_978_, v___x_979_, v___x_982_, v___f_977_);
return v___x_983_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2___boxed(lean_object* v_pendingProducer_984_, lean_object* v_closed_985_, lean_object* v_knownSize_986_, lean_object* v_pendingIncompleteChunk_987_, lean_object* v_closeError_988_, lean_object* v_interestWaiter_989_, lean_object* v_pendingConsumer_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
uint8_t v_closed_boxed_993_; lean_object* v_res_994_; 
v_closed_boxed_993_ = lean_unbox(v_closed_985_);
v_res_994_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2(v_pendingProducer_984_, v_closed_boxed_993_, v_knownSize_986_, v_pendingIncompleteChunk_987_, v_closeError_988_, v_interestWaiter_989_, v_pendingConsumer_990_, v___y_991_);
lean_dec(v___y_991_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3(lean_object* v___f_995_, lean_object* v___y_996_, lean_object* v_x_997_){
_start:
{
if (lean_obj_tag(v_x_997_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1007_; 
lean_dec_ref(v___f_995_);
v_a_999_ = lean_ctor_get(v_x_997_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v_x_997_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1001_ = v_x_997_;
v_isShared_1002_ = v_isSharedCheck_1007_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v_x_997_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1007_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
lean_object* v___x_1005_; 
v___x_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
return v___x_1005_;
}
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1009_; 
v_a_1008_ = lean_ctor_get(v_x_997_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v_x_997_, 1);
lean_inc(v___y_996_);
v___x_1009_ = lean_apply_3(v___f_995_, v_a_1008_, v___y_996_, lean_box(0));
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3___boxed(lean_object* v___f_1010_, lean_object* v___y_1011_, lean_object* v_x_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3(v___f_1010_, v___y_1011_, v_x_1012_);
lean_dec(v___y_1011_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5(lean_object* v___f_1015_, lean_object* v_a_1016_, lean_object* v_x_1017_){
_start:
{
if (lean_obj_tag(v_x_1017_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1027_; 
lean_dec_ref(v___f_1015_);
v_a_1019_ = lean_ctor_get(v_x_1017_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v_x_1017_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1021_ = v_x_1017_;
v_isShared_1022_ = v_isSharedCheck_1027_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v_x_1017_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1027_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1025_; 
v___x_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
return v___x_1025_;
}
}
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1029_; 
v_a_1028_ = lean_ctor_get(v_x_1017_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v_x_1017_, 1);
lean_inc(v_a_1016_);
v___x_1029_ = lean_apply_3(v___f_1015_, v_a_1028_, v_a_1016_, lean_box(0));
return v___x_1029_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5___boxed(lean_object* v___f_1030_, lean_object* v_a_1031_, lean_object* v_x_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5(v___f_1030_, v_a_1031_, v_x_1032_);
lean_dec(v_a_1031_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7(lean_object* v_pendingConsumer_1039_, lean_object* v___f_1040_, lean_object* v___f_1041_, lean_object* v_x_1042_){
_start:
{
if (lean_obj_tag(v_x_1042_) == 0)
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1052_; 
lean_dec_ref(v___f_1041_);
lean_dec_ref(v___f_1040_);
lean_dec(v_pendingConsumer_1039_);
v_a_1044_ = lean_ctor_get(v_x_1042_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v_x_1042_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1046_ = v_x_1042_;
v_isShared_1047_ = v_isSharedCheck_1052_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v_x_1042_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1052_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1049_; 
if (v_isShared_1047_ == 0)
{
v___x_1049_ = v___x_1046_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1044_);
v___x_1049_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1049_);
return v___x_1050_;
}
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1069_; 
v_a_1053_ = lean_ctor_get(v_x_1042_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_x_1042_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1055_ = v_x_1042_;
v_isShared_1056_ = v_isSharedCheck_1069_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v_x_1042_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1069_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
uint8_t v___x_1057_; 
v___x_1057_ = lean_unbox(v_a_1053_);
if (v___x_1057_ == 0)
{
lean_object* v___x_1058_; lean_object* v___x_1060_; 
lean_dec_ref(v___f_1041_);
v___x_1058_ = lean_unsigned_to_nat(0u);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v_pendingConsumer_1039_);
v___x_1060_ = v___x_1055_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_pendingConsumer_1039_);
v___x_1060_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
lean_object* v___x_1061_; uint8_t v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1060_);
v___x_1062_ = lean_unbox(v_a_1053_);
lean_dec(v_a_1053_);
v___x_1063_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1058_, v___x_1062_, v___x_1061_, v___f_1040_);
return v___x_1063_;
}
}
else
{
lean_object* v___x_1065_; uint8_t v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_del_object(v___x_1055_);
lean_dec(v_a_1053_);
lean_dec_ref(v___f_1040_);
lean_dec(v_pendingConsumer_1039_);
v___x_1065_ = lean_unsigned_to_nat(0u);
v___x_1066_ = 0;
v___x_1067_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1));
v___x_1068_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1065_, v___x_1066_, v___x_1067_, v___f_1041_);
return v___x_1068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___boxed(lean_object* v_pendingConsumer_1070_, lean_object* v___f_1071_, lean_object* v___f_1072_, lean_object* v_x_1073_, lean_object* v___y_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7(v_pendingConsumer_1070_, v___f_1071_, v___f_1072_, v_x_1073_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6(lean_object* v_a_1076_, lean_object* v_x_1077_){
_start:
{
if (lean_obj_tag(v_x_1077_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1087_; 
v_a_1079_ = lean_ctor_get(v_x_1077_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_x_1077_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1081_ = v_x_1077_;
v_isShared_1082_ = v_isSharedCheck_1087_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v_x_1077_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1087_;
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
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
lean_object* v___x_1085_; 
v___x_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
return v___x_1085_;
}
}
}
else
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1128_; 
v_a_1088_ = lean_ctor_get(v_x_1077_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_x_1077_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1090_ = v_x_1077_;
v_isShared_1091_ = v_isSharedCheck_1128_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v_x_1077_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1128_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v_pendingProducer_1092_; lean_object* v_pendingConsumer_1093_; lean_object* v_interestWaiter_1094_; uint8_t v_closed_1095_; lean_object* v_knownSize_1096_; lean_object* v_pendingIncompleteChunk_1097_; lean_object* v_closeError_1098_; lean_object* v___x_1099_; lean_object* v___f_1100_; lean_object* v___y_1102_; 
v_pendingProducer_1092_ = lean_ctor_get(v_a_1088_, 0);
lean_inc(v_pendingProducer_1092_);
v_pendingConsumer_1093_ = lean_ctor_get(v_a_1088_, 1);
lean_inc(v_pendingConsumer_1093_);
v_interestWaiter_1094_ = lean_ctor_get(v_a_1088_, 2);
lean_inc(v_interestWaiter_1094_);
v_closed_1095_ = lean_ctor_get_uint8(v_a_1088_, sizeof(void*)*6);
v_knownSize_1096_ = lean_ctor_get(v_a_1088_, 3);
lean_inc(v_knownSize_1096_);
v_pendingIncompleteChunk_1097_ = lean_ctor_get(v_a_1088_, 4);
lean_inc(v_pendingIncompleteChunk_1097_);
v_closeError_1098_ = lean_ctor_get(v_a_1088_, 5);
lean_inc(v_closeError_1098_);
lean_dec(v_a_1088_);
v___x_1099_ = lean_box(v_closed_1095_);
v___f_1100_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2___boxed), 9, 6);
lean_closure_set(v___f_1100_, 0, v_pendingProducer_1092_);
lean_closure_set(v___f_1100_, 1, v___x_1099_);
lean_closure_set(v___f_1100_, 2, v_knownSize_1096_);
lean_closure_set(v___f_1100_, 3, v_pendingIncompleteChunk_1097_);
lean_closure_set(v___f_1100_, 4, v_closeError_1098_);
lean_closure_set(v___f_1100_, 5, v_interestWaiter_1094_);
if (lean_obj_tag(v_pendingConsumer_1093_) == 1)
{
lean_object* v_val_1111_; 
v_val_1111_ = lean_ctor_get(v_pendingConsumer_1093_, 0);
lean_inc(v_val_1111_);
if (lean_obj_tag(v_val_1111_) == 1)
{
lean_object* v_finished_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1127_; 
lean_del_object(v___x_1090_);
v_finished_1112_ = lean_ctor_get(v_val_1111_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v_val_1111_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1114_ = v_val_1111_;
v_isShared_1115_ = v_isSharedCheck_1127_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_finished_1112_);
lean_dec(v_val_1111_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1127_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v_finished_1116_; lean_object* v___f_1117_; lean_object* v___f_1118_; lean_object* v___x_1119_; uint8_t v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1123_; 
v_finished_1116_ = lean_ctor_get(v_finished_1112_, 0);
lean_inc(v_finished_1116_);
lean_dec_ref(v_finished_1112_);
lean_inc(v_a_1076_);
v___f_1117_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5___boxed), 4, 2);
lean_closure_set(v___f_1117_, 0, v___f_1100_);
lean_closure_set(v___f_1117_, 1, v_a_1076_);
lean_inc_ref(v___f_1117_);
v___f_1118_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___boxed), 5, 3);
lean_closure_set(v___f_1118_, 0, v_pendingConsumer_1093_);
lean_closure_set(v___f_1118_, 1, v___f_1117_);
lean_closure_set(v___f_1118_, 2, v___f_1117_);
v___x_1119_ = lean_unsigned_to_nat(0u);
v___x_1120_ = 0;
v___x_1121_ = lean_st_ref_get(v_finished_1116_);
lean_dec(v_finished_1116_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 0, v___x_1121_);
v___x_1123_ = v___x_1114_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1121_);
v___x_1123_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
v___x_1125_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1119_, v___x_1120_, v___x_1124_, v___f_1118_);
return v___x_1125_;
}
}
}
else
{
lean_dec(v_val_1111_);
v___y_1102_ = v_a_1076_;
goto v___jp_1101_;
}
}
else
{
v___y_1102_ = v_a_1076_;
goto v___jp_1101_;
}
v___jp_1101_:
{
lean_object* v___f_1103_; lean_object* v___x_1104_; uint8_t v___x_1105_; lean_object* v___x_1107_; 
lean_inc(v___y_1102_);
v___f_1103_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1103_, 0, v___f_1100_);
lean_closure_set(v___f_1103_, 1, v___y_1102_);
v___x_1104_ = lean_unsigned_to_nat(0u);
v___x_1105_ = 0;
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 0, v_pendingConsumer_1093_);
v___x_1107_ = v___x_1090_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_pendingConsumer_1093_);
v___x_1107_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1107_);
v___x_1109_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1104_, v___x_1105_, v___x_1108_, v___f_1103_);
return v___x_1109_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6___boxed(lean_object* v_a_1129_, lean_object* v_x_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6(v_a_1129_, v_x_1130_);
lean_dec(v_a_1129_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(lean_object* v_a_1133_){
_start:
{
lean_object* v___f_1135_; lean_object* v___x_1136_; uint8_t v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
lean_inc(v_a_1133_);
v___f_1135_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6___boxed), 3, 1);
lean_closure_set(v___f_1135_, 0, v_a_1133_);
v___x_1136_ = lean_unsigned_to_nat(0u);
v___x_1137_ = 0;
v___x_1138_ = lean_st_ref_get(v_a_1133_);
v___x_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
v___x_1140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1139_);
v___x_1141_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1136_, v___x_1137_, v___x_1140_, v___f_1135_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___boxed(lean_object* v_a_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v_a_1142_);
lean_dec(v_a_1142_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__0(lean_object* v___y_1145_){
_start:
{
if (lean_obj_tag(v___y_1145_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
v_a_1146_ = lean_ctor_get(v___y_1145_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___y_1145_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___y_1145_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___y_1145_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1162_; 
v_a_1154_ = lean_ctor_get(v___y_1145_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___y_1145_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1156_ = v___y_1145_;
v_isShared_1157_ = v_isSharedCheck_1162_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___y_1145_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1162_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v_fst_1158_; lean_object* v___x_1160_; 
v_fst_1158_ = lean_ctor_get(v_a_1154_, 0);
lean_inc(v_fst_1158_);
lean_dec(v_a_1154_);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 0, v_fst_1158_);
v___x_1160_ = v___x_1156_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_fst_1158_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
return v___x_1160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1(lean_object* v_mutex_1163_, lean_object* v_x_1164_){
_start:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1166_ = lean_io_basemutex_unlock(v_mutex_1163_);
v___x_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1166_);
v___x_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1___boxed(lean_object* v_mutex_1169_, lean_object* v_x_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1(v_mutex_1169_, v_x_1170_);
lean_dec(v_x_1170_);
lean_dec(v_mutex_1169_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2(lean_object* v_k_1173_, lean_object* v_ref_1174_, lean_object* v_x_1175_){
_start:
{
if (lean_obj_tag(v_x_1175_) == 0)
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1185_; 
lean_dec(v_ref_1174_);
lean_dec_ref(v_k_1173_);
v_a_1177_ = lean_ctor_get(v_x_1175_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v_x_1175_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1179_ = v_x_1175_;
v_isShared_1180_ = v_isSharedCheck_1185_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v_x_1175_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1185_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1177_);
v___x_1182_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
lean_object* v___x_1183_; 
v___x_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1182_);
return v___x_1183_;
}
}
}
else
{
lean_object* v___x_1186_; 
lean_dec_ref_known(v_x_1175_, 1);
v___x_1186_ = lean_apply_2(v_k_1173_, v_ref_1174_, lean_box(0));
return v___x_1186_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2___boxed(lean_object* v_k_1187_, lean_object* v_ref_1188_, lean_object* v_x_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2(v_k_1187_, v_ref_1188_, v_x_1189_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3(lean_object* v_mutex_1192_, lean_object* v___f_1193_){
_start:
{
lean_object* v___x_1195_; uint8_t v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1195_ = lean_unsigned_to_nat(0u);
v___x_1196_ = 0;
v___x_1197_ = lean_io_basemutex_lock(v_mutex_1192_);
v___x_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
v___x_1200_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1195_, v___x_1196_, v___x_1199_, v___f_1193_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3___boxed(lean_object* v_mutex_1201_, lean_object* v___f_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3(v_mutex_1201_, v___f_1202_);
lean_dec(v_mutex_1201_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(lean_object* v_mutex_1206_, lean_object* v_k_1207_){
_start:
{
lean_object* v_ref_1209_; lean_object* v_mutex_1210_; lean_object* v___f_1211_; lean_object* v___f_1212_; lean_object* v___f_1213_; lean_object* v___f_1214_; lean_object* v___x_1215_; uint8_t v___x_1216_; lean_object* v___x_1217_; lean_object* v___y_1219_; 
v_ref_1209_ = lean_ctor_get(v_mutex_1206_, 0);
lean_inc(v_ref_1209_);
v_mutex_1210_ = lean_ctor_get(v_mutex_1206_, 1);
lean_inc_n(v_mutex_1210_, 2);
lean_dec_ref(v_mutex_1206_);
v___f_1211_ = ((lean_object*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0));
v___f_1212_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1212_, 0, v_mutex_1210_);
v___f_1213_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1213_, 0, v_k_1207_);
lean_closure_set(v___f_1213_, 1, v_ref_1209_);
v___f_1214_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_1214_, 0, v_mutex_1210_);
lean_closure_set(v___f_1214_, 1, v___f_1213_);
v___x_1215_ = lean_unsigned_to_nat(0u);
v___x_1216_ = 0;
v___x_1217_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_1214_, v___f_1212_, v___x_1215_, v___x_1216_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1221_; 
v_a_1221_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_a_1221_);
lean_dec_ref_known(v___x_1217_, 1);
if (lean_obj_tag(v_a_1221_) == 0)
{
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
v_a_1222_ = lean_ctor_get(v_a_1221_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v_a_1221_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v_a_1221_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v_a_1221_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
v___y_1219_ = v___x_1227_;
goto v___jp_1218_;
}
}
}
else
{
lean_object* v_a_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1238_; 
v_a_1230_ = lean_ctor_get(v_a_1221_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_a_1221_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1232_ = v_a_1221_;
v_isShared_1233_ = v_isSharedCheck_1238_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_a_1230_);
lean_dec(v_a_1221_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1238_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v_fst_1234_; lean_object* v___x_1236_; 
v_fst_1234_ = lean_ctor_get(v_a_1230_, 0);
lean_inc(v_fst_1234_);
lean_dec(v_a_1230_);
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 0, v_fst_1234_);
v___x_1236_ = v___x_1232_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_fst_1234_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
v___y_1219_ = v___x_1236_;
goto v___jp_1218_;
}
}
}
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1247_; 
v_a_1239_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1241_ = v___x_1217_;
v_isShared_1242_ = v_isSharedCheck_1247_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1217_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1247_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1243_; lean_object* v___x_1245_; 
v___x_1243_ = lean_task_map(v___f_1211_, v_a_1239_, v___x_1215_, v___x_1216_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v___x_1243_);
v___x_1245_ = v___x_1241_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1243_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
v___jp_1218_:
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___y_1219_);
return v___x_1220_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___boxed(lean_object* v_mutex_1248_, lean_object* v_k_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_mutex_1248_, v_k_1249_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2(lean_object* v_00_u03b1_1252_, lean_object* v_00_u03b2_1253_, lean_object* v_mutex_1254_, lean_object* v_k_1255_){
_start:
{
lean_object* v___x_1257_; 
v___x_1257_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_mutex_1254_, v_k_1255_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed(lean_object* v_00_u03b1_1258_, lean_object* v_00_u03b2_1259_, lean_object* v_mutex_1260_, lean_object* v_k_1261_, lean_object* v___y_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2(v_00_u03b1_1258_, v_00_u03b2_1259_, v_mutex_1260_, v_k_1261_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0(lean_object* v_x_1264_){
_start:
{
if (lean_obj_tag(v_x_1264_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1274_; 
v_a_1266_ = lean_ctor_get(v_x_1264_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_x_1264_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1268_ = v_x_1264_;
v_isShared_1269_ = v_isSharedCheck_1274_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v_x_1264_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1274_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
lean_object* v___x_1272_; 
v___x_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
return v___x_1272_;
}
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1276_; 
v_a_1275_ = lean_ctor_get(v_x_1264_, 0);
lean_inc(v_a_1275_);
lean_dec_ref_known(v_x_1264_, 1);
v___x_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1276_, 0, v_a_1275_);
return v___x_1276_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0___boxed(lean_object* v_x_1277_, lean_object* v___y_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_Std_Http_Body_Stream_tryRecv___lam__0(v_x_1277_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1(lean_object* v_a_1280_, lean_object* v___f_1281_, lean_object* v_x_1282_){
_start:
{
if (lean_obj_tag(v_x_1282_) == 0)
{
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1292_; 
lean_dec_ref(v___f_1281_);
v_a_1284_ = lean_ctor_get(v_x_1282_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v_x_1282_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1286_ = v_x_1282_;
v_isShared_1287_ = v_isSharedCheck_1292_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v_x_1282_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1292_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v___x_1289_; 
if (v_isShared_1287_ == 0)
{
v___x_1289_ = v___x_1286_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_a_1284_);
v___x_1289_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
lean_object* v___x_1290_; 
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
return v___x_1290_;
}
}
}
else
{
lean_object* v_a_1293_; 
v_a_1293_ = lean_ctor_get(v_x_1282_, 0);
lean_inc(v_a_1293_);
if (lean_obj_tag(v_a_1293_) == 1)
{
lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1301_; 
lean_dec_ref(v___f_1281_);
v_isSharedCheck_1301_ = !lean_is_exclusive(v_a_1293_);
if (v_isSharedCheck_1301_ == 0)
{
lean_object* v_unused_1302_; 
v_unused_1302_ = lean_ctor_get(v_a_1293_, 0);
lean_dec(v_unused_1302_);
v___x_1295_ = v_a_1293_;
v_isShared_1296_ = v_isSharedCheck_1301_;
goto v_resetjp_1294_;
}
else
{
lean_dec(v_a_1293_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1301_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 0, v_x_1282_);
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_x_1282_);
v___x_1298_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
return v___x_1299_;
}
}
}
else
{
lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1314_; 
lean_dec(v_a_1293_);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_x_1282_);
if (v_isSharedCheck_1314_ == 0)
{
lean_object* v_unused_1315_; 
v_unused_1315_ = lean_ctor_get(v_x_1282_, 0);
lean_dec(v_unused_1315_);
v___x_1304_ = v_x_1282_;
v_isShared_1305_ = v_isSharedCheck_1314_;
goto v_resetjp_1303_;
}
else
{
lean_dec(v_x_1282_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1314_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1310_; 
v___x_1306_ = lean_unsigned_to_nat(0u);
v___x_1307_ = 0;
v___x_1308_ = lean_st_ref_get(v_a_1280_);
if (v_isShared_1305_ == 0)
{
lean_ctor_set(v___x_1304_, 0, v___x_1308_);
v___x_1310_ = v___x_1304_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
v___x_1312_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1306_, v___x_1307_, v___x_1311_, v___f_1281_);
return v___x_1312_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1___boxed(lean_object* v_a_1316_, lean_object* v___f_1317_, lean_object* v_x_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1(v_a_1316_, v___f_1317_, v_x_1318_);
lean_dec(v_a_1316_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0(lean_object* v_x_1325_){
_start:
{
if (lean_obj_tag(v_x_1325_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1335_; 
v_a_1327_ = lean_ctor_get(v_x_1325_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v_x_1325_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1329_ = v_x_1325_;
v_isShared_1330_ = v_isSharedCheck_1335_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v_x_1325_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1335_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1327_);
v___x_1332_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; 
v___x_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
return v___x_1333_;
}
}
}
else
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1354_; 
v_a_1336_ = lean_ctor_get(v_x_1325_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v_x_1325_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1338_ = v_x_1325_;
v_isShared_1339_ = v_isSharedCheck_1354_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v_x_1325_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1354_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v_closeError_1340_; 
v_closeError_1340_ = lean_ctor_get(v_a_1336_, 5);
lean_inc(v_closeError_1340_);
lean_dec(v_a_1336_);
if (lean_obj_tag(v_closeError_1340_) == 1)
{
lean_object* v_val_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1352_; 
v_val_1341_ = lean_ctor_get(v_closeError_1340_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_closeError_1340_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1343_ = v_closeError_1340_;
v_isShared_1344_ = v_isSharedCheck_1352_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_val_1341_);
lean_dec(v_closeError_1340_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1352_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1346_; 
if (v_isShared_1339_ == 0)
{
lean_ctor_set_tag(v___x_1338_, 0);
lean_ctor_set(v___x_1338_, 0, v_val_1341_);
v___x_1346_ = v___x_1338_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_val_1341_);
v___x_1346_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
lean_object* v___x_1348_; 
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 0, v___x_1346_);
v___x_1348_ = v___x_1343_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1346_);
v___x_1348_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
return v___x_1349_;
}
}
}
}
else
{
lean_object* v___x_1353_; 
lean_dec(v_closeError_1340_);
lean_del_object(v___x_1338_);
v___x_1353_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1));
return v___x_1353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___boxed(lean_object* v_x_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0(v_x_1355_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1(lean_object* v_done_1358_, lean_object* v___f_1359_, lean_object* v_x_1360_){
_start:
{
if (lean_obj_tag(v_x_1360_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1364_; uint8_t v_isShared_1365_; uint8_t v_isSharedCheck_1370_; 
lean_dec_ref(v___f_1359_);
v_a_1362_ = lean_ctor_get(v_x_1360_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v_x_1360_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1364_ = v_x_1360_;
v_isShared_1365_ = v_isSharedCheck_1370_;
goto v_resetjp_1363_;
}
else
{
lean_inc(v_a_1362_);
lean_dec(v_x_1360_);
v___x_1364_ = lean_box(0);
v_isShared_1365_ = v_isSharedCheck_1370_;
goto v_resetjp_1363_;
}
v_resetjp_1363_:
{
lean_object* v___x_1367_; 
if (v_isShared_1365_ == 0)
{
v___x_1367_ = v___x_1364_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1362_);
v___x_1367_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
lean_object* v___x_1368_; 
v___x_1368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
return v___x_1368_;
}
}
}
else
{
uint8_t v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
lean_dec_ref_known(v_x_1360_, 1);
v___x_1371_ = 1;
v___x_1372_ = lean_unsigned_to_nat(0u);
v___x_1373_ = 0;
v___x_1374_ = lean_box(v___x_1371_);
v___x_1375_ = lean_io_promise_resolve(v___x_1374_, v_done_1358_);
v___x_1376_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1377_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1372_, v___x_1373_, v___x_1376_, v___f_1359_);
return v___x_1377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1___boxed(lean_object* v_done_1378_, lean_object* v___f_1379_, lean_object* v_x_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1(v_done_1378_, v___f_1379_, v_x_1380_);
lean_dec(v_done_1378_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0(lean_object* v_chunk_1383_, lean_object* v_x_1384_){
_start:
{
if (lean_obj_tag(v_x_1384_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1394_; 
lean_dec_ref(v_chunk_1383_);
v_a_1386_ = lean_ctor_get(v_x_1384_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v_x_1384_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1388_ = v_x_1384_;
v_isShared_1389_ = v_isSharedCheck_1394_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v_x_1384_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1394_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_a_1386_);
v___x_1391_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
lean_object* v___x_1392_; 
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
return v___x_1392_;
}
}
}
else
{
lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1403_; 
v_isSharedCheck_1403_ = !lean_is_exclusive(v_x_1384_);
if (v_isSharedCheck_1403_ == 0)
{
lean_object* v_unused_1404_; 
v_unused_1404_ = lean_ctor_get(v_x_1384_, 0);
lean_dec(v_unused_1404_);
v___x_1396_ = v_x_1384_;
v_isShared_1397_ = v_isSharedCheck_1403_;
goto v_resetjp_1395_;
}
else
{
lean_dec(v_x_1384_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1403_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; lean_object* v___x_1400_; 
v___x_1398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1398_, 0, v_chunk_1383_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v___x_1398_);
v___x_1400_ = v___x_1396_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
lean_object* v___x_1401_; 
v___x_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
return v___x_1401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0___boxed(lean_object* v_chunk_1405_, lean_object* v_x_1406_, lean_object* v___y_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0(v_chunk_1405_, v_x_1406_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2(lean_object* v_a_1411_, lean_object* v_x_1412_){
_start:
{
if (lean_obj_tag(v_x_1412_) == 0)
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1422_; 
v_a_1414_ = lean_ctor_get(v_x_1412_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v_x_1412_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1416_ = v_x_1412_;
v_isShared_1417_ = v_isSharedCheck_1422_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v_x_1412_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1422_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
lean_object* v___x_1420_; 
v___x_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
return v___x_1420_;
}
}
}
else
{
lean_object* v_a_1423_; lean_object* v_pendingProducer_1424_; 
v_a_1423_ = lean_ctor_get(v_x_1412_, 0);
lean_inc(v_a_1423_);
lean_dec_ref_known(v_x_1412_, 1);
v_pendingProducer_1424_ = lean_ctor_get(v_a_1423_, 0);
if (lean_obj_tag(v_pendingProducer_1424_) == 1)
{
lean_object* v_val_1425_; lean_object* v_pendingConsumer_1426_; lean_object* v_interestWaiter_1427_; uint8_t v_closed_1428_; lean_object* v_knownSize_1429_; lean_object* v_pendingIncompleteChunk_1430_; lean_object* v_closeError_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1449_; 
v_val_1425_ = lean_ctor_get(v_pendingProducer_1424_, 0);
lean_inc(v_val_1425_);
v_pendingConsumer_1426_ = lean_ctor_get(v_a_1423_, 1);
v_interestWaiter_1427_ = lean_ctor_get(v_a_1423_, 2);
v_closed_1428_ = lean_ctor_get_uint8(v_a_1423_, sizeof(void*)*6);
v_knownSize_1429_ = lean_ctor_get(v_a_1423_, 3);
v_pendingIncompleteChunk_1430_ = lean_ctor_get(v_a_1423_, 4);
v_closeError_1431_ = lean_ctor_get(v_a_1423_, 5);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_a_1423_);
if (v_isSharedCheck_1449_ == 0)
{
lean_object* v_unused_1450_; 
v_unused_1450_ = lean_ctor_get(v_a_1423_, 0);
lean_dec(v_unused_1450_);
v___x_1433_ = v_a_1423_;
v_isShared_1434_ = v_isSharedCheck_1449_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_closeError_1431_);
lean_inc(v_pendingIncompleteChunk_1430_);
lean_inc(v_knownSize_1429_);
lean_inc(v_interestWaiter_1427_);
lean_inc(v_pendingConsumer_1426_);
lean_dec(v_a_1423_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1449_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v_chunk_1435_; lean_object* v_done_1436_; lean_object* v___x_1437_; lean_object* v___f_1438_; lean_object* v___f_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v_chunk_1435_ = lean_ctor_get(v_val_1425_, 0);
lean_inc_ref_n(v_chunk_1435_, 2);
v_done_1436_ = lean_ctor_get(v_val_1425_, 1);
lean_inc(v_done_1436_);
lean_dec(v_val_1425_);
v___x_1437_ = lean_box(0);
v___f_1438_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1438_, 0, v_chunk_1435_);
v___f_1439_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1439_, 0, v_done_1436_);
lean_closure_set(v___f_1439_, 1, v___f_1438_);
v___x_1440_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_1429_, v_chunk_1435_);
lean_dec_ref(v_chunk_1435_);
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 3, v___x_1440_);
lean_ctor_set(v___x_1433_, 0, v___x_1437_);
v___x_1442_ = v___x_1433_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1437_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_pendingConsumer_1426_);
lean_ctor_set(v_reuseFailAlloc_1448_, 2, v_interestWaiter_1427_);
lean_ctor_set(v_reuseFailAlloc_1448_, 3, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1448_, 4, v_pendingIncompleteChunk_1430_);
lean_ctor_set(v_reuseFailAlloc_1448_, 5, v_closeError_1431_);
lean_ctor_set_uint8(v_reuseFailAlloc_1448_, sizeof(void*)*6, v_closed_1428_);
v___x_1442_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___x_1443_; uint8_t v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1443_ = lean_unsigned_to_nat(0u);
v___x_1444_ = 0;
v___x_1445_ = lean_st_ref_swap(v_a_1411_, v___x_1442_);
lean_dec(v___x_1445_);
v___x_1446_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1447_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1443_, v___x_1444_, v___x_1446_, v___f_1439_);
return v___x_1447_;
}
}
}
else
{
lean_object* v___x_1451_; 
lean_dec(v_a_1423_);
v___x_1451_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0));
return v___x_1451_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___boxed(lean_object* v_a_1452_, lean_object* v_x_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2(v_a_1452_, v_x_1453_);
lean_dec(v_a_1452_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(lean_object* v_a_1456_){
_start:
{
lean_object* v___f_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
lean_inc(v_a_1456_);
v___f_1458_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1458_, 0, v_a_1456_);
v___x_1459_ = lean_unsigned_to_nat(0u);
v___x_1460_ = 0;
v___x_1461_ = lean_st_ref_get(v_a_1456_);
v___x_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
v___x_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1462_);
v___x_1464_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1459_, v___x_1460_, v___x_1463_, v___f_1458_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___boxed(lean_object* v_a_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(v_a_1465_);
lean_dec(v_a_1465_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(lean_object* v_a_1469_){
_start:
{
lean_object* v___f_1471_; lean_object* v___f_1472_; lean_object* v___x_1473_; uint8_t v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___f_1471_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0));
lean_inc(v_a_1469_);
v___f_1472_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1472_, 0, v_a_1469_);
lean_closure_set(v___f_1472_, 1, v___f_1471_);
v___x_1473_ = lean_unsigned_to_nat(0u);
v___x_1474_ = 0;
v___x_1475_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(v_a_1469_);
v___x_1476_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1473_, v___x_1474_, v___x_1475_, v___f_1472_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___boxed(lean_object* v_a_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v_a_1477_);
lean_dec(v_a_1477_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1(lean_object* v___y_1480_, lean_object* v___f_1481_, lean_object* v_x_1482_){
_start:
{
if (lean_obj_tag(v_x_1482_) == 0)
{
lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1492_; 
lean_dec_ref(v___f_1481_);
v_a_1484_ = lean_ctor_get(v_x_1482_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v_x_1482_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1486_ = v_x_1482_;
v_isShared_1487_ = v_isSharedCheck_1492_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v_x_1482_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1492_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1489_; 
if (v_isShared_1487_ == 0)
{
v___x_1489_ = v___x_1486_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1484_);
v___x_1489_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
lean_object* v___x_1490_; 
v___x_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
return v___x_1490_;
}
}
}
else
{
lean_object* v___x_1493_; uint8_t v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
lean_dec_ref_known(v_x_1482_, 1);
v___x_1493_ = lean_unsigned_to_nat(0u);
v___x_1494_ = 0;
v___x_1495_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v___y_1480_);
v___x_1496_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1493_, v___x_1494_, v___x_1495_, v___f_1481_);
return v___x_1496_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1___boxed(lean_object* v___y_1497_, lean_object* v___f_1498_, lean_object* v_x_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Std_Http_Body_Stream_tryRecv___lam__1(v___y_1497_, v___f_1498_, v_x_1499_);
lean_dec(v___y_1497_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2(lean_object* v___f_1502_, lean_object* v___y_1503_){
_start:
{
lean_object* v___f_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
lean_inc(v___y_1503_);
v___f_1505_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_tryRecv___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1505_, 0, v___y_1503_);
lean_closure_set(v___f_1505_, 1, v___f_1502_);
v___x_1506_ = lean_unsigned_to_nat(0u);
v___x_1507_ = 0;
v___x_1508_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_1503_);
v___x_1509_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1506_, v___x_1507_, v___x_1508_, v___f_1505_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2___boxed(lean_object* v___f_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Std_Http_Body_Stream_tryRecv___lam__2(v___f_1510_, v___y_1511_);
lean_dec(v___y_1511_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv(lean_object* v_stream_1517_){
_start:
{
lean_object* v___f_1519_; lean_object* v___x_1520_; 
v___f_1519_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecv___closed__1));
v___x_1520_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_1517_, v___f_1519_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___boxed(lean_object* v_stream_1521_, lean_object* v_a_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Std_Http_Body_Stream_tryRecv(v_stream_1521_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0(lean_object* v_x_1524_){
_start:
{
uint8_t v___y_1527_; 
if (lean_obj_tag(v_x_1524_) == 0)
{
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1539_; 
v_a_1531_ = lean_ctor_get(v_x_1524_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v_x_1524_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1533_ = v_x_1524_;
v_isShared_1534_ = v_isSharedCheck_1539_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v_x_1524_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1539_;
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
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1531_);
v___x_1536_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
lean_object* v___x_1537_; 
v___x_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1536_);
return v___x_1537_;
}
}
}
else
{
lean_object* v_a_1540_; lean_object* v_pendingProducer_1541_; 
v_a_1540_ = lean_ctor_get(v_x_1524_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v_x_1524_, 1);
v_pendingProducer_1541_ = lean_ctor_get(v_a_1540_, 0);
if (lean_obj_tag(v_pendingProducer_1541_) == 0)
{
uint8_t v_closed_1542_; 
v_closed_1542_ = lean_ctor_get_uint8(v_a_1540_, sizeof(void*)*6);
lean_dec(v_a_1540_);
v___y_1527_ = v_closed_1542_;
goto v___jp_1526_;
}
else
{
uint8_t v___x_1543_; 
lean_dec(v_a_1540_);
v___x_1543_ = 1;
v___y_1527_ = v___x_1543_;
goto v___jp_1526_;
}
}
v___jp_1526_:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1528_ = lean_box(v___y_1527_);
v___x_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1528_);
v___x_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
return v___x_1530_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0___boxed(lean_object* v_x_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0(v_x_1544_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(lean_object* v_a_1548_){
_start:
{
lean_object* v___f_1550_; lean_object* v___x_1551_; uint8_t v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___f_1550_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0));
v___x_1551_ = lean_unsigned_to_nat(0u);
v___x_1552_ = 0;
v___x_1553_ = lean_st_ref_get(v_a_1548_);
v___x_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
v___x_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
v___x_1556_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1551_, v___x_1552_, v___x_1555_, v___f_1550_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___boxed(lean_object* v_a_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(v_a_1557_);
lean_dec(v_a_1557_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0(lean_object* v_x_1560_){
_start:
{
if (lean_obj_tag(v_x_1560_) == 0)
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1570_; 
v_a_1562_ = lean_ctor_get(v_x_1560_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v_x_1560_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1564_ = v_x_1560_;
v_isShared_1565_ = v_isSharedCheck_1570_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v_x_1560_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1570_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1562_);
v___x_1567_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1567_);
return v___x_1568_;
}
}
}
else
{
lean_object* v_a_1571_; 
v_a_1571_ = lean_ctor_get(v_x_1560_, 0);
lean_inc(v_a_1571_);
lean_dec_ref_known(v_x_1560_, 1);
if (lean_obj_tag(v_a_1571_) == 0)
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1580_; 
v_a_1572_ = lean_ctor_get(v_a_1571_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v_a_1571_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1574_ = v_a_1571_;
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v_a_1571_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1572_);
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
else
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1590_; 
v_a_1581_ = lean_ctor_get(v_a_1571_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_a_1571_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1583_ = v_a_1571_;
v_isShared_1584_ = v_isSharedCheck_1590_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v_a_1571_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1590_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1585_; lean_object* v___x_1587_; 
v___x_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1585_, 0, v_a_1581_);
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v___x_1585_);
v___x_1587_ = v___x_1583_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
return v___x_1588_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0___boxed(lean_object* v_x_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Std_Http_Body_Stream_tryRecvBody___lam__0(v_x_1591_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1(lean_object* v___y_1598_, lean_object* v___f_1599_, lean_object* v_x_1600_){
_start:
{
if (lean_obj_tag(v_x_1600_) == 0)
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1610_; 
lean_dec_ref(v___f_1599_);
v_a_1602_ = lean_ctor_get(v_x_1600_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v_x_1600_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1604_ = v_x_1600_;
v_isShared_1605_ = v_isSharedCheck_1610_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v_x_1600_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1610_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1608_; 
v___x_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
return v___x_1608_;
}
}
}
else
{
lean_object* v_a_1611_; uint8_t v___x_1612_; 
v_a_1611_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_a_1611_);
lean_dec_ref_known(v_x_1600_, 1);
v___x_1612_ = lean_unbox(v_a_1611_);
lean_dec(v_a_1611_);
if (v___x_1612_ == 0)
{
lean_object* v___x_1613_; 
lean_dec_ref(v___f_1599_);
v___x_1613_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1));
return v___x_1613_;
}
else
{
lean_object* v___x_1614_; uint8_t v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1614_ = lean_unsigned_to_nat(0u);
v___x_1615_ = 0;
v___x_1616_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v___y_1598_);
v___x_1617_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1614_, v___x_1615_, v___x_1616_, v___f_1599_);
return v___x_1617_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___boxed(lean_object* v___y_1618_, lean_object* v___f_1619_, lean_object* v_x_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Std_Http_Body_Stream_tryRecvBody___lam__1(v___y_1618_, v___f_1619_, v_x_1620_);
lean_dec(v___y_1618_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2(lean_object* v___y_1623_, lean_object* v___f_1624_, lean_object* v_x_1625_){
_start:
{
if (lean_obj_tag(v_x_1625_) == 0)
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1635_; 
lean_dec_ref(v___f_1624_);
v_a_1627_ = lean_ctor_get(v_x_1625_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_x_1625_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1629_ = v_x_1625_;
v_isShared_1630_ = v_isSharedCheck_1635_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v_x_1625_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1635_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
lean_object* v___x_1633_; 
v___x_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
return v___x_1633_;
}
}
}
else
{
lean_object* v___x_1636_; uint8_t v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_dec_ref_known(v_x_1625_, 1);
v___x_1636_ = lean_unsigned_to_nat(0u);
v___x_1637_ = 0;
v___x_1638_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(v___y_1623_);
v___x_1639_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1636_, v___x_1637_, v___x_1638_, v___f_1624_);
return v___x_1639_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2___boxed(lean_object* v___y_1640_, lean_object* v___f_1641_, lean_object* v_x_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l_Std_Http_Body_Stream_tryRecvBody___lam__2(v___y_1640_, v___f_1641_, v_x_1642_);
lean_dec(v___y_1640_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3(lean_object* v___f_1645_, lean_object* v___y_1646_){
_start:
{
lean_object* v___f_1648_; lean_object* v___f_1649_; lean_object* v___x_1650_; uint8_t v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; 
lean_inc_n(v___y_1646_, 2);
v___f_1648_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_tryRecvBody___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1648_, 0, v___y_1646_);
lean_closure_set(v___f_1648_, 1, v___f_1645_);
v___f_1649_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_tryRecvBody___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1649_, 0, v___y_1646_);
lean_closure_set(v___f_1649_, 1, v___f_1648_);
v___x_1650_ = lean_unsigned_to_nat(0u);
v___x_1651_ = 0;
v___x_1652_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_1646_);
v___x_1653_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1650_, v___x_1651_, v___x_1652_, v___f_1649_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3___boxed(lean_object* v___f_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l_Std_Http_Body_Stream_tryRecvBody___lam__3(v___f_1654_, v___y_1655_);
lean_dec(v___y_1655_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody(lean_object* v_stream_1661_){
_start:
{
lean_object* v___f_1663_; lean_object* v___x_1664_; 
v___f_1663_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecvBody___closed__1));
v___x_1664_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_1661_, v___f_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___boxed(lean_object* v_stream_1665_, lean_object* v_a_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_Std_Http_Body_Stream_tryRecvBody(v_stream_1665_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(lean_object* v_a_1668_){
_start:
{
lean_object* v___x_1670_; lean_object* v_pendingProducer_1671_; lean_object* v_pendingConsumer_1672_; lean_object* v_interestWaiter_1673_; uint8_t v_closed_1674_; lean_object* v_knownSize_1675_; lean_object* v_pendingIncompleteChunk_1676_; lean_object* v_closeError_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1704_; 
v___x_1670_ = lean_st_ref_get(v_a_1668_);
v_pendingProducer_1671_ = lean_ctor_get(v___x_1670_, 0);
v_pendingConsumer_1672_ = lean_ctor_get(v___x_1670_, 1);
v_interestWaiter_1673_ = lean_ctor_get(v___x_1670_, 2);
v_closed_1674_ = lean_ctor_get_uint8(v___x_1670_, sizeof(void*)*6);
v_knownSize_1675_ = lean_ctor_get(v___x_1670_, 3);
v_pendingIncompleteChunk_1676_ = lean_ctor_get(v___x_1670_, 4);
v_closeError_1677_ = lean_ctor_get(v___x_1670_, 5);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1679_ = v___x_1670_;
v_isShared_1680_ = v_isSharedCheck_1704_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_closeError_1677_);
lean_inc(v_pendingIncompleteChunk_1676_);
lean_inc(v_knownSize_1675_);
lean_inc(v_interestWaiter_1673_);
lean_inc(v_pendingConsumer_1672_);
lean_inc(v_pendingProducer_1671_);
lean_dec(v___x_1670_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1704_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___y_1682_; lean_object* v_interestWaiter_1683_; lean_object* v___y_1684_; lean_object* v_pendingConsumer_1691_; lean_object* v___y_1692_; 
if (lean_obj_tag(v_pendingConsumer_1672_) == 1)
{
lean_object* v_val_1698_; 
v_val_1698_ = lean_ctor_get(v_pendingConsumer_1672_, 0);
if (lean_obj_tag(v_val_1698_) == 1)
{
lean_object* v_finished_1699_; lean_object* v_finished_1700_; lean_object* v___x_1701_; uint8_t v___x_1702_; 
v_finished_1699_ = lean_ctor_get(v_val_1698_, 0);
v_finished_1700_ = lean_ctor_get(v_finished_1699_, 0);
v___x_1701_ = lean_st_ref_get(v_finished_1700_);
v___x_1702_ = lean_unbox(v___x_1701_);
lean_dec(v___x_1701_);
if (v___x_1702_ == 0)
{
v_pendingConsumer_1691_ = v_pendingConsumer_1672_;
v___y_1692_ = v_a_1668_;
goto v___jp_1690_;
}
else
{
lean_object* v___x_1703_; 
lean_dec_ref_known(v_pendingConsumer_1672_, 1);
v___x_1703_ = lean_box(0);
v_pendingConsumer_1691_ = v___x_1703_;
v___y_1692_ = v_a_1668_;
goto v___jp_1690_;
}
}
else
{
v_pendingConsumer_1691_ = v_pendingConsumer_1672_;
v___y_1692_ = v_a_1668_;
goto v___jp_1690_;
}
}
else
{
v_pendingConsumer_1691_ = v_pendingConsumer_1672_;
v___y_1692_ = v_a_1668_;
goto v___jp_1690_;
}
v___jp_1681_:
{
lean_object* v___x_1686_; 
if (v_isShared_1680_ == 0)
{
lean_ctor_set(v___x_1679_, 2, v_interestWaiter_1683_);
lean_ctor_set(v___x_1679_, 1, v___y_1682_);
v___x_1686_ = v___x_1679_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_pendingProducer_1671_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v___y_1682_);
lean_ctor_set(v_reuseFailAlloc_1689_, 2, v_interestWaiter_1683_);
lean_ctor_set(v_reuseFailAlloc_1689_, 3, v_knownSize_1675_);
lean_ctor_set(v_reuseFailAlloc_1689_, 4, v_pendingIncompleteChunk_1676_);
lean_ctor_set(v_reuseFailAlloc_1689_, 5, v_closeError_1677_);
lean_ctor_set_uint8(v_reuseFailAlloc_1689_, sizeof(void*)*6, v_closed_1674_);
v___x_1686_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = lean_box(0);
v___x_1688_ = lean_st_ref_swap(v___y_1684_, v___x_1686_);
lean_dec(v___x_1688_);
return v___x_1687_;
}
}
v___jp_1690_:
{
if (lean_obj_tag(v_interestWaiter_1673_) == 0)
{
v___y_1682_ = v_pendingConsumer_1691_;
v_interestWaiter_1683_ = v_interestWaiter_1673_;
v___y_1684_ = v___y_1692_;
goto v___jp_1681_;
}
else
{
lean_object* v_val_1693_; lean_object* v_finished_1694_; lean_object* v___x_1695_; uint8_t v___x_1696_; 
v_val_1693_ = lean_ctor_get(v_interestWaiter_1673_, 0);
v_finished_1694_ = lean_ctor_get(v_val_1693_, 0);
v___x_1695_ = lean_st_ref_get(v_finished_1694_);
v___x_1696_ = lean_unbox(v___x_1695_);
lean_dec(v___x_1695_);
if (v___x_1696_ == 0)
{
v___y_1682_ = v_pendingConsumer_1691_;
v_interestWaiter_1683_ = v_interestWaiter_1673_;
v___y_1684_ = v___y_1692_;
goto v___jp_1681_;
}
else
{
lean_object* v___x_1697_; 
lean_dec_ref_known(v_interestWaiter_1673_, 1);
v___x_1697_ = lean_box(0);
v___y_1682_ = v_pendingConsumer_1691_;
v_interestWaiter_1683_ = v___x_1697_;
v___y_1684_ = v___y_1692_;
goto v___jp_1681_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0___boxed(lean_object* v_a_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(v_a_1705_);
lean_dec(v_a_1705_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(lean_object* v_a_1708_){
_start:
{
lean_object* v___x_1710_; lean_object* v_pendingProducer_1711_; 
v___x_1710_ = lean_st_ref_get(v_a_1708_);
v_pendingProducer_1711_ = lean_ctor_get(v___x_1710_, 0);
lean_inc(v_pendingProducer_1711_);
if (lean_obj_tag(v_pendingProducer_1711_) == 1)
{
lean_object* v_val_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1741_; 
v_val_1712_ = lean_ctor_get(v_pendingProducer_1711_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v_pendingProducer_1711_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1714_ = v_pendingProducer_1711_;
v_isShared_1715_ = v_isSharedCheck_1741_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_val_1712_);
lean_dec(v_pendingProducer_1711_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1741_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v_pendingConsumer_1716_; lean_object* v_interestWaiter_1717_; uint8_t v_closed_1718_; lean_object* v_knownSize_1719_; lean_object* v_pendingIncompleteChunk_1720_; lean_object* v_closeError_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1739_; 
v_pendingConsumer_1716_ = lean_ctor_get(v___x_1710_, 1);
v_interestWaiter_1717_ = lean_ctor_get(v___x_1710_, 2);
v_closed_1718_ = lean_ctor_get_uint8(v___x_1710_, sizeof(void*)*6);
v_knownSize_1719_ = lean_ctor_get(v___x_1710_, 3);
v_pendingIncompleteChunk_1720_ = lean_ctor_get(v___x_1710_, 4);
v_closeError_1721_ = lean_ctor_get(v___x_1710_, 5);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1739_ == 0)
{
lean_object* v_unused_1740_; 
v_unused_1740_ = lean_ctor_get(v___x_1710_, 0);
lean_dec(v_unused_1740_);
v___x_1723_ = v___x_1710_;
v_isShared_1724_ = v_isSharedCheck_1739_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_closeError_1721_);
lean_inc(v_pendingIncompleteChunk_1720_);
lean_inc(v_knownSize_1719_);
lean_inc(v_interestWaiter_1717_);
lean_inc(v_pendingConsumer_1716_);
lean_dec(v___x_1710_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1739_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v_chunk_1725_; lean_object* v_done_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1730_; 
v_chunk_1725_ = lean_ctor_get(v_val_1712_, 0);
lean_inc_ref(v_chunk_1725_);
v_done_1726_ = lean_ctor_get(v_val_1712_, 1);
lean_inc(v_done_1726_);
lean_dec(v_val_1712_);
v___x_1727_ = lean_box(0);
v___x_1728_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_1719_, v_chunk_1725_);
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 3, v___x_1728_);
lean_ctor_set(v___x_1723_, 0, v___x_1727_);
v___x_1730_ = v___x_1723_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___x_1727_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v_pendingConsumer_1716_);
lean_ctor_set(v_reuseFailAlloc_1738_, 2, v_interestWaiter_1717_);
lean_ctor_set(v_reuseFailAlloc_1738_, 3, v___x_1728_);
lean_ctor_set(v_reuseFailAlloc_1738_, 4, v_pendingIncompleteChunk_1720_);
lean_ctor_set(v_reuseFailAlloc_1738_, 5, v_closeError_1721_);
lean_ctor_set_uint8(v_reuseFailAlloc_1738_, sizeof(void*)*6, v_closed_1718_);
v___x_1730_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
lean_object* v___x_1731_; uint8_t v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1731_ = lean_st_ref_swap(v_a_1708_, v___x_1730_);
lean_dec(v___x_1731_);
v___x_1732_ = 1;
v___x_1733_ = lean_box(v___x_1732_);
v___x_1734_ = lean_io_promise_resolve(v___x_1733_, v_done_1726_);
lean_dec(v_done_1726_);
if (v_isShared_1715_ == 0)
{
lean_ctor_set(v___x_1714_, 0, v_chunk_1725_);
v___x_1736_ = v___x_1714_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_chunk_1725_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
}
else
{
lean_object* v___x_1742_; 
lean_dec(v_pendingProducer_1711_);
lean_dec(v___x_1710_);
v___x_1742_ = lean_box(0);
return v___x_1742_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1___boxed(lean_object* v_a_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(v_a_1743_);
lean_dec(v_a_1743_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(lean_object* v_a_1746_){
_start:
{
lean_object* v___x_1748_; lean_object* v_interestWaiter_1749_; 
v___x_1748_ = lean_st_ref_get(v_a_1746_);
v_interestWaiter_1749_ = lean_ctor_get(v___x_1748_, 2);
lean_inc(v_interestWaiter_1749_);
if (lean_obj_tag(v_interestWaiter_1749_) == 1)
{
lean_object* v_pendingProducer_1750_; lean_object* v_pendingConsumer_1751_; uint8_t v_closed_1752_; lean_object* v_knownSize_1753_; lean_object* v_pendingIncompleteChunk_1754_; lean_object* v_closeError_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1768_; 
v_pendingProducer_1750_ = lean_ctor_get(v___x_1748_, 0);
v_pendingConsumer_1751_ = lean_ctor_get(v___x_1748_, 1);
v_closed_1752_ = lean_ctor_get_uint8(v___x_1748_, sizeof(void*)*6);
v_knownSize_1753_ = lean_ctor_get(v___x_1748_, 3);
v_pendingIncompleteChunk_1754_ = lean_ctor_get(v___x_1748_, 4);
v_closeError_1755_ = lean_ctor_get(v___x_1748_, 5);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1768_ == 0)
{
lean_object* v_unused_1769_; 
v_unused_1769_ = lean_ctor_get(v___x_1748_, 2);
lean_dec(v_unused_1769_);
v___x_1757_ = v___x_1748_;
v_isShared_1758_ = v_isSharedCheck_1768_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_closeError_1755_);
lean_inc(v_pendingIncompleteChunk_1754_);
lean_inc(v_knownSize_1753_);
lean_inc(v_pendingConsumer_1751_);
lean_inc(v_pendingProducer_1750_);
lean_dec(v___x_1748_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1768_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v_val_1759_; uint8_t v___x_1760_; uint8_t v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1764_; 
v_val_1759_ = lean_ctor_get(v_interestWaiter_1749_, 0);
lean_inc(v_val_1759_);
lean_dec_ref_known(v_interestWaiter_1749_, 1);
v___x_1760_ = 1;
v___x_1761_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_val_1759_, v___x_1760_);
lean_dec(v_val_1759_);
v___x_1762_ = lean_box(0);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 2, v___x_1762_);
v___x_1764_ = v___x_1757_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_pendingProducer_1750_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v_pendingConsumer_1751_);
lean_ctor_set(v_reuseFailAlloc_1767_, 2, v___x_1762_);
lean_ctor_set(v_reuseFailAlloc_1767_, 3, v_knownSize_1753_);
lean_ctor_set(v_reuseFailAlloc_1767_, 4, v_pendingIncompleteChunk_1754_);
lean_ctor_set(v_reuseFailAlloc_1767_, 5, v_closeError_1755_);
lean_ctor_set_uint8(v_reuseFailAlloc_1767_, sizeof(void*)*6, v_closed_1752_);
v___x_1764_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = lean_box(0);
v___x_1766_ = lean_st_ref_swap(v_a_1746_, v___x_1764_);
lean_dec(v___x_1766_);
return v___x_1765_;
}
}
}
else
{
lean_object* v___x_1770_; 
lean_dec(v_interestWaiter_1749_);
lean_dec(v___x_1748_);
v___x_1770_ = lean_box(0);
return v___x_1770_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2___boxed(lean_object* v_a_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(v_a_1771_);
lean_dec(v_a_1771_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(lean_object* v_mutex_1774_, lean_object* v_k_1775_){
_start:
{
lean_object* v_ref_1777_; lean_object* v_mutex_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v_ref_1777_ = lean_ctor_get(v_mutex_1774_, 0);
lean_inc(v_ref_1777_);
v_mutex_1778_ = lean_ctor_get(v_mutex_1774_, 1);
lean_inc(v_mutex_1778_);
lean_dec_ref(v_mutex_1774_);
v___x_1779_ = lean_io_basemutex_lock(v_mutex_1778_);
v___x_1780_ = lean_apply_2(v_k_1775_, v_ref_1777_, lean_box(0));
v___x_1781_ = lean_io_basemutex_unlock(v_mutex_1778_);
lean_dec(v_mutex_1778_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg___boxed(lean_object* v_mutex_1782_, lean_object* v_k_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_mutex_1782_, v_k_1783_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3(lean_object* v_00_u03b1_1786_, lean_object* v_00_u03b2_1787_, lean_object* v_mutex_1788_, lean_object* v_k_1789_){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_mutex_1788_, v_k_1789_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___boxed(lean_object* v_00_u03b1_1792_, lean_object* v_00_u03b2_1793_, lean_object* v_mutex_1794_, lean_object* v_k_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v_res_1797_; 
v_res_1797_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3(v_00_u03b1_1792_, v_00_u03b2_1793_, v_mutex_1794_, v_k_1795_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0(lean_object* v_x_1803_){
_start:
{
if (lean_obj_tag(v_x_1803_) == 0)
{
lean_object* v___x_1804_; 
v___x_1804_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2));
return v___x_1804_;
}
else
{
lean_object* v_val_1805_; 
v_val_1805_ = lean_ctor_get(v_x_1803_, 0);
lean_inc(v_val_1805_);
return v_val_1805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___boxed(lean_object* v_x_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0(v_x_1806_);
lean_dec(v_x_1806_);
return v_res_1807_;
}
}
static lean_object* _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1813_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2));
v___x_1814_ = lean_task_pure(v___x_1813_);
return v___x_1814_;
}
}
static lean_object* _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___x_1816_ = lean_task_pure(v___x_1815_);
return v___x_1816_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1(lean_object* v___f_1817_, lean_object* v___y_1818_){
_start:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; uint8_t v_closed_1822_; 
v___x_1820_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(v___y_1818_);
v___x_1821_ = lean_st_ref_get(v___y_1818_);
v_closed_1822_ = lean_ctor_get_uint8(v___x_1821_, sizeof(void*)*6);
if (v_closed_1822_ == 0)
{
uint8_t v___x_1823_; lean_object* v___x_1824_; 
lean_dec(v___x_1821_);
v___x_1823_ = 1;
v___x_1824_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(v___y_1818_);
if (lean_obj_tag(v___x_1824_) == 1)
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
lean_dec_ref(v___f_1817_);
v___x_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
v___x_1826_ = lean_task_pure(v___x_1825_);
return v___x_1826_;
}
else
{
lean_object* v___x_1827_; lean_object* v_pendingConsumer_1828_; 
lean_dec(v___x_1824_);
v___x_1827_ = lean_st_ref_get(v___y_1818_);
v_pendingConsumer_1828_ = lean_ctor_get(v___x_1827_, 1);
lean_inc(v_pendingConsumer_1828_);
if (lean_obj_tag(v_pendingConsumer_1828_) == 0)
{
lean_object* v_pendingProducer_1829_; lean_object* v_interestWaiter_1830_; uint8_t v_closed_1831_; lean_object* v_knownSize_1832_; lean_object* v_pendingIncompleteChunk_1833_; lean_object* v_closeError_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1849_; 
v_pendingProducer_1829_ = lean_ctor_get(v___x_1827_, 0);
v_interestWaiter_1830_ = lean_ctor_get(v___x_1827_, 2);
v_closed_1831_ = lean_ctor_get_uint8(v___x_1827_, sizeof(void*)*6);
v_knownSize_1832_ = lean_ctor_get(v___x_1827_, 3);
v_pendingIncompleteChunk_1833_ = lean_ctor_get(v___x_1827_, 4);
v_closeError_1834_ = lean_ctor_get(v___x_1827_, 5);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1849_ == 0)
{
lean_object* v_unused_1850_; 
v_unused_1850_ = lean_ctor_get(v___x_1827_, 1);
lean_dec(v_unused_1850_);
v___x_1836_ = v___x_1827_;
v_isShared_1837_ = v_isSharedCheck_1849_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_closeError_1834_);
lean_inc(v_pendingIncompleteChunk_1833_);
lean_inc(v_knownSize_1832_);
lean_inc(v_interestWaiter_1830_);
lean_inc(v_pendingProducer_1829_);
lean_dec(v___x_1827_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1849_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1842_; 
v___x_1838_ = lean_io_promise_new();
lean_inc(v___x_1838_);
v___x_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1838_);
v___x_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v___x_1840_);
v___x_1842_ = v___x_1836_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_pendingProducer_1829_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v___x_1840_);
lean_ctor_set(v_reuseFailAlloc_1848_, 2, v_interestWaiter_1830_);
lean_ctor_set(v_reuseFailAlloc_1848_, 3, v_knownSize_1832_);
lean_ctor_set(v_reuseFailAlloc_1848_, 4, v_pendingIncompleteChunk_1833_);
lean_ctor_set(v_reuseFailAlloc_1848_, 5, v_closeError_1834_);
lean_ctor_set_uint8(v_reuseFailAlloc_1848_, sizeof(void*)*6, v_closed_1831_);
v___x_1842_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1843_ = lean_st_ref_swap(v___y_1818_, v___x_1842_);
lean_dec(v___x_1843_);
v___x_1844_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(v___y_1818_);
v___x_1845_ = lean_io_promise_result_opt(v___x_1838_);
lean_dec(v___x_1838_);
v___x_1846_ = lean_unsigned_to_nat(0u);
v___x_1847_ = lean_task_map(v___f_1817_, v___x_1845_, v___x_1846_, v___x_1823_);
return v___x_1847_;
}
}
}
else
{
lean_object* v___x_1851_; 
lean_dec_ref_known(v_pendingConsumer_1828_, 1);
lean_dec(v___x_1827_);
lean_dec_ref(v___f_1817_);
v___x_1851_ = lean_obj_once(&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3, &l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3_once, _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3);
return v___x_1851_;
}
}
}
else
{
lean_object* v_closeError_1852_; 
lean_dec_ref(v___f_1817_);
v_closeError_1852_ = lean_ctor_get(v___x_1821_, 5);
lean_inc(v_closeError_1852_);
lean_dec(v___x_1821_);
if (lean_obj_tag(v_closeError_1852_) == 0)
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_obj_once(&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4, &l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4_once, _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4);
return v___x_1853_;
}
else
{
lean_object* v_val_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1862_; 
v_val_1854_ = lean_ctor_get(v_closeError_1852_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v_closeError_1852_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1856_ = v_closeError_1852_;
v_isShared_1857_ = v_isSharedCheck_1862_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_val_1854_);
lean_dec(v_closeError_1852_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1862_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
lean_ctor_set_tag(v___x_1856_, 0);
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_val_1854_);
v___x_1859_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
lean_object* v___x_1860_; 
v___x_1860_ = lean_task_pure(v___x_1859_);
return v___x_1860_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___boxed(lean_object* v___f_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1(v___f_1863_, v___y_1864_);
lean_dec(v___y_1864_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(lean_object* v_stream_1870_){
_start:
{
lean_object* v___f_1872_; lean_object* v___x_1873_; 
v___f_1872_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1));
v___x_1873_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_stream_1870_, v___f_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___boxed(lean_object* v_stream_1874_, lean_object* v_a_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(v_stream_1874_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0(lean_object* v_x_1877_){
_start:
{
if (lean_obj_tag(v_x_1877_) == 0)
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1887_; 
v_a_1879_ = lean_ctor_get(v_x_1877_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v_x_1877_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1881_ = v_x_1877_;
v_isShared_1882_ = v_isSharedCheck_1887_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v_x_1877_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1887_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1879_);
v___x_1884_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1884_);
return v___x_1885_;
}
}
}
else
{
lean_object* v_a_1888_; lean_object* v___x_1889_; 
v_a_1888_ = lean_ctor_get(v_x_1877_, 0);
lean_inc(v_a_1888_);
lean_dec_ref_known(v_x_1877_, 1);
v___x_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1889_, 0, v_a_1888_);
return v___x_1889_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0___boxed(lean_object* v_x_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Std_Http_Body_Stream_recv___lam__0(v_x_1890_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv(lean_object* v_stream_1894_){
_start:
{
lean_object* v___f_1896_; lean_object* v___x_1897_; uint8_t v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___f_1896_ = ((lean_object*)(l_Std_Http_Body_Stream_recv___closed__0));
v___x_1897_ = lean_unsigned_to_nat(0u);
v___x_1898_ = 0;
v___x_1899_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(v_stream_1894_);
v___x_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1899_);
v___x_1901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
v___x_1902_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1897_, v___x_1898_, v___x_1901_, v___f_1896_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___boxed(lean_object* v_stream_1903_, lean_object* v_a_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l_Std_Http_Body_Stream_recv(v_stream_1903_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0(uint8_t v___x_1906_, lean_object* v_knownSize_1907_, lean_object* v_closeError_1908_, lean_object* v_____r_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1912_ = lean_box(0);
v___x_1913_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_1913_, 0, v___x_1912_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
lean_ctor_set(v___x_1913_, 2, v___x_1912_);
lean_ctor_set(v___x_1913_, 3, v_knownSize_1907_);
lean_ctor_set(v___x_1913_, 4, v___x_1912_);
lean_ctor_set(v___x_1913_, 5, v_closeError_1908_);
lean_ctor_set_uint8(v___x_1913_, sizeof(void*)*6, v___x_1906_);
v___x_1914_ = lean_st_ref_swap(v___y_1910_, v___x_1913_);
lean_dec(v___x_1914_);
v___x_1915_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_1915_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0___boxed(lean_object* v___x_1916_, lean_object* v_knownSize_1917_, lean_object* v_closeError_1918_, lean_object* v_____r_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_){
_start:
{
uint8_t v___x_2195__boxed_1922_; lean_object* v_res_1923_; 
v___x_2195__boxed_1922_ = lean_unbox(v___x_1916_);
v_res_1923_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0(v___x_2195__boxed_1922_, v_knownSize_1917_, v_closeError_1918_, v_____r_1919_, v___y_1920_);
lean_dec(v___y_1920_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1(lean_object* v___f_1924_, lean_object* v___y_1925_, lean_object* v_x_1926_){
_start:
{
if (lean_obj_tag(v_x_1926_) == 0)
{
lean_object* v___x_1928_; 
lean_dec_ref(v___f_1924_);
v___x_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1928_, 0, v_x_1926_);
return v___x_1928_;
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1930_; 
v_a_1929_ = lean_ctor_get(v_x_1926_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v_x_1926_, 1);
lean_inc(v___y_1925_);
v___x_1930_ = lean_apply_3(v___f_1924_, v_a_1929_, v___y_1925_, lean_box(0));
return v___x_1930_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed(lean_object* v___f_1931_, lean_object* v___y_1932_, lean_object* v_x_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1(v___f_1931_, v___y_1932_, v_x_1933_);
lean_dec(v___y_1932_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2(lean_object* v_pendingProducer_1936_, lean_object* v___f_1937_, uint8_t v_closed_1938_, lean_object* v_____r_1939_, lean_object* v___y_1940_){
_start:
{
if (lean_obj_tag(v_pendingProducer_1936_) == 1)
{
lean_object* v_val_1942_; lean_object* v_done_1943_; lean_object* v___f_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v_val_1942_ = lean_ctor_get(v_pendingProducer_1936_, 0);
v_done_1943_ = lean_ctor_get(v_val_1942_, 1);
lean_inc(v___y_1940_);
v___f_1944_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1944_, 0, v___f_1937_);
lean_closure_set(v___f_1944_, 1, v___y_1940_);
v___x_1945_ = lean_unsigned_to_nat(0u);
v___x_1946_ = lean_box(v_closed_1938_);
v___x_1947_ = lean_io_promise_resolve(v___x_1946_, v_done_1943_);
v___x_1948_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1949_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1945_, v_closed_1938_, v___x_1948_, v___f_1944_);
return v___x_1949_;
}
else
{
lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1950_ = lean_box(0);
lean_inc(v___y_1940_);
v___x_1951_ = lean_apply_3(v___f_1937_, v___x_1950_, v___y_1940_, lean_box(0));
return v___x_1951_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2___boxed(lean_object* v_pendingProducer_1952_, lean_object* v___f_1953_, lean_object* v_closed_1954_, lean_object* v_____r_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_){
_start:
{
uint8_t v_closed_boxed_1958_; lean_object* v_res_1959_; 
v_closed_boxed_1958_ = lean_unbox(v_closed_1954_);
v_res_1959_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2(v_pendingProducer_1952_, v___f_1953_, v_closed_boxed_1958_, v_____r_1955_, v___y_1956_);
lean_dec(v___y_1956_);
lean_dec(v_pendingProducer_1952_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(lean_object* v_interestWaiter_1960_, lean_object* v___f_1961_, uint8_t v_closed_1962_, lean_object* v_____r_1963_, lean_object* v___y_1964_){
_start:
{
if (lean_obj_tag(v_interestWaiter_1960_) == 1)
{
lean_object* v_val_1966_; lean_object* v___f_1967_; lean_object* v___x_1968_; uint8_t v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v_val_1966_ = lean_ctor_get(v_interestWaiter_1960_, 0);
lean_inc(v___y_1964_);
v___f_1967_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1967_, 0, v___f_1961_);
lean_closure_set(v___f_1967_, 1, v___y_1964_);
v___x_1968_ = lean_unsigned_to_nat(0u);
v___x_1969_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_val_1966_, v_closed_1962_);
v___x_1970_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1971_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1968_, v_closed_1962_, v___x_1970_, v___f_1967_);
return v___x_1971_;
}
else
{
lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1972_ = lean_box(0);
lean_inc(v___y_1964_);
v___x_1973_ = lean_apply_3(v___f_1961_, v___x_1972_, v___y_1964_, lean_box(0));
return v___x_1973_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4___boxed(lean_object* v_interestWaiter_1974_, lean_object* v___f_1975_, lean_object* v_closed_1976_, lean_object* v_____r_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
uint8_t v_closed_boxed_1980_; lean_object* v_res_1981_; 
v_closed_boxed_1980_ = lean_unbox(v_closed_1976_);
v_res_1981_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(v_interestWaiter_1974_, v___f_1975_, v_closed_boxed_1980_, v_____r_1977_, v___y_1978_);
lean_dec(v___y_1978_);
lean_dec(v_interestWaiter_1974_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3(lean_object* v___f_1982_, lean_object* v_a_1983_, lean_object* v_x_1984_){
_start:
{
if (lean_obj_tag(v_x_1984_) == 0)
{
lean_object* v___x_1986_; 
lean_dec_ref(v___f_1982_);
v___x_1986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1986_, 0, v_x_1984_);
return v___x_1986_;
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1988_; 
v_a_1987_ = lean_ctor_get(v_x_1984_, 0);
lean_inc(v_a_1987_);
lean_dec_ref_known(v_x_1984_, 1);
lean_inc(v_a_1983_);
v___x_1988_ = lean_apply_3(v___f_1982_, v_a_1987_, v_a_1983_, lean_box(0));
return v___x_1988_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3___boxed(lean_object* v___f_1989_, lean_object* v_a_1990_, lean_object* v_x_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3(v___f_1989_, v_a_1990_, v_x_1991_);
lean_dec(v_a_1990_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5(lean_object* v_a_1994_, lean_object* v_x_1995_){
_start:
{
if (lean_obj_tag(v_x_1995_) == 0)
{
lean_object* v_a_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2005_; 
v_a_1997_ = lean_ctor_get(v_x_1995_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v_x_1995_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_1999_ = v_x_1995_;
v_isShared_2000_ = v_isSharedCheck_2005_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_a_1997_);
lean_dec(v_x_1995_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2005_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2002_; 
if (v_isShared_2000_ == 0)
{
v___x_2002_ = v___x_1999_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1997_);
v___x_2002_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
lean_object* v___x_2003_; 
v___x_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2003_, 0, v___x_2002_);
return v___x_2003_;
}
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2039_; 
v_a_2006_ = lean_ctor_get(v_x_1995_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v_x_1995_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2008_ = v_x_1995_;
v_isShared_2009_ = v_isSharedCheck_2039_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v_x_1995_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2039_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
uint8_t v_closed_2010_; 
v_closed_2010_ = lean_ctor_get_uint8(v_a_2006_, sizeof(void*)*6);
if (v_closed_2010_ == 0)
{
lean_object* v_pendingProducer_2011_; lean_object* v_pendingConsumer_2012_; lean_object* v_interestWaiter_2013_; lean_object* v_knownSize_2014_; lean_object* v_closeError_2015_; uint8_t v___x_2016_; lean_object* v___x_2017_; lean_object* v___f_2018_; lean_object* v___x_2019_; lean_object* v___f_2020_; lean_object* v___x_2021_; lean_object* v___f_2022_; 
v_pendingProducer_2011_ = lean_ctor_get(v_a_2006_, 0);
lean_inc(v_pendingProducer_2011_);
v_pendingConsumer_2012_ = lean_ctor_get(v_a_2006_, 1);
lean_inc(v_pendingConsumer_2012_);
v_interestWaiter_2013_ = lean_ctor_get(v_a_2006_, 2);
lean_inc_n(v_interestWaiter_2013_, 2);
v_knownSize_2014_ = lean_ctor_get(v_a_2006_, 3);
lean_inc(v_knownSize_2014_);
v_closeError_2015_ = lean_ctor_get(v_a_2006_, 5);
lean_inc_n(v_closeError_2015_, 2);
lean_dec(v_a_2006_);
v___x_2016_ = 1;
v___x_2017_ = lean_box(v___x_2016_);
v___f_2018_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2018_, 0, v___x_2017_);
lean_closure_set(v___f_2018_, 1, v_knownSize_2014_);
lean_closure_set(v___f_2018_, 2, v_closeError_2015_);
v___x_2019_ = lean_box(v_closed_2010_);
v___f_2020_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2___boxed), 6, 3);
lean_closure_set(v___f_2020_, 0, v_pendingProducer_2011_);
lean_closure_set(v___f_2020_, 1, v___f_2018_);
lean_closure_set(v___f_2020_, 2, v___x_2019_);
v___x_2021_ = lean_box(v_closed_2010_);
lean_inc_ref(v___f_2020_);
v___f_2022_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4___boxed), 6, 3);
lean_closure_set(v___f_2022_, 0, v_interestWaiter_2013_);
lean_closure_set(v___f_2022_, 1, v___f_2020_);
lean_closure_set(v___f_2022_, 2, v___x_2021_);
if (lean_obj_tag(v_pendingConsumer_2012_) == 1)
{
lean_object* v_val_2023_; lean_object* v___f_2024_; lean_object* v___y_2026_; 
lean_dec_ref(v___f_2020_);
lean_dec(v_interestWaiter_2013_);
v_val_2023_ = lean_ctor_get(v_pendingConsumer_2012_, 0);
lean_inc(v_val_2023_);
lean_dec_ref_known(v_pendingConsumer_2012_, 1);
lean_inc(v_a_1994_);
v___f_2024_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2024_, 0, v___f_2022_);
lean_closure_set(v___f_2024_, 1, v_a_1994_);
if (lean_obj_tag(v_closeError_2015_) == 0)
{
lean_object* v___x_2031_; 
lean_del_object(v___x_2008_);
v___x_2031_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___y_2026_ = v___x_2031_;
goto v___jp_2025_;
}
else
{
lean_object* v_val_2032_; lean_object* v___x_2034_; 
v_val_2032_ = lean_ctor_get(v_closeError_2015_, 0);
lean_inc(v_val_2032_);
lean_dec_ref_known(v_closeError_2015_, 1);
if (v_isShared_2009_ == 0)
{
lean_ctor_set_tag(v___x_2008_, 0);
lean_ctor_set(v___x_2008_, 0, v_val_2032_);
v___x_2034_ = v___x_2008_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_val_2032_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
v___y_2026_ = v___x_2034_;
goto v___jp_2025_;
}
}
v___jp_2025_:
{
lean_object* v___x_2027_; uint8_t v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2027_ = lean_unsigned_to_nat(0u);
v___x_2028_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(v_val_2023_, v___y_2026_);
lean_dec(v_val_2023_);
v___x_2029_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_2030_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2027_, v_closed_2010_, v___x_2029_, v___f_2024_);
return v___x_2030_;
}
}
else
{
lean_object* v___x_2036_; lean_object* v___x_2037_; 
lean_dec_ref(v___f_2022_);
lean_dec(v_closeError_2015_);
lean_dec(v_pendingConsumer_2012_);
lean_del_object(v___x_2008_);
v___x_2036_ = lean_box(0);
v___x_2037_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(v_interestWaiter_2013_, v___f_2020_, v_closed_2010_, v___x_2036_, v_a_1994_);
lean_dec(v_interestWaiter_2013_);
return v___x_2037_;
}
}
else
{
lean_object* v___x_2038_; 
lean_del_object(v___x_2008_);
lean_dec(v_a_2006_);
v___x_2038_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_2038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5___boxed(lean_object* v_a_2040_, lean_object* v_x_2041_, lean_object* v___y_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5(v_a_2040_, v_x_2041_);
lean_dec(v_a_2040_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(lean_object* v_a_2044_){
_start:
{
lean_object* v___f_2046_; lean_object* v___x_2047_; uint8_t v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; 
lean_inc(v_a_2044_);
v___f_2046_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2046_, 0, v_a_2044_);
v___x_2047_ = lean_unsigned_to_nat(0u);
v___x_2048_ = 0;
v___x_2049_ = lean_st_ref_get(v_a_2044_);
v___x_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2049_);
v___x_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2050_);
v___x_2052_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2047_, v___x_2048_, v___x_2051_, v___f_2046_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___boxed(lean_object* v_a_2053_, lean_object* v___y_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(v_a_2053_);
lean_dec(v_a_2053_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close(lean_object* v_stream_2057_){
_start:
{
lean_object* v___f_2059_; lean_object* v___x_2060_; 
v___f_2059_ = ((lean_object*)(l_Std_Http_Body_Stream_close___closed__0));
v___x_2060_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2057_, v___f_2059_);
return v___x_2060_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close___boxed(lean_object* v_stream_2061_, lean_object* v_a_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_Std_Http_Body_Stream_close(v_stream_2061_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0(uint8_t v___x_2064_, lean_object* v_x_2065_){
_start:
{
if (lean_obj_tag(v_x_2065_) == 0)
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2075_; 
v_a_2067_ = lean_ctor_get(v_x_2065_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v_x_2065_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2069_ = v_x_2065_;
v_isShared_2070_ = v_isSharedCheck_2075_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v_x_2065_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2075_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2072_; 
if (v_isShared_2070_ == 0)
{
v___x_2072_ = v___x_2069_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_a_2067_);
v___x_2072_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
lean_object* v___x_2073_; 
v___x_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2072_);
return v___x_2073_;
}
}
}
else
{
lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2084_; 
v_isSharedCheck_2084_ = !lean_is_exclusive(v_x_2065_);
if (v_isSharedCheck_2084_ == 0)
{
lean_object* v_unused_2085_; 
v_unused_2085_ = lean_ctor_get(v_x_2065_, 0);
lean_dec(v_unused_2085_);
v___x_2077_ = v_x_2065_;
v_isShared_2078_ = v_isSharedCheck_2084_;
goto v_resetjp_2076_;
}
else
{
lean_dec(v_x_2065_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2084_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2079_; lean_object* v___x_2081_; 
v___x_2079_ = lean_box(v___x_2064_);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v___x_2079_);
v___x_2081_ = v___x_2077_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_2079_);
v___x_2081_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
lean_object* v___x_2082_; 
v___x_2082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
return v___x_2082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0___boxed(lean_object* v___x_2086_, lean_object* v_x_2087_, lean_object* v___y_2088_){
_start:
{
uint8_t v___x_1415__boxed_2089_; lean_object* v_res_2090_; 
v___x_1415__boxed_2089_ = lean_unbox(v___x_2086_);
v_res_2090_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__0(v___x_1415__boxed_2089_, v_x_2087_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1(lean_object* v___y_2094_, lean_object* v_x_2095_){
_start:
{
uint8_t v___y_2098_; 
if (lean_obj_tag(v_x_2095_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2110_; 
v_a_2102_ = lean_ctor_get(v_x_2095_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v_x_2095_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2104_ = v_x_2095_;
v_isShared_2105_ = v_isSharedCheck_2110_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v_x_2095_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2110_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2107_; 
if (v_isShared_2105_ == 0)
{
v___x_2107_ = v___x_2104_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2102_);
v___x_2107_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
lean_object* v___x_2108_; 
v___x_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
return v___x_2108_;
}
}
}
else
{
lean_object* v_a_2111_; uint8_t v_closed_2112_; 
v_a_2111_ = lean_ctor_get(v_x_2095_, 0);
lean_inc(v_a_2111_);
lean_dec_ref_known(v_x_2095_, 1);
v_closed_2112_ = lean_ctor_get_uint8(v_a_2111_, sizeof(void*)*6);
if (v_closed_2112_ == 0)
{
lean_object* v_pendingConsumer_2113_; 
v_pendingConsumer_2113_ = lean_ctor_get(v_a_2111_, 1);
lean_inc(v_pendingConsumer_2113_);
lean_dec(v_a_2111_);
if (lean_obj_tag(v_pendingConsumer_2113_) == 0)
{
lean_object* v___f_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___f_2114_ = ((lean_object*)(l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0));
v___x_2115_ = lean_unsigned_to_nat(0u);
v___x_2116_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(v___y_2094_);
v___x_2117_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2115_, v_closed_2112_, v___x_2116_, v___f_2114_);
return v___x_2117_;
}
else
{
lean_dec_ref_known(v_pendingConsumer_2113_, 1);
v___y_2098_ = v_closed_2112_;
goto v___jp_2097_;
}
}
else
{
uint8_t v___x_2118_; 
lean_dec(v_a_2111_);
v___x_2118_ = 0;
v___y_2098_ = v___x_2118_;
goto v___jp_2097_;
}
}
v___jp_2097_:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; 
v___x_2099_ = lean_box(v___y_2098_);
v___x_2100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2099_);
v___x_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2100_);
return v___x_2101_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___boxed(lean_object* v___y_2119_, lean_object* v_x_2120_, lean_object* v___y_2121_){
_start:
{
lean_object* v_res_2122_; 
v_res_2122_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__1(v___y_2119_, v_x_2120_);
lean_dec(v___y_2119_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2(lean_object* v___y_2123_, lean_object* v___f_2124_, lean_object* v_x_2125_){
_start:
{
if (lean_obj_tag(v_x_2125_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2135_; 
lean_dec_ref(v___f_2124_);
v_a_2127_ = lean_ctor_get(v_x_2125_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v_x_2125_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2129_ = v_x_2125_;
v_isShared_2130_ = v_isSharedCheck_2135_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v_x_2125_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2135_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2132_; 
if (v_isShared_2130_ == 0)
{
v___x_2132_ = v___x_2129_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2127_);
v___x_2132_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2133_; 
v___x_2133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
return v___x_2133_;
}
}
}
else
{
lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2147_; 
v_isSharedCheck_2147_ = !lean_is_exclusive(v_x_2125_);
if (v_isSharedCheck_2147_ == 0)
{
lean_object* v_unused_2148_; 
v_unused_2148_ = lean_ctor_get(v_x_2125_, 0);
lean_dec(v_unused_2148_);
v___x_2137_ = v_x_2125_;
v_isShared_2138_ = v_isSharedCheck_2147_;
goto v_resetjp_2136_;
}
else
{
lean_dec(v_x_2125_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2147_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2139_; uint8_t v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2143_; 
v___x_2139_ = lean_unsigned_to_nat(0u);
v___x_2140_ = 0;
v___x_2141_ = lean_st_ref_get(v___y_2123_);
if (v_isShared_2138_ == 0)
{
lean_ctor_set(v___x_2137_, 0, v___x_2141_);
v___x_2143_ = v___x_2137_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v___x_2141_);
v___x_2143_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
v___x_2145_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2139_, v___x_2140_, v___x_2144_, v___f_2124_);
return v___x_2145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2___boxed(lean_object* v___y_2149_, lean_object* v___f_2150_, lean_object* v_x_2151_, lean_object* v___y_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__2(v___y_2149_, v___f_2150_, v_x_2151_);
lean_dec(v___y_2149_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3(lean_object* v___y_2154_){
_start:
{
lean_object* v___f_2156_; lean_object* v___f_2157_; lean_object* v___x_2158_; uint8_t v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
lean_inc_n(v___y_2154_, 2);
v___f_2156_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2156_, 0, v___y_2154_);
v___f_2157_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeIfAbandoned___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2157_, 0, v___y_2154_);
lean_closure_set(v___f_2157_, 1, v___f_2156_);
v___x_2158_ = lean_unsigned_to_nat(0u);
v___x_2159_ = 0;
v___x_2160_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_2154_);
v___x_2161_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2158_, v___x_2159_, v___x_2160_, v___f_2157_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3___boxed(lean_object* v___y_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__3(v___y_2162_);
lean_dec(v___y_2162_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned(lean_object* v_stream_2166_){
_start:
{
lean_object* v___f_2168_; lean_object* v___x_2169_; 
v___f_2168_ = ((lean_object*)(l_Std_Http_Body_Stream_closeIfAbandoned___closed__0));
v___x_2169_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2166_, v___f_2168_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___boxed(lean_object* v_stream_2170_, lean_object* v_a_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Std_Http_Body_Stream_closeIfAbandoned(v_stream_2170_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0(lean_object* v___y_2173_, lean_object* v_x_2174_){
_start:
{
if (lean_obj_tag(v_x_2174_) == 0)
{
lean_object* v___x_2176_; 
v___x_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2176_, 0, v_x_2174_);
return v___x_2176_;
}
else
{
lean_object* v___x_2177_; 
lean_dec_ref_known(v_x_2174_, 1);
v___x_2177_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(v___y_2173_);
return v___x_2177_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0___boxed(lean_object* v___y_2178_, lean_object* v_x_2179_, lean_object* v___y_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l_Std_Http_Body_Stream_closeWithError___lam__0(v___y_2178_, v_x_2179_);
lean_dec(v___y_2178_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1(lean_object* v_err_2182_, lean_object* v___y_2183_){
_start:
{
lean_object* v___f_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; lean_object* v___x_2188_; lean_object* v_fst_2190_; lean_object* v_snd_2191_; lean_object* v_pendingProducer_2196_; lean_object* v_pendingConsumer_2197_; lean_object* v_interestWaiter_2198_; uint8_t v_closed_2199_; lean_object* v_knownSize_2200_; lean_object* v_pendingIncompleteChunk_2201_; lean_object* v_closeError_2202_; lean_object* v___x_2203_; 
lean_inc(v___y_2183_);
v___f_2185_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeWithError___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2185_, 0, v___y_2183_);
v___x_2186_ = lean_unsigned_to_nat(0u);
v___x_2187_ = 0;
v___x_2188_ = lean_st_ref_take(v___y_2183_);
v_pendingProducer_2196_ = lean_ctor_get(v___x_2188_, 0);
lean_inc(v_pendingProducer_2196_);
v_pendingConsumer_2197_ = lean_ctor_get(v___x_2188_, 1);
lean_inc(v_pendingConsumer_2197_);
v_interestWaiter_2198_ = lean_ctor_get(v___x_2188_, 2);
lean_inc(v_interestWaiter_2198_);
v_closed_2199_ = lean_ctor_get_uint8(v___x_2188_, sizeof(void*)*6);
v_knownSize_2200_ = lean_ctor_get(v___x_2188_, 3);
lean_inc(v_knownSize_2200_);
v_pendingIncompleteChunk_2201_ = lean_ctor_get(v___x_2188_, 4);
lean_inc(v_pendingIncompleteChunk_2201_);
v_closeError_2202_ = lean_ctor_get(v___x_2188_, 5);
lean_inc(v_closeError_2202_);
v___x_2203_ = lean_box(0);
if (lean_obj_tag(v_closeError_2202_) == 0)
{
lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2211_; 
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2188_);
if (v_isSharedCheck_2211_ == 0)
{
lean_object* v_unused_2212_; lean_object* v_unused_2213_; lean_object* v_unused_2214_; lean_object* v_unused_2215_; lean_object* v_unused_2216_; lean_object* v_unused_2217_; 
v_unused_2212_ = lean_ctor_get(v___x_2188_, 5);
lean_dec(v_unused_2212_);
v_unused_2213_ = lean_ctor_get(v___x_2188_, 4);
lean_dec(v_unused_2213_);
v_unused_2214_ = lean_ctor_get(v___x_2188_, 3);
lean_dec(v_unused_2214_);
v_unused_2215_ = lean_ctor_get(v___x_2188_, 2);
lean_dec(v_unused_2215_);
v_unused_2216_ = lean_ctor_get(v___x_2188_, 1);
lean_dec(v_unused_2216_);
v_unused_2217_ = lean_ctor_get(v___x_2188_, 0);
lean_dec(v_unused_2217_);
v___x_2205_ = v___x_2188_;
v_isShared_2206_ = v_isSharedCheck_2211_;
goto v_resetjp_2204_;
}
else
{
lean_dec(v___x_2188_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2211_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2207_; lean_object* v___x_2209_; 
v___x_2207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2207_, 0, v_err_2182_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 5, v___x_2207_);
v___x_2209_ = v___x_2205_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_pendingProducer_2196_);
lean_ctor_set(v_reuseFailAlloc_2210_, 1, v_pendingConsumer_2197_);
lean_ctor_set(v_reuseFailAlloc_2210_, 2, v_interestWaiter_2198_);
lean_ctor_set(v_reuseFailAlloc_2210_, 3, v_knownSize_2200_);
lean_ctor_set(v_reuseFailAlloc_2210_, 4, v_pendingIncompleteChunk_2201_);
lean_ctor_set(v_reuseFailAlloc_2210_, 5, v___x_2207_);
lean_ctor_set_uint8(v_reuseFailAlloc_2210_, sizeof(void*)*6, v_closed_2199_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
v_fst_2190_ = v___x_2203_;
v_snd_2191_ = v___x_2209_;
goto v___jp_2189_;
}
}
}
else
{
lean_dec_ref_known(v_closeError_2202_, 1);
lean_dec(v_pendingIncompleteChunk_2201_);
lean_dec(v_knownSize_2200_);
lean_dec(v_interestWaiter_2198_);
lean_dec(v_pendingConsumer_2197_);
lean_dec(v_pendingProducer_2196_);
lean_dec(v_err_2182_);
v_fst_2190_ = v___x_2203_;
v_snd_2191_ = v___x_2188_;
goto v___jp_2189_;
}
v___jp_2189_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2192_ = lean_st_ref_put(v___y_2183_, v_snd_2191_);
v___x_2193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2193_, 0, v_fst_2190_);
v___x_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2193_);
v___x_2195_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2186_, v___x_2187_, v___x_2194_, v___f_2185_);
return v___x_2195_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1___boxed(lean_object* v_err_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l_Std_Http_Body_Stream_closeWithError___lam__1(v_err_2218_, v___y_2219_);
lean_dec(v___y_2219_);
return v_res_2221_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError(lean_object* v_stream_2222_, lean_object* v_err_2223_){
_start:
{
lean_object* v___f_2225_; lean_object* v___x_2226_; 
v___f_2225_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeWithError___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2225_, 0, v_err_2223_);
v___x_2226_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2222_, v___f_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___boxed(lean_object* v_stream_2227_, lean_object* v_err_2228_, lean_object* v_a_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Std_Http_Body_Stream_closeWithError(v_stream_2227_, v_err_2228_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0(lean_object* v_____do__lift_2231_, lean_object* v___y_2232_){
_start:
{
uint8_t v_closed_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v_closed_2234_ = lean_ctor_get_uint8(v_____do__lift_2231_, sizeof(void*)*6);
v___x_2235_ = lean_box(v_closed_2234_);
v___x_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
v___x_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0___boxed(lean_object* v_____do__lift_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v_res_2241_; 
v_res_2241_ = l_Std_Http_Body_Stream_isClosed___lam__0(v_____do__lift_2238_, v___y_2239_);
lean_dec(v___y_2239_);
lean_dec_ref(v_____do__lift_2238_);
return v_res_2241_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__1(void){
_start:
{
lean_object* v___x_2243_; 
v___x_2243_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_2243_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__2(void){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_2244_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__6(void){
_start:
{
lean_object* v___x_2250_; lean_object* v___f_2251_; lean_object* v___f_2252_; 
v___x_2250_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__2, &l_Std_Http_Body_Stream_isClosed___closed__2_once, _init_l_Std_Http_Body_Stream_isClosed___closed__2);
v___f_2251_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__5));
v___f_2252_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2252_, 0, v___f_2251_);
lean_closure_set(v___f_2252_, 1, v___x_2250_);
return v___f_2252_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__11(void){
_start:
{
lean_object* v___x_2261_; lean_object* v___f_2262_; lean_object* v___f_2263_; 
v___x_2261_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__2, &l_Std_Http_Body_Stream_isClosed___closed__2_once, _init_l_Std_Http_Body_Stream_isClosed___closed__2);
v___f_2262_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__10));
v___f_2263_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2263_, 0, v___f_2262_);
lean_closure_set(v___f_2263_, 1, v___x_2261_);
return v___f_2263_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__12(void){
_start:
{
lean_object* v___f_2264_; lean_object* v___x_2265_; 
v___f_2264_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__11, &l_Std_Http_Body_Stream_isClosed___closed__11_once, _init_l_Std_Http_Body_Stream_isClosed___closed__11);
v___x_2265_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_2265_, 0, lean_box(0));
lean_closure_set(v___x_2265_, 1, lean_box(0));
lean_closure_set(v___x_2265_, 2, lean_box(0));
lean_closure_set(v___x_2265_, 3, v___f_2264_);
return v___x_2265_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__13(void){
_start:
{
lean_object* v___f_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___f_2266_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__0));
v___x_2267_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__12, &l_Std_Http_Body_Stream_isClosed___closed__12_once, _init_l_Std_Http_Body_Stream_isClosed___closed__12);
v___x_2268_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___x_2269_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2269_, 0, lean_box(0));
lean_closure_set(v___x_2269_, 1, lean_box(0));
lean_closure_set(v___x_2269_, 2, v___x_2268_);
lean_closure_set(v___x_2269_, 3, lean_box(0));
lean_closure_set(v___x_2269_, 4, lean_box(0));
lean_closure_set(v___x_2269_, 5, v___x_2267_);
lean_closure_set(v___x_2269_, 6, v___f_2266_);
return v___x_2269_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed(lean_object* v_stream_2270_){
_start:
{
lean_object* v___x_2272_; lean_object* v___f_2273_; lean_object* v___f_2274_; lean_object* v___x_2275_; lean_object* v___x_214__overap_2276_; lean_object* v___x_2277_; 
v___x_2272_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___f_2273_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__6, &l_Std_Http_Body_Stream_isClosed___closed__6_once, _init_l_Std_Http_Body_Stream_isClosed___closed__6);
v___f_2274_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__7));
v___x_2275_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__13, &l_Std_Http_Body_Stream_isClosed___closed__13_once, _init_l_Std_Http_Body_Stream_isClosed___closed__13);
v___x_214__overap_2276_ = l_Std_Mutex_atomically___redArg(v___x_2272_, v___f_2273_, v___f_2274_, v_stream_2270_, v___x_2275_);
v___x_2277_ = lean_apply_1(v___x_214__overap_2276_, lean_box(0));
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___boxed(lean_object* v_stream_2278_, lean_object* v_a_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l_Std_Http_Body_Stream_isClosed(v_stream_2278_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0(lean_object* v_____do__lift_2281_, lean_object* v___y_2282_){
_start:
{
lean_object* v_knownSize_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v_knownSize_2284_ = lean_ctor_get(v_____do__lift_2281_, 3);
lean_inc(v_knownSize_2284_);
v___x_2285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2285_, 0, v_knownSize_2284_);
v___x_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2285_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0___boxed(lean_object* v_____do__lift_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_Std_Http_Body_Stream_getKnownSize___lam__0(v_____do__lift_2287_, v___y_2288_);
lean_dec(v___y_2288_);
lean_dec_ref(v_____do__lift_2287_);
return v_res_2290_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_getKnownSize___closed__1(void){
_start:
{
lean_object* v___f_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___f_2292_ = ((lean_object*)(l_Std_Http_Body_Stream_getKnownSize___closed__0));
v___x_2293_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__12, &l_Std_Http_Body_Stream_isClosed___closed__12_once, _init_l_Std_Http_Body_Stream_isClosed___closed__12);
v___x_2294_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___x_2295_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2295_, 0, lean_box(0));
lean_closure_set(v___x_2295_, 1, lean_box(0));
lean_closure_set(v___x_2295_, 2, v___x_2294_);
lean_closure_set(v___x_2295_, 3, lean_box(0));
lean_closure_set(v___x_2295_, 4, lean_box(0));
lean_closure_set(v___x_2295_, 5, v___x_2293_);
lean_closure_set(v___x_2295_, 6, v___f_2292_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize(lean_object* v_stream_2296_){
_start:
{
lean_object* v___x_2298_; lean_object* v___f_2299_; lean_object* v___f_2300_; lean_object* v___x_2301_; lean_object* v___x_214__overap_2302_; lean_object* v___x_2303_; 
v___x_2298_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___f_2299_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__6, &l_Std_Http_Body_Stream_isClosed___closed__6_once, _init_l_Std_Http_Body_Stream_isClosed___closed__6);
v___f_2300_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__7));
v___x_2301_ = lean_obj_once(&l_Std_Http_Body_Stream_getKnownSize___closed__1, &l_Std_Http_Body_Stream_getKnownSize___closed__1_once, _init_l_Std_Http_Body_Stream_getKnownSize___closed__1);
v___x_214__overap_2302_ = l_Std_Mutex_atomically___redArg(v___x_2298_, v___f_2299_, v___f_2300_, v_stream_2296_, v___x_2301_);
v___x_2303_ = lean_apply_1(v___x_214__overap_2302_, lean_box(0));
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___boxed(lean_object* v_stream_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v_res_2306_; 
v_res_2306_ = l_Std_Http_Body_Stream_getKnownSize(v_stream_2304_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0(lean_object* v_size_2307_, lean_object* v___y_2308_){
_start:
{
lean_object* v___x_2310_; lean_object* v_pendingProducer_2311_; lean_object* v_pendingConsumer_2312_; lean_object* v_interestWaiter_2313_; uint8_t v_closed_2314_; lean_object* v_pendingIncompleteChunk_2315_; lean_object* v_closeError_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2325_; 
v___x_2310_ = lean_st_ref_take(v___y_2308_);
v_pendingProducer_2311_ = lean_ctor_get(v___x_2310_, 0);
v_pendingConsumer_2312_ = lean_ctor_get(v___x_2310_, 1);
v_interestWaiter_2313_ = lean_ctor_get(v___x_2310_, 2);
v_closed_2314_ = lean_ctor_get_uint8(v___x_2310_, sizeof(void*)*6);
v_pendingIncompleteChunk_2315_ = lean_ctor_get(v___x_2310_, 4);
v_closeError_2316_ = lean_ctor_get(v___x_2310_, 5);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2325_ == 0)
{
lean_object* v_unused_2326_; 
v_unused_2326_ = lean_ctor_get(v___x_2310_, 3);
lean_dec(v_unused_2326_);
v___x_2318_ = v___x_2310_;
v_isShared_2319_ = v_isSharedCheck_2325_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_closeError_2316_);
lean_inc(v_pendingIncompleteChunk_2315_);
lean_inc(v_interestWaiter_2313_);
lean_inc(v_pendingConsumer_2312_);
lean_inc(v_pendingProducer_2311_);
lean_dec(v___x_2310_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2325_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
lean_ctor_set(v___x_2318_, 3, v_size_2307_);
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_pendingProducer_2311_);
lean_ctor_set(v_reuseFailAlloc_2324_, 1, v_pendingConsumer_2312_);
lean_ctor_set(v_reuseFailAlloc_2324_, 2, v_interestWaiter_2313_);
lean_ctor_set(v_reuseFailAlloc_2324_, 3, v_size_2307_);
lean_ctor_set(v_reuseFailAlloc_2324_, 4, v_pendingIncompleteChunk_2315_);
lean_ctor_set(v_reuseFailAlloc_2324_, 5, v_closeError_2316_);
lean_ctor_set_uint8(v_reuseFailAlloc_2324_, sizeof(void*)*6, v_closed_2314_);
v___x_2321_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = lean_st_ref_put(v___y_2308_, v___x_2321_);
v___x_2323_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_2323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0___boxed(lean_object* v_size_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Std_Http_Body_Stream_setKnownSize___lam__0(v_size_2327_, v___y_2328_);
lean_dec(v___y_2328_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize(lean_object* v_stream_2331_, lean_object* v_size_2332_){
_start:
{
lean_object* v___f_2334_; lean_object* v___x_2335_; lean_object* v___f_2336_; lean_object* v___f_2337_; lean_object* v___x_207__overap_2338_; lean_object* v___x_2339_; 
v___f_2334_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_setKnownSize___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2334_, 0, v_size_2332_);
v___x_2335_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___f_2336_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__6, &l_Std_Http_Body_Stream_isClosed___closed__6_once, _init_l_Std_Http_Body_Stream_isClosed___closed__6);
v___f_2337_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__7));
v___x_207__overap_2338_ = l_Std_Mutex_atomically___redArg(v___x_2335_, v___f_2336_, v___f_2337_, v_stream_2331_, v___f_2334_);
v___x_2339_ = lean_apply_1(v___x_207__overap_2338_, lean_box(0));
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___boxed(lean_object* v_stream_2340_, lean_object* v_size_2341_, lean_object* v_a_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Std_Http_Body_Stream_setKnownSize(v_stream_2340_, v_size_2341_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0(lean_object* v_pendingProducer_2344_, lean_object* v_pendingConsumer_2345_, uint8_t v_closed_2346_, lean_object* v_knownSize_2347_, lean_object* v_pendingIncompleteChunk_2348_, lean_object* v_closeError_2349_, lean_object* v_a_2350_, lean_object* v___x_2351_, lean_object* v_x_2352_){
_start:
{
if (lean_obj_tag(v_x_2352_) == 0)
{
lean_object* v___x_2354_; 
lean_dec(v_closeError_2349_);
lean_dec(v_pendingIncompleteChunk_2348_);
lean_dec(v_knownSize_2347_);
lean_dec(v_pendingConsumer_2345_);
lean_dec(v_pendingProducer_2344_);
v___x_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2354_, 0, v_x_2352_);
return v___x_2354_;
}
else
{
lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2365_; 
v_isSharedCheck_2365_ = !lean_is_exclusive(v_x_2352_);
if (v_isSharedCheck_2365_ == 0)
{
lean_object* v_unused_2366_; 
v_unused_2366_ = lean_ctor_get(v_x_2352_, 0);
lean_dec(v_unused_2366_);
v___x_2356_ = v_x_2352_;
v_isShared_2357_ = v_isSharedCheck_2365_;
goto v_resetjp_2355_;
}
else
{
lean_dec(v_x_2352_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2365_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2362_; 
v___x_2358_ = lean_box(0);
v___x_2359_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2359_, 0, v_pendingProducer_2344_);
lean_ctor_set(v___x_2359_, 1, v_pendingConsumer_2345_);
lean_ctor_set(v___x_2359_, 2, v___x_2358_);
lean_ctor_set(v___x_2359_, 3, v_knownSize_2347_);
lean_ctor_set(v___x_2359_, 4, v_pendingIncompleteChunk_2348_);
lean_ctor_set(v___x_2359_, 5, v_closeError_2349_);
lean_ctor_set_uint8(v___x_2359_, sizeof(void*)*6, v_closed_2346_);
v___x_2360_ = lean_st_ref_swap(v_a_2350_, v___x_2359_);
lean_dec(v___x_2360_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set(v___x_2356_, 0, v___x_2351_);
v___x_2362_ = v___x_2356_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2351_);
v___x_2362_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
lean_object* v___x_2363_; 
v___x_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
return v___x_2363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0___boxed(lean_object* v_pendingProducer_2367_, lean_object* v_pendingConsumer_2368_, lean_object* v_closed_2369_, lean_object* v_knownSize_2370_, lean_object* v_pendingIncompleteChunk_2371_, lean_object* v_closeError_2372_, lean_object* v_a_2373_, lean_object* v___x_2374_, lean_object* v_x_2375_, lean_object* v___y_2376_){
_start:
{
uint8_t v_closed_boxed_2377_; lean_object* v_res_2378_; 
v_closed_boxed_2377_ = lean_unbox(v_closed_2369_);
v_res_2378_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0(v_pendingProducer_2367_, v_pendingConsumer_2368_, v_closed_boxed_2377_, v_knownSize_2370_, v_pendingIncompleteChunk_2371_, v_closeError_2372_, v_a_2373_, v___x_2374_, v_x_2375_);
lean_dec(v_a_2373_);
return v_res_2378_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1(lean_object* v_a_2379_, lean_object* v_x_2380_){
_start:
{
if (lean_obj_tag(v_x_2380_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2390_; 
v_a_2382_ = lean_ctor_get(v_x_2380_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v_x_2380_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2384_ = v_x_2380_;
v_isShared_2385_ = v_isSharedCheck_2390_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v_x_2380_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2390_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2382_);
v___x_2387_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
lean_object* v___x_2388_; 
v___x_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2388_, 0, v___x_2387_);
return v___x_2388_;
}
}
}
else
{
lean_object* v_a_2391_; lean_object* v_interestWaiter_2392_; 
v_a_2391_ = lean_ctor_get(v_x_2380_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v_x_2380_, 1);
v_interestWaiter_2392_ = lean_ctor_get(v_a_2391_, 2);
lean_inc(v_interestWaiter_2392_);
if (lean_obj_tag(v_interestWaiter_2392_) == 1)
{
lean_object* v_pendingProducer_2393_; lean_object* v_pendingConsumer_2394_; uint8_t v_closed_2395_; lean_object* v_knownSize_2396_; lean_object* v_pendingIncompleteChunk_2397_; lean_object* v_closeError_2398_; lean_object* v_val_2399_; uint8_t v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___f_2403_; lean_object* v___x_2404_; uint8_t v___x_2405_; uint8_t v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v_pendingProducer_2393_ = lean_ctor_get(v_a_2391_, 0);
lean_inc(v_pendingProducer_2393_);
v_pendingConsumer_2394_ = lean_ctor_get(v_a_2391_, 1);
lean_inc(v_pendingConsumer_2394_);
v_closed_2395_ = lean_ctor_get_uint8(v_a_2391_, sizeof(void*)*6);
v_knownSize_2396_ = lean_ctor_get(v_a_2391_, 3);
lean_inc(v_knownSize_2396_);
v_pendingIncompleteChunk_2397_ = lean_ctor_get(v_a_2391_, 4);
lean_inc(v_pendingIncompleteChunk_2397_);
v_closeError_2398_ = lean_ctor_get(v_a_2391_, 5);
lean_inc(v_closeError_2398_);
lean_dec(v_a_2391_);
v_val_2399_ = lean_ctor_get(v_interestWaiter_2392_, 0);
lean_inc(v_val_2399_);
lean_dec_ref_known(v_interestWaiter_2392_, 1);
v___x_2400_ = 1;
v___x_2401_ = lean_box(0);
v___x_2402_ = lean_box(v_closed_2395_);
lean_inc(v_a_2379_);
v___f_2403_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0___boxed), 10, 8);
lean_closure_set(v___f_2403_, 0, v_pendingProducer_2393_);
lean_closure_set(v___f_2403_, 1, v_pendingConsumer_2394_);
lean_closure_set(v___f_2403_, 2, v___x_2402_);
lean_closure_set(v___f_2403_, 3, v_knownSize_2396_);
lean_closure_set(v___f_2403_, 4, v_pendingIncompleteChunk_2397_);
lean_closure_set(v___f_2403_, 5, v_closeError_2398_);
lean_closure_set(v___f_2403_, 6, v_a_2379_);
lean_closure_set(v___f_2403_, 7, v___x_2401_);
v___x_2404_ = lean_unsigned_to_nat(0u);
v___x_2405_ = 0;
v___x_2406_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_val_2399_, v___x_2400_);
lean_dec(v_val_2399_);
v___x_2407_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_2408_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2404_, v___x_2405_, v___x_2407_, v___f_2403_);
return v___x_2408_;
}
else
{
lean_object* v___x_2409_; 
lean_dec(v_interestWaiter_2392_);
lean_dec(v_a_2391_);
v___x_2409_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_2409_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1___boxed(lean_object* v_a_2410_, lean_object* v_x_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1(v_a_2410_, v_x_2411_);
lean_dec(v_a_2410_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(lean_object* v_a_2414_){
_start:
{
lean_object* v___f_2416_; lean_object* v___x_2417_; uint8_t v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
lean_inc(v_a_2414_);
v___f_2416_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2416_, 0, v_a_2414_);
v___x_2417_ = lean_unsigned_to_nat(0u);
v___x_2418_ = 0;
v___x_2419_ = lean_st_ref_get(v_a_2414_);
v___x_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2419_);
v___x_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
v___x_2422_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2417_, v___x_2418_, v___x_2421_, v___f_2416_);
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___boxed(lean_object* v_a_2423_, lean_object* v___y_2424_){
_start:
{
lean_object* v_res_2425_; 
v_res_2425_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(v_a_2423_);
lean_dec(v_a_2423_);
return v_res_2425_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0(lean_object* v_promise_2426_, lean_object* v_x_2427_){
_start:
{
if (lean_obj_tag(v_x_2427_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2437_; 
v_a_2429_ = lean_ctor_get(v_x_2427_, 0);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_x_2427_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2431_ = v_x_2427_;
v_isShared_2432_ = v_isSharedCheck_2437_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v_x_2427_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2437_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2434_; 
if (v_isShared_2432_ == 0)
{
v___x_2434_ = v___x_2431_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_a_2429_);
v___x_2434_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
lean_object* v___x_2435_; 
v___x_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2434_);
return v___x_2435_;
}
}
}
else
{
lean_object* v_a_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2447_; 
v_a_2438_ = lean_ctor_get(v_x_2427_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v_x_2427_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2440_ = v_x_2427_;
v_isShared_2441_ = v_isSharedCheck_2447_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_a_2438_);
lean_dec(v_x_2427_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2447_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v___x_2442_; lean_object* v___x_2444_; 
v___x_2442_ = lean_io_promise_resolve(v_a_2438_, v_promise_2426_);
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v___x_2442_);
v___x_2444_ = v___x_2440_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v___x_2442_);
v___x_2444_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
lean_object* v___x_2445_; 
v___x_2445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
return v___x_2445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0___boxed(lean_object* v_promise_2448_, lean_object* v_x_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v_res_2451_; 
v_res_2451_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0(v_promise_2448_, v_x_2449_);
lean_dec(v_promise_2448_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1(lean_object* v_lose_2452_, lean_object* v___y_2453_, lean_object* v___f_2454_, lean_object* v_x_2455_){
_start:
{
if (lean_obj_tag(v_x_2455_) == 0)
{
lean_object* v_a_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2465_; 
lean_dec_ref(v___f_2454_);
lean_dec_ref(v_lose_2452_);
v_a_2457_ = lean_ctor_get(v_x_2455_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v_x_2455_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2459_ = v_x_2455_;
v_isShared_2460_ = v_isSharedCheck_2465_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_a_2457_);
lean_dec(v_x_2455_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2465_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___x_2462_; 
if (v_isShared_2460_ == 0)
{
v___x_2462_ = v___x_2459_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2457_);
v___x_2462_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2462_);
return v___x_2463_;
}
}
}
else
{
lean_object* v_a_2466_; uint8_t v___x_2467_; 
v_a_2466_ = lean_ctor_get(v_x_2455_, 0);
lean_inc(v_a_2466_);
lean_dec_ref_known(v_x_2455_, 1);
v___x_2467_ = lean_unbox(v_a_2466_);
lean_dec(v_a_2466_);
if (v___x_2467_ == 0)
{
lean_object* v___x_2468_; 
lean_dec_ref(v___f_2454_);
lean_inc(v___y_2453_);
v___x_2468_ = lean_apply_2(v_lose_2452_, v___y_2453_, lean_box(0));
return v___x_2468_;
}
else
{
lean_object* v___x_2469_; uint8_t v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; 
lean_dec_ref(v_lose_2452_);
v___x_2469_ = lean_unsigned_to_nat(0u);
v___x_2470_ = 0;
v___x_2471_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v___y_2453_);
v___x_2472_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2469_, v___x_2470_, v___x_2471_, v___f_2454_);
return v___x_2472_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1___boxed(lean_object* v_lose_2473_, lean_object* v___y_2474_, lean_object* v___f_2475_, lean_object* v_x_2476_, lean_object* v___y_2477_){
_start:
{
lean_object* v_res_2478_; 
v_res_2478_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1(v_lose_2473_, v___y_2474_, v___f_2475_, v_x_2476_);
lean_dec(v___y_2474_);
return v_res_2478_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(lean_object* v_w_2479_, lean_object* v_lose_2480_, lean_object* v___y_2481_){
_start:
{
lean_object* v_finished_2483_; lean_object* v_promise_2484_; lean_object* v___f_2485_; lean_object* v___f_2486_; lean_object* v___x_2487_; uint8_t v___x_2488_; lean_object* v___x_2489_; uint8_t v___y_2491_; uint8_t v___x_2499_; 
v_finished_2483_ = lean_ctor_get(v_w_2479_, 0);
lean_inc(v_finished_2483_);
v_promise_2484_ = lean_ctor_get(v_w_2479_, 1);
lean_inc(v_promise_2484_);
lean_dec_ref(v_w_2479_);
v___f_2485_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2485_, 0, v_promise_2484_);
lean_inc(v___y_2481_);
v___f_2486_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1___boxed), 5, 3);
lean_closure_set(v___f_2486_, 0, v_lose_2480_);
lean_closure_set(v___f_2486_, 1, v___y_2481_);
lean_closure_set(v___f_2486_, 2, v___f_2485_);
v___x_2487_ = lean_unsigned_to_nat(0u);
v___x_2488_ = 0;
v___x_2489_ = lean_st_ref_take(v_finished_2483_);
v___x_2499_ = lean_unbox(v___x_2489_);
lean_dec(v___x_2489_);
if (v___x_2499_ == 0)
{
uint8_t v___x_2500_; 
v___x_2500_ = 1;
v___y_2491_ = v___x_2500_;
goto v___jp_2490_;
}
else
{
v___y_2491_ = v___x_2488_;
goto v___jp_2490_;
}
v___jp_2490_:
{
uint8_t v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2492_ = 1;
v___x_2493_ = lean_box(v___x_2492_);
v___x_2494_ = lean_st_ref_put(v_finished_2483_, v___x_2493_);
lean_dec(v_finished_2483_);
v___x_2495_ = lean_box(v___y_2491_);
v___x_2496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2495_);
v___x_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
v___x_2498_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2487_, v___x_2488_, v___x_2497_, v___f_2486_);
return v___x_2498_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___boxed(lean_object* v_w_2501_, lean_object* v_lose_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(v_w_2501_, v_lose_2502_, v___y_2503_);
lean_dec(v___y_2503_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1(lean_object* v___y_2506_, lean_object* v_x_2507_){
_start:
{
if (lean_obj_tag(v_x_2507_) == 0)
{
lean_object* v___x_2509_; 
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_x_2507_);
return v___x_2509_;
}
else
{
lean_object* v___x_2510_; 
lean_dec_ref_known(v_x_2507_, 1);
v___x_2510_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(v___y_2506_);
return v___x_2510_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1___boxed(lean_object* v___y_2511_, lean_object* v_x_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v_res_2514_; 
v_res_2514_ = l_Std_Http_Body_Stream_recvSelector___lam__1(v___y_2511_, v_x_2512_);
lean_dec(v___y_2511_);
return v_res_2514_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0(lean_object* v_waiter_2515_, lean_object* v_pendingProducer_2516_, lean_object* v_interestWaiter_2517_, uint8_t v_closed_2518_, lean_object* v_knownSize_2519_, lean_object* v_pendingIncompleteChunk_2520_, lean_object* v_closeError_2521_, uint8_t v_a_2522_, lean_object* v_____r_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v___f_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
lean_inc(v___y_2524_);
v___f_2526_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2526_, 0, v___y_2524_);
v___x_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2527_, 0, v_waiter_2515_);
v___x_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2528_, 0, v___x_2527_);
v___x_2529_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2529_, 0, v_pendingProducer_2516_);
lean_ctor_set(v___x_2529_, 1, v___x_2528_);
lean_ctor_set(v___x_2529_, 2, v_interestWaiter_2517_);
lean_ctor_set(v___x_2529_, 3, v_knownSize_2519_);
lean_ctor_set(v___x_2529_, 4, v_pendingIncompleteChunk_2520_);
lean_ctor_set(v___x_2529_, 5, v_closeError_2521_);
lean_ctor_set_uint8(v___x_2529_, sizeof(void*)*6, v_closed_2518_);
v___x_2530_ = lean_unsigned_to_nat(0u);
v___x_2531_ = lean_st_ref_swap(v___y_2524_, v___x_2529_);
lean_dec(v___x_2531_);
v___x_2532_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_2533_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2530_, v_a_2522_, v___x_2532_, v___f_2526_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0___boxed(lean_object* v_waiter_2534_, lean_object* v_pendingProducer_2535_, lean_object* v_interestWaiter_2536_, lean_object* v_closed_2537_, lean_object* v_knownSize_2538_, lean_object* v_pendingIncompleteChunk_2539_, lean_object* v_closeError_2540_, lean_object* v_a_2541_, lean_object* v_____r_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_){
_start:
{
uint8_t v_closed_boxed_2545_; uint8_t v_a_5670__boxed_2546_; lean_object* v_res_2547_; 
v_closed_boxed_2545_ = lean_unbox(v_closed_2537_);
v_a_5670__boxed_2546_ = lean_unbox(v_a_2541_);
v_res_2547_ = l_Std_Http_Body_Stream_recvSelector___lam__0(v_waiter_2534_, v_pendingProducer_2535_, v_interestWaiter_2536_, v_closed_boxed_2545_, v_knownSize_2538_, v_pendingIncompleteChunk_2539_, v_closeError_2540_, v_a_5670__boxed_2546_, v_____r_2542_, v___y_2543_);
lean_dec(v___y_2543_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3(lean_object* v_waiter_2552_, uint8_t v_a_2553_, lean_object* v___y_2554_, lean_object* v_x_2555_){
_start:
{
if (lean_obj_tag(v_x_2555_) == 0)
{
lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2565_; 
lean_dec_ref(v_waiter_2552_);
v_a_2557_ = lean_ctor_get(v_x_2555_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v_x_2555_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2559_ = v_x_2555_;
v_isShared_2560_ = v_isSharedCheck_2565_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v_x_2555_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2565_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___x_2562_; 
if (v_isShared_2560_ == 0)
{
v___x_2562_ = v___x_2559_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2557_);
v___x_2562_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
lean_object* v___x_2563_; 
v___x_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2562_);
return v___x_2563_;
}
}
}
else
{
lean_object* v_a_2566_; lean_object* v_pendingProducer_2567_; lean_object* v_pendingConsumer_2568_; lean_object* v_interestWaiter_2569_; uint8_t v_closed_2570_; lean_object* v_knownSize_2571_; lean_object* v_pendingIncompleteChunk_2572_; lean_object* v_closeError_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___f_2576_; 
v_a_2566_ = lean_ctor_get(v_x_2555_, 0);
lean_inc(v_a_2566_);
lean_dec_ref_known(v_x_2555_, 1);
v_pendingProducer_2567_ = lean_ctor_get(v_a_2566_, 0);
lean_inc_n(v_pendingProducer_2567_, 2);
v_pendingConsumer_2568_ = lean_ctor_get(v_a_2566_, 1);
lean_inc(v_pendingConsumer_2568_);
v_interestWaiter_2569_ = lean_ctor_get(v_a_2566_, 2);
lean_inc_n(v_interestWaiter_2569_, 2);
v_closed_2570_ = lean_ctor_get_uint8(v_a_2566_, sizeof(void*)*6);
v_knownSize_2571_ = lean_ctor_get(v_a_2566_, 3);
lean_inc_n(v_knownSize_2571_, 2);
v_pendingIncompleteChunk_2572_ = lean_ctor_get(v_a_2566_, 4);
lean_inc_n(v_pendingIncompleteChunk_2572_, 2);
v_closeError_2573_ = lean_ctor_get(v_a_2566_, 5);
lean_inc_n(v_closeError_2573_, 2);
lean_dec(v_a_2566_);
v___x_2574_ = lean_box(v_closed_2570_);
v___x_2575_ = lean_box(v_a_2553_);
lean_inc_ref(v_waiter_2552_);
v___f_2576_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__0___boxed), 11, 8);
lean_closure_set(v___f_2576_, 0, v_waiter_2552_);
lean_closure_set(v___f_2576_, 1, v_pendingProducer_2567_);
lean_closure_set(v___f_2576_, 2, v_interestWaiter_2569_);
lean_closure_set(v___f_2576_, 3, v___x_2574_);
lean_closure_set(v___f_2576_, 4, v_knownSize_2571_);
lean_closure_set(v___f_2576_, 5, v_pendingIncompleteChunk_2572_);
lean_closure_set(v___f_2576_, 6, v_closeError_2573_);
lean_closure_set(v___f_2576_, 7, v___x_2575_);
if (lean_obj_tag(v_pendingConsumer_2568_) == 0)
{
lean_object* v___x_2577_; lean_object* v___x_2578_; 
lean_dec_ref(v___f_2576_);
v___x_2577_ = lean_box(0);
v___x_2578_ = l_Std_Http_Body_Stream_recvSelector___lam__0(v_waiter_2552_, v_pendingProducer_2567_, v_interestWaiter_2569_, v_closed_2570_, v_knownSize_2571_, v_pendingIncompleteChunk_2572_, v_closeError_2573_, v_a_2553_, v___x_2577_, v___y_2554_);
return v___x_2578_;
}
else
{
lean_object* v___f_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
lean_dec_ref_known(v_pendingConsumer_2568_, 1);
lean_dec(v_closeError_2573_);
lean_dec(v_pendingIncompleteChunk_2572_);
lean_dec(v_knownSize_2571_);
lean_dec(v_interestWaiter_2569_);
lean_dec(v_pendingProducer_2567_);
lean_dec_ref(v_waiter_2552_);
lean_inc(v___y_2554_);
v___f_2579_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2579_, 0, v___f_2576_);
lean_closure_set(v___f_2579_, 1, v___y_2554_);
v___x_2580_ = lean_unsigned_to_nat(0u);
v___x_2581_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1));
v___x_2582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2580_, v_a_2553_, v___x_2581_, v___f_2579_);
return v___x_2582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___boxed(lean_object* v_waiter_2583_, lean_object* v_a_2584_, lean_object* v___y_2585_, lean_object* v_x_2586_, lean_object* v___y_2587_){
_start:
{
uint8_t v_a_5711__boxed_2588_; lean_object* v_res_2589_; 
v_a_5711__boxed_2588_ = lean_unbox(v_a_2584_);
v_res_2589_ = l_Std_Http_Body_Stream_recvSelector___lam__3(v_waiter_2583_, v_a_5711__boxed_2588_, v___y_2585_, v_x_2586_);
lean_dec(v___y_2585_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2(lean_object* v___x_2590_, lean_object* v___y_2591_){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2590_);
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
return v___x_2594_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2___boxed(lean_object* v___x_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_){
_start:
{
lean_object* v_res_2598_; 
v_res_2598_ = l_Std_Http_Body_Stream_recvSelector___lam__2(v___x_2595_, v___y_2596_);
lean_dec(v___y_2596_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4(lean_object* v_waiter_2601_, lean_object* v___y_2602_, lean_object* v_x_2603_){
_start:
{
if (lean_obj_tag(v_x_2603_) == 0)
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2613_; 
lean_dec_ref(v_waiter_2601_);
v_a_2605_ = lean_ctor_get(v_x_2603_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v_x_2603_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2607_ = v_x_2603_;
v_isShared_2608_ = v_isSharedCheck_2613_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v_x_2603_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2613_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2610_; 
if (v_isShared_2608_ == 0)
{
v___x_2610_ = v___x_2607_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2605_);
v___x_2610_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
lean_object* v___x_2611_; 
v___x_2611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2610_);
return v___x_2611_;
}
}
}
else
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2630_; 
v_a_2614_ = lean_ctor_get(v_x_2603_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v_x_2603_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2616_ = v_x_2603_;
v_isShared_2617_ = v_isSharedCheck_2630_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v_x_2603_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2630_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
uint8_t v___x_2618_; 
v___x_2618_ = lean_unbox(v_a_2614_);
if (v___x_2618_ == 0)
{
lean_object* v___f_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2623_; 
lean_inc(v___y_2602_);
lean_inc(v_a_2614_);
v___f_2619_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2619_, 0, v_waiter_2601_);
lean_closure_set(v___f_2619_, 1, v_a_2614_);
lean_closure_set(v___f_2619_, 2, v___y_2602_);
v___x_2620_ = lean_unsigned_to_nat(0u);
v___x_2621_ = lean_st_ref_get(v___y_2602_);
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 0, v___x_2621_);
v___x_2623_ = v___x_2616_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v___x_2621_);
v___x_2623_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
lean_object* v___x_2624_; uint8_t v___x_2625_; lean_object* v___x_2626_; 
v___x_2624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2623_);
v___x_2625_ = lean_unbox(v_a_2614_);
lean_dec(v_a_2614_);
v___x_2626_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2620_, v___x_2625_, v___x_2624_, v___f_2619_);
return v___x_2626_;
}
}
else
{
lean_object* v___f_2628_; lean_object* v___x_2629_; 
lean_del_object(v___x_2616_);
lean_dec(v_a_2614_);
v___f_2628_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0));
v___x_2629_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(v_waiter_2601_, v___f_2628_, v___y_2602_);
return v___x_2629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4___boxed(lean_object* v_waiter_2631_, lean_object* v___y_2632_, lean_object* v_x_2633_, lean_object* v___y_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l_Std_Http_Body_Stream_recvSelector___lam__4(v_waiter_2631_, v___y_2632_, v_x_2633_);
lean_dec(v___y_2632_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5(lean_object* v___y_2636_, lean_object* v___f_2637_, lean_object* v_x_2638_){
_start:
{
if (lean_obj_tag(v_x_2638_) == 0)
{
lean_object* v___x_2640_; 
lean_dec_ref(v___f_2637_);
v___x_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2640_, 0, v_x_2638_);
return v___x_2640_;
}
else
{
lean_object* v___x_2641_; uint8_t v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
lean_dec_ref_known(v_x_2638_, 1);
v___x_2641_ = lean_unsigned_to_nat(0u);
v___x_2642_ = 0;
v___x_2643_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(v___y_2636_);
v___x_2644_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2641_, v___x_2642_, v___x_2643_, v___f_2637_);
return v___x_2644_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5___boxed(lean_object* v___y_2645_, lean_object* v___f_2646_, lean_object* v_x_2647_, lean_object* v___y_2648_){
_start:
{
lean_object* v_res_2649_; 
v_res_2649_ = l_Std_Http_Body_Stream_recvSelector___lam__5(v___y_2645_, v___f_2646_, v_x_2647_);
lean_dec(v___y_2645_);
return v_res_2649_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6(lean_object* v_waiter_2650_, lean_object* v___y_2651_){
_start:
{
lean_object* v___f_2653_; lean_object* v___f_2654_; lean_object* v___x_2655_; uint8_t v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
lean_inc_n(v___y_2651_, 2);
v___f_2653_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__4___boxed), 4, 2);
lean_closure_set(v___f_2653_, 0, v_waiter_2650_);
lean_closure_set(v___f_2653_, 1, v___y_2651_);
v___f_2654_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__5___boxed), 4, 2);
lean_closure_set(v___f_2654_, 0, v___y_2651_);
lean_closure_set(v___f_2654_, 1, v___f_2653_);
v___x_2655_ = lean_unsigned_to_nat(0u);
v___x_2656_ = 0;
v___x_2657_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_2651_);
v___x_2658_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2655_, v___x_2656_, v___x_2657_, v___f_2654_);
return v___x_2658_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6___boxed(lean_object* v_waiter_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v_res_2662_; 
v_res_2662_ = l_Std_Http_Body_Stream_recvSelector___lam__6(v_waiter_2659_, v___y_2660_);
lean_dec(v___y_2660_);
return v_res_2662_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7(lean_object* v_stream_2663_, lean_object* v_waiter_2664_){
_start:
{
lean_object* v___f_2666_; lean_object* v___x_2667_; 
v___f_2666_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__6___boxed), 3, 1);
lean_closure_set(v___f_2666_, 0, v_waiter_2664_);
v___x_2667_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2663_, v___f_2666_);
return v___x_2667_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7___boxed(lean_object* v_stream_2668_, lean_object* v_waiter_2669_, lean_object* v___y_2670_){
_start:
{
lean_object* v_res_2671_; 
v_res_2671_ = l_Std_Http_Body_Stream_recvSelector___lam__7(v_stream_2668_, v_waiter_2669_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector(lean_object* v_stream_2673_){
_start:
{
lean_object* v___f_2674_; lean_object* v___f_2675_; lean_object* v___f_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___f_2674_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___closed__0));
lean_inc_ref_n(v_stream_2673_, 2);
v___f_2675_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__7___boxed), 3, 1);
lean_closure_set(v___f_2675_, 0, v_stream_2673_);
v___f_2676_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecvBody___closed__1));
v___x_2677_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_2677_, 0, lean_box(0));
lean_closure_set(v___x_2677_, 1, lean_box(0));
lean_closure_set(v___x_2677_, 2, v_stream_2673_);
lean_closure_set(v___x_2677_, 3, v___f_2676_);
v___x_2678_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_2678_, 0, lean_box(0));
lean_closure_set(v___x_2678_, 1, lean_box(0));
lean_closure_set(v___x_2678_, 2, v_stream_2673_);
lean_closure_set(v___x_2678_, 3, v___f_2674_);
v___x_2679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2677_);
lean_ctor_set(v___x_2679_, 1, v___f_2675_);
lean_ctor_set(v___x_2679_, 2, v___x_2678_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1(lean_object* v_step_2680_, lean_object* v_acc_2681_, lean_object* v___f_2682_, lean_object* v_x_2683_){
_start:
{
if (lean_obj_tag(v_x_2683_) == 0)
{
lean_object* v_a_2685_; lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2693_; 
lean_dec_ref(v___f_2682_);
lean_dec(v_acc_2681_);
lean_dec_ref(v_step_2680_);
v_a_2685_ = lean_ctor_get(v_x_2683_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v_x_2683_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2687_ = v_x_2683_;
v_isShared_2688_ = v_isSharedCheck_2693_;
goto v_resetjp_2686_;
}
else
{
lean_inc(v_a_2685_);
lean_dec(v_x_2683_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2693_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
lean_object* v___x_2690_; 
if (v_isShared_2688_ == 0)
{
v___x_2690_ = v___x_2687_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2685_);
v___x_2690_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
lean_object* v___x_2691_; 
v___x_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2690_);
return v___x_2691_;
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2707_; 
v_a_2694_ = lean_ctor_get(v_x_2683_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v_x_2683_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2696_ = v_x_2683_;
v_isShared_2697_ = v_isSharedCheck_2707_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v_x_2683_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2707_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
if (lean_obj_tag(v_a_2694_) == 1)
{
lean_object* v_val_2698_; lean_object* v___x_2699_; uint8_t v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; 
lean_del_object(v___x_2696_);
v_val_2698_ = lean_ctor_get(v_a_2694_, 0);
lean_inc(v_val_2698_);
lean_dec_ref_known(v_a_2694_, 1);
v___x_2699_ = lean_unsigned_to_nat(0u);
v___x_2700_ = 0;
v___x_2701_ = lean_apply_3(v_step_2680_, v_val_2698_, v_acc_2681_, lean_box(0));
v___x_2702_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2699_, v___x_2700_, v___x_2701_, v___f_2682_);
return v___x_2702_;
}
else
{
lean_object* v___x_2704_; 
lean_dec(v_a_2694_);
lean_dec_ref(v___f_2682_);
lean_dec_ref(v_step_2680_);
if (v_isShared_2697_ == 0)
{
lean_ctor_set(v___x_2696_, 0, v_acc_2681_);
v___x_2704_ = v___x_2696_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_acc_2681_);
v___x_2704_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
lean_object* v___x_2705_; 
v___x_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2704_);
return v___x_2705_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1___boxed(lean_object* v_step_2708_, lean_object* v_acc_2709_, lean_object* v___f_2710_, lean_object* v_x_2711_, lean_object* v___y_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1(v_step_2708_, v_acc_2709_, v___f_2710_, v_x_2711_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0(lean_object* v_step_2714_, lean_object* v_stream_2715_, lean_object* v_x_2716_){
_start:
{
if (lean_obj_tag(v_x_2716_) == 0)
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2726_; 
lean_dec_ref(v_stream_2715_);
lean_dec_ref(v_step_2714_);
v_a_2718_ = lean_ctor_get(v_x_2716_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v_x_2716_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2720_ = v_x_2716_;
v_isShared_2721_ = v_isSharedCheck_2726_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v_x_2716_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2726_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
lean_object* v___x_2724_; 
v___x_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2723_);
return v___x_2724_;
}
}
}
else
{
lean_object* v_a_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2744_; 
v_a_2727_ = lean_ctor_get(v_x_2716_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v_x_2716_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2729_ = v_x_2716_;
v_isShared_2730_ = v_isSharedCheck_2744_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_a_2727_);
lean_dec(v_x_2716_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2744_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
if (lean_obj_tag(v_a_2727_) == 0)
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2741_; 
lean_dec_ref(v_stream_2715_);
lean_dec_ref(v_step_2714_);
v_a_2731_ = lean_ctor_get(v_a_2727_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v_a_2727_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2733_ = v_a_2727_;
v_isShared_2734_ = v_isSharedCheck_2741_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v_a_2727_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2741_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2730_ == 0)
{
lean_ctor_set(v___x_2729_, 0, v_a_2731_);
v___x_2736_ = v___x_2729_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2731_);
v___x_2736_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
lean_object* v___x_2738_; 
if (v_isShared_2734_ == 0)
{
lean_ctor_set(v___x_2733_, 0, v___x_2736_);
v___x_2738_ = v___x_2733_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v___x_2736_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
}
else
{
lean_object* v_a_2742_; lean_object* v___x_2743_; 
lean_del_object(v___x_2729_);
v_a_2742_ = lean_ctor_get(v_a_2727_, 0);
lean_inc(v_a_2742_);
lean_dec_ref_known(v_a_2727_, 1);
v___x_2743_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(v_step_2714_, v_stream_2715_, v_a_2742_);
return v___x_2743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0___boxed(lean_object* v_step_2745_, lean_object* v_stream_2746_, lean_object* v_x_2747_, lean_object* v___y_2748_){
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0(v_step_2745_, v_stream_2746_, v_x_2747_);
return v_res_2749_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(lean_object* v_step_2750_, lean_object* v_stream_2751_, lean_object* v_acc_2752_){
_start:
{
lean_object* v___f_2754_; lean_object* v___f_2755_; lean_object* v___x_2756_; uint8_t v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
lean_inc_ref(v_stream_2751_);
lean_inc_ref(v_step_2750_);
v___f_2754_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2754_, 0, v_step_2750_);
lean_closure_set(v___f_2754_, 1, v_stream_2751_);
v___f_2755_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_2755_, 0, v_step_2750_);
lean_closure_set(v___f_2755_, 1, v_acc_2752_);
lean_closure_set(v___f_2755_, 2, v___f_2754_);
v___x_2756_ = lean_unsigned_to_nat(0u);
v___x_2757_ = 0;
v___x_2758_ = l_Std_Http_Body_Stream_recv(v_stream_2751_);
v___x_2759_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2756_, v___x_2757_, v___x_2758_, v___f_2755_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___boxed(lean_object* v_step_2760_, lean_object* v_stream_2761_, lean_object* v_acc_2762_, lean_object* v_a_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(v_step_2760_, v_stream_2761_, v_acc_2762_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop(lean_object* v_00_u03b2_2765_, lean_object* v_step_2766_, lean_object* v_stream_2767_, lean_object* v_acc_2768_){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(v_step_2766_, v_stream_2767_, v_acc_2768_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___boxed(lean_object* v_00_u03b2_2771_, lean_object* v_step_2772_, lean_object* v_stream_2773_, lean_object* v_acc_2774_, lean_object* v_a_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop(v_00_u03b2_2771_, v_step_2772_, v_stream_2773_, v_acc_2774_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg(lean_object* v_stream_2777_, lean_object* v_acc_2778_, lean_object* v_step_2779_){
_start:
{
lean_object* v___x_2781_; 
v___x_2781_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(v_step_2779_, v_stream_2777_, v_acc_2778_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___boxed(lean_object* v_stream_2782_, lean_object* v_acc_2783_, lean_object* v_step_2784_, lean_object* v_a_2785_){
_start:
{
lean_object* v_res_2786_; 
v_res_2786_ = l_Std_Http_Body_Stream_forIn___redArg(v_stream_2782_, v_acc_2783_, v_step_2784_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn(lean_object* v_00_u03b2_2787_, lean_object* v_stream_2788_, lean_object* v_acc_2789_, lean_object* v_step_2790_){
_start:
{
lean_object* v___x_2792_; 
v___x_2792_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(v_step_2790_, v_stream_2788_, v_acc_2789_);
return v___x_2792_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___boxed(lean_object* v_00_u03b2_2793_, lean_object* v_stream_2794_, lean_object* v_acc_2795_, lean_object* v_step_2796_, lean_object* v_a_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l_Std_Http_Body_Stream_forIn(v_00_u03b2_2793_, v_stream_2794_, v_acc_2795_, v_step_2796_);
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0(lean_object* v___y_2799_){
_start:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___x_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2801_, 0, v___y_2799_);
v___x_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2801_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0___boxed(lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0(v___y_2803_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1(lean_object* v_x_2806_){
_start:
{
lean_object* v___x_2808_; 
v___x_2808_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0));
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1___boxed(lean_object* v_x_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1(v_x_2809_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3(lean_object* v_step_2812_, lean_object* v_acc_2813_, lean_object* v_a_2814_, lean_object* v___f_2815_, lean_object* v_x_2816_){
_start:
{
if (lean_obj_tag(v_x_2816_) == 0)
{
lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2826_; 
lean_dec_ref(v___f_2815_);
lean_dec(v_acc_2813_);
lean_dec_ref(v_step_2812_);
v_a_2818_ = lean_ctor_get(v_x_2816_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_x_2816_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2820_ = v_x_2816_;
v_isShared_2821_ = v_isSharedCheck_2826_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v_x_2816_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2826_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2823_; 
if (v_isShared_2821_ == 0)
{
v___x_2823_ = v___x_2820_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2818_);
v___x_2823_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
lean_object* v___x_2824_; 
v___x_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2823_);
return v___x_2824_;
}
}
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2840_; 
v_a_2827_ = lean_ctor_get(v_x_2816_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v_x_2816_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2829_ = v_x_2816_;
v_isShared_2830_ = v_isSharedCheck_2840_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v_x_2816_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2840_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
if (lean_obj_tag(v_a_2827_) == 1)
{
lean_object* v_val_2831_; lean_object* v___x_2832_; uint8_t v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
lean_del_object(v___x_2829_);
v_val_2831_ = lean_ctor_get(v_a_2827_, 0);
lean_inc(v_val_2831_);
lean_dec_ref_known(v_a_2827_, 1);
v___x_2832_ = lean_unsigned_to_nat(0u);
v___x_2833_ = 0;
lean_inc_ref(v_a_2814_);
v___x_2834_ = lean_apply_4(v_step_2812_, v_val_2831_, v_acc_2813_, v_a_2814_, lean_box(0));
v___x_2835_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2832_, v___x_2833_, v___x_2834_, v___f_2815_);
return v___x_2835_;
}
else
{
lean_object* v___x_2837_; 
lean_dec(v_a_2827_);
lean_dec_ref(v___f_2815_);
lean_dec_ref(v_step_2812_);
if (v_isShared_2830_ == 0)
{
lean_ctor_set(v___x_2829_, 0, v_acc_2813_);
v___x_2837_ = v___x_2829_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_acc_2813_);
v___x_2837_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
lean_object* v___x_2838_; 
v___x_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2837_);
return v___x_2838_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3___boxed(lean_object* v_step_2841_, lean_object* v_acc_2842_, lean_object* v_a_2843_, lean_object* v___f_2844_, lean_object* v_x_2845_, lean_object* v___y_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3(v_step_2841_, v_acc_2842_, v_a_2843_, v___f_2844_, v_x_2845_);
lean_dec_ref(v_a_2843_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5(lean_object* v_x_2848_){
_start:
{
if (lean_obj_tag(v_x_2848_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2858_; 
v_a_2850_ = lean_ctor_get(v_x_2848_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2852_ = v_x_2848_;
v_isShared_2853_ = v_isSharedCheck_2858_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v_x_2848_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2858_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
lean_object* v___x_2856_; 
v___x_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2855_);
return v___x_2856_;
}
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2869_; 
v_a_2859_ = lean_ctor_get(v_x_2848_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_x_2848_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2861_ = v_x_2848_;
v_isShared_2862_ = v_isSharedCheck_2869_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v_x_2848_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2869_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v_token_2863_; lean_object* v___x_2864_; lean_object* v___x_2866_; 
v_token_2863_ = lean_ctor_get(v_a_2859_, 1);
lean_inc_ref(v_token_2863_);
lean_dec(v_a_2859_);
v___x_2864_ = l_Std_CancellationToken_selector(v_token_2863_);
if (v_isShared_2862_ == 0)
{
lean_ctor_set(v___x_2861_, 0, v___x_2864_);
v___x_2866_ = v___x_2861_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v___x_2864_);
v___x_2866_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
lean_object* v___x_2867_; 
v___x_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2866_);
return v___x_2867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5___boxed(lean_object* v_x_2870_, lean_object* v___y_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5(v_x_2870_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4(lean_object* v_stream_2873_, lean_object* v___f_2874_, lean_object* v___f_2875_, lean_object* v___f_2876_, lean_object* v_x_2877_){
_start:
{
if (lean_obj_tag(v_x_2877_) == 0)
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2887_; 
lean_dec_ref(v___f_2876_);
lean_dec_ref(v___f_2875_);
lean_dec_ref(v___f_2874_);
lean_dec_ref(v_stream_2873_);
v_a_2879_ = lean_ctor_get(v_x_2877_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v_x_2877_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2881_ = v_x_2877_;
v_isShared_2882_ = v_isSharedCheck_2887_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v_x_2877_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2887_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
lean_object* v___x_2885_; 
v___x_2885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2884_);
return v___x_2885_;
}
}
}
else
{
lean_object* v_a_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; uint8_t v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; 
v_a_2888_ = lean_ctor_get(v_x_2877_, 0);
lean_inc(v_a_2888_);
lean_dec_ref_known(v_x_2877_, 1);
v___x_2889_ = l_Std_Http_Body_Stream_recvSelector(v_stream_2873_);
v___x_2890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2889_);
lean_ctor_set(v___x_2890_, 1, v___f_2874_);
v___x_2891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2891_, 0, v_a_2888_);
lean_ctor_set(v___x_2891_, 1, v___f_2875_);
v___x_2892_ = lean_unsigned_to_nat(2u);
v___x_2893_ = lean_mk_empty_array_with_capacity(v___x_2892_);
v___x_2894_ = lean_array_push(v___x_2893_, v___x_2890_);
v___x_2895_ = lean_array_push(v___x_2894_, v___x_2891_);
v___x_2896_ = lean_unsigned_to_nat(0u);
v___x_2897_ = 0;
v___x_2898_ = l_Std_Async_Selectable_one___redArg(v___x_2895_);
v___x_2899_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2896_, v___x_2897_, v___x_2898_, v___f_2876_);
return v___x_2899_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4___boxed(lean_object* v_stream_2900_, lean_object* v___f_2901_, lean_object* v___f_2902_, lean_object* v___f_2903_, lean_object* v_x_2904_, lean_object* v___y_2905_){
_start:
{
lean_object* v_res_2906_; 
v_res_2906_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4(v_stream_2900_, v___f_2901_, v___f_2902_, v___f_2903_, v_x_2904_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2___boxed(lean_object* v_step_2909_, lean_object* v_stream_2910_, lean_object* v_a_2911_, lean_object* v_x_2912_, lean_object* v___y_2913_){
_start:
{
lean_object* v_res_2914_; 
v_res_2914_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2(v_step_2909_, v_stream_2910_, v_a_2911_, v_x_2912_);
lean_dec_ref(v_a_2911_);
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(lean_object* v_step_2916_, lean_object* v_stream_2917_, lean_object* v_acc_2918_, lean_object* v_a_2919_){
_start:
{
lean_object* v___f_2921_; lean_object* v___f_2922_; lean_object* v___f_2923_; lean_object* v___f_2924_; lean_object* v___f_2925_; lean_object* v___f_2926_; lean_object* v___x_2927_; uint8_t v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___f_2921_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__0));
v___f_2922_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__1));
lean_inc_ref_n(v_a_2919_, 3);
lean_inc_ref(v_stream_2917_);
lean_inc_ref(v_step_2916_);
v___f_2923_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_2923_, 0, v_step_2916_);
lean_closure_set(v___f_2923_, 1, v_stream_2917_);
lean_closure_set(v___f_2923_, 2, v_a_2919_);
v___f_2924_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_2924_, 0, v_step_2916_);
lean_closure_set(v___f_2924_, 1, v_acc_2918_);
lean_closure_set(v___f_2924_, 2, v_a_2919_);
lean_closure_set(v___f_2924_, 3, v___f_2923_);
v___f_2925_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2925_, 0, v_stream_2917_);
lean_closure_set(v___f_2925_, 1, v___f_2921_);
lean_closure_set(v___f_2925_, 2, v___f_2922_);
lean_closure_set(v___f_2925_, 3, v___f_2924_);
v___f_2926_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__2));
v___x_2927_ = lean_unsigned_to_nat(0u);
v___x_2928_ = 0;
v___x_2929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2929_, 0, v_a_2919_);
v___x_2930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2930_, 0, v___x_2929_);
v___x_2931_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2927_, v___x_2928_, v___x_2930_, v___f_2926_);
v___x_2932_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2927_, v___x_2928_, v___x_2931_, v___f_2925_);
return v___x_2932_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2(lean_object* v_step_2933_, lean_object* v_stream_2934_, lean_object* v_a_2935_, lean_object* v_x_2936_){
_start:
{
if (lean_obj_tag(v_x_2936_) == 0)
{
lean_object* v_a_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2946_; 
lean_dec_ref(v_stream_2934_);
lean_dec_ref(v_step_2933_);
v_a_2938_ = lean_ctor_get(v_x_2936_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_x_2936_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2940_ = v_x_2936_;
v_isShared_2941_ = v_isSharedCheck_2946_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_a_2938_);
lean_dec(v_x_2936_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2946_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2943_; 
if (v_isShared_2941_ == 0)
{
v___x_2943_ = v___x_2940_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_a_2938_);
v___x_2943_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
lean_object* v___x_2944_; 
v___x_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
return v___x_2944_;
}
}
}
else
{
lean_object* v_a_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2964_; 
v_a_2947_ = lean_ctor_get(v_x_2936_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v_x_2936_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2949_ = v_x_2936_;
v_isShared_2950_ = v_isSharedCheck_2964_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_a_2947_);
lean_dec(v_x_2936_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2964_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
if (lean_obj_tag(v_a_2947_) == 0)
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2961_; 
lean_dec_ref(v_stream_2934_);
lean_dec_ref(v_step_2933_);
v_a_2951_ = lean_ctor_get(v_a_2947_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v_a_2947_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2953_ = v_a_2947_;
v_isShared_2954_ = v_isSharedCheck_2961_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v_a_2947_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2961_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2956_; 
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 0, v_a_2951_);
v___x_2956_ = v___x_2949_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2951_);
v___x_2956_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
lean_object* v___x_2958_; 
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 0, v___x_2956_);
v___x_2958_ = v___x_2953_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2956_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2963_; 
lean_del_object(v___x_2949_);
v_a_2962_ = lean_ctor_get(v_a_2947_, 0);
lean_inc(v_a_2962_);
lean_dec_ref_known(v_a_2947_, 1);
v___x_2963_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(v_step_2933_, v_stream_2934_, v_a_2962_, v_a_2935_);
return v___x_2963_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___boxed(lean_object* v_step_2965_, lean_object* v_stream_2966_, lean_object* v_acc_2967_, lean_object* v_a_2968_, lean_object* v_a_2969_){
_start:
{
lean_object* v_res_2970_; 
v_res_2970_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(v_step_2965_, v_stream_2966_, v_acc_2967_, v_a_2968_);
lean_dec_ref(v_a_2968_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop(lean_object* v_00_u03b2_2971_, lean_object* v_step_2972_, lean_object* v_stream_2973_, lean_object* v_acc_2974_, lean_object* v_a_2975_){
_start:
{
lean_object* v___x_2977_; 
v___x_2977_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(v_step_2972_, v_stream_2973_, v_acc_2974_, v_a_2975_);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___boxed(lean_object* v_00_u03b2_2978_, lean_object* v_step_2979_, lean_object* v_stream_2980_, lean_object* v_acc_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_){
_start:
{
lean_object* v_res_2984_; 
v_res_2984_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop(v_00_u03b2_2978_, v_step_2979_, v_stream_2980_, v_acc_2981_, v_a_2982_);
lean_dec_ref(v_a_2982_);
return v_res_2984_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg(lean_object* v_stream_2985_, lean_object* v_acc_2986_, lean_object* v_step_2987_, lean_object* v_a_2988_){
_start:
{
lean_object* v___x_2990_; 
v___x_2990_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(v_step_2987_, v_stream_2985_, v_acc_2986_, v_a_2988_);
return v___x_2990_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___boxed(lean_object* v_stream_2991_, lean_object* v_acc_2992_, lean_object* v_step_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_){
_start:
{
lean_object* v_res_2996_; 
v_res_2996_ = l_Std_Http_Body_Stream_forIn_x27___redArg(v_stream_2991_, v_acc_2992_, v_step_2993_, v_a_2994_);
lean_dec_ref(v_a_2994_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27(lean_object* v_00_u03b2_2997_, lean_object* v_stream_2998_, lean_object* v_acc_2999_, lean_object* v_step_3000_, lean_object* v_a_3001_){
_start:
{
lean_object* v___x_3003_; 
v___x_3003_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(v_step_3000_, v_stream_2998_, v_acc_2999_, v_a_3001_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___boxed(lean_object* v_00_u03b2_3004_, lean_object* v_stream_3005_, lean_object* v_acc_3006_, lean_object* v_step_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_){
_start:
{
lean_object* v_res_3010_; 
v_res_3010_ = l_Std_Http_Body_Stream_forIn_x27(v_00_u03b2_3004_, v_stream_3005_, v_acc_3006_, v_step_3007_, v_a_3008_);
lean_dec_ref(v_a_3008_);
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0(lean_object* v_x_3013_){
_start:
{
if (lean_obj_tag(v_x_3013_) == 0)
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3023_; 
v_a_3015_ = lean_ctor_get(v_x_3013_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v_x_3013_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3017_ = v_x_3013_;
v_isShared_3018_ = v_isSharedCheck_3023_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v_x_3013_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3023_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3015_);
v___x_3020_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
lean_object* v___x_3021_; 
v___x_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3020_);
return v___x_3021_;
}
}
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3034_; 
v_a_3024_ = lean_ctor_get(v_x_3013_, 0);
v_isSharedCheck_3034_ = !lean_is_exclusive(v_x_3013_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_3026_ = v_x_3013_;
v_isShared_3027_ = v_isSharedCheck_3034_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v_x_3013_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3034_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v_token_3028_; lean_object* v___x_3029_; lean_object* v___x_3031_; 
v_token_3028_ = lean_ctor_get(v_a_3024_, 1);
lean_inc_ref(v_token_3028_);
lean_dec(v_a_3024_);
v___x_3029_ = l_Std_CancellationToken_selector(v_token_3028_);
if (v_isShared_3027_ == 0)
{
lean_ctor_set(v___x_3026_, 0, v___x_3029_);
v___x_3031_ = v___x_3026_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v___x_3029_);
v___x_3031_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
lean_object* v___x_3032_; 
v___x_3032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3031_);
return v___x_3032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0___boxed(lean_object* v_x_3035_, lean_object* v___y_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0(v_x_3035_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1(lean_object* v_x_3038_){
_start:
{
lean_object* v___x_3040_; 
v___x_3040_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0));
return v___x_3040_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1___boxed(lean_object* v_x_3041_, lean_object* v___y_3042_){
_start:
{
lean_object* v_res_3043_; 
v_res_3043_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1(v_x_3041_);
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2(lean_object* v___y_3044_){
_start:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3046_, 0, v___y_3044_);
v___x_3047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3046_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2___boxed(lean_object* v___y_3048_, lean_object* v___y_3049_){
_start:
{
lean_object* v_res_3050_; 
v_res_3050_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2(v___y_3048_);
return v_res_3050_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3(lean_object* v_stream_3051_, lean_object* v___f_3052_, lean_object* v___f_3053_, lean_object* v_x_3054_){
_start:
{
if (lean_obj_tag(v_x_3054_) == 0)
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3064_; 
lean_dec_ref(v___f_3053_);
lean_dec_ref(v___f_3052_);
lean_dec_ref(v_stream_3051_);
v_a_3056_ = lean_ctor_get(v_x_3054_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v_x_3054_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3058_ = v_x_3054_;
v_isShared_3059_ = v_isSharedCheck_3064_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v_x_3054_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3064_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3061_; 
if (v_isShared_3059_ == 0)
{
v___x_3061_ = v___x_3058_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3056_);
v___x_3061_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
lean_object* v___x_3062_; 
v___x_3062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3061_);
return v___x_3062_;
}
}
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v_a_3065_ = lean_ctor_get(v_x_3054_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v_x_3054_, 1);
v___x_3066_ = l_Std_Http_Body_Stream_recvSelector(v_stream_3051_);
v___x_3067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3066_);
lean_ctor_set(v___x_3067_, 1, v___f_3052_);
v___x_3068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3068_, 0, v_a_3065_);
lean_ctor_set(v___x_3068_, 1, v___f_3053_);
v___x_3069_ = lean_unsigned_to_nat(2u);
v___x_3070_ = lean_mk_empty_array_with_capacity(v___x_3069_);
v___x_3071_ = lean_array_push(v___x_3070_, v___x_3067_);
v___x_3072_ = lean_array_push(v___x_3071_, v___x_3068_);
v___x_3073_ = l_Std_Async_Selectable_one___redArg(v___x_3072_);
return v___x_3073_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3___boxed(lean_object* v_stream_3074_, lean_object* v___f_3075_, lean_object* v___f_3076_, lean_object* v_x_3077_, lean_object* v___y_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3(v_stream_3074_, v___f_3075_, v___f_3076_, v_x_3077_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4(lean_object* v___f_3080_, lean_object* v___f_3081_, lean_object* v___f_3082_, lean_object* v_stream_3083_, lean_object* v___y_3084_){
_start:
{
lean_object* v___f_3086_; lean_object* v___x_3087_; uint8_t v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___f_3086_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3___boxed), 5, 3);
lean_closure_set(v___f_3086_, 0, v_stream_3083_);
lean_closure_set(v___f_3086_, 1, v___f_3080_);
lean_closure_set(v___f_3086_, 2, v___f_3081_);
v___x_3087_ = lean_unsigned_to_nat(0u);
v___x_3088_ = 0;
lean_inc_ref(v___y_3084_);
v___x_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3089_, 0, v___y_3084_);
v___x_3090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3089_);
v___x_3091_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3087_, v___x_3088_, v___x_3090_, v___f_3082_);
v___x_3092_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3087_, v___x_3088_, v___x_3091_, v___f_3086_);
return v___x_3092_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4___boxed(lean_object* v___f_3093_, lean_object* v___f_3094_, lean_object* v___f_3095_, lean_object* v_stream_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_){
_start:
{
lean_object* v_res_3099_; 
v_res_3099_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4(v___f_3093_, v___f_3094_, v___f_3095_, v_stream_3096_, v___y_3097_);
lean_dec_ref(v___y_3097_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1(lean_object* v_toPure_3110_, lean_object* v_result_3111_, lean_object* v_maximumSize_3112_, lean_object* v_inst_3113_, lean_object* v_inst_3114_, lean_object* v_inst_3115_, lean_object* v_stream_3116_, lean_object* v_toBind_3117_, lean_object* v_____do__lift_3118_){
_start:
{
if (lean_obj_tag(v_____do__lift_3118_) == 0)
{
lean_object* v___x_3119_; 
lean_dec(v_toBind_3117_);
lean_dec_ref(v_stream_3116_);
lean_dec(v_inst_3115_);
lean_dec_ref(v_inst_3114_);
lean_dec_ref(v_inst_3113_);
lean_dec(v_maximumSize_3112_);
v___x_3119_ = lean_apply_2(v_toPure_3110_, lean_box(0), v_result_3111_);
return v___x_3119_;
}
else
{
lean_object* v_val_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3151_; 
lean_dec(v_toPure_3110_);
v_val_3120_ = lean_ctor_get(v_____do__lift_3118_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v_____do__lift_3118_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3122_ = v_____do__lift_3118_;
v_isShared_3123_ = v_isSharedCheck_3151_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_val_3120_);
lean_dec(v_____do__lift_3118_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3151_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v_data_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; uint8_t v___x_3128_; lean_object* v_result_3129_; 
v_data_3124_ = lean_ctor_get(v_val_3120_, 0);
lean_inc_ref(v_data_3124_);
lean_dec(v_val_3120_);
v___x_3125_ = lean_unsigned_to_nat(0u);
v___x_3126_ = lean_byte_array_size(v_result_3111_);
v___x_3127_ = lean_byte_array_size(v_data_3124_);
v___x_3128_ = 0;
v_result_3129_ = lean_byte_array_copy_slice(v_data_3124_, v___x_3125_, v_result_3111_, v___x_3126_, v___x_3127_, v___x_3128_);
lean_dec_ref(v_data_3124_);
if (lean_obj_tag(v_maximumSize_3112_) == 1)
{
lean_object* v_val_3130_; lean_object* v___x_3131_; uint64_t v___x_3132_; uint64_t v___x_3133_; uint8_t v___x_3134_; 
v_val_3130_ = lean_ctor_get(v_maximumSize_3112_, 0);
v___x_3131_ = lean_byte_array_size(v_result_3129_);
v___x_3132_ = lean_uint64_of_nat(v___x_3131_);
v___x_3133_ = lean_unbox_uint64(v_val_3130_);
v___x_3134_ = lean_uint64_dec_lt(v___x_3133_, v___x_3132_);
if (v___x_3134_ == 0)
{
lean_object* v___x_3135_; 
lean_del_object(v___x_3122_);
lean_dec(v_toBind_3117_);
v___x_3135_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3113_, v_inst_3114_, v_inst_3115_, v_stream_3116_, v_maximumSize_3112_, v_result_3129_);
return v___x_3135_;
}
else
{
lean_object* v_throw_3136_; lean_object* v___f_3137_; lean_object* v___x_3138_; uint64_t v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3146_; 
lean_inc(v_val_3130_);
v_throw_3136_ = lean_ctor_get(v_inst_3114_, 0);
lean_inc(v_throw_3136_);
v___f_3137_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__0), 7, 6);
lean_closure_set(v___f_3137_, 0, v_inst_3113_);
lean_closure_set(v___f_3137_, 1, v_inst_3114_);
lean_closure_set(v___f_3137_, 2, v_inst_3115_);
lean_closure_set(v___f_3137_, 3, v_stream_3116_);
lean_closure_set(v___f_3137_, 4, v_maximumSize_3112_);
lean_closure_set(v___f_3137_, 5, v_result_3129_);
v___x_3138_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0));
v___x_3139_ = lean_unbox_uint64(v_val_3130_);
lean_dec(v_val_3130_);
v___x_3140_ = lean_uint64_to_nat(v___x_3139_);
v___x_3141_ = l_Nat_reprFast(v___x_3140_);
v___x_3142_ = lean_string_append(v___x_3138_, v___x_3141_);
lean_dec_ref(v___x_3141_);
v___x_3143_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1));
v___x_3144_ = lean_string_append(v___x_3142_, v___x_3143_);
if (v_isShared_3123_ == 0)
{
lean_ctor_set_tag(v___x_3122_, 18);
lean_ctor_set(v___x_3122_, 0, v___x_3144_);
v___x_3146_ = v___x_3122_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v___x_3144_);
v___x_3146_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3147_ = lean_apply_2(v_throw_3136_, lean_box(0), v___x_3146_);
v___x_3148_ = lean_apply_4(v_toBind_3117_, lean_box(0), lean_box(0), v___x_3147_, v___f_3137_);
return v___x_3148_;
}
}
}
else
{
lean_object* v___x_3150_; 
lean_del_object(v___x_3122_);
lean_dec(v_toBind_3117_);
v___x_3150_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3113_, v_inst_3114_, v_inst_3115_, v_stream_3116_, v_maximumSize_3112_, v_result_3129_);
return v___x_3150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(lean_object* v_inst_3152_, lean_object* v_inst_3153_, lean_object* v_inst_3154_, lean_object* v_stream_3155_, lean_object* v_maximumSize_3156_, lean_object* v_result_3157_){
_start:
{
lean_object* v_toApplicative_3158_; lean_object* v_toBind_3159_; lean_object* v_toPure_3160_; lean_object* v___x_3161_; lean_object* v___f_3162_; lean_object* v___x_3163_; 
v_toApplicative_3158_ = lean_ctor_get(v_inst_3152_, 0);
v_toBind_3159_ = lean_ctor_get(v_inst_3152_, 1);
lean_inc_n(v_toBind_3159_, 2);
v_toPure_3160_ = lean_ctor_get(v_toApplicative_3158_, 1);
lean_inc(v_toPure_3160_);
lean_inc(v_inst_3154_);
lean_inc_ref(v_stream_3155_);
v___x_3161_ = lean_apply_1(v_inst_3154_, v_stream_3155_);
v___f_3162_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1), 9, 8);
lean_closure_set(v___f_3162_, 0, v_toPure_3160_);
lean_closure_set(v___f_3162_, 1, v_result_3157_);
lean_closure_set(v___f_3162_, 2, v_maximumSize_3156_);
lean_closure_set(v___f_3162_, 3, v_inst_3152_);
lean_closure_set(v___f_3162_, 4, v_inst_3153_);
lean_closure_set(v___f_3162_, 5, v_inst_3154_);
lean_closure_set(v___f_3162_, 6, v_stream_3155_);
lean_closure_set(v___f_3162_, 7, v_toBind_3159_);
v___x_3163_ = lean_apply_4(v_toBind_3159_, lean_box(0), lean_box(0), v___x_3161_, v___f_3162_);
return v___x_3163_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__0(lean_object* v_inst_3164_, lean_object* v_inst_3165_, lean_object* v_inst_3166_, lean_object* v_stream_3167_, lean_object* v_maximumSize_3168_, lean_object* v_result_3169_, lean_object* v_____r_3170_){
_start:
{
lean_object* v___x_3171_; 
v___x_3171_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3164_, v_inst_3165_, v_inst_3166_, v_stream_3167_, v_maximumSize_3168_, v_result_3169_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop(lean_object* v_m_3172_, lean_object* v_inst_3173_, lean_object* v_inst_3174_, lean_object* v_inst_3175_, lean_object* v_stream_3176_, lean_object* v_maximumSize_3177_, lean_object* v_result_3178_){
_start:
{
lean_object* v___x_3179_; 
v___x_3179_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3173_, v_inst_3174_, v_inst_3175_, v_stream_3176_, v_maximumSize_3177_, v_result_3178_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg___lam__0(lean_object* v_inst_3180_, lean_object* v_inst_3181_, lean_object* v_toPure_3182_, lean_object* v_result_3183_){
_start:
{
lean_object* v___x_3184_; 
v___x_3184_ = lean_apply_1(v_inst_3180_, v_result_3183_);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3194_; 
lean_dec(v_toPure_3182_);
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3187_ = v___x_3184_;
v_isShared_3188_ = v_isSharedCheck_3194_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_a_3185_);
lean_dec(v___x_3184_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3194_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v_throw_3189_; lean_object* v___x_3191_; 
v_throw_3189_ = lean_ctor_get(v_inst_3181_, 0);
lean_inc(v_throw_3189_);
lean_dec_ref(v_inst_3181_);
if (v_isShared_3188_ == 0)
{
lean_ctor_set_tag(v___x_3187_, 18);
v___x_3191_ = v___x_3187_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v_a_3185_);
v___x_3191_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
lean_object* v___x_3192_; 
v___x_3192_ = lean_apply_2(v_throw_3189_, lean_box(0), v___x_3191_);
return v___x_3192_;
}
}
}
else
{
lean_object* v_a_3195_; lean_object* v___x_3196_; 
lean_dec_ref(v_inst_3181_);
v_a_3195_ = lean_ctor_get(v___x_3184_, 0);
lean_inc(v_a_3195_);
lean_dec_ref_known(v___x_3184_, 1);
v___x_3196_ = lean_apply_2(v_toPure_3182_, lean_box(0), v_a_3195_);
return v___x_3196_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg(lean_object* v_inst_3197_, lean_object* v_inst_3198_, lean_object* v_inst_3199_, lean_object* v_inst_3200_, lean_object* v_stream_3201_, lean_object* v_maximumSize_3202_){
_start:
{
lean_object* v_toApplicative_3203_; lean_object* v_toBind_3204_; lean_object* v_toPure_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___f_3208_; lean_object* v___x_3209_; 
v_toApplicative_3203_ = lean_ctor_get(v_inst_3198_, 0);
v_toBind_3204_ = lean_ctor_get(v_inst_3198_, 1);
lean_inc(v_toBind_3204_);
v_toPure_3205_ = lean_ctor_get(v_toApplicative_3203_, 1);
lean_inc(v_toPure_3205_);
v___x_3206_ = l_ByteArray_empty;
lean_inc_ref(v_inst_3199_);
v___x_3207_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3198_, v_inst_3199_, v_inst_3200_, v_stream_3201_, v_maximumSize_3202_, v___x_3206_);
v___f_3208_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_readAll___redArg___lam__0), 4, 3);
lean_closure_set(v___f_3208_, 0, v_inst_3197_);
lean_closure_set(v___f_3208_, 1, v_inst_3199_);
lean_closure_set(v___f_3208_, 2, v_toPure_3205_);
v___x_3209_ = lean_apply_4(v_toBind_3204_, lean_box(0), lean_box(0), v___x_3207_, v___f_3208_);
return v___x_3209_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll(lean_object* v_00_u03b1_3210_, lean_object* v_m_3211_, lean_object* v_inst_3212_, lean_object* v_inst_3213_, lean_object* v_inst_3214_, lean_object* v_inst_3215_, lean_object* v_stream_3216_, lean_object* v_maximumSize_3217_){
_start:
{
lean_object* v___x_3218_; 
v___x_3218_ = l_Std_Http_Body_Stream_readAll___redArg(v_inst_3212_, v_inst_3213_, v_inst_3214_, v_inst_3215_, v_stream_3216_, v_maximumSize_3217_);
return v___x_3218_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__0(lean_object* v_toPure_3219_, lean_object* v_____r_3220_){
_start:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = lean_box(0);
v___x_3222_ = lean_apply_2(v_toPure_3219_, lean_box(0), v___x_3221_);
return v___x_3222_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1(lean_object* v_toPure_3223_, uint64_t v_consumed_3224_, lean_object* v_drainLimit_3225_, lean_object* v_inst_3226_, lean_object* v_inst_3227_, lean_object* v_stream_3228_, lean_object* v_closeStream_3229_, lean_object* v_toBind_3230_, lean_object* v___f_3231_, lean_object* v_____do__lift_3232_){
_start:
{
if (lean_obj_tag(v_____do__lift_3232_) == 0)
{
lean_object* v___x_3233_; lean_object* v___x_3234_; 
lean_dec(v___f_3231_);
lean_dec(v_toBind_3230_);
lean_dec(v_closeStream_3229_);
lean_dec_ref(v_stream_3228_);
lean_dec(v_inst_3227_);
lean_dec_ref(v_inst_3226_);
lean_dec(v_drainLimit_3225_);
v___x_3233_ = lean_box(0);
v___x_3234_ = lean_apply_2(v_toPure_3223_, lean_box(0), v___x_3233_);
return v___x_3234_;
}
else
{
lean_object* v_val_3235_; lean_object* v_data_3236_; lean_object* v___x_3237_; uint64_t v___x_3238_; uint64_t v_consumed_3239_; 
lean_dec(v_toPure_3223_);
v_val_3235_ = lean_ctor_get(v_____do__lift_3232_, 0);
v_data_3236_ = lean_ctor_get(v_val_3235_, 0);
v___x_3237_ = lean_byte_array_size(v_data_3236_);
v___x_3238_ = lean_uint64_of_nat(v___x_3237_);
v_consumed_3239_ = lean_uint64_add(v_consumed_3224_, v___x_3238_);
if (lean_obj_tag(v_drainLimit_3225_) == 1)
{
lean_object* v_val_3240_; uint64_t v___x_3241_; uint8_t v___x_3242_; 
v_val_3240_ = lean_ctor_get(v_drainLimit_3225_, 0);
v___x_3241_ = lean_unbox_uint64(v_val_3240_);
v___x_3242_ = lean_uint64_dec_lt(v___x_3241_, v_consumed_3239_);
if (v___x_3242_ == 0)
{
lean_object* v___x_3243_; 
lean_dec(v___f_3231_);
lean_dec(v_toBind_3230_);
v___x_3243_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3226_, v_inst_3227_, v_stream_3228_, v_drainLimit_3225_, v_closeStream_3229_, v_consumed_3239_);
return v___x_3243_;
}
else
{
lean_object* v___x_3244_; 
lean_dec_ref_known(v_drainLimit_3225_, 1);
lean_dec_ref(v_stream_3228_);
lean_dec(v_inst_3227_);
lean_dec_ref(v_inst_3226_);
v___x_3244_ = lean_apply_4(v_toBind_3230_, lean_box(0), lean_box(0), v_closeStream_3229_, v___f_3231_);
return v___x_3244_;
}
}
else
{
lean_object* v___x_3245_; 
lean_dec(v___f_3231_);
lean_dec(v_toBind_3230_);
v___x_3245_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3226_, v_inst_3227_, v_stream_3228_, v_drainLimit_3225_, v_closeStream_3229_, v_consumed_3239_);
return v___x_3245_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1___boxed(lean_object* v_toPure_3246_, lean_object* v_consumed_3247_, lean_object* v_drainLimit_3248_, lean_object* v_inst_3249_, lean_object* v_inst_3250_, lean_object* v_stream_3251_, lean_object* v_closeStream_3252_, lean_object* v_toBind_3253_, lean_object* v___f_3254_, lean_object* v_____do__lift_3255_){
_start:
{
uint64_t v_consumed_boxed_3256_; lean_object* v_res_3257_; 
v_consumed_boxed_3256_ = lean_unbox_uint64(v_consumed_3247_);
lean_dec_ref(v_consumed_3247_);
v_res_3257_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1(v_toPure_3246_, v_consumed_boxed_3256_, v_drainLimit_3248_, v_inst_3249_, v_inst_3250_, v_stream_3251_, v_closeStream_3252_, v_toBind_3253_, v___f_3254_, v_____do__lift_3255_);
lean_dec(v_____do__lift_3255_);
return v_res_3257_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(lean_object* v_inst_3258_, lean_object* v_inst_3259_, lean_object* v_stream_3260_, lean_object* v_drainLimit_3261_, lean_object* v_closeStream_3262_, uint64_t v_consumed_3263_){
_start:
{
lean_object* v_toApplicative_3264_; lean_object* v_toBind_3265_; lean_object* v_toPure_3266_; lean_object* v___x_3267_; lean_object* v___f_3268_; lean_object* v___x_3269_; lean_object* v___f_3270_; lean_object* v___x_3271_; 
v_toApplicative_3264_ = lean_ctor_get(v_inst_3258_, 0);
v_toBind_3265_ = lean_ctor_get(v_inst_3258_, 1);
lean_inc_n(v_toBind_3265_, 2);
v_toPure_3266_ = lean_ctor_get(v_toApplicative_3264_, 1);
lean_inc_n(v_toPure_3266_, 2);
lean_inc(v_inst_3259_);
lean_inc_ref(v_stream_3260_);
v___x_3267_ = lean_apply_1(v_inst_3259_, v_stream_3260_);
v___f_3268_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3268_, 0, v_toPure_3266_);
v___x_3269_ = lean_box_uint64(v_consumed_3263_);
v___f_3270_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1___boxed), 10, 9);
lean_closure_set(v___f_3270_, 0, v_toPure_3266_);
lean_closure_set(v___f_3270_, 1, v___x_3269_);
lean_closure_set(v___f_3270_, 2, v_drainLimit_3261_);
lean_closure_set(v___f_3270_, 3, v_inst_3258_);
lean_closure_set(v___f_3270_, 4, v_inst_3259_);
lean_closure_set(v___f_3270_, 5, v_stream_3260_);
lean_closure_set(v___f_3270_, 6, v_closeStream_3262_);
lean_closure_set(v___f_3270_, 7, v_toBind_3265_);
lean_closure_set(v___f_3270_, 8, v___f_3268_);
v___x_3271_ = lean_apply_4(v_toBind_3265_, lean_box(0), lean_box(0), v___x_3267_, v___f_3270_);
return v___x_3271_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___boxed(lean_object* v_inst_3272_, lean_object* v_inst_3273_, lean_object* v_stream_3274_, lean_object* v_drainLimit_3275_, lean_object* v_closeStream_3276_, lean_object* v_consumed_3277_){
_start:
{
uint64_t v_consumed_boxed_3278_; lean_object* v_res_3279_; 
v_consumed_boxed_3278_ = lean_unbox_uint64(v_consumed_3277_);
lean_dec_ref(v_consumed_3277_);
v_res_3279_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3272_, v_inst_3273_, v_stream_3274_, v_drainLimit_3275_, v_closeStream_3276_, v_consumed_boxed_3278_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop(lean_object* v_m_3280_, lean_object* v_inst_3281_, lean_object* v_inst_3282_, lean_object* v_stream_3283_, lean_object* v_drainLimit_3284_, lean_object* v_closeStream_3285_, uint64_t v_consumed_3286_){
_start:
{
lean_object* v___x_3287_; 
v___x_3287_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3281_, v_inst_3282_, v_stream_3283_, v_drainLimit_3284_, v_closeStream_3285_, v_consumed_3286_);
return v___x_3287_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___boxed(lean_object* v_m_3288_, lean_object* v_inst_3289_, lean_object* v_inst_3290_, lean_object* v_stream_3291_, lean_object* v_drainLimit_3292_, lean_object* v_closeStream_3293_, lean_object* v_consumed_3294_){
_start:
{
uint64_t v_consumed_boxed_3295_; lean_object* v_res_3296_; 
v_consumed_boxed_3295_ = lean_unbox_uint64(v_consumed_3294_);
lean_dec_ref(v_consumed_3294_);
v_res_3296_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop(v_m_3288_, v_inst_3289_, v_inst_3290_, v_stream_3291_, v_drainLimit_3292_, v_closeStream_3293_, v_consumed_boxed_3295_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain___redArg(lean_object* v_inst_3297_, lean_object* v_inst_3298_, lean_object* v_stream_3299_, lean_object* v_drainLimit_3300_, lean_object* v_closeStream_3301_){
_start:
{
uint64_t v___x_3302_; lean_object* v___x_3303_; 
v___x_3302_ = 0ULL;
v___x_3303_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3297_, v_inst_3298_, v_stream_3299_, v_drainLimit_3300_, v_closeStream_3301_, v___x_3302_);
return v___x_3303_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain(lean_object* v_m_3304_, lean_object* v_inst_3305_, lean_object* v_inst_3306_, lean_object* v_stream_3307_, lean_object* v_drainLimit_3308_, lean_object* v_closeStream_3309_){
_start:
{
lean_object* v___x_3310_; 
v___x_3310_ = l_Std_Http_Body_Stream_drain___redArg(v_inst_3305_, v_inst_3306_, v_stream_3307_, v_drainLimit_3308_, v_closeStream_3309_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0(uint8_t v_incomplete_3316_, lean_object* v_chunk_3317_, lean_object* v___y_3318_){
_start:
{
lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v_pendingProducer_3322_; lean_object* v_pendingConsumer_3323_; lean_object* v_interestWaiter_3324_; uint8_t v_closed_3325_; lean_object* v_knownSize_3326_; lean_object* v_pendingIncompleteChunk_3327_; lean_object* v_closeError_3328_; lean_object* v___x_3330_; uint8_t v_isShared_3331_; uint8_t v_isSharedCheck_3369_; 
v___x_3320_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(v___y_3318_);
v___x_3321_ = lean_st_ref_get(v___y_3318_);
v_pendingProducer_3322_ = lean_ctor_get(v___x_3321_, 0);
v_pendingConsumer_3323_ = lean_ctor_get(v___x_3321_, 1);
v_interestWaiter_3324_ = lean_ctor_get(v___x_3321_, 2);
v_closed_3325_ = lean_ctor_get_uint8(v___x_3321_, sizeof(void*)*6);
v_knownSize_3326_ = lean_ctor_get(v___x_3321_, 3);
v_pendingIncompleteChunk_3327_ = lean_ctor_get(v___x_3321_, 4);
v_closeError_3328_ = lean_ctor_get(v___x_3321_, 5);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3330_ = v___x_3321_;
v_isShared_3331_ = v_isSharedCheck_3369_;
goto v_resetjp_3329_;
}
else
{
lean_inc(v_closeError_3328_);
lean_inc(v_pendingIncompleteChunk_3327_);
lean_inc(v_knownSize_3326_);
lean_inc(v_interestWaiter_3324_);
lean_inc(v_pendingConsumer_3323_);
lean_inc(v_pendingProducer_3322_);
lean_dec(v___x_3321_);
v___x_3330_ = lean_box(0);
v_isShared_3331_ = v_isSharedCheck_3369_;
goto v_resetjp_3329_;
}
v_resetjp_3329_:
{
lean_object* v___y_3333_; 
if (v_closed_3325_ == 0)
{
if (lean_obj_tag(v_pendingIncompleteChunk_3327_) == 0)
{
v___y_3333_ = v_chunk_3317_;
goto v___jp_3332_;
}
else
{
lean_object* v_val_3347_; lean_object* v_data_3348_; lean_object* v_extensions_3349_; lean_object* v_data_3350_; lean_object* v_extensions_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3367_; 
v_val_3347_ = lean_ctor_get(v_pendingIncompleteChunk_3327_, 0);
lean_inc(v_val_3347_);
lean_dec_ref_known(v_pendingIncompleteChunk_3327_, 1);
v_data_3348_ = lean_ctor_get(v_val_3347_, 0);
lean_inc_ref(v_data_3348_);
v_extensions_3349_ = lean_ctor_get(v_val_3347_, 1);
lean_inc_ref(v_extensions_3349_);
lean_dec(v_val_3347_);
v_data_3350_ = lean_ctor_get(v_chunk_3317_, 0);
v_extensions_3351_ = lean_ctor_get(v_chunk_3317_, 1);
v_isSharedCheck_3367_ = !lean_is_exclusive(v_chunk_3317_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3353_ = v_chunk_3317_;
v_isShared_3354_ = v_isSharedCheck_3367_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_extensions_3351_);
lean_inc(v_data_3350_);
lean_dec(v_chunk_3317_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3367_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; uint8_t v___x_3360_; 
v___x_3355_ = lean_unsigned_to_nat(0u);
v___x_3356_ = lean_byte_array_size(v_data_3348_);
v___x_3357_ = lean_byte_array_size(v_data_3350_);
v___x_3358_ = lean_byte_array_copy_slice(v_data_3350_, v___x_3355_, v_data_3348_, v___x_3356_, v___x_3357_, v_closed_3325_);
lean_dec_ref(v_data_3350_);
v___x_3359_ = lean_array_get_size(v_extensions_3349_);
v___x_3360_ = lean_nat_dec_eq(v___x_3359_, v___x_3355_);
if (v___x_3360_ == 0)
{
lean_object* v___x_3362_; 
lean_dec_ref(v_extensions_3351_);
if (v_isShared_3354_ == 0)
{
lean_ctor_set(v___x_3353_, 1, v_extensions_3349_);
lean_ctor_set(v___x_3353_, 0, v___x_3358_);
v___x_3362_ = v___x_3353_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v___x_3358_);
lean_ctor_set(v_reuseFailAlloc_3363_, 1, v_extensions_3349_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
v___y_3333_ = v___x_3362_;
goto v___jp_3332_;
}
}
else
{
lean_object* v___x_3365_; 
lean_dec_ref(v_extensions_3349_);
if (v_isShared_3354_ == 0)
{
lean_ctor_set(v___x_3353_, 0, v___x_3358_);
v___x_3365_ = v___x_3353_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v___x_3358_);
lean_ctor_set(v_reuseFailAlloc_3366_, 1, v_extensions_3351_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
v___y_3333_ = v___x_3365_;
goto v___jp_3332_;
}
}
}
}
}
else
{
lean_object* v___x_3368_; 
lean_del_object(v___x_3330_);
lean_dec(v_closeError_3328_);
lean_dec(v_pendingIncompleteChunk_3327_);
lean_dec(v_knownSize_3326_);
lean_dec(v_interestWaiter_3324_);
lean_dec(v_pendingConsumer_3323_);
lean_dec(v_pendingProducer_3322_);
lean_dec_ref(v_chunk_3317_);
v___x_3368_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2));
return v___x_3368_;
}
v___jp_3332_:
{
if (v_incomplete_3316_ == 0)
{
lean_object* v___x_3334_; lean_object* v___x_3336_; 
v___x_3334_ = lean_box(0);
if (v_isShared_3331_ == 0)
{
lean_ctor_set(v___x_3330_, 4, v___x_3334_);
v___x_3336_ = v___x_3330_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_pendingProducer_3322_);
lean_ctor_set(v_reuseFailAlloc_3340_, 1, v_pendingConsumer_3323_);
lean_ctor_set(v_reuseFailAlloc_3340_, 2, v_interestWaiter_3324_);
lean_ctor_set(v_reuseFailAlloc_3340_, 3, v_knownSize_3326_);
lean_ctor_set(v_reuseFailAlloc_3340_, 4, v___x_3334_);
lean_ctor_set(v_reuseFailAlloc_3340_, 5, v_closeError_3328_);
lean_ctor_set_uint8(v_reuseFailAlloc_3340_, sizeof(void*)*6, v_closed_3325_);
v___x_3336_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3337_ = lean_st_ref_swap(v___y_3318_, v___x_3336_);
lean_dec(v___x_3337_);
v___x_3338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3338_, 0, v___y_3333_);
v___x_3339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
return v___x_3339_;
}
}
else
{
lean_object* v___x_3341_; lean_object* v___x_3343_; 
v___x_3341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3341_, 0, v___y_3333_);
if (v_isShared_3331_ == 0)
{
lean_ctor_set(v___x_3330_, 4, v___x_3341_);
v___x_3343_ = v___x_3330_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v_pendingProducer_3322_);
lean_ctor_set(v_reuseFailAlloc_3346_, 1, v_pendingConsumer_3323_);
lean_ctor_set(v_reuseFailAlloc_3346_, 2, v_interestWaiter_3324_);
lean_ctor_set(v_reuseFailAlloc_3346_, 3, v_knownSize_3326_);
lean_ctor_set(v_reuseFailAlloc_3346_, 4, v___x_3341_);
lean_ctor_set(v_reuseFailAlloc_3346_, 5, v_closeError_3328_);
lean_ctor_set_uint8(v_reuseFailAlloc_3346_, sizeof(void*)*6, v_closed_3325_);
v___x_3343_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
lean_object* v___x_3344_; lean_object* v___x_3345_; 
v___x_3344_ = lean_st_ref_swap(v___y_3318_, v___x_3343_);
lean_dec(v___x_3344_);
v___x_3345_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
return v___x_3345_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___boxed(lean_object* v_incomplete_3370_, lean_object* v_chunk_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_){
_start:
{
uint8_t v_incomplete_boxed_3374_; lean_object* v_res_3375_; 
v_incomplete_boxed_3374_ = lean_unbox(v_incomplete_3370_);
v_res_3375_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0(v_incomplete_boxed_3374_, v_chunk_3371_, v___y_3372_);
lean_dec(v___y_3372_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(lean_object* v_stream_3376_, lean_object* v_chunk_3377_, uint8_t v_incomplete_3378_){
_start:
{
lean_object* v___x_3380_; lean_object* v___f_3381_; lean_object* v___x_3382_; 
v___x_3380_ = lean_box(v_incomplete_3378_);
v___f_3381_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3381_, 0, v___x_3380_);
lean_closure_set(v___f_3381_, 1, v_chunk_3377_);
v___x_3382_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_stream_3376_, v___f_3381_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___boxed(lean_object* v_stream_3383_, lean_object* v_chunk_3384_, lean_object* v_incomplete_3385_, lean_object* v_a_3386_){
_start:
{
uint8_t v_incomplete_boxed_3387_; lean_object* v_res_3388_; 
v_incomplete_boxed_3387_ = lean_unbox(v_incomplete_3385_);
v_res_3388_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(v_stream_3383_, v_chunk_3384_, v_incomplete_boxed_3387_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0(lean_object* v_x_3395_){
_start:
{
if (lean_obj_tag(v_x_3395_) == 0)
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3405_; 
v_a_3397_ = lean_ctor_get(v_x_3395_, 0);
v_isSharedCheck_3405_ = !lean_is_exclusive(v_x_3395_);
if (v_isSharedCheck_3405_ == 0)
{
v___x_3399_ = v_x_3395_;
v_isShared_3400_ = v_isSharedCheck_3405_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v_x_3395_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3405_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
lean_object* v___x_3403_; 
v___x_3403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3403_, 0, v___x_3402_);
return v___x_3403_;
}
}
}
else
{
lean_object* v___x_3406_; 
lean_dec_ref_known(v_x_3395_, 1);
v___x_3406_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2));
return v___x_3406_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___boxed(lean_object* v_x_3407_, lean_object* v___y_3408_){
_start:
{
lean_object* v_res_3409_; 
v_res_3409_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0(v_x_3407_);
return v_res_3409_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1(lean_object* v_00___3410_){
_start:
{
lean_object* v___x_3412_; 
v___x_3412_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_3412_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1___boxed(lean_object* v_00___3413_, lean_object* v___y_3414_){
_start:
{
lean_object* v_res_3415_; 
v_res_3415_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1(v_00___3413_);
return v_res_3415_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2(lean_object* v___f_3420_, lean_object* v_x_3421_){
_start:
{
if (lean_obj_tag(v_x_3421_) == 0)
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3433_; 
lean_dec_ref(v___f_3420_);
v_a_3425_ = lean_ctor_get(v_x_3421_, 0);
v_isSharedCheck_3433_ = !lean_is_exclusive(v_x_3421_);
if (v_isSharedCheck_3433_ == 0)
{
v___x_3427_ = v_x_3421_;
v_isShared_3428_ = v_isSharedCheck_3433_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v_x_3421_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3433_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_a_3425_);
v___x_3430_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
lean_object* v___x_3431_; 
v___x_3431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3431_, 0, v___x_3430_);
return v___x_3431_;
}
}
}
else
{
lean_object* v_a_3434_; 
v_a_3434_ = lean_ctor_get(v_x_3421_, 0);
lean_inc(v_a_3434_);
lean_dec_ref_known(v_x_3421_, 1);
if (lean_obj_tag(v_a_3434_) == 1)
{
lean_object* v_val_3435_; uint8_t v___x_3436_; 
v_val_3435_ = lean_ctor_get(v_a_3434_, 0);
lean_inc(v_val_3435_);
lean_dec_ref_known(v_a_3434_, 1);
v___x_3436_ = lean_unbox(v_val_3435_);
lean_dec(v_val_3435_);
if (v___x_3436_ == 1)
{
lean_object* v___x_3437_; lean_object* v___x_3438_; 
v___x_3437_ = lean_box(0);
v___x_3438_ = lean_apply_2(v___f_3420_, v___x_3437_, lean_box(0));
return v___x_3438_;
}
else
{
lean_dec_ref(v___f_3420_);
goto v___jp_3423_;
}
}
else
{
lean_dec(v_a_3434_);
lean_dec_ref(v___f_3420_);
goto v___jp_3423_;
}
}
v___jp_3423_:
{
lean_object* v___x_3424_; 
v___x_3424_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1));
return v___x_3424_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___boxed(lean_object* v___f_3439_, lean_object* v_x_3440_, lean_object* v___y_3441_){
_start:
{
lean_object* v_res_3442_; 
v_res_3442_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2(v___f_3439_, v_x_3440_);
return v_res_3442_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__3(lean_object* v_a_3443_){
_start:
{
lean_object* v___x_3444_; 
v___x_3444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3444_, 0, v_a_3443_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4(uint8_t v___x_3445_, lean_object* v_x_3446_){
_start:
{
if (lean_obj_tag(v_x_3446_) == 0)
{
lean_object* v_a_3448_; lean_object* v___x_3450_; uint8_t v_isShared_3451_; uint8_t v_isSharedCheck_3456_; 
v_a_3448_ = lean_ctor_get(v_x_3446_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v_x_3446_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3450_ = v_x_3446_;
v_isShared_3451_ = v_isSharedCheck_3456_;
goto v_resetjp_3449_;
}
else
{
lean_inc(v_a_3448_);
lean_dec(v_x_3446_);
v___x_3450_ = lean_box(0);
v_isShared_3451_ = v_isSharedCheck_3456_;
goto v_resetjp_3449_;
}
v_resetjp_3449_:
{
lean_object* v___x_3453_; 
if (v_isShared_3451_ == 0)
{
v___x_3453_ = v___x_3450_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3448_);
v___x_3453_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
lean_object* v___x_3454_; 
v___x_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3453_);
return v___x_3454_;
}
}
}
else
{
lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3467_; 
v_isSharedCheck_3467_ = !lean_is_exclusive(v_x_3446_);
if (v_isSharedCheck_3467_ == 0)
{
lean_object* v_unused_3468_; 
v_unused_3468_ = lean_ctor_get(v_x_3446_, 0);
lean_dec(v_unused_3468_);
v___x_3458_ = v_x_3446_;
v_isShared_3459_ = v_isSharedCheck_3467_;
goto v_resetjp_3457_;
}
else
{
lean_dec(v_x_3446_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3467_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3463_; 
v___x_3460_ = lean_box(v___x_3445_);
v___x_3461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3461_, 0, v___x_3460_);
if (v_isShared_3459_ == 0)
{
lean_ctor_set(v___x_3458_, 0, v___x_3461_);
v___x_3463_ = v___x_3458_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v___x_3461_);
v___x_3463_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; 
v___x_3464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3463_);
v___x_3465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3465_, 0, v___x_3464_);
return v___x_3465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4___boxed(lean_object* v___x_3469_, lean_object* v_x_3470_, lean_object* v___y_3471_){
_start:
{
uint8_t v___x_5091__boxed_3472_; lean_object* v_res_3473_; 
v___x_5091__boxed_3472_ = lean_unbox(v___x_3469_);
v_res_3473_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4(v___x_5091__boxed_3472_, v_x_3470_);
return v_res_3473_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5(uint8_t v_a_3474_, lean_object* v_x_3475_){
_start:
{
if (lean_obj_tag(v_x_3475_) == 0)
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3485_; 
v_a_3477_ = lean_ctor_get(v_x_3475_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v_x_3475_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3479_ = v_x_3475_;
v_isShared_3480_ = v_isSharedCheck_3485_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v_x_3475_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3485_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3480_ == 0)
{
v___x_3482_ = v___x_3479_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
lean_object* v___x_3483_; 
v___x_3483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3482_);
return v___x_3483_;
}
}
}
else
{
lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3496_; 
v_isSharedCheck_3496_ = !lean_is_exclusive(v_x_3475_);
if (v_isSharedCheck_3496_ == 0)
{
lean_object* v_unused_3497_; 
v_unused_3497_ = lean_ctor_get(v_x_3475_, 0);
lean_dec(v_unused_3497_);
v___x_3487_ = v_x_3475_;
v_isShared_3488_ = v_isSharedCheck_3496_;
goto v_resetjp_3486_;
}
else
{
lean_dec(v_x_3475_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3496_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3492_; 
v___x_3489_ = lean_box(v_a_3474_);
v___x_3490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 0, v___x_3490_);
v___x_3492_ = v___x_3487_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v___x_3490_);
v___x_3492_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
lean_object* v___x_3493_; lean_object* v___x_3494_; 
v___x_3493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3492_);
v___x_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3493_);
return v___x_3494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___boxed(lean_object* v_a_3498_, lean_object* v_x_3499_, lean_object* v___y_3500_){
_start:
{
uint8_t v_a_5143__boxed_3501_; lean_object* v_res_3502_; 
v_a_5143__boxed_3501_ = lean_unbox(v_a_3498_);
v_res_3502_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5(v_a_5143__boxed_3501_, v_x_3499_);
return v_res_3502_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6(lean_object* v_pendingProducer_3503_, lean_object* v_interestWaiter_3504_, uint8_t v_closed_3505_, lean_object* v_knownSize_3506_, lean_object* v_pendingIncompleteChunk_3507_, lean_object* v_closeError_3508_, lean_object* v___y_3509_, lean_object* v_chunk_3510_, lean_object* v___f_3511_, lean_object* v_x_3512_){
_start:
{
if (lean_obj_tag(v_x_3512_) == 0)
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3522_; 
lean_dec_ref(v___f_3511_);
lean_dec(v_closeError_3508_);
lean_dec(v_pendingIncompleteChunk_3507_);
lean_dec(v_knownSize_3506_);
lean_dec(v_interestWaiter_3504_);
lean_dec(v_pendingProducer_3503_);
v_a_3514_ = lean_ctor_get(v_x_3512_, 0);
v_isSharedCheck_3522_ = !lean_is_exclusive(v_x_3512_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3516_ = v_x_3512_;
v_isShared_3517_ = v_isSharedCheck_3522_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v_x_3512_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3522_;
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
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
return v___x_3520_;
}
}
}
else
{
lean_object* v_a_3523_; uint8_t v___x_3524_; 
v_a_3523_ = lean_ctor_get(v_x_3512_, 0);
lean_inc(v_a_3523_);
lean_dec_ref_known(v_x_3512_, 1);
v___x_3524_ = lean_unbox(v_a_3523_);
if (v___x_3524_ == 0)
{
lean_object* v___f_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; uint8_t v___x_3531_; lean_object* v___x_3532_; 
lean_dec_ref(v___f_3511_);
lean_inc(v_a_3523_);
v___f_3525_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3525_, 0, v_a_3523_);
v___x_3526_ = lean_box(0);
v___x_3527_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_3527_, 0, v_pendingProducer_3503_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
lean_ctor_set(v___x_3527_, 2, v_interestWaiter_3504_);
lean_ctor_set(v___x_3527_, 3, v_knownSize_3506_);
lean_ctor_set(v___x_3527_, 4, v_pendingIncompleteChunk_3507_);
lean_ctor_set(v___x_3527_, 5, v_closeError_3508_);
lean_ctor_set_uint8(v___x_3527_, sizeof(void*)*6, v_closed_3505_);
v___x_3528_ = lean_unsigned_to_nat(0u);
v___x_3529_ = lean_st_ref_swap(v___y_3509_, v___x_3527_);
lean_dec(v___x_3529_);
v___x_3530_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_3531_ = lean_unbox(v_a_3523_);
lean_dec(v_a_3523_);
v___x_3532_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3528_, v___x_3531_, v___x_3530_, v___f_3525_);
return v___x_3532_;
}
else
{
lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
lean_dec(v_a_3523_);
v___x_3533_ = lean_box(0);
v___x_3534_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_3506_, v_chunk_3510_);
v___x_3535_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_3535_, 0, v_pendingProducer_3503_);
lean_ctor_set(v___x_3535_, 1, v___x_3533_);
lean_ctor_set(v___x_3535_, 2, v_interestWaiter_3504_);
lean_ctor_set(v___x_3535_, 3, v___x_3534_);
lean_ctor_set(v___x_3535_, 4, v_pendingIncompleteChunk_3507_);
lean_ctor_set(v___x_3535_, 5, v_closeError_3508_);
lean_ctor_set_uint8(v___x_3535_, sizeof(void*)*6, v_closed_3505_);
v___x_3536_ = lean_unsigned_to_nat(0u);
v___x_3537_ = lean_st_ref_swap(v___y_3509_, v___x_3535_);
lean_dec(v___x_3537_);
v___x_3538_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_3539_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3536_, v_closed_3505_, v___x_3538_, v___f_3511_);
return v___x_3539_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6___boxed(lean_object* v_pendingProducer_3540_, lean_object* v_interestWaiter_3541_, lean_object* v_closed_3542_, lean_object* v_knownSize_3543_, lean_object* v_pendingIncompleteChunk_3544_, lean_object* v_closeError_3545_, lean_object* v___y_3546_, lean_object* v_chunk_3547_, lean_object* v___f_3548_, lean_object* v_x_3549_, lean_object* v___y_3550_){
_start:
{
uint8_t v_closed_boxed_3551_; lean_object* v_res_3552_; 
v_closed_boxed_3551_ = lean_unbox(v_closed_3542_);
v_res_3552_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6(v_pendingProducer_3540_, v_interestWaiter_3541_, v_closed_boxed_3551_, v_knownSize_3543_, v_pendingIncompleteChunk_3544_, v_closeError_3545_, v___y_3546_, v_chunk_3547_, v___f_3548_, v_x_3549_);
lean_dec_ref(v_chunk_3547_);
lean_dec(v___y_3546_);
return v_res_3552_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7(lean_object* v___y_3571_, lean_object* v_chunk_3572_, lean_object* v_a_3573_, lean_object* v___f_3574_, lean_object* v_x_3575_){
_start:
{
if (lean_obj_tag(v_x_3575_) == 0)
{
lean_object* v_a_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3585_; 
lean_dec_ref(v___f_3574_);
lean_dec(v_a_3573_);
lean_dec_ref(v_chunk_3572_);
v_a_3577_ = lean_ctor_get(v_x_3575_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v_x_3575_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3579_ = v_x_3575_;
v_isShared_3580_ = v_isSharedCheck_3585_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_a_3577_);
lean_dec(v_x_3575_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3585_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3582_; 
if (v_isShared_3580_ == 0)
{
v___x_3582_ = v___x_3579_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3577_);
v___x_3582_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
lean_object* v___x_3583_; 
v___x_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3582_);
return v___x_3583_;
}
}
}
else
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3639_; 
v_a_3586_ = lean_ctor_get(v_x_3575_, 0);
v_isSharedCheck_3639_ = !lean_is_exclusive(v_x_3575_);
if (v_isSharedCheck_3639_ == 0)
{
v___x_3588_ = v_x_3575_;
v_isShared_3589_ = v_isSharedCheck_3639_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v_x_3575_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3639_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
uint8_t v_closed_3590_; 
v_closed_3590_ = lean_ctor_get_uint8(v_a_3586_, sizeof(void*)*6);
if (v_closed_3590_ == 0)
{
lean_object* v_pendingConsumer_3591_; 
v_pendingConsumer_3591_ = lean_ctor_get(v_a_3586_, 1);
lean_inc(v_pendingConsumer_3591_);
if (lean_obj_tag(v_pendingConsumer_3591_) == 1)
{
lean_object* v_pendingProducer_3592_; lean_object* v_interestWaiter_3593_; lean_object* v_knownSize_3594_; lean_object* v_pendingIncompleteChunk_3595_; lean_object* v_closeError_3596_; lean_object* v_val_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3616_; 
lean_dec_ref(v___f_3574_);
lean_dec(v_a_3573_);
v_pendingProducer_3592_ = lean_ctor_get(v_a_3586_, 0);
lean_inc(v_pendingProducer_3592_);
v_interestWaiter_3593_ = lean_ctor_get(v_a_3586_, 2);
lean_inc(v_interestWaiter_3593_);
v_knownSize_3594_ = lean_ctor_get(v_a_3586_, 3);
lean_inc(v_knownSize_3594_);
v_pendingIncompleteChunk_3595_ = lean_ctor_get(v_a_3586_, 4);
lean_inc(v_pendingIncompleteChunk_3595_);
v_closeError_3596_ = lean_ctor_get(v_a_3586_, 5);
lean_inc(v_closeError_3596_);
lean_dec(v_a_3586_);
v_val_3597_ = lean_ctor_get(v_pendingConsumer_3591_, 0);
v_isSharedCheck_3616_ = !lean_is_exclusive(v_pendingConsumer_3591_);
if (v_isSharedCheck_3616_ == 0)
{
v___x_3599_ = v_pendingConsumer_3591_;
v_isShared_3600_ = v_isSharedCheck_3616_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_val_3597_);
lean_dec(v_pendingConsumer_3591_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3616_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
lean_object* v___f_3601_; lean_object* v___x_3602_; lean_object* v___f_3603_; lean_object* v___x_3605_; 
v___f_3601_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__0));
v___x_3602_ = lean_box(v_closed_3590_);
lean_inc_ref(v_chunk_3572_);
lean_inc(v___y_3571_);
v___f_3603_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6___boxed), 11, 9);
lean_closure_set(v___f_3603_, 0, v_pendingProducer_3592_);
lean_closure_set(v___f_3603_, 1, v_interestWaiter_3593_);
lean_closure_set(v___f_3603_, 2, v___x_3602_);
lean_closure_set(v___f_3603_, 3, v_knownSize_3594_);
lean_closure_set(v___f_3603_, 4, v_pendingIncompleteChunk_3595_);
lean_closure_set(v___f_3603_, 5, v_closeError_3596_);
lean_closure_set(v___f_3603_, 6, v___y_3571_);
lean_closure_set(v___f_3603_, 7, v_chunk_3572_);
lean_closure_set(v___f_3603_, 8, v___f_3601_);
if (v_isShared_3600_ == 0)
{
lean_ctor_set(v___x_3599_, 0, v_chunk_3572_);
v___x_3605_ = v___x_3599_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v_chunk_3572_);
v___x_3605_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
lean_object* v___x_3607_; 
if (v_isShared_3589_ == 0)
{
lean_ctor_set(v___x_3588_, 0, v___x_3605_);
v___x_3607_ = v___x_3588_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___x_3605_);
v___x_3607_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
lean_object* v___x_3608_; uint8_t v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; 
v___x_3608_ = lean_unsigned_to_nat(0u);
v___x_3609_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(v_val_3597_, v___x_3607_);
lean_dec(v_val_3597_);
v___x_3610_ = lean_box(v___x_3609_);
v___x_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3610_);
v___x_3612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3612_, 0, v___x_3611_);
v___x_3613_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3608_, v_closed_3590_, v___x_3612_, v___f_3603_);
return v___x_3613_;
}
}
}
}
else
{
lean_object* v_pendingProducer_3617_; 
lean_del_object(v___x_3588_);
v_pendingProducer_3617_ = lean_ctor_get(v_a_3586_, 0);
if (lean_obj_tag(v_pendingProducer_3617_) == 0)
{
lean_object* v_interestWaiter_3618_; lean_object* v_knownSize_3619_; lean_object* v_pendingIncompleteChunk_3620_; lean_object* v_closeError_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3634_; 
v_interestWaiter_3618_ = lean_ctor_get(v_a_3586_, 2);
v_knownSize_3619_ = lean_ctor_get(v_a_3586_, 3);
v_pendingIncompleteChunk_3620_ = lean_ctor_get(v_a_3586_, 4);
v_closeError_3621_ = lean_ctor_get(v_a_3586_, 5);
v_isSharedCheck_3634_ = !lean_is_exclusive(v_a_3586_);
if (v_isSharedCheck_3634_ == 0)
{
lean_object* v_unused_3635_; lean_object* v_unused_3636_; 
v_unused_3635_ = lean_ctor_get(v_a_3586_, 1);
lean_dec(v_unused_3635_);
v_unused_3636_ = lean_ctor_get(v_a_3586_, 0);
lean_dec(v_unused_3636_);
v___x_3623_ = v_a_3586_;
v_isShared_3624_ = v_isSharedCheck_3634_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_closeError_3621_);
lean_inc(v_pendingIncompleteChunk_3620_);
lean_inc(v_knownSize_3619_);
lean_inc(v_interestWaiter_3618_);
lean_dec(v_a_3586_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3634_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3628_; 
v___x_3625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3625_, 0, v_chunk_3572_);
lean_ctor_set(v___x_3625_, 1, v_a_3573_);
v___x_3626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3625_);
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 0, v___x_3626_);
v___x_3628_ = v___x_3623_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v___x_3626_);
lean_ctor_set(v_reuseFailAlloc_3633_, 1, v_pendingConsumer_3591_);
lean_ctor_set(v_reuseFailAlloc_3633_, 2, v_interestWaiter_3618_);
lean_ctor_set(v_reuseFailAlloc_3633_, 3, v_knownSize_3619_);
lean_ctor_set(v_reuseFailAlloc_3633_, 4, v_pendingIncompleteChunk_3620_);
lean_ctor_set(v_reuseFailAlloc_3633_, 5, v_closeError_3621_);
lean_ctor_set_uint8(v_reuseFailAlloc_3633_, sizeof(void*)*6, v_closed_3590_);
v___x_3628_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3629_ = lean_unsigned_to_nat(0u);
v___x_3630_ = lean_st_ref_swap(v___y_3571_, v___x_3628_);
lean_dec(v___x_3630_);
v___x_3631_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_3632_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3629_, v_closed_3590_, v___x_3631_, v___f_3574_);
return v___x_3632_;
}
}
}
else
{
lean_object* v___x_3637_; 
lean_dec(v_pendingConsumer_3591_);
lean_dec(v_a_3586_);
lean_dec_ref(v___f_3574_);
lean_dec(v_a_3573_);
lean_dec_ref(v_chunk_3572_);
v___x_3637_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__5));
return v___x_3637_;
}
}
}
else
{
lean_object* v___x_3638_; 
lean_del_object(v___x_3588_);
lean_dec(v_a_3586_);
lean_dec_ref(v___f_3574_);
lean_dec(v_a_3573_);
lean_dec_ref(v_chunk_3572_);
v___x_3638_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__8));
return v___x_3638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___boxed(lean_object* v___y_3640_, lean_object* v_chunk_3641_, lean_object* v_a_3642_, lean_object* v___f_3643_, lean_object* v_x_3644_, lean_object* v___y_3645_){
_start:
{
lean_object* v_res_3646_; 
v_res_3646_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7(v___y_3640_, v_chunk_3641_, v_a_3642_, v___f_3643_, v_x_3644_);
lean_dec(v___y_3640_);
return v_res_3646_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8(lean_object* v___y_3647_, lean_object* v___f_3648_, lean_object* v_x_3649_){
_start:
{
if (lean_obj_tag(v_x_3649_) == 0)
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3659_; 
lean_dec_ref(v___f_3648_);
v_a_3651_ = lean_ctor_get(v_x_3649_, 0);
v_isSharedCheck_3659_ = !lean_is_exclusive(v_x_3649_);
if (v_isSharedCheck_3659_ == 0)
{
v___x_3653_ = v_x_3649_;
v_isShared_3654_ = v_isSharedCheck_3659_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v_x_3649_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3659_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v_a_3651_);
v___x_3656_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
lean_object* v___x_3657_; 
v___x_3657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3657_, 0, v___x_3656_);
return v___x_3657_;
}
}
}
else
{
lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3671_; 
v_isSharedCheck_3671_ = !lean_is_exclusive(v_x_3649_);
if (v_isSharedCheck_3671_ == 0)
{
lean_object* v_unused_3672_; 
v_unused_3672_ = lean_ctor_get(v_x_3649_, 0);
lean_dec(v_unused_3672_);
v___x_3661_ = v_x_3649_;
v_isShared_3662_ = v_isSharedCheck_3671_;
goto v_resetjp_3660_;
}
else
{
lean_dec(v_x_3649_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3671_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3663_; uint8_t v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3667_; 
v___x_3663_ = lean_unsigned_to_nat(0u);
v___x_3664_ = 0;
v___x_3665_ = lean_st_ref_get(v___y_3647_);
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 0, v___x_3665_);
v___x_3667_ = v___x_3661_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v___x_3665_);
v___x_3667_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3667_);
v___x_3669_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3663_, v___x_3664_, v___x_3668_, v___f_3648_);
return v___x_3669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8___boxed(lean_object* v___y_3673_, lean_object* v___f_3674_, lean_object* v_x_3675_, lean_object* v___y_3676_){
_start:
{
lean_object* v_res_3677_; 
v_res_3677_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8(v___y_3673_, v___f_3674_, v_x_3675_);
lean_dec(v___y_3673_);
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9(lean_object* v_chunk_3678_, lean_object* v_a_3679_, lean_object* v___f_3680_, lean_object* v___y_3681_){
_start:
{
lean_object* v___f_3683_; lean_object* v___f_3684_; lean_object* v___x_3685_; uint8_t v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
lean_inc_n(v___y_3681_, 2);
v___f_3683_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___boxed), 6, 4);
lean_closure_set(v___f_3683_, 0, v___y_3681_);
lean_closure_set(v___f_3683_, 1, v_chunk_3678_);
lean_closure_set(v___f_3683_, 2, v_a_3679_);
lean_closure_set(v___f_3683_, 3, v___f_3680_);
v___f_3684_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8___boxed), 4, 2);
lean_closure_set(v___f_3684_, 0, v___y_3681_);
lean_closure_set(v___f_3684_, 1, v___f_3683_);
v___x_3685_ = lean_unsigned_to_nat(0u);
v___x_3686_ = 0;
v___x_3687_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_3681_);
v___x_3688_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3685_, v___x_3686_, v___x_3687_, v___f_3684_);
return v___x_3688_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9___boxed(lean_object* v_chunk_3689_, lean_object* v_a_3690_, lean_object* v___f_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9(v_chunk_3689_, v_a_3690_, v___f_3691_, v___y_3692_);
lean_dec(v___y_3692_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10(lean_object* v_a_3700_, lean_object* v___f_3701_, lean_object* v___f_3702_, lean_object* v_stream_3703_, lean_object* v_chunk_3704_, lean_object* v___f_3705_, lean_object* v_x_3706_){
_start:
{
if (lean_obj_tag(v_x_3706_) == 0)
{
lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3716_; 
lean_dec_ref(v___f_3705_);
lean_dec_ref(v_chunk_3704_);
lean_dec_ref(v_stream_3703_);
lean_dec_ref(v___f_3702_);
lean_dec_ref(v___f_3701_);
v_a_3708_ = lean_ctor_get(v_x_3706_, 0);
v_isSharedCheck_3716_ = !lean_is_exclusive(v_x_3706_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3710_ = v_x_3706_;
v_isShared_3711_ = v_isSharedCheck_3716_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v_x_3706_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3716_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3713_; 
if (v_isShared_3711_ == 0)
{
v___x_3713_ = v___x_3710_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v_a_3708_);
v___x_3713_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
lean_object* v___x_3714_; 
v___x_3714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3714_, 0, v___x_3713_);
return v___x_3714_;
}
}
}
else
{
lean_object* v_a_3717_; 
v_a_3717_ = lean_ctor_get(v_x_3706_, 0);
lean_inc(v_a_3717_);
lean_dec_ref_known(v_x_3706_, 1);
if (lean_obj_tag(v_a_3717_) == 0)
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3726_; 
lean_dec_ref(v___f_3705_);
lean_dec_ref(v_chunk_3704_);
lean_dec_ref(v_stream_3703_);
lean_dec_ref(v___f_3702_);
lean_dec_ref(v___f_3701_);
v_a_3718_ = lean_ctor_get(v_a_3717_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v_a_3717_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3720_ = v_a_3717_;
v_isShared_3721_ = v_isSharedCheck_3726_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v_a_3717_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3726_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
lean_object* v___x_3724_; 
v___x_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3723_);
return v___x_3724_;
}
}
}
else
{
lean_object* v_a_3727_; 
v_a_3727_ = lean_ctor_get(v_a_3717_, 0);
lean_inc(v_a_3727_);
lean_dec_ref_known(v_a_3717_, 1);
if (lean_obj_tag(v_a_3727_) == 0)
{
lean_object* v___x_3728_; lean_object* v___x_3729_; uint8_t v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
lean_dec_ref(v___f_3705_);
lean_dec_ref(v_chunk_3704_);
lean_dec_ref(v_stream_3703_);
v___x_3728_ = lean_io_promise_result_opt(v_a_3700_);
v___x_3729_ = lean_unsigned_to_nat(0u);
v___x_3730_ = 0;
v___x_3731_ = lean_task_map(v___f_3701_, v___x_3728_, v___x_3729_, v___x_3730_);
v___x_3732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
v___x_3733_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3729_, v___x_3730_, v___x_3732_, v___f_3702_);
return v___x_3733_;
}
else
{
lean_object* v_val_3734_; uint8_t v___x_3735_; 
lean_dec_ref(v___f_3702_);
lean_dec_ref(v___f_3701_);
v_val_3734_ = lean_ctor_get(v_a_3727_, 0);
lean_inc(v_val_3734_);
lean_dec_ref_known(v_a_3727_, 1);
v___x_3735_ = lean_unbox(v_val_3734_);
lean_dec(v_val_3734_);
if (v___x_3735_ == 0)
{
lean_object* v___x_3736_; 
lean_dec_ref(v___f_3705_);
v___x_3736_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(v_stream_3703_, v_chunk_3704_);
return v___x_3736_;
}
else
{
lean_object* v___x_3737_; lean_object* v___x_3738_; 
lean_dec_ref(v_chunk_3704_);
lean_dec_ref(v_stream_3703_);
v___x_3737_ = lean_box(0);
v___x_3738_ = lean_apply_2(v___f_3705_, v___x_3737_, lean_box(0));
return v___x_3738_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10___boxed(lean_object* v_a_3739_, lean_object* v___f_3740_, lean_object* v___f_3741_, lean_object* v_stream_3742_, lean_object* v_chunk_3743_, lean_object* v___f_3744_, lean_object* v_x_3745_, lean_object* v___y_3746_){
_start:
{
lean_object* v_res_3747_; 
v_res_3747_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10(v_a_3739_, v___f_3740_, v___f_3741_, v_stream_3742_, v_chunk_3743_, v___f_3744_, v_x_3745_);
lean_dec(v_a_3739_);
return v_res_3747_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11(lean_object* v_chunk_3748_, lean_object* v___f_3749_, lean_object* v___f_3750_, lean_object* v___f_3751_, lean_object* v_stream_3752_, lean_object* v___f_3753_, lean_object* v_x_3754_){
_start:
{
if (lean_obj_tag(v_x_3754_) == 0)
{
lean_object* v_a_3756_; lean_object* v___x_3758_; uint8_t v_isShared_3759_; uint8_t v_isSharedCheck_3764_; 
lean_dec_ref(v___f_3753_);
lean_dec_ref(v_stream_3752_);
lean_dec_ref(v___f_3751_);
lean_dec_ref(v___f_3750_);
lean_dec_ref(v___f_3749_);
lean_dec_ref(v_chunk_3748_);
v_a_3756_ = lean_ctor_get(v_x_3754_, 0);
v_isSharedCheck_3764_ = !lean_is_exclusive(v_x_3754_);
if (v_isSharedCheck_3764_ == 0)
{
v___x_3758_ = v_x_3754_;
v_isShared_3759_ = v_isSharedCheck_3764_;
goto v_resetjp_3757_;
}
else
{
lean_inc(v_a_3756_);
lean_dec(v_x_3754_);
v___x_3758_ = lean_box(0);
v_isShared_3759_ = v_isSharedCheck_3764_;
goto v_resetjp_3757_;
}
v_resetjp_3757_:
{
lean_object* v___x_3761_; 
if (v_isShared_3759_ == 0)
{
v___x_3761_ = v___x_3758_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v_a_3756_);
v___x_3761_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
lean_object* v___x_3762_; 
v___x_3762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3761_);
return v___x_3762_;
}
}
}
else
{
lean_object* v_a_3765_; lean_object* v___f_3766_; lean_object* v___f_3767_; lean_object* v___x_3768_; uint8_t v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; 
v_a_3765_ = lean_ctor_get(v_x_3754_, 0);
lean_inc_n(v_a_3765_, 2);
lean_dec_ref_known(v_x_3754_, 1);
lean_inc_ref(v_chunk_3748_);
v___f_3766_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9___boxed), 5, 3);
lean_closure_set(v___f_3766_, 0, v_chunk_3748_);
lean_closure_set(v___f_3766_, 1, v_a_3765_);
lean_closure_set(v___f_3766_, 2, v___f_3749_);
lean_inc_ref(v_stream_3752_);
v___f_3767_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10___boxed), 8, 6);
lean_closure_set(v___f_3767_, 0, v_a_3765_);
lean_closure_set(v___f_3767_, 1, v___f_3750_);
lean_closure_set(v___f_3767_, 2, v___f_3751_);
lean_closure_set(v___f_3767_, 3, v_stream_3752_);
lean_closure_set(v___f_3767_, 4, v_chunk_3748_);
lean_closure_set(v___f_3767_, 5, v___f_3753_);
v___x_3768_ = lean_unsigned_to_nat(0u);
v___x_3769_ = 0;
v___x_3770_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_3752_, v___f_3766_);
v___x_3771_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3768_, v___x_3769_, v___x_3770_, v___f_3767_);
return v___x_3771_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11___boxed(lean_object* v_chunk_3772_, lean_object* v___f_3773_, lean_object* v___f_3774_, lean_object* v___f_3775_, lean_object* v_stream_3776_, lean_object* v___f_3777_, lean_object* v_x_3778_, lean_object* v___y_3779_){
_start:
{
lean_object* v_res_3780_; 
v_res_3780_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11(v_chunk_3772_, v___f_3773_, v___f_3774_, v___f_3775_, v_stream_3776_, v___f_3777_, v_x_3778_);
return v_res_3780_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(lean_object* v_stream_3781_, lean_object* v_chunk_3782_){
_start:
{
lean_object* v___f_3784_; lean_object* v___f_3785_; lean_object* v___f_3786_; lean_object* v___f_3787_; lean_object* v___f_3788_; lean_object* v___x_3789_; uint8_t v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___f_3784_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0));
v___f_3785_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1));
v___f_3786_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2));
v___f_3787_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3));
v___f_3788_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11___boxed), 8, 6);
lean_closure_set(v___f_3788_, 0, v_chunk_3782_);
lean_closure_set(v___f_3788_, 1, v___f_3784_);
lean_closure_set(v___f_3788_, 2, v___f_3787_);
lean_closure_set(v___f_3788_, 3, v___f_3786_);
lean_closure_set(v___f_3788_, 4, v_stream_3781_);
lean_closure_set(v___f_3788_, 5, v___f_3785_);
v___x_3789_ = lean_unsigned_to_nat(0u);
v___x_3790_ = 0;
v___x_3791_ = lean_io_promise_new();
v___x_3792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3791_);
v___x_3793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3792_);
v___x_3794_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3789_, v___x_3790_, v___x_3793_, v___f_3788_);
return v___x_3794_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___boxed(lean_object* v_stream_3795_, lean_object* v_chunk_3796_, lean_object* v_a_3797_){
_start:
{
lean_object* v_res_3798_; 
v_res_3798_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(v_stream_3795_, v_chunk_3796_);
return v_res_3798_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0(lean_object* v_stream_3799_, lean_object* v_x_3800_){
_start:
{
if (lean_obj_tag(v_x_3800_) == 0)
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3810_; 
lean_dec_ref(v_stream_3799_);
v_a_3802_ = lean_ctor_get(v_x_3800_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v_x_3800_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3804_ = v_x_3800_;
v_isShared_3805_ = v_isSharedCheck_3810_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v_x_3800_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3810_;
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
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
return v___x_3808_;
}
}
}
else
{
lean_object* v_a_3811_; 
v_a_3811_ = lean_ctor_get(v_x_3800_, 0);
lean_inc(v_a_3811_);
lean_dec_ref_known(v_x_3800_, 1);
if (lean_obj_tag(v_a_3811_) == 0)
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3820_; 
lean_dec_ref(v_stream_3799_);
v_a_3812_ = lean_ctor_get(v_a_3811_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v_a_3811_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3814_ = v_a_3811_;
v_isShared_3815_ = v_isSharedCheck_3820_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v_a_3811_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3820_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3817_; 
if (v_isShared_3815_ == 0)
{
v___x_3817_ = v___x_3814_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_a_3812_);
v___x_3817_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
lean_object* v___x_3818_; 
v___x_3818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3817_);
return v___x_3818_;
}
}
}
else
{
lean_object* v_a_3821_; 
v_a_3821_ = lean_ctor_get(v_a_3811_, 0);
lean_inc(v_a_3821_);
lean_dec_ref_known(v_a_3811_, 1);
if (lean_obj_tag(v_a_3821_) == 0)
{
lean_object* v___x_3822_; 
lean_dec_ref(v_stream_3799_);
v___x_3822_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_3822_;
}
else
{
lean_object* v_val_3823_; uint8_t v___y_3825_; lean_object* v_data_3828_; lean_object* v_extensions_3829_; uint8_t v___x_3830_; 
v_val_3823_ = lean_ctor_get(v_a_3821_, 0);
lean_inc(v_val_3823_);
lean_dec_ref_known(v_a_3821_, 1);
v_data_3828_ = lean_ctor_get(v_val_3823_, 0);
v_extensions_3829_ = lean_ctor_get(v_val_3823_, 1);
v___x_3830_ = l_ByteArray_isEmpty(v_data_3828_);
if (v___x_3830_ == 0)
{
v___y_3825_ = v___x_3830_;
goto v___jp_3824_;
}
else
{
lean_object* v___x_3831_; lean_object* v___x_3832_; uint8_t v___x_3833_; 
v___x_3831_ = lean_array_get_size(v_extensions_3829_);
v___x_3832_ = lean_unsigned_to_nat(0u);
v___x_3833_ = lean_nat_dec_eq(v___x_3831_, v___x_3832_);
v___y_3825_ = v___x_3833_;
goto v___jp_3824_;
}
v___jp_3824_:
{
if (v___y_3825_ == 0)
{
lean_object* v___x_3826_; 
v___x_3826_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(v_stream_3799_, v_val_3823_);
return v___x_3826_;
}
else
{
lean_object* v___x_3827_; 
lean_dec(v_val_3823_);
lean_dec_ref(v_stream_3799_);
v___x_3827_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_3827_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0___boxed(lean_object* v_stream_3834_, lean_object* v_x_3835_, lean_object* v___y_3836_){
_start:
{
lean_object* v_res_3837_; 
v_res_3837_ = l_Std_Http_Body_Stream_send___lam__0(v_stream_3834_, v_x_3835_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send(lean_object* v_stream_3838_, lean_object* v_chunk_3839_, uint8_t v_incomplete_3840_){
_start:
{
lean_object* v___f_3842_; lean_object* v___x_3843_; uint8_t v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; 
lean_inc_ref(v_stream_3838_);
v___f_3842_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_send___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3842_, 0, v_stream_3838_);
v___x_3843_ = lean_unsigned_to_nat(0u);
v___x_3844_ = 0;
v___x_3845_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(v_stream_3838_, v_chunk_3839_, v_incomplete_3840_);
v___x_3846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
v___x_3847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3846_);
v___x_3848_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3843_, v___x_3844_, v___x_3847_, v___f_3842_);
return v___x_3848_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___boxed(lean_object* v_stream_3849_, lean_object* v_chunk_3850_, lean_object* v_incomplete_3851_, lean_object* v_a_3852_){
_start:
{
uint8_t v_incomplete_boxed_3853_; lean_object* v_res_3854_; 
v_incomplete_boxed_3853_ = lean_unbox(v_incomplete_3851_);
v_res_3854_ = l_Std_Http_Body_Stream_send(v_stream_3849_, v_chunk_3850_, v_incomplete_boxed_3853_);
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0(lean_object* v_x_3855_){
_start:
{
uint8_t v___y_3858_; 
if (lean_obj_tag(v_x_3855_) == 0)
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3870_; 
v_a_3862_ = lean_ctor_get(v_x_3855_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v_x_3855_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3864_ = v_x_3855_;
v_isShared_3865_ = v_isSharedCheck_3870_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v_x_3855_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3870_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3862_);
v___x_3867_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
lean_object* v___x_3868_; 
v___x_3868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3868_, 0, v___x_3867_);
return v___x_3868_;
}
}
}
else
{
lean_object* v_a_3871_; lean_object* v_pendingConsumer_3872_; 
v_a_3871_ = lean_ctor_get(v_x_3855_, 0);
lean_inc(v_a_3871_);
lean_dec_ref_known(v_x_3855_, 1);
v_pendingConsumer_3872_ = lean_ctor_get(v_a_3871_, 1);
lean_inc(v_pendingConsumer_3872_);
lean_dec(v_a_3871_);
if (lean_obj_tag(v_pendingConsumer_3872_) == 0)
{
uint8_t v___x_3873_; 
v___x_3873_ = 0;
v___y_3858_ = v___x_3873_;
goto v___jp_3857_;
}
else
{
uint8_t v___x_3874_; 
lean_dec_ref_known(v_pendingConsumer_3872_, 1);
v___x_3874_ = 1;
v___y_3858_ = v___x_3874_;
goto v___jp_3857_;
}
}
v___jp_3857_:
{
lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3859_ = lean_box(v___y_3858_);
v___x_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3859_);
v___x_3861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3860_);
return v___x_3861_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0___boxed(lean_object* v_x_3875_, lean_object* v___y_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0(v_x_3875_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(lean_object* v_a_3879_){
_start:
{
lean_object* v___f_3881_; lean_object* v___x_3882_; uint8_t v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___f_3881_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0));
v___x_3882_ = lean_unsigned_to_nat(0u);
v___x_3883_ = 0;
v___x_3884_ = lean_st_ref_get(v_a_3879_);
v___x_3885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3885_, 0, v___x_3884_);
v___x_3886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3885_);
v___x_3887_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3882_, v___x_3883_, v___x_3886_, v___f_3881_);
return v___x_3887_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___boxed(lean_object* v_a_3888_, lean_object* v___y_3889_){
_start:
{
lean_object* v_res_3890_; 
v_res_3890_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(v_a_3888_);
lean_dec(v_a_3888_);
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0(lean_object* v___y_3891_, lean_object* v_x_3892_){
_start:
{
if (lean_obj_tag(v_x_3892_) == 0)
{
lean_object* v_a_3894_; lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3902_; 
v_a_3894_ = lean_ctor_get(v_x_3892_, 0);
v_isSharedCheck_3902_ = !lean_is_exclusive(v_x_3892_);
if (v_isSharedCheck_3902_ == 0)
{
v___x_3896_ = v_x_3892_;
v_isShared_3897_ = v_isSharedCheck_3902_;
goto v_resetjp_3895_;
}
else
{
lean_inc(v_a_3894_);
lean_dec(v_x_3892_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3902_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3899_; 
if (v_isShared_3897_ == 0)
{
v___x_3899_ = v___x_3896_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v_a_3894_);
v___x_3899_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
lean_object* v___x_3900_; 
v___x_3900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3900_, 0, v___x_3899_);
return v___x_3900_;
}
}
}
else
{
lean_object* v___x_3903_; 
lean_dec_ref_known(v_x_3892_, 1);
v___x_3903_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(v___y_3891_);
return v___x_3903_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0___boxed(lean_object* v___y_3904_, lean_object* v_x_3905_, lean_object* v___y_3906_){
_start:
{
lean_object* v_res_3907_; 
v_res_3907_ = l_Std_Http_Body_Stream_hasInterest___lam__0(v___y_3904_, v_x_3905_);
lean_dec(v___y_3904_);
return v_res_3907_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1(lean_object* v___y_3908_){
_start:
{
lean_object* v___f_3910_; lean_object* v___x_3911_; uint8_t v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; 
lean_inc(v___y_3908_);
v___f_3910_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_hasInterest___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3910_, 0, v___y_3908_);
v___x_3911_ = lean_unsigned_to_nat(0u);
v___x_3912_ = 0;
v___x_3913_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_3908_);
v___x_3914_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3911_, v___x_3912_, v___x_3913_, v___f_3910_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1___boxed(lean_object* v___y_3915_, lean_object* v___y_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Std_Http_Body_Stream_hasInterest___lam__1(v___y_3915_);
lean_dec(v___y_3915_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest(lean_object* v_stream_3919_){
_start:
{
lean_object* v___f_3921_; lean_object* v___x_3922_; 
v___f_3921_ = ((lean_object*)(l_Std_Http_Body_Stream_hasInterest___closed__0));
v___x_3922_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_3919_, v___f_3921_);
return v___x_3922_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___boxed(lean_object* v_stream_3923_, lean_object* v_a_3924_){
_start:
{
lean_object* v_res_3925_; 
v_res_3925_ = l_Std_Http_Body_Stream_hasInterest(v_stream_3923_);
return v_res_3925_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0(lean_object* v_lose_3926_, lean_object* v___y_3927_, uint8_t v___x_3928_, lean_object* v_promise_3929_, lean_object* v_x_3930_){
_start:
{
if (lean_obj_tag(v_x_3930_) == 0)
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_3940_; 
lean_dec_ref(v_lose_3926_);
v_a_3932_ = lean_ctor_get(v_x_3930_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v_x_3930_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3934_ = v_x_3930_;
v_isShared_3935_ = v_isSharedCheck_3940_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v_x_3930_);
v___x_3934_ = lean_box(0);
v_isShared_3935_ = v_isSharedCheck_3940_;
goto v_resetjp_3933_;
}
v_resetjp_3933_:
{
lean_object* v___x_3937_; 
if (v_isShared_3935_ == 0)
{
v___x_3937_ = v___x_3934_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3932_);
v___x_3937_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
lean_object* v___x_3938_; 
v___x_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3937_);
return v___x_3938_;
}
}
}
else
{
lean_object* v_a_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3954_; 
v_a_3941_ = lean_ctor_get(v_x_3930_, 0);
v_isSharedCheck_3954_ = !lean_is_exclusive(v_x_3930_);
if (v_isSharedCheck_3954_ == 0)
{
v___x_3943_ = v_x_3930_;
v_isShared_3944_ = v_isSharedCheck_3954_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_a_3941_);
lean_dec(v_x_3930_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3954_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
uint8_t v___x_3945_; 
v___x_3945_ = lean_unbox(v_a_3941_);
lean_dec(v_a_3941_);
if (v___x_3945_ == 0)
{
lean_object* v___x_3946_; 
lean_del_object(v___x_3943_);
lean_inc(v___y_3927_);
v___x_3946_ = lean_apply_2(v_lose_3926_, v___y_3927_, lean_box(0));
return v___x_3946_;
}
else
{
lean_object* v___x_3947_; lean_object* v___x_3949_; 
lean_dec_ref(v_lose_3926_);
v___x_3947_ = lean_box(v___x_3928_);
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 0, v___x_3947_);
v___x_3949_ = v___x_3943_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v___x_3947_);
v___x_3949_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
v___x_3950_ = lean_io_promise_resolve(v___x_3949_, v_promise_3929_);
v___x_3951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3951_, 0, v___x_3950_);
v___x_3952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3951_);
return v___x_3952_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed(lean_object* v_lose_3955_, lean_object* v___y_3956_, lean_object* v___x_3957_, lean_object* v_promise_3958_, lean_object* v_x_3959_, lean_object* v___y_3960_){
_start:
{
uint8_t v___x_4067__boxed_3961_; lean_object* v_res_3962_; 
v___x_4067__boxed_3961_ = lean_unbox(v___x_3957_);
v_res_3962_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0(v_lose_3955_, v___y_3956_, v___x_4067__boxed_3961_, v_promise_3958_, v_x_3959_);
lean_dec(v_promise_3958_);
lean_dec(v___y_3956_);
return v_res_3962_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(lean_object* v_w_3963_, lean_object* v_lose_3964_, lean_object* v___y_3965_){
_start:
{
lean_object* v_finished_3967_; lean_object* v_promise_3968_; uint8_t v___x_3969_; lean_object* v___x_3970_; lean_object* v___f_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; uint8_t v___y_3975_; uint8_t v___x_3983_; 
v_finished_3967_ = lean_ctor_get(v_w_3963_, 0);
lean_inc(v_finished_3967_);
v_promise_3968_ = lean_ctor_get(v_w_3963_, 1);
lean_inc(v_promise_3968_);
lean_dec_ref(v_w_3963_);
v___x_3969_ = 0;
v___x_3970_ = lean_box(v___x_3969_);
lean_inc(v___y_3965_);
v___f_3971_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed), 6, 4);
lean_closure_set(v___f_3971_, 0, v_lose_3964_);
lean_closure_set(v___f_3971_, 1, v___y_3965_);
lean_closure_set(v___f_3971_, 2, v___x_3970_);
lean_closure_set(v___f_3971_, 3, v_promise_3968_);
v___x_3972_ = lean_unsigned_to_nat(0u);
v___x_3973_ = lean_st_ref_take(v_finished_3967_);
v___x_3983_ = lean_unbox(v___x_3973_);
lean_dec(v___x_3973_);
if (v___x_3983_ == 0)
{
uint8_t v___x_3984_; 
v___x_3984_ = 1;
v___y_3975_ = v___x_3984_;
goto v___jp_3974_;
}
else
{
v___y_3975_ = v___x_3969_;
goto v___jp_3974_;
}
v___jp_3974_:
{
uint8_t v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; 
v___x_3976_ = 1;
v___x_3977_ = lean_box(v___x_3976_);
v___x_3978_ = lean_st_ref_put(v_finished_3967_, v___x_3977_);
lean_dec(v_finished_3967_);
v___x_3979_ = lean_box(v___y_3975_);
v___x_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3979_);
v___x_3981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3980_);
v___x_3982_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3972_, v___x_3969_, v___x_3981_, v___f_3971_);
return v___x_3982_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___boxed(lean_object* v_w_3985_, lean_object* v_lose_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_){
_start:
{
lean_object* v_res_3989_; 
v_res_3989_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(v_w_3985_, v_lose_3986_, v___y_3987_);
lean_dec(v___y_3987_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(lean_object* v_w_3990_, lean_object* v_lose_3991_, lean_object* v___y_3992_){
_start:
{
lean_object* v_finished_3994_; lean_object* v_promise_3995_; uint8_t v___x_3996_; lean_object* v___x_3997_; lean_object* v___f_3998_; lean_object* v___x_3999_; uint8_t v___x_4000_; lean_object* v___x_4001_; uint8_t v___y_4003_; uint8_t v___x_4010_; 
v_finished_3994_ = lean_ctor_get(v_w_3990_, 0);
lean_inc(v_finished_3994_);
v_promise_3995_ = lean_ctor_get(v_w_3990_, 1);
lean_inc(v_promise_3995_);
lean_dec_ref(v_w_3990_);
v___x_3996_ = 1;
v___x_3997_ = lean_box(v___x_3996_);
lean_inc(v___y_3992_);
v___f_3998_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed), 6, 4);
lean_closure_set(v___f_3998_, 0, v_lose_3991_);
lean_closure_set(v___f_3998_, 1, v___y_3992_);
lean_closure_set(v___f_3998_, 2, v___x_3997_);
lean_closure_set(v___f_3998_, 3, v_promise_3995_);
v___x_3999_ = lean_unsigned_to_nat(0u);
v___x_4000_ = 0;
v___x_4001_ = lean_st_ref_take(v_finished_3994_);
v___x_4010_ = lean_unbox(v___x_4001_);
lean_dec(v___x_4001_);
if (v___x_4010_ == 0)
{
v___y_4003_ = v___x_3996_;
goto v___jp_4002_;
}
else
{
v___y_4003_ = v___x_4000_;
goto v___jp_4002_;
}
v___jp_4002_:
{
lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
v___x_4004_ = lean_box(v___x_3996_);
v___x_4005_ = lean_st_ref_put(v_finished_3994_, v___x_4004_);
lean_dec(v_finished_3994_);
v___x_4006_ = lean_box(v___y_4003_);
v___x_4007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4007_, 0, v___x_4006_);
v___x_4008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4008_, 0, v___x_4007_);
v___x_4009_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3999_, v___x_4000_, v___x_4008_, v___f_3998_);
return v___x_4009_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1___boxed(lean_object* v_w_4011_, lean_object* v_lose_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_){
_start:
{
lean_object* v_res_4015_; 
v_res_4015_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(v_w_4011_, v_lose_4012_, v___y_4013_);
lean_dec(v___y_4013_);
return v_res_4015_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0(lean_object* v_x_4032_){
_start:
{
if (lean_obj_tag(v_x_4032_) == 0)
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4042_; 
v_a_4034_ = lean_ctor_get(v_x_4032_, 0);
v_isSharedCheck_4042_ = !lean_is_exclusive(v_x_4032_);
if (v_isSharedCheck_4042_ == 0)
{
v___x_4036_ = v_x_4032_;
v_isShared_4037_ = v_isSharedCheck_4042_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v_x_4032_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4042_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v___x_4039_; 
if (v_isShared_4037_ == 0)
{
v___x_4039_ = v___x_4036_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4041_; 
v_reuseFailAlloc_4041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4041_, 0, v_a_4034_);
v___x_4039_ = v_reuseFailAlloc_4041_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
lean_object* v___x_4040_; 
v___x_4040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4040_, 0, v___x_4039_);
return v___x_4040_;
}
}
}
else
{
lean_object* v_a_4043_; lean_object* v_pendingConsumer_4044_; 
v_a_4043_ = lean_ctor_get(v_x_4032_, 0);
lean_inc(v_a_4043_);
lean_dec_ref_known(v_x_4032_, 1);
v_pendingConsumer_4044_ = lean_ctor_get(v_a_4043_, 1);
if (lean_obj_tag(v_pendingConsumer_4044_) == 0)
{
uint8_t v_closed_4045_; 
v_closed_4045_ = lean_ctor_get_uint8(v_a_4043_, sizeof(void*)*6);
lean_dec(v_a_4043_);
if (v_closed_4045_ == 0)
{
lean_object* v___x_4046_; 
v___x_4046_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0));
return v___x_4046_;
}
else
{
lean_object* v___x_4047_; 
v___x_4047_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3));
return v___x_4047_;
}
}
else
{
lean_object* v___x_4048_; 
lean_dec(v_a_4043_);
v___x_4048_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6));
return v___x_4048_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___boxed(lean_object* v_x_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l_Std_Http_Body_Stream_interestSelector___lam__0(v_x_4049_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3(lean_object* v_waiter_4059_, lean_object* v___y_4060_, lean_object* v_x_4061_){
_start:
{
if (lean_obj_tag(v_x_4061_) == 0)
{
lean_object* v_a_4063_; lean_object* v___x_4065_; uint8_t v_isShared_4066_; uint8_t v_isSharedCheck_4071_; 
lean_dec_ref(v_waiter_4059_);
v_a_4063_ = lean_ctor_get(v_x_4061_, 0);
v_isSharedCheck_4071_ = !lean_is_exclusive(v_x_4061_);
if (v_isSharedCheck_4071_ == 0)
{
v___x_4065_ = v_x_4061_;
v_isShared_4066_ = v_isSharedCheck_4071_;
goto v_resetjp_4064_;
}
else
{
lean_inc(v_a_4063_);
lean_dec(v_x_4061_);
v___x_4065_ = lean_box(0);
v_isShared_4066_ = v_isSharedCheck_4071_;
goto v_resetjp_4064_;
}
v_resetjp_4064_:
{
lean_object* v___x_4068_; 
if (v_isShared_4066_ == 0)
{
v___x_4068_ = v___x_4065_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4070_; 
v_reuseFailAlloc_4070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4070_, 0, v_a_4063_);
v___x_4068_ = v_reuseFailAlloc_4070_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
lean_object* v___x_4069_; 
v___x_4069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
return v___x_4069_;
}
}
}
else
{
lean_object* v_a_4072_; lean_object* v_pendingConsumer_4073_; 
v_a_4072_ = lean_ctor_get(v_x_4061_, 0);
lean_inc(v_a_4072_);
lean_dec_ref_known(v_x_4061_, 1);
v_pendingConsumer_4073_ = lean_ctor_get(v_a_4072_, 1);
lean_inc(v_pendingConsumer_4073_);
if (lean_obj_tag(v_pendingConsumer_4073_) == 0)
{
uint8_t v_closed_4074_; 
v_closed_4074_ = lean_ctor_get_uint8(v_a_4072_, sizeof(void*)*6);
if (v_closed_4074_ == 0)
{
lean_object* v_interestWaiter_4075_; 
v_interestWaiter_4075_ = lean_ctor_get(v_a_4072_, 2);
if (lean_obj_tag(v_interestWaiter_4075_) == 0)
{
lean_object* v_pendingProducer_4076_; lean_object* v_knownSize_4077_; lean_object* v_pendingIncompleteChunk_4078_; lean_object* v_closeError_4079_; lean_object* v___x_4081_; uint8_t v_isShared_4082_; uint8_t v_isSharedCheck_4089_; 
v_pendingProducer_4076_ = lean_ctor_get(v_a_4072_, 0);
v_knownSize_4077_ = lean_ctor_get(v_a_4072_, 3);
v_pendingIncompleteChunk_4078_ = lean_ctor_get(v_a_4072_, 4);
v_closeError_4079_ = lean_ctor_get(v_a_4072_, 5);
v_isSharedCheck_4089_ = !lean_is_exclusive(v_a_4072_);
if (v_isSharedCheck_4089_ == 0)
{
lean_object* v_unused_4090_; lean_object* v_unused_4091_; 
v_unused_4090_ = lean_ctor_get(v_a_4072_, 2);
lean_dec(v_unused_4090_);
v_unused_4091_ = lean_ctor_get(v_a_4072_, 1);
lean_dec(v_unused_4091_);
v___x_4081_ = v_a_4072_;
v_isShared_4082_ = v_isSharedCheck_4089_;
goto v_resetjp_4080_;
}
else
{
lean_inc(v_closeError_4079_);
lean_inc(v_pendingIncompleteChunk_4078_);
lean_inc(v_knownSize_4077_);
lean_inc(v_pendingProducer_4076_);
lean_dec(v_a_4072_);
v___x_4081_ = lean_box(0);
v_isShared_4082_ = v_isSharedCheck_4089_;
goto v_resetjp_4080_;
}
v_resetjp_4080_:
{
lean_object* v___x_4083_; lean_object* v___x_4085_; 
v___x_4083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4083_, 0, v_waiter_4059_);
if (v_isShared_4082_ == 0)
{
lean_ctor_set(v___x_4081_, 2, v___x_4083_);
v___x_4085_ = v___x_4081_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4088_; 
v_reuseFailAlloc_4088_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_4088_, 0, v_pendingProducer_4076_);
lean_ctor_set(v_reuseFailAlloc_4088_, 1, v_pendingConsumer_4073_);
lean_ctor_set(v_reuseFailAlloc_4088_, 2, v___x_4083_);
lean_ctor_set(v_reuseFailAlloc_4088_, 3, v_knownSize_4077_);
lean_ctor_set(v_reuseFailAlloc_4088_, 4, v_pendingIncompleteChunk_4078_);
lean_ctor_set(v_reuseFailAlloc_4088_, 5, v_closeError_4079_);
lean_ctor_set_uint8(v_reuseFailAlloc_4088_, sizeof(void*)*6, v_closed_4074_);
v___x_4085_ = v_reuseFailAlloc_4088_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4086_ = lean_st_ref_swap(v___y_4060_, v___x_4085_);
lean_dec(v___x_4086_);
v___x_4087_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_4087_;
}
}
}
else
{
lean_object* v___x_4092_; 
lean_dec(v_a_4072_);
lean_dec_ref(v_waiter_4059_);
v___x_4092_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3));
return v___x_4092_;
}
}
else
{
lean_object* v___f_4093_; lean_object* v___x_4094_; 
lean_dec(v_a_4072_);
v___f_4093_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0));
v___x_4094_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(v_waiter_4059_, v___f_4093_, v___y_4060_);
return v___x_4094_;
}
}
else
{
lean_object* v___f_4095_; lean_object* v___x_4096_; 
lean_dec_ref_known(v_pendingConsumer_4073_, 1);
lean_dec(v_a_4072_);
v___f_4095_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0));
v___x_4096_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(v_waiter_4059_, v___f_4095_, v___y_4060_);
return v___x_4096_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___boxed(lean_object* v_waiter_4097_, lean_object* v___y_4098_, lean_object* v_x_4099_, lean_object* v___y_4100_){
_start:
{
lean_object* v_res_4101_; 
v_res_4101_ = l_Std_Http_Body_Stream_interestSelector___lam__3(v_waiter_4097_, v___y_4098_, v_x_4099_);
lean_dec(v___y_4098_);
return v_res_4101_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1(lean_object* v___y_4102_, lean_object* v___f_4103_, lean_object* v_x_4104_){
_start:
{
if (lean_obj_tag(v_x_4104_) == 0)
{
lean_object* v___x_4106_; 
lean_dec_ref(v___f_4103_);
v___x_4106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4106_, 0, v_x_4104_);
return v___x_4106_;
}
else
{
lean_object* v___x_4108_; uint8_t v_isShared_4109_; uint8_t v_isSharedCheck_4118_; 
v_isSharedCheck_4118_ = !lean_is_exclusive(v_x_4104_);
if (v_isSharedCheck_4118_ == 0)
{
lean_object* v_unused_4119_; 
v_unused_4119_ = lean_ctor_get(v_x_4104_, 0);
lean_dec(v_unused_4119_);
v___x_4108_ = v_x_4104_;
v_isShared_4109_ = v_isSharedCheck_4118_;
goto v_resetjp_4107_;
}
else
{
lean_dec(v_x_4104_);
v___x_4108_ = lean_box(0);
v_isShared_4109_ = v_isSharedCheck_4118_;
goto v_resetjp_4107_;
}
v_resetjp_4107_:
{
lean_object* v___x_4110_; uint8_t v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4114_; 
v___x_4110_ = lean_unsigned_to_nat(0u);
v___x_4111_ = 0;
v___x_4112_ = lean_st_ref_get(v___y_4102_);
if (v_isShared_4109_ == 0)
{
lean_ctor_set(v___x_4108_, 0, v___x_4112_);
v___x_4114_ = v___x_4108_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v___x_4112_);
v___x_4114_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
lean_object* v___x_4115_; lean_object* v___x_4116_; 
v___x_4115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4114_);
v___x_4116_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4110_, v___x_4111_, v___x_4115_, v___f_4103_);
return v___x_4116_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1___boxed(lean_object* v___y_4120_, lean_object* v___f_4121_, lean_object* v_x_4122_, lean_object* v___y_4123_){
_start:
{
lean_object* v_res_4124_; 
v_res_4124_ = l_Std_Http_Body_Stream_interestSelector___lam__1(v___y_4120_, v___f_4121_, v_x_4122_);
lean_dec(v___y_4120_);
return v_res_4124_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2(lean_object* v_waiter_4125_, lean_object* v___y_4126_){
_start:
{
lean_object* v___f_4128_; lean_object* v___f_4129_; lean_object* v___x_4130_; uint8_t v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; 
lean_inc_n(v___y_4126_, 2);
v___f_4128_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__3___boxed), 4, 2);
lean_closure_set(v___f_4128_, 0, v_waiter_4125_);
lean_closure_set(v___f_4128_, 1, v___y_4126_);
v___f_4129_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4129_, 0, v___y_4126_);
lean_closure_set(v___f_4129_, 1, v___f_4128_);
v___x_4130_ = lean_unsigned_to_nat(0u);
v___x_4131_ = 0;
v___x_4132_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_4126_);
v___x_4133_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4130_, v___x_4131_, v___x_4132_, v___f_4129_);
return v___x_4133_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2___boxed(lean_object* v_waiter_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_){
_start:
{
lean_object* v_res_4137_; 
v_res_4137_ = l_Std_Http_Body_Stream_interestSelector___lam__2(v_waiter_4134_, v___y_4135_);
lean_dec(v___y_4135_);
return v_res_4137_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4(lean_object* v_stream_4138_, lean_object* v_waiter_4139_){
_start:
{
lean_object* v___f_4141_; lean_object* v___x_4142_; 
v___f_4141_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4141_, 0, v_waiter_4139_);
v___x_4142_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_4138_, v___f_4141_);
return v___x_4142_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4___boxed(lean_object* v_stream_4143_, lean_object* v_waiter_4144_, lean_object* v___y_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l_Std_Http_Body_Stream_interestSelector___lam__4(v_stream_4143_, v_waiter_4144_);
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5(lean_object* v___y_4147_, lean_object* v___f_4148_, lean_object* v_x_4149_){
_start:
{
if (lean_obj_tag(v_x_4149_) == 0)
{
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4159_; 
lean_dec_ref(v___f_4148_);
v_a_4151_ = lean_ctor_get(v_x_4149_, 0);
v_isSharedCheck_4159_ = !lean_is_exclusive(v_x_4149_);
if (v_isSharedCheck_4159_ == 0)
{
v___x_4153_ = v_x_4149_;
v_isShared_4154_ = v_isSharedCheck_4159_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v_x_4149_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4159_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4156_; 
if (v_isShared_4154_ == 0)
{
v___x_4156_ = v___x_4153_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4158_; 
v_reuseFailAlloc_4158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4158_, 0, v_a_4151_);
v___x_4156_ = v_reuseFailAlloc_4158_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
lean_object* v___x_4157_; 
v___x_4157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4157_, 0, v___x_4156_);
return v___x_4157_;
}
}
}
else
{
lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4171_; 
v_isSharedCheck_4171_ = !lean_is_exclusive(v_x_4149_);
if (v_isSharedCheck_4171_ == 0)
{
lean_object* v_unused_4172_; 
v_unused_4172_ = lean_ctor_get(v_x_4149_, 0);
lean_dec(v_unused_4172_);
v___x_4161_ = v_x_4149_;
v_isShared_4162_ = v_isSharedCheck_4171_;
goto v_resetjp_4160_;
}
else
{
lean_dec(v_x_4149_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4171_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
lean_object* v___x_4163_; uint8_t v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4167_; 
v___x_4163_ = lean_unsigned_to_nat(0u);
v___x_4164_ = 0;
v___x_4165_ = lean_st_ref_get(v___y_4147_);
if (v_isShared_4162_ == 0)
{
lean_ctor_set(v___x_4161_, 0, v___x_4165_);
v___x_4167_ = v___x_4161_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v___x_4165_);
v___x_4167_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
lean_object* v___x_4168_; lean_object* v___x_4169_; 
v___x_4168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4167_);
v___x_4169_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4163_, v___x_4164_, v___x_4168_, v___f_4148_);
return v___x_4169_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5___boxed(lean_object* v___y_4173_, lean_object* v___f_4174_, lean_object* v_x_4175_, lean_object* v___y_4176_){
_start:
{
lean_object* v_res_4177_; 
v_res_4177_ = l_Std_Http_Body_Stream_interestSelector___lam__5(v___y_4173_, v___f_4174_, v_x_4175_);
lean_dec(v___y_4173_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6(lean_object* v___f_4178_, lean_object* v___y_4179_){
_start:
{
lean_object* v___f_4181_; lean_object* v___x_4182_; uint8_t v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; 
lean_inc(v___y_4179_);
v___f_4181_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__5___boxed), 4, 2);
lean_closure_set(v___f_4181_, 0, v___y_4179_);
lean_closure_set(v___f_4181_, 1, v___f_4178_);
v___x_4182_ = lean_unsigned_to_nat(0u);
v___x_4183_ = 0;
v___x_4184_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_4179_);
v___x_4185_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4182_, v___x_4183_, v___x_4184_, v___f_4181_);
return v___x_4185_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6___boxed(lean_object* v___f_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_){
_start:
{
lean_object* v_res_4189_; 
v_res_4189_ = l_Std_Http_Body_Stream_interestSelector___lam__6(v___f_4186_, v___y_4187_);
lean_dec(v___y_4187_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector(lean_object* v_stream_4193_){
_start:
{
lean_object* v___f_4194_; lean_object* v___f_4195_; lean_object* v___f_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; 
v___f_4194_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___closed__0));
lean_inc_ref_n(v_stream_4193_, 2);
v___f_4195_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4195_, 0, v_stream_4193_);
v___f_4196_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___closed__1));
v___x_4197_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4197_, 0, lean_box(0));
lean_closure_set(v___x_4197_, 1, lean_box(0));
lean_closure_set(v___x_4197_, 2, v_stream_4193_);
lean_closure_set(v___x_4197_, 3, v___f_4196_);
v___x_4198_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4198_, 0, lean_box(0));
lean_closure_set(v___x_4198_, 1, lean_box(0));
lean_closure_set(v___x_4198_, 2, v_stream_4193_);
lean_closure_set(v___x_4198_, 3, v___f_4194_);
v___x_4199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4199_, 0, v___x_4197_);
lean_ctor_set(v___x_4199_, 1, v___f_4195_);
lean_ctor_set(v___x_4199_, 2, v___x_4198_);
return v___x_4199_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0(lean_object* v_x_4200_, lean_object* v_x_4201_){
_start:
{
if (lean_obj_tag(v_x_4201_) == 0)
{
lean_object* v_a_4203_; lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4211_; 
lean_dec_ref(v_x_4200_);
v_a_4203_ = lean_ctor_get(v_x_4201_, 0);
v_isSharedCheck_4211_ = !lean_is_exclusive(v_x_4201_);
if (v_isSharedCheck_4211_ == 0)
{
v___x_4205_ = v_x_4201_;
v_isShared_4206_ = v_isSharedCheck_4211_;
goto v_resetjp_4204_;
}
else
{
lean_inc(v_a_4203_);
lean_dec(v_x_4201_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4211_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
lean_object* v___x_4208_; 
if (v_isShared_4206_ == 0)
{
v___x_4208_ = v___x_4205_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v_a_4203_);
v___x_4208_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
lean_object* v___x_4209_; 
v___x_4209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4208_);
return v___x_4209_;
}
}
}
else
{
lean_object* v___x_4212_; 
lean_dec_ref_known(v_x_4201_, 1);
v___x_4212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4212_, 0, v_x_4200_);
return v___x_4212_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0___boxed(lean_object* v_x_4213_, lean_object* v_x_4214_, lean_object* v___y_4215_){
_start:
{
lean_object* v_res_4216_; 
v_res_4216_ = l_Std_Http_Body_stream___lam__0(v_x_4213_, v_x_4214_);
return v_res_4216_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1(lean_object* v_a_4217_, lean_object* v_x_4218_){
_start:
{
if (lean_obj_tag(v_x_4218_) == 0)
{
lean_object* v_a_4220_; lean_object* v___x_4221_; 
v_a_4220_ = lean_ctor_get(v_x_4218_, 0);
lean_inc(v_a_4220_);
lean_dec_ref_known(v_x_4218_, 1);
v___x_4221_ = l_Std_Http_Body_Stream_closeWithError(v_a_4217_, v_a_4220_);
return v___x_4221_;
}
else
{
lean_object* v___x_4222_; 
lean_dec_ref(v_a_4217_);
v___x_4222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4222_, 0, v_x_4218_);
return v___x_4222_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1___boxed(lean_object* v_a_4223_, lean_object* v_x_4224_, lean_object* v___y_4225_){
_start:
{
lean_object* v_res_4226_; 
v_res_4226_ = l_Std_Http_Body_stream___lam__1(v_a_4223_, v_x_4224_);
return v_res_4226_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2(lean_object* v_a_4227_, lean_object* v_x_4228_){
_start:
{
if (lean_obj_tag(v_x_4228_) == 0)
{
lean_object* v___x_4230_; 
lean_dec_ref(v_a_4227_);
v___x_4230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4230_, 0, v_x_4228_);
return v___x_4230_;
}
else
{
lean_object* v___x_4231_; 
lean_dec_ref_known(v_x_4228_, 1);
v___x_4231_ = l_Std_Http_Body_Stream_close(v_a_4227_);
return v___x_4231_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2___boxed(lean_object* v_a_4232_, lean_object* v_x_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v_res_4235_; 
v_res_4235_ = l_Std_Http_Body_stream___lam__2(v_a_4232_, v_x_4233_);
return v_res_4235_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3(lean_object* v_gen_4236_, lean_object* v_a_4237_, lean_object* v___x_4238_, uint8_t v___x_4239_, lean_object* v___f_4240_, lean_object* v___f_4241_){
_start:
{
lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; 
v___x_4243_ = lean_apply_2(v_gen_4236_, v_a_4237_, lean_box(0));
lean_inc(v___x_4238_);
v___x_4244_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4238_, v___x_4239_, v___x_4243_, v___f_4240_);
v___x_4245_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4238_, v___x_4239_, v___x_4244_, v___f_4241_);
return v___x_4245_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3___boxed(lean_object* v_gen_4246_, lean_object* v_a_4247_, lean_object* v___x_4248_, lean_object* v___x_4249_, lean_object* v___f_4250_, lean_object* v___f_4251_, lean_object* v___y_4252_){
_start:
{
uint8_t v___x_1066__boxed_4253_; lean_object* v_res_4254_; 
v___x_1066__boxed_4253_ = lean_unbox(v___x_4249_);
v_res_4254_ = l_Std_Http_Body_stream___lam__3(v_gen_4246_, v_a_4247_, v___x_4248_, v___x_1066__boxed_4253_, v___f_4250_, v___f_4251_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4(lean_object* v_gen_4255_, lean_object* v_a_4256_, lean_object* v___f_4257_, lean_object* v___f_4258_, lean_object* v___f_4259_, lean_object* v_x_4260_){
_start:
{
if (lean_obj_tag(v_x_4260_) == 0)
{
lean_object* v_a_4262_; lean_object* v___x_4264_; uint8_t v_isShared_4265_; uint8_t v_isSharedCheck_4270_; 
lean_dec_ref(v___f_4259_);
lean_dec_ref(v___f_4258_);
lean_dec_ref(v___f_4257_);
lean_dec_ref(v_a_4256_);
lean_dec_ref(v_gen_4255_);
v_a_4262_ = lean_ctor_get(v_x_4260_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v_x_4260_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4264_ = v_x_4260_;
v_isShared_4265_ = v_isSharedCheck_4270_;
goto v_resetjp_4263_;
}
else
{
lean_inc(v_a_4262_);
lean_dec(v_x_4260_);
v___x_4264_ = lean_box(0);
v_isShared_4265_ = v_isSharedCheck_4270_;
goto v_resetjp_4263_;
}
v_resetjp_4263_:
{
lean_object* v___x_4267_; 
if (v_isShared_4265_ == 0)
{
v___x_4267_ = v___x_4264_;
goto v_reusejp_4266_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_a_4262_);
v___x_4267_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4266_;
}
v_reusejp_4266_:
{
lean_object* v___x_4268_; 
v___x_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4267_);
return v___x_4268_;
}
}
}
else
{
lean_object* v___x_4271_; uint8_t v___x_4272_; lean_object* v___x_4273_; lean_object* v___f_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; 
lean_dec_ref_known(v_x_4260_, 1);
v___x_4271_ = lean_unsigned_to_nat(0u);
v___x_4272_ = 0;
v___x_4273_ = lean_box(v___x_4272_);
v___f_4274_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__3___boxed), 7, 6);
lean_closure_set(v___f_4274_, 0, v_gen_4255_);
lean_closure_set(v___f_4274_, 1, v_a_4256_);
lean_closure_set(v___f_4274_, 2, v___x_4271_);
lean_closure_set(v___f_4274_, 3, v___x_4273_);
lean_closure_set(v___f_4274_, 4, v___f_4257_);
lean_closure_set(v___f_4274_, 5, v___f_4258_);
v___x_4275_ = lean_io_as_task(v___f_4274_, v___x_4271_);
lean_dec_ref(v___x_4275_);
v___x_4276_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_4277_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4271_, v___x_4272_, v___x_4276_, v___f_4259_);
return v___x_4277_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4___boxed(lean_object* v_gen_4278_, lean_object* v_a_4279_, lean_object* v___f_4280_, lean_object* v___f_4281_, lean_object* v___f_4282_, lean_object* v_x_4283_, lean_object* v___y_4284_){
_start:
{
lean_object* v_res_4285_; 
v_res_4285_ = l_Std_Http_Body_stream___lam__4(v_gen_4278_, v_a_4279_, v___f_4280_, v___f_4281_, v___f_4282_, v_x_4283_);
return v_res_4285_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5(lean_object* v___x_4286_, lean_object* v___y_4287_){
_start:
{
lean_object* v___x_4289_; lean_object* v_pendingProducer_4290_; lean_object* v_pendingConsumer_4291_; lean_object* v_interestWaiter_4292_; uint8_t v_closed_4293_; lean_object* v_pendingIncompleteChunk_4294_; lean_object* v_closeError_4295_; lean_object* v___x_4297_; uint8_t v_isShared_4298_; uint8_t v_isSharedCheck_4304_; 
v___x_4289_ = lean_st_ref_take(v___y_4287_);
v_pendingProducer_4290_ = lean_ctor_get(v___x_4289_, 0);
v_pendingConsumer_4291_ = lean_ctor_get(v___x_4289_, 1);
v_interestWaiter_4292_ = lean_ctor_get(v___x_4289_, 2);
v_closed_4293_ = lean_ctor_get_uint8(v___x_4289_, sizeof(void*)*6);
v_pendingIncompleteChunk_4294_ = lean_ctor_get(v___x_4289_, 4);
v_closeError_4295_ = lean_ctor_get(v___x_4289_, 5);
v_isSharedCheck_4304_ = !lean_is_exclusive(v___x_4289_);
if (v_isSharedCheck_4304_ == 0)
{
lean_object* v_unused_4305_; 
v_unused_4305_ = lean_ctor_get(v___x_4289_, 3);
lean_dec(v_unused_4305_);
v___x_4297_ = v___x_4289_;
v_isShared_4298_ = v_isSharedCheck_4304_;
goto v_resetjp_4296_;
}
else
{
lean_inc(v_closeError_4295_);
lean_inc(v_pendingIncompleteChunk_4294_);
lean_inc(v_interestWaiter_4292_);
lean_inc(v_pendingConsumer_4291_);
lean_inc(v_pendingProducer_4290_);
lean_dec(v___x_4289_);
v___x_4297_ = lean_box(0);
v_isShared_4298_ = v_isSharedCheck_4304_;
goto v_resetjp_4296_;
}
v_resetjp_4296_:
{
lean_object* v___x_4300_; 
if (v_isShared_4298_ == 0)
{
lean_ctor_set(v___x_4297_, 3, v___x_4286_);
v___x_4300_ = v___x_4297_;
goto v_reusejp_4299_;
}
else
{
lean_object* v_reuseFailAlloc_4303_; 
v_reuseFailAlloc_4303_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_4303_, 0, v_pendingProducer_4290_);
lean_ctor_set(v_reuseFailAlloc_4303_, 1, v_pendingConsumer_4291_);
lean_ctor_set(v_reuseFailAlloc_4303_, 2, v_interestWaiter_4292_);
lean_ctor_set(v_reuseFailAlloc_4303_, 3, v___x_4286_);
lean_ctor_set(v_reuseFailAlloc_4303_, 4, v_pendingIncompleteChunk_4294_);
lean_ctor_set(v_reuseFailAlloc_4303_, 5, v_closeError_4295_);
lean_ctor_set_uint8(v_reuseFailAlloc_4303_, sizeof(void*)*6, v_closed_4293_);
v___x_4300_ = v_reuseFailAlloc_4303_;
goto v_reusejp_4299_;
}
v_reusejp_4299_:
{
lean_object* v___x_4301_; lean_object* v___x_4302_; 
v___x_4301_ = lean_st_ref_put(v___y_4287_, v___x_4300_);
v___x_4302_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_4302_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5___boxed(lean_object* v___x_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_){
_start:
{
lean_object* v_res_4309_; 
v_res_4309_ = l_Std_Http_Body_stream___lam__5(v___x_4306_, v___y_4307_);
lean_dec(v___y_4307_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6(lean_object* v_gen_4314_, lean_object* v_x_4315_){
_start:
{
if (lean_obj_tag(v_x_4315_) == 0)
{
lean_object* v___x_4317_; 
lean_dec_ref(v_gen_4314_);
v___x_4317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4317_, 0, v_x_4315_);
return v___x_4317_;
}
else
{
lean_object* v_a_4318_; lean_object* v___f_4319_; lean_object* v___f_4320_; lean_object* v___f_4321_; lean_object* v___f_4322_; lean_object* v___f_4323_; lean_object* v___x_4324_; uint8_t v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; 
v_a_4318_ = lean_ctor_get(v_x_4315_, 0);
lean_inc_n(v_a_4318_, 4);
v___f_4319_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4319_, 0, v_x_4315_);
v___f_4320_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4320_, 0, v_a_4318_);
v___f_4321_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4321_, 0, v_a_4318_);
v___f_4322_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__4___boxed), 7, 5);
lean_closure_set(v___f_4322_, 0, v_gen_4314_);
lean_closure_set(v___f_4322_, 1, v_a_4318_);
lean_closure_set(v___f_4322_, 2, v___f_4321_);
lean_closure_set(v___f_4322_, 3, v___f_4320_);
lean_closure_set(v___f_4322_, 4, v___f_4319_);
v___f_4323_ = ((lean_object*)(l_Std_Http_Body_stream___lam__6___closed__1));
v___x_4324_ = lean_unsigned_to_nat(0u);
v___x_4325_ = 0;
v___x_4326_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_a_4318_, v___f_4323_);
v___x_4327_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4324_, v___x_4325_, v___x_4326_, v___f_4322_);
return v___x_4327_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6___boxed(lean_object* v_gen_4328_, lean_object* v_x_4329_, lean_object* v___y_4330_){
_start:
{
lean_object* v_res_4331_; 
v_res_4331_ = l_Std_Http_Body_stream___lam__6(v_gen_4328_, v_x_4329_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream(lean_object* v_gen_4332_){
_start:
{
lean_object* v___f_4334_; lean_object* v___x_4335_; uint8_t v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; 
v___f_4334_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__6___boxed), 3, 1);
lean_closure_set(v___f_4334_, 0, v_gen_4332_);
v___x_4335_ = lean_unsigned_to_nat(0u);
v___x_4336_ = 0;
v___x_4337_ = l_Std_Http_Body_mkStream();
v___x_4338_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4335_, v___x_4336_, v___x_4337_, v___f_4334_);
return v___x_4338_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___boxed(lean_object* v_gen_4339_, lean_object* v_a_4340_){
_start:
{
lean_object* v_res_4341_; 
v_res_4341_ = l_Std_Http_Body_stream(v_gen_4339_);
return v_res_4341_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0(lean_object* v___x_4342_, lean_object* v_content_4343_, lean_object* v_s_4344_, lean_object* v_x_4345_){
_start:
{
if (lean_obj_tag(v_x_4345_) == 0)
{
lean_object* v___x_4347_; 
lean_dec_ref(v_s_4344_);
lean_dec_ref(v_content_4343_);
v___x_4347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4347_, 0, v_x_4345_);
return v___x_4347_;
}
else
{
lean_object* v___x_4348_; uint8_t v___x_4349_; 
lean_dec_ref_known(v_x_4345_, 1);
v___x_4348_ = lean_unsigned_to_nat(0u);
v___x_4349_ = lean_nat_dec_lt(v___x_4348_, v___x_4342_);
if (v___x_4349_ == 0)
{
lean_object* v___x_4350_; 
lean_dec_ref(v_s_4344_);
lean_dec_ref(v_content_4343_);
v___x_4350_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_4350_;
}
else
{
lean_object* v___x_4351_; uint8_t v___x_4352_; lean_object* v___x_4353_; 
v___x_4351_ = l_Std_Http_Chunk_ofByteArray(v_content_4343_);
v___x_4352_ = 0;
v___x_4353_ = l_Std_Http_Body_Stream_send(v_s_4344_, v___x_4351_, v___x_4352_);
return v___x_4353_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0___boxed(lean_object* v___x_4354_, lean_object* v_content_4355_, lean_object* v_s_4356_, lean_object* v_x_4357_, lean_object* v___y_4358_){
_start:
{
lean_object* v_res_4359_; 
v_res_4359_ = l_Std_Http_Body_fromBytes___lam__0(v___x_4354_, v_content_4355_, v_s_4356_, v_x_4357_);
lean_dec(v___x_4354_);
return v_res_4359_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2(lean_object* v_content_4360_, lean_object* v_s_4361_){
_start:
{
lean_object* v___x_4363_; lean_object* v___f_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___f_4367_; lean_object* v___x_4368_; uint8_t v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; 
v___x_4363_ = lean_byte_array_size(v_content_4360_);
lean_inc_ref(v_s_4361_);
v___f_4364_ = lean_alloc_closure((void*)(l_Std_Http_Body_fromBytes___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4364_, 0, v___x_4363_);
lean_closure_set(v___f_4364_, 1, v_content_4360_);
lean_closure_set(v___f_4364_, 2, v_s_4361_);
v___x_4365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4363_);
v___x_4366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4366_, 0, v___x_4365_);
v___f_4367_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4367_, 0, v___x_4366_);
v___x_4368_ = lean_unsigned_to_nat(0u);
v___x_4369_ = 0;
v___x_4370_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_s_4361_, v___f_4367_);
v___x_4371_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4368_, v___x_4369_, v___x_4370_, v___f_4364_);
return v___x_4371_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2___boxed(lean_object* v_content_4372_, lean_object* v_s_4373_, lean_object* v___y_4374_){
_start:
{
lean_object* v_res_4375_; 
v_res_4375_ = l_Std_Http_Body_fromBytes___lam__2(v_content_4372_, v_s_4373_);
return v_res_4375_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes(lean_object* v_content_4376_){
_start:
{
lean_object* v___f_4378_; lean_object* v___x_4379_; 
v___f_4378_ = lean_alloc_closure((void*)(l_Std_Http_Body_fromBytes___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4378_, 0, v_content_4376_);
v___x_4379_ = l_Std_Http_Body_stream(v___f_4378_);
return v___x_4379_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___boxed(lean_object* v_content_4380_, lean_object* v_a_4381_){
_start:
{
lean_object* v_res_4382_; 
v_res_4382_ = l_Std_Http_Body_fromBytes(v_content_4380_);
return v_res_4382_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1(lean_object* v_a_4383_, lean_object* v___f_4384_, lean_object* v_x_4385_){
_start:
{
if (lean_obj_tag(v_x_4385_) == 0)
{
lean_object* v_a_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4395_; 
lean_dec_ref(v___f_4384_);
lean_dec_ref(v_a_4383_);
v_a_4387_ = lean_ctor_get(v_x_4385_, 0);
v_isSharedCheck_4395_ = !lean_is_exclusive(v_x_4385_);
if (v_isSharedCheck_4395_ == 0)
{
v___x_4389_ = v_x_4385_;
v_isShared_4390_ = v_isSharedCheck_4395_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_a_4387_);
lean_dec(v_x_4385_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4395_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v___x_4392_; 
if (v_isShared_4390_ == 0)
{
v___x_4392_ = v___x_4389_;
goto v_reusejp_4391_;
}
else
{
lean_object* v_reuseFailAlloc_4394_; 
v_reuseFailAlloc_4394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4394_, 0, v_a_4387_);
v___x_4392_ = v_reuseFailAlloc_4394_;
goto v_reusejp_4391_;
}
v_reusejp_4391_:
{
lean_object* v___x_4393_; 
v___x_4393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4393_, 0, v___x_4392_);
return v___x_4393_;
}
}
}
else
{
lean_object* v___x_4396_; uint8_t v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; 
lean_dec_ref_known(v_x_4385_, 1);
v___x_4396_ = lean_unsigned_to_nat(0u);
v___x_4397_ = 0;
v___x_4398_ = l_Std_Http_Body_Stream_close(v_a_4383_);
v___x_4399_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4396_, v___x_4397_, v___x_4398_, v___f_4384_);
return v___x_4399_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1___boxed(lean_object* v_a_4400_, lean_object* v___f_4401_, lean_object* v_x_4402_, lean_object* v___y_4403_){
_start:
{
lean_object* v_res_4404_; 
v_res_4404_ = l_Std_Http_Body_empty___lam__1(v_a_4400_, v___f_4401_, v_x_4402_);
return v_res_4404_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2(lean_object* v_x_4411_){
_start:
{
if (lean_obj_tag(v_x_4411_) == 0)
{
lean_object* v___x_4413_; 
v___x_4413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4413_, 0, v_x_4411_);
return v___x_4413_;
}
else
{
lean_object* v_a_4414_; lean_object* v___f_4415_; lean_object* v___f_4416_; lean_object* v___x_4417_; lean_object* v___f_4418_; uint8_t v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; 
v_a_4414_ = lean_ctor_get(v_x_4411_, 0);
lean_inc_n(v_a_4414_, 2);
v___f_4415_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4415_, 0, v_x_4411_);
v___f_4416_ = lean_alloc_closure((void*)(l_Std_Http_Body_empty___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4416_, 0, v_a_4414_);
lean_closure_set(v___f_4416_, 1, v___f_4415_);
v___x_4417_ = lean_unsigned_to_nat(0u);
v___f_4418_ = ((lean_object*)(l_Std_Http_Body_empty___lam__2___closed__2));
v___x_4419_ = 0;
v___x_4420_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_a_4414_, v___f_4418_);
v___x_4421_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4417_, v___x_4419_, v___x_4420_, v___f_4416_);
return v___x_4421_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2___boxed(lean_object* v_x_4422_, lean_object* v___y_4423_){
_start:
{
lean_object* v_res_4424_; 
v_res_4424_ = l_Std_Http_Body_empty___lam__2(v_x_4422_);
return v_res_4424_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty(){
_start:
{
lean_object* v___f_4427_; lean_object* v___x_4428_; uint8_t v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; 
v___f_4427_ = ((lean_object*)(l_Std_Http_Body_empty___closed__0));
v___x_4428_ = lean_unsigned_to_nat(0u);
v___x_4429_ = 0;
v___x_4430_ = l_Std_Http_Body_mkStream();
v___x_4431_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4428_, v___x_4429_, v___x_4430_, v___f_4427_);
return v___x_4431_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___boxed(lean_object* v_a_4432_){
_start:
{
lean_object* v_res_4433_; 
v_res_4433_ = l_Std_Http_Body_empty();
return v_res_4433_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeResponseStreamAny___lam__0(lean_object* v___x_4456_, lean_object* v_f_4457_){
_start:
{
lean_object* v_line_4458_; lean_object* v_body_4459_; lean_object* v_extensions_4460_; lean_object* v___x_4462_; uint8_t v_isShared_4463_; uint8_t v_isSharedCheck_4468_; 
v_line_4458_ = lean_ctor_get(v_f_4457_, 0);
v_body_4459_ = lean_ctor_get(v_f_4457_, 1);
v_extensions_4460_ = lean_ctor_get(v_f_4457_, 2);
v_isSharedCheck_4468_ = !lean_is_exclusive(v_f_4457_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4462_ = v_f_4457_;
v_isShared_4463_ = v_isSharedCheck_4468_;
goto v_resetjp_4461_;
}
else
{
lean_inc(v_extensions_4460_);
lean_inc(v_body_4459_);
lean_inc(v_line_4458_);
lean_dec(v_f_4457_);
v___x_4462_ = lean_box(0);
v_isShared_4463_ = v_isSharedCheck_4468_;
goto v_resetjp_4461_;
}
v_resetjp_4461_:
{
lean_object* v___x_4464_; lean_object* v___x_4466_; 
v___x_4464_ = l_Std_Http_Body_Any_ofBody___redArg(v___x_4456_, v_body_4459_);
if (v_isShared_4463_ == 0)
{
lean_ctor_set(v___x_4462_, 1, v___x_4464_);
v___x_4466_ = v___x_4462_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v_line_4458_);
lean_ctor_set(v_reuseFailAlloc_4467_, 1, v___x_4464_);
lean_ctor_set(v_reuseFailAlloc_4467_, 2, v_extensions_4460_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0(lean_object* v___x_4472_, lean_object* v_x_4473_){
_start:
{
if (lean_obj_tag(v_x_4473_) == 0)
{
lean_object* v_a_4475_; lean_object* v___x_4477_; uint8_t v_isShared_4478_; uint8_t v_isSharedCheck_4483_; 
lean_dec_ref(v___x_4472_);
v_a_4475_ = lean_ctor_get(v_x_4473_, 0);
v_isSharedCheck_4483_ = !lean_is_exclusive(v_x_4473_);
if (v_isSharedCheck_4483_ == 0)
{
v___x_4477_ = v_x_4473_;
v_isShared_4478_ = v_isSharedCheck_4483_;
goto v_resetjp_4476_;
}
else
{
lean_inc(v_a_4475_);
lean_dec(v_x_4473_);
v___x_4477_ = lean_box(0);
v_isShared_4478_ = v_isSharedCheck_4483_;
goto v_resetjp_4476_;
}
v_resetjp_4476_:
{
lean_object* v___x_4480_; 
if (v_isShared_4478_ == 0)
{
v___x_4480_ = v___x_4477_;
goto v_reusejp_4479_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_a_4475_);
v___x_4480_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4479_;
}
v_reusejp_4479_:
{
lean_object* v___x_4481_; 
v___x_4481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4481_, 0, v___x_4480_);
return v___x_4481_;
}
}
}
else
{
lean_object* v_a_4484_; lean_object* v___x_4486_; uint8_t v_isShared_4487_; uint8_t v_isSharedCheck_4503_; 
v_a_4484_ = lean_ctor_get(v_x_4473_, 0);
v_isSharedCheck_4503_ = !lean_is_exclusive(v_x_4473_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4486_ = v_x_4473_;
v_isShared_4487_ = v_isSharedCheck_4503_;
goto v_resetjp_4485_;
}
else
{
lean_inc(v_a_4484_);
lean_dec(v_x_4473_);
v___x_4486_ = lean_box(0);
v_isShared_4487_ = v_isSharedCheck_4503_;
goto v_resetjp_4485_;
}
v_resetjp_4485_:
{
lean_object* v_line_4488_; lean_object* v_body_4489_; lean_object* v_extensions_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4502_; 
v_line_4488_ = lean_ctor_get(v_a_4484_, 0);
v_body_4489_ = lean_ctor_get(v_a_4484_, 1);
v_extensions_4490_ = lean_ctor_get(v_a_4484_, 2);
v_isSharedCheck_4502_ = !lean_is_exclusive(v_a_4484_);
if (v_isSharedCheck_4502_ == 0)
{
v___x_4492_ = v_a_4484_;
v_isShared_4493_ = v_isSharedCheck_4502_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_extensions_4490_);
lean_inc(v_body_4489_);
lean_inc(v_line_4488_);
lean_dec(v_a_4484_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4502_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v___x_4494_; lean_object* v___x_4496_; 
v___x_4494_ = l_Std_Http_Body_Any_ofBody___redArg(v___x_4472_, v_body_4489_);
if (v_isShared_4493_ == 0)
{
lean_ctor_set(v___x_4492_, 1, v___x_4494_);
v___x_4496_ = v___x_4492_;
goto v_reusejp_4495_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v_line_4488_);
lean_ctor_set(v_reuseFailAlloc_4501_, 1, v___x_4494_);
lean_ctor_set(v_reuseFailAlloc_4501_, 2, v_extensions_4490_);
v___x_4496_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4495_;
}
v_reusejp_4495_:
{
lean_object* v___x_4498_; 
if (v_isShared_4487_ == 0)
{
lean_ctor_set(v___x_4486_, 0, v___x_4496_);
v___x_4498_ = v___x_4486_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v___x_4496_);
v___x_4498_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
lean_object* v___x_4499_; 
v___x_4499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4498_);
return v___x_4499_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0___boxed(lean_object* v___x_4504_, lean_object* v_x_4505_, lean_object* v___y_4506_){
_start:
{
lean_object* v_res_4507_; 
v_res_4507_ = l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0(v___x_4504_, v_x_4505_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1(lean_object* v___f_4508_, lean_object* v_action_4509_, lean_object* v___y_4510_){
_start:
{
lean_object* v___x_4512_; uint8_t v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; 
v___x_4512_ = lean_unsigned_to_nat(0u);
v___x_4513_ = 0;
lean_inc_ref(v___y_4510_);
v___x_4514_ = lean_apply_2(v_action_4509_, v___y_4510_, lean_box(0));
v___x_4515_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4512_, v___x_4513_, v___x_4514_, v___f_4508_);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1___boxed(lean_object* v___f_4516_, lean_object* v_action_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_){
_start:
{
lean_object* v_res_4520_; 
v_res_4520_ = l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1(v___f_4516_, v_action_4517_, v___y_4518_);
lean_dec_ref(v___y_4518_);
return v_res_4520_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1(lean_object* v___f_4526_, lean_object* v_action_4527_, lean_object* v___y_4528_){
_start:
{
lean_object* v___x_4530_; uint8_t v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; 
v___x_4530_ = lean_unsigned_to_nat(0u);
v___x_4531_ = 0;
v___x_4532_ = lean_apply_1(v_action_4527_, lean_box(0));
v___x_4533_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4530_, v___x_4531_, v___x_4532_, v___f_4526_);
return v___x_4533_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1___boxed(lean_object* v___f_4534_, lean_object* v_action_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_){
_start:
{
lean_object* v_res_4538_; 
v_res_4538_ = l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1(v___f_4534_, v_action_4535_, v___y_4536_);
lean_dec_ref(v___y_4536_);
return v_res_4538_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0(lean_object* v_builder_4542_, lean_object* v_x_4543_){
_start:
{
if (lean_obj_tag(v_x_4543_) == 0)
{
lean_object* v_a_4545_; lean_object* v___x_4547_; uint8_t v_isShared_4548_; uint8_t v_isSharedCheck_4553_; 
v_a_4545_ = lean_ctor_get(v_x_4543_, 0);
v_isSharedCheck_4553_ = !lean_is_exclusive(v_x_4543_);
if (v_isSharedCheck_4553_ == 0)
{
v___x_4547_ = v_x_4543_;
v_isShared_4548_ = v_isSharedCheck_4553_;
goto v_resetjp_4546_;
}
else
{
lean_inc(v_a_4545_);
lean_dec(v_x_4543_);
v___x_4547_ = lean_box(0);
v_isShared_4548_ = v_isSharedCheck_4553_;
goto v_resetjp_4546_;
}
v_resetjp_4546_:
{
lean_object* v___x_4550_; 
if (v_isShared_4548_ == 0)
{
v___x_4550_ = v___x_4547_;
goto v_reusejp_4549_;
}
else
{
lean_object* v_reuseFailAlloc_4552_; 
v_reuseFailAlloc_4552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4552_, 0, v_a_4545_);
v___x_4550_ = v_reuseFailAlloc_4552_;
goto v_reusejp_4549_;
}
v_reusejp_4549_:
{
lean_object* v___x_4551_; 
v___x_4551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4551_, 0, v___x_4550_);
return v___x_4551_;
}
}
}
else
{
lean_object* v_a_4554_; lean_object* v___x_4556_; uint8_t v_isShared_4557_; uint8_t v_isSharedCheck_4563_; 
v_a_4554_ = lean_ctor_get(v_x_4543_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v_x_4543_);
if (v_isSharedCheck_4563_ == 0)
{
v___x_4556_ = v_x_4543_;
v_isShared_4557_ = v_isSharedCheck_4563_;
goto v_resetjp_4555_;
}
else
{
lean_inc(v_a_4554_);
lean_dec(v_x_4543_);
v___x_4556_ = lean_box(0);
v_isShared_4557_ = v_isSharedCheck_4563_;
goto v_resetjp_4555_;
}
v_resetjp_4555_:
{
lean_object* v___x_4558_; lean_object* v___x_4560_; 
v___x_4558_ = l_Std_Http_Request_Builder_body___redArg(v_builder_4542_, v_a_4554_);
if (v_isShared_4557_ == 0)
{
lean_ctor_set(v___x_4556_, 0, v___x_4558_);
v___x_4560_ = v___x_4556_;
goto v_reusejp_4559_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v___x_4558_);
v___x_4560_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4559_;
}
v_reusejp_4559_:
{
lean_object* v___x_4561_; 
v___x_4561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4561_, 0, v___x_4560_);
return v___x_4561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0___boxed(lean_object* v_builder_4564_, lean_object* v_x_4565_, lean_object* v___y_4566_){
_start:
{
lean_object* v_res_4567_; 
v_res_4567_ = l_Std_Http_Request_Builder_stream___lam__0(v_builder_4564_, v_x_4565_);
lean_dec_ref(v_builder_4564_);
return v_res_4567_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream(lean_object* v_builder_4568_, lean_object* v_gen_4569_){
_start:
{
lean_object* v___f_4571_; lean_object* v___x_4572_; uint8_t v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; 
v___f_4571_ = lean_alloc_closure((void*)(l_Std_Http_Request_Builder_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4571_, 0, v_builder_4568_);
v___x_4572_ = lean_unsigned_to_nat(0u);
v___x_4573_ = 0;
v___x_4574_ = l_Std_Http_Body_stream(v_gen_4569_);
v___x_4575_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4572_, v___x_4573_, v___x_4574_, v___f_4571_);
return v___x_4575_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___boxed(lean_object* v_builder_4576_, lean_object* v_gen_4577_, lean_object* v_a_4578_){
_start:
{
lean_object* v_res_4579_; 
v_res_4579_ = l_Std_Http_Request_Builder_stream(v_builder_4576_, v_gen_4577_);
return v_res_4579_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0(lean_object* v_builder_4580_, lean_object* v_x_4581_){
_start:
{
if (lean_obj_tag(v_x_4581_) == 0)
{
lean_object* v_a_4583_; lean_object* v___x_4585_; uint8_t v_isShared_4586_; uint8_t v_isSharedCheck_4591_; 
v_a_4583_ = lean_ctor_get(v_x_4581_, 0);
v_isSharedCheck_4591_ = !lean_is_exclusive(v_x_4581_);
if (v_isSharedCheck_4591_ == 0)
{
v___x_4585_ = v_x_4581_;
v_isShared_4586_ = v_isSharedCheck_4591_;
goto v_resetjp_4584_;
}
else
{
lean_inc(v_a_4583_);
lean_dec(v_x_4581_);
v___x_4585_ = lean_box(0);
v_isShared_4586_ = v_isSharedCheck_4591_;
goto v_resetjp_4584_;
}
v_resetjp_4584_:
{
lean_object* v___x_4588_; 
if (v_isShared_4586_ == 0)
{
v___x_4588_ = v___x_4585_;
goto v_reusejp_4587_;
}
else
{
lean_object* v_reuseFailAlloc_4590_; 
v_reuseFailAlloc_4590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4590_, 0, v_a_4583_);
v___x_4588_ = v_reuseFailAlloc_4590_;
goto v_reusejp_4587_;
}
v_reusejp_4587_:
{
lean_object* v___x_4589_; 
v___x_4589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4589_, 0, v___x_4588_);
return v___x_4589_;
}
}
}
else
{
lean_object* v_a_4592_; lean_object* v___x_4594_; uint8_t v_isShared_4595_; uint8_t v_isSharedCheck_4601_; 
v_a_4592_ = lean_ctor_get(v_x_4581_, 0);
v_isSharedCheck_4601_ = !lean_is_exclusive(v_x_4581_);
if (v_isSharedCheck_4601_ == 0)
{
v___x_4594_ = v_x_4581_;
v_isShared_4595_ = v_isSharedCheck_4601_;
goto v_resetjp_4593_;
}
else
{
lean_inc(v_a_4592_);
lean_dec(v_x_4581_);
v___x_4594_ = lean_box(0);
v_isShared_4595_ = v_isSharedCheck_4601_;
goto v_resetjp_4593_;
}
v_resetjp_4593_:
{
lean_object* v___x_4596_; lean_object* v___x_4598_; 
v___x_4596_ = l_Std_Http_Response_Builder_body___redArg(v_builder_4580_, v_a_4592_);
if (v_isShared_4595_ == 0)
{
lean_ctor_set(v___x_4594_, 0, v___x_4596_);
v___x_4598_ = v___x_4594_;
goto v_reusejp_4597_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v___x_4596_);
v___x_4598_ = v_reuseFailAlloc_4600_;
goto v_reusejp_4597_;
}
v_reusejp_4597_:
{
lean_object* v___x_4599_; 
v___x_4599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4598_);
return v___x_4599_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0___boxed(lean_object* v_builder_4602_, lean_object* v_x_4603_, lean_object* v___y_4604_){
_start:
{
lean_object* v_res_4605_; 
v_res_4605_ = l_Std_Http_Response_Builder_stream___lam__0(v_builder_4602_, v_x_4603_);
lean_dec_ref(v_builder_4602_);
return v_res_4605_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream(lean_object* v_builder_4606_, lean_object* v_gen_4607_){
_start:
{
lean_object* v___f_4609_; lean_object* v___x_4610_; uint8_t v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; 
v___f_4609_ = lean_alloc_closure((void*)(l_Std_Http_Response_Builder_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4609_, 0, v_builder_4606_);
v___x_4610_ = lean_unsigned_to_nat(0u);
v___x_4611_ = 0;
v___x_4612_ = l_Std_Http_Body_stream(v_gen_4607_);
v___x_4613_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4610_, v___x_4611_, v___x_4612_, v___f_4609_);
return v___x_4613_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___boxed(lean_object* v_builder_4614_, lean_object* v_gen_4615_, lean_object* v_a_4616_){
_start:
{
lean_object* v_res_4617_; 
v_res_4617_ = l_Std_Http_Response_Builder_stream(v_builder_4614_, v_gen_4615_);
return v_res_4617_;
}
}
lean_object* runtime_initialize_Std_Sync(uint8_t builtin);
lean_object* runtime_initialize_Std_Async(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Request(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Response(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Chunk(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Body_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Body_Any(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ByteArray(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Body_Stream(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Sync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Response(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Chunk(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Any(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_Body_instImpl_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = _init_l_Std_Http_Body_instImpl_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_();
lean_mark_persistent(l_Std_Http_Body_instImpl_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_);
l_Std_Http_Body_instTypeNameStream = _init_l_Std_Http_Body_instTypeNameStream();
lean_mark_persistent(l_Std_Http_Body_instTypeNameStream);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Body_Stream(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Sync(uint8_t builtin);
lean_object* initialize_Std_Async(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Request(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Response(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Chunk(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Body_Basic(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Body_Any(uint8_t builtin);
lean_object* initialize_Init_Data_ByteArray(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Body_Stream(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Sync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Response(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Chunk(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Body_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Body_Any(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Body_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Body_Stream(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Std.Async.ContextAsync
// Imports: public import Std.Internal.UV public import Std.Async.Timer public import Std.Sync.CancellationContext
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
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Std_CancellationContext_cancel(lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_CancellationContext_fork(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_CancellationToken_selector(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_CancellationContext_new();
lean_object* l_Std_CancellationToken_getCancellationReason(lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_CancellationToken_wait(lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_CancellationToken_isCancelled(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getContext(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_isCancelled___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_isCancelled___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_isCancelled___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_isCancelled___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_getCancellationReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_getCancellationReason___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_getCancellationReason___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_getCancellationReason___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_doneSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_doneSelector___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_doneSelector___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_doneSelector___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_awaitCancellation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_awaitCancellation___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_awaitCancellation___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_awaitCancellation___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_awaitCancellation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_awaitCancellation___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_awaitCancellation___closed__0_value)} };
static const lean_object* l_Std_Async_ContextAsync_awaitCancellation___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_awaitCancellation___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_concurrently___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_concurrently___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_concurrently___redArg___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_concurrently___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_concurrently___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_concurrently___redArg___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_concurrently___redArg___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_concurrently___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__0_value;
static lean_once_cell_t l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1;
static lean_once_cell_t l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_ContextAsync_background___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_background___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_background___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_raceAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_raceAll___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_raceAll___redArg___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_raceAll___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_concurrently___redArg___closed__1_value),((lean_object*)&l_Std_Async_ContextAsync_concurrently___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask = (const lean_object*)&l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instFunctor___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instFunctor___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instFunctor___lam__1___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__0_value)} };
static const lean_object* l_Std_Async_ContextAsync_instFunctor___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__1_value;
static const lean_ctor_object l_Std_Async_ContextAsync_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__0_value),((lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__1_value)}};
static const lean_object* l_Std_Async_ContextAsync_instFunctor___closed__2 = (const lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instFunctor = (const lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonad___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonad___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonad___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonad___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonad___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instMonad___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadLiftIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadLiftIO___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_instMonadLiftIO___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadLiftIO___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__0_value)} };
static const lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__1_value;
static const lean_closure_object l_Std_Async_ContextAsync_instMonadLiftIO___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadLiftIO___lam__2___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__1_value)} };
static const lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___closed__2 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadLiftIO = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadLiftBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftBaseIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftBaseIO___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadExceptError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadExceptError___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadExceptError___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_instMonadExceptError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadExceptError___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadExceptError___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__1_value;
static const lean_ctor_object l_Std_Async_ContextAsync_instMonadExceptError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__0_value),((lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__1_value)}};
static const lean_object* l_Std_Async_ContextAsync_instMonadExceptError___closed__2 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadExceptError = (const lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadFinally___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadFinally___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadFinally___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadFinally___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadFinally = (const lean_object*)&l_Std_Async_ContextAsync_instMonadFinally___closed__0_value;
static const lean_string_object l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__1_value)}};
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__2 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__2_value;
static const lean_ctor_object l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__2_value)}};
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__3 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask = (const lean_object*)&l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_race___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_race___redArg___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_race___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Selector_cancelled(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Selector_cancelled___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___redArg(lean_object* v_ctx_1_, lean_object* v_x_2_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_apply_2(v_x_2_, v_ctx_1_, lean_box(0));
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___redArg___boxed(lean_object* v_ctx_5_, lean_object* v_x_6_, lean_object* v_a_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Std_Async_ContextAsync_runIn___redArg(v_ctx_5_, v_x_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn(lean_object* v_00_u03b1_9_, lean_object* v_ctx_10_, lean_object* v_x_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_apply_2(v_x_11_, v_ctx_10_, lean_box(0));
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___boxed(lean_object* v_00_u03b1_14_, lean_object* v_ctx_15_, lean_object* v_x_16_, lean_object* v_a_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Std_Async_ContextAsync_runIn(v_00_u03b1_14_, v_ctx_15_, v_x_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__0(lean_object* v_x_19_, lean_object* v_x_20_){
_start:
{
if (lean_obj_tag(v_x_20_) == 0)
{
lean_object* v_a_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_30_; 
lean_dec_ref(v_x_19_);
v_a_22_ = lean_ctor_get(v_x_20_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v_x_20_);
if (v_isSharedCheck_30_ == 0)
{
v___x_24_ = v_x_20_;
v_isShared_25_ = v_isSharedCheck_30_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_a_22_);
lean_dec(v_x_20_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_30_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_27_; 
if (v_isShared_25_ == 0)
{
v___x_27_ = v___x_24_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_22_);
v___x_27_ = v_reuseFailAlloc_29_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
lean_object* v___x_28_; 
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
return v___x_28_;
}
}
}
else
{
lean_object* v___x_31_; 
lean_dec_ref_known(v_x_20_, 1);
v___x_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_31_, 0, v_x_19_);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__0___boxed(lean_object* v_x_32_, lean_object* v_x_33_, lean_object* v___y_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Std_Async_ContextAsync_run___redArg___lam__0(v_x_32_, v_x_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__1(lean_object* v_a_36_, lean_object* v_x_37_){
_start:
{
if (lean_obj_tag(v_x_37_) == 0)
{
lean_object* v___x_39_; 
lean_dec_ref(v_a_36_);
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v_x_37_);
return v___x_39_;
}
else
{
lean_object* v___f_40_; lean_object* v___x_41_; uint8_t v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___f_40_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_40_, 0, v_x_37_);
v___x_41_ = lean_unsigned_to_nat(0u);
v___x_42_ = 0;
v___x_43_ = lean_box(2);
v___x_44_ = l_Std_CancellationContext_cancel(v_a_36_, v___x_43_);
v___x_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
v___x_47_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_41_, v___x_42_, v___x_46_, v___f_40_);
return v___x_47_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__1___boxed(lean_object* v_a_48_, lean_object* v_x_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Std_Async_ContextAsync_run___redArg___lam__1(v_a_48_, v_x_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__2(lean_object* v_x_52_, lean_object* v_x_53_){
_start:
{
if (lean_obj_tag(v_x_53_) == 0)
{
lean_object* v_a_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_63_; 
lean_dec_ref(v_x_52_);
v_a_55_ = lean_ctor_get(v_x_53_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v_x_53_);
if (v_isSharedCheck_63_ == 0)
{
v___x_57_ = v_x_53_;
v_isShared_58_ = v_isSharedCheck_63_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_a_55_);
lean_dec(v_x_53_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_63_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_58_ == 0)
{
v___x_60_ = v___x_57_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_a_55_);
v___x_60_ = v_reuseFailAlloc_62_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
}
}
else
{
lean_object* v_a_64_; lean_object* v___f_65_; lean_object* v___x_66_; uint8_t v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v_a_64_ = lean_ctor_get(v_x_53_, 0);
lean_inc_n(v_a_64_, 2);
lean_dec_ref_known(v_x_53_, 1);
v___f_65_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_65_, 0, v_a_64_);
v___x_66_ = lean_unsigned_to_nat(0u);
v___x_67_ = 0;
v___x_68_ = lean_apply_2(v_x_52_, v_a_64_, lean_box(0));
v___x_69_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_66_, v___x_67_, v___x_68_, v___f_65_);
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__2___boxed(lean_object* v_x_70_, lean_object* v_x_71_, lean_object* v___y_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Std_Async_ContextAsync_run___redArg___lam__2(v_x_70_, v_x_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg(lean_object* v_x_74_){
_start:
{
lean_object* v___f_76_; lean_object* v___x_77_; uint8_t v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___f_76_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_76_, 0, v_x_74_);
v___x_77_ = lean_unsigned_to_nat(0u);
v___x_78_ = 0;
v___x_79_ = l_Std_CancellationContext_new();
v___x_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
v___x_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
v___x_82_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_77_, v___x_78_, v___x_81_, v___f_76_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___boxed(lean_object* v_x_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Std_Async_ContextAsync_run___redArg(v_x_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run(lean_object* v_00_u03b1_86_, lean_object* v_x_87_){
_start:
{
lean_object* v___f_89_; lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___f_89_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_89_, 0, v_x_87_);
v___x_90_ = lean_unsigned_to_nat(0u);
v___x_91_ = 0;
v___x_92_ = l_Std_CancellationContext_new();
v___x_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
v___x_95_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_90_, v___x_91_, v___x_94_, v___f_89_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___boxed(lean_object* v_00_u03b1_96_, lean_object* v_x_97_, lean_object* v_a_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Std_Async_ContextAsync_run(v_00_u03b1_96_, v_x_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getContext(lean_object* v_ctx_100_){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_inc_ref(v_ctx_100_);
v___x_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_102_, 0, v_ctx_100_);
v___x_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getContext___boxed(lean_object* v_ctx_104_, lean_object* v_a_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Std_Async_ContextAsync_getContext(v_ctx_104_);
lean_dec_ref(v_ctx_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___lam__0(lean_object* v_x_107_){
_start:
{
if (lean_obj_tag(v_x_107_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_117_; 
v_a_109_ = lean_ctor_get(v_x_107_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v_x_107_);
if (v_isSharedCheck_117_ == 0)
{
v___x_111_ = v_x_107_;
v_isShared_112_ = v_isSharedCheck_117_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v_x_107_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_117_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_116_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v___x_115_; 
v___x_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
return v___x_115_;
}
}
}
else
{
lean_object* v_a_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_129_; 
v_a_118_ = lean_ctor_get(v_x_107_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v_x_107_);
if (v_isSharedCheck_129_ == 0)
{
v___x_120_ = v_x_107_;
v_isShared_121_ = v_isSharedCheck_129_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_a_118_);
lean_dec(v_x_107_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_129_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v_token_122_; uint8_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_126_; 
v_token_122_ = lean_ctor_get(v_a_118_, 1);
lean_inc_ref(v_token_122_);
lean_dec(v_a_118_);
v___x_123_ = l_Std_CancellationToken_isCancelled(v_token_122_);
v___x_124_ = lean_box(v___x_123_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 0, v___x_124_);
v___x_126_ = v___x_120_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_124_);
v___x_126_ = v_reuseFailAlloc_128_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
lean_object* v___x_127_; 
v___x_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
return v___x_127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___lam__0___boxed(lean_object* v_x_130_, lean_object* v___y_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Std_Async_ContextAsync_isCancelled___lam__0(v_x_130_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled(lean_object* v_a_134_){
_start:
{
lean_object* v___f_136_; lean_object* v___x_137_; uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___f_136_ = ((lean_object*)(l_Std_Async_ContextAsync_isCancelled___closed__0));
v___x_137_ = lean_unsigned_to_nat(0u);
v___x_138_ = 0;
lean_inc_ref(v_a_134_);
v___x_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_139_, 0, v_a_134_);
v___x_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
v___x_141_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_137_, v___x_138_, v___x_140_, v___f_136_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___boxed(lean_object* v_a_142_, lean_object* v_a_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Std_Async_ContextAsync_isCancelled(v_a_142_);
lean_dec_ref(v_a_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___lam__0(lean_object* v_x_145_){
_start:
{
if (lean_obj_tag(v_x_145_) == 0)
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_155_; 
v_a_147_ = lean_ctor_get(v_x_145_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v_x_145_);
if (v_isSharedCheck_155_ == 0)
{
v___x_149_ = v_x_145_;
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v_x_145_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_154_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_153_; 
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_166_; 
v_a_156_ = lean_ctor_get(v_x_145_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v_x_145_);
if (v_isSharedCheck_166_ == 0)
{
v___x_158_ = v_x_145_;
v_isShared_159_ = v_isSharedCheck_166_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v_x_145_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_166_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v_token_160_; lean_object* v___x_161_; lean_object* v___x_163_; 
v_token_160_ = lean_ctor_get(v_a_156_, 1);
lean_inc_ref(v_token_160_);
lean_dec(v_a_156_);
v___x_161_ = l_Std_CancellationToken_getCancellationReason(v_token_160_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v___x_161_);
v___x_163_ = v___x_158_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_161_);
v___x_163_ = v_reuseFailAlloc_165_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; 
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___lam__0___boxed(lean_object* v_x_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Std_Async_ContextAsync_getCancellationReason___lam__0(v_x_167_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason(lean_object* v_a_171_){
_start:
{
lean_object* v___f_173_; lean_object* v___x_174_; uint8_t v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___f_173_ = ((lean_object*)(l_Std_Async_ContextAsync_getCancellationReason___closed__0));
v___x_174_ = lean_unsigned_to_nat(0u);
v___x_175_ = 0;
lean_inc_ref(v_a_171_);
v___x_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_176_, 0, v_a_171_);
v___x_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
v___x_178_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_174_, v___x_175_, v___x_177_, v___f_173_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___boxed(lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Std_Async_ContextAsync_getCancellationReason(v_a_179_);
lean_dec_ref(v_a_179_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___lam__0(lean_object* v_reason_182_, lean_object* v_x_183_){
_start:
{
if (lean_obj_tag(v_x_183_) == 0)
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_193_; 
lean_dec(v_reason_182_);
v_a_185_ = lean_ctor_get(v_x_183_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v_x_183_);
if (v_isSharedCheck_193_ == 0)
{
v___x_187_ = v_x_183_;
v_isShared_188_ = v_isSharedCheck_193_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v_x_183_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_193_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_190_; 
if (v_isShared_188_ == 0)
{
v___x_190_ = v___x_187_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_185_);
v___x_190_ = v_reuseFailAlloc_192_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
lean_object* v___x_191_; 
v___x_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
return v___x_191_;
}
}
}
else
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_203_; 
v_a_194_ = lean_ctor_get(v_x_183_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v_x_183_);
if (v_isSharedCheck_203_ == 0)
{
v___x_196_ = v_x_183_;
v_isShared_197_ = v_isSharedCheck_203_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v_x_183_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_203_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_200_; 
v___x_198_ = l_Std_CancellationContext_cancel(v_a_194_, v_reason_182_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_198_);
v___x_200_ = v___x_196_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_198_);
v___x_200_ = v_reuseFailAlloc_202_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
lean_object* v___x_201_; 
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
return v___x_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___lam__0___boxed(lean_object* v_reason_204_, lean_object* v_x_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Std_Async_ContextAsync_cancel___lam__0(v_reason_204_, v_x_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel(lean_object* v_reason_208_, lean_object* v_a_209_){
_start:
{
lean_object* v___f_211_; lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___f_211_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_cancel___lam__0___boxed), 3, 1);
lean_closure_set(v___f_211_, 0, v_reason_208_);
v___x_212_ = lean_unsigned_to_nat(0u);
v___x_213_ = 0;
lean_inc_ref(v_a_209_);
v___x_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_214_, 0, v_a_209_);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
v___x_216_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_212_, v___x_213_, v___x_215_, v___f_211_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___boxed(lean_object* v_reason_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Std_Async_ContextAsync_cancel(v_reason_217_, v_a_218_);
lean_dec_ref(v_a_218_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___lam__0(lean_object* v_x_221_){
_start:
{
if (lean_obj_tag(v_x_221_) == 0)
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_231_; 
v_a_223_ = lean_ctor_get(v_x_221_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v_x_221_);
if (v_isSharedCheck_231_ == 0)
{
v___x_225_ = v_x_221_;
v_isShared_226_ = v_isSharedCheck_231_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v_x_221_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_231_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_226_ == 0)
{
v___x_228_ = v___x_225_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_a_223_);
v___x_228_ = v_reuseFailAlloc_230_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_229_; 
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
return v___x_229_;
}
}
}
else
{
lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_242_; 
v_a_232_ = lean_ctor_get(v_x_221_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v_x_221_);
if (v_isSharedCheck_242_ == 0)
{
v___x_234_ = v_x_221_;
v_isShared_235_ = v_isSharedCheck_242_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v_x_221_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_242_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v_token_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
v_token_236_ = lean_ctor_get(v_a_232_, 1);
lean_inc_ref(v_token_236_);
lean_dec(v_a_232_);
v___x_237_ = l_Std_CancellationToken_selector(v_token_236_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v___x_237_);
v___x_239_ = v___x_234_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_237_);
v___x_239_ = v_reuseFailAlloc_241_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; 
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___lam__0___boxed(lean_object* v_x_243_, lean_object* v___y_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Std_Async_ContextAsync_doneSelector___lam__0(v_x_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector(lean_object* v_a_247_){
_start:
{
lean_object* v___f_249_; lean_object* v___x_250_; uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___f_249_ = ((lean_object*)(l_Std_Async_ContextAsync_doneSelector___closed__0));
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = 0;
lean_inc_ref(v_a_247_);
v___x_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_252_, 0, v_a_247_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
v___x_254_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_250_, v___x_251_, v___x_253_, v___f_249_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___boxed(lean_object* v_a_255_, lean_object* v_a_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Std_Async_ContextAsync_doneSelector(v_a_255_);
lean_dec_ref(v_a_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__0(lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
lean_object* v_a_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_268_; 
v_a_260_ = lean_ctor_get(v_x_258_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_268_ == 0)
{
v___x_262_ = v_x_258_;
v_isShared_263_ = v_isSharedCheck_268_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_a_260_);
lean_dec(v_x_258_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_268_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_265_; 
if (v_isShared_263_ == 0)
{
v___x_265_ = v___x_262_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_260_);
v___x_265_ = v_reuseFailAlloc_267_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
lean_object* v___x_266_; 
v___x_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
return v___x_266_;
}
}
}
else
{
lean_object* v_a_269_; lean_object* v___x_270_; 
v_a_269_ = lean_ctor_get(v_x_258_, 0);
lean_inc(v_a_269_);
lean_dec_ref_known(v_x_258_, 1);
v___x_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_270_, 0, v_a_269_);
return v___x_270_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__0___boxed(lean_object* v_x_271_, lean_object* v___y_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Std_Async_ContextAsync_awaitCancellation___lam__0(v_x_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__1(lean_object* v___f_274_, lean_object* v_x_275_){
_start:
{
if (lean_obj_tag(v_x_275_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_285_; 
lean_dec_ref(v___f_274_);
v_a_277_ = lean_ctor_get(v_x_275_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v_x_275_);
if (v_isSharedCheck_285_ == 0)
{
v___x_279_ = v_x_275_;
v_isShared_280_ = v_isSharedCheck_285_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v_x_275_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_285_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_284_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_283_; 
v___x_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
return v___x_283_;
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_306_; 
v_a_286_ = lean_ctor_get(v_x_275_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v_x_275_);
if (v_isSharedCheck_306_ == 0)
{
v___x_288_ = v_x_275_;
v_isShared_289_ = v_isSharedCheck_306_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v_x_275_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_306_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v_token_290_; lean_object* v___x_291_; uint8_t v___x_292_; lean_object* v_val_294_; lean_object* v___x_297_; 
v_token_290_ = lean_ctor_get(v_a_286_, 1);
lean_inc_ref(v_token_290_);
lean_dec(v_a_286_);
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = 0;
v___x_297_ = l_Std_CancellationToken_wait(v_token_290_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_300_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_298_);
lean_dec_ref_known(v___x_297_, 1);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 0, v_a_298_);
v___x_300_ = v___x_288_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
v_val_294_ = v___x_300_;
goto v___jp_293_;
}
}
else
{
lean_object* v_a_302_; lean_object* v___x_304_; 
v_a_302_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_302_);
lean_dec_ref_known(v___x_297_, 1);
if (v_isShared_289_ == 0)
{
lean_ctor_set_tag(v___x_288_, 0);
lean_ctor_set(v___x_288_, 0, v_a_302_);
v___x_304_ = v___x_288_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_a_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
v_val_294_ = v___x_304_;
goto v___jp_293_;
}
}
v___jp_293_:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_295_, 0, v_val_294_);
v___x_296_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_291_, v___x_292_, v___x_295_, v___f_274_);
return v___x_296_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__1___boxed(lean_object* v___f_307_, lean_object* v_x_308_, lean_object* v___y_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Std_Async_ContextAsync_awaitCancellation___lam__1(v___f_307_, v_x_308_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation(lean_object* v_a_314_){
_start:
{
lean_object* v___f_316_; lean_object* v___x_317_; uint8_t v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___f_316_ = ((lean_object*)(l_Std_Async_ContextAsync_awaitCancellation___closed__1));
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = 0;
lean_inc_ref(v_a_314_);
v___x_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_319_, 0, v_a_314_);
v___x_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
v___x_321_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_317_, v___x_318_, v___x_320_, v___f_316_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___boxed(lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Std_Async_ContextAsync_awaitCancellation(v_a_322_);
lean_dec_ref(v_a_322_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__0(lean_object* v_x_325_){
_start:
{
if (lean_obj_tag(v_x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_327_; 
v_a_326_ = lean_ctor_get(v_x_325_, 0);
lean_inc(v_a_326_);
lean_dec_ref_known(v_x_325_, 1);
v___x_327_ = lean_task_pure(v_a_326_);
return v___x_327_;
}
else
{
lean_object* v_a_328_; 
v_a_328_ = lean_ctor_get(v_x_325_, 0);
lean_inc_ref(v_a_328_);
lean_dec_ref_known(v_x_325_, 1);
return v_a_328_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__2(lean_object* v_x_329_){
_start:
{
lean_object* v_fst_330_; 
v_fst_330_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_fst_330_);
return v_fst_330_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__2___boxed(lean_object* v_x_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__2(v_x_331_);
lean_dec_ref(v_x_331_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__4(lean_object* v_a_333_, lean_object* v_x_334_){
_start:
{
if (lean_obj_tag(v_x_334_) == 0)
{
lean_object* v___f_336_; lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___f_336_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_336_, 0, v_x_334_);
v___x_337_ = lean_box(2);
v___x_338_ = lean_unsigned_to_nat(0u);
v___x_339_ = 0;
v___x_340_ = l_Std_CancellationContext_cancel(v_a_333_, v___x_337_);
v___x_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
v___x_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
v___x_343_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_338_, v___x_339_, v___x_342_, v___f_336_);
return v___x_343_;
}
else
{
lean_object* v___x_344_; 
lean_dec_ref(v_a_333_);
v___x_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_344_, 0, v_x_334_);
return v___x_344_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__4___boxed(lean_object* v_a_345_, lean_object* v_x_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__4(v_a_345_, v_x_346_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__1(lean_object* v_x_349_, lean_object* v_a_350_, lean_object* v___f_351_){
_start:
{
lean_object* v___x_353_; uint8_t v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_353_ = lean_unsigned_to_nat(0u);
v___x_354_ = 0;
v___x_355_ = lean_apply_2(v_x_349_, v_a_350_, lean_box(0));
v___x_356_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_353_, v___x_354_, v___x_355_, v___f_351_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__1___boxed(lean_object* v_x_357_, lean_object* v_a_358_, lean_object* v___f_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__1(v_x_357_, v_a_358_, v___f_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__3(lean_object* v_a_362_, lean_object* v___x_363_, lean_object* v_x_364_){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_366_ = l_Std_CancellationContext_cancel(v_a_362_, v___x_363_);
v___x_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
v___x_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed(lean_object* v_a_369_, lean_object* v___x_370_, lean_object* v_x_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__3(v_a_369_, v___x_370_, v_x_371_);
lean_dec(v_x_371_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__5(lean_object* v___f_374_, lean_object* v___f_375_, lean_object* v___f_376_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; lean_object* v___x_381_; lean_object* v___y_383_; 
v___x_378_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_378_, 0, lean_box(0));
lean_closure_set(v___x_378_, 1, lean_box(0));
lean_closure_set(v___x_378_, 2, lean_box(0));
lean_closure_set(v___x_378_, 3, v___f_374_);
v___x_379_ = lean_unsigned_to_nat(0u);
v___x_380_ = 0;
v___x_381_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_375_, v___f_376_, v___x_379_, v___x_380_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_385_; 
lean_dec_ref(v___x_378_);
v_a_385_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v___x_381_, 1);
if (lean_obj_tag(v_a_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
v_a_386_ = lean_ctor_get(v_a_385_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v_a_385_);
if (v_isSharedCheck_393_ == 0)
{
v___x_388_ = v_a_385_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v_a_385_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_386_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
v___y_383_ = v___x_391_;
goto v___jp_382_;
}
}
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_402_; 
v_a_394_ = lean_ctor_get(v_a_385_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v_a_385_);
if (v_isSharedCheck_402_ == 0)
{
v___x_396_ = v_a_385_;
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v_a_385_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v_fst_398_; lean_object* v___x_400_; 
v_fst_398_ = lean_ctor_get(v_a_394_, 0);
lean_inc(v_fst_398_);
lean_dec(v_a_394_);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v_fst_398_);
v___x_400_ = v___x_396_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_fst_398_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
v___y_383_ = v___x_400_;
goto v___jp_382_;
}
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_411_; 
v_a_403_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_411_ == 0)
{
v___x_405_ = v___x_381_;
v_isShared_406_ = v_isSharedCheck_411_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_381_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_411_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = lean_task_map(v___x_378_, v_a_403_, v___x_379_, v___x_380_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v___x_407_);
v___x_409_ = v___x_405_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
v___jp_382_:
{
lean_object* v___x_384_; 
v___x_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_384_, 0, v___y_383_);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed(lean_object* v___f_412_, lean_object* v___f_413_, lean_object* v___f_414_, lean_object* v___y_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__5(v___f_412_, v___f_413_, v___f_414_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__7(lean_object* v_a_417_, lean_object* v___x_418_, lean_object* v_x_419_){
_start:
{
if (lean_obj_tag(v_x_419_) == 0)
{
lean_object* v___f_421_; lean_object* v___x_422_; uint8_t v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___f_421_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_421_, 0, v_x_419_);
v___x_422_ = lean_unsigned_to_nat(0u);
v___x_423_ = 0;
v___x_424_ = l_Std_CancellationContext_cancel(v_a_417_, v___x_418_);
v___x_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
v___x_427_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_422_, v___x_423_, v___x_426_, v___f_421_);
return v___x_427_;
}
else
{
lean_object* v___x_428_; 
lean_dec(v___x_418_);
lean_dec_ref(v_a_417_);
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v_x_419_);
return v___x_428_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__7___boxed(lean_object* v_a_429_, lean_object* v___x_430_, lean_object* v_x_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__7(v_a_429_, v___x_430_, v_x_431_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__6(lean_object* v_y_434_, lean_object* v_a_435_, lean_object* v___f_436_){
_start:
{
lean_object* v___x_438_; uint8_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_438_ = lean_unsigned_to_nat(0u);
v___x_439_ = 0;
v___x_440_ = lean_apply_2(v_y_434_, v_a_435_, lean_box(0));
v___x_441_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_438_, v___x_439_, v___x_440_, v___f_436_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__6___boxed(lean_object* v_y_442_, lean_object* v_a_443_, lean_object* v___f_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__6(v_y_442_, v_a_443_, v___f_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__10(lean_object* v_a_447_, lean_object* v_x_448_){
_start:
{
if (lean_obj_tag(v_x_448_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_458_; 
lean_dec(v_a_447_);
v_a_450_ = lean_ctor_get(v_x_448_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_458_ == 0)
{
v___x_452_ = v_x_448_;
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v_x_448_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_457_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
lean_object* v___x_456_; 
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
return v___x_456_;
}
}
}
else
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_468_; 
v_a_459_ = lean_ctor_get(v_x_448_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_468_ == 0)
{
v___x_461_ = v_x_448_;
v_isShared_462_ = v_isSharedCheck_468_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v_x_448_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_468_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v_a_447_);
lean_ctor_set(v___x_463_, 1, v_a_459_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 0, v___x_463_);
v___x_465_ = v___x_461_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v___x_463_);
v___x_465_ = v_reuseFailAlloc_467_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; 
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__10___boxed(lean_object* v_a_469_, lean_object* v_x_470_, lean_object* v___y_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__10(v_a_469_, v_x_470_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__8(lean_object* v_a_473_, lean_object* v_x_474_){
_start:
{
if (lean_obj_tag(v_x_474_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_484_; 
lean_dec_ref(v_a_473_);
v_a_476_ = lean_ctor_get(v_x_474_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v_x_474_);
if (v_isSharedCheck_484_ == 0)
{
v___x_478_ = v_x_474_;
v_isShared_479_ = v_isSharedCheck_484_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v_x_474_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_484_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_483_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
lean_object* v___x_482_; 
v___x_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
return v___x_482_;
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___f_486_; lean_object* v___x_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v_a_485_ = lean_ctor_get(v_x_474_, 0);
lean_inc(v_a_485_);
lean_dec_ref_known(v_x_474_, 1);
v___f_486_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__10___boxed), 3, 1);
lean_closure_set(v___f_486_, 0, v_a_485_);
v___x_487_ = lean_unsigned_to_nat(0u);
v___x_488_ = 0;
v___x_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_489_, 0, v_a_473_);
v___x_490_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_487_, v___x_488_, v___x_489_, v___f_486_);
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__8___boxed(lean_object* v_a_491_, lean_object* v_x_492_, lean_object* v___y_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__8(v_a_491_, v_x_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__9(lean_object* v_a_495_, lean_object* v_x_496_){
_start:
{
if (lean_obj_tag(v_x_496_) == 0)
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_506_; 
lean_dec_ref(v_a_495_);
v_a_498_ = lean_ctor_get(v_x_496_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v_x_496_);
if (v_isSharedCheck_506_ == 0)
{
v___x_500_ = v_x_496_;
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v_x_496_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_503_; 
if (v_isShared_501_ == 0)
{
v___x_503_ = v___x_500_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_498_);
v___x_503_ = v_reuseFailAlloc_505_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
lean_object* v___x_504_; 
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
}
}
else
{
lean_object* v_a_507_; lean_object* v___f_508_; lean_object* v___x_509_; uint8_t v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v_a_507_ = lean_ctor_get(v_x_496_, 0);
lean_inc(v_a_507_);
lean_dec_ref_known(v_x_496_, 1);
v___f_508_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_508_, 0, v_a_507_);
v___x_509_ = lean_unsigned_to_nat(0u);
v___x_510_ = 0;
v___x_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_511_, 0, v_a_495_);
v___x_512_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_509_, v___x_510_, v___x_511_, v___f_508_);
return v___x_512_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__9___boxed(lean_object* v_a_513_, lean_object* v_x_514_, lean_object* v___y_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__9(v_a_513_, v_x_514_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__11(lean_object* v___f_517_, lean_object* v_prio_518_, lean_object* v___f_519_, lean_object* v_x_520_){
_start:
{
if (lean_obj_tag(v_x_520_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_530_; 
lean_dec_ref(v___f_519_);
lean_dec(v_prio_518_);
lean_dec_ref(v___f_517_);
v_a_522_ = lean_ctor_get(v_x_520_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v_x_520_);
if (v_isSharedCheck_530_ == 0)
{
v___x_524_ = v_x_520_;
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v_x_520_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_522_);
v___x_527_ = v_reuseFailAlloc_529_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_528_; 
v___x_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
return v___x_528_;
}
}
}
else
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_547_; 
v_a_531_ = lean_ctor_get(v_x_520_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v_x_520_);
if (v_isSharedCheck_547_ == 0)
{
v___x_533_ = v_x_520_;
v_isShared_534_ = v_isSharedCheck_547_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v_x_520_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_547_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___f_535_; lean_object* v___x_536_; uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; uint8_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___f_535_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__9___boxed), 3, 1);
lean_closure_set(v___f_535_, 0, v_a_531_);
v___x_536_ = lean_unsigned_to_nat(0u);
v___x_537_ = 0;
v___x_538_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_538_, 0, lean_box(0));
lean_closure_set(v___x_538_, 1, v___f_517_);
v___x_539_ = lean_io_as_task(v___x_538_, v_prio_518_);
v___x_540_ = 1;
v___x_541_ = lean_task_bind(v___x_539_, v___f_519_, v___x_536_, v___x_540_);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v___x_541_);
v___x_543_ = v___x_533_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_546_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
v___x_545_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_536_, v___x_537_, v___x_544_, v___f_535_);
return v___x_545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__11___boxed(lean_object* v___f_548_, lean_object* v_prio_549_, lean_object* v___f_550_, lean_object* v_x_551_, lean_object* v___y_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__11(v___f_548_, v_prio_549_, v___f_550_, v_x_551_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__12(lean_object* v_x_554_, lean_object* v_x_555_){
_start:
{
if (lean_obj_tag(v_x_555_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_565_; 
lean_dec_ref(v_x_554_);
v_a_557_ = lean_ctor_get(v_x_555_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v_x_555_);
if (v_isSharedCheck_565_ == 0)
{
v___x_559_ = v_x_555_;
v_isShared_560_ = v_isSharedCheck_565_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v_x_555_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_565_;
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
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_564_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
lean_object* v___x_563_; 
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
return v___x_563_;
}
}
}
else
{
lean_object* v___x_566_; 
lean_dec_ref_known(v_x_555_, 1);
v___x_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_566_, 0, v_x_554_);
return v___x_566_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__12___boxed(lean_object* v_x_567_, lean_object* v_x_568_, lean_object* v___y_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__12(v_x_567_, v_x_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__13(lean_object* v_a_571_, lean_object* v___x_572_, lean_object* v_x_573_){
_start:
{
if (lean_obj_tag(v_x_573_) == 0)
{
lean_object* v___x_575_; 
lean_dec(v___x_572_);
lean_dec_ref(v_a_571_);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v_x_573_);
return v___x_575_;
}
else
{
lean_object* v___f_576_; lean_object* v___x_577_; uint8_t v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___f_576_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__12___boxed), 3, 1);
lean_closure_set(v___f_576_, 0, v_x_573_);
v___x_577_ = lean_unsigned_to_nat(0u);
v___x_578_ = 0;
v___x_579_ = l_Std_CancellationContext_cancel(v_a_571_, v___x_572_);
v___x_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
v___x_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
v___x_582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_577_, v___x_578_, v___x_581_, v___f_576_);
return v___x_582_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__13___boxed(lean_object* v_a_583_, lean_object* v___x_584_, lean_object* v_x_585_, lean_object* v___y_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__13(v_a_583_, v___x_584_, v_x_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__14(lean_object* v_a_588_, lean_object* v___f_589_, lean_object* v___f_590_, lean_object* v_a_591_, lean_object* v_y_592_, lean_object* v___f_593_, lean_object* v_prio_594_, lean_object* v___f_595_, lean_object* v___f_596_, lean_object* v_x_597_){
_start:
{
if (lean_obj_tag(v_x_597_) == 0)
{
lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_607_; 
lean_dec_ref(v___f_596_);
lean_dec_ref(v___f_595_);
lean_dec(v_prio_594_);
lean_dec(v___f_593_);
lean_dec_ref(v_y_592_);
lean_dec_ref(v_a_591_);
lean_dec_ref(v___f_590_);
lean_dec(v___f_589_);
lean_dec_ref(v_a_588_);
v_a_599_ = lean_ctor_get(v_x_597_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v_x_597_);
if (v_isSharedCheck_607_ == 0)
{
v___x_601_ = v_x_597_;
v_isShared_602_ = v_isSharedCheck_607_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v_x_597_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_607_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_604_; 
if (v_isShared_602_ == 0)
{
v___x_604_ = v___x_601_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_599_);
v___x_604_ = v_reuseFailAlloc_606_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_605_; 
v___x_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
return v___x_605_;
}
}
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_633_; 
v_a_608_ = lean_ctor_get(v_x_597_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v_x_597_);
if (v_isSharedCheck_633_ == 0)
{
v___x_610_ = v_x_597_;
v_isShared_611_ = v_isSharedCheck_633_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v_x_597_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_633_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_612_; lean_object* v___f_613_; lean_object* v___f_614_; lean_object* v___f_615_; lean_object* v___f_616_; lean_object* v___f_617_; lean_object* v___f_618_; lean_object* v___f_619_; lean_object* v___f_620_; lean_object* v___x_621_; uint8_t v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; uint8_t v___x_625_; lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_612_ = lean_box(2);
v___f_613_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_613_, 0, v_a_588_);
lean_closure_set(v___f_613_, 1, v___x_612_);
v___f_614_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_614_, 0, v___f_589_);
lean_closure_set(v___f_614_, 1, v___f_590_);
lean_closure_set(v___f_614_, 2, v___f_613_);
lean_inc_ref(v_a_591_);
v___f_615_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_615_, 0, v_a_591_);
lean_closure_set(v___f_615_, 1, v___x_612_);
lean_inc(v_a_608_);
v___f_616_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__6___boxed), 4, 3);
lean_closure_set(v___f_616_, 0, v_y_592_);
lean_closure_set(v___f_616_, 1, v_a_608_);
lean_closure_set(v___f_616_, 2, v___f_615_);
v___f_617_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_617_, 0, v_a_608_);
lean_closure_set(v___f_617_, 1, v___x_612_);
v___f_618_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_618_, 0, v___f_593_);
lean_closure_set(v___f_618_, 1, v___f_616_);
lean_closure_set(v___f_618_, 2, v___f_617_);
lean_inc(v_prio_594_);
v___f_619_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_619_, 0, v___f_618_);
lean_closure_set(v___f_619_, 1, v_prio_594_);
lean_closure_set(v___f_619_, 2, v___f_595_);
v___f_620_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__13___boxed), 4, 2);
lean_closure_set(v___f_620_, 0, v_a_591_);
lean_closure_set(v___f_620_, 1, v___x_612_);
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = 0;
v___x_623_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_623_, 0, lean_box(0));
lean_closure_set(v___x_623_, 1, v___f_614_);
v___x_624_ = lean_io_as_task(v___x_623_, v_prio_594_);
v___x_625_ = 1;
v___x_626_ = lean_task_bind(v___x_624_, v___f_596_, v___x_621_, v___x_625_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_626_);
v___x_628_ = v___x_610_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_626_);
v___x_628_ = v_reuseFailAlloc_632_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
v___x_630_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_621_, v___x_622_, v___x_629_, v___f_619_);
v___x_631_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_621_, v___x_622_, v___x_630_, v___f_620_);
return v___x_631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__14___boxed(lean_object* v_a_634_, lean_object* v___f_635_, lean_object* v___f_636_, lean_object* v_a_637_, lean_object* v_y_638_, lean_object* v___f_639_, lean_object* v_prio_640_, lean_object* v___f_641_, lean_object* v___f_642_, lean_object* v_x_643_, lean_object* v___y_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__14(v_a_634_, v___f_635_, v___f_636_, v_a_637_, v_y_638_, v___f_639_, v_prio_640_, v___f_641_, v___f_642_, v_x_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__15(lean_object* v_x_646_, lean_object* v___f_647_, lean_object* v___f_648_, lean_object* v_a_649_, lean_object* v_y_650_, lean_object* v___f_651_, lean_object* v_prio_652_, lean_object* v___f_653_, lean_object* v___f_654_, lean_object* v_x_655_){
_start:
{
if (lean_obj_tag(v_x_655_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_665_; 
lean_dec_ref(v___f_654_);
lean_dec_ref(v___f_653_);
lean_dec(v_prio_652_);
lean_dec(v___f_651_);
lean_dec_ref(v_y_650_);
lean_dec_ref(v_a_649_);
lean_dec(v___f_648_);
lean_dec_ref(v___f_647_);
lean_dec_ref(v_x_646_);
v_a_657_ = lean_ctor_get(v_x_655_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v_x_655_);
if (v_isSharedCheck_665_ == 0)
{
v___x_659_ = v_x_655_;
v_isShared_660_ = v_isSharedCheck_665_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v_x_655_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_665_;
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
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_664_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
lean_object* v___x_663_; 
v___x_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
return v___x_663_;
}
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_680_; 
v_a_666_ = lean_ctor_get(v_x_655_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v_x_655_);
if (v_isSharedCheck_680_ == 0)
{
v___x_668_ = v_x_655_;
v_isShared_669_ = v_isSharedCheck_680_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v_x_655_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_680_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___f_670_; lean_object* v___f_671_; lean_object* v___x_672_; uint8_t v___x_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
lean_inc(v_a_666_);
v___f_670_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_670_, 0, v_x_646_);
lean_closure_set(v___f_670_, 1, v_a_666_);
lean_closure_set(v___f_670_, 2, v___f_647_);
lean_inc_ref(v_a_649_);
v___f_671_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__14___boxed), 11, 9);
lean_closure_set(v___f_671_, 0, v_a_666_);
lean_closure_set(v___f_671_, 1, v___f_648_);
lean_closure_set(v___f_671_, 2, v___f_670_);
lean_closure_set(v___f_671_, 3, v_a_649_);
lean_closure_set(v___f_671_, 4, v_y_650_);
lean_closure_set(v___f_671_, 5, v___f_651_);
lean_closure_set(v___f_671_, 6, v_prio_652_);
lean_closure_set(v___f_671_, 7, v___f_653_);
lean_closure_set(v___f_671_, 8, v___f_654_);
v___x_672_ = lean_unsigned_to_nat(0u);
v___x_673_ = 0;
v___x_674_ = l_Std_CancellationContext_fork(v_a_649_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 0, v___x_674_);
v___x_676_ = v___x_668_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v___x_674_);
v___x_676_ = v_reuseFailAlloc_679_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
v___x_678_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_672_, v___x_673_, v___x_677_, v___f_671_);
return v___x_678_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__15___boxed(lean_object* v_x_681_, lean_object* v___f_682_, lean_object* v___f_683_, lean_object* v_a_684_, lean_object* v_y_685_, lean_object* v___f_686_, lean_object* v_prio_687_, lean_object* v___f_688_, lean_object* v___f_689_, lean_object* v_x_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__15(v_x_681_, v___f_682_, v___f_683_, v_a_684_, v_y_685_, v___f_686_, v_prio_687_, v___f_688_, v___f_689_, v_x_690_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__16(lean_object* v_x_693_, lean_object* v___f_694_, lean_object* v_y_695_, lean_object* v___f_696_, lean_object* v_prio_697_, lean_object* v___f_698_, lean_object* v___f_699_, lean_object* v_x_700_){
_start:
{
if (lean_obj_tag(v_x_700_) == 0)
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_710_; 
lean_dec_ref(v___f_699_);
lean_dec_ref(v___f_698_);
lean_dec(v_prio_697_);
lean_dec(v___f_696_);
lean_dec_ref(v_y_695_);
lean_dec(v___f_694_);
lean_dec_ref(v_x_693_);
v_a_702_ = lean_ctor_get(v_x_700_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v_x_700_);
if (v_isSharedCheck_710_ == 0)
{
v___x_704_ = v_x_700_;
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v_x_700_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_702_);
v___x_707_ = v_reuseFailAlloc_709_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; 
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
return v___x_708_;
}
}
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_725_; 
v_a_711_ = lean_ctor_get(v_x_700_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v_x_700_);
if (v_isSharedCheck_725_ == 0)
{
v___x_713_ = v_x_700_;
v_isShared_714_ = v_isSharedCheck_725_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v_x_700_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_725_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___f_715_; lean_object* v___f_716_; lean_object* v___x_717_; uint8_t v___x_718_; lean_object* v___x_719_; lean_object* v___x_721_; 
lean_inc_n(v_a_711_, 2);
v___f_715_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_715_, 0, v_a_711_);
v___f_716_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__15___boxed), 11, 9);
lean_closure_set(v___f_716_, 0, v_x_693_);
lean_closure_set(v___f_716_, 1, v___f_715_);
lean_closure_set(v___f_716_, 2, v___f_694_);
lean_closure_set(v___f_716_, 3, v_a_711_);
lean_closure_set(v___f_716_, 4, v_y_695_);
lean_closure_set(v___f_716_, 5, v___f_696_);
lean_closure_set(v___f_716_, 6, v_prio_697_);
lean_closure_set(v___f_716_, 7, v___f_698_);
lean_closure_set(v___f_716_, 8, v___f_699_);
v___x_717_ = lean_unsigned_to_nat(0u);
v___x_718_ = 0;
v___x_719_ = l_Std_CancellationContext_fork(v_a_711_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v___x_719_);
v___x_721_ = v___x_713_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_719_);
v___x_721_ = v_reuseFailAlloc_724_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
v___x_723_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_717_, v___x_718_, v___x_722_, v___f_716_);
return v___x_723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__16___boxed(lean_object* v_x_726_, lean_object* v___f_727_, lean_object* v_y_728_, lean_object* v___f_729_, lean_object* v_prio_730_, lean_object* v___f_731_, lean_object* v___f_732_, lean_object* v_x_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__16(v_x_726_, v___f_727_, v_y_728_, v___f_729_, v_prio_730_, v___f_731_, v___f_732_, v_x_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__17(lean_object* v___f_736_, lean_object* v_x_737_){
_start:
{
if (lean_obj_tag(v_x_737_) == 0)
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_747_; 
lean_dec_ref(v___f_736_);
v_a_739_ = lean_ctor_get(v_x_737_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v_x_737_);
if (v_isSharedCheck_747_ == 0)
{
v___x_741_ = v_x_737_;
v_isShared_742_ = v_isSharedCheck_747_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v_x_737_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_747_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_746_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_745_; 
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
return v___x_745_;
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_760_; 
v_a_748_ = lean_ctor_get(v_x_737_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v_x_737_);
if (v_isSharedCheck_760_ == 0)
{
v___x_750_ = v_x_737_;
v_isShared_751_ = v_isSharedCheck_760_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v_x_737_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_760_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_752_; uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_756_; 
v___x_752_ = lean_unsigned_to_nat(0u);
v___x_753_ = 0;
v___x_754_ = l_Std_CancellationContext_fork(v_a_748_);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v___x_754_);
v___x_756_ = v___x_750_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v___x_754_);
v___x_756_ = v_reuseFailAlloc_759_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
v___x_758_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_752_, v___x_753_, v___x_757_, v___f_736_);
return v___x_758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__17___boxed(lean_object* v___f_761_, lean_object* v_x_762_, lean_object* v___y_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__17(v___f_761_, v_x_762_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg(lean_object* v_x_767_, lean_object* v_y_768_, lean_object* v_prio_769_, lean_object* v_a_770_){
_start:
{
lean_object* v___f_772_; lean_object* v___f_773_; lean_object* v___f_774_; lean_object* v___f_775_; lean_object* v___x_776_; uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___f_772_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_773_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_774_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__16___boxed), 9, 7);
lean_closure_set(v___f_774_, 0, v_x_767_);
lean_closure_set(v___f_774_, 1, v___f_773_);
lean_closure_set(v___f_774_, 2, v_y_768_);
lean_closure_set(v___f_774_, 3, v___f_773_);
lean_closure_set(v___f_774_, 4, v_prio_769_);
lean_closure_set(v___f_774_, 5, v___f_772_);
lean_closure_set(v___f_774_, 6, v___f_772_);
v___f_775_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__17___boxed), 3, 1);
lean_closure_set(v___f_775_, 0, v___f_774_);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = 0;
lean_inc_ref(v_a_770_);
v___x_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_778_, 0, v_a_770_);
v___x_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
v___x_780_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_776_, v___x_777_, v___x_779_, v___f_775_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___boxed(lean_object* v_x_781_, lean_object* v_y_782_, lean_object* v_prio_783_, lean_object* v_a_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Std_Async_ContextAsync_concurrently___redArg(v_x_781_, v_y_782_, v_prio_783_, v_a_784_);
lean_dec_ref(v_a_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently(lean_object* v_00_u03b1_787_, lean_object* v_00_u03b2_788_, lean_object* v_x_789_, lean_object* v_y_790_, lean_object* v_prio_791_, lean_object* v_a_792_){
_start:
{
lean_object* v___f_794_; lean_object* v___f_795_; lean_object* v___f_796_; lean_object* v___f_797_; lean_object* v___x_798_; uint8_t v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___f_794_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_795_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_796_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__16___boxed), 9, 7);
lean_closure_set(v___f_796_, 0, v_x_789_);
lean_closure_set(v___f_796_, 1, v___f_795_);
lean_closure_set(v___f_796_, 2, v_y_790_);
lean_closure_set(v___f_796_, 3, v___f_795_);
lean_closure_set(v___f_796_, 4, v_prio_791_);
lean_closure_set(v___f_796_, 5, v___f_794_);
lean_closure_set(v___f_796_, 6, v___f_794_);
v___f_797_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__17___boxed), 3, 1);
lean_closure_set(v___f_797_, 0, v___f_796_);
v___x_798_ = lean_unsigned_to_nat(0u);
v___x_799_ = 0;
lean_inc_ref(v_a_792_);
v___x_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_800_, 0, v_a_792_);
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
v___x_802_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_798_, v___x_799_, v___x_801_, v___f_797_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___boxed(lean_object* v_00_u03b1_803_, lean_object* v_00_u03b2_804_, lean_object* v_x_805_, lean_object* v_y_806_, lean_object* v_prio_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Std_Async_ContextAsync_concurrently(v_00_u03b1_803_, v_00_u03b2_804_, v_x_805_, v_y_806_, v_prio_807_, v_a_808_);
lean_dec_ref(v_a_808_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0(lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_814_, 0, v___y_811_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0(v___y_815_, v___y_816_);
lean_dec_ref(v___y_816_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3(lean_object* v___x_819_, lean_object* v___f_820_, lean_object* v_a_821_, lean_object* v_x_822_){
_start:
{
if (lean_obj_tag(v_x_822_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_832_; 
lean_dec_ref(v___f_820_);
lean_dec_ref(v___x_819_);
v_a_824_ = lean_ctor_get(v_x_822_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v_x_822_);
if (v_isSharedCheck_832_ == 0)
{
v___x_826_ = v_x_822_;
v_isShared_827_ = v_isSharedCheck_832_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v_x_822_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_832_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_831_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v___x_830_; 
v___x_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
return v___x_830_;
}
}
}
else
{
lean_object* v_a_833_; size_t v_sz_834_; size_t v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_4355__overap_838_; lean_object* v___x_839_; 
v_a_833_ = lean_ctor_get(v_x_822_, 0);
lean_inc(v_a_833_);
lean_dec_ref_known(v_x_822_, 1);
v_sz_834_ = lean_array_size(v_a_833_);
v___x_835_ = ((size_t)0ULL);
v___x_836_ = l_unsafeCast___redArg(v_a_833_);
lean_dec(v_a_833_);
v___x_837_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_819_, v___f_820_, v_sz_834_, v___x_835_, v___x_836_);
v___x_4355__overap_838_ = l_unsafeCast___redArg(v___x_837_);
lean_dec(v___x_837_);
lean_inc_ref(v_a_821_);
v___x_839_ = lean_apply_2(v___x_4355__overap_838_, v_a_821_, lean_box(0));
return v___x_839_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3___boxed(lean_object* v___x_840_, lean_object* v___f_841_, lean_object* v_a_842_, lean_object* v_x_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3(v___x_840_, v___f_841_, v_a_842_, v_x_843_);
lean_dec_ref(v_a_842_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4(lean_object* v_ctxAsync_846_, lean_object* v_a_847_, lean_object* v___f_848_){
_start:
{
lean_object* v___x_850_; uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_850_ = lean_unsigned_to_nat(0u);
v___x_851_ = 0;
v___x_852_ = lean_apply_2(v_ctxAsync_846_, v_a_847_, lean_box(0));
v___x_853_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_850_, v___x_851_, v___x_852_, v___f_848_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4___boxed(lean_object* v_ctxAsync_854_, lean_object* v_a_855_, lean_object* v___f_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4(v_ctxAsync_854_, v_a_855_, v___f_856_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1(lean_object* v_a_859_, lean_object* v___x_860_, lean_object* v_a_x3f_861_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = l_Std_CancellationContext_cancel(v_a_859_, v___x_860_);
v___x_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
v___x_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_a_866_, lean_object* v___x_867_, lean_object* v_a_x3f_868_, lean_object* v___y_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1(v_a_866_, v___x_867_, v_a_x3f_868_);
lean_dec(v_a_x3f_868_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5(lean_object* v_ctxAsync_871_, lean_object* v___f_872_, lean_object* v___f_873_, lean_object* v_prio_874_, lean_object* v___f_875_, lean_object* v_x_876_){
_start:
{
if (lean_obj_tag(v_x_876_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_886_; 
lean_dec_ref(v___f_875_);
lean_dec(v_prio_874_);
lean_dec(v___f_873_);
lean_dec_ref(v___f_872_);
lean_dec_ref(v_ctxAsync_871_);
v_a_878_ = lean_ctor_get(v_x_876_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v_x_876_);
if (v_isSharedCheck_886_ == 0)
{
v___x_880_ = v_x_876_;
v_isShared_881_ = v_isSharedCheck_886_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v_x_876_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_886_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_885_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_object* v___x_884_; 
v___x_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
return v___x_884_;
}
}
}
else
{
lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_904_; 
v_a_887_ = lean_ctor_get(v_x_876_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v_x_876_);
if (v_isSharedCheck_904_ == 0)
{
v___x_889_ = v_x_876_;
v_isShared_890_ = v_isSharedCheck_904_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v_x_876_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_904_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___f_891_; lean_object* v___x_892_; lean_object* v___f_893_; lean_object* v___f_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; uint8_t v___x_898_; lean_object* v___x_899_; lean_object* v___x_901_; 
lean_inc(v_a_887_);
v___f_891_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_891_, 0, v_ctxAsync_871_);
lean_closure_set(v___f_891_, 1, v_a_887_);
lean_closure_set(v___f_891_, 2, v___f_872_);
v___x_892_ = lean_box(2);
v___f_893_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_893_, 0, v_a_887_);
lean_closure_set(v___f_893_, 1, v___x_892_);
v___f_894_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_894_, 0, v___f_873_);
lean_closure_set(v___f_894_, 1, v___f_891_);
lean_closure_set(v___f_894_, 2, v___f_893_);
v___x_895_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_895_, 0, lean_box(0));
lean_closure_set(v___x_895_, 1, v___f_894_);
v___x_896_ = lean_io_as_task(v___x_895_, v_prio_874_);
v___x_897_ = lean_unsigned_to_nat(0u);
v___x_898_ = 1;
v___x_899_ = lean_task_bind(v___x_896_, v___f_875_, v___x_897_, v___x_898_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v___x_899_);
v___x_901_ = v___x_889_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v___x_899_);
v___x_901_ = v_reuseFailAlloc_903_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
lean_object* v___x_902_; 
v___x_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
return v___x_902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5___boxed(lean_object* v_ctxAsync_905_, lean_object* v___f_906_, lean_object* v___f_907_, lean_object* v_prio_908_, lean_object* v___f_909_, lean_object* v_x_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5(v_ctxAsync_905_, v___f_906_, v___f_907_, v_prio_908_, v___f_909_, v_x_910_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2(lean_object* v___f_913_, lean_object* v___f_914_, lean_object* v_prio_915_, lean_object* v___f_916_, lean_object* v_a_917_, lean_object* v_ctxAsync_918_, lean_object* v___y_919_){
_start:
{
lean_object* v___f_921_; lean_object* v___x_922_; uint8_t v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v___f_921_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5___boxed), 7, 5);
lean_closure_set(v___f_921_, 0, v_ctxAsync_918_);
lean_closure_set(v___f_921_, 1, v___f_913_);
lean_closure_set(v___f_921_, 2, v___f_914_);
lean_closure_set(v___f_921_, 3, v_prio_915_);
lean_closure_set(v___f_921_, 4, v___f_916_);
v___x_922_ = lean_unsigned_to_nat(0u);
v___x_923_ = 0;
v___x_924_ = l_Std_CancellationContext_fork(v_a_917_);
v___x_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
v___x_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
v___x_927_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_922_, v___x_923_, v___x_926_, v___f_921_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___f_928_, lean_object* v___f_929_, lean_object* v_prio_930_, lean_object* v___f_931_, lean_object* v_a_932_, lean_object* v_ctxAsync_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2(v___f_928_, v___f_929_, v_prio_930_, v___f_931_, v_a_932_, v_ctxAsync_933_, v___y_934_);
lean_dec_ref(v___y_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6(lean_object* v___f_937_, lean_object* v_prio_938_, lean_object* v___f_939_, lean_object* v_xs_940_, lean_object* v___x_941_, lean_object* v_a_942_, lean_object* v___f_943_, lean_object* v_x_944_){
_start:
{
if (lean_obj_tag(v_x_944_) == 0)
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_954_; 
lean_dec_ref(v___f_943_);
lean_dec_ref(v___x_941_);
lean_dec_ref(v___f_939_);
lean_dec(v_prio_938_);
lean_dec(v___f_937_);
v_a_946_ = lean_ctor_get(v_x_944_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v_x_944_);
if (v_isSharedCheck_954_ == 0)
{
v___x_948_ = v_x_944_;
v_isShared_949_ = v_isSharedCheck_954_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v_x_944_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_954_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_953_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_952_; 
v___x_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_952_, 0, v___x_951_);
return v___x_952_;
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___f_956_; lean_object* v___f_957_; lean_object* v___x_958_; uint8_t v___x_959_; size_t v_sz_960_; size_t v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_4481__overap_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_a_955_ = lean_ctor_get(v_x_944_, 0);
lean_inc_n(v_a_955_, 2);
lean_dec_ref_known(v_x_944_, 1);
v___f_956_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_956_, 0, v_a_955_);
v___f_957_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2___boxed), 8, 5);
lean_closure_set(v___f_957_, 0, v___f_956_);
lean_closure_set(v___f_957_, 1, v___f_937_);
lean_closure_set(v___f_957_, 2, v_prio_938_);
lean_closure_set(v___f_957_, 3, v___f_939_);
lean_closure_set(v___f_957_, 4, v_a_955_);
v___x_958_ = lean_unsigned_to_nat(0u);
v___x_959_ = 0;
v_sz_960_ = lean_array_size(v_xs_940_);
v___x_961_ = ((size_t)0ULL);
v___x_962_ = l_unsafeCast___redArg(v_xs_940_);
v___x_963_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_941_, v___f_957_, v_sz_960_, v___x_961_, v___x_962_);
v___x_4481__overap_964_ = l_unsafeCast___redArg(v___x_963_);
lean_dec(v___x_963_);
lean_inc_ref(v_a_942_);
v___x_965_ = lean_apply_2(v___x_4481__overap_964_, v_a_942_, lean_box(0));
v___x_966_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_958_, v___x_959_, v___x_965_, v___f_943_);
return v___x_966_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6___boxed(lean_object* v___f_967_, lean_object* v_prio_968_, lean_object* v___f_969_, lean_object* v_xs_970_, lean_object* v___x_971_, lean_object* v_a_972_, lean_object* v___f_973_, lean_object* v_x_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6(v___f_967_, v_prio_968_, v___f_969_, v_xs_970_, v___x_971_, v_a_972_, v___f_973_, v_x_974_);
lean_dec_ref(v_a_972_);
lean_dec_ref(v_xs_970_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7(lean_object* v___f_977_, lean_object* v_x_978_){
_start:
{
if (lean_obj_tag(v_x_978_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_988_; 
lean_dec_ref(v___f_977_);
v_a_980_ = lean_ctor_get(v_x_978_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v_x_978_);
if (v_isSharedCheck_988_ == 0)
{
v___x_982_ = v_x_978_;
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v_x_978_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_987_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_986_; 
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
return v___x_986_;
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_1001_; 
v_a_989_ = lean_ctor_get(v_x_978_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v_x_978_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_991_ = v_x_978_;
v_isShared_992_ = v_isSharedCheck_1001_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v_x_978_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_1001_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_993_; uint8_t v___x_994_; lean_object* v___x_995_; lean_object* v___x_997_; 
v___x_993_ = lean_unsigned_to_nat(0u);
v___x_994_ = 0;
v___x_995_ = l_Std_CancellationContext_fork(v_a_989_);
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 0, v___x_995_);
v___x_997_ = v___x_991_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_995_);
v___x_997_ = v_reuseFailAlloc_1000_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
v___x_999_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_993_, v___x_994_, v___x_998_, v___f_977_);
return v___x_999_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7___boxed(lean_object* v___f_1002_, lean_object* v_x_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7(v___f_1002_, v_x_1003_);
return v_res_1005_;
}
}
static lean_object* _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_1007_;
}
}
static lean_object* _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2(void){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = lean_obj_once(&l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1);
v___x_1009_ = l_ReaderT_instMonad___redArg(v___x_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg(lean_object* v_xs_1010_, lean_object* v_prio_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v___f_1014_; lean_object* v___f_1015_; lean_object* v___f_1016_; lean_object* v___x_1017_; lean_object* v___f_1018_; lean_object* v___f_1019_; lean_object* v___f_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___f_1014_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__0));
v___f_1015_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_1016_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___x_1017_ = lean_obj_once(&l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2, &l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2_once, _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2);
lean_inc_ref_n(v_a_1012_, 3);
v___f_1018_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1018_, 0, v___x_1017_);
lean_closure_set(v___f_1018_, 1, v___f_1014_);
lean_closure_set(v___f_1018_, 2, v_a_1012_);
v___f_1019_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1019_, 0, v___f_1016_);
lean_closure_set(v___f_1019_, 1, v_prio_1011_);
lean_closure_set(v___f_1019_, 2, v___f_1015_);
lean_closure_set(v___f_1019_, 3, v_xs_1010_);
lean_closure_set(v___f_1019_, 4, v___x_1017_);
lean_closure_set(v___f_1019_, 5, v_a_1012_);
lean_closure_set(v___f_1019_, 6, v___f_1018_);
v___f_1020_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7___boxed), 3, 1);
lean_closure_set(v___f_1020_, 0, v___f_1019_);
v___x_1021_ = lean_unsigned_to_nat(0u);
v___x_1022_ = 0;
v___x_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1023_, 0, v_a_1012_);
v___x_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
v___x_1025_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1021_, v___x_1022_, v___x_1024_, v___f_1020_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_1026_, lean_object* v_prio_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg(v_xs_1026_, v_prio_1027_, v_a_1028_);
lean_dec_ref(v_a_1028_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll(lean_object* v_00_u03b1_1031_, lean_object* v_xs_1032_, lean_object* v_prio_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v___f_1036_; lean_object* v___f_1037_; lean_object* v___f_1038_; lean_object* v___x_1039_; lean_object* v___f_1040_; lean_object* v___f_1041_; lean_object* v___f_1042_; lean_object* v___x_1043_; uint8_t v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___f_1036_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__0));
v___f_1037_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_1038_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___x_1039_ = lean_obj_once(&l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2, &l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2_once, _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2);
lean_inc_ref_n(v_a_1034_, 3);
v___f_1040_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1040_, 0, v___x_1039_);
lean_closure_set(v___f_1040_, 1, v___f_1036_);
lean_closure_set(v___f_1040_, 2, v_a_1034_);
v___f_1041_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1041_, 0, v___f_1038_);
lean_closure_set(v___f_1041_, 1, v_prio_1033_);
lean_closure_set(v___f_1041_, 2, v___f_1037_);
lean_closure_set(v___f_1041_, 3, v_xs_1032_);
lean_closure_set(v___f_1041_, 4, v___x_1039_);
lean_closure_set(v___f_1041_, 5, v_a_1034_);
lean_closure_set(v___f_1041_, 6, v___f_1040_);
v___f_1042_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7___boxed), 3, 1);
lean_closure_set(v___f_1042_, 0, v___f_1041_);
v___x_1043_ = lean_unsigned_to_nat(0u);
v___x_1044_ = 0;
v___x_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1045_, 0, v_a_1034_);
v___x_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
v___x_1047_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1043_, v___x_1044_, v___x_1046_, v___f_1042_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___boxed(lean_object* v_00_u03b1_1048_, lean_object* v_xs_1049_, lean_object* v_prio_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Std_Async_ContextAsync_concurrentlyAll(v_00_u03b1_1048_, v_xs_1049_, v_prio_1050_, v_a_1051_);
lean_dec_ref(v_a_1051_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__0(lean_object* v_a_1054_, lean_object* v_x_1055_){
_start:
{
if (lean_obj_tag(v_x_1055_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1065_; 
lean_dec_ref(v_a_1054_);
v_a_1057_ = lean_ctor_get(v_x_1055_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_x_1055_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1059_ = v_x_1055_;
v_isShared_1060_ = v_isSharedCheck_1065_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v_x_1055_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1065_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
lean_object* v___x_1063_; 
v___x_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
return v___x_1063_;
}
}
}
else
{
lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1075_; 
v_isSharedCheck_1075_ = !lean_is_exclusive(v_x_1055_);
if (v_isSharedCheck_1075_ == 0)
{
lean_object* v_unused_1076_; 
v_unused_1076_ = lean_ctor_get(v_x_1055_, 0);
lean_dec(v_unused_1076_);
v___x_1067_ = v_x_1055_;
v_isShared_1068_ = v_isSharedCheck_1075_;
goto v_resetjp_1066_;
}
else
{
lean_dec(v_x_1055_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1075_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1069_ = lean_box(2);
v___x_1070_ = l_Std_CancellationContext_cancel(v_a_1054_, v___x_1069_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1070_);
v___x_1072_ = v___x_1067_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v___x_1070_);
v___x_1072_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
lean_object* v___x_1073_; 
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
return v___x_1073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__0___boxed(lean_object* v_a_1077_, lean_object* v_x_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Std_Async_ContextAsync_background___redArg___lam__0(v_a_1077_, v_x_1078_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__1(lean_object* v_action_1081_, lean_object* v_a_1082_, lean_object* v___f_1083_){
_start:
{
lean_object* v___x_1085_; uint8_t v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1085_ = lean_unsigned_to_nat(0u);
v___x_1086_ = 0;
v___x_1087_ = lean_apply_2(v_action_1081_, v_a_1082_, lean_box(0));
v___x_1088_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1085_, v___x_1086_, v___x_1087_, v___f_1083_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__1___boxed(lean_object* v_action_1089_, lean_object* v_a_1090_, lean_object* v___f_1091_, lean_object* v___y_1092_){
_start:
{
lean_object* v_res_1093_; 
v_res_1093_ = l_Std_Async_ContextAsync_background___redArg___lam__1(v_action_1089_, v_a_1090_, v___f_1091_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2(lean_object* v_action_1098_, lean_object* v_prio_1099_, lean_object* v_x_1100_){
_start:
{
if (lean_obj_tag(v_x_1100_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1110_; 
lean_dec(v_prio_1099_);
lean_dec_ref(v_action_1098_);
v_a_1102_ = lean_ctor_get(v_x_1100_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_x_1100_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1104_ = v_x_1100_;
v_isShared_1105_ = v_isSharedCheck_1110_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v_x_1100_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1110_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1107_);
return v___x_1108_;
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___f_1112_; lean_object* v___f_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v_a_1111_ = lean_ctor_get(v_x_1100_, 0);
lean_inc_n(v_a_1111_, 2);
lean_dec_ref_known(v_x_1100_, 1);
v___f_1112_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1112_, 0, v_a_1111_);
v___f_1113_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1113_, 0, v_action_1098_);
lean_closure_set(v___f_1113_, 1, v_a_1111_);
lean_closure_set(v___f_1113_, 2, v___f_1112_);
v___x_1114_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1114_, 0, lean_box(0));
lean_closure_set(v___x_1114_, 1, v___f_1113_);
v___x_1115_ = lean_io_as_task(v___x_1114_, v_prio_1099_);
lean_dec_ref(v___x_1115_);
v___x_1116_ = ((lean_object*)(l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1));
return v___x_1116_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2___boxed(lean_object* v_action_1117_, lean_object* v_prio_1118_, lean_object* v_x_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_Std_Async_ContextAsync_background___redArg___lam__2(v_action_1117_, v_prio_1118_, v_x_1119_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__3(lean_object* v___f_1122_, lean_object* v_x_1123_){
_start:
{
if (lean_obj_tag(v_x_1123_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1133_; 
lean_dec_ref(v___f_1122_);
v_a_1125_ = lean_ctor_get(v_x_1123_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_x_1123_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1127_ = v_x_1123_;
v_isShared_1128_ = v_isSharedCheck_1133_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v_x_1123_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1133_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1125_);
v___x_1130_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
return v___x_1131_;
}
}
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1146_; 
v_a_1134_ = lean_ctor_get(v_x_1123_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v_x_1123_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1136_ = v_x_1123_;
v_isShared_1137_ = v_isSharedCheck_1146_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v_x_1123_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1146_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; uint8_t v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1142_; 
v___x_1138_ = lean_unsigned_to_nat(0u);
v___x_1139_ = 0;
v___x_1140_ = l_Std_CancellationContext_fork(v_a_1134_);
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 0, v___x_1140_);
v___x_1142_ = v___x_1136_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1140_);
v___x_1142_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
v___x_1144_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1138_, v___x_1139_, v___x_1143_, v___f_1122_);
return v___x_1144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__3___boxed(lean_object* v___f_1147_, lean_object* v_x_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Std_Async_ContextAsync_background___redArg___lam__3(v___f_1147_, v_x_1148_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg(lean_object* v_action_1151_, lean_object* v_prio_1152_, lean_object* v_a_1153_){
_start:
{
lean_object* v___f_1155_; lean_object* v___f_1156_; lean_object* v___x_1157_; uint8_t v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___f_1155_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1155_, 0, v_action_1151_);
lean_closure_set(v___f_1155_, 1, v_prio_1152_);
v___f_1156_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1156_, 0, v___f_1155_);
v___x_1157_ = lean_unsigned_to_nat(0u);
v___x_1158_ = 0;
lean_inc_ref(v_a_1153_);
v___x_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1159_, 0, v_a_1153_);
v___x_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
v___x_1161_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1157_, v___x_1158_, v___x_1160_, v___f_1156_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___boxed(lean_object* v_action_1162_, lean_object* v_prio_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Std_Async_ContextAsync_background___redArg(v_action_1162_, v_prio_1163_, v_a_1164_);
lean_dec_ref(v_a_1164_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background(lean_object* v_00_u03b1_1167_, lean_object* v_action_1168_, lean_object* v_prio_1169_, lean_object* v_a_1170_){
_start:
{
lean_object* v___f_1172_; lean_object* v___f_1173_; lean_object* v___x_1174_; uint8_t v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___f_1172_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1172_, 0, v_action_1168_);
lean_closure_set(v___f_1172_, 1, v_prio_1169_);
v___f_1173_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1173_, 0, v___f_1172_);
v___x_1174_ = lean_unsigned_to_nat(0u);
v___x_1175_ = 0;
lean_inc_ref(v_a_1170_);
v___x_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1176_, 0, v_a_1170_);
v___x_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
v___x_1178_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1174_, v___x_1175_, v___x_1177_, v___f_1173_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___boxed(lean_object* v_00_u03b1_1179_, lean_object* v_action_1180_, lean_object* v_prio_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Std_Async_ContextAsync_background(v_00_u03b1_1179_, v_action_1180_, v_prio_1181_, v_a_1182_);
lean_dec_ref(v_a_1182_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__0(lean_object* v_action_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_apply_2(v_action_1185_, v_a_1186_, lean_box(0));
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__0___boxed(lean_object* v_action_1189_, lean_object* v_a_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Std_Async_ContextAsync_disown___redArg___lam__0(v_action_1189_, v_a_1190_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__1(lean_object* v_action_1193_, lean_object* v_prio_1194_, lean_object* v_x_1195_){
_start:
{
if (lean_obj_tag(v_x_1195_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1205_; 
lean_dec(v_prio_1194_);
lean_dec_ref(v_action_1193_);
v_a_1197_ = lean_ctor_get(v_x_1195_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v_x_1195_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1199_ = v_x_1195_;
v_isShared_1200_ = v_isSharedCheck_1205_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v_x_1195_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1205_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1202_; 
if (v_isShared_1200_ == 0)
{
v___x_1202_ = v___x_1199_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1197_);
v___x_1202_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1203_; 
v___x_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
return v___x_1203_;
}
}
}
else
{
lean_object* v_a_1206_; lean_object* v___f_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v_a_1206_ = lean_ctor_get(v_x_1195_, 0);
lean_inc(v_a_1206_);
lean_dec_ref_known(v_x_1195_, 1);
v___f_1207_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_disown___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1207_, 0, v_action_1193_);
lean_closure_set(v___f_1207_, 1, v_a_1206_);
v___x_1208_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1208_, 0, lean_box(0));
lean_closure_set(v___x_1208_, 1, v___f_1207_);
v___x_1209_ = lean_io_as_task(v___x_1208_, v_prio_1194_);
lean_dec_ref(v___x_1209_);
v___x_1210_ = ((lean_object*)(l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1));
return v___x_1210_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__1___boxed(lean_object* v_action_1211_, lean_object* v_prio_1212_, lean_object* v_x_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Std_Async_ContextAsync_disown___redArg___lam__1(v_action_1211_, v_prio_1212_, v_x_1213_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg(lean_object* v_action_1216_, lean_object* v_prio_1217_){
_start:
{
lean_object* v___f_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___f_1219_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_disown___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1219_, 0, v_action_1216_);
lean_closure_set(v___f_1219_, 1, v_prio_1217_);
v___x_1220_ = lean_unsigned_to_nat(0u);
v___x_1221_ = 0;
v___x_1222_ = l_Std_CancellationContext_new();
v___x_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
v___x_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1223_);
v___x_1225_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1220_, v___x_1221_, v___x_1224_, v___f_1219_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___boxed(lean_object* v_action_1226_, lean_object* v_prio_1227_, lean_object* v_a_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l_Std_Async_ContextAsync_disown___redArg(v_action_1226_, v_prio_1227_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown(lean_object* v_00_u03b1_1230_, lean_object* v_action_1231_, lean_object* v_prio_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v___f_1235_; lean_object* v___x_1236_; uint8_t v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___f_1235_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_disown___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1235_, 0, v_action_1231_);
lean_closure_set(v___f_1235_, 1, v_prio_1232_);
v___x_1236_ = lean_unsigned_to_nat(0u);
v___x_1237_ = 0;
v___x_1238_ = l_Std_CancellationContext_new();
v___x_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
v___x_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
v___x_1241_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1236_, v___x_1237_, v___x_1240_, v___f_1235_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___boxed(lean_object* v_00_u03b1_1242_, lean_object* v_action_1243_, lean_object* v_prio_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l_Std_Async_ContextAsync_disown(v_00_u03b1_1242_, v_action_1243_, v_prio_1244_, v_a_1245_);
lean_dec_ref(v_a_1245_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__0(lean_object* v_a_1248_){
_start:
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1249_, 0, v_a_1248_);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__2(lean_object* v_a_1250_, lean_object* v_x_1251_){
_start:
{
if (lean_obj_tag(v_x_1251_) == 0)
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1261_; 
lean_dec_ref(v_a_1250_);
v_a_1253_ = lean_ctor_get(v_x_1251_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v_x_1251_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1255_ = v_x_1251_;
v_isShared_1256_ = v_isSharedCheck_1261_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v_x_1251_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1261_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
lean_object* v___x_1259_; 
v___x_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
return v___x_1259_;
}
}
}
else
{
lean_object* v___x_1262_; 
lean_dec_ref_known(v_x_1251_, 1);
v___x_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1262_, 0, v_a_1250_);
return v___x_1262_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__2___boxed(lean_object* v_a_1263_, lean_object* v_x_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__2(v_a_1263_, v_x_1264_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__1(lean_object* v_a_1267_, lean_object* v_x_1268_){
_start:
{
if (lean_obj_tag(v_x_1268_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1278_; 
lean_dec_ref(v_a_1267_);
v_a_1270_ = lean_ctor_get(v_x_1268_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v_x_1268_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1272_ = v_x_1268_;
v_isShared_1273_ = v_isSharedCheck_1278_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v_x_1268_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1278_;
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
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
return v___x_1276_;
}
}
}
else
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1293_; 
v_a_1279_ = lean_ctor_get(v_x_1268_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v_x_1268_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1281_ = v_x_1268_;
v_isShared_1282_ = v_isSharedCheck_1293_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v_x_1268_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1293_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___f_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; uint8_t v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1289_; 
v___f_1283_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1283_, 0, v_a_1279_);
v___x_1284_ = lean_box(2);
v___x_1285_ = lean_unsigned_to_nat(0u);
v___x_1286_ = 0;
v___x_1287_ = l_Std_CancellationContext_cancel(v_a_1267_, v___x_1284_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 0, v___x_1287_);
v___x_1289_ = v___x_1281_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1287_);
v___x_1289_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
v___x_1291_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1285_, v___x_1286_, v___x_1290_, v___f_1283_);
return v___x_1291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__1___boxed(lean_object* v_a_1294_, lean_object* v_x_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__1(v_a_1294_, v_x_1295_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__3(lean_object* v_a_1298_, lean_object* v_x_1299_){
_start:
{
if (lean_obj_tag(v_x_1299_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1309_; 
v_a_1301_ = lean_ctor_get(v_x_1299_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v_x_1299_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1303_ = v_x_1299_;
v_isShared_1304_ = v_isSharedCheck_1309_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v_x_1299_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1309_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
lean_object* v___x_1307_; 
v___x_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
return v___x_1307_;
}
}
}
else
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1310_ = lean_io_promise_resolve(v_x_1299_, v_a_1298_);
v___x_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
v___x_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
return v___x_1312_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__3___boxed(lean_object* v_a_1313_, lean_object* v_x_1314_, lean_object* v___y_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__3(v_a_1313_, v_x_1314_);
lean_dec(v_a_1313_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__4(lean_object* v_a_1317_, lean_object* v_x_1318_){
_start:
{
if (lean_obj_tag(v_x_1318_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1329_; 
v_a_1320_ = lean_ctor_get(v_x_1318_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v_x_1318_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1322_ = v_x_1318_;
v_isShared_1323_ = v_isSharedCheck_1329_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v_x_1318_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1329_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = lean_io_promise_resolve(v___x_1325_, v_a_1317_);
v___x_1327_ = ((lean_object*)(l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1));
return v___x_1327_;
}
}
}
else
{
lean_object* v___x_1330_; 
v___x_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_x_1318_);
return v___x_1330_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__4___boxed(lean_object* v_a_1331_, lean_object* v_x_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__4(v_a_1331_, v_x_1332_);
lean_dec(v_a_1331_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__5(lean_object* v_a_1335_, lean_object* v_x_1336_){
_start:
{
if (lean_obj_tag(v_x_1336_) == 0)
{
lean_object* v___x_1338_; 
lean_dec_ref(v_a_1335_);
v___x_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1338_, 0, v_x_1336_);
return v___x_1338_;
}
else
{
lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1348_; 
v_isSharedCheck_1348_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1348_ == 0)
{
lean_object* v_unused_1349_; 
v_unused_1349_ = lean_ctor_get(v_x_1336_, 0);
lean_dec(v_unused_1349_);
v___x_1340_ = v_x_1336_;
v_isShared_1341_ = v_isSharedCheck_1348_;
goto v_resetjp_1339_;
}
else
{
lean_dec(v_x_1336_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1348_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1345_; 
v___x_1342_ = lean_box(2);
v___x_1343_ = l_Std_CancellationContext_cancel(v_a_1335_, v___x_1342_);
if (v_isShared_1341_ == 0)
{
lean_ctor_set(v___x_1340_, 0, v___x_1343_);
v___x_1345_ = v___x_1340_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1343_);
v___x_1345_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
return v___x_1346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__5___boxed(lean_object* v_a_1350_, lean_object* v_x_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__5(v_a_1350_, v_x_1351_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__6(lean_object* v_a_1354_, lean_object* v___x_1355_, lean_object* v___f_1356_, lean_object* v___f_1357_, lean_object* v___f_1358_){
_start:
{
uint8_t v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1360_ = 0;
v___x_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1361_, 0, v_a_1354_);
lean_inc_n(v___x_1355_, 2);
v___x_1362_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1355_, v___x_1360_, v___x_1361_, v___f_1356_);
v___x_1363_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1355_, v___x_1360_, v___x_1362_, v___f_1357_);
v___x_1364_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1355_, v___x_1360_, v___x_1363_, v___f_1358_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__6___boxed(lean_object* v_a_1365_, lean_object* v___x_1366_, lean_object* v___f_1367_, lean_object* v___f_1368_, lean_object* v___f_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__6(v_a_1365_, v___x_1366_, v___f_1367_, v___f_1368_, v___f_1369_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__7(lean_object* v_a_1372_, lean_object* v___x_1373_, lean_object* v___f_1374_, lean_object* v___f_1375_, lean_object* v_x_1376_){
_start:
{
if (lean_obj_tag(v_x_1376_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1386_; 
lean_dec_ref(v___f_1375_);
lean_dec_ref(v___f_1374_);
lean_dec(v___x_1373_);
lean_dec_ref(v_a_1372_);
v_a_1378_ = lean_ctor_get(v_x_1376_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v_x_1376_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1380_ = v_x_1376_;
v_isShared_1381_ = v_isSharedCheck_1386_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v_x_1376_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1386_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1383_; 
if (v_isShared_1381_ == 0)
{
v___x_1383_ = v___x_1380_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_a_1378_);
v___x_1383_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1384_; 
v___x_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
return v___x_1384_;
}
}
}
else
{
lean_object* v_a_1387_; lean_object* v___f_1388_; lean_object* v___f_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v_a_1387_ = lean_ctor_get(v_x_1376_, 0);
lean_inc(v_a_1387_);
lean_dec_ref_known(v_x_1376_, 1);
v___f_1388_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1388_, 0, v_a_1387_);
lean_inc(v___x_1373_);
v___f_1389_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__6___boxed), 6, 5);
lean_closure_set(v___f_1389_, 0, v_a_1372_);
lean_closure_set(v___f_1389_, 1, v___x_1373_);
lean_closure_set(v___f_1389_, 2, v___f_1374_);
lean_closure_set(v___f_1389_, 3, v___f_1375_);
lean_closure_set(v___f_1389_, 4, v___f_1388_);
v___x_1390_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1390_, 0, lean_box(0));
lean_closure_set(v___x_1390_, 1, v___f_1389_);
v___x_1391_ = lean_io_as_task(v___x_1390_, v___x_1373_);
lean_dec_ref(v___x_1391_);
v___x_1392_ = ((lean_object*)(l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1));
return v___x_1392_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__7___boxed(lean_object* v_a_1393_, lean_object* v___x_1394_, lean_object* v___f_1395_, lean_object* v___f_1396_, lean_object* v_x_1397_, lean_object* v___y_1398_){
_start:
{
lean_object* v_res_1399_; 
v_res_1399_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__7(v_a_1393_, v___x_1394_, v___f_1395_, v___f_1396_, v_x_1397_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__8(lean_object* v___x_1400_, lean_object* v___f_1401_, lean_object* v_x_1402_){
_start:
{
if (lean_obj_tag(v_x_1402_) == 0)
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1412_; 
lean_dec_ref(v___f_1401_);
lean_dec(v___x_1400_);
v_a_1404_ = lean_ctor_get(v_x_1402_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v_x_1402_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1406_ = v_x_1402_;
v_isShared_1407_ = v_isSharedCheck_1412_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v_x_1402_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1412_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
lean_object* v___x_1410_; 
v___x_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
return v___x_1410_;
}
}
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1424_; 
v_a_1413_ = lean_ctor_get(v_x_1402_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v_x_1402_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1415_ = v_x_1402_;
v_isShared_1416_ = v_isSharedCheck_1424_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v_x_1402_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1424_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
uint8_t v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1417_ = 0;
v___x_1418_ = l_Std_CancellationContext_fork(v_a_1413_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 0, v___x_1418_);
v___x_1420_ = v___x_1415_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
v___x_1422_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1400_, v___x_1417_, v___x_1421_, v___f_1401_);
return v___x_1422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__8___boxed(lean_object* v___x_1425_, lean_object* v___f_1426_, lean_object* v_x_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__8(v___x_1425_, v___f_1426_, v_x_1427_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__9(lean_object* v___f_1430_, lean_object* v___f_1431_, lean_object* v___y_1432_, lean_object* v_x_1433_){
_start:
{
if (lean_obj_tag(v_x_1433_) == 0)
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1443_; 
lean_dec_ref(v___f_1431_);
lean_dec_ref(v___f_1430_);
v_a_1435_ = lean_ctor_get(v_x_1433_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_x_1433_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1437_ = v_x_1433_;
v_isShared_1438_ = v_isSharedCheck_1443_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v_x_1433_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1443_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
lean_object* v___x_1441_; 
v___x_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
return v___x_1441_;
}
}
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1457_; 
v_a_1444_ = lean_ctor_get(v_x_1433_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_x_1433_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1446_ = v_x_1433_;
v_isShared_1447_ = v_isSharedCheck_1457_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v_x_1433_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1457_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1448_; lean_object* v___f_1449_; lean_object* v___f_1450_; uint8_t v___x_1451_; lean_object* v___x_1453_; 
v___x_1448_ = lean_unsigned_to_nat(0u);
v___f_1449_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__7___boxed), 6, 4);
lean_closure_set(v___f_1449_, 0, v_a_1444_);
lean_closure_set(v___f_1449_, 1, v___x_1448_);
lean_closure_set(v___f_1449_, 2, v___f_1430_);
lean_closure_set(v___f_1449_, 3, v___f_1431_);
v___f_1450_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__8___boxed), 4, 2);
lean_closure_set(v___f_1450_, 0, v___x_1448_);
lean_closure_set(v___f_1450_, 1, v___f_1449_);
v___x_1451_ = 0;
lean_inc_ref(v___y_1432_);
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 0, v___y_1432_);
v___x_1453_ = v___x_1446_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___y_1432_);
v___x_1453_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
v___x_1455_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1448_, v___x_1451_, v___x_1454_, v___f_1450_);
return v___x_1455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__9___boxed(lean_object* v___f_1458_, lean_object* v___f_1459_, lean_object* v___y_1460_, lean_object* v_x_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__9(v___f_1458_, v___f_1459_, v___y_1460_, v_x_1461_);
lean_dec_ref(v___y_1460_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__10(lean_object* v_x_1464_, lean_object* v_a_1465_){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = lean_apply_2(v_x_1464_, v_a_1465_, lean_box(0));
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__10___boxed(lean_object* v_x_1468_, lean_object* v_a_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__10(v_x_1468_, v_a_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__11(lean_object* v_x_1472_, lean_object* v_prio_1473_, lean_object* v___f_1474_, lean_object* v___f_1475_, lean_object* v_x_1476_){
_start:
{
if (lean_obj_tag(v_x_1476_) == 0)
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v___f_1475_);
lean_dec_ref(v___f_1474_);
lean_dec(v_prio_1473_);
lean_dec_ref(v_x_1472_);
v_a_1478_ = lean_ctor_get(v_x_1476_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_x_1476_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1480_ = v_x_1476_;
v_isShared_1481_ = v_isSharedCheck_1486_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v_x_1476_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1486_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
return v___x_1484_;
}
}
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1503_; 
v_a_1487_ = lean_ctor_get(v_x_1476_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v_x_1476_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1489_ = v_x_1476_;
v_isShared_1490_ = v_isSharedCheck_1503_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v_x_1476_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1503_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___f_1491_; lean_object* v___x_1492_; uint8_t v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1499_; 
v___f_1491_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__10___boxed), 3, 2);
lean_closure_set(v___f_1491_, 0, v_x_1472_);
lean_closure_set(v___f_1491_, 1, v_a_1487_);
v___x_1492_ = lean_unsigned_to_nat(0u);
v___x_1493_ = 0;
v___x_1494_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1494_, 0, lean_box(0));
lean_closure_set(v___x_1494_, 1, v___f_1491_);
v___x_1495_ = lean_io_as_task(v___x_1494_, v_prio_1473_);
v___x_1496_ = 1;
v___x_1497_ = lean_task_bind(v___x_1495_, v___f_1474_, v___x_1492_, v___x_1496_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v___x_1497_);
v___x_1499_ = v___x_1489_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1497_);
v___x_1499_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
v___x_1501_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1492_, v___x_1493_, v___x_1500_, v___f_1475_);
return v___x_1501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__11___boxed(lean_object* v_x_1504_, lean_object* v_prio_1505_, lean_object* v___f_1506_, lean_object* v___f_1507_, lean_object* v_x_1508_, lean_object* v___y_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__11(v_x_1504_, v_prio_1505_, v___f_1506_, v___f_1507_, v_x_1508_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__12(lean_object* v___f_1511_, lean_object* v___f_1512_, lean_object* v_prio_1513_, lean_object* v___f_1514_, lean_object* v_a_1515_, lean_object* v_x_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v___f_1519_; lean_object* v___f_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
lean_inc_ref(v___y_1517_);
v___f_1519_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__9___boxed), 5, 3);
lean_closure_set(v___f_1519_, 0, v___f_1511_);
lean_closure_set(v___f_1519_, 1, v___f_1512_);
lean_closure_set(v___f_1519_, 2, v___y_1517_);
v___f_1520_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__11___boxed), 6, 4);
lean_closure_set(v___f_1520_, 0, v_x_1516_);
lean_closure_set(v___f_1520_, 1, v_prio_1513_);
lean_closure_set(v___f_1520_, 2, v___f_1514_);
lean_closure_set(v___f_1520_, 3, v___f_1519_);
v___x_1521_ = lean_unsigned_to_nat(0u);
v___x_1522_ = 0;
v___x_1523_ = l_Std_CancellationContext_fork(v_a_1515_);
v___x_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
v___x_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
v___x_1526_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1521_, v___x_1522_, v___x_1525_, v___f_1520_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__12___boxed(lean_object* v___f_1527_, lean_object* v___f_1528_, lean_object* v_prio_1529_, lean_object* v___f_1530_, lean_object* v_a_1531_, lean_object* v_x_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__12(v___f_1527_, v___f_1528_, v_prio_1529_, v___f_1530_, v_a_1531_, v_x_1532_, v___y_1533_);
lean_dec_ref(v___y_1533_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__13(lean_object* v_a_1536_, lean_object* v___f_1537_, lean_object* v___f_1538_, lean_object* v_x_1539_){
_start:
{
if (lean_obj_tag(v_x_1539_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1549_; 
lean_dec_ref(v___f_1538_);
lean_dec_ref(v___f_1537_);
v_a_1541_ = lean_ctor_get(v_x_1539_, 0);
v_isSharedCheck_1549_ = !lean_is_exclusive(v_x_1539_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1543_ = v_x_1539_;
v_isShared_1544_ = v_isSharedCheck_1549_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v_x_1539_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1549_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1546_; 
if (v_isShared_1544_ == 0)
{
v___x_1546_ = v___x_1543_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_a_1541_);
v___x_1546_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
lean_object* v___x_1547_; 
v___x_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
return v___x_1547_;
}
}
}
else
{
lean_object* v___x_1550_; uint8_t v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
lean_dec_ref_known(v_x_1539_, 1);
v___x_1550_ = lean_unsigned_to_nat(0u);
v___x_1551_ = 0;
v___x_1552_ = l_IO_Promise_result_x21___redArg(v_a_1536_);
v___x_1553_ = lean_task_map(v___f_1537_, v___x_1552_, v___x_1550_, v___x_1551_);
v___x_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
v___x_1555_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1550_, v___x_1551_, v___x_1554_, v___f_1538_);
return v___x_1555_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__13___boxed(lean_object* v_a_1556_, lean_object* v___f_1557_, lean_object* v___f_1558_, lean_object* v_x_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__13(v_a_1556_, v___f_1557_, v___f_1558_, v_x_1559_);
lean_dec(v_a_1556_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__14(lean_object* v_prio_1562_, lean_object* v___f_1563_, lean_object* v_a_1564_, lean_object* v___f_1565_, lean_object* v___f_1566_, lean_object* v_inst_1567_, lean_object* v_xs_1568_, lean_object* v_a_1569_, lean_object* v_x_1570_){
_start:
{
if (lean_obj_tag(v_x_1570_) == 0)
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1580_; 
lean_dec(v_xs_1568_);
lean_dec_ref(v_inst_1567_);
lean_dec_ref(v___f_1566_);
lean_dec_ref(v___f_1565_);
lean_dec_ref(v_a_1564_);
lean_dec_ref(v___f_1563_);
lean_dec(v_prio_1562_);
v_a_1572_ = lean_ctor_get(v_x_1570_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v_x_1570_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1574_ = v_x_1570_;
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v_x_1570_);
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
lean_object* v_a_1581_; lean_object* v___f_1582_; lean_object* v___f_1583_; lean_object* v___f_1584_; lean_object* v___f_1585_; lean_object* v___x_1586_; uint8_t v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v_a_1581_ = lean_ctor_get(v_x_1570_, 0);
lean_inc_n(v_a_1581_, 3);
lean_dec_ref_known(v_x_1570_, 1);
v___f_1582_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1582_, 0, v_a_1581_);
v___f_1583_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1583_, 0, v_a_1581_);
v___f_1584_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__12___boxed), 8, 5);
lean_closure_set(v___f_1584_, 0, v___f_1582_);
lean_closure_set(v___f_1584_, 1, v___f_1583_);
lean_closure_set(v___f_1584_, 2, v_prio_1562_);
lean_closure_set(v___f_1584_, 3, v___f_1563_);
lean_closure_set(v___f_1584_, 4, v_a_1564_);
v___f_1585_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__13___boxed), 5, 3);
lean_closure_set(v___f_1585_, 0, v_a_1581_);
lean_closure_set(v___f_1585_, 1, v___f_1565_);
lean_closure_set(v___f_1585_, 2, v___f_1566_);
v___x_1586_ = lean_unsigned_to_nat(0u);
v___x_1587_ = 0;
lean_inc_ref(v_a_1569_);
v___x_1588_ = lean_apply_4(v_inst_1567_, v_xs_1568_, v___f_1584_, v_a_1569_, lean_box(0));
v___x_1589_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1586_, v___x_1587_, v___x_1588_, v___f_1585_);
return v___x_1589_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__14___boxed(lean_object* v_prio_1590_, lean_object* v___f_1591_, lean_object* v_a_1592_, lean_object* v___f_1593_, lean_object* v___f_1594_, lean_object* v_inst_1595_, lean_object* v_xs_1596_, lean_object* v_a_1597_, lean_object* v_x_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__14(v_prio_1590_, v___f_1591_, v_a_1592_, v___f_1593_, v___f_1594_, v_inst_1595_, v_xs_1596_, v_a_1597_, v_x_1598_);
lean_dec_ref(v_a_1597_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__15(lean_object* v_prio_1601_, lean_object* v___f_1602_, lean_object* v___f_1603_, lean_object* v_inst_1604_, lean_object* v_xs_1605_, lean_object* v_a_1606_, lean_object* v_x_1607_){
_start:
{
if (lean_obj_tag(v_x_1607_) == 0)
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1617_; 
lean_dec(v_xs_1605_);
lean_dec_ref(v_inst_1604_);
lean_dec_ref(v___f_1603_);
lean_dec_ref(v___f_1602_);
lean_dec(v_prio_1601_);
v_a_1609_ = lean_ctor_get(v_x_1607_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v_x_1607_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1611_ = v_x_1607_;
v_isShared_1612_ = v_isSharedCheck_1617_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v_x_1607_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1617_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1609_);
v___x_1614_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
lean_object* v___x_1615_; 
v___x_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1614_);
return v___x_1615_;
}
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1632_; 
v_a_1618_ = lean_ctor_get(v_x_1607_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v_x_1607_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1620_ = v_x_1607_;
v_isShared_1621_ = v_isSharedCheck_1632_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v_x_1607_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1632_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___f_1622_; lean_object* v___f_1623_; lean_object* v___x_1624_; uint8_t v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1628_; 
lean_inc(v_a_1618_);
v___f_1622_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1622_, 0, v_a_1618_);
lean_inc_ref(v_a_1606_);
v___f_1623_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__14___boxed), 10, 8);
lean_closure_set(v___f_1623_, 0, v_prio_1601_);
lean_closure_set(v___f_1623_, 1, v___f_1602_);
lean_closure_set(v___f_1623_, 2, v_a_1618_);
lean_closure_set(v___f_1623_, 3, v___f_1603_);
lean_closure_set(v___f_1623_, 4, v___f_1622_);
lean_closure_set(v___f_1623_, 5, v_inst_1604_);
lean_closure_set(v___f_1623_, 6, v_xs_1605_);
lean_closure_set(v___f_1623_, 7, v_a_1606_);
v___x_1624_ = lean_unsigned_to_nat(0u);
v___x_1625_ = 0;
v___x_1626_ = lean_io_promise_new();
if (v_isShared_1621_ == 0)
{
lean_ctor_set(v___x_1620_, 0, v___x_1626_);
v___x_1628_ = v___x_1620_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v___x_1626_);
v___x_1628_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1628_);
v___x_1630_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1624_, v___x_1625_, v___x_1629_, v___f_1623_);
return v___x_1630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__15___boxed(lean_object* v_prio_1633_, lean_object* v___f_1634_, lean_object* v___f_1635_, lean_object* v_inst_1636_, lean_object* v_xs_1637_, lean_object* v_a_1638_, lean_object* v_x_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__15(v_prio_1633_, v___f_1634_, v___f_1635_, v_inst_1636_, v_xs_1637_, v_a_1638_, v_x_1639_);
lean_dec_ref(v_a_1638_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg(lean_object* v_inst_1643_, lean_object* v_xs_1644_, lean_object* v_prio_1645_, lean_object* v_a_1646_){
_start:
{
lean_object* v___f_1648_; lean_object* v___f_1649_; lean_object* v___f_1650_; lean_object* v___x_1651_; uint8_t v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___f_1648_ = ((lean_object*)(l_Std_Async_ContextAsync_raceAll___redArg___closed__0));
v___f_1649_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
lean_inc_ref_n(v_a_1646_, 2);
v___f_1650_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__15___boxed), 8, 6);
lean_closure_set(v___f_1650_, 0, v_prio_1645_);
lean_closure_set(v___f_1650_, 1, v___f_1649_);
lean_closure_set(v___f_1650_, 2, v___f_1648_);
lean_closure_set(v___f_1650_, 3, v_inst_1643_);
lean_closure_set(v___f_1650_, 4, v_xs_1644_);
lean_closure_set(v___f_1650_, 5, v_a_1646_);
v___x_1651_ = lean_unsigned_to_nat(0u);
v___x_1652_ = 0;
v___x_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1653_, 0, v_a_1646_);
v___x_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
v___x_1655_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1651_, v___x_1652_, v___x_1654_, v___f_1650_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___boxed(lean_object* v_inst_1656_, lean_object* v_xs_1657_, lean_object* v_prio_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l_Std_Async_ContextAsync_raceAll___redArg(v_inst_1656_, v_xs_1657_, v_prio_1658_, v_a_1659_);
lean_dec_ref(v_a_1659_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll(lean_object* v_c_1662_, lean_object* v_00_u03b1_1663_, lean_object* v_inst_1664_, lean_object* v_xs_1665_, lean_object* v_prio_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l_Std_Async_ContextAsync_raceAll___redArg(v_inst_1664_, v_xs_1665_, v_prio_1666_, v_a_1667_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___boxed(lean_object* v_c_1670_, lean_object* v_00_u03b1_1671_, lean_object* v_inst_1672_, lean_object* v_xs_1673_, lean_object* v_prio_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Std_Async_ContextAsync_raceAll(v_c_1670_, v_00_u03b1_1671_, v_inst_1672_, v_xs_1673_, v_prio_1674_, v_a_1675_);
lean_dec_ref(v_a_1675_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__3(lean_object* v___f_1678_, lean_object* v___x_1679_, lean_object* v___f_1680_){
_start:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; uint8_t v___x_1684_; lean_object* v___x_1685_; lean_object* v___y_1687_; 
v___x_1682_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_1682_, 0, lean_box(0));
lean_closure_set(v___x_1682_, 1, lean_box(0));
lean_closure_set(v___x_1682_, 2, lean_box(0));
lean_closure_set(v___x_1682_, 3, v___f_1678_);
v___x_1683_ = lean_unsigned_to_nat(0u);
v___x_1684_ = 0;
v___x_1685_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___x_1679_, v___f_1680_, v___x_1683_, v___x_1684_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1689_; 
lean_dec_ref(v___x_1682_);
v_a_1689_ = lean_ctor_get(v___x_1685_, 0);
lean_inc(v_a_1689_);
lean_dec_ref_known(v___x_1685_, 1);
if (lean_obj_tag(v_a_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
v_a_1690_ = lean_ctor_get(v_a_1689_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v_a_1689_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v_a_1689_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v_a_1689_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
v___y_1687_ = v___x_1695_;
goto v___jp_1686_;
}
}
}
else
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1706_; 
v_a_1698_ = lean_ctor_get(v_a_1689_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_a_1689_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1700_ = v_a_1689_;
v_isShared_1701_ = v_isSharedCheck_1706_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v_a_1689_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1706_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v_fst_1702_; lean_object* v___x_1704_; 
v_fst_1702_ = lean_ctor_get(v_a_1698_, 0);
lean_inc(v_fst_1702_);
lean_dec(v_a_1698_);
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 0, v_fst_1702_);
v___x_1704_ = v___x_1700_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_fst_1702_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
v___y_1687_ = v___x_1704_;
goto v___jp_1686_;
}
}
}
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1715_; 
v_a_1707_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1709_ = v___x_1685_;
v_isShared_1710_ = v_isSharedCheck_1715_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1685_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1715_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1711_; lean_object* v___x_1713_; 
v___x_1711_ = lean_task_map(v___x_1682_, v_a_1707_, v___x_1683_, v___x_1684_);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1711_);
v___x_1713_ = v___x_1709_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v___x_1711_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
v___jp_1686_:
{
lean_object* v___x_1688_; 
v___x_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1688_, 0, v___y_1687_);
return v___x_1688_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__3___boxed(lean_object* v___f_1716_, lean_object* v___x_1717_, lean_object* v___f_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_Std_Async_ContextAsync_async___redArg___lam__3(v___f_1716_, v___x_1717_, v___f_1718_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__0(lean_object* v_x_1721_, lean_object* v___f_1722_, lean_object* v_prio_1723_, lean_object* v___f_1724_, lean_object* v_x_1725_){
_start:
{
if (lean_obj_tag(v_x_1725_) == 0)
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1735_; 
lean_dec_ref(v___f_1724_);
lean_dec(v_prio_1723_);
lean_dec(v___f_1722_);
lean_dec_ref(v_x_1721_);
v_a_1727_ = lean_ctor_get(v_x_1725_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v_x_1725_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1729_ = v_x_1725_;
v_isShared_1730_ = v_isSharedCheck_1735_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v_x_1725_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1735_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1732_; 
if (v_isShared_1730_ == 0)
{
v___x_1732_ = v___x_1729_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_a_1727_);
v___x_1732_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
lean_object* v___x_1733_; 
v___x_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1732_);
return v___x_1733_;
}
}
}
else
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1753_; 
v_a_1736_ = lean_ctor_get(v_x_1725_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v_x_1725_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1738_ = v_x_1725_;
v_isShared_1739_ = v_isSharedCheck_1753_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v_x_1725_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1753_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___f_1742_; lean_object* v___f_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; uint8_t v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1750_; 
lean_inc(v_a_1736_);
v___x_1740_ = lean_apply_1(v_x_1721_, v_a_1736_);
v___x_1741_ = lean_box(2);
v___f_1742_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1742_, 0, v_a_1736_);
lean_closure_set(v___f_1742_, 1, v___x_1741_);
v___f_1743_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_async___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_1743_, 0, v___f_1722_);
lean_closure_set(v___f_1743_, 1, v___x_1740_);
lean_closure_set(v___f_1743_, 2, v___f_1742_);
v___x_1744_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1744_, 0, lean_box(0));
lean_closure_set(v___x_1744_, 1, v___f_1743_);
v___x_1745_ = lean_io_as_task(v___x_1744_, v_prio_1723_);
v___x_1746_ = lean_unsigned_to_nat(0u);
v___x_1747_ = 1;
v___x_1748_ = lean_task_bind(v___x_1745_, v___f_1724_, v___x_1746_, v___x_1747_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 0, v___x_1748_);
v___x_1750_ = v___x_1738_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v___x_1748_);
v___x_1750_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
lean_object* v___x_1751_; 
v___x_1751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1750_);
return v___x_1751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__0___boxed(lean_object* v_x_1754_, lean_object* v___f_1755_, lean_object* v_prio_1756_, lean_object* v___f_1757_, lean_object* v_x_1758_, lean_object* v___y_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Std_Async_ContextAsync_async___redArg___lam__0(v_x_1754_, v___f_1755_, v_prio_1756_, v___f_1757_, v_x_1758_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg(lean_object* v_x_1761_, lean_object* v_prio_1762_, lean_object* v_ctx_1763_){
_start:
{
lean_object* v___f_1765_; lean_object* v___f_1766_; lean_object* v___f_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___f_1765_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_1766_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_1767_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_async___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_1767_, 0, v_x_1761_);
lean_closure_set(v___f_1767_, 1, v___f_1765_);
lean_closure_set(v___f_1767_, 2, v_prio_1762_);
lean_closure_set(v___f_1767_, 3, v___f_1766_);
v___x_1768_ = lean_unsigned_to_nat(0u);
v___x_1769_ = 0;
lean_inc_ref(v_ctx_1763_);
v___x_1770_ = l_Std_CancellationContext_fork(v_ctx_1763_);
v___x_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1770_);
v___x_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
v___x_1773_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1768_, v___x_1769_, v___x_1772_, v___f_1767_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___boxed(lean_object* v_x_1774_, lean_object* v_prio_1775_, lean_object* v_ctx_1776_, lean_object* v_a_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Std_Async_ContextAsync_async___redArg(v_x_1774_, v_prio_1775_, v_ctx_1776_);
lean_dec_ref(v_ctx_1776_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async(lean_object* v_00_u03b1_1779_, lean_object* v_x_1780_, lean_object* v_prio_1781_, lean_object* v_ctx_1782_){
_start:
{
lean_object* v___f_1784_; lean_object* v___f_1785_; lean_object* v___f_1786_; lean_object* v___x_1787_; uint8_t v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___f_1784_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_1785_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_1786_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_async___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_1786_, 0, v_x_1780_);
lean_closure_set(v___f_1786_, 1, v___f_1784_);
lean_closure_set(v___f_1786_, 2, v_prio_1781_);
lean_closure_set(v___f_1786_, 3, v___f_1785_);
v___x_1787_ = lean_unsigned_to_nat(0u);
v___x_1788_ = 0;
lean_inc_ref(v_ctx_1782_);
v___x_1789_ = l_Std_CancellationContext_fork(v_ctx_1782_);
v___x_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1789_);
v___x_1791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1790_);
v___x_1792_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1787_, v___x_1788_, v___x_1791_, v___f_1786_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___boxed(lean_object* v_00_u03b1_1793_, lean_object* v_x_1794_, lean_object* v_prio_1795_, lean_object* v_ctx_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_Std_Async_ContextAsync_async(v_00_u03b1_1793_, v_x_1794_, v_prio_1795_, v_ctx_1796_);
lean_dec_ref(v_ctx_1796_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5(lean_object* v___f_1799_, lean_object* v___f_1800_, lean_object* v_00_u03b1_1801_, lean_object* v_x_1802_, lean_object* v_prio_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v___f_1806_; lean_object* v___x_1807_; uint8_t v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___f_1806_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_async___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_1806_, 0, v_x_1802_);
lean_closure_set(v___f_1806_, 1, v___f_1799_);
lean_closure_set(v___f_1806_, 2, v_prio_1803_);
lean_closure_set(v___f_1806_, 3, v___f_1800_);
v___x_1807_ = lean_unsigned_to_nat(0u);
v___x_1808_ = 0;
lean_inc_ref(v___y_1804_);
v___x_1809_ = l_Std_CancellationContext_fork(v___y_1804_);
v___x_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
v___x_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1810_);
v___x_1812_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1807_, v___x_1808_, v___x_1811_, v___f_1806_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5___boxed(lean_object* v___f_1813_, lean_object* v___f_1814_, lean_object* v_00_u03b1_1815_, lean_object* v_x_1816_, lean_object* v_prio_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5(v___f_1813_, v___f_1814_, v_00_u03b1_1815_, v_x_1816_, v_prio_1817_, v___y_1818_);
lean_dec_ref(v___y_1818_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__0(lean_object* v_00_u03b1_1825_, lean_object* v_00_u03b2_1826_, lean_object* v_f_1827_, lean_object* v_x_1828_, lean_object* v_ctx_1829_){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; uint8_t v___x_1833_; lean_object* v___x_1834_; lean_object* v___y_1836_; 
lean_inc(v_f_1827_);
v___x_1831_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_1831_, 0, lean_box(0));
lean_closure_set(v___x_1831_, 1, lean_box(0));
lean_closure_set(v___x_1831_, 2, lean_box(0));
lean_closure_set(v___x_1831_, 3, v_f_1827_);
v___x_1832_ = lean_unsigned_to_nat(0u);
v___x_1833_ = 0;
v___x_1834_ = lean_apply_2(v_x_1828_, v_ctx_1829_, lean_box(0));
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_a_1838_; 
lean_dec_ref(v___x_1831_);
v_a_1838_ = lean_ctor_get(v___x_1834_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1834_, 1);
if (lean_obj_tag(v_a_1838_) == 0)
{
lean_object* v_a_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1846_; 
lean_dec(v_f_1827_);
v_a_1839_ = lean_ctor_get(v_a_1838_, 0);
v_isSharedCheck_1846_ = !lean_is_exclusive(v_a_1838_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1841_ = v_a_1838_;
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_a_1839_);
lean_dec(v_a_1838_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1844_; 
if (v_isShared_1842_ == 0)
{
v___x_1844_ = v___x_1841_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_a_1839_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
v___y_1836_ = v___x_1844_;
goto v___jp_1835_;
}
}
}
else
{
lean_object* v_a_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1855_; 
v_a_1847_ = lean_ctor_get(v_a_1838_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v_a_1838_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1849_ = v_a_1838_;
v_isShared_1850_ = v_isSharedCheck_1855_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_a_1847_);
lean_dec(v_a_1838_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1855_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1851_; lean_object* v___x_1853_; 
v___x_1851_ = lean_apply_1(v_f_1827_, v_a_1847_);
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 0, v___x_1851_);
v___x_1853_ = v___x_1849_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v___x_1851_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
v___y_1836_ = v___x_1853_;
goto v___jp_1835_;
}
}
}
}
else
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1864_; 
lean_dec(v_f_1827_);
v_a_1856_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1858_ = v___x_1834_;
v_isShared_1859_ = v_isSharedCheck_1864_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1834_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1864_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1860_; lean_object* v___x_1862_; 
v___x_1860_ = lean_task_map(v___x_1831_, v_a_1856_, v___x_1832_, v___x_1833_);
if (v_isShared_1859_ == 0)
{
lean_ctor_set(v___x_1858_, 0, v___x_1860_);
v___x_1862_ = v___x_1858_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
v___jp_1835_:
{
lean_object* v___x_1837_; 
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v___y_1836_);
return v___x_1837_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__0___boxed(lean_object* v_00_u03b1_1865_, lean_object* v_00_u03b2_1866_, lean_object* v_f_1867_, lean_object* v_x_1868_, lean_object* v_ctx_1869_, lean_object* v___y_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Std_Async_ContextAsync_instFunctor___lam__0(v_00_u03b1_1865_, v_00_u03b2_1866_, v_f_1867_, v_x_1868_, v_ctx_1869_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__1(lean_object* v___f_1872_, lean_object* v_00_u03b1_1873_, lean_object* v_00_u03b2_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_1879_, 0, lean_box(0));
lean_closure_set(v___x_1879_, 1, lean_box(0));
lean_closure_set(v___x_1879_, 2, v___y_1875_);
lean_inc_ref(v___y_1877_);
v___x_1880_ = lean_apply_6(v___f_1872_, lean_box(0), lean_box(0), v___x_1879_, v___y_1876_, v___y_1877_, lean_box(0));
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__1___boxed(lean_object* v___f_1881_, lean_object* v_00_u03b1_1882_, lean_object* v_00_u03b2_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Std_Async_ContextAsync_instFunctor___lam__1(v___f_1881_, v_00_u03b1_1882_, v_00_u03b2_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
lean_dec_ref(v___y_1886_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__0(lean_object* v_00_u03b1_1896_, lean_object* v_a_1897_, lean_object* v_x_1898_){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1900_, 0, v_a_1897_);
v___x_1901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__0___boxed(lean_object* v_00_u03b1_1902_, lean_object* v_a_1903_, lean_object* v_x_1904_, lean_object* v___y_1905_){
_start:
{
lean_object* v_res_1906_; 
v_res_1906_ = l_Std_Async_ContextAsync_instMonad___lam__0(v_00_u03b1_1902_, v_a_1903_, v_x_1904_);
lean_dec_ref(v_x_1904_);
return v_res_1906_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__1(lean_object* v_f_1907_, lean_object* v_ctx_1908_, lean_object* v_x_1909_){
_start:
{
if (lean_obj_tag(v_x_1909_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1919_; 
lean_dec_ref(v_ctx_1908_);
lean_dec_ref(v_f_1907_);
v_a_1911_ = lean_ctor_get(v_x_1909_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_x_1909_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1913_ = v_x_1909_;
v_isShared_1914_ = v_isSharedCheck_1919_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v_x_1909_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1919_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
lean_object* v___x_1917_; 
v___x_1917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
return v___x_1917_;
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1921_; 
v_a_1920_ = lean_ctor_get(v_x_1909_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v_x_1909_, 1);
v___x_1921_ = lean_apply_3(v_f_1907_, v_a_1920_, v_ctx_1908_, lean_box(0));
return v___x_1921_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__1___boxed(lean_object* v_f_1922_, lean_object* v_ctx_1923_, lean_object* v_x_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Std_Async_ContextAsync_instMonad___lam__1(v_f_1922_, v_ctx_1923_, v_x_1924_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__2(lean_object* v_00_u03b1_1927_, lean_object* v_00_u03b2_1928_, lean_object* v_x_1929_, lean_object* v_f_1930_, lean_object* v_ctx_1931_){
_start:
{
lean_object* v___f_1933_; lean_object* v___x_1934_; uint8_t v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
lean_inc_ref(v_ctx_1931_);
v___f_1933_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_instMonad___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1933_, 0, v_f_1930_);
lean_closure_set(v___f_1933_, 1, v_ctx_1931_);
v___x_1934_ = lean_unsigned_to_nat(0u);
v___x_1935_ = 0;
v___x_1936_ = lean_apply_2(v_x_1929_, v_ctx_1931_, lean_box(0));
v___x_1937_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1934_, v___x_1935_, v___x_1936_, v___f_1933_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__2___boxed(lean_object* v_00_u03b1_1938_, lean_object* v_00_u03b2_1939_, lean_object* v_x_1940_, lean_object* v_f_1941_, lean_object* v_ctx_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l_Std_Async_ContextAsync_instMonad___lam__2(v_00_u03b1_1938_, v_00_u03b2_1939_, v_x_1940_, v_f_1941_, v_ctx_1942_);
return v_res_1944_;
}
}
static lean_object* _init_l_Std_Async_ContextAsync_instMonad(void){
_start:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v_toApplicative_1949_; lean_object* v_toSeq_1950_; lean_object* v_toSeqLeft_1951_; lean_object* v_toSeqRight_1952_; lean_object* v___f_1953_; lean_object* v___f_1954_; lean_object* v___f_1955_; lean_object* v___f_1956_; lean_object* v___f_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1947_ = ((lean_object*)(l_Std_Async_ContextAsync_instFunctor));
v___x_1948_ = lean_obj_once(&l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1);
v_toApplicative_1949_ = lean_ctor_get(v___x_1948_, 0);
v_toSeq_1950_ = lean_ctor_get(v_toApplicative_1949_, 2);
v_toSeqLeft_1951_ = lean_ctor_get(v_toApplicative_1949_, 3);
v_toSeqRight_1952_ = lean_ctor_get(v_toApplicative_1949_, 4);
v___f_1953_ = ((lean_object*)(l_Std_Async_ContextAsync_instMonad___closed__0));
v___f_1954_ = ((lean_object*)(l_Std_Async_ContextAsync_instMonad___closed__1));
lean_inc(v_toSeqRight_1952_);
v___f_1955_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1955_, 0, v_toSeqRight_1952_);
lean_inc(v_toSeqLeft_1951_);
v___f_1956_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1956_, 0, v_toSeqLeft_1951_);
lean_inc(v_toSeq_1950_);
v___f_1957_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1957_, 0, v_toSeq_1950_);
v___x_1958_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1958_, 0, v___x_1947_);
lean_ctor_set(v___x_1958_, 1, v___f_1953_);
lean_ctor_set(v___x_1958_, 2, v___f_1957_);
lean_ctor_set(v___x_1958_, 3, v___f_1956_);
lean_ctor_set(v___x_1958_, 4, v___f_1955_);
v___x_1959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1958_);
lean_ctor_set(v___x_1959_, 1, v___f_1954_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__0(lean_object* v_a_1960_){
_start:
{
lean_object* v___x_1961_; 
v___x_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1961_, 0, v_a_1960_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__1(lean_object* v___f_1962_, lean_object* v_x_1963_){
_start:
{
if (lean_obj_tag(v_x_1963_) == 0)
{
lean_object* v_a_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1973_; 
lean_dec_ref(v___f_1962_);
v_a_1965_ = lean_ctor_get(v_x_1963_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v_x_1963_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1967_ = v_x_1963_;
v_isShared_1968_ = v_isSharedCheck_1973_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_a_1965_);
lean_dec(v_x_1963_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1973_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1970_; 
if (v_isShared_1968_ == 0)
{
v___x_1970_ = v___x_1967_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_a_1965_);
v___x_1970_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
lean_object* v___x_1971_; 
v___x_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
return v___x_1971_;
}
}
}
else
{
lean_object* v_a_1974_; 
v_a_1974_ = lean_ctor_get(v_x_1963_, 0);
lean_inc(v_a_1974_);
lean_dec_ref_known(v_x_1963_, 1);
if (lean_obj_tag(v_a_1974_) == 0)
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1983_; 
lean_dec_ref(v___f_1962_);
v_a_1975_ = lean_ctor_get(v_a_1974_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v_a_1974_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1977_ = v_a_1974_;
v_isShared_1978_ = v_isSharedCheck_1983_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v_a_1974_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1983_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
lean_object* v___x_1981_; 
v___x_1981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1980_);
return v___x_1981_;
}
}
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v_a_1984_ = lean_ctor_get(v_a_1974_, 0);
lean_inc(v_a_1984_);
lean_dec_ref_known(v_a_1974_, 1);
v___x_1985_ = lean_unsigned_to_nat(0u);
v___x_1986_ = 0;
v___x_1987_ = lean_task_map(v___f_1962_, v_a_1984_, v___x_1985_, v___x_1986_);
v___x_1988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1987_);
return v___x_1988_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__1___boxed(lean_object* v___f_1989_, lean_object* v_x_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v_res_1992_; 
v_res_1992_ = l_Std_Async_ContextAsync_instMonadLiftIO___lam__1(v___f_1989_, v_x_1990_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__2(lean_object* v___f_1993_, lean_object* v_00_u03b1_1994_, lean_object* v_x_1995_, lean_object* v_x_1996_){
_start:
{
lean_object* v___x_1998_; uint8_t v___x_1999_; lean_object* v_val_2001_; lean_object* v___x_2005_; 
v___x_1998_ = lean_unsigned_to_nat(0u);
v___x_1999_ = 0;
v___x_2005_ = lean_apply_1(v_x_1995_, lean_box(0));
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2014_; 
v_a_2006_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2008_ = v___x_2005_;
v_isShared_2009_ = v_isSharedCheck_2014_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_2005_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2014_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2010_; lean_object* v___x_2012_; 
v___x_2010_ = lean_task_pure(v_a_2006_);
if (v_isShared_2009_ == 0)
{
lean_ctor_set_tag(v___x_2008_, 1);
lean_ctor_set(v___x_2008_, 0, v___x_2010_);
v___x_2012_ = v___x_2008_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2010_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
v_val_2001_ = v___x_2012_;
goto v___jp_2000_;
}
}
}
else
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2022_; 
v_a_2015_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2017_ = v___x_2005_;
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v___x_2005_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
lean_ctor_set_tag(v___x_2017_, 0);
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2015_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
v_val_2001_ = v___x_2020_;
goto v___jp_2000_;
}
}
}
v___jp_2000_:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2002_, 0, v_val_2001_);
v___x_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2003_, 0, v___x_2002_);
v___x_2004_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1998_, v___x_1999_, v___x_2003_, v___f_1993_);
return v___x_2004_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__2___boxed(lean_object* v___f_2023_, lean_object* v_00_u03b1_2024_, lean_object* v_x_2025_, lean_object* v_x_2026_, lean_object* v___y_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_Std_Async_ContextAsync_instMonadLiftIO___lam__2(v___f_2023_, v_00_u03b1_2024_, v_x_2025_, v_x_2026_);
lean_dec_ref(v_x_2026_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0(lean_object* v_00_u03b1_2035_, lean_object* v_x_2036_, lean_object* v_x_2037_){
_start:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2039_ = lean_apply_1(v_x_2036_, lean_box(0));
v___x_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2039_);
v___x_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0___boxed(lean_object* v_00_u03b1_2042_, lean_object* v_x_2043_, lean_object* v_x_2044_, lean_object* v___y_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0(v_00_u03b1_2042_, v_x_2043_, v_x_2044_);
lean_dec_ref(v_x_2044_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__0(lean_object* v_00_u03b1_2049_, lean_object* v_e_2050_, lean_object* v_x_2051_){
_start:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2053_, 0, v_e_2050_);
v___x_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2053_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__0___boxed(lean_object* v_00_u03b1_2055_, lean_object* v_e_2056_, lean_object* v_x_2057_, lean_object* v___y_2058_){
_start:
{
lean_object* v_res_2059_; 
v_res_2059_ = l_Std_Async_ContextAsync_instMonadExceptError___lam__0(v_00_u03b1_2055_, v_e_2056_, v_x_2057_);
lean_dec_ref(v_x_2057_);
return v_res_2059_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__1(lean_object* v_h_2060_, lean_object* v_ctx_2061_, lean_object* v_x_2062_){
_start:
{
if (lean_obj_tag(v_x_2062_) == 0)
{
lean_object* v_a_2064_; lean_object* v___x_2065_; 
v_a_2064_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_a_2064_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2065_ = lean_apply_3(v_h_2060_, v_a_2064_, v_ctx_2061_, lean_box(0));
return v___x_2065_;
}
else
{
lean_object* v___x_2066_; 
lean_dec_ref(v_ctx_2061_);
lean_dec_ref(v_h_2060_);
v___x_2066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2066_, 0, v_x_2062_);
return v___x_2066_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__1___boxed(lean_object* v_h_2067_, lean_object* v_ctx_2068_, lean_object* v_x_2069_, lean_object* v___y_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_Std_Async_ContextAsync_instMonadExceptError___lam__1(v_h_2067_, v_ctx_2068_, v_x_2069_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__2(lean_object* v_00_u03b1_2072_, lean_object* v_x_2073_, lean_object* v_h_2074_, lean_object* v_ctx_2075_){
_start:
{
lean_object* v___f_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
lean_inc_ref(v_ctx_2075_);
v___f_2077_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_instMonadExceptError___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2077_, 0, v_h_2074_);
lean_closure_set(v___f_2077_, 1, v_ctx_2075_);
v___x_2078_ = lean_unsigned_to_nat(0u);
v___x_2079_ = 0;
v___x_2080_ = lean_apply_2(v_x_2073_, v_ctx_2075_, lean_box(0));
v___x_2081_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2078_, v___x_2079_, v___x_2080_, v___f_2077_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__2___boxed(lean_object* v_00_u03b1_2082_, lean_object* v_x_2083_, lean_object* v_h_2084_, lean_object* v_ctx_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Std_Async_ContextAsync_instMonadExceptError___lam__2(v_00_u03b1_2082_, v_x_2083_, v_h_2084_, v_ctx_2085_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__0(lean_object* v_f_2094_, lean_object* v_ctx_2095_, lean_object* v_opt_2096_){
_start:
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_apply_3(v_f_2094_, v_opt_2096_, v_ctx_2095_, lean_box(0));
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__0___boxed(lean_object* v_f_2099_, lean_object* v_ctx_2100_, lean_object* v_opt_2101_, lean_object* v___y_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l_Std_Async_ContextAsync_instMonadFinally___lam__0(v_f_2099_, v_ctx_2100_, v_opt_2101_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__1(lean_object* v_00_u03b1_2104_, lean_object* v_00_u03b2_2105_, lean_object* v_x_2106_, lean_object* v_f_2107_, lean_object* v_ctx_2108_){
_start:
{
lean_object* v___f_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; uint8_t v___x_2113_; lean_object* v___x_2114_; 
lean_inc_ref(v_ctx_2108_);
v___f_2110_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_instMonadFinally___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2110_, 0, v_f_2107_);
lean_closure_set(v___f_2110_, 1, v_ctx_2108_);
v___x_2111_ = lean_apply_1(v_x_2106_, v_ctx_2108_);
v___x_2112_ = lean_unsigned_to_nat(0u);
v___x_2113_ = 0;
v___x_2114_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___x_2111_, v___f_2110_, v___x_2112_, v___x_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__1___boxed(lean_object* v_00_u03b1_2115_, lean_object* v_00_u03b2_2116_, lean_object* v_x_2117_, lean_object* v_f_2118_, lean_object* v_ctx_2119_, lean_object* v___y_2120_){
_start:
{
lean_object* v_res_2121_; 
v_res_2121_ = l_Std_Async_ContextAsync_instMonadFinally___lam__1(v_00_u03b1_2115_, v_00_u03b2_2116_, v_x_2117_, v_f_2118_, v_ctx_2119_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0(lean_object* v_x_2131_){
_start:
{
lean_object* v___x_2133_; 
v___x_2133_ = ((lean_object*)(l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__3));
return v___x_2133_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___boxed(lean_object* v_x_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l_Std_Async_ContextAsync_instInhabited___redArg___lam__0(v_x_2134_);
lean_dec_ref(v_x_2134_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg(){
_start:
{
lean_object* v___f_2139_; 
v___f_2139_ = ((lean_object*)(l_Std_Async_ContextAsync_instInhabited___redArg___closed__0));
return v___f_2139_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___boxed(lean_object* v___dummy_2140_){
_start:
{
lean_object* v_res_2141_; 
v_res_2141_ = l_Std_Async_ContextAsync_instInhabited___redArg();
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited(lean_object* v_00_u03b1_2142_, lean_object* v_inst_2143_){
_start:
{
lean_object* v___f_2144_; 
v___f_2144_ = ((lean_object*)(l_Std_Async_ContextAsync_instInhabited___redArg___closed__0));
return v___f_2144_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___boxed(lean_object* v_00_u03b1_2145_, lean_object* v_inst_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = l_Std_Async_ContextAsync_instInhabited(v_00_u03b1_2145_, v_inst_2146_);
lean_dec(v_inst_2146_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0(lean_object* v_00_u03b1_2148_, lean_object* v_t_2149_, lean_object* v_x_2150_){
_start:
{
lean_object* v___x_2152_; 
v___x_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2152_, 0, v_t_2149_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0___boxed(lean_object* v_00_u03b1_2153_, lean_object* v_t_2154_, lean_object* v_x_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v_res_2157_; 
v_res_2157_ = l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0(v_00_u03b1_2153_, v_t_2154_, v_x_2155_);
lean_dec_ref(v_x_2155_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__3(lean_object* v_x_2160_){
_start:
{
if (lean_obj_tag(v_x_2160_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2170_; 
v_a_2162_ = lean_ctor_get(v_x_2160_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v_x_2160_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2164_ = v_x_2160_;
v_isShared_2165_ = v_isSharedCheck_2170_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v_x_2160_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2170_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
lean_object* v___x_2168_; 
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
return v___x_2168_;
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2172_; 
v_a_2171_ = lean_ctor_get(v_x_2160_, 0);
lean_inc(v_a_2171_);
lean_dec_ref_known(v_x_2160_, 1);
v___x_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2172_, 0, v_a_2171_);
return v___x_2172_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__3___boxed(lean_object* v_x_2173_, lean_object* v___y_2174_){
_start:
{
lean_object* v_res_2175_; 
v_res_2175_ = l_Std_Async_ContextAsync_race___redArg___lam__3(v_x_2173_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__6(lean_object* v___f_2176_, lean_object* v___f_2177_, lean_object* v_prio_2178_, lean_object* v___f_2179_, lean_object* v_x_2180_){
_start:
{
if (lean_obj_tag(v_x_2180_) == 0)
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2190_; 
lean_dec_ref(v___f_2179_);
lean_dec(v_prio_2178_);
lean_dec_ref(v___f_2177_);
lean_dec(v___f_2176_);
v_a_2182_ = lean_ctor_get(v_x_2180_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v_x_2180_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2184_ = v_x_2180_;
v_isShared_2185_ = v_isSharedCheck_2190_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v_x_2180_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2190_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
lean_object* v___x_2188_; 
v___x_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2187_);
return v___x_2188_;
}
}
}
else
{
lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2207_; 
v_a_2191_ = lean_ctor_get(v_x_2180_, 0);
v_isSharedCheck_2207_ = !lean_is_exclusive(v_x_2180_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2193_ = v_x_2180_;
v_isShared_2194_ = v_isSharedCheck_2207_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_dec(v_x_2180_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2207_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2195_; lean_object* v___f_2196_; lean_object* v___f_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; uint8_t v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2204_; 
v___x_2195_ = lean_box(2);
v___f_2196_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2196_, 0, v_a_2191_);
lean_closure_set(v___f_2196_, 1, v___x_2195_);
v___f_2197_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_2197_, 0, v___f_2176_);
lean_closure_set(v___f_2197_, 1, v___f_2177_);
lean_closure_set(v___f_2197_, 2, v___f_2196_);
v___x_2198_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2198_, 0, lean_box(0));
lean_closure_set(v___x_2198_, 1, v___f_2197_);
v___x_2199_ = lean_io_as_task(v___x_2198_, v_prio_2178_);
v___x_2200_ = lean_unsigned_to_nat(0u);
v___x_2201_ = 1;
v___x_2202_ = lean_task_bind(v___x_2199_, v___f_2179_, v___x_2200_, v___x_2201_);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 0, v___x_2202_);
v___x_2204_ = v___x_2193_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v___x_2202_);
v___x_2204_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
lean_object* v___x_2205_; 
v___x_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2204_);
return v___x_2205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__6___boxed(lean_object* v___f_2208_, lean_object* v___f_2209_, lean_object* v_prio_2210_, lean_object* v___f_2211_, lean_object* v_x_2212_, lean_object* v___y_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Std_Async_ContextAsync_race___redArg___lam__6(v___f_2208_, v___f_2209_, v_prio_2210_, v___f_2211_, v_x_2212_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__0(lean_object* v_y_2215_, lean_object* v_a_2216_){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = lean_apply_2(v_y_2215_, v_a_2216_, lean_box(0));
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__0___boxed(lean_object* v_y_2219_, lean_object* v_a_2220_, lean_object* v___y_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Std_Async_ContextAsync_race___redArg___lam__0(v_y_2219_, v_a_2220_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__5(lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_result_2225_){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2227_ = lean_io_promise_resolve(v_result_2225_, v_a_2223_);
v___x_2228_ = lean_box(2);
v___x_2229_ = l_Std_CancellationContext_cancel(v_a_2224_, v___x_2228_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__5___boxed(lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_result_2232_, lean_object* v___y_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Std_Async_ContextAsync_race___redArg___lam__5(v_a_2230_, v_a_2231_, v_result_2232_);
lean_dec(v_a_2230_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__4(lean_object* v_a_2235_, lean_object* v___f_2236_, lean_object* v___x_2237_, uint8_t v___x_2238_, lean_object* v___f_2239_, lean_object* v_x_2240_){
_start:
{
if (lean_obj_tag(v_x_2240_) == 0)
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2250_; 
lean_dec_ref(v___f_2239_);
lean_dec(v___x_2237_);
lean_dec_ref(v___f_2236_);
lean_dec_ref(v_a_2235_);
v_a_2242_ = lean_ctor_get(v_x_2240_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v_x_2240_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2244_ = v_x_2240_;
v_isShared_2245_ = v_isSharedCheck_2250_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v_x_2240_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2250_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2247_; 
if (v_isShared_2245_ == 0)
{
v___x_2247_ = v___x_2244_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2242_);
v___x_2247_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
lean_object* v___x_2248_; 
v___x_2248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
return v___x_2248_;
}
}
}
else
{
lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2260_; 
v_isSharedCheck_2260_ = !lean_is_exclusive(v_x_2240_);
if (v_isSharedCheck_2260_ == 0)
{
lean_object* v_unused_2261_; 
v_unused_2261_ = lean_ctor_get(v_x_2240_, 0);
lean_dec(v_unused_2261_);
v___x_2252_ = v_x_2240_;
v_isShared_2253_ = v_isSharedCheck_2260_;
goto v_resetjp_2251_;
}
else
{
lean_dec(v_x_2240_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2260_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___x_2254_; lean_object* v___x_2256_; 
lean_inc(v___x_2237_);
v___x_2254_ = l_BaseIO_chainTask___redArg(v_a_2235_, v___f_2236_, v___x_2237_, v___x_2238_);
if (v_isShared_2253_ == 0)
{
lean_ctor_set(v___x_2252_, 0, v___x_2254_);
v___x_2256_ = v___x_2252_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2254_);
v___x_2256_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2256_);
v___x_2258_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2237_, v___x_2238_, v___x_2257_, v___f_2239_);
return v___x_2258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__4___boxed(lean_object* v_a_2262_, lean_object* v___f_2263_, lean_object* v___x_2264_, lean_object* v___x_2265_, lean_object* v___f_2266_, lean_object* v_x_2267_, lean_object* v___y_2268_){
_start:
{
uint8_t v___x_4310__boxed_2269_; lean_object* v_res_2270_; 
v___x_4310__boxed_2269_ = lean_unbox(v___x_2265_);
v_res_2270_ = l_Std_Async_ContextAsync_race___redArg___lam__4(v_a_2262_, v___f_2263_, v___x_2264_, v___x_4310__boxed_2269_, v___f_2266_, v_x_2267_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__1(lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v___f_2273_, lean_object* v___f_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, lean_object* v_x_2277_){
_start:
{
if (lean_obj_tag(v_x_2277_) == 0)
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2287_; 
lean_dec_ref(v_a_2276_);
lean_dec_ref(v_a_2275_);
lean_dec_ref(v___f_2274_);
lean_dec_ref(v___f_2273_);
lean_dec_ref(v_a_2272_);
lean_dec_ref(v_a_2271_);
v_a_2279_ = lean_ctor_get(v_x_2277_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v_x_2277_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2281_ = v_x_2277_;
v_isShared_2282_ = v_isSharedCheck_2287_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v_x_2277_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2287_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2284_; 
if (v_isShared_2282_ == 0)
{
v___x_2284_ = v___x_2281_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2279_);
v___x_2284_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
lean_object* v___x_2285_; 
v___x_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
return v___x_2285_;
}
}
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2305_; 
v_a_2288_ = lean_ctor_get(v_x_2277_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v_x_2277_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2290_ = v_x_2277_;
v_isShared_2291_ = v_isSharedCheck_2305_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v_x_2277_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2305_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___f_2292_; lean_object* v___f_2293_; lean_object* v___f_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; lean_object* v___x_2297_; lean_object* v___f_2298_; lean_object* v___x_2299_; lean_object* v___x_2301_; 
lean_inc_n(v_a_2288_, 2);
v___f_2292_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__5___boxed), 4, 2);
lean_closure_set(v___f_2292_, 0, v_a_2288_);
lean_closure_set(v___f_2292_, 1, v_a_2271_);
v___f_2293_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__5___boxed), 4, 2);
lean_closure_set(v___f_2293_, 0, v_a_2288_);
lean_closure_set(v___f_2293_, 1, v_a_2272_);
v___f_2294_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__13___boxed), 5, 3);
lean_closure_set(v___f_2294_, 0, v_a_2288_);
lean_closure_set(v___f_2294_, 1, v___f_2273_);
lean_closure_set(v___f_2294_, 2, v___f_2274_);
v___x_2295_ = lean_unsigned_to_nat(0u);
v___x_2296_ = 0;
v___x_2297_ = lean_box(v___x_2296_);
v___f_2298_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_2298_, 0, v_a_2275_);
lean_closure_set(v___f_2298_, 1, v___f_2293_);
lean_closure_set(v___f_2298_, 2, v___x_2295_);
lean_closure_set(v___f_2298_, 3, v___x_2297_);
lean_closure_set(v___f_2298_, 4, v___f_2294_);
v___x_2299_ = l_BaseIO_chainTask___redArg(v_a_2276_, v___f_2292_, v___x_2295_, v___x_2296_);
if (v_isShared_2291_ == 0)
{
lean_ctor_set(v___x_2290_, 0, v___x_2299_);
v___x_2301_ = v___x_2290_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v___x_2299_);
v___x_2301_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
v___x_2303_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2295_, v___x_2296_, v___x_2302_, v___f_2298_);
return v___x_2303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__1___boxed(lean_object* v_a_2306_, lean_object* v_a_2307_, lean_object* v___f_2308_, lean_object* v___f_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_x_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Std_Async_ContextAsync_race___redArg___lam__1(v_a_2306_, v_a_2307_, v___f_2308_, v___f_2309_, v_a_2310_, v_a_2311_, v_x_2312_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__2(lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v___f_2317_, lean_object* v___f_2318_, lean_object* v_a_2319_, lean_object* v_x_2320_){
_start:
{
if (lean_obj_tag(v_x_2320_) == 0)
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2330_; 
lean_dec_ref(v_a_2319_);
lean_dec_ref(v___f_2318_);
lean_dec_ref(v___f_2317_);
lean_dec_ref(v_a_2316_);
lean_dec_ref(v_a_2315_);
v_a_2322_ = lean_ctor_get(v_x_2320_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v_x_2320_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2324_ = v_x_2320_;
v_isShared_2325_ = v_isSharedCheck_2330_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v_x_2320_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2330_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
lean_object* v___x_2328_; 
v___x_2328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2327_);
return v___x_2328_;
}
}
}
else
{
lean_object* v_a_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2344_; 
v_a_2331_ = lean_ctor_get(v_x_2320_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v_x_2320_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2333_ = v_x_2320_;
v_isShared_2334_ = v_isSharedCheck_2344_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_a_2331_);
lean_dec(v_x_2320_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2344_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___f_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2340_; 
v___f_2335_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__1___boxed), 8, 6);
lean_closure_set(v___f_2335_, 0, v_a_2315_);
lean_closure_set(v___f_2335_, 1, v_a_2316_);
lean_closure_set(v___f_2335_, 2, v___f_2317_);
lean_closure_set(v___f_2335_, 3, v___f_2318_);
lean_closure_set(v___f_2335_, 4, v_a_2331_);
lean_closure_set(v___f_2335_, 5, v_a_2319_);
v___x_2336_ = lean_unsigned_to_nat(0u);
v___x_2337_ = 0;
v___x_2338_ = lean_io_promise_new();
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 0, v___x_2338_);
v___x_2340_ = v___x_2333_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v___x_2338_);
v___x_2340_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2340_);
v___x_2342_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2336_, v___x_2337_, v___x_2341_, v___f_2335_);
return v___x_2342_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__2___boxed(lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v___f_2347_, lean_object* v___f_2348_, lean_object* v_a_2349_, lean_object* v_x_2350_, lean_object* v___y_2351_){
_start:
{
lean_object* v_res_2352_; 
v_res_2352_ = l_Std_Async_ContextAsync_race___redArg___lam__2(v_a_2345_, v_a_2346_, v___f_2347_, v___f_2348_, v_a_2349_, v_x_2350_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__7(lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v___f_2355_, lean_object* v___f_2356_, lean_object* v_a_2357_, lean_object* v___f_2358_, lean_object* v_x_2359_){
_start:
{
if (lean_obj_tag(v_x_2359_) == 0)
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2369_; 
lean_dec_ref(v___f_2358_);
lean_dec_ref(v___f_2356_);
lean_dec_ref(v___f_2355_);
lean_dec_ref(v_a_2354_);
lean_dec_ref(v_a_2353_);
v_a_2361_ = lean_ctor_get(v_x_2359_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v_x_2359_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2363_ = v_x_2359_;
v_isShared_2364_ = v_isSharedCheck_2369_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v_x_2359_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2369_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_a_2361_);
v___x_2366_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
lean_object* v___x_2367_; 
v___x_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2366_);
return v___x_2367_;
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2384_; 
v_a_2370_ = lean_ctor_get(v_x_2359_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v_x_2359_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2372_ = v_x_2359_;
v_isShared_2373_ = v_isSharedCheck_2384_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v_x_2359_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2384_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___f_2374_; lean_object* v___x_2375_; uint8_t v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2379_; 
v___f_2374_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__2___boxed), 7, 5);
lean_closure_set(v___f_2374_, 0, v_a_2353_);
lean_closure_set(v___f_2374_, 1, v_a_2354_);
lean_closure_set(v___f_2374_, 2, v___f_2355_);
lean_closure_set(v___f_2374_, 3, v___f_2356_);
lean_closure_set(v___f_2374_, 4, v_a_2370_);
v___x_2375_ = lean_unsigned_to_nat(0u);
v___x_2376_ = 0;
lean_inc_ref(v_a_2357_);
v___x_2377_ = l_Std_CancellationContext_fork(v_a_2357_);
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 0, v___x_2377_);
v___x_2379_ = v___x_2372_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v___x_2377_);
v___x_2379_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2379_);
v___x_2381_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2375_, v___x_2376_, v___x_2380_, v___f_2358_);
v___x_2382_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2375_, v___x_2376_, v___x_2381_, v___f_2374_);
return v___x_2382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__7___boxed(lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v___f_2387_, lean_object* v___f_2388_, lean_object* v_a_2389_, lean_object* v___f_2390_, lean_object* v_x_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_Std_Async_ContextAsync_race___redArg___lam__7(v_a_2385_, v_a_2386_, v___f_2387_, v___f_2388_, v_a_2389_, v___f_2390_, v_x_2391_);
lean_dec_ref(v_a_2389_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__8(lean_object* v_y_2394_, lean_object* v___f_2395_, lean_object* v_prio_2396_, lean_object* v___f_2397_, lean_object* v_a_2398_, lean_object* v___f_2399_, lean_object* v___f_2400_, lean_object* v_a_2401_, lean_object* v___f_2402_, lean_object* v_x_2403_){
_start:
{
if (lean_obj_tag(v_x_2403_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2413_; 
lean_dec_ref(v___f_2402_);
lean_dec_ref(v___f_2400_);
lean_dec_ref(v___f_2399_);
lean_dec_ref(v_a_2398_);
lean_dec_ref(v___f_2397_);
lean_dec(v_prio_2396_);
lean_dec(v___f_2395_);
lean_dec_ref(v_y_2394_);
v_a_2405_ = lean_ctor_get(v_x_2403_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v_x_2403_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2407_ = v_x_2403_;
v_isShared_2408_ = v_isSharedCheck_2413_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v_x_2403_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2413_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2410_; 
if (v_isShared_2408_ == 0)
{
v___x_2410_ = v___x_2407_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_a_2405_);
v___x_2410_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
lean_object* v___x_2411_; 
v___x_2411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2410_);
return v___x_2411_;
}
}
}
else
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2430_; 
v_a_2414_ = lean_ctor_get(v_x_2403_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v_x_2403_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2416_ = v_x_2403_;
v_isShared_2417_ = v_isSharedCheck_2430_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v_x_2403_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2430_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___f_2418_; lean_object* v___f_2419_; lean_object* v___f_2420_; lean_object* v___x_2421_; uint8_t v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2425_; 
lean_inc(v_a_2414_);
v___f_2418_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2418_, 0, v_y_2394_);
lean_closure_set(v___f_2418_, 1, v_a_2414_);
v___f_2419_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_2419_, 0, v___f_2395_);
lean_closure_set(v___f_2419_, 1, v___f_2418_);
lean_closure_set(v___f_2419_, 2, v_prio_2396_);
lean_closure_set(v___f_2419_, 3, v___f_2397_);
lean_inc_ref_n(v_a_2401_, 2);
v___f_2420_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__7___boxed), 8, 6);
lean_closure_set(v___f_2420_, 0, v_a_2414_);
lean_closure_set(v___f_2420_, 1, v_a_2398_);
lean_closure_set(v___f_2420_, 2, v___f_2399_);
lean_closure_set(v___f_2420_, 3, v___f_2400_);
lean_closure_set(v___f_2420_, 4, v_a_2401_);
lean_closure_set(v___f_2420_, 5, v___f_2419_);
v___x_2421_ = lean_unsigned_to_nat(0u);
v___x_2422_ = 0;
v___x_2423_ = l_Std_CancellationContext_fork(v_a_2401_);
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 0, v___x_2423_);
v___x_2425_ = v___x_2416_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v___x_2423_);
v___x_2425_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2425_);
v___x_2427_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2421_, v___x_2422_, v___x_2426_, v___f_2402_);
v___x_2428_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2421_, v___x_2422_, v___x_2427_, v___f_2420_);
return v___x_2428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__8___boxed(lean_object* v_y_2431_, lean_object* v___f_2432_, lean_object* v_prio_2433_, lean_object* v___f_2434_, lean_object* v_a_2435_, lean_object* v___f_2436_, lean_object* v___f_2437_, lean_object* v_a_2438_, lean_object* v___f_2439_, lean_object* v_x_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Std_Async_ContextAsync_race___redArg___lam__8(v_y_2431_, v___f_2432_, v_prio_2433_, v___f_2434_, v_a_2435_, v___f_2436_, v___f_2437_, v_a_2438_, v___f_2439_, v_x_2440_);
lean_dec_ref(v_a_2438_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__9(lean_object* v_x_2443_, lean_object* v___f_2444_, lean_object* v_prio_2445_, lean_object* v___f_2446_, lean_object* v_y_2447_, lean_object* v___f_2448_, lean_object* v___f_2449_, lean_object* v___f_2450_, lean_object* v___f_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_x_2454_){
_start:
{
if (lean_obj_tag(v_x_2454_) == 0)
{
lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2464_; 
lean_dec_ref(v_a_2453_);
lean_dec_ref(v___f_2451_);
lean_dec_ref(v___f_2450_);
lean_dec_ref(v___f_2449_);
lean_dec(v___f_2448_);
lean_dec_ref(v_y_2447_);
lean_dec_ref(v___f_2446_);
lean_dec(v_prio_2445_);
lean_dec(v___f_2444_);
lean_dec_ref(v_x_2443_);
v_a_2456_ = lean_ctor_get(v_x_2454_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v_x_2454_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2458_ = v_x_2454_;
v_isShared_2459_ = v_isSharedCheck_2464_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_dec(v_x_2454_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2464_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2461_; 
if (v_isShared_2459_ == 0)
{
v___x_2461_ = v___x_2458_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v_a_2456_);
v___x_2461_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
lean_object* v___x_2462_; 
v___x_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
return v___x_2462_;
}
}
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2480_; 
v_a_2465_ = lean_ctor_get(v_x_2454_, 0);
v_isSharedCheck_2480_ = !lean_is_exclusive(v_x_2454_);
if (v_isSharedCheck_2480_ == 0)
{
v___x_2467_ = v_x_2454_;
v_isShared_2468_ = v_isSharedCheck_2480_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v_x_2454_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2480_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___f_2469_; lean_object* v___f_2470_; lean_object* v___f_2471_; lean_object* v___x_2472_; uint8_t v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2476_; 
lean_inc(v_a_2465_);
v___f_2469_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__10___boxed), 3, 2);
lean_closure_set(v___f_2469_, 0, v_x_2443_);
lean_closure_set(v___f_2469_, 1, v_a_2465_);
lean_inc(v_prio_2445_);
v___f_2470_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_2470_, 0, v___f_2444_);
lean_closure_set(v___f_2470_, 1, v___f_2469_);
lean_closure_set(v___f_2470_, 2, v_prio_2445_);
lean_closure_set(v___f_2470_, 3, v___f_2446_);
lean_inc_ref(v_a_2452_);
v___f_2471_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__8___boxed), 11, 9);
lean_closure_set(v___f_2471_, 0, v_y_2447_);
lean_closure_set(v___f_2471_, 1, v___f_2448_);
lean_closure_set(v___f_2471_, 2, v_prio_2445_);
lean_closure_set(v___f_2471_, 3, v___f_2449_);
lean_closure_set(v___f_2471_, 4, v_a_2465_);
lean_closure_set(v___f_2471_, 5, v___f_2450_);
lean_closure_set(v___f_2471_, 6, v___f_2451_);
lean_closure_set(v___f_2471_, 7, v_a_2452_);
lean_closure_set(v___f_2471_, 8, v___f_2470_);
v___x_2472_ = lean_unsigned_to_nat(0u);
v___x_2473_ = 0;
v___x_2474_ = l_Std_CancellationContext_fork(v_a_2453_);
if (v_isShared_2468_ == 0)
{
lean_ctor_set(v___x_2467_, 0, v___x_2474_);
v___x_2476_ = v___x_2467_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2474_);
v___x_2476_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
v___x_2478_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2472_, v___x_2473_, v___x_2477_, v___f_2471_);
return v___x_2478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__9___boxed(lean_object* v_x_2481_, lean_object* v___f_2482_, lean_object* v_prio_2483_, lean_object* v___f_2484_, lean_object* v_y_2485_, lean_object* v___f_2486_, lean_object* v___f_2487_, lean_object* v___f_2488_, lean_object* v___f_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_, lean_object* v_x_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Std_Async_ContextAsync_race___redArg___lam__9(v_x_2481_, v___f_2482_, v_prio_2483_, v___f_2484_, v_y_2485_, v___f_2486_, v___f_2487_, v___f_2488_, v___f_2489_, v_a_2490_, v_a_2491_, v_x_2492_);
lean_dec_ref(v_a_2490_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__10(lean_object* v_x_2495_, lean_object* v___f_2496_, lean_object* v_prio_2497_, lean_object* v___f_2498_, lean_object* v_y_2499_, lean_object* v___f_2500_, lean_object* v___f_2501_, lean_object* v___f_2502_, lean_object* v___f_2503_, lean_object* v_a_2504_, lean_object* v_x_2505_){
_start:
{
if (lean_obj_tag(v_x_2505_) == 0)
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2515_; 
lean_dec_ref(v___f_2503_);
lean_dec_ref(v___f_2502_);
lean_dec_ref(v___f_2501_);
lean_dec(v___f_2500_);
lean_dec_ref(v_y_2499_);
lean_dec_ref(v___f_2498_);
lean_dec(v_prio_2497_);
lean_dec(v___f_2496_);
lean_dec_ref(v_x_2495_);
v_a_2507_ = lean_ctor_get(v_x_2505_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v_x_2505_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2509_ = v_x_2505_;
v_isShared_2510_ = v_isSharedCheck_2515_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v_x_2505_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2515_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
lean_object* v___x_2513_; 
v___x_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2512_);
return v___x_2513_;
}
}
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2529_; 
v_a_2516_ = lean_ctor_get(v_x_2505_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v_x_2505_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2518_ = v_x_2505_;
v_isShared_2519_ = v_isSharedCheck_2529_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v_x_2505_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2529_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___f_2520_; lean_object* v___x_2521_; uint8_t v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2525_; 
lean_inc(v_a_2516_);
lean_inc_ref(v_a_2504_);
v___f_2520_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__9___boxed), 13, 11);
lean_closure_set(v___f_2520_, 0, v_x_2495_);
lean_closure_set(v___f_2520_, 1, v___f_2496_);
lean_closure_set(v___f_2520_, 2, v_prio_2497_);
lean_closure_set(v___f_2520_, 3, v___f_2498_);
lean_closure_set(v___f_2520_, 4, v_y_2499_);
lean_closure_set(v___f_2520_, 5, v___f_2500_);
lean_closure_set(v___f_2520_, 6, v___f_2501_);
lean_closure_set(v___f_2520_, 7, v___f_2502_);
lean_closure_set(v___f_2520_, 8, v___f_2503_);
lean_closure_set(v___f_2520_, 9, v_a_2504_);
lean_closure_set(v___f_2520_, 10, v_a_2516_);
v___x_2521_ = lean_unsigned_to_nat(0u);
v___x_2522_ = 0;
v___x_2523_ = l_Std_CancellationContext_fork(v_a_2516_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 0, v___x_2523_);
v___x_2525_ = v___x_2518_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v___x_2523_);
v___x_2525_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
v___x_2527_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2521_, v___x_2522_, v___x_2526_, v___f_2520_);
return v___x_2527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__10___boxed(lean_object* v_x_2530_, lean_object* v___f_2531_, lean_object* v_prio_2532_, lean_object* v___f_2533_, lean_object* v_y_2534_, lean_object* v___f_2535_, lean_object* v___f_2536_, lean_object* v___f_2537_, lean_object* v___f_2538_, lean_object* v_a_2539_, lean_object* v_x_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l_Std_Async_ContextAsync_race___redArg___lam__10(v_x_2530_, v___f_2531_, v_prio_2532_, v___f_2533_, v_y_2534_, v___f_2535_, v___f_2536_, v___f_2537_, v___f_2538_, v_a_2539_, v_x_2540_);
lean_dec_ref(v_a_2539_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg(lean_object* v_x_2544_, lean_object* v_y_2545_, lean_object* v_prio_2546_, lean_object* v_a_2547_){
_start:
{
lean_object* v___f_2549_; lean_object* v___f_2550_; lean_object* v___f_2551_; lean_object* v___f_2552_; lean_object* v___f_2553_; lean_object* v___x_2554_; uint8_t v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___f_2549_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_2550_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_2551_ = ((lean_object*)(l_Std_Async_ContextAsync_raceAll___redArg___closed__0));
v___f_2552_ = ((lean_object*)(l_Std_Async_ContextAsync_race___redArg___closed__0));
lean_inc_ref_n(v_a_2547_, 2);
v___f_2553_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__10___boxed), 12, 10);
lean_closure_set(v___f_2553_, 0, v_x_2544_);
lean_closure_set(v___f_2553_, 1, v___f_2550_);
lean_closure_set(v___f_2553_, 2, v_prio_2546_);
lean_closure_set(v___f_2553_, 3, v___f_2549_);
lean_closure_set(v___f_2553_, 4, v_y_2545_);
lean_closure_set(v___f_2553_, 5, v___f_2550_);
lean_closure_set(v___f_2553_, 6, v___f_2549_);
lean_closure_set(v___f_2553_, 7, v___f_2551_);
lean_closure_set(v___f_2553_, 8, v___f_2552_);
lean_closure_set(v___f_2553_, 9, v_a_2547_);
v___x_2554_ = lean_unsigned_to_nat(0u);
v___x_2555_ = 0;
v___x_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2556_, 0, v_a_2547_);
v___x_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2556_);
v___x_2558_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2554_, v___x_2555_, v___x_2557_, v___f_2553_);
return v___x_2558_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___boxed(lean_object* v_x_2559_, lean_object* v_y_2560_, lean_object* v_prio_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_){
_start:
{
lean_object* v_res_2564_; 
v_res_2564_ = l_Std_Async_ContextAsync_race___redArg(v_x_2559_, v_y_2560_, v_prio_2561_, v_a_2562_);
lean_dec_ref(v_a_2562_);
return v_res_2564_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race(lean_object* v_00_u03b1_2565_, lean_object* v_inst_2566_, lean_object* v_x_2567_, lean_object* v_y_2568_, lean_object* v_prio_2569_, lean_object* v_a_2570_){
_start:
{
lean_object* v___f_2572_; lean_object* v___f_2573_; lean_object* v___f_2574_; lean_object* v___f_2575_; lean_object* v___f_2576_; lean_object* v___x_2577_; uint8_t v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___f_2572_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_2573_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_2574_ = ((lean_object*)(l_Std_Async_ContextAsync_raceAll___redArg___closed__0));
v___f_2575_ = ((lean_object*)(l_Std_Async_ContextAsync_race___redArg___closed__0));
lean_inc_ref_n(v_a_2570_, 2);
v___f_2576_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__10___boxed), 12, 10);
lean_closure_set(v___f_2576_, 0, v_x_2567_);
lean_closure_set(v___f_2576_, 1, v___f_2573_);
lean_closure_set(v___f_2576_, 2, v_prio_2569_);
lean_closure_set(v___f_2576_, 3, v___f_2572_);
lean_closure_set(v___f_2576_, 4, v_y_2568_);
lean_closure_set(v___f_2576_, 5, v___f_2573_);
lean_closure_set(v___f_2576_, 6, v___f_2572_);
lean_closure_set(v___f_2576_, 7, v___f_2574_);
lean_closure_set(v___f_2576_, 8, v___f_2575_);
lean_closure_set(v___f_2576_, 9, v_a_2570_);
v___x_2577_ = lean_unsigned_to_nat(0u);
v___x_2578_ = 0;
v___x_2579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2579_, 0, v_a_2570_);
v___x_2580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2579_);
v___x_2581_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2577_, v___x_2578_, v___x_2580_, v___f_2576_);
return v___x_2581_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___boxed(lean_object* v_00_u03b1_2582_, lean_object* v_inst_2583_, lean_object* v_x_2584_, lean_object* v_y_2585_, lean_object* v_prio_2586_, lean_object* v_a_2587_, lean_object* v_a_2588_){
_start:
{
lean_object* v_res_2589_; 
v_res_2589_ = l_Std_Async_ContextAsync_race(v_00_u03b1_2582_, v_inst_2583_, v_x_2584_, v_y_2585_, v_prio_2586_, v_a_2587_);
lean_dec_ref(v_a_2587_);
lean_dec(v_inst_2583_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Selector_cancelled(lean_object* v_a_2590_){
_start:
{
lean_object* v___f_2592_; lean_object* v___x_2593_; uint8_t v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___f_2592_ = ((lean_object*)(l_Std_Async_ContextAsync_doneSelector___closed__0));
v___x_2593_ = lean_unsigned_to_nat(0u);
v___x_2594_ = 0;
lean_inc_ref(v_a_2590_);
v___x_2595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2595_, 0, v_a_2590_);
v___x_2596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2595_);
v___x_2597_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2593_, v___x_2594_, v___x_2596_, v___f_2592_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Selector_cancelled___boxed(lean_object* v_a_2598_, lean_object* v_a_2599_){
_start:
{
lean_object* v_res_2600_; 
v_res_2600_ = l_Std_Async_Selector_cancelled(v_a_2598_);
lean_dec_ref(v_a_2598_);
return v_res_2600_;
}
}
lean_object* runtime_initialize_Std_Internal_UV(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_Timer(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_CancellationContext(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Async_ContextAsync(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Internal_UV(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Timer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_CancellationContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Async_ContextAsync_instMonad = _init_l_Std_Async_ContextAsync_instMonad();
lean_mark_persistent(l_Std_Async_ContextAsync_instMonad);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Async_ContextAsync(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Internal_UV(uint8_t builtin);
lean_object* initialize_Std_Async_Timer(uint8_t builtin);
lean_object* initialize_Std_Sync_CancellationContext(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Async_ContextAsync(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Internal_UV(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Timer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_CancellationContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Async_ContextAsync(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Std.Async.Basic
// Imports: public import Init.System.Promise public import Init.While
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
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_instMonadBaseIO___aux__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_liftM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_MonadExcept_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_io_get_task_state(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Functor_mapRev___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0 = (const lean_object*)&l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateRefT_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateRefT_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0 = (const lean_object*)&l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_pure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_block(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ETask_ofPurePromise___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_pure, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_ETask_ofPurePromise___redArg___closed__0 = (const lean_object*)&l_Std_Async_ETask_ofPurePromise___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_ETask_getState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_getState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_ETask_getState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_getState___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ETask_instFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instFunctor___redArg___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ETask_instFunctor___redArg___closed__0 = (const lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_ETask_instFunctor___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instFunctor___redArg___lam__0, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_ETask_instFunctor___redArg___closed__1 = (const lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_ETask_instFunctor___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__0_value),((lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__1_value)}};
static const lean_object* l_Std_Async_ETask_instFunctor___redArg___closed__2 = (const lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg();
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_ETask_instFunctor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ETask_instFunctor___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ETask_instMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instMonad___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ETask_instMonad___redArg___closed__0 = (const lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_ETask_instMonad___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instMonad___redArg___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ETask_instMonad___redArg___closed__1 = (const lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__1_value;
static const lean_closure_object l_Std_Async_ETask_instMonad___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instMonad___redArg___lam__5, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ETask_instMonad___redArg___closed__2 = (const lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__2_value;
static const lean_closure_object l_Std_Async_ETask_instMonad___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__0_value),((lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__2_value)} };
static const lean_object* l_Std_Async_ETask_instMonad___redArg___closed__3 = (const lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__3_value;
static const lean_closure_object l_Std_Async_ETask_instMonad___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instMonad___redArg___lam__9, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ETask_instMonad___redArg___closed__4 = (const lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__4_value;
static lean_once_cell_t l_Std_Async_ETask_instMonad___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ETask_instMonad___redArg___closed__5;
static lean_once_cell_t l_Std_Async_ETask_instMonad___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ETask_instMonad___redArg___closed__6;
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg();
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_ETask_instMonad___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ETask_instMonad___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_pure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_AsyncTask_getState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_getState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_AsyncTask_getState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_getState___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_pure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_pure_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ofTask_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ofTask_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_toTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_toTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_get___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_Async_MaybeTask_joinTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_joinTask___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_joinTask___redArg___closed__0 = (const lean_object*)&l_Std_Async_MaybeTask_joinTask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_MaybeTask_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instFunctor___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_instFunctor___closed__0 = (const lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__0_value;
static const lean_closure_object l_Std_Async_MaybeTask_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instFunctor___lam__1, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__0_value)} };
static const lean_object* l_Std_Async_MaybeTask_instFunctor___closed__1 = (const lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__1_value;
static const lean_ctor_object l_Std_Async_MaybeTask_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__0_value),((lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__1_value)}};
static const lean_object* l_Std_Async_MaybeTask_instFunctor___closed__2 = (const lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Async_MaybeTask_instFunctor = (const lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__10(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_MaybeTask_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instMonad___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__0 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__0_value;
static const lean_closure_object l_Std_Async_MaybeTask_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__1 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__1_value;
static const lean_closure_object l_Std_Async_MaybeTask_instMonad___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instMonad___lam__5, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__2 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__2_value;
static const lean_closure_object l_Std_Async_MaybeTask_instMonad___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instMonad___lam__7, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__2_value)} };
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__3 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__3_value;
static const lean_closure_object l_Std_Async_MaybeTask_instMonad___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instMonad___lam__10, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__4 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__4_value;
static const lean_ctor_object l_Std_Async_MaybeTask_instMonad___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__2_value),((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__0_value),((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__1_value),((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__3_value),((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__4_value)}};
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__5 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__5_value;
static const lean_ctor_object l_Std_Async_MaybeTask_instMonad___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__5_value),((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__2_value)}};
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__6 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Async_MaybeTask_instMonad = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instFunctor___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instFunctor___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__0_value;
static const lean_closure_object l_Std_Async_BaseAsync_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instFunctor___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__0_value)} };
static const lean_object* l_Std_Async_BaseAsync_instFunctor___closed__1 = (const lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__1_value;
static const lean_ctor_object l_Std_Async_BaseAsync_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__0_value),((lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__1_value)}};
static const lean_object* l_Std_Async_BaseAsync_instFunctor___closed__2 = (const lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instFunctor = (const lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonad___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__0_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonad___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__1 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__1_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonad___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonad___lam__5___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__1_value)} };
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__2 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__2_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonad___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonad___lam__7___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__3 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__3_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonad___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_pure___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__4 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__4_value;
static const lean_ctor_object l_Std_Async_BaseAsync_instMonad___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__2_value),((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__4_value),((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__0_value),((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__2_value),((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__3_value)}};
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__5 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__5_value;
static const lean_ctor_object l_Std_Async_BaseAsync_instMonad___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__5_value),((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__1_value)}};
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__6 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instMonad = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__6_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonadLiftBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_lift___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonadLiftBaseIO___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instMonadLiftBaseIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instMonadLiftBaseIO = (const lean_object*)&l_Std_Async_BaseAsync_instMonadLiftBaseIO___closed__0_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonadAwaitTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_await___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonadAwaitTask___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instMonadAwaitTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instMonadAwaitTask = (const lean_object*)&l_Std_Async_BaseAsync_instMonadAwaitTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_instMonadAsyncTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_joinTask___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instMonadAsyncTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask = (const lean_object*)&l_Std_Async_BaseAsync_instMonadAsyncTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_instMonadFinally___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonadFinally___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonadFinally___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instMonadFinally___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instMonadFinally = (const lean_object*)&l_Std_Async_BaseAsync_instMonadFinally___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_race___redArg___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_race___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_await___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__6_value)} };
static const lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_Async_EAsync_asTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_asTask___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_asTask___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_asTask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instFunctor___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instFunctor___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_EAsync_instFunctor___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instFunctor___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instFunctor___redArg___closed__1 = (const lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_EAsync_instFunctor___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__0_value),((lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__1_value)}};
static const lean_object* l_Std_Async_EAsync_instFunctor___redArg___closed__2 = (const lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instFunctor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instFunctor___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonad___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_EAsync_instMonad___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonad___redArg___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__1 = (const lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__1_value;
static const lean_closure_object l_Std_Async_EAsync_instMonad___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonad___redArg___lam__5___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__2 = (const lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__2_value;
static const lean_closure_object l_Std_Async_EAsync_instMonad___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonad___redArg___lam__7___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__3 = (const lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__3_value;
static lean_once_cell_t l_Std_Async_EAsync_instMonad___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__4;
static const lean_closure_object l_Std_Async_EAsync_instMonad___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_bind___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__5 = (const lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__5_value;
static lean_once_cell_t l_Std_Async_EAsync_instMonad___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__6;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonad___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonad___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad(lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_lift___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadExcept___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadExcept___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_EAsync_instMonadExcept___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_throw___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___closed__1 = (const lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_EAsync_instMonadExcept___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__1_value),((lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___closed__2 = (const lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadExcept___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadExcept___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept(lean_object*);
static const lean_ctor_object l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__1_value),((lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadExceptOf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadExceptOf___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadFinally___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadFinally___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instOrElse___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instOrElse___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instOrElse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instOrElse___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadAwaitTask___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadAwaitTask___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadAwaitPromise___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_EAsync_asTask___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadAsyncETask___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadAsyncETask___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0_value;
static const lean_closure_object l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1 = (const lean_object*)&l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError = (const lean_object*)&l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_race___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_race___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_race___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_EAsync_race___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_race___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_race___redArg___closed__1 = (const lean_object*)&l_Std_Async_EAsync_race___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0_value;
static lean_once_cell_t l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_block(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_block___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_ofIOTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_ofIOTask___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Async_ofIOTask___redArg___closed__0 = (const lean_object*)&l_Std_Async_Async_ofIOTask___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_Async_ofIOTask___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_ofIOTask___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_Async_ofIOTask___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_Async_ofIOTask___redArg___closed__1 = (const lean_object*)&l_Std_Async_Async_ofIOTask___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Async_Async_instMonadAsyncAsyncTask = (const lean_object*)&l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_instMonadAwaitAsyncTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___closed__0 = (const lean_object*)&l_Std_Async_Async_instMonadAwaitAsyncTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask = (const lean_object*)&l_Std_Async_Async_instMonadAwaitAsyncTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_instMonadAwaitPromise___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_instMonadAwaitPromise___aux__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Async_instMonadAwaitPromise___closed__0 = (const lean_object*)&l_Std_Async_Async_instMonadAwaitPromise___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_Async_instMonadAwaitPromise = (const lean_object*)&l_Std_Async_Async_instMonadAwaitPromise___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_race___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Async_race___redArg___closed__0 = (const lean_object*)&l_Std_Async_Async_race___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_Async_race___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_race___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Async_race___redArg___closed__1 = (const lean_object*)&l_Std_Async_Async_race___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_concurrentlyAll___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Async_Async_concurrentlyAll___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Async_Async_concurrentlyAll___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_Async_concurrentlyAll___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_background___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_background(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__0(lean_object* v___y_1_, lean_object* v_toPure_2_, lean_object* v_a_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_a_3_);
lean_ctor_set(v___x_4_, 1, v___y_1_);
v___x_5_ = lean_apply_2(v_toPure_2_, lean_box(0), v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1(lean_object* v_inst_6_, lean_object* v_inst_7_, lean_object* v_00_u03b1_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_toApplicative_11_; lean_object* v_toBind_12_; lean_object* v_toPure_13_; lean_object* v___x_14_; lean_object* v___f_15_; lean_object* v___x_16_; 
v_toApplicative_11_ = lean_ctor_get(v_inst_6_, 0);
lean_inc_ref(v_toApplicative_11_);
v_toBind_12_ = lean_ctor_get(v_inst_6_, 1);
lean_inc(v_toBind_12_);
lean_dec_ref(v_inst_6_);
v_toPure_13_ = lean_ctor_get(v_toApplicative_11_, 1);
lean_inc(v_toPure_13_);
lean_dec_ref(v_toApplicative_11_);
v___x_14_ = lean_apply_2(v_inst_7_, lean_box(0), v___y_9_);
v___f_15_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__0), 3, 2);
lean_closure_set(v___f_15_, 0, v___y_10_);
lean_closure_set(v___f_15_, 1, v_toPure_13_);
v___x_16_ = lean_apply_4(v_toBind_12_, lean_box(0), lean_box(0), v___x_14_, v___f_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg(lean_object* v_inst_17_, lean_object* v_inst_18_){
_start:
{
lean_object* v___f_19_; 
v___f_19_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_19_, 0, v_inst_17_);
lean_closure_set(v___f_19_, 1, v_inst_18_);
return v___f_19_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad(lean_object* v_m_20_, lean_object* v_t_21_, lean_object* v_n_22_, lean_object* v_inst_23_, lean_object* v_inst_24_){
_start:
{
lean_object* v___f_25_; 
v___f_25_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_25_, 0, v_inst_23_);
lean_closure_set(v___f_25_, 1, v_inst_24_);
return v___f_25_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__0(lean_object* v_a_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_27_, 0, v_a_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__1(lean_object* v_inst_28_, lean_object* v_inst_29_, lean_object* v___f_30_, lean_object* v_00_u03b1_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_toApplicative_33_; lean_object* v_toFunctor_34_; lean_object* v_map_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_toApplicative_33_ = lean_ctor_get(v_inst_28_, 0);
lean_inc_ref(v_toApplicative_33_);
lean_dec_ref(v_inst_28_);
v_toFunctor_34_ = lean_ctor_get(v_toApplicative_33_, 0);
lean_inc_ref(v_toFunctor_34_);
lean_dec_ref(v_toApplicative_33_);
v_map_35_ = lean_ctor_get(v_toFunctor_34_, 0);
lean_inc(v_map_35_);
lean_dec_ref(v_toFunctor_34_);
v___x_36_ = lean_apply_2(v_inst_29_, lean_box(0), v___y_32_);
v___x_37_ = lean_apply_4(v_map_35_, lean_box(0), lean_box(0), v___f_30_, v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg(lean_object* v_inst_39_, lean_object* v_inst_40_){
_start:
{
lean_object* v___f_41_; lean_object* v___f_42_; 
v___f_41_ = ((lean_object*)(l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0));
v___f_42_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__1), 5, 3);
lean_closure_set(v___f_42_, 0, v_inst_39_);
lean_closure_set(v___f_42_, 1, v_inst_40_);
lean_closure_set(v___f_42_, 2, v___f_41_);
return v___f_42_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad(lean_object* v_m_43_, lean_object* v_t_44_, lean_object* v_n_45_, lean_object* v_inst_46_, lean_object* v_inst_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Std_Async_instMonadAwaitExceptTOfMonad___redArg(v_inst_46_, v_inst_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0(lean_object* v_inst_49_, lean_object* v_00_u03b1_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_apply_2(v_inst_49_, lean_box(0), v___y_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed(lean_object* v_inst_54_, lean_object* v_00_u03b1_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0(v_inst_54_, v_00_u03b1_55_, v___y_56_, v___y_57_);
lean_dec(v___y_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg(lean_object* v_inst_59_){
_start:
{
lean_object* v___f_60_; 
v___f_60_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_60_, 0, v_inst_59_);
return v___f_60_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad(lean_object* v_m_61_, lean_object* v_t_62_, lean_object* v_n_63_, lean_object* v_inst_64_, lean_object* v_inst_65_){
_start:
{
lean_object* v___f_66_; 
v___f_66_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_66_, 0, v_inst_65_);
return v___f_66_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___boxed(lean_object* v_m_67_, lean_object* v_t_68_, lean_object* v_n_69_, lean_object* v_inst_70_, lean_object* v_inst_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Std_Async_instMonadAwaitReaderTOfMonad(v_m_67_, v_t_68_, v_n_69_, v_inst_70_, v_inst_71_);
lean_dec_ref(v_inst_70_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateRefT_x27___redArg(lean_object* v_inst_73_){
_start:
{
lean_object* v___f_74_; 
v___f_74_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_74_, 0, v_inst_73_);
return v___f_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateRefT_x27(lean_object* v_t_75_, lean_object* v_m_76_, lean_object* v_s_77_, lean_object* v_n_78_, lean_object* v_inst_79_){
_start:
{
lean_object* v___f_80_; 
v___f_80_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_80_, 0, v_inst_79_);
return v___f_80_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad__1___redArg(lean_object* v_inst_81_, lean_object* v_inst_82_){
_start:
{
lean_object* v___f_83_; 
v___f_83_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_83_, 0, v_inst_81_);
lean_closure_set(v___f_83_, 1, v_inst_82_);
return v___f_83_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad__1(lean_object* v_m_84_, lean_object* v_t_85_, lean_object* v_s_86_, lean_object* v_inst_87_, lean_object* v_inst_88_){
_start:
{
lean_object* v___f_89_; 
v___f_89_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_89_, 0, v_inst_87_);
lean_closure_set(v___f_89_, 1, v_inst_88_);
return v___f_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT___redArg___lam__0(lean_object* v_inst_90_, lean_object* v_00_u03b1_91_, lean_object* v_p_92_, lean_object* v_prio_93_, lean_object* v___y_94_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_apply_1(v_p_92_, v___y_94_);
v___x_96_ = lean_apply_3(v_inst_90_, lean_box(0), v___x_95_, v_prio_93_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT___redArg(lean_object* v_inst_97_){
_start:
{
lean_object* v___f_98_; 
v___f_98_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncReaderT___redArg___lam__0), 5, 1);
lean_closure_set(v___f_98_, 0, v_inst_97_);
return v___f_98_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT(lean_object* v_t_99_, lean_object* v_m_100_, lean_object* v_n_101_, lean_object* v_inst_102_){
_start:
{
lean_object* v___f_103_; 
v___f_103_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncReaderT___redArg___lam__0), 5, 1);
lean_closure_set(v___f_103_, 0, v_inst_102_);
return v___f_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateRefT_x27___redArg(lean_object* v_inst_104_){
_start:
{
lean_object* v___f_105_; 
v___f_105_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncReaderT___redArg___lam__0), 5, 1);
lean_closure_set(v___f_105_, 0, v_inst_104_);
return v___f_105_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateRefT_x27(lean_object* v_t_106_, lean_object* v_m_107_, lean_object* v_s_108_, lean_object* v_n_109_, lean_object* v_inst_110_){
_start:
{
lean_object* v___f_111_; 
v___f_111_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncReaderT___redArg___lam__0), 5, 1);
lean_closure_set(v___f_111_, 0, v_inst_110_);
return v___f_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0(lean_object* v_self_112_){
_start:
{
lean_object* v_fst_113_; 
v_fst_113_ = lean_ctor_get(v_self_112_, 0);
lean_inc(v_fst_113_);
return v_fst_113_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0___boxed(lean_object* v_self_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0(v_self_114_);
lean_dec_ref(v_self_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__1(lean_object* v_inst_116_, lean_object* v___f_117_, lean_object* v_s_118_, lean_object* v_toPure_119_, lean_object* v_t_120_){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_121_ = l_Functor_mapRev___redArg(v_inst_116_, v_t_120_, v___f_117_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v_s_118_);
v___x_123_ = lean_apply_2(v_toPure_119_, lean_box(0), v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__2(lean_object* v_inst_124_, lean_object* v___f_125_, lean_object* v_toPure_126_, lean_object* v_inst_127_, lean_object* v_toBind_128_, lean_object* v_00_u03b1_129_, lean_object* v_p_130_, lean_object* v_prio_131_, lean_object* v_s_132_){
_start:
{
lean_object* v___f_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
lean_inc(v_s_132_);
v___f_133_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_133_, 0, v_inst_124_);
lean_closure_set(v___f_133_, 1, v___f_125_);
lean_closure_set(v___f_133_, 2, v_s_132_);
lean_closure_set(v___f_133_, 3, v_toPure_126_);
v___x_134_ = lean_apply_1(v_p_130_, v_s_132_);
v___x_135_ = lean_apply_3(v_inst_127_, lean_box(0), v___x_134_, v_prio_131_);
v___x_136_ = lean_apply_4(v_toBind_128_, lean_box(0), lean_box(0), v___x_135_, v___f_133_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg(lean_object* v_inst_138_, lean_object* v_inst_139_, lean_object* v_inst_140_){
_start:
{
lean_object* v_toApplicative_141_; lean_object* v_toBind_142_; lean_object* v_toPure_143_; lean_object* v___f_144_; lean_object* v___f_145_; 
v_toApplicative_141_ = lean_ctor_get(v_inst_138_, 0);
lean_inc_ref(v_toApplicative_141_);
v_toBind_142_ = lean_ctor_get(v_inst_138_, 1);
lean_inc(v_toBind_142_);
lean_dec_ref(v_inst_138_);
v_toPure_143_ = lean_ctor_get(v_toApplicative_141_, 1);
lean_inc(v_toPure_143_);
lean_dec_ref(v_toApplicative_141_);
v___f_144_ = ((lean_object*)(l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0));
v___f_145_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__2), 9, 5);
lean_closure_set(v___f_145_, 0, v_inst_139_);
lean_closure_set(v___f_145_, 1, v___f_144_);
lean_closure_set(v___f_145_, 2, v_toPure_143_);
lean_closure_set(v___f_145_, 3, v_inst_140_);
lean_closure_set(v___f_145_, 4, v_toBind_142_);
return v___f_145_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor(lean_object* v_m_146_, lean_object* v_t_147_, lean_object* v_s_148_, lean_object* v_inst_149_, lean_object* v_inst_150_, lean_object* v_inst_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg(v_inst_149_, v_inst_150_, v_inst_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_pure___redArg(lean_object* v_x_153_){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_154_, 0, v_x_153_);
v___x_155_ = lean_task_pure(v___x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_pure(lean_object* v_00_u03b1_156_, lean_object* v_00_u03b5_157_, lean_object* v_x_158_){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_159_, 0, v_x_158_);
v___x_160_ = lean_task_pure(v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg___lam__0(lean_object* v_f_161_, lean_object* v_x_162_){
_start:
{
if (lean_obj_tag(v_x_162_) == 0)
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_170_; 
lean_dec(v_f_161_);
v_a_163_ = lean_ctor_get(v_x_162_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v_x_162_);
if (v_isSharedCheck_170_ == 0)
{
v___x_165_ = v_x_162_;
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v_x_162_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_168_; 
if (v_isShared_166_ == 0)
{
v___x_168_ = v___x_165_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v_a_163_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
else
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_179_; 
v_a_171_ = lean_ctor_get(v_x_162_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v_x_162_);
if (v_isSharedCheck_179_ == 0)
{
v___x_173_ = v_x_162_;
v_isShared_174_ = v_isSharedCheck_179_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v_x_162_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_179_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_175_ = lean_apply_1(v_f_161_, v_a_171_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_175_);
v___x_177_ = v___x_173_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg(lean_object* v_f_180_, lean_object* v_x_181_, lean_object* v_prio_182_, uint8_t v_sync_183_){
_start:
{
lean_object* v___f_184_; lean_object* v___x_185_; 
v___f_184_ = lean_alloc_closure((void*)(l_Std_Async_ETask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_184_, 0, v_f_180_);
v___x_185_ = lean_task_map(v___f_184_, v_x_181_, v_prio_182_, v_sync_183_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg___boxed(lean_object* v_f_186_, lean_object* v_x_187_, lean_object* v_prio_188_, lean_object* v_sync_189_){
_start:
{
uint8_t v_sync_boxed_190_; lean_object* v_res_191_; 
v_sync_boxed_190_ = lean_unbox(v_sync_189_);
v_res_191_ = l_Std_Async_ETask_map___redArg(v_f_186_, v_x_187_, v_prio_188_, v_sync_boxed_190_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_map(lean_object* v_00_u03b1_192_, lean_object* v_00_u03b2_193_, lean_object* v_00_u03b5_194_, lean_object* v_f_195_, lean_object* v_x_196_, lean_object* v_prio_197_, uint8_t v_sync_198_){
_start:
{
lean_object* v___f_199_; lean_object* v___x_200_; 
v___f_199_ = lean_alloc_closure((void*)(l_Std_Async_ETask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_199_, 0, v_f_195_);
v___x_200_ = lean_task_map(v___f_199_, v_x_196_, v_prio_197_, v_sync_198_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___boxed(lean_object* v_00_u03b1_201_, lean_object* v_00_u03b2_202_, lean_object* v_00_u03b5_203_, lean_object* v_f_204_, lean_object* v_x_205_, lean_object* v_prio_206_, lean_object* v_sync_207_){
_start:
{
uint8_t v_sync_boxed_208_; lean_object* v_res_209_; 
v_sync_boxed_208_ = lean_unbox(v_sync_207_);
v_res_209_ = l_Std_Async_ETask_map(v_00_u03b1_201_, v_00_u03b2_202_, v_00_u03b5_203_, v_f_204_, v_x_205_, v_prio_206_, v_sync_boxed_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg___lam__0(lean_object* v_f_210_, lean_object* v_x_211_){
_start:
{
if (lean_obj_tag(v_x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_220_; 
lean_dec_ref(v_f_210_);
v_a_212_ = lean_ctor_get(v_x_211_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v_x_211_);
if (v_isSharedCheck_220_ == 0)
{
v___x_214_ = v_x_211_;
v_isShared_215_ = v_isSharedCheck_220_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v_x_211_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_220_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_217_; 
if (v_isShared_215_ == 0)
{
v___x_217_ = v___x_214_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_212_);
v___x_217_ = v_reuseFailAlloc_219_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
lean_object* v___x_218_; 
v___x_218_ = lean_task_pure(v___x_217_);
return v___x_218_;
}
}
}
else
{
lean_object* v_a_221_; lean_object* v___x_222_; 
v_a_221_ = lean_ctor_get(v_x_211_, 0);
lean_inc(v_a_221_);
lean_dec_ref_known(v_x_211_, 1);
v___x_222_ = lean_apply_1(v_f_210_, v_a_221_);
return v___x_222_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg(lean_object* v_x_223_, lean_object* v_f_224_, lean_object* v_prio_225_, uint8_t v_sync_226_){
_start:
{
lean_object* v___f_227_; lean_object* v___x_228_; 
v___f_227_ = lean_alloc_closure((void*)(l_Std_Async_ETask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_227_, 0, v_f_224_);
v___x_228_ = lean_task_bind(v_x_223_, v___f_227_, v_prio_225_, v_sync_226_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg___boxed(lean_object* v_x_229_, lean_object* v_f_230_, lean_object* v_prio_231_, lean_object* v_sync_232_){
_start:
{
uint8_t v_sync_boxed_233_; lean_object* v_res_234_; 
v_sync_boxed_233_ = lean_unbox(v_sync_232_);
v_res_234_ = l_Std_Async_ETask_bind___redArg(v_x_229_, v_f_230_, v_prio_231_, v_sync_boxed_233_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind(lean_object* v_00_u03b5_235_, lean_object* v_00_u03b1_236_, lean_object* v_00_u03b2_237_, lean_object* v_x_238_, lean_object* v_f_239_, lean_object* v_prio_240_, uint8_t v_sync_241_){
_start:
{
lean_object* v___f_242_; lean_object* v___x_243_; 
v___f_242_ = lean_alloc_closure((void*)(l_Std_Async_ETask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_242_, 0, v_f_239_);
v___x_243_ = lean_task_bind(v_x_238_, v___f_242_, v_prio_240_, v_sync_241_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___boxed(lean_object* v_00_u03b5_244_, lean_object* v_00_u03b1_245_, lean_object* v_00_u03b2_246_, lean_object* v_x_247_, lean_object* v_f_248_, lean_object* v_prio_249_, lean_object* v_sync_250_){
_start:
{
uint8_t v_sync_boxed_251_; lean_object* v_res_252_; 
v_sync_boxed_251_ = lean_unbox(v_sync_250_);
v_res_252_ = l_Std_Async_ETask_bind(v_00_u03b5_244_, v_00_u03b1_245_, v_00_u03b2_246_, v_x_247_, v_f_248_, v_prio_249_, v_sync_boxed_251_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___lam__0(lean_object* v_f_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_a_257_; 
if (lean_obj_tag(v_a_254_) == 0)
{
lean_object* v_a_260_; 
lean_dec_ref(v_f_253_);
v_a_260_ = lean_ctor_get(v_a_254_, 0);
lean_inc(v_a_260_);
lean_dec_ref_known(v_a_254_, 1);
v_a_257_ = v_a_260_;
goto v___jp_256_;
}
else
{
lean_object* v_a_261_; lean_object* v___x_262_; 
v_a_261_ = lean_ctor_get(v_a_254_, 0);
lean_inc(v_a_261_);
lean_dec_ref_known(v_a_254_, 1);
v___x_262_ = lean_apply_2(v_f_253_, v_a_261_, lean_box(0));
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v_a_263_; 
v_a_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_a_263_);
lean_dec_ref_known(v___x_262_, 1);
return v_a_263_;
}
else
{
lean_object* v_a_264_; 
v_a_264_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_a_264_);
lean_dec_ref_known(v___x_262_, 1);
v_a_257_ = v_a_264_;
goto v___jp_256_;
}
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_258_, 0, v_a_257_);
v___x_259_ = lean_task_pure(v___x_258_);
return v___x_259_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___lam__0___boxed(lean_object* v_f_265_, lean_object* v_a_266_, lean_object* v___y_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Std_Async_ETask_bindEIO___redArg___lam__0(v_f_265_, v_a_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg(lean_object* v_x_269_, lean_object* v_f_270_, lean_object* v_prio_271_, uint8_t v_sync_272_){
_start:
{
lean_object* v___f_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___f_274_ = lean_alloc_closure((void*)(l_Std_Async_ETask_bindEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_274_, 0, v_f_270_);
v___x_275_ = lean_io_bind_task(v_x_269_, v___f_274_, v_prio_271_, v_sync_272_);
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___boxed(lean_object* v_x_277_, lean_object* v_f_278_, lean_object* v_prio_279_, lean_object* v_sync_280_, lean_object* v_a_281_){
_start:
{
uint8_t v_sync_boxed_282_; lean_object* v_res_283_; 
v_sync_boxed_282_ = lean_unbox(v_sync_280_);
v_res_283_ = l_Std_Async_ETask_bindEIO___redArg(v_x_277_, v_f_278_, v_prio_279_, v_sync_boxed_282_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO(lean_object* v_00_u03b5_284_, lean_object* v_00_u03b1_285_, lean_object* v_00_u03b2_286_, lean_object* v_x_287_, lean_object* v_f_288_, lean_object* v_prio_289_, uint8_t v_sync_290_){
_start:
{
lean_object* v___f_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___f_292_ = lean_alloc_closure((void*)(l_Std_Async_ETask_bindEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_292_, 0, v_f_288_);
v___x_293_ = lean_io_bind_task(v_x_287_, v___f_292_, v_prio_289_, v_sync_290_);
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___boxed(lean_object* v_00_u03b5_295_, lean_object* v_00_u03b1_296_, lean_object* v_00_u03b2_297_, lean_object* v_x_298_, lean_object* v_f_299_, lean_object* v_prio_300_, lean_object* v_sync_301_, lean_object* v_a_302_){
_start:
{
uint8_t v_sync_boxed_303_; lean_object* v_res_304_; 
v_sync_boxed_303_ = lean_unbox(v_sync_301_);
v_res_304_ = l_Std_Async_ETask_bindEIO(v_00_u03b5_295_, v_00_u03b1_296_, v_00_u03b2_297_, v_x_298_, v_f_299_, v_prio_300_, v_sync_boxed_303_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___lam__0(lean_object* v_f_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_a_309_; 
if (lean_obj_tag(v_a_306_) == 0)
{
lean_object* v_a_311_; 
lean_dec_ref(v_f_305_);
v_a_311_ = lean_ctor_get(v_a_306_, 0);
lean_inc(v_a_311_);
lean_dec_ref_known(v_a_306_, 1);
v_a_309_ = v_a_311_;
goto v___jp_308_;
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_322_; 
v_a_312_ = lean_ctor_get(v_a_306_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v_a_306_);
if (v_isSharedCheck_322_ == 0)
{
v___x_314_ = v_a_306_;
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v_a_306_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; 
v___x_316_ = lean_apply_2(v_f_305_, v_a_312_, lean_box(0));
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_319_; 
v_a_317_ = lean_ctor_get(v___x_316_, 0);
lean_inc(v_a_317_);
lean_dec_ref_known(v___x_316_, 1);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v_a_317_);
v___x_319_ = v___x_314_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
else
{
lean_object* v_a_321_; 
lean_del_object(v___x_314_);
v_a_321_ = lean_ctor_get(v___x_316_, 0);
lean_inc(v_a_321_);
lean_dec_ref_known(v___x_316_, 1);
v_a_309_ = v_a_321_;
goto v___jp_308_;
}
}
}
v___jp_308_:
{
lean_object* v___x_310_; 
v___x_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_310_, 0, v_a_309_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___lam__0___boxed(lean_object* v_f_323_, lean_object* v_a_324_, lean_object* v___y_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Std_Async_ETask_mapEIO___redArg___lam__0(v_f_323_, v_a_324_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg(lean_object* v_f_327_, lean_object* v_x_328_, lean_object* v_prio_329_, uint8_t v_sync_330_){
_start:
{
lean_object* v___f_332_; lean_object* v___x_333_; 
v___f_332_ = lean_alloc_closure((void*)(l_Std_Async_ETask_mapEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_332_, 0, v_f_327_);
v___x_333_ = lean_io_map_task(v___f_332_, v_x_328_, v_prio_329_, v_sync_330_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___boxed(lean_object* v_f_334_, lean_object* v_x_335_, lean_object* v_prio_336_, lean_object* v_sync_337_, lean_object* v_a_338_){
_start:
{
uint8_t v_sync_boxed_339_; lean_object* v_res_340_; 
v_sync_boxed_339_ = lean_unbox(v_sync_337_);
v_res_340_ = l_Std_Async_ETask_mapEIO___redArg(v_f_334_, v_x_335_, v_prio_336_, v_sync_boxed_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO(lean_object* v_00_u03b1_341_, lean_object* v_00_u03b5_342_, lean_object* v_00_u03b2_343_, lean_object* v_f_344_, lean_object* v_x_345_, lean_object* v_prio_346_, uint8_t v_sync_347_){
_start:
{
lean_object* v___f_349_; lean_object* v___x_350_; 
v___f_349_ = lean_alloc_closure((void*)(l_Std_Async_ETask_mapEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_349_, 0, v_f_344_);
v___x_350_ = lean_io_map_task(v___f_349_, v_x_345_, v_prio_346_, v_sync_347_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___boxed(lean_object* v_00_u03b1_351_, lean_object* v_00_u03b5_352_, lean_object* v_00_u03b2_353_, lean_object* v_f_354_, lean_object* v_x_355_, lean_object* v_prio_356_, lean_object* v_sync_357_, lean_object* v_a_358_){
_start:
{
uint8_t v_sync_boxed_359_; lean_object* v_res_360_; 
v_sync_boxed_359_ = lean_unbox(v_sync_357_);
v_res_360_ = l_Std_Async_ETask_mapEIO(v_00_u03b1_351_, v_00_u03b5_352_, v_00_u03b2_353_, v_f_354_, v_x_355_, v_prio_356_, v_sync_boxed_359_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___redArg(lean_object* v_x_361_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_task_get_own(v_x_361_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
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
lean_ctor_set_tag(v___x_366_, 1);
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
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
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
v_a_372_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_363_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_363_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
lean_ctor_set_tag(v___x_374_, 0);
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
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
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___redArg___boxed(lean_object* v_x_380_, lean_object* v_a_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Std_Async_ETask_block___redArg(v_x_380_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_block(lean_object* v_00_u03b5_383_, lean_object* v_00_u03b1_384_, lean_object* v_x_385_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = lean_task_get_own(v_x_385_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_387_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_387_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
lean_ctor_set_tag(v___x_390_, 1);
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
v_a_396_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_387_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_387_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
lean_ctor_set_tag(v___x_398_, 0);
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___boxed(lean_object* v_00_u03b5_404_, lean_object* v_00_u03b1_405_, lean_object* v_x_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Std_Async_ETask_block(v_00_u03b5_404_, v_00_u03b1_405_, v_x_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___redArg(lean_object* v_x_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_IO_Promise_result_x21___redArg(v_x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___redArg___boxed(lean_object* v_x_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Std_Async_ETask_ofPromise_x21___redArg(v_x_411_);
lean_dec(v_x_411_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21(lean_object* v_00_u03b5_413_, lean_object* v_00_u03b1_414_, lean_object* v_x_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_IO_Promise_result_x21___redArg(v_x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___boxed(lean_object* v_00_u03b5_417_, lean_object* v_00_u03b1_418_, lean_object* v_x_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Std_Async_ETask_ofPromise_x21(v_00_u03b5_417_, v_00_u03b1_418_, v_x_419_);
lean_dec(v_x_419_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___redArg(lean_object* v_x_422_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; lean_object* v___x_427_; 
v___x_423_ = ((lean_object*)(l_Std_Async_ETask_ofPurePromise___redArg___closed__0));
v___x_424_ = l_IO_Promise_result_x21___redArg(v_x_422_);
v___x_425_ = lean_unsigned_to_nat(0u);
v___x_426_ = 1;
v___x_427_ = lean_task_map(v___x_423_, v___x_424_, v___x_425_, v___x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___redArg___boxed(lean_object* v_x_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Std_Async_ETask_ofPurePromise___redArg(v_x_428_);
lean_dec(v_x_428_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise(lean_object* v_00_u03b1_430_, lean_object* v_00_u03b5_431_, lean_object* v_x_432_){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; lean_object* v___x_437_; 
v___x_433_ = ((lean_object*)(l_Std_Async_ETask_ofPurePromise___redArg___closed__0));
v___x_434_ = l_IO_Promise_result_x21___redArg(v_x_432_);
v___x_435_ = lean_unsigned_to_nat(0u);
v___x_436_ = 1;
v___x_437_ = lean_task_map(v___x_433_, v___x_434_, v___x_435_, v___x_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___boxed(lean_object* v_00_u03b1_438_, lean_object* v_00_u03b5_439_, lean_object* v_x_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Std_Async_ETask_ofPurePromise(v_00_u03b1_438_, v_00_u03b5_439_, v_x_440_);
lean_dec(v_x_440_);
return v_res_441_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_ETask_getState___redArg(lean_object* v_x_442_){
_start:
{
uint8_t v___x_444_; 
v___x_444_ = lean_io_get_task_state(v_x_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_getState___redArg___boxed(lean_object* v_x_445_, lean_object* v_a_446_){
_start:
{
uint8_t v_res_447_; lean_object* v_r_448_; 
v_res_447_ = l_Std_Async_ETask_getState___redArg(v_x_445_);
lean_dec_ref(v_x_445_);
v_r_448_ = lean_box(v_res_447_);
return v_r_448_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_ETask_getState(lean_object* v_00_u03b5_449_, lean_object* v_00_u03b1_450_, lean_object* v_x_451_){
_start:
{
uint8_t v___x_453_; 
v___x_453_ = lean_io_get_task_state(v_x_451_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_getState___boxed(lean_object* v_00_u03b5_454_, lean_object* v_00_u03b1_455_, lean_object* v_x_456_, lean_object* v_a_457_){
_start:
{
uint8_t v_res_458_; lean_object* v_r_459_; 
v_res_458_ = l_Std_Async_ETask_getState(v_00_u03b5_454_, v_00_u03b1_455_, v_x_456_);
lean_dec_ref(v_x_456_);
v_r_459_ = lean_box(v_res_458_);
return v_r_459_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___lam__1(lean_object* v_00_u03b1_460_, lean_object* v_00_u03b2_461_, lean_object* v_f_462_, lean_object* v_x_463_){
_start:
{
lean_object* v___f_464_; lean_object* v___x_465_; uint8_t v___x_466_; lean_object* v___x_467_; 
v___f_464_ = lean_alloc_closure((void*)(l_Std_Async_ETask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_464_, 0, v_f_462_);
v___x_465_ = lean_unsigned_to_nat(0u);
v___x_466_ = 0;
v___x_467_ = lean_task_map(v___f_464_, v_x_463_, v___x_465_, v___x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___lam__0(lean_object* v___f_468_, lean_object* v_00_u03b1_469_, lean_object* v_00_u03b2_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_473_, 0, lean_box(0));
lean_closure_set(v___x_473_, 1, lean_box(0));
lean_closure_set(v___x_473_, 2, v___y_471_);
v___x_474_ = lean_apply_4(v___f_468_, lean_box(0), lean_box(0), v___x_473_, v___y_472_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg(){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = ((lean_object*)(l_Std_Async_ETask_instFunctor___redArg___closed__2));
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___boxed(lean_object* v___dummy_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Std_Async_ETask_instFunctor___redArg();
return v_res_484_;
}
}
static lean_object* _init_l_Std_Async_ETask_instFunctor___closed__0(void){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = l_Std_Async_ETask_instFunctor___redArg();
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor(lean_object* v_00_u03b5_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = lean_obj_once(&l_Std_Async_ETask_instFunctor___closed__0, &l_Std_Async_ETask_instFunctor___closed__0_once, _init_l_Std_Async_ETask_instFunctor___closed__0);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__0(lean_object* v_00_u03b1_488_, lean_object* v___y_489_){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_490_, 0, v___y_489_);
v___x_491_ = lean_task_pure(v___x_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__1(lean_object* v_a_492_, lean_object* v_x_493_){
_start:
{
if (lean_obj_tag(v_x_493_) == 0)
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
lean_dec(v_a_492_);
v_a_494_ = lean_ctor_get(v_x_493_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v_x_493_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v_x_493_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v_x_493_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
else
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_510_; 
v_a_502_ = lean_ctor_get(v_x_493_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v_x_493_);
if (v_isSharedCheck_510_ == 0)
{
v___x_504_ = v_x_493_;
v_isShared_505_ = v_isSharedCheck_510_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v_x_493_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_510_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_506_ = lean_apply_1(v_a_492_, v_a_502_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v___x_506_);
v___x_508_ = v___x_504_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__2(lean_object* v_x_511_, lean_object* v_x_512_){
_start:
{
if (lean_obj_tag(v_x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_521_; 
lean_dec_ref(v_x_511_);
v_a_513_ = lean_ctor_get(v_x_512_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v_x_512_);
if (v_isSharedCheck_521_ == 0)
{
v___x_515_ = v_x_512_;
v_isShared_516_ = v_isSharedCheck_521_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v_x_512_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_521_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
if (v_isShared_516_ == 0)
{
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_513_);
v___x_518_ = v_reuseFailAlloc_520_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
lean_object* v___x_519_; 
v___x_519_ = lean_task_pure(v___x_518_);
return v___x_519_;
}
}
}
else
{
lean_object* v_a_522_; lean_object* v___f_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; lean_object* v___x_528_; 
v_a_522_ = lean_ctor_get(v_x_512_, 0);
lean_inc(v_a_522_);
lean_dec_ref_known(v_x_512_, 1);
v___f_523_ = lean_alloc_closure((void*)(l_Std_Async_ETask_instMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_523_, 0, v_a_522_);
v___x_524_ = lean_box(0);
v___x_525_ = lean_apply_1(v_x_511_, v___x_524_);
v___x_526_ = lean_unsigned_to_nat(0u);
v___x_527_ = 0;
v___x_528_ = lean_task_map(v___f_523_, v___x_525_, v___x_526_, v___x_527_);
return v___x_528_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__3(lean_object* v_00_u03b1_529_, lean_object* v_00_u03b2_530_, lean_object* v_f_531_, lean_object* v_x_532_){
_start:
{
lean_object* v___f_533_; lean_object* v___x_534_; uint8_t v___x_535_; lean_object* v___x_536_; 
v___f_533_ = lean_alloc_closure((void*)(l_Std_Async_ETask_instMonad___redArg___lam__2), 2, 1);
lean_closure_set(v___f_533_, 0, v_x_532_);
v___x_534_ = lean_unsigned_to_nat(0u);
v___x_535_ = 0;
v___x_536_ = lean_task_bind(v_f_531_, v___f_533_, v___x_534_, v___x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__5(lean_object* v_00_u03b1_537_, lean_object* v_00_u03b2_538_, lean_object* v_x_539_, lean_object* v_f_540_){
_start:
{
lean_object* v___f_541_; lean_object* v___x_542_; uint8_t v___x_543_; lean_object* v___x_544_; 
v___f_541_ = lean_alloc_closure((void*)(l_Std_Async_ETask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_541_, 0, v_f_540_);
v___x_542_ = lean_unsigned_to_nat(0u);
v___x_543_ = 0;
v___x_544_ = lean_task_bind(v_x_539_, v___f_541_, v___x_542_, v___x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__4(lean_object* v___f_545_, lean_object* v_a_546_, lean_object* v_x_547_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = lean_apply_2(v___f_545_, lean_box(0), v_a_546_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__4___boxed(lean_object* v___f_549_, lean_object* v_a_550_, lean_object* v_x_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Std_Async_ETask_instMonad___redArg___lam__4(v___f_549_, v_a_550_, v_x_551_);
lean_dec(v_x_551_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__6(lean_object* v___f_553_, lean_object* v_y_554_, lean_object* v___f_555_, lean_object* v_a_556_){
_start:
{
lean_object* v___f_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___f_557_ = lean_alloc_closure((void*)(l_Std_Async_ETask_instMonad___redArg___lam__4___boxed), 3, 2);
lean_closure_set(v___f_557_, 0, v___f_553_);
lean_closure_set(v___f_557_, 1, v_a_556_);
v___x_558_ = lean_box(0);
v___x_559_ = lean_apply_1(v_y_554_, v___x_558_);
v___x_560_ = lean_apply_4(v___f_555_, lean_box(0), lean_box(0), v___x_559_, v___f_557_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__7(lean_object* v___f_561_, lean_object* v___f_562_, lean_object* v_00_u03b1_563_, lean_object* v_00_u03b2_564_, lean_object* v_x_565_, lean_object* v_y_566_){
_start:
{
lean_object* v___f_567_; lean_object* v___x_568_; 
lean_inc_ref(v___f_562_);
v___f_567_ = lean_alloc_closure((void*)(l_Std_Async_ETask_instMonad___redArg___lam__6), 4, 3);
lean_closure_set(v___f_567_, 0, v___f_561_);
lean_closure_set(v___f_567_, 1, v_y_566_);
lean_closure_set(v___f_567_, 2, v___f_562_);
v___x_568_ = lean_apply_4(v___f_562_, lean_box(0), lean_box(0), v_x_565_, v___f_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__8(lean_object* v_y_569_, lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_579_; 
lean_dec_ref(v_y_569_);
v_a_571_ = lean_ctor_get(v_x_570_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v_x_570_);
if (v_isSharedCheck_579_ == 0)
{
v___x_573_ = v_x_570_;
v_isShared_574_ = v_isSharedCheck_579_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v_x_570_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_579_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_578_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_577_; 
v___x_577_ = lean_task_pure(v___x_576_);
return v___x_577_;
}
}
}
else
{
lean_object* v___x_580_; lean_object* v___x_581_; 
lean_dec_ref_known(v_x_570_, 1);
v___x_580_ = lean_box(0);
v___x_581_ = lean_apply_1(v_y_569_, v___x_580_);
return v___x_581_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__9(lean_object* v_00_u03b1_582_, lean_object* v_00_u03b2_583_, lean_object* v_x_584_, lean_object* v_y_585_){
_start:
{
lean_object* v___f_586_; lean_object* v___x_587_; uint8_t v___x_588_; lean_object* v___x_589_; 
v___f_586_ = lean_alloc_closure((void*)(l_Std_Async_ETask_instMonad___redArg___lam__8), 2, 1);
lean_closure_set(v___f_586_, 0, v_y_585_);
v___x_587_ = lean_unsigned_to_nat(0u);
v___x_588_ = 0;
v___x_589_ = lean_task_bind(v_x_584_, v___f_586_, v___x_587_, v___x_588_);
return v___x_589_;
}
}
static lean_object* _init_l_Std_Async_ETask_instMonad___redArg___closed__5(void){
_start:
{
lean_object* v___f_597_; lean_object* v___f_598_; lean_object* v___f_599_; lean_object* v___f_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___f_597_ = ((lean_object*)(l_Std_Async_ETask_instMonad___redArg___closed__4));
v___f_598_ = ((lean_object*)(l_Std_Async_ETask_instMonad___redArg___closed__3));
v___f_599_ = ((lean_object*)(l_Std_Async_ETask_instMonad___redArg___closed__1));
v___f_600_ = ((lean_object*)(l_Std_Async_ETask_instMonad___redArg___closed__0));
v___x_601_ = lean_obj_once(&l_Std_Async_ETask_instFunctor___closed__0, &l_Std_Async_ETask_instFunctor___closed__0_once, _init_l_Std_Async_ETask_instFunctor___closed__0);
v___x_602_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
lean_ctor_set(v___x_602_, 1, v___f_600_);
lean_ctor_set(v___x_602_, 2, v___f_599_);
lean_ctor_set(v___x_602_, 3, v___f_598_);
lean_ctor_set(v___x_602_, 4, v___f_597_);
return v___x_602_;
}
}
static lean_object* _init_l_Std_Async_ETask_instMonad___redArg___closed__6(void){
_start:
{
lean_object* v___f_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___f_603_ = ((lean_object*)(l_Std_Async_ETask_instMonad___redArg___closed__2));
v___x_604_ = lean_obj_once(&l_Std_Async_ETask_instMonad___redArg___closed__5, &l_Std_Async_ETask_instMonad___redArg___closed__5_once, _init_l_Std_Async_ETask_instMonad___redArg___closed__5);
v___x_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
lean_ctor_set(v___x_605_, 1, v___f_603_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg(){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = lean_obj_once(&l_Std_Async_ETask_instMonad___redArg___closed__6, &l_Std_Async_ETask_instMonad___redArg___closed__6_once, _init_l_Std_Async_ETask_instMonad___redArg___closed__6);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___boxed(lean_object* v___dummy_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Std_Async_ETask_instMonad___redArg();
return v_res_609_;
}
}
static lean_object* _init_l_Std_Async_ETask_instMonad___closed__0(void){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Std_Async_ETask_instMonad___redArg();
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad(lean_object* v_00_u03b5_611_){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = lean_obj_once(&l_Std_Async_ETask_instMonad___closed__0, &l_Std_Async_ETask_instMonad___closed__0_once, _init_l_Std_Async_ETask_instMonad___closed__0);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___lam__0(lean_object* v_f_613_, lean_object* v_a_614_){
_start:
{
lean_object* v_a_617_; 
if (lean_obj_tag(v_a_614_) == 0)
{
lean_object* v_a_619_; 
lean_dec_ref(v_f_613_);
v_a_619_ = lean_ctor_get(v_a_614_, 0);
lean_inc(v_a_619_);
lean_dec_ref_known(v_a_614_, 1);
v_a_617_ = v_a_619_;
goto v___jp_616_;
}
else
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_630_; 
v_a_620_ = lean_ctor_get(v_a_614_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v_a_614_);
if (v_isSharedCheck_630_ == 0)
{
v___x_622_ = v_a_614_;
v_isShared_623_ = v_isSharedCheck_630_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v_a_614_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_630_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_624_; 
v___x_624_ = lean_apply_2(v_f_613_, v_a_620_, lean_box(0));
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v___x_627_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_a_625_);
lean_dec_ref_known(v___x_624_, 1);
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 0, v_a_625_);
v___x_627_ = v___x_622_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_a_625_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
else
{
lean_object* v_a_629_; 
lean_del_object(v___x_622_);
v_a_629_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_624_, 1);
v_a_617_ = v_a_629_;
goto v___jp_616_;
}
}
}
v___jp_616_:
{
lean_object* v___x_618_; 
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v_a_617_);
return v___x_618_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed(lean_object* v_f_631_, lean_object* v_a_632_, lean_object* v___y_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Std_Async_AsyncTask_mapIO___redArg___lam__0(v_f_631_, v_a_632_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg(lean_object* v_f_635_, lean_object* v_x_636_, lean_object* v_prio_637_, uint8_t v_sync_638_){
_start:
{
lean_object* v___f_640_; lean_object* v___x_641_; 
v___f_640_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_640_, 0, v_f_635_);
v___x_641_ = lean_io_map_task(v___f_640_, v_x_636_, v_prio_637_, v_sync_638_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___boxed(lean_object* v_f_642_, lean_object* v_x_643_, lean_object* v_prio_644_, lean_object* v_sync_645_, lean_object* v_a_646_){
_start:
{
uint8_t v_sync_boxed_647_; lean_object* v_res_648_; 
v_sync_boxed_647_ = lean_unbox(v_sync_645_);
v_res_648_ = l_Std_Async_AsyncTask_mapIO___redArg(v_f_642_, v_x_643_, v_prio_644_, v_sync_boxed_647_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO(lean_object* v_00_u03b1_649_, lean_object* v_00_u03b2_650_, lean_object* v_f_651_, lean_object* v_x_652_, lean_object* v_prio_653_, uint8_t v_sync_654_){
_start:
{
lean_object* v___f_656_; lean_object* v___x_657_; 
v___f_656_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_656_, 0, v_f_651_);
v___x_657_ = lean_io_map_task(v___f_656_, v_x_652_, v_prio_653_, v_sync_654_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___boxed(lean_object* v_00_u03b1_658_, lean_object* v_00_u03b2_659_, lean_object* v_f_660_, lean_object* v_x_661_, lean_object* v_prio_662_, lean_object* v_sync_663_, lean_object* v_a_664_){
_start:
{
uint8_t v_sync_boxed_665_; lean_object* v_res_666_; 
v_sync_boxed_665_ = lean_unbox(v_sync_663_);
v_res_666_ = l_Std_Async_AsyncTask_mapIO(v_00_u03b1_658_, v_00_u03b2_659_, v_f_660_, v_x_661_, v_prio_662_, v_sync_boxed_665_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_pure___redArg(lean_object* v_x_667_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_668_, 0, v_x_667_);
v___x_669_ = lean_task_pure(v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_pure(lean_object* v_00_u03b1_670_, lean_object* v_x_671_){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_672_, 0, v_x_671_);
v___x_673_ = lean_task_pure(v___x_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg___lam__0(lean_object* v_f_674_, lean_object* v_x_675_){
_start:
{
if (lean_obj_tag(v_x_675_) == 0)
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_684_; 
lean_dec_ref(v_f_674_);
v_a_676_ = lean_ctor_get(v_x_675_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v_x_675_);
if (v_isSharedCheck_684_ == 0)
{
v___x_678_ = v_x_675_;
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v_x_675_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_676_);
v___x_681_ = v_reuseFailAlloc_683_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; 
v___x_682_ = lean_task_pure(v___x_681_);
return v___x_682_;
}
}
}
else
{
lean_object* v_a_685_; lean_object* v___x_686_; 
v_a_685_ = lean_ctor_get(v_x_675_, 0);
lean_inc(v_a_685_);
lean_dec_ref_known(v_x_675_, 1);
v___x_686_ = lean_apply_1(v_f_674_, v_a_685_);
return v___x_686_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg(lean_object* v_x_687_, lean_object* v_f_688_, lean_object* v_prio_689_, uint8_t v_sync_690_){
_start:
{
lean_object* v___f_691_; lean_object* v___x_692_; 
v___f_691_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_691_, 0, v_f_688_);
v___x_692_ = lean_task_bind(v_x_687_, v___f_691_, v_prio_689_, v_sync_690_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg___boxed(lean_object* v_x_693_, lean_object* v_f_694_, lean_object* v_prio_695_, lean_object* v_sync_696_){
_start:
{
uint8_t v_sync_boxed_697_; lean_object* v_res_698_; 
v_sync_boxed_697_ = lean_unbox(v_sync_696_);
v_res_698_ = l_Std_Async_AsyncTask_bind___redArg(v_x_693_, v_f_694_, v_prio_695_, v_sync_boxed_697_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind(lean_object* v_00_u03b1_699_, lean_object* v_00_u03b2_700_, lean_object* v_x_701_, lean_object* v_f_702_, lean_object* v_prio_703_, uint8_t v_sync_704_){
_start:
{
lean_object* v___f_705_; lean_object* v___x_706_; 
v___f_705_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_705_, 0, v_f_702_);
v___x_706_ = lean_task_bind(v_x_701_, v___f_705_, v_prio_703_, v_sync_704_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___boxed(lean_object* v_00_u03b1_707_, lean_object* v_00_u03b2_708_, lean_object* v_x_709_, lean_object* v_f_710_, lean_object* v_prio_711_, lean_object* v_sync_712_){
_start:
{
uint8_t v_sync_boxed_713_; lean_object* v_res_714_; 
v_sync_boxed_713_ = lean_unbox(v_sync_712_);
v_res_714_ = l_Std_Async_AsyncTask_bind(v_00_u03b1_707_, v_00_u03b2_708_, v_x_709_, v_f_710_, v_prio_711_, v_sync_boxed_713_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg___lam__0(lean_object* v_f_715_, lean_object* v_x_716_){
_start:
{
if (lean_obj_tag(v_x_716_) == 0)
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_724_; 
lean_dec(v_f_715_);
v_a_717_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_724_ == 0)
{
v___x_719_ = v_x_716_;
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v_x_716_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_a_717_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
else
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_733_; 
v_a_725_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_733_ == 0)
{
v___x_727_ = v_x_716_;
v_isShared_728_ = v_isSharedCheck_733_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v_x_716_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_733_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; lean_object* v___x_731_; 
v___x_729_ = lean_apply_1(v_f_715_, v_a_725_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 0, v___x_729_);
v___x_731_ = v___x_727_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_729_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg(lean_object* v_f_734_, lean_object* v_x_735_, lean_object* v_prio_736_, uint8_t v_sync_737_){
_start:
{
lean_object* v___f_738_; lean_object* v___x_739_; 
v___f_738_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_738_, 0, v_f_734_);
v___x_739_ = lean_task_map(v___f_738_, v_x_735_, v_prio_736_, v_sync_737_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg___boxed(lean_object* v_f_740_, lean_object* v_x_741_, lean_object* v_prio_742_, lean_object* v_sync_743_){
_start:
{
uint8_t v_sync_boxed_744_; lean_object* v_res_745_; 
v_sync_boxed_744_ = lean_unbox(v_sync_743_);
v_res_745_ = l_Std_Async_AsyncTask_map___redArg(v_f_740_, v_x_741_, v_prio_742_, v_sync_boxed_744_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map(lean_object* v_00_u03b1_746_, lean_object* v_00_u03b2_747_, lean_object* v_f_748_, lean_object* v_x_749_, lean_object* v_prio_750_, uint8_t v_sync_751_){
_start:
{
lean_object* v___f_752_; lean_object* v___x_753_; 
v___f_752_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_752_, 0, v_f_748_);
v___x_753_ = lean_task_map(v___f_752_, v_x_749_, v_prio_750_, v_sync_751_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___boxed(lean_object* v_00_u03b1_754_, lean_object* v_00_u03b2_755_, lean_object* v_f_756_, lean_object* v_x_757_, lean_object* v_prio_758_, lean_object* v_sync_759_){
_start:
{
uint8_t v_sync_boxed_760_; lean_object* v_res_761_; 
v_sync_boxed_760_ = lean_unbox(v_sync_759_);
v_res_761_ = l_Std_Async_AsyncTask_map(v_00_u03b1_754_, v_00_u03b2_755_, v_f_756_, v_x_757_, v_prio_758_, v_sync_boxed_760_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___lam__0(lean_object* v_f_762_, lean_object* v_a_763_){
_start:
{
lean_object* v_a_766_; 
if (lean_obj_tag(v_a_763_) == 0)
{
lean_object* v_a_769_; 
lean_dec_ref(v_f_762_);
v_a_769_ = lean_ctor_get(v_a_763_, 0);
lean_inc(v_a_769_);
lean_dec_ref_known(v_a_763_, 1);
v_a_766_ = v_a_769_;
goto v___jp_765_;
}
else
{
lean_object* v_a_770_; lean_object* v___x_771_; 
v_a_770_ = lean_ctor_get(v_a_763_, 0);
lean_inc(v_a_770_);
lean_dec_ref_known(v_a_763_, 1);
v___x_771_ = lean_apply_2(v_f_762_, v_a_770_, lean_box(0));
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_771_, 1);
return v_a_772_;
}
else
{
lean_object* v_a_773_; 
v_a_773_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_773_);
lean_dec_ref_known(v___x_771_, 1);
v_a_766_ = v_a_773_;
goto v___jp_765_;
}
}
v___jp_765_:
{
lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_767_, 0, v_a_766_);
v___x_768_ = lean_task_pure(v___x_767_);
return v___x_768_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___lam__0___boxed(lean_object* v_f_774_, lean_object* v_a_775_, lean_object* v___y_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Std_Async_AsyncTask_bindIO___redArg___lam__0(v_f_774_, v_a_775_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg(lean_object* v_x_778_, lean_object* v_f_779_, lean_object* v_prio_780_, uint8_t v_sync_781_){
_start:
{
lean_object* v___f_783_; lean_object* v___x_784_; 
v___f_783_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_bindIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_783_, 0, v_f_779_);
v___x_784_ = lean_io_bind_task(v_x_778_, v___f_783_, v_prio_780_, v_sync_781_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___boxed(lean_object* v_x_785_, lean_object* v_f_786_, lean_object* v_prio_787_, lean_object* v_sync_788_, lean_object* v_a_789_){
_start:
{
uint8_t v_sync_boxed_790_; lean_object* v_res_791_; 
v_sync_boxed_790_ = lean_unbox(v_sync_788_);
v_res_791_ = l_Std_Async_AsyncTask_bindIO___redArg(v_x_785_, v_f_786_, v_prio_787_, v_sync_boxed_790_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO(lean_object* v_00_u03b1_792_, lean_object* v_00_u03b2_793_, lean_object* v_x_794_, lean_object* v_f_795_, lean_object* v_prio_796_, uint8_t v_sync_797_){
_start:
{
lean_object* v___f_799_; lean_object* v___x_800_; 
v___f_799_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_bindIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_799_, 0, v_f_795_);
v___x_800_ = lean_io_bind_task(v_x_794_, v___f_799_, v_prio_796_, v_sync_797_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___boxed(lean_object* v_00_u03b1_801_, lean_object* v_00_u03b2_802_, lean_object* v_x_803_, lean_object* v_f_804_, lean_object* v_prio_805_, lean_object* v_sync_806_, lean_object* v_a_807_){
_start:
{
uint8_t v_sync_boxed_808_; lean_object* v_res_809_; 
v_sync_boxed_808_ = lean_unbox(v_sync_806_);
v_res_809_ = l_Std_Async_AsyncTask_bindIO(v_00_u03b1_801_, v_00_u03b2_802_, v_x_803_, v_f_804_, v_prio_805_, v_sync_boxed_808_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___redArg(lean_object* v_f_810_, lean_object* v_x_811_, lean_object* v_prio_812_, uint8_t v_sync_813_){
_start:
{
lean_object* v___f_815_; lean_object* v___x_816_; 
v___f_815_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_815_, 0, v_f_810_);
v___x_816_ = lean_io_map_task(v___f_815_, v_x_811_, v_prio_812_, v_sync_813_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___redArg___boxed(lean_object* v_f_817_, lean_object* v_x_818_, lean_object* v_prio_819_, lean_object* v_sync_820_, lean_object* v_a_821_){
_start:
{
uint8_t v_sync_boxed_822_; lean_object* v_res_823_; 
v_sync_boxed_822_ = lean_unbox(v_sync_820_);
v_res_823_ = l_Std_Async_AsyncTask_mapTaskIO___redArg(v_f_817_, v_x_818_, v_prio_819_, v_sync_boxed_822_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO(lean_object* v_00_u03b1_824_, lean_object* v_00_u03b2_825_, lean_object* v_f_826_, lean_object* v_x_827_, lean_object* v_prio_828_, uint8_t v_sync_829_){
_start:
{
lean_object* v___f_831_; lean_object* v___x_832_; 
v___f_831_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_831_, 0, v_f_826_);
v___x_832_ = lean_io_map_task(v___f_831_, v_x_827_, v_prio_828_, v_sync_829_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___boxed(lean_object* v_00_u03b1_833_, lean_object* v_00_u03b2_834_, lean_object* v_f_835_, lean_object* v_x_836_, lean_object* v_prio_837_, lean_object* v_sync_838_, lean_object* v_a_839_){
_start:
{
uint8_t v_sync_boxed_840_; lean_object* v_res_841_; 
v_sync_boxed_840_ = lean_unbox(v_sync_838_);
v_res_841_ = l_Std_Async_AsyncTask_mapTaskIO(v_00_u03b1_833_, v_00_u03b2_834_, v_f_835_, v_x_836_, v_prio_837_, v_sync_boxed_840_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___redArg(lean_object* v_x_842_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = lean_task_get_own(v_x_842_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
v_a_845_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_844_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_844_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
lean_ctor_set_tag(v___x_847_, 1);
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_860_; 
v_a_853_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_860_ == 0)
{
v___x_855_ = v___x_844_;
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_844_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_858_; 
if (v_isShared_856_ == 0)
{
lean_ctor_set_tag(v___x_855_, 0);
v___x_858_ = v___x_855_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_853_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___redArg___boxed(lean_object* v_x_861_, lean_object* v_a_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Std_Async_AsyncTask_block___redArg(v_x_861_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block(lean_object* v_00_u03b1_864_, lean_object* v_x_865_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l_Std_Async_AsyncTask_block___redArg(v_x_865_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___boxed(lean_object* v_00_u03b1_868_, lean_object* v_x_869_, lean_object* v_a_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Std_Async_AsyncTask_block(v_00_u03b1_868_, v_x_869_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___lam__0(lean_object* v_error_872_, lean_object* v_x_873_){
_start:
{
if (lean_obj_tag(v_x_873_) == 0)
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = lean_mk_io_user_error(v_error_872_);
v___x_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
return v___x_875_;
}
else
{
lean_object* v_val_876_; 
lean_dec_ref(v_error_872_);
v_val_876_ = lean_ctor_get(v_x_873_, 0);
lean_inc(v_val_876_);
return v_val_876_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed(lean_object* v_error_877_, lean_object* v_x_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Std_Async_AsyncTask_ofPromise___redArg___lam__0(v_error_877_, v_x_878_);
lean_dec(v_x_878_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg(lean_object* v_x_880_, lean_object* v_error_881_){
_start:
{
lean_object* v___f_882_; lean_object* v___x_883_; lean_object* v___x_884_; uint8_t v___x_885_; lean_object* v___x_886_; 
v___f_882_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_882_, 0, v_error_881_);
v___x_883_ = lean_io_promise_result_opt(v_x_880_);
v___x_884_ = lean_unsigned_to_nat(0u);
v___x_885_ = 0;
v___x_886_ = lean_task_map(v___f_882_, v___x_883_, v___x_884_, v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___boxed(lean_object* v_x_887_, lean_object* v_error_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Std_Async_AsyncTask_ofPromise___redArg(v_x_887_, v_error_888_);
lean_dec(v_x_887_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise(lean_object* v_00_u03b1_890_, lean_object* v_x_891_, lean_object* v_error_892_){
_start:
{
lean_object* v___f_893_; lean_object* v___x_894_; lean_object* v___x_895_; uint8_t v___x_896_; lean_object* v___x_897_; 
v___f_893_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_893_, 0, v_error_892_);
v___x_894_ = lean_io_promise_result_opt(v_x_891_);
v___x_895_ = lean_unsigned_to_nat(0u);
v___x_896_ = 0;
v___x_897_ = lean_task_map(v___f_893_, v___x_894_, v___x_895_, v___x_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___boxed(lean_object* v_00_u03b1_898_, lean_object* v_x_899_, lean_object* v_error_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Std_Async_AsyncTask_ofPromise(v_00_u03b1_898_, v_x_899_, v_error_900_);
lean_dec(v_x_899_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0(lean_object* v_error_902_, lean_object* v_x_903_){
_start:
{
if (lean_obj_tag(v_x_903_) == 0)
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = lean_mk_io_user_error(v_error_902_);
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
else
{
lean_object* v_val_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
lean_dec_ref(v_error_902_);
v_val_906_ = lean_ctor_get(v_x_903_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v_x_903_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v_x_903_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_val_906_);
lean_dec(v_x_903_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_val_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg(lean_object* v_x_914_, lean_object* v_error_915_){
_start:
{
lean_object* v___f_916_; lean_object* v___x_917_; lean_object* v___x_918_; uint8_t v___x_919_; lean_object* v___x_920_; 
v___f_916_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_916_, 0, v_error_915_);
v___x_917_ = lean_io_promise_result_opt(v_x_914_);
v___x_918_ = lean_unsigned_to_nat(0u);
v___x_919_ = 1;
v___x_920_ = lean_task_map(v___f_916_, v___x_917_, v___x_918_, v___x_919_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg___boxed(lean_object* v_x_921_, lean_object* v_error_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Std_Async_AsyncTask_ofPurePromise___redArg(v_x_921_, v_error_922_);
lean_dec(v_x_921_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise(lean_object* v_00_u03b1_924_, lean_object* v_x_925_, lean_object* v_error_926_){
_start:
{
lean_object* v___f_927_; lean_object* v___x_928_; lean_object* v___x_929_; uint8_t v___x_930_; lean_object* v___x_931_; 
v___f_927_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_927_, 0, v_error_926_);
v___x_928_ = lean_io_promise_result_opt(v_x_925_);
v___x_929_ = lean_unsigned_to_nat(0u);
v___x_930_ = 1;
v___x_931_ = lean_task_map(v___f_927_, v___x_928_, v___x_929_, v___x_930_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___boxed(lean_object* v_00_u03b1_932_, lean_object* v_x_933_, lean_object* v_error_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Std_Async_AsyncTask_ofPurePromise(v_00_u03b1_932_, v_x_933_, v_error_934_);
lean_dec(v_x_933_);
return v_res_935_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_AsyncTask_getState___redArg(lean_object* v_x_936_){
_start:
{
uint8_t v___x_938_; 
v___x_938_ = lean_io_get_task_state(v_x_936_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_getState___redArg___boxed(lean_object* v_x_939_, lean_object* v_a_940_){
_start:
{
uint8_t v_res_941_; lean_object* v_r_942_; 
v_res_941_ = l_Std_Async_AsyncTask_getState___redArg(v_x_939_);
lean_dec_ref(v_x_939_);
v_r_942_ = lean_box(v_res_941_);
return v_r_942_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_AsyncTask_getState(lean_object* v_00_u03b1_943_, lean_object* v_x_944_){
_start:
{
uint8_t v___x_946_; 
v___x_946_ = lean_io_get_task_state(v_x_944_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_getState___boxed(lean_object* v_00_u03b1_947_, lean_object* v_x_948_, lean_object* v_a_949_){
_start:
{
uint8_t v_res_950_; lean_object* v_r_951_; 
v_res_950_ = l_Std_Async_AsyncTask_getState(v_00_u03b1_947_, v_x_948_);
lean_dec_ref(v_x_948_);
v_r_951_ = lean_box(v_res_950_);
return v_r_951_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___redArg(lean_object* v_x_952_){
_start:
{
if (lean_obj_tag(v_x_952_) == 0)
{
lean_object* v___x_953_; 
v___x_953_ = lean_unsigned_to_nat(0u);
return v___x_953_;
}
else
{
lean_object* v___x_954_; 
v___x_954_ = lean_unsigned_to_nat(1u);
return v___x_954_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___redArg___boxed(lean_object* v_x_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Std_Async_MaybeTask_ctorIdx___redArg(v_x_955_);
lean_dec_ref(v_x_955_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx(lean_object* v_00_u03b1_957_, lean_object* v_x_958_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l_Std_Async_MaybeTask_ctorIdx___redArg(v_x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___boxed(lean_object* v_00_u03b1_960_, lean_object* v_x_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Std_Async_MaybeTask_ctorIdx(v_00_u03b1_960_, v_x_961_);
lean_dec_ref(v_x_961_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim___redArg(lean_object* v_t_963_, lean_object* v_k_964_){
_start:
{
if (lean_obj_tag(v_t_963_) == 0)
{
lean_object* v_a_965_; lean_object* v___x_966_; 
v_a_965_ = lean_ctor_get(v_t_963_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v_t_963_, 1);
v___x_966_ = lean_apply_1(v_k_964_, v_a_965_);
return v___x_966_;
}
else
{
lean_object* v_a_967_; lean_object* v___x_968_; 
v_a_967_ = lean_ctor_get(v_t_963_, 0);
lean_inc_ref(v_a_967_);
lean_dec_ref_known(v_t_963_, 1);
v___x_968_ = lean_apply_1(v_k_964_, v_a_967_);
return v___x_968_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim(lean_object* v_00_u03b1_969_, lean_object* v_motive_970_, lean_object* v_ctorIdx_971_, lean_object* v_t_972_, lean_object* v_h_973_, lean_object* v_k_974_){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = l_Std_Async_MaybeTask_ctorElim___redArg(v_t_972_, v_k_974_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim___boxed(lean_object* v_00_u03b1_976_, lean_object* v_motive_977_, lean_object* v_ctorIdx_978_, lean_object* v_t_979_, lean_object* v_h_980_, lean_object* v_k_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Std_Async_MaybeTask_ctorElim(v_00_u03b1_976_, v_motive_977_, v_ctorIdx_978_, v_t_979_, v_h_980_, v_k_981_);
lean_dec(v_ctorIdx_978_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_pure_elim___redArg(lean_object* v_t_983_, lean_object* v_pure_984_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_Std_Async_MaybeTask_ctorElim___redArg(v_t_983_, v_pure_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_pure_elim(lean_object* v_00_u03b1_986_, lean_object* v_motive_987_, lean_object* v_t_988_, lean_object* v_h_989_, lean_object* v_pure_990_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = l_Std_Async_MaybeTask_ctorElim___redArg(v_t_988_, v_pure_990_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ofTask_elim___redArg(lean_object* v_t_992_, lean_object* v_ofTask_993_){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = l_Std_Async_MaybeTask_ctorElim___redArg(v_t_992_, v_ofTask_993_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ofTask_elim(lean_object* v_00_u03b1_995_, lean_object* v_motive_996_, lean_object* v_t_997_, lean_object* v_h_998_, lean_object* v_ofTask_999_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l_Std_Async_MaybeTask_ctorElim___redArg(v_t_997_, v_ofTask_999_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_toTask___redArg(lean_object* v_x_1001_){
_start:
{
if (lean_obj_tag(v_x_1001_) == 0)
{
lean_object* v_a_1002_; lean_object* v___x_1003_; 
v_a_1002_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_a_1002_);
lean_dec_ref_known(v_x_1001_, 1);
v___x_1003_ = lean_task_pure(v_a_1002_);
return v___x_1003_;
}
else
{
lean_object* v_a_1004_; 
v_a_1004_ = lean_ctor_get(v_x_1001_, 0);
lean_inc_ref(v_a_1004_);
lean_dec_ref_known(v_x_1001_, 1);
return v_a_1004_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_toTask(lean_object* v_00_u03b1_1005_, lean_object* v_x_1006_){
_start:
{
if (lean_obj_tag(v_x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; 
v_a_1007_ = lean_ctor_get(v_x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v_x_1006_, 1);
v___x_1008_ = lean_task_pure(v_a_1007_);
return v___x_1008_;
}
else
{
lean_object* v_a_1009_; 
v_a_1009_ = lean_ctor_get(v_x_1006_, 0);
lean_inc_ref(v_a_1009_);
lean_dec_ref_known(v_x_1006_, 1);
return v_a_1009_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_get___redArg(lean_object* v_x_1010_){
_start:
{
if (lean_obj_tag(v_x_1010_) == 0)
{
lean_object* v_a_1011_; 
v_a_1011_ = lean_ctor_get(v_x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v_x_1010_, 1);
return v_a_1011_;
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1013_; 
v_a_1012_ = lean_ctor_get(v_x_1010_, 0);
lean_inc_ref(v_a_1012_);
lean_dec_ref_known(v_x_1010_, 1);
v___x_1013_ = lean_task_get_own(v_a_1012_);
return v___x_1013_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_get(lean_object* v_00_u03b1_1014_, lean_object* v_x_1015_){
_start:
{
if (lean_obj_tag(v_x_1015_) == 0)
{
lean_object* v_a_1016_; 
v_a_1016_ = lean_ctor_get(v_x_1015_, 0);
lean_inc(v_a_1016_);
lean_dec_ref_known(v_x_1015_, 1);
return v_a_1016_;
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1018_; 
v_a_1017_ = lean_ctor_get(v_x_1015_, 0);
lean_inc_ref(v_a_1017_);
lean_dec_ref_known(v_x_1015_, 1);
v___x_1018_ = lean_task_get_own(v_a_1017_);
return v___x_1018_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___redArg(lean_object* v_f_1019_, lean_object* v_prio_1020_, uint8_t v_sync_1021_, lean_object* v_x_1022_){
_start:
{
if (lean_obj_tag(v_x_1022_) == 0)
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1031_; 
lean_dec(v_prio_1020_);
v_a_1023_ = lean_ctor_get(v_x_1022_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v_x_1022_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1025_ = v_x_1022_;
v_isShared_1026_ = v_isSharedCheck_1031_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v_x_1022_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1031_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1027_; lean_object* v___x_1029_; 
v___x_1027_ = lean_apply_1(v_f_1019_, v_a_1023_);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 0, v___x_1027_);
v___x_1029_ = v___x_1025_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1040_; 
v_a_1032_ = lean_ctor_get(v_x_1022_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v_x_1022_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1034_ = v_x_1022_;
v_isShared_1035_ = v_isSharedCheck_1040_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v_x_1022_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1040_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1036_; lean_object* v___x_1038_; 
v___x_1036_ = lean_task_map(v_f_1019_, v_a_1032_, v_prio_1020_, v_sync_1021_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 0, v___x_1036_);
v___x_1038_ = v___x_1034_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___redArg___boxed(lean_object* v_f_1041_, lean_object* v_prio_1042_, lean_object* v_sync_1043_, lean_object* v_x_1044_){
_start:
{
uint8_t v_sync_boxed_1045_; lean_object* v_res_1046_; 
v_sync_boxed_1045_ = lean_unbox(v_sync_1043_);
v_res_1046_ = l_Std_Async_MaybeTask_map___redArg(v_f_1041_, v_prio_1042_, v_sync_boxed_1045_, v_x_1044_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map(lean_object* v_00_u03b1_1047_, lean_object* v_00_u03b2_1048_, lean_object* v_f_1049_, lean_object* v_prio_1050_, uint8_t v_sync_1051_, lean_object* v_x_1052_){
_start:
{
if (lean_obj_tag(v_x_1052_) == 0)
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1061_; 
lean_dec(v_prio_1050_);
v_a_1053_ = lean_ctor_get(v_x_1052_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_x_1052_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1055_ = v_x_1052_;
v_isShared_1056_ = v_isSharedCheck_1061_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v_x_1052_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1061_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1057_ = lean_apply_1(v_f_1049_, v_a_1053_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v___x_1057_);
v___x_1059_ = v___x_1055_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1070_; 
v_a_1062_ = lean_ctor_get(v_x_1052_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_x_1052_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1064_ = v_x_1052_;
v_isShared_1065_ = v_isSharedCheck_1070_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v_x_1052_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1070_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1066_; lean_object* v___x_1068_; 
v___x_1066_ = lean_task_map(v_f_1049_, v_a_1062_, v_prio_1050_, v_sync_1051_);
if (v_isShared_1065_ == 0)
{
lean_ctor_set(v___x_1064_, 0, v___x_1066_);
v___x_1068_ = v___x_1064_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1066_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___boxed(lean_object* v_00_u03b1_1071_, lean_object* v_00_u03b2_1072_, lean_object* v_f_1073_, lean_object* v_prio_1074_, lean_object* v_sync_1075_, lean_object* v_x_1076_){
_start:
{
uint8_t v_sync_boxed_1077_; lean_object* v_res_1078_; 
v_sync_boxed_1077_ = lean_unbox(v_sync_1075_);
v_res_1078_ = l_Std_Async_MaybeTask_map(v_00_u03b1_1071_, v_00_u03b2_1072_, v_f_1073_, v_prio_1074_, v_sync_boxed_1077_, v_x_1076_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg___lam__0(lean_object* v_f_1079_, lean_object* v_x_1080_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = lean_apply_1(v_f_1079_, v_x_1080_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1083_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v___x_1081_, 1);
v___x_1083_ = lean_task_pure(v_a_1082_);
return v___x_1083_;
}
else
{
lean_object* v_a_1084_; 
v_a_1084_ = lean_ctor_get(v___x_1081_, 0);
lean_inc_ref(v_a_1084_);
lean_dec_ref_known(v___x_1081_, 1);
return v_a_1084_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg(lean_object* v_t_1085_, lean_object* v_f_1086_, lean_object* v_prio_1087_, uint8_t v_sync_1088_){
_start:
{
if (lean_obj_tag(v_t_1085_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1090_; 
lean_dec(v_prio_1087_);
v_a_1089_ = lean_ctor_get(v_t_1085_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v_t_1085_, 1);
v___x_1090_ = lean_apply_1(v_f_1086_, v_a_1089_);
return v___x_1090_;
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1100_; 
v_a_1091_ = lean_ctor_get(v_t_1085_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_t_1085_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1093_ = v_t_1085_;
v_isShared_1094_ = v_isSharedCheck_1100_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v_t_1085_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1100_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___f_1095_; lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___f_1095_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1095_, 0, v_f_1086_);
v___x_1096_ = lean_task_bind(v_a_1091_, v___f_1095_, v_prio_1087_, v_sync_1088_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v___x_1096_);
v___x_1098_ = v___x_1093_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg___boxed(lean_object* v_t_1101_, lean_object* v_f_1102_, lean_object* v_prio_1103_, lean_object* v_sync_1104_){
_start:
{
uint8_t v_sync_boxed_1105_; lean_object* v_res_1106_; 
v_sync_boxed_1105_ = lean_unbox(v_sync_1104_);
v_res_1106_ = l_Std_Async_MaybeTask_bind___redArg(v_t_1101_, v_f_1102_, v_prio_1103_, v_sync_boxed_1105_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind(lean_object* v_00_u03b1_1107_, lean_object* v_00_u03b2_1108_, lean_object* v_t_1109_, lean_object* v_f_1110_, lean_object* v_prio_1111_, uint8_t v_sync_1112_){
_start:
{
if (lean_obj_tag(v_t_1109_) == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1114_; 
lean_dec(v_prio_1111_);
v_a_1113_ = lean_ctor_get(v_t_1109_, 0);
lean_inc(v_a_1113_);
lean_dec_ref_known(v_t_1109_, 1);
v___x_1114_ = lean_apply_1(v_f_1110_, v_a_1113_);
return v___x_1114_;
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1124_; 
v_a_1115_ = lean_ctor_get(v_t_1109_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v_t_1109_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1117_ = v_t_1109_;
v_isShared_1118_ = v_isSharedCheck_1124_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v_t_1109_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1124_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___f_1119_; lean_object* v___x_1120_; lean_object* v___x_1122_; 
v___f_1119_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1119_, 0, v_f_1110_);
v___x_1120_ = lean_task_bind(v_a_1115_, v___f_1119_, v_prio_1111_, v_sync_1112_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 0, v___x_1120_);
v___x_1122_ = v___x_1117_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1120_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___boxed(lean_object* v_00_u03b1_1125_, lean_object* v_00_u03b2_1126_, lean_object* v_t_1127_, lean_object* v_f_1128_, lean_object* v_prio_1129_, lean_object* v_sync_1130_){
_start:
{
uint8_t v_sync_boxed_1131_; lean_object* v_res_1132_; 
v_sync_boxed_1131_ = lean_unbox(v_sync_1130_);
v_res_1132_ = l_Std_Async_MaybeTask_bind(v_00_u03b1_1125_, v_00_u03b2_1126_, v_t_1127_, v_f_1128_, v_prio_1129_, v_sync_boxed_1131_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask___redArg___lam__0(lean_object* v_x_1133_){
_start:
{
if (lean_obj_tag(v_x_1133_) == 0)
{
lean_object* v_a_1134_; lean_object* v___x_1135_; 
v_a_1134_ = lean_ctor_get(v_x_1133_, 0);
lean_inc(v_a_1134_);
lean_dec_ref_known(v_x_1133_, 1);
v___x_1135_ = lean_task_pure(v_a_1134_);
return v___x_1135_;
}
else
{
lean_object* v_a_1136_; 
v_a_1136_ = lean_ctor_get(v_x_1133_, 0);
lean_inc_ref(v_a_1136_);
lean_dec_ref_known(v_x_1133_, 1);
return v_a_1136_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask___redArg(lean_object* v_t_1138_){
_start:
{
lean_object* v___f_1139_; lean_object* v___x_1140_; uint8_t v___x_1141_; lean_object* v___x_1142_; 
v___f_1139_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1140_ = lean_unsigned_to_nat(0u);
v___x_1141_ = 1;
v___x_1142_ = lean_task_bind(v_t_1138_, v___f_1139_, v___x_1140_, v___x_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask(lean_object* v_00_u03b1_1143_, lean_object* v_t_1144_){
_start:
{
lean_object* v___f_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; lean_object* v___x_1148_; 
v___f_1145_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1146_ = lean_unsigned_to_nat(0u);
v___x_1147_ = 1;
v___x_1148_ = lean_task_bind(v_t_1144_, v___f_1145_, v___x_1146_, v___x_1147_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instFunctor___lam__0(lean_object* v_00_u03b1_1149_, lean_object* v_00_u03b2_1150_, lean_object* v_f_1151_, lean_object* v___y_1152_){
_start:
{
if (lean_obj_tag(v___y_1152_) == 0)
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1161_; 
v_a_1153_ = lean_ctor_get(v___y_1152_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___y_1152_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1155_ = v___y_1152_;
v_isShared_1156_ = v_isSharedCheck_1161_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___y_1152_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1161_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; lean_object* v___x_1159_; 
v___x_1157_ = lean_apply_1(v_f_1151_, v_a_1153_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1157_);
v___x_1159_ = v___x_1155_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1157_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
else
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1172_; 
v_a_1162_ = lean_ctor_get(v___y_1152_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___y_1152_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1164_ = v___y_1152_;
v_isShared_1165_ = v_isSharedCheck_1172_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___y_1152_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1172_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1166_; uint8_t v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1166_ = lean_unsigned_to_nat(0u);
v___x_1167_ = 0;
v___x_1168_ = lean_task_map(v_f_1151_, v_a_1162_, v___x_1166_, v___x_1167_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v___x_1168_);
v___x_1170_ = v___x_1164_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1168_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instFunctor___lam__1(lean_object* v___f_1173_, lean_object* v_00_u03b1_1174_, lean_object* v_00_u03b2_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_1178_, 0, lean_box(0));
lean_closure_set(v___x_1178_, 1, lean_box(0));
lean_closure_set(v___x_1178_, 2, v___y_1176_);
v___x_1179_ = lean_apply_4(v___f_1173_, lean_box(0), lean_box(0), v___x_1178_, v___y_1177_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__0(lean_object* v_00_u03b1_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1189_, 0, v___y_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__1(lean_object* v_x_1190_, lean_object* v_y_1191_){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_box(0);
v___x_1193_ = lean_apply_1(v_x_1190_, v___x_1192_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1202_; 
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1196_ = v___x_1193_;
v_isShared_1197_ = v_isSharedCheck_1202_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1193_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1202_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1198_; lean_object* v___x_1200_; 
v___x_1198_ = lean_apply_1(v_y_1191_, v_a_1194_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 0, v___x_1198_);
v___x_1200_ = v___x_1196_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
else
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1213_; 
v_a_1203_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1205_ = v___x_1193_;
v_isShared_1206_ = v_isSharedCheck_1213_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1193_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1213_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1207_; uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1211_; 
v___x_1207_ = lean_unsigned_to_nat(0u);
v___x_1208_ = 0;
v___x_1209_ = lean_task_map(v_y_1191_, v_a_1203_, v___x_1207_, v___x_1208_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1209_);
v___x_1211_ = v___x_1205_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__2(lean_object* v___f_1214_, lean_object* v_x_1215_){
_start:
{
lean_object* v___x_1216_; 
v___x_1216_ = lean_apply_1(v___f_1214_, v_x_1215_);
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_a_1217_; lean_object* v___x_1218_; 
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_a_1217_);
lean_dec_ref_known(v___x_1216_, 1);
v___x_1218_ = lean_task_pure(v_a_1217_);
return v___x_1218_;
}
else
{
lean_object* v_a_1219_; 
v_a_1219_ = lean_ctor_get(v___x_1216_, 0);
lean_inc_ref(v_a_1219_);
lean_dec_ref_known(v___x_1216_, 1);
return v_a_1219_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__3(lean_object* v_00_u03b1_1220_, lean_object* v_00_u03b2_1221_, lean_object* v_f_1222_, lean_object* v_x_1223_){
_start:
{
lean_object* v___f_1224_; 
lean_inc_ref(v_x_1223_);
v___f_1224_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__1), 2, 1);
lean_closure_set(v___f_1224_, 0, v_x_1223_);
if (lean_obj_tag(v_f_1222_) == 0)
{
lean_object* v_a_1225_; lean_object* v___x_1226_; 
lean_dec_ref(v___f_1224_);
v_a_1225_ = lean_ctor_get(v_f_1222_, 0);
lean_inc(v_a_1225_);
lean_dec_ref_known(v_f_1222_, 1);
v___x_1226_ = l_Std_Async_MaybeTask_instMonad___lam__1(v_x_1223_, v_a_1225_);
return v___x_1226_;
}
else
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1238_; 
lean_dec_ref(v_x_1223_);
v_a_1227_ = lean_ctor_get(v_f_1222_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_f_1222_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1229_ = v_f_1222_;
v_isShared_1230_ = v_isSharedCheck_1238_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v_f_1222_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1238_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___f_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1236_; 
v___f_1231_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__2), 2, 1);
lean_closure_set(v___f_1231_, 0, v___f_1224_);
v___x_1232_ = lean_unsigned_to_nat(0u);
v___x_1233_ = 0;
v___x_1234_ = lean_task_bind(v_a_1227_, v___f_1231_, v___x_1232_, v___x_1233_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 0, v___x_1234_);
v___x_1236_ = v___x_1229_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v___x_1234_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__5(lean_object* v_00_u03b1_1239_, lean_object* v_00_u03b2_1240_, lean_object* v_t_1241_, lean_object* v_f_1242_){
_start:
{
if (lean_obj_tag(v_t_1241_) == 0)
{
lean_object* v_a_1243_; lean_object* v___x_1244_; 
v_a_1243_ = lean_ctor_get(v_t_1241_, 0);
lean_inc(v_a_1243_);
lean_dec_ref_known(v_t_1241_, 1);
v___x_1244_ = lean_apply_1(v_f_1242_, v_a_1243_);
return v___x_1244_;
}
else
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1256_; 
v_a_1245_ = lean_ctor_get(v_t_1241_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v_t_1241_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1247_ = v_t_1241_;
v_isShared_1248_ = v_isSharedCheck_1256_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v_t_1241_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1256_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___f_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1254_; 
v___f_1249_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1249_, 0, v_f_1242_);
v___x_1250_ = lean_unsigned_to_nat(0u);
v___x_1251_ = 0;
v___x_1252_ = lean_task_bind(v_a_1245_, v___f_1249_, v___x_1250_, v___x_1251_);
if (v_isShared_1248_ == 0)
{
lean_ctor_set(v___x_1247_, 0, v___x_1252_);
v___x_1254_ = v___x_1247_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1252_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__4(lean_object* v_a_1257_, lean_object* v_x_1258_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1259_, 0, v_a_1257_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__4___boxed(lean_object* v_a_1260_, lean_object* v_x_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Std_Async_MaybeTask_instMonad___lam__4(v_a_1260_, v_x_1261_);
lean_dec(v_x_1261_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__6(lean_object* v_y_1263_, lean_object* v___f_1264_, lean_object* v_a_1265_){
_start:
{
lean_object* v___f_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___f_1266_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__4___boxed), 2, 1);
lean_closure_set(v___f_1266_, 0, v_a_1265_);
v___x_1267_ = lean_box(0);
v___x_1268_ = lean_apply_1(v_y_1263_, v___x_1267_);
v___x_1269_ = lean_apply_4(v___f_1264_, lean_box(0), lean_box(0), v___x_1268_, v___f_1266_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__7(lean_object* v___f_1270_, lean_object* v_00_u03b1_1271_, lean_object* v_00_u03b2_1272_, lean_object* v_x_1273_, lean_object* v_y_1274_){
_start:
{
lean_object* v___f_1275_; lean_object* v___x_1276_; 
lean_inc_ref(v___f_1270_);
v___f_1275_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__6), 3, 2);
lean_closure_set(v___f_1275_, 0, v_y_1274_);
lean_closure_set(v___f_1275_, 1, v___f_1270_);
v___x_1276_ = lean_apply_4(v___f_1270_, lean_box(0), lean_box(0), v_x_1273_, v___f_1275_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__8(lean_object* v_y_1277_, lean_object* v_x_1278_){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = lean_box(0);
v___x_1280_ = lean_apply_1(v_y_1277_, v___x_1279_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__8___boxed(lean_object* v_y_1281_, lean_object* v_x_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Std_Async_MaybeTask_instMonad___lam__8(v_y_1281_, v_x_1282_);
lean_dec(v_x_1282_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__9(lean_object* v___f_1284_, lean_object* v_x_1285_){
_start:
{
lean_object* v___x_1286_; 
v___x_1286_ = lean_apply_1(v___f_1284_, v_x_1285_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1288_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_a_1287_);
lean_dec_ref_known(v___x_1286_, 1);
v___x_1288_ = lean_task_pure(v_a_1287_);
return v___x_1288_;
}
else
{
lean_object* v_a_1289_; 
v_a_1289_ = lean_ctor_get(v___x_1286_, 0);
lean_inc_ref(v_a_1289_);
lean_dec_ref_known(v___x_1286_, 1);
return v_a_1289_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__10(lean_object* v_00_u03b1_1290_, lean_object* v_00_u03b2_1291_, lean_object* v_x_1292_, lean_object* v_y_1293_){
_start:
{
lean_object* v___f_1294_; 
lean_inc_ref(v_y_1293_);
v___f_1294_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__8___boxed), 2, 1);
lean_closure_set(v___f_1294_, 0, v_y_1293_);
if (lean_obj_tag(v_x_1292_) == 0)
{
lean_object* v_a_1295_; lean_object* v___x_1296_; 
lean_dec_ref(v___f_1294_);
v_a_1295_ = lean_ctor_get(v_x_1292_, 0);
lean_inc(v_a_1295_);
lean_dec_ref_known(v_x_1292_, 1);
v___x_1296_ = l_Std_Async_MaybeTask_instMonad___lam__8(v_y_1293_, v_a_1295_);
lean_dec(v_a_1295_);
return v___x_1296_;
}
else
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1308_; 
lean_dec_ref(v_y_1293_);
v_a_1297_ = lean_ctor_get(v_x_1292_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v_x_1292_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1299_ = v_x_1292_;
v_isShared_1300_ = v_isSharedCheck_1308_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v_x_1292_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1308_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___f_1301_; lean_object* v___x_1302_; uint8_t v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1306_; 
v___f_1301_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__9), 2, 1);
lean_closure_set(v___f_1301_, 0, v___f_1294_);
v___x_1302_ = lean_unsigned_to_nat(0u);
v___x_1303_ = 0;
v___x_1304_ = lean_task_bind(v_a_1297_, v___f_1301_, v___x_1302_, v___x_1303_);
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v___x_1304_);
v___x_1306_ = v___x_1299_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v___x_1304_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___redArg(lean_object* v_x_1325_){
_start:
{
lean_object* v___x_1327_; 
v___x_1327_ = lean_apply_1(v_x_1325_, lean_box(0));
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___redArg___boxed(lean_object* v_x_1328_, lean_object* v_a_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l_Std_Async_BaseAsync_mk___redArg(v_x_1328_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk(lean_object* v_00_u03b1_1331_, lean_object* v_x_1332_){
_start:
{
lean_object* v___x_1334_; 
v___x_1334_ = lean_apply_1(v_x_1332_, lean_box(0));
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___boxed(lean_object* v_00_u03b1_1335_, lean_object* v_x_1336_, lean_object* v_a_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Std_Async_BaseAsync_mk(v_00_u03b1_1335_, v_x_1336_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___redArg(lean_object* v_x_1339_){
_start:
{
lean_object* v___x_1341_; 
v___x_1341_ = lean_apply_1(v_x_1339_, lean_box(0));
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___redArg___boxed(lean_object* v_x_1342_, lean_object* v_a_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Std_Async_BaseAsync_toRawBaseIO___redArg(v_x_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO(lean_object* v_00_u03b1_1345_, lean_object* v_x_1346_){
_start:
{
lean_object* v___x_1348_; 
v___x_1348_ = lean_apply_1(v_x_1346_, lean_box(0));
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object* v_00_u03b1_1349_, lean_object* v_x_1350_, lean_object* v_a_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Std_Async_BaseAsync_toRawBaseIO(v_00_u03b1_1349_, v_x_1350_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___redArg(lean_object* v_x_1353_){
_start:
{
lean_object* v___x_1355_; 
v___x_1355_ = lean_apply_1(v_x_1353_, lean_box(0));
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v___x_1357_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
lean_dec_ref_known(v___x_1355_, 1);
v___x_1357_ = lean_task_pure(v_a_1356_);
return v___x_1357_;
}
else
{
lean_object* v_a_1358_; 
v_a_1358_ = lean_ctor_get(v___x_1355_, 0);
lean_inc_ref(v_a_1358_);
lean_dec_ref_known(v___x_1355_, 1);
return v_a_1358_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___redArg___boxed(lean_object* v_x_1359_, lean_object* v_a_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Std_Async_BaseAsync_toBaseIO___redArg(v_x_1359_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO(lean_object* v_00_u03b1_1362_, lean_object* v_x_1363_){
_start:
{
lean_object* v___x_1365_; 
v___x_1365_ = lean_apply_1(v_x_1363_, lean_box(0));
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_object* v_a_1366_; lean_object* v___x_1367_; 
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_a_1366_);
lean_dec_ref_known(v___x_1365_, 1);
v___x_1367_ = lean_task_pure(v_a_1366_);
return v___x_1367_;
}
else
{
lean_object* v_a_1368_; 
v_a_1368_ = lean_ctor_get(v___x_1365_, 0);
lean_inc_ref(v_a_1368_);
lean_dec_ref_known(v___x_1365_, 1);
return v_a_1368_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___boxed(lean_object* v_00_u03b1_1369_, lean_object* v_x_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Std_Async_BaseAsync_toBaseIO(v_00_u03b1_1369_, v_x_1370_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___redArg(lean_object* v_x_1373_){
_start:
{
lean_object* v___x_1375_; 
v___x_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1375_, 0, v_x_1373_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___redArg___boxed(lean_object* v_x_1376_, lean_object* v_a_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_Std_Async_BaseAsync_ofTask___redArg(v_x_1376_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask(lean_object* v_00_u03b1_1379_, lean_object* v_x_1380_){
_start:
{
lean_object* v___x_1382_; 
v___x_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1382_, 0, v_x_1380_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___boxed(lean_object* v_00_u03b1_1383_, lean_object* v_x_1384_, lean_object* v_a_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l_Std_Async_BaseAsync_ofTask(v_00_u03b1_1383_, v_x_1384_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___redArg(lean_object* v_a_1387_){
_start:
{
lean_object* v___x_1389_; 
v___x_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1389_, 0, v_a_1387_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___redArg___boxed(lean_object* v_a_1390_, lean_object* v_a_1391_){
_start:
{
lean_object* v_res_1392_; 
v_res_1392_ = l_Std_Async_BaseAsync_pure___redArg(v_a_1390_);
return v_res_1392_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure(lean_object* v_00_u03b1_1393_, lean_object* v_a_1394_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1396_, 0, v_a_1394_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___boxed(lean_object* v_00_u03b1_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_){
_start:
{
lean_object* v_res_1400_; 
v_res_1400_ = l_Std_Async_BaseAsync_pure(v_00_u03b1_1397_, v_a_1398_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___redArg(lean_object* v_f_1401_, lean_object* v_self_1402_, lean_object* v_prio_1403_, uint8_t v_sync_1404_){
_start:
{
lean_object* v___x_1406_; 
v___x_1406_ = lean_apply_1(v_self_1402_, lean_box(0));
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1415_; 
lean_dec(v_prio_1403_);
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1409_ = v___x_1406_;
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1406_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1411_ = lean_apply_1(v_f_1401_, v_a_1407_);
if (v_isShared_1410_ == 0)
{
lean_ctor_set(v___x_1409_, 0, v___x_1411_);
v___x_1413_ = v___x_1409_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
else
{
lean_object* v_a_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1424_; 
v_a_1416_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1418_ = v___x_1406_;
v_isShared_1419_ = v_isSharedCheck_1424_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_a_1416_);
lean_dec(v___x_1406_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1424_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1420_; lean_object* v___x_1422_; 
v___x_1420_ = lean_task_map(v_f_1401_, v_a_1416_, v_prio_1403_, v_sync_1404_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 0, v___x_1420_);
v___x_1422_ = v___x_1418_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v___x_1420_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___redArg___boxed(lean_object* v_f_1425_, lean_object* v_self_1426_, lean_object* v_prio_1427_, lean_object* v_sync_1428_, lean_object* v_a_1429_){
_start:
{
uint8_t v_sync_boxed_1430_; lean_object* v_res_1431_; 
v_sync_boxed_1430_ = lean_unbox(v_sync_1428_);
v_res_1431_ = l_Std_Async_BaseAsync_map___redArg(v_f_1425_, v_self_1426_, v_prio_1427_, v_sync_boxed_1430_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map(lean_object* v_00_u03b1_1432_, lean_object* v_00_u03b2_1433_, lean_object* v_f_1434_, lean_object* v_self_1435_, lean_object* v_prio_1436_, uint8_t v_sync_1437_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = lean_apply_1(v_self_1435_, lean_box(0));
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1448_; 
lean_dec(v_prio_1436_);
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1442_ = v___x_1439_;
v_isShared_1443_ = v_isSharedCheck_1448_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_a_1440_);
lean_dec(v___x_1439_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1448_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1444_; lean_object* v___x_1446_; 
v___x_1444_ = lean_apply_1(v_f_1434_, v_a_1440_);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 0, v___x_1444_);
v___x_1446_ = v___x_1442_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1444_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1457_; 
v_a_1449_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1451_ = v___x_1439_;
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1439_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1453_; lean_object* v___x_1455_; 
v___x_1453_ = lean_task_map(v_f_1434_, v_a_1449_, v_prio_1436_, v_sync_1437_);
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 0, v___x_1453_);
v___x_1455_ = v___x_1451_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___boxed(lean_object* v_00_u03b1_1458_, lean_object* v_00_u03b2_1459_, lean_object* v_f_1460_, lean_object* v_self_1461_, lean_object* v_prio_1462_, lean_object* v_sync_1463_, lean_object* v_a_1464_){
_start:
{
uint8_t v_sync_boxed_1465_; lean_object* v_res_1466_; 
v_sync_boxed_1465_ = lean_unbox(v_sync_1463_);
v_res_1466_ = l_Std_Async_BaseAsync_map(v_00_u03b1_1458_, v_00_u03b2_1459_, v_f_1460_, v_self_1461_, v_prio_1462_, v_sync_boxed_1465_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(lean_object* v_f_1467_, lean_object* v_a_1468_){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_apply_2(v_f_1467_, v_a_1468_, lean_box(0));
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1472_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_a_1471_);
lean_dec_ref_known(v___x_1470_, 1);
v___x_1472_ = lean_task_pure(v_a_1471_);
return v___x_1472_;
}
else
{
lean_object* v_a_1473_; 
v_a_1473_ = lean_ctor_get(v___x_1470_, 0);
lean_inc_ref(v_a_1473_);
lean_dec_ref_known(v___x_1470_, 1);
return v_a_1473_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed(lean_object* v_f_1474_, lean_object* v_a_1475_, lean_object* v___y_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(v_f_1474_, v_a_1475_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object* v_prio_1478_, uint8_t v_sync_1479_, lean_object* v_t_1480_, lean_object* v_f_1481_){
_start:
{
if (lean_obj_tag(v_t_1480_) == 0)
{
lean_object* v_a_1483_; lean_object* v___x_1484_; 
lean_dec(v_prio_1478_);
v_a_1483_ = lean_ctor_get(v_t_1480_, 0);
lean_inc(v_a_1483_);
lean_dec_ref_known(v_t_1480_, 1);
v___x_1484_ = lean_apply_2(v_f_1481_, v_a_1483_, lean_box(0));
return v___x_1484_;
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1494_; 
v_a_1485_ = lean_ctor_get(v_t_1480_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v_t_1480_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1487_ = v_t_1480_;
v_isShared_1488_ = v_isSharedCheck_1494_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v_t_1480_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1494_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___f_1489_; lean_object* v___x_1490_; lean_object* v___x_1492_; 
v___f_1489_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1489_, 0, v_f_1481_);
v___x_1490_ = lean_io_bind_task(v_a_1485_, v___f_1489_, v_prio_1478_, v_sync_1479_);
if (v_isShared_1488_ == 0)
{
lean_ctor_set(v___x_1487_, 0, v___x_1490_);
v___x_1492_ = v___x_1487_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___boxed(lean_object* v_prio_1495_, lean_object* v_sync_1496_, lean_object* v_t_1497_, lean_object* v_f_1498_, lean_object* v_a_1499_){
_start:
{
uint8_t v_sync_boxed_1500_; lean_object* v_res_1501_; 
v_sync_boxed_1500_ = lean_unbox(v_sync_1496_);
v_res_1501_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1495_, v_sync_boxed_1500_, v_t_1497_, v_f_1498_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object* v_00_u03b1_1502_, lean_object* v_00_u03b2_1503_, lean_object* v_prio_1504_, uint8_t v_sync_1505_, lean_object* v_t_1506_, lean_object* v_f_1507_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1504_, v_sync_1505_, v_t_1506_, v_f_1507_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___boxed(lean_object* v_00_u03b1_1510_, lean_object* v_00_u03b2_1511_, lean_object* v_prio_1512_, lean_object* v_sync_1513_, lean_object* v_t_1514_, lean_object* v_f_1515_, lean_object* v_a_1516_){
_start:
{
uint8_t v_sync_boxed_1517_; lean_object* v_res_1518_; 
v_sync_boxed_1517_ = lean_unbox(v_sync_1513_);
v_res_1518_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(v_00_u03b1_1510_, v_00_u03b2_1511_, v_prio_1512_, v_sync_boxed_1517_, v_t_1514_, v_f_1515_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___redArg(lean_object* v_self_1519_, lean_object* v_f_1520_, lean_object* v_prio_1521_, uint8_t v_sync_1522_){
_start:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1524_ = lean_apply_1(v_self_1519_, lean_box(0));
v___x_1525_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1521_, v_sync_1522_, v___x_1524_, v_f_1520_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___redArg___boxed(lean_object* v_self_1526_, lean_object* v_f_1527_, lean_object* v_prio_1528_, lean_object* v_sync_1529_, lean_object* v_a_1530_){
_start:
{
uint8_t v_sync_boxed_1531_; lean_object* v_res_1532_; 
v_sync_boxed_1531_ = lean_unbox(v_sync_1529_);
v_res_1532_ = l_Std_Async_BaseAsync_bind___redArg(v_self_1526_, v_f_1527_, v_prio_1528_, v_sync_boxed_1531_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind(lean_object* v_00_u03b1_1533_, lean_object* v_00_u03b2_1534_, lean_object* v_self_1535_, lean_object* v_f_1536_, lean_object* v_prio_1537_, uint8_t v_sync_1538_){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = lean_apply_1(v_self_1535_, lean_box(0));
v___x_1541_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1537_, v_sync_1538_, v___x_1540_, v_f_1536_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___boxed(lean_object* v_00_u03b1_1542_, lean_object* v_00_u03b2_1543_, lean_object* v_self_1544_, lean_object* v_f_1545_, lean_object* v_prio_1546_, lean_object* v_sync_1547_, lean_object* v_a_1548_){
_start:
{
uint8_t v_sync_boxed_1549_; lean_object* v_res_1550_; 
v_sync_boxed_1549_ = lean_unbox(v_sync_1547_);
v_res_1550_ = l_Std_Async_BaseAsync_bind(v_00_u03b1_1542_, v_00_u03b2_1543_, v_self_1544_, v_f_1545_, v_prio_1546_, v_sync_boxed_1549_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___redArg(lean_object* v_x_1551_){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = lean_apply_1(v_x_1551_, lean_box(0));
v___x_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___redArg___boxed(lean_object* v_x_1555_, lean_object* v_a_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Std_Async_BaseAsync_lift___redArg(v_x_1555_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift(lean_object* v_00_u03b1_1558_, lean_object* v_x_1559_){
_start:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1561_ = lean_apply_1(v_x_1559_, lean_box(0));
v___x_1562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object* v_00_u03b1_1563_, lean_object* v_x_1564_, lean_object* v_a_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_Std_Async_BaseAsync_lift(v_00_u03b1_1563_, v_x_1564_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___redArg(lean_object* v_self_1567_){
_start:
{
lean_object* v_val_1570_; lean_object* v___x_1572_; 
v___x_1572_ = lean_apply_1(v_self_1567_, lean_box(0));
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_object* v_a_1573_; lean_object* v___x_1574_; 
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v___x_1572_, 1);
v___x_1574_ = lean_task_pure(v_a_1573_);
v_val_1570_ = v___x_1574_;
goto v___jp_1569_;
}
else
{
lean_object* v_a_1575_; 
v_a_1575_ = lean_ctor_get(v___x_1572_, 0);
lean_inc_ref(v_a_1575_);
lean_dec_ref_known(v___x_1572_, 1);
v_val_1570_ = v_a_1575_;
goto v___jp_1569_;
}
v___jp_1569_:
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_task_get_own(v_val_1570_);
return v___x_1571_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___redArg___boxed(lean_object* v_self_1576_, lean_object* v_a_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Std_Async_BaseAsync_wait___redArg(v_self_1576_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait(lean_object* v_00_u03b1_1579_, lean_object* v_self_1580_){
_start:
{
lean_object* v_val_1583_; lean_object* v___x_1585_; 
v___x_1585_ = lean_apply_1(v_self_1580_, lean_box(0));
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1587_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1585_, 1);
v___x_1587_ = lean_task_pure(v_a_1586_);
v_val_1583_ = v___x_1587_;
goto v___jp_1582_;
}
else
{
lean_object* v_a_1588_; 
v_a_1588_ = lean_ctor_get(v___x_1585_, 0);
lean_inc_ref(v_a_1588_);
lean_dec_ref_known(v___x_1585_, 1);
v_val_1583_ = v_a_1588_;
goto v___jp_1582_;
}
v___jp_1582_:
{
lean_object* v___x_1584_; 
v___x_1584_ = lean_task_get_own(v_val_1583_);
return v___x_1584_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___boxed(lean_object* v_00_u03b1_1589_, lean_object* v_self_1590_, lean_object* v_a_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l_Std_Async_BaseAsync_wait(v_00_u03b1_1589_, v_self_1590_);
return v_res_1592_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___redArg(lean_object* v_x_1593_, lean_object* v_prio_1594_){
_start:
{
lean_object* v___f_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; uint8_t v___x_1600_; lean_object* v___x_1601_; 
v___f_1596_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1597_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1597_, 0, lean_box(0));
lean_closure_set(v___x_1597_, 1, v_x_1593_);
v___x_1598_ = lean_io_as_task(v___x_1597_, v_prio_1594_);
v___x_1599_ = lean_unsigned_to_nat(0u);
v___x_1600_ = 1;
v___x_1601_ = lean_task_bind(v___x_1598_, v___f_1596_, v___x_1599_, v___x_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___redArg___boxed(lean_object* v_x_1602_, lean_object* v_prio_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l_Std_Async_BaseAsync_asTask___redArg(v_x_1602_, v_prio_1603_);
return v_res_1605_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask(lean_object* v_00_u03b1_1606_, lean_object* v_x_1607_, lean_object* v_prio_1608_){
_start:
{
lean_object* v___f_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; uint8_t v___x_1614_; lean_object* v___x_1615_; 
v___f_1610_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1611_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1611_, 0, lean_box(0));
lean_closure_set(v___x_1611_, 1, v_x_1607_);
v___x_1612_ = lean_io_as_task(v___x_1611_, v_prio_1608_);
v___x_1613_ = lean_unsigned_to_nat(0u);
v___x_1614_ = 1;
v___x_1615_ = lean_task_bind(v___x_1612_, v___f_1610_, v___x_1613_, v___x_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___boxed(lean_object* v_00_u03b1_1616_, lean_object* v_x_1617_, lean_object* v_prio_1618_, lean_object* v_a_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_Std_Async_BaseAsync_asTask(v_00_u03b1_1616_, v_x_1617_, v_prio_1618_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___redArg(lean_object* v_t_1621_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1623_, 0, v_t_1621_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___redArg___boxed(lean_object* v_t_1624_, lean_object* v_a_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_Std_Async_BaseAsync_await___redArg(v_t_1624_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await(lean_object* v_00_u03b1_1627_, lean_object* v_t_1628_){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1630_, 0, v_t_1628_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___boxed(lean_object* v_00_u03b1_1631_, lean_object* v_t_1632_, lean_object* v_a_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Std_Async_BaseAsync_await(v_00_u03b1_1631_, v_t_1632_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___redArg(lean_object* v_self_1635_, lean_object* v_prio_1636_){
_start:
{
lean_object* v___f_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; uint8_t v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___f_1638_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1639_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1639_, 0, lean_box(0));
lean_closure_set(v___x_1639_, 1, v_self_1635_);
v___x_1640_ = lean_io_as_task(v___x_1639_, v_prio_1636_);
v___x_1641_ = lean_unsigned_to_nat(0u);
v___x_1642_ = 1;
v___x_1643_ = lean_task_bind(v___x_1640_, v___f_1638_, v___x_1641_, v___x_1642_);
v___x_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___redArg___boxed(lean_object* v_self_1645_, lean_object* v_prio_1646_, lean_object* v_a_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l_Std_Async_BaseAsync_async___redArg(v_self_1645_, v_prio_1646_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async(lean_object* v_00_u03b1_1649_, lean_object* v_self_1650_, lean_object* v_prio_1651_){
_start:
{
lean_object* v___f_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___f_1653_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1654_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1654_, 0, lean_box(0));
lean_closure_set(v___x_1654_, 1, v_self_1650_);
v___x_1655_ = lean_io_as_task(v___x_1654_, v_prio_1651_);
v___x_1656_ = lean_unsigned_to_nat(0u);
v___x_1657_ = 1;
v___x_1658_ = lean_task_bind(v___x_1655_, v___f_1653_, v___x_1656_, v___x_1657_);
v___x_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___boxed(lean_object* v_00_u03b1_1660_, lean_object* v_self_1661_, lean_object* v_prio_1662_, lean_object* v_a_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Std_Async_BaseAsync_async(v_00_u03b1_1660_, v_self_1661_, v_prio_1662_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__0(lean_object* v_00_u03b1_1665_, lean_object* v_00_u03b2_1666_, lean_object* v_f_1667_, lean_object* v_self_1668_){
_start:
{
lean_object* v___x_1670_; uint8_t v___x_1671_; lean_object* v___x_1672_; 
v___x_1670_ = lean_unsigned_to_nat(0u);
v___x_1671_ = 0;
v___x_1672_ = lean_apply_1(v_self_1668_, lean_box(0));
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1681_; 
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1681_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1681_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1677_; lean_object* v___x_1679_; 
v___x_1677_ = lean_apply_1(v_f_1667_, v_a_1673_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 0, v___x_1677_);
v___x_1679_ = v___x_1675_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
else
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1690_; 
v_a_1682_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1684_ = v___x_1672_;
v_isShared_1685_ = v_isSharedCheck_1690_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v___x_1672_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1690_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1686_; lean_object* v___x_1688_; 
v___x_1686_ = lean_task_map(v_f_1667_, v_a_1682_, v___x_1670_, v___x_1671_);
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 0, v___x_1686_);
v___x_1688_ = v___x_1684_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__0___boxed(lean_object* v_00_u03b1_1691_, lean_object* v_00_u03b2_1692_, lean_object* v_f_1693_, lean_object* v_self_1694_, lean_object* v___y_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l_Std_Async_BaseAsync_instFunctor___lam__0(v_00_u03b1_1691_, v_00_u03b2_1692_, v_f_1693_, v_self_1694_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__1(lean_object* v___f_1697_, lean_object* v_00_u03b1_1698_, lean_object* v_00_u03b2_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1703_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_1703_, 0, lean_box(0));
lean_closure_set(v___x_1703_, 1, lean_box(0));
lean_closure_set(v___x_1703_, 2, v___y_1700_);
v___x_1704_ = lean_apply_5(v___f_1697_, lean_box(0), lean_box(0), v___x_1703_, v___y_1701_, lean_box(0));
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__1___boxed(lean_object* v___f_1705_, lean_object* v_00_u03b1_1706_, lean_object* v_00_u03b2_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l_Std_Async_BaseAsync_instFunctor___lam__1(v___f_1705_, v_00_u03b1_1706_, v_00_u03b2_1707_, v___y_1708_, v___y_1709_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__0(lean_object* v_x_1719_, lean_object* v_y_1720_){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; uint8_t v___x_1724_; lean_object* v___x_1725_; 
v___x_1722_ = lean_box(0);
v___x_1723_ = lean_unsigned_to_nat(0u);
v___x_1724_ = 0;
v___x_1725_ = lean_apply_2(v_x_1719_, v___x_1722_, lean_box(0));
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1734_; 
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1728_ = v___x_1725_;
v_isShared_1729_ = v_isSharedCheck_1734_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_dec(v___x_1725_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1734_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1730_; lean_object* v___x_1732_; 
v___x_1730_ = lean_apply_1(v_y_1720_, v_a_1726_);
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 0, v___x_1730_);
v___x_1732_ = v___x_1728_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v___x_1730_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
}
else
{
lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1743_; 
v_a_1735_ = lean_ctor_get(v___x_1725_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1737_ = v___x_1725_;
v_isShared_1738_ = v_isSharedCheck_1743_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_dec(v___x_1725_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1743_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1739_; lean_object* v___x_1741_; 
v___x_1739_ = lean_task_map(v_y_1720_, v_a_1735_, v___x_1723_, v___x_1724_);
if (v_isShared_1738_ == 0)
{
lean_ctor_set(v___x_1737_, 0, v___x_1739_);
v___x_1741_ = v___x_1737_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1739_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__0___boxed(lean_object* v_x_1744_, lean_object* v_y_1745_, lean_object* v___y_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l_Std_Async_BaseAsync_instMonad___lam__0(v_x_1744_, v_y_1745_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__1(lean_object* v_00_u03b1_1748_, lean_object* v_00_u03b2_1749_, lean_object* v_f_1750_, lean_object* v_x_1751_){
_start:
{
lean_object* v___f_1753_; lean_object* v___x_1754_; uint8_t v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___f_1753_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1753_, 0, v_x_1751_);
v___x_1754_ = lean_unsigned_to_nat(0u);
v___x_1755_ = 0;
v___x_1756_ = lean_apply_1(v_f_1750_, lean_box(0));
v___x_1757_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1754_, v___x_1755_, v___x_1756_, v___f_1753_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__1___boxed(lean_object* v_00_u03b1_1758_, lean_object* v_00_u03b2_1759_, lean_object* v_f_1760_, lean_object* v_x_1761_, lean_object* v___y_1762_){
_start:
{
lean_object* v_res_1763_; 
v_res_1763_ = l_Std_Async_BaseAsync_instMonad___lam__1(v_00_u03b1_1758_, v_00_u03b2_1759_, v_f_1760_, v_x_1761_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__2(lean_object* v_00_u03b1_1764_, lean_object* v_00_u03b2_1765_, lean_object* v_self_1766_, lean_object* v_f_1767_){
_start:
{
lean_object* v___x_1769_; uint8_t v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1769_ = lean_unsigned_to_nat(0u);
v___x_1770_ = 0;
v___x_1771_ = lean_apply_1(v_self_1766_, lean_box(0));
v___x_1772_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1769_, v___x_1770_, v___x_1771_, v_f_1767_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__2___boxed(lean_object* v_00_u03b1_1773_, lean_object* v_00_u03b2_1774_, lean_object* v_self_1775_, lean_object* v_f_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Std_Async_BaseAsync_instMonad___lam__2(v_00_u03b1_1773_, v_00_u03b2_1774_, v_self_1775_, v_f_1776_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__3(lean_object* v_a_1779_, lean_object* v_x_1780_){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1782_, 0, v_a_1779_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__3___boxed(lean_object* v_a_1783_, lean_object* v_x_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l_Std_Async_BaseAsync_instMonad___lam__3(v_a_1783_, v_x_1784_);
lean_dec(v_x_1784_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__4(lean_object* v_y_1787_, lean_object* v___f_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v___f_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___f_1791_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1791_, 0, v_a_1789_);
v___x_1792_ = lean_box(0);
v___x_1793_ = lean_apply_1(v_y_1787_, v___x_1792_);
v___x_1794_ = lean_apply_5(v___f_1788_, lean_box(0), lean_box(0), v___x_1793_, v___f_1791_, lean_box(0));
return v___x_1794_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__4___boxed(lean_object* v_y_1795_, lean_object* v___f_1796_, lean_object* v_a_1797_, lean_object* v___y_1798_){
_start:
{
lean_object* v_res_1799_; 
v_res_1799_ = l_Std_Async_BaseAsync_instMonad___lam__4(v_y_1795_, v___f_1796_, v_a_1797_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__5(lean_object* v___f_1800_, lean_object* v_00_u03b1_1801_, lean_object* v_00_u03b2_1802_, lean_object* v_x_1803_, lean_object* v_y_1804_){
_start:
{
lean_object* v___f_1806_; lean_object* v___x_1807_; 
lean_inc_ref(v___f_1800_);
v___f_1806_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__4___boxed), 4, 2);
lean_closure_set(v___f_1806_, 0, v_y_1804_);
lean_closure_set(v___f_1806_, 1, v___f_1800_);
v___x_1807_ = lean_apply_5(v___f_1800_, lean_box(0), lean_box(0), v_x_1803_, v___f_1806_, lean_box(0));
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__5___boxed(lean_object* v___f_1808_, lean_object* v_00_u03b1_1809_, lean_object* v_00_u03b2_1810_, lean_object* v_x_1811_, lean_object* v_y_1812_, lean_object* v___y_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l_Std_Async_BaseAsync_instMonad___lam__5(v___f_1808_, v_00_u03b1_1809_, v_00_u03b2_1810_, v_x_1811_, v_y_1812_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__6(lean_object* v_y_1815_, lean_object* v_x_1816_){
_start:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = lean_box(0);
v___x_1819_ = lean_apply_2(v_y_1815_, v___x_1818_, lean_box(0));
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__6___boxed(lean_object* v_y_1820_, lean_object* v_x_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Std_Async_BaseAsync_instMonad___lam__6(v_y_1820_, v_x_1821_);
lean_dec(v_x_1821_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__7(lean_object* v_00_u03b1_1824_, lean_object* v_00_u03b2_1825_, lean_object* v_x_1826_, lean_object* v_y_1827_){
_start:
{
lean_object* v___f_1829_; lean_object* v___x_1830_; uint8_t v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___f_1829_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__6___boxed), 3, 1);
lean_closure_set(v___f_1829_, 0, v_y_1827_);
v___x_1830_ = lean_unsigned_to_nat(0u);
v___x_1831_ = 0;
v___x_1832_ = lean_apply_1(v_x_1826_, lean_box(0));
v___x_1833_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1830_, v___x_1831_, v___x_1832_, v___f_1829_);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__7___boxed(lean_object* v_00_u03b1_1834_, lean_object* v_00_u03b2_1835_, lean_object* v_x_1836_, lean_object* v_y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Std_Async_BaseAsync_instMonad___lam__7(v_00_u03b1_1834_, v_00_u03b2_1835_, v_x_1836_, v_y_1837_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1(lean_object* v___f_1860_, lean_object* v_00_u03b1_1861_, lean_object* v_t_1862_, lean_object* v_prio_1863_){
_start:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; uint8_t v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1865_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1865_, 0, lean_box(0));
lean_closure_set(v___x_1865_, 1, v_t_1862_);
v___x_1866_ = lean_io_as_task(v___x_1865_, v_prio_1863_);
v___x_1867_ = lean_unsigned_to_nat(0u);
v___x_1868_ = 1;
v___x_1869_ = lean_task_bind(v___x_1866_, v___f_1860_, v___x_1867_, v___x_1868_);
v___x_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1___boxed(lean_object* v___f_1871_, lean_object* v_00_u03b1_1872_, lean_object* v_t_1873_, lean_object* v_prio_1874_, lean_object* v___y_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1(v___f_1871_, v_00_u03b1_1872_, v_t_1873_, v_prio_1874_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg(lean_object* v_inst_1880_){
_start:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1881_, 0, v_inst_1880_);
v___x_1882_ = lean_alloc_closure((void*)(l_instMonadBaseIO___aux__5___boxed), 3, 2);
lean_closure_set(v___x_1882_, 0, lean_box(0));
lean_closure_set(v___x_1882_, 1, v___x_1881_);
v___x_1883_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_mk___boxed), 3, 2);
lean_closure_set(v___x_1883_, 0, lean_box(0));
lean_closure_set(v___x_1883_, 1, v___x_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited(lean_object* v_00_u03b1_1884_, lean_object* v_inst_1885_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Std_Async_BaseAsync_instInhabited___redArg(v_inst_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__0(lean_object* v_res_1887_, lean_object* v_snd_1888_){
_start:
{
lean_object* v___x_1889_; 
v___x_1889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1889_, 0, v_res_1887_);
lean_ctor_set(v___x_1889_, 1, v_snd_1888_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1(lean_object* v_f_1890_, lean_object* v_res_1891_){
_start:
{
lean_object* v___f_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; lean_object* v___x_1897_; 
lean_inc_n(v_res_1891_, 2);
v___f_1893_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonadFinally___lam__0), 2, 1);
lean_closure_set(v___f_1893_, 0, v_res_1891_);
v___x_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1894_, 0, v_res_1891_);
v___x_1895_ = lean_unsigned_to_nat(0u);
v___x_1896_ = 0;
v___x_1897_ = lean_apply_2(v_f_1890_, v___x_1894_, lean_box(0));
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1906_; 
lean_dec_ref(v___f_1893_);
v_a_1898_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1900_ = v___x_1897_;
v_isShared_1901_ = v_isSharedCheck_1906_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1897_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1906_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1902_; lean_object* v___x_1904_; 
v___x_1902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1902_, 0, v_res_1891_);
lean_ctor_set(v___x_1902_, 1, v_a_1898_);
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 0, v___x_1902_);
v___x_1904_ = v___x_1900_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v___x_1902_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1915_; 
lean_dec(v_res_1891_);
v_a_1907_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1909_ = v___x_1897_;
v_isShared_1910_ = v_isSharedCheck_1915_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1897_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1915_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1911_; lean_object* v___x_1913_; 
v___x_1911_ = lean_task_map(v___f_1893_, v_a_1907_, v___x_1895_, v___x_1896_);
if (v_isShared_1910_ == 0)
{
lean_ctor_set(v___x_1909_, 0, v___x_1911_);
v___x_1913_ = v___x_1909_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1911_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1___boxed(lean_object* v_f_1916_, lean_object* v_res_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Std_Async_BaseAsync_instMonadFinally___lam__1(v_f_1916_, v_res_1917_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2(lean_object* v_00_u03b1_1920_, lean_object* v_00_u03b2_1921_, lean_object* v_x_1922_, lean_object* v_f_1923_){
_start:
{
lean_object* v___f_1925_; lean_object* v___x_1926_; uint8_t v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___f_1925_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonadFinally___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1925_, 0, v_f_1923_);
v___x_1926_ = lean_unsigned_to_nat(0u);
v___x_1927_ = 0;
v___x_1928_ = lean_apply_1(v_x_1922_, lean_box(0));
v___x_1929_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1926_, v___x_1927_, v___x_1928_, v___f_1925_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2___boxed(lean_object* v_00_u03b1_1930_, lean_object* v_00_u03b2_1931_, lean_object* v_x_1932_, lean_object* v_f_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_Std_Async_BaseAsync_instMonadFinally___lam__2(v_00_u03b1_1930_, v_00_u03b2_1931_, v_x_1932_, v_f_1933_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg(lean_object* v_except_1938_){
_start:
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
v_a_1940_ = lean_ctor_get(v_except_1938_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_except_1938_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v_except_1938_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v_except_1938_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
lean_ctor_set_tag(v___x_1942_, 0);
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1940_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg___boxed(lean_object* v_except_1948_, lean_object* v_a_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_Std_Async_BaseAsync_ofExcept___redArg(v_except_1948_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept(lean_object* v_00_u03b1_1951_, lean_object* v_except_1952_){
_start:
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
v_a_1954_ = lean_ctor_get(v_except_1952_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v_except_1952_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v_except_1952_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v_except_1952_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
lean_ctor_set_tag(v___x_1956_, 0);
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___boxed(lean_object* v_00_u03b1_1962_, lean_object* v_except_1963_, lean_object* v_a_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l_Std_Async_BaseAsync_ofExcept(v_00_u03b1_1962_, v_except_1963_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1(lean_object* v_resultX_1966_, lean_object* v_resultY_1967_){
_start:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1969_, 0, v_resultX_1966_);
lean_ctor_set(v___x_1969_, 1, v_resultY_1967_);
v___x_1970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1969_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1___boxed(lean_object* v_resultX_1971_, lean_object* v_resultY_1972_, lean_object* v___y_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__1(v_resultX_1971_, v_resultY_1972_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0(lean_object* v_taskY_1975_, lean_object* v_resultX_1976_){
_start:
{
lean_object* v___f_1978_; lean_object* v___x_1979_; uint8_t v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___f_1978_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1978_, 0, v_resultX_1976_);
v___x_1979_ = lean_unsigned_to_nat(0u);
v___x_1980_ = 0;
v___x_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1981_, 0, v_taskY_1975_);
v___x_1982_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1979_, v___x_1980_, v___x_1981_, v___f_1978_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0___boxed(lean_object* v_taskY_1983_, lean_object* v_resultX_1984_, lean_object* v___y_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__0(v_taskY_1983_, v_resultX_1984_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2(lean_object* v_taskX_1987_, lean_object* v_taskY_1988_){
_start:
{
lean_object* v___f_1990_; lean_object* v___x_1991_; uint8_t v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___f_1990_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1990_, 0, v_taskY_1988_);
v___x_1991_ = lean_unsigned_to_nat(0u);
v___x_1992_ = 0;
v___x_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1993_, 0, v_taskX_1987_);
v___x_1994_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1991_, v___x_1992_, v___x_1993_, v___f_1990_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2___boxed(lean_object* v_taskX_1995_, lean_object* v_taskY_1996_, lean_object* v___y_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__2(v_taskX_1995_, v_taskY_1996_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3(lean_object* v_y_1999_, lean_object* v_prio_2000_, lean_object* v___f_2001_, lean_object* v_taskX_2002_){
_start:
{
lean_object* v___f_2004_; lean_object* v___x_2005_; uint8_t v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; uint8_t v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___f_2004_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2004_, 0, v_taskX_2002_);
v___x_2005_ = lean_unsigned_to_nat(0u);
v___x_2006_ = 0;
v___x_2007_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2007_, 0, lean_box(0));
lean_closure_set(v___x_2007_, 1, v_y_1999_);
v___x_2008_ = lean_io_as_task(v___x_2007_, v_prio_2000_);
v___x_2009_ = 1;
v___x_2010_ = lean_task_bind(v___x_2008_, v___f_2001_, v___x_2005_, v___x_2009_);
v___x_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2010_);
v___x_2012_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2005_, v___x_2006_, v___x_2011_, v___f_2004_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_2013_, lean_object* v_prio_2014_, lean_object* v___f_2015_, lean_object* v_taskX_2016_, lean_object* v___y_2017_){
_start:
{
lean_object* v_res_2018_; 
v_res_2018_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__3(v_y_2013_, v_prio_2014_, v___f_2015_, v_taskX_2016_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg(lean_object* v_x_2019_, lean_object* v_y_2020_, lean_object* v_prio_2021_){
_start:
{
lean_object* v___f_2023_; lean_object* v___f_2024_; lean_object* v___x_2025_; uint8_t v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; uint8_t v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___f_2023_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
lean_inc(v_prio_2021_);
v___f_2024_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2024_, 0, v_y_2020_);
lean_closure_set(v___f_2024_, 1, v_prio_2021_);
lean_closure_set(v___f_2024_, 2, v___f_2023_);
v___x_2025_ = lean_unsigned_to_nat(0u);
v___x_2026_ = 0;
v___x_2027_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2027_, 0, lean_box(0));
lean_closure_set(v___x_2027_, 1, v_x_2019_);
v___x_2028_ = lean_io_as_task(v___x_2027_, v_prio_2021_);
v___x_2029_ = 1;
v___x_2030_ = lean_task_bind(v___x_2028_, v___f_2023_, v___x_2025_, v___x_2029_);
v___x_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2030_);
v___x_2032_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2025_, v___x_2026_, v___x_2031_, v___f_2024_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___boxed(lean_object* v_x_2033_, lean_object* v_y_2034_, lean_object* v_prio_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Std_Async_BaseAsync_concurrently___redArg(v_x_2033_, v_y_2034_, v_prio_2035_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently(lean_object* v_00_u03b1_2038_, lean_object* v_00_u03b2_2039_, lean_object* v_x_2040_, lean_object* v_y_2041_, lean_object* v_prio_2042_){
_start:
{
lean_object* v___f_2044_; lean_object* v___f_2045_; lean_object* v___x_2046_; uint8_t v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; uint8_t v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___f_2044_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
lean_inc(v_prio_2042_);
v___f_2045_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2045_, 0, v_y_2041_);
lean_closure_set(v___f_2045_, 1, v_prio_2042_);
lean_closure_set(v___f_2045_, 2, v___f_2044_);
v___x_2046_ = lean_unsigned_to_nat(0u);
v___x_2047_ = 0;
v___x_2048_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2048_, 0, lean_box(0));
lean_closure_set(v___x_2048_, 1, v_x_2040_);
v___x_2049_ = lean_io_as_task(v___x_2048_, v_prio_2042_);
v___x_2050_ = 1;
v___x_2051_ = lean_task_bind(v___x_2049_, v___f_2044_, v___x_2046_, v___x_2050_);
v___x_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
v___x_2053_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2046_, v___x_2047_, v___x_2052_, v___f_2045_);
return v___x_2053_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___boxed(lean_object* v_00_u03b1_2054_, lean_object* v_00_u03b2_2055_, lean_object* v_x_2056_, lean_object* v_y_2057_, lean_object* v_prio_2058_, lean_object* v_a_2059_){
_start:
{
lean_object* v_res_2060_; 
v_res_2060_ = l_Std_Async_BaseAsync_concurrently(v_00_u03b1_2054_, v_00_u03b2_2055_, v_x_2056_, v_y_2057_, v_prio_2058_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2(lean_object* v_promise_2061_, lean_object* v_value_2062_){
_start:
{
lean_object* v___x_2064_; 
v___x_2064_ = lean_io_promise_resolve(v_value_2062_, v_promise_2061_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2___boxed(lean_object* v_promise_2065_, lean_object* v_value_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l_Std_Async_BaseAsync_race___redArg___lam__2(v_promise_2065_, v_value_2066_);
lean_dec(v_promise_2065_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0(lean_object* v_promise_2069_, lean_object* v_____r_2070_){
_start:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2072_ = l_IO_Promise_result_x21___redArg(v_promise_2069_);
v___x_2073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2072_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0___boxed(lean_object* v_promise_2074_, lean_object* v_____r_2075_, lean_object* v___y_2076_){
_start:
{
lean_object* v_res_2077_; 
v_res_2077_ = l_Std_Async_BaseAsync_race___redArg___lam__0(v_promise_2074_, v_____r_2075_);
lean_dec(v_promise_2074_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1(lean_object* v_task_u2082_2078_, lean_object* v___x_2079_, lean_object* v___x_2080_, uint8_t v___x_2081_, lean_object* v___f_2082_, lean_object* v_____r_2083_){
_start:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; 
lean_inc(v___x_2080_);
v___x_2085_ = l_BaseIO_chainTask___redArg(v_task_u2082_2078_, v___x_2079_, v___x_2080_, v___x_2081_);
v___x_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2085_);
v___x_2087_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2080_, v___x_2081_, v___x_2086_, v___f_2082_);
return v___x_2087_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1___boxed(lean_object* v_task_u2082_2088_, lean_object* v___x_2089_, lean_object* v___x_2090_, lean_object* v___x_2091_, lean_object* v___f_2092_, lean_object* v_____r_2093_, lean_object* v___y_2094_){
_start:
{
uint8_t v___x_624__boxed_2095_; lean_object* v_res_2096_; 
v___x_624__boxed_2095_ = lean_unbox(v___x_2091_);
v_res_2096_ = l_Std_Async_BaseAsync_race___redArg___lam__1(v_task_u2082_2088_, v___x_2089_, v___x_2090_, v___x_624__boxed_2095_, v___f_2092_, v_____r_2093_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3(lean_object* v___f_2097_, lean_object* v___f_2098_, lean_object* v___f_2099_, lean_object* v_task_u2081_2100_, lean_object* v_task_u2082_2101_){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; uint8_t v___x_2106_; lean_object* v___x_2107_; lean_object* v___f_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2103_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_2103_, 0, lean_box(0));
lean_closure_set(v___x_2103_, 1, lean_box(0));
lean_closure_set(v___x_2103_, 2, v___f_2097_);
lean_closure_set(v___x_2103_, 3, lean_box(0));
v___x_2104_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2104_, 0, lean_box(0));
lean_closure_set(v___x_2104_, 1, lean_box(0));
lean_closure_set(v___x_2104_, 2, lean_box(0));
lean_closure_set(v___x_2104_, 3, v___x_2103_);
lean_closure_set(v___x_2104_, 4, v___f_2098_);
v___x_2105_ = lean_unsigned_to_nat(0u);
v___x_2106_ = 0;
v___x_2107_ = lean_box(v___x_2106_);
lean_inc_ref(v___x_2104_);
v___f_2108_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2108_, 0, v_task_u2082_2101_);
lean_closure_set(v___f_2108_, 1, v___x_2104_);
lean_closure_set(v___f_2108_, 2, v___x_2105_);
lean_closure_set(v___f_2108_, 3, v___x_2107_);
lean_closure_set(v___f_2108_, 4, v___f_2099_);
v___x_2109_ = l_BaseIO_chainTask___redArg(v_task_u2081_2100_, v___x_2104_, v___x_2105_, v___x_2106_);
v___x_2110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2109_);
v___x_2111_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2105_, v___x_2106_, v___x_2110_, v___f_2108_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3___boxed(lean_object* v___f_2112_, lean_object* v___f_2113_, lean_object* v___f_2114_, lean_object* v_task_u2081_2115_, lean_object* v_task_u2082_2116_, lean_object* v___y_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l_Std_Async_BaseAsync_race___redArg___lam__3(v___f_2112_, v___f_2113_, v___f_2114_, v_task_u2081_2115_, v_task_u2082_2116_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4(lean_object* v___f_2119_, lean_object* v___f_2120_, lean_object* v___f_2121_, lean_object* v_y_2122_, lean_object* v_prio_2123_, lean_object* v___f_2124_, lean_object* v_task_u2081_2125_){
_start:
{
lean_object* v___f_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; uint8_t v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___f_2127_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_2127_, 0, v___f_2119_);
lean_closure_set(v___f_2127_, 1, v___f_2120_);
lean_closure_set(v___f_2127_, 2, v___f_2121_);
lean_closure_set(v___f_2127_, 3, v_task_u2081_2125_);
v___x_2128_ = lean_unsigned_to_nat(0u);
v___x_2129_ = 0;
v___x_2130_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2130_, 0, lean_box(0));
lean_closure_set(v___x_2130_, 1, v_y_2122_);
v___x_2131_ = lean_io_as_task(v___x_2130_, v_prio_2123_);
v___x_2132_ = 1;
v___x_2133_ = lean_task_bind(v___x_2131_, v___f_2124_, v___x_2128_, v___x_2132_);
v___x_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2133_);
v___x_2135_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2128_, v___x_2129_, v___x_2134_, v___f_2127_);
return v___x_2135_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4___boxed(lean_object* v___f_2136_, lean_object* v___f_2137_, lean_object* v___f_2138_, lean_object* v_y_2139_, lean_object* v_prio_2140_, lean_object* v___f_2141_, lean_object* v_task_u2081_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Std_Async_BaseAsync_race___redArg___lam__4(v___f_2136_, v___f_2137_, v___f_2138_, v_y_2139_, v_prio_2140_, v___f_2141_, v_task_u2081_2142_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5(lean_object* v___f_2145_, lean_object* v_y_2146_, lean_object* v_prio_2147_, lean_object* v___f_2148_, lean_object* v_x_2149_, lean_object* v___f_2150_, lean_object* v_promise_2151_){
_start:
{
lean_object* v___f_2153_; lean_object* v___f_2154_; lean_object* v___f_2155_; lean_object* v___x_2156_; uint8_t v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; uint8_t v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
lean_inc(v_promise_2151_);
v___f_2153_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2153_, 0, v_promise_2151_);
v___f_2154_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2154_, 0, v_promise_2151_);
lean_inc(v_prio_2147_);
v___f_2155_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_2155_, 0, v___f_2145_);
lean_closure_set(v___f_2155_, 1, v___f_2153_);
lean_closure_set(v___f_2155_, 2, v___f_2154_);
lean_closure_set(v___f_2155_, 3, v_y_2146_);
lean_closure_set(v___f_2155_, 4, v_prio_2147_);
lean_closure_set(v___f_2155_, 5, v___f_2148_);
v___x_2156_ = lean_unsigned_to_nat(0u);
v___x_2157_ = 0;
v___x_2158_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2158_, 0, lean_box(0));
lean_closure_set(v___x_2158_, 1, v_x_2149_);
v___x_2159_ = lean_io_as_task(v___x_2158_, v_prio_2147_);
v___x_2160_ = 1;
v___x_2161_ = lean_task_bind(v___x_2159_, v___f_2150_, v___x_2156_, v___x_2160_);
v___x_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2162_, 0, v___x_2161_);
v___x_2163_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2156_, v___x_2157_, v___x_2162_, v___f_2155_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5___boxed(lean_object* v___f_2164_, lean_object* v_y_2165_, lean_object* v_prio_2166_, lean_object* v___f_2167_, lean_object* v_x_2168_, lean_object* v___f_2169_, lean_object* v_promise_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Std_Async_BaseAsync_race___redArg___lam__5(v___f_2164_, v_y_2165_, v_prio_2166_, v___f_2167_, v_x_2168_, v___f_2169_, v_promise_2170_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg(lean_object* v_x_2174_, lean_object* v_y_2175_, lean_object* v_prio_2176_){
_start:
{
lean_object* v___f_2178_; lean_object* v___f_2179_; lean_object* v___f_2180_; lean_object* v___x_2181_; uint8_t v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___f_2178_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2179_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2180_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2180_, 0, v___f_2179_);
lean_closure_set(v___f_2180_, 1, v_y_2175_);
lean_closure_set(v___f_2180_, 2, v_prio_2176_);
lean_closure_set(v___f_2180_, 3, v___f_2178_);
lean_closure_set(v___f_2180_, 4, v_x_2174_);
lean_closure_set(v___f_2180_, 5, v___f_2178_);
v___x_2181_ = lean_unsigned_to_nat(0u);
v___x_2182_ = 0;
v___x_2183_ = lean_io_promise_new();
v___x_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
v___x_2185_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2181_, v___x_2182_, v___x_2184_, v___f_2180_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___boxed(lean_object* v_x_2186_, lean_object* v_y_2187_, lean_object* v_prio_2188_, lean_object* v_a_2189_){
_start:
{
lean_object* v_res_2190_; 
v_res_2190_ = l_Std_Async_BaseAsync_race___redArg(v_x_2186_, v_y_2187_, v_prio_2188_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race(lean_object* v_00_u03b1_2191_, lean_object* v_inst_2192_, lean_object* v_x_2193_, lean_object* v_y_2194_, lean_object* v_prio_2195_){
_start:
{
lean_object* v___f_2197_; lean_object* v___f_2198_; lean_object* v___f_2199_; lean_object* v___x_2200_; uint8_t v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___f_2197_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2198_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2199_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2199_, 0, v___f_2198_);
lean_closure_set(v___f_2199_, 1, v_y_2194_);
lean_closure_set(v___f_2199_, 2, v_prio_2195_);
lean_closure_set(v___f_2199_, 3, v___f_2197_);
lean_closure_set(v___f_2199_, 4, v_x_2193_);
lean_closure_set(v___f_2199_, 5, v___f_2197_);
v___x_2200_ = lean_unsigned_to_nat(0u);
v___x_2201_ = 0;
v___x_2202_ = lean_io_promise_new();
v___x_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
v___x_2204_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2200_, v___x_2201_, v___x_2203_, v___f_2199_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___boxed(lean_object* v_00_u03b1_2205_, lean_object* v_inst_2206_, lean_object* v_x_2207_, lean_object* v_y_2208_, lean_object* v_prio_2209_, lean_object* v_a_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Std_Async_BaseAsync_race(v_00_u03b1_2205_, v_inst_2206_, v_x_2207_, v_y_2208_, v_prio_2209_);
lean_dec(v_inst_2206_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_2212_, lean_object* v___f_2213_, lean_object* v_x_2214_){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; uint8_t v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2216_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2216_, 0, lean_box(0));
lean_closure_set(v___x_2216_, 1, v_x_2214_);
v___x_2217_ = lean_io_as_task(v___x_2216_, v_prio_2212_);
v___x_2218_ = lean_unsigned_to_nat(0u);
v___x_2219_ = 1;
v___x_2220_ = lean_task_bind(v___x_2217_, v___f_2213_, v___x_2218_, v___x_2219_);
v___x_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_2222_, lean_object* v___f_2223_, lean_object* v_x_2224_, lean_object* v___y_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1(v_prio_2222_, v___f_2223_, v_x_2224_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0(lean_object* v___x_2228_, lean_object* v_tasks_2229_){
_start:
{
lean_object* v___x_2231_; size_t v_sz_2232_; size_t v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_235__overap_2236_; lean_object* v___x_2237_; 
v___x_2231_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0));
v_sz_2232_ = lean_array_size(v_tasks_2229_);
v___x_2233_ = ((size_t)0ULL);
v___x_2234_ = l_unsafeCast___redArg(v_tasks_2229_);
v___x_2235_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2228_, v___x_2231_, v_sz_2232_, v___x_2233_, v___x_2234_);
v___x_235__overap_2236_ = l_unsafeCast___redArg(v___x_2235_);
lean_dec(v___x_2235_);
v___x_2237_ = lean_apply_1(v___x_235__overap_2236_, lean_box(0));
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___x_2238_, lean_object* v_tasks_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v_res_2241_; 
v_res_2241_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0(v___x_2238_, v_tasks_2239_);
lean_dec_ref(v_tasks_2239_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg(lean_object* v_xs_2244_, lean_object* v_prio_2245_){
_start:
{
lean_object* v___f_2247_; lean_object* v___f_2248_; lean_object* v___x_2249_; lean_object* v___f_2250_; lean_object* v___x_2251_; uint8_t v___x_2252_; size_t v_sz_2253_; size_t v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_177__overap_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___f_2247_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2248_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2248_, 0, v_prio_2245_);
lean_closure_set(v___f_2248_, 1, v___f_2247_);
v___x_2249_ = ((lean_object*)(l_Std_Async_BaseAsync_instMonad));
v___f_2250_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0));
v___x_2251_ = lean_unsigned_to_nat(0u);
v___x_2252_ = 0;
v_sz_2253_ = lean_array_size(v_xs_2244_);
v___x_2254_ = ((size_t)0ULL);
v___x_2255_ = l_unsafeCast___redArg(v_xs_2244_);
v___x_2256_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2249_, v___f_2248_, v_sz_2253_, v___x_2254_, v___x_2255_);
v___x_177__overap_2257_ = l_unsafeCast___redArg(v___x_2256_);
lean_dec(v___x_2256_);
v___x_2258_ = lean_apply_1(v___x_177__overap_2257_, lean_box(0));
v___x_2259_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2251_, v___x_2252_, v___x_2258_, v___f_2250_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_2260_, lean_object* v_prio_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg(v_xs_2260_, v_prio_2261_);
lean_dec_ref(v_xs_2260_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll(lean_object* v_00_u03b1_2264_, lean_object* v_xs_2265_, lean_object* v_prio_2266_){
_start:
{
lean_object* v___f_2268_; lean_object* v___f_2269_; lean_object* v___x_2270_; lean_object* v___f_2271_; lean_object* v___x_2272_; uint8_t v___x_2273_; size_t v_sz_2274_; size_t v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_210__overap_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___f_2268_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2269_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2269_, 0, v_prio_2266_);
lean_closure_set(v___f_2269_, 1, v___f_2268_);
v___x_2270_ = ((lean_object*)(l_Std_Async_BaseAsync_instMonad));
v___f_2271_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0));
v___x_2272_ = lean_unsigned_to_nat(0u);
v___x_2273_ = 0;
v_sz_2274_ = lean_array_size(v_xs_2265_);
v___x_2275_ = ((size_t)0ULL);
v___x_2276_ = l_unsafeCast___redArg(v_xs_2265_);
v___x_2277_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2270_, v___f_2269_, v_sz_2274_, v___x_2275_, v___x_2276_);
v___x_210__overap_2278_ = l_unsafeCast___redArg(v___x_2277_);
lean_dec(v___x_2277_);
v___x_2279_ = lean_apply_1(v___x_210__overap_2278_, lean_box(0));
v___x_2280_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2272_, v___x_2273_, v___x_2279_, v___f_2271_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___boxed(lean_object* v_00_u03b1_2281_, lean_object* v_xs_2282_, lean_object* v_prio_2283_, lean_object* v_a_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_Std_Async_BaseAsync_concurrentlyAll(v_00_u03b1_2281_, v_xs_2282_, v_prio_2283_);
lean_dec_ref(v_xs_2282_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2(lean_object* v___f_2286_, lean_object* v___f_2287_, lean_object* v_task_u2081_2288_){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; uint8_t v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___x_2290_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_2290_, 0, lean_box(0));
lean_closure_set(v___x_2290_, 1, lean_box(0));
lean_closure_set(v___x_2290_, 2, v___f_2286_);
lean_closure_set(v___x_2290_, 3, lean_box(0));
v___x_2291_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2291_, 0, lean_box(0));
lean_closure_set(v___x_2291_, 1, lean_box(0));
lean_closure_set(v___x_2291_, 2, lean_box(0));
lean_closure_set(v___x_2291_, 3, v___x_2290_);
lean_closure_set(v___x_2291_, 4, v___f_2287_);
v___x_2292_ = lean_unsigned_to_nat(0u);
v___x_2293_ = 0;
v___x_2294_ = l_BaseIO_chainTask___redArg(v_task_u2081_2288_, v___x_2291_, v___x_2292_, v___x_2293_);
v___x_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2294_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_2296_, lean_object* v___f_2297_, lean_object* v_task_u2081_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__2(v___f_2296_, v___f_2297_, v_task_u2081_2298_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0(lean_object* v_prio_2301_, lean_object* v___f_2302_, lean_object* v___f_2303_, lean_object* v_x_2304_){
_start:
{
lean_object* v___x_2306_; uint8_t v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; uint8_t v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2306_ = lean_unsigned_to_nat(0u);
v___x_2307_ = 0;
v___x_2308_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2308_, 0, lean_box(0));
lean_closure_set(v___x_2308_, 1, v_x_2304_);
v___x_2309_ = lean_io_as_task(v___x_2308_, v_prio_2301_);
v___x_2310_ = 1;
v___x_2311_ = lean_task_bind(v___x_2309_, v___f_2302_, v___x_2306_, v___x_2310_);
v___x_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
v___x_2313_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2306_, v___x_2307_, v___x_2312_, v___f_2303_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_2314_, lean_object* v___f_2315_, lean_object* v___f_2316_, lean_object* v_x_2317_, lean_object* v___y_2318_){
_start:
{
lean_object* v_res_2319_; 
v_res_2319_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__0(v_prio_2314_, v___f_2315_, v___f_2316_, v_x_2317_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3(lean_object* v___f_2320_, lean_object* v_prio_2321_, lean_object* v___f_2322_, lean_object* v_inst_2323_, lean_object* v_xs_2324_, lean_object* v_promise_2325_){
_start:
{
lean_object* v___f_2327_; lean_object* v___f_2328_; lean_object* v___f_2329_; lean_object* v___f_2330_; lean_object* v___x_2331_; uint8_t v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
lean_inc(v_promise_2325_);
v___f_2327_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2327_, 0, v_promise_2325_);
v___f_2328_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2328_, 0, v___f_2320_);
lean_closure_set(v___f_2328_, 1, v___f_2327_);
v___f_2329_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2329_, 0, v_prio_2321_);
lean_closure_set(v___f_2329_, 1, v___f_2322_);
lean_closure_set(v___f_2329_, 2, v___f_2328_);
v___f_2330_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2330_, 0, v_promise_2325_);
v___x_2331_ = lean_unsigned_to_nat(0u);
v___x_2332_ = 0;
v___x_2333_ = lean_apply_3(v_inst_2323_, v_xs_2324_, v___f_2329_, lean_box(0));
v___x_2334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2331_, v___x_2332_, v___x_2333_, v___f_2330_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed(lean_object* v___f_2335_, lean_object* v_prio_2336_, lean_object* v___f_2337_, lean_object* v_inst_2338_, lean_object* v_xs_2339_, lean_object* v_promise_2340_, lean_object* v___y_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__3(v___f_2335_, v_prio_2336_, v___f_2337_, v_inst_2338_, v_xs_2339_, v_promise_2340_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg(lean_object* v_inst_2343_, lean_object* v_xs_2344_, lean_object* v_prio_2345_){
_start:
{
lean_object* v___f_2347_; lean_object* v___f_2348_; lean_object* v___f_2349_; lean_object* v___x_2350_; uint8_t v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___f_2347_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2348_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2349_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v___f_2349_, 0, v___f_2348_);
lean_closure_set(v___f_2349_, 1, v_prio_2345_);
lean_closure_set(v___f_2349_, 2, v___f_2347_);
lean_closure_set(v___f_2349_, 3, v_inst_2343_);
lean_closure_set(v___f_2349_, 4, v_xs_2344_);
v___x_2350_ = lean_unsigned_to_nat(0u);
v___x_2351_ = 0;
v___x_2352_ = lean_io_promise_new();
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2352_);
v___x_2354_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2350_, v___x_2351_, v___x_2353_, v___f_2349_);
return v___x_2354_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___boxed(lean_object* v_inst_2355_, lean_object* v_xs_2356_, lean_object* v_prio_2357_, lean_object* v_a_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_Std_Async_BaseAsync_raceAll___redArg(v_inst_2355_, v_xs_2356_, v_prio_2357_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll(lean_object* v_00_u03b1_2360_, lean_object* v_c_2361_, lean_object* v_inst_2362_, lean_object* v_inst_2363_, lean_object* v_xs_2364_, lean_object* v_prio_2365_){
_start:
{
lean_object* v___f_2367_; lean_object* v___f_2368_; lean_object* v___f_2369_; lean_object* v___x_2370_; uint8_t v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___f_2367_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2368_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2369_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v___f_2369_, 0, v___f_2368_);
lean_closure_set(v___f_2369_, 1, v_prio_2365_);
lean_closure_set(v___f_2369_, 2, v___f_2367_);
lean_closure_set(v___f_2369_, 3, v_inst_2363_);
lean_closure_set(v___f_2369_, 4, v_xs_2364_);
v___x_2370_ = lean_unsigned_to_nat(0u);
v___x_2371_ = 0;
v___x_2372_ = lean_io_promise_new();
v___x_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
v___x_2374_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2370_, v___x_2371_, v___x_2373_, v___f_2369_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___boxed(lean_object* v_00_u03b1_2375_, lean_object* v_c_2376_, lean_object* v_inst_2377_, lean_object* v_inst_2378_, lean_object* v_xs_2379_, lean_object* v_prio_2380_, lean_object* v_a_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l_Std_Async_BaseAsync_raceAll(v_00_u03b1_2375_, v_c_2376_, v_inst_2377_, v_inst_2378_, v_xs_2379_, v_prio_2380_);
lean_dec(v_inst_2377_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg(lean_object* v_x_2383_){
_start:
{
lean_object* v___x_2385_; 
v___x_2385_ = lean_apply_1(v_x_2383_, lean_box(0));
if (lean_obj_tag(v___x_2385_) == 0)
{
lean_object* v_a_2386_; lean_object* v___x_2387_; 
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_a_2386_);
lean_dec_ref_known(v___x_2385_, 1);
v___x_2387_ = lean_task_pure(v_a_2386_);
return v___x_2387_;
}
else
{
lean_object* v_a_2388_; 
v_a_2388_ = lean_ctor_get(v___x_2385_, 0);
lean_inc_ref(v_a_2388_);
lean_dec_ref_known(v___x_2385_, 1);
return v_a_2388_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg___boxed(lean_object* v_x_2389_, lean_object* v_a_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_Std_Async_EAsync_toBaseIO___redArg(v_x_2389_);
return v_res_2391_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO(lean_object* v_00_u03b5_2392_, lean_object* v_00_u03b1_2393_, lean_object* v_x_2394_){
_start:
{
lean_object* v___x_2396_; 
v___x_2396_ = lean_apply_1(v_x_2394_, lean_box(0));
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2398_; 
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
lean_inc(v_a_2397_);
lean_dec_ref_known(v___x_2396_, 1);
v___x_2398_ = lean_task_pure(v_a_2397_);
return v___x_2398_;
}
else
{
lean_object* v_a_2399_; 
v_a_2399_ = lean_ctor_get(v___x_2396_, 0);
lean_inc_ref(v_a_2399_);
lean_dec_ref_known(v___x_2396_, 1);
return v_a_2399_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___boxed(lean_object* v_00_u03b5_2400_, lean_object* v_00_u03b1_2401_, lean_object* v_x_2402_, lean_object* v_a_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Std_Async_EAsync_toBaseIO(v_00_u03b5_2400_, v_00_u03b1_2401_, v_x_2402_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg(lean_object* v_x_2405_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2407_, 0, v_x_2405_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg___boxed(lean_object* v_x_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Std_Async_EAsync_ofTask___redArg(v_x_2408_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask(lean_object* v_00_u03b5_2411_, lean_object* v_00_u03b1_2412_, lean_object* v_x_2413_){
_start:
{
lean_object* v___x_2415_; 
v___x_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2415_, 0, v_x_2413_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___boxed(lean_object* v_00_u03b5_2416_, lean_object* v_00_u03b1_2417_, lean_object* v_x_2418_, lean_object* v_a_2419_){
_start:
{
lean_object* v_res_2420_; 
v_res_2420_ = l_Std_Async_EAsync_ofTask(v_00_u03b5_2416_, v_00_u03b1_2417_, v_x_2418_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg(lean_object* v_x_2421_){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_apply_1(v_x_2421_, lean_box(0));
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2432_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2432_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2432_ == 0)
{
v___x_2426_ = v___x_2423_;
v_isShared_2427_ = v_isSharedCheck_2432_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2423_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2432_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2428_; lean_object* v___x_2430_; 
v___x_2428_ = lean_task_pure(v_a_2424_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v___x_2428_);
v___x_2430_ = v___x_2426_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v___x_2428_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
return v___x_2430_;
}
}
}
else
{
lean_object* v_a_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2440_; 
v_a_2433_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2435_ = v___x_2423_;
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_a_2433_);
lean_dec(v___x_2423_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2438_; 
if (v_isShared_2436_ == 0)
{
lean_ctor_set_tag(v___x_2435_, 0);
v___x_2438_ = v___x_2435_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_a_2433_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg___boxed(lean_object* v_x_2441_, lean_object* v_a_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Std_Async_EAsync_toEIO___redArg(v_x_2441_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO(lean_object* v_00_u03b5_2444_, lean_object* v_00_u03b1_2445_, lean_object* v_x_2446_){
_start:
{
lean_object* v___x_2448_; 
v___x_2448_ = lean_apply_1(v_x_2446_, lean_box(0));
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2457_; 
v_a_2449_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2451_ = v___x_2448_;
v_isShared_2452_ = v_isSharedCheck_2457_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2448_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2457_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2453_; lean_object* v___x_2455_; 
v___x_2453_ = lean_task_pure(v_a_2449_);
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v___x_2453_);
v___x_2455_ = v___x_2451_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v___x_2453_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
v_a_2458_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2448_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2448_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
lean_ctor_set_tag(v___x_2460_, 0);
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___boxed(lean_object* v_00_u03b5_2466_, lean_object* v_00_u03b1_2467_, lean_object* v_x_2468_, lean_object* v_a_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_Std_Async_EAsync_toEIO(v_00_u03b5_2466_, v_00_u03b1_2467_, v_x_2468_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg(lean_object* v_x_2471_){
_start:
{
lean_object* v___x_2473_; 
v___x_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2473_, 0, v_x_2471_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg___boxed(lean_object* v_x_2474_, lean_object* v_a_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l_Std_Async_EAsync_ofETask___redArg(v_x_2474_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask(lean_object* v_00_u03b5_2477_, lean_object* v_00_u03b1_2478_, lean_object* v_x_2479_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2481_, 0, v_x_2479_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___boxed(lean_object* v_00_u03b5_2482_, lean_object* v_00_u03b1_2483_, lean_object* v_x_2484_, lean_object* v_a_2485_){
_start:
{
lean_object* v_res_2486_; 
v_res_2486_ = l_Std_Async_EAsync_ofETask(v_00_u03b5_2482_, v_00_u03b1_2483_, v_x_2484_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg(lean_object* v_a_2487_){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2489_, 0, v_a_2487_);
v___x_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2489_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg___boxed(lean_object* v_a_2491_, lean_object* v_a_2492_){
_start:
{
lean_object* v_res_2493_; 
v_res_2493_ = l_Std_Async_EAsync_pure___redArg(v_a_2491_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure(lean_object* v_00_u03b1_2494_, lean_object* v_00_u03b5_2495_, lean_object* v_a_2496_){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2498_, 0, v_a_2496_);
v___x_2499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2498_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___boxed(lean_object* v_00_u03b1_2500_, lean_object* v_00_u03b5_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l_Std_Async_EAsync_pure(v_00_u03b1_2500_, v_00_u03b5_2501_, v_a_2502_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg(lean_object* v_f_2505_, lean_object* v_self_2506_){
_start:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; uint8_t v___x_2510_; lean_object* v___x_2511_; lean_object* v___y_2513_; 
lean_inc(v_f_2505_);
v___x_2508_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2508_, 0, lean_box(0));
lean_closure_set(v___x_2508_, 1, lean_box(0));
lean_closure_set(v___x_2508_, 2, lean_box(0));
lean_closure_set(v___x_2508_, 3, v_f_2505_);
v___x_2509_ = lean_unsigned_to_nat(0u);
v___x_2510_ = 0;
v___x_2511_ = lean_apply_1(v_self_2506_, lean_box(0));
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2515_; 
lean_dec_ref(v___x_2508_);
v_a_2515_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2515_);
lean_dec_ref_known(v___x_2511_, 1);
if (lean_obj_tag(v_a_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2523_; 
lean_dec(v_f_2505_);
v_a_2516_ = lean_ctor_get(v_a_2515_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v_a_2515_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2518_ = v_a_2515_;
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v_a_2515_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2521_; 
if (v_isShared_2519_ == 0)
{
v___x_2521_ = v___x_2518_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_a_2516_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
v___y_2513_ = v___x_2521_;
goto v___jp_2512_;
}
}
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2532_; 
v_a_2524_ = lean_ctor_get(v_a_2515_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v_a_2515_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2526_ = v_a_2515_;
v_isShared_2527_ = v_isSharedCheck_2532_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v_a_2515_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2532_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2528_; lean_object* v___x_2530_; 
v___x_2528_ = lean_apply_1(v_f_2505_, v_a_2524_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 0, v___x_2528_);
v___x_2530_ = v___x_2526_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2528_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
v___y_2513_ = v___x_2530_;
goto v___jp_2512_;
}
}
}
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2541_; 
lean_dec(v_f_2505_);
v_a_2533_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2535_ = v___x_2511_;
v_isShared_2536_ = v_isSharedCheck_2541_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2511_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2541_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2537_; lean_object* v___x_2539_; 
v___x_2537_ = lean_task_map(v___x_2508_, v_a_2533_, v___x_2509_, v___x_2510_);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v___x_2537_);
v___x_2539_ = v___x_2535_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v___x_2537_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
v___jp_2512_:
{
lean_object* v___x_2514_; 
v___x_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2514_, 0, v___y_2513_);
return v___x_2514_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg___boxed(lean_object* v_f_2542_, lean_object* v_self_2543_, lean_object* v_a_2544_){
_start:
{
lean_object* v_res_2545_; 
v_res_2545_ = l_Std_Async_EAsync_map___redArg(v_f_2542_, v_self_2543_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map(lean_object* v_00_u03b1_2546_, lean_object* v_00_u03b2_2547_, lean_object* v_00_u03b5_2548_, lean_object* v_f_2549_, lean_object* v_self_2550_){
_start:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; uint8_t v___x_2554_; lean_object* v___x_2555_; lean_object* v___y_2557_; 
lean_inc(v_f_2549_);
v___x_2552_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2552_, 0, lean_box(0));
lean_closure_set(v___x_2552_, 1, lean_box(0));
lean_closure_set(v___x_2552_, 2, lean_box(0));
lean_closure_set(v___x_2552_, 3, v_f_2549_);
v___x_2553_ = lean_unsigned_to_nat(0u);
v___x_2554_ = 0;
v___x_2555_ = lean_apply_1(v_self_2550_, lean_box(0));
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2559_; 
lean_dec_ref(v___x_2552_);
v_a_2559_ = lean_ctor_get(v___x_2555_, 0);
lean_inc(v_a_2559_);
lean_dec_ref_known(v___x_2555_, 1);
if (lean_obj_tag(v_a_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2567_; 
lean_dec(v_f_2549_);
v_a_2560_ = lean_ctor_get(v_a_2559_, 0);
v_isSharedCheck_2567_ = !lean_is_exclusive(v_a_2559_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2562_ = v_a_2559_;
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v_a_2559_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2565_; 
if (v_isShared_2563_ == 0)
{
v___x_2565_ = v___x_2562_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_a_2560_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
v___y_2557_ = v___x_2565_;
goto v___jp_2556_;
}
}
}
else
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2576_; 
v_a_2568_ = lean_ctor_get(v_a_2559_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v_a_2559_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2570_ = v_a_2559_;
v_isShared_2571_ = v_isSharedCheck_2576_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v_a_2559_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2576_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2572_; lean_object* v___x_2574_; 
v___x_2572_ = lean_apply_1(v_f_2549_, v_a_2568_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v___x_2572_);
v___x_2574_ = v___x_2570_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v___x_2572_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
v___y_2557_ = v___x_2574_;
goto v___jp_2556_;
}
}
}
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2585_; 
lean_dec(v_f_2549_);
v_a_2577_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2579_ = v___x_2555_;
v_isShared_2580_ = v_isSharedCheck_2585_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2555_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2585_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2581_; lean_object* v___x_2583_; 
v___x_2581_ = lean_task_map(v___x_2552_, v_a_2577_, v___x_2553_, v___x_2554_);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v___x_2581_);
v___x_2583_ = v___x_2579_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v___x_2581_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
v___jp_2556_:
{
lean_object* v___x_2558_; 
v___x_2558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2558_, 0, v___y_2557_);
return v___x_2558_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___boxed(lean_object* v_00_u03b1_2586_, lean_object* v_00_u03b2_2587_, lean_object* v_00_u03b5_2588_, lean_object* v_f_2589_, lean_object* v_self_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l_Std_Async_EAsync_map(v_00_u03b1_2586_, v_00_u03b2_2587_, v_00_u03b5_2588_, v_f_2589_, v_self_2590_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0(lean_object* v_f_2593_, lean_object* v_x_2594_){
_start:
{
if (lean_obj_tag(v_x_2594_) == 0)
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2604_; 
lean_dec_ref(v_f_2593_);
v_a_2596_ = lean_ctor_get(v_x_2594_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v_x_2594_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2598_ = v_x_2594_;
v_isShared_2599_ = v_isSharedCheck_2604_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v_x_2594_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2604_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2601_; 
if (v_isShared_2599_ == 0)
{
v___x_2601_ = v___x_2598_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2596_);
v___x_2601_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
lean_object* v___x_2602_; 
v___x_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2601_);
return v___x_2602_;
}
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2606_; 
v_a_2605_ = lean_ctor_get(v_x_2594_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v_x_2594_, 1);
v___x_2606_ = lean_apply_2(v_f_2593_, v_a_2605_, lean_box(0));
return v___x_2606_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0___boxed(lean_object* v_f_2607_, lean_object* v_x_2608_, lean_object* v___y_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l_Std_Async_EAsync_bind___redArg___lam__0(v_f_2607_, v_x_2608_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg(lean_object* v_self_2611_, lean_object* v_f_2612_){
_start:
{
lean_object* v___f_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___f_2614_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2614_, 0, v_f_2612_);
v___x_2615_ = lean_unsigned_to_nat(0u);
v___x_2616_ = 0;
v___x_2617_ = lean_apply_1(v_self_2611_, lean_box(0));
v___x_2618_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2615_, v___x_2616_, v___x_2617_, v___f_2614_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___boxed(lean_object* v_self_2619_, lean_object* v_f_2620_, lean_object* v_a_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Std_Async_EAsync_bind___redArg(v_self_2619_, v_f_2620_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind(lean_object* v_00_u03b5_2623_, lean_object* v_00_u03b1_2624_, lean_object* v_00_u03b2_2625_, lean_object* v_self_2626_, lean_object* v_f_2627_){
_start:
{
lean_object* v___f_2629_; lean_object* v___x_2630_; uint8_t v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___f_2629_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2629_, 0, v_f_2627_);
v___x_2630_ = lean_unsigned_to_nat(0u);
v___x_2631_ = 0;
v___x_2632_ = lean_apply_1(v_self_2626_, lean_box(0));
v___x_2633_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2630_, v___x_2631_, v___x_2632_, v___f_2629_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___boxed(lean_object* v_00_u03b5_2634_, lean_object* v_00_u03b1_2635_, lean_object* v_00_u03b2_2636_, lean_object* v_self_2637_, lean_object* v_f_2638_, lean_object* v_a_2639_){
_start:
{
lean_object* v_res_2640_; 
v_res_2640_ = l_Std_Async_EAsync_bind(v_00_u03b5_2634_, v_00_u03b1_2635_, v_00_u03b2_2636_, v_self_2637_, v_f_2638_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg(lean_object* v_x_2641_){
_start:
{
lean_object* v_val_2644_; lean_object* v___x_2646_; 
v___x_2646_ = lean_apply_1(v_x_2641_, lean_box(0));
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v_a_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2654_; 
v_a_2647_ = lean_ctor_get(v___x_2646_, 0);
v_isSharedCheck_2654_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2649_ = v___x_2646_;
v_isShared_2650_ = v_isSharedCheck_2654_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_a_2647_);
lean_dec(v___x_2646_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2654_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v___x_2652_; 
if (v_isShared_2650_ == 0)
{
lean_ctor_set_tag(v___x_2649_, 1);
v___x_2652_ = v___x_2649_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_a_2647_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
v_val_2644_ = v___x_2652_;
goto v___jp_2643_;
}
}
}
else
{
lean_object* v_a_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2662_; 
v_a_2655_ = lean_ctor_get(v___x_2646_, 0);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2657_ = v___x_2646_;
v_isShared_2658_ = v_isSharedCheck_2662_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_a_2655_);
lean_dec(v___x_2646_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2662_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
lean_object* v___x_2660_; 
if (v_isShared_2658_ == 0)
{
lean_ctor_set_tag(v___x_2657_, 0);
v___x_2660_ = v___x_2657_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v_a_2655_);
v___x_2660_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
v_val_2644_ = v___x_2660_;
goto v___jp_2643_;
}
}
}
v___jp_2643_:
{
lean_object* v___x_2645_; 
v___x_2645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2645_, 0, v_val_2644_);
return v___x_2645_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg___boxed(lean_object* v_x_2663_, lean_object* v_a_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Std_Async_EAsync_lift___redArg(v_x_2663_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift(lean_object* v_00_u03b5_2666_, lean_object* v_00_u03b1_2667_, lean_object* v_x_2668_){
_start:
{
lean_object* v_val_2671_; lean_object* v___x_2673_; 
v___x_2673_ = lean_apply_1(v_x_2668_, lean_box(0));
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2681_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2676_ = v___x_2673_;
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2673_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2679_; 
if (v_isShared_2677_ == 0)
{
lean_ctor_set_tag(v___x_2676_, 1);
v___x_2679_ = v___x_2676_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_a_2674_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
v_val_2671_ = v___x_2679_;
goto v___jp_2670_;
}
}
}
else
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2689_; 
v_a_2682_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2684_ = v___x_2673_;
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2673_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2687_; 
if (v_isShared_2685_ == 0)
{
lean_ctor_set_tag(v___x_2684_, 0);
v___x_2687_ = v___x_2684_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_a_2682_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
v_val_2671_ = v___x_2687_;
goto v___jp_2670_;
}
}
}
v___jp_2670_:
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2672_, 0, v_val_2671_);
return v___x_2672_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___boxed(lean_object* v_00_u03b5_2690_, lean_object* v_00_u03b1_2691_, lean_object* v_x_2692_, lean_object* v_a_2693_){
_start:
{
lean_object* v_res_2694_; 
v_res_2694_ = l_Std_Async_EAsync_lift(v_00_u03b5_2690_, v_00_u03b1_2691_, v_x_2692_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg(lean_object* v_self_2695_){
_start:
{
lean_object* v_val_2698_; lean_object* v___x_2716_; 
v___x_2716_ = lean_apply_1(v_self_2695_, lean_box(0));
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v_a_2717_; lean_object* v___x_2718_; 
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_a_2717_);
lean_dec_ref_known(v___x_2716_, 1);
v___x_2718_ = lean_task_pure(v_a_2717_);
v_val_2698_ = v___x_2718_;
goto v___jp_2697_;
}
else
{
lean_object* v_a_2719_; 
v_a_2719_ = lean_ctor_get(v___x_2716_, 0);
lean_inc_ref(v_a_2719_);
lean_dec_ref_known(v___x_2716_, 1);
v_val_2698_ = v_a_2719_;
goto v___jp_2697_;
}
v___jp_2697_:
{
lean_object* v___x_2699_; 
v___x_2699_ = lean_task_get_own(v_val_2698_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2707_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2702_ = v___x_2699_;
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_a_2700_);
lean_dec(v___x_2699_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2705_; 
if (v_isShared_2703_ == 0)
{
lean_ctor_set_tag(v___x_2702_, 1);
v___x_2705_ = v___x_2702_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_a_2700_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
else
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
v_a_2708_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2699_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2699_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
lean_ctor_set_tag(v___x_2710_, 0);
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg___boxed(lean_object* v_self_2720_, lean_object* v_a_2721_){
_start:
{
lean_object* v_res_2722_; 
v_res_2722_ = l_Std_Async_EAsync_wait___redArg(v_self_2720_);
return v_res_2722_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait(lean_object* v_00_u03b5_2723_, lean_object* v_00_u03b1_2724_, lean_object* v_self_2725_){
_start:
{
lean_object* v_val_2728_; lean_object* v___x_2746_; 
v___x_2746_ = lean_apply_1(v_self_2725_, lean_box(0));
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; lean_object* v___x_2748_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v___x_2746_, 1);
v___x_2748_ = lean_task_pure(v_a_2747_);
v_val_2728_ = v___x_2748_;
goto v___jp_2727_;
}
else
{
lean_object* v_a_2749_; 
v_a_2749_ = lean_ctor_get(v___x_2746_, 0);
lean_inc_ref(v_a_2749_);
lean_dec_ref_known(v___x_2746_, 1);
v_val_2728_ = v_a_2749_;
goto v___jp_2727_;
}
v___jp_2727_:
{
lean_object* v___x_2729_; 
v___x_2729_ = lean_task_get_own(v_val_2728_);
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_object* v_a_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2737_; 
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2732_ = v___x_2729_;
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_a_2730_);
lean_dec(v___x_2729_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v___x_2735_; 
if (v_isShared_2733_ == 0)
{
lean_ctor_set_tag(v___x_2732_, 1);
v___x_2735_ = v___x_2732_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v_a_2730_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
}
else
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2745_; 
v_a_2738_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2740_ = v___x_2729_;
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2729_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2743_; 
if (v_isShared_2741_ == 0)
{
lean_ctor_set_tag(v___x_2740_, 0);
v___x_2743_ = v___x_2740_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_a_2738_);
v___x_2743_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
return v___x_2743_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___boxed(lean_object* v_00_u03b5_2750_, lean_object* v_00_u03b1_2751_, lean_object* v_self_2752_, lean_object* v_a_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_Std_Async_EAsync_wait(v_00_u03b5_2750_, v_00_u03b1_2751_, v_self_2752_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___lam__0(lean_object* v_x_2755_){
_start:
{
if (lean_obj_tag(v_x_2755_) == 0)
{
lean_object* v_a_2756_; lean_object* v___x_2757_; 
v_a_2756_ = lean_ctor_get(v_x_2755_, 0);
lean_inc(v_a_2756_);
lean_dec_ref_known(v_x_2755_, 1);
v___x_2757_ = lean_task_pure(v_a_2756_);
return v___x_2757_;
}
else
{
lean_object* v_a_2758_; 
v_a_2758_ = lean_ctor_get(v_x_2755_, 0);
lean_inc_ref(v_a_2758_);
lean_dec_ref_known(v_x_2755_, 1);
return v_a_2758_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg(lean_object* v_x_2760_, lean_object* v_prio_2761_){
_start:
{
lean_object* v___f_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; uint8_t v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___f_2763_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2764_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2764_, 0, lean_box(0));
lean_closure_set(v___x_2764_, 1, v_x_2760_);
v___x_2765_ = lean_io_as_task(v___x_2764_, v_prio_2761_);
v___x_2766_ = lean_unsigned_to_nat(0u);
v___x_2767_ = 1;
v___x_2768_ = lean_task_bind(v___x_2765_, v___f_2763_, v___x_2766_, v___x_2767_);
v___x_2769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___boxed(lean_object* v_x_2770_, lean_object* v_prio_2771_, lean_object* v_a_2772_){
_start:
{
lean_object* v_res_2773_; 
v_res_2773_ = l_Std_Async_EAsync_asTask___redArg(v_x_2770_, v_prio_2771_);
return v_res_2773_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask(lean_object* v_00_u03b5_2774_, lean_object* v_00_u03b1_2775_, lean_object* v_x_2776_, lean_object* v_prio_2777_){
_start:
{
lean_object* v___f_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; uint8_t v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___f_2779_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2780_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2780_, 0, lean_box(0));
lean_closure_set(v___x_2780_, 1, v_x_2776_);
v___x_2781_ = lean_io_as_task(v___x_2780_, v_prio_2777_);
v___x_2782_ = lean_unsigned_to_nat(0u);
v___x_2783_ = 1;
v___x_2784_ = lean_task_bind(v___x_2781_, v___f_2779_, v___x_2782_, v___x_2783_);
v___x_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2784_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___boxed(lean_object* v_00_u03b5_2786_, lean_object* v_00_u03b1_2787_, lean_object* v_x_2788_, lean_object* v_prio_2789_, lean_object* v_a_2790_){
_start:
{
lean_object* v_res_2791_; 
v_res_2791_ = l_Std_Async_EAsync_asTask(v_00_u03b5_2786_, v_00_u03b1_2787_, v_x_2788_, v_prio_2789_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg(lean_object* v_x_2792_, lean_object* v_prio_2793_){
_start:
{
lean_object* v___f_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; uint8_t v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___f_2795_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2796_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2796_, 0, lean_box(0));
lean_closure_set(v___x_2796_, 1, v_x_2792_);
v___x_2797_ = lean_io_as_task(v___x_2796_, v_prio_2793_);
v___x_2798_ = lean_unsigned_to_nat(0u);
v___x_2799_ = 1;
v___x_2800_ = lean_task_bind(v___x_2797_, v___f_2795_, v___x_2798_, v___x_2799_);
v___x_2801_ = lean_task_get_own(v___x_2800_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2809_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2804_ = v___x_2801_;
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_a_2802_);
lean_dec(v___x_2801_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2807_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set_tag(v___x_2804_, 1);
v___x_2807_ = v___x_2804_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_a_2802_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2817_; 
v_a_2810_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2812_ = v___x_2801_;
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2801_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2815_; 
if (v_isShared_2813_ == 0)
{
lean_ctor_set_tag(v___x_2812_, 0);
v___x_2815_ = v___x_2812_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2810_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg___boxed(lean_object* v_x_2818_, lean_object* v_prio_2819_, lean_object* v_a_2820_){
_start:
{
lean_object* v_res_2821_; 
v_res_2821_ = l_Std_Async_EAsync_block___redArg(v_x_2818_, v_prio_2819_);
return v_res_2821_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block(lean_object* v_00_u03b5_2822_, lean_object* v_00_u03b1_2823_, lean_object* v_x_2824_, lean_object* v_prio_2825_){
_start:
{
lean_object* v___f_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; uint8_t v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___f_2827_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2828_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2828_, 0, lean_box(0));
lean_closure_set(v___x_2828_, 1, v_x_2824_);
v___x_2829_ = lean_io_as_task(v___x_2828_, v_prio_2825_);
v___x_2830_ = lean_unsigned_to_nat(0u);
v___x_2831_ = 1;
v___x_2832_ = lean_task_bind(v___x_2829_, v___f_2827_, v___x_2830_, v___x_2831_);
v___x_2833_ = lean_task_get_own(v___x_2832_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2833_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2833_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
lean_ctor_set_tag(v___x_2836_, 1);
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
else
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2849_; 
v_a_2842_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2844_ = v___x_2833_;
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v___x_2833_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2847_; 
if (v_isShared_2845_ == 0)
{
lean_ctor_set_tag(v___x_2844_, 0);
v___x_2847_ = v___x_2844_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v_a_2842_);
v___x_2847_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
return v___x_2847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___boxed(lean_object* v_00_u03b5_2850_, lean_object* v_00_u03b1_2851_, lean_object* v_x_2852_, lean_object* v_prio_2853_, lean_object* v_a_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Std_Async_EAsync_block(v_00_u03b5_2850_, v_00_u03b1_2851_, v_x_2852_, v_prio_2853_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg(lean_object* v_e_2856_){
_start:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v_e_2856_);
v___x_2859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2858_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg___boxed(lean_object* v_e_2860_, lean_object* v_a_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l_Std_Async_EAsync_throw___redArg(v_e_2860_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw(lean_object* v_00_u03b5_2863_, lean_object* v_00_u03b1_2864_, lean_object* v_e_2865_){
_start:
{
lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2867_, 0, v_e_2865_);
v___x_2868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___boxed(lean_object* v_00_u03b5_2869_, lean_object* v_00_u03b1_2870_, lean_object* v_e_2871_, lean_object* v_a_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l_Std_Async_EAsync_throw(v_00_u03b5_2869_, v_00_u03b1_2870_, v_e_2871_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0(lean_object* v_f_2874_, lean_object* v_x_2875_){
_start:
{
if (lean_obj_tag(v_x_2875_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2878_; 
v_a_2877_ = lean_ctor_get(v_x_2875_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v_x_2875_, 1);
v___x_2878_ = lean_apply_2(v_f_2874_, v_a_2877_, lean_box(0));
return v___x_2878_;
}
else
{
lean_object* v___x_2879_; 
lean_dec_ref(v_f_2874_);
v___x_2879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2879_, 0, v_x_2875_);
return v___x_2879_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed(lean_object* v_f_2880_, lean_object* v_x_2881_, lean_object* v___y_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Std_Async_EAsync_tryCatch___redArg___lam__0(v_f_2880_, v_x_2881_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg(lean_object* v_x_2884_, lean_object* v_f_2885_, lean_object* v_prio_2886_, uint8_t v_sync_2887_){
_start:
{
lean_object* v___f_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___f_2889_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2889_, 0, v_f_2885_);
v___x_2890_ = lean_apply_1(v_x_2884_, lean_box(0));
v___x_2891_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2886_, v_sync_2887_, v___x_2890_, v___f_2889_);
return v___x_2891_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___boxed(lean_object* v_x_2892_, lean_object* v_f_2893_, lean_object* v_prio_2894_, lean_object* v_sync_2895_, lean_object* v_a_2896_){
_start:
{
uint8_t v_sync_boxed_2897_; lean_object* v_res_2898_; 
v_sync_boxed_2897_ = lean_unbox(v_sync_2895_);
v_res_2898_ = l_Std_Async_EAsync_tryCatch___redArg(v_x_2892_, v_f_2893_, v_prio_2894_, v_sync_boxed_2897_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch(lean_object* v_00_u03b5_2899_, lean_object* v_00_u03b1_2900_, lean_object* v_x_2901_, lean_object* v_f_2902_, lean_object* v_prio_2903_, uint8_t v_sync_2904_){
_start:
{
lean_object* v___f_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___f_2906_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2906_, 0, v_f_2902_);
v___x_2907_ = lean_apply_1(v_x_2901_, lean_box(0));
v___x_2908_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2903_, v_sync_2904_, v___x_2907_, v___f_2906_);
return v___x_2908_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___boxed(lean_object* v_00_u03b5_2909_, lean_object* v_00_u03b1_2910_, lean_object* v_x_2911_, lean_object* v_f_2912_, lean_object* v_prio_2913_, lean_object* v_sync_2914_, lean_object* v_a_2915_){
_start:
{
uint8_t v_sync_boxed_2916_; lean_object* v_res_2917_; 
v_sync_boxed_2916_ = lean_unbox(v_sync_2914_);
v_res_2917_ = l_Std_Async_EAsync_tryCatch(v_00_u03b5_2909_, v_00_u03b1_2910_, v_x_2911_, v_f_2912_, v_prio_2913_, v_sync_boxed_2916_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(lean_object* v_a_2918_, lean_object* v_____do__lift_2919_){
_start:
{
if (lean_obj_tag(v_____do__lift_2919_) == 0)
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2929_; 
lean_dec(v_a_2918_);
v_a_2921_ = lean_ctor_get(v_____do__lift_2919_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v_____do__lift_2919_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2923_ = v_____do__lift_2919_;
v_isShared_2924_ = v_isSharedCheck_2929_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v_____do__lift_2919_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2929_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2926_; 
if (v_isShared_2924_ == 0)
{
v___x_2926_ = v___x_2923_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_a_2921_);
v___x_2926_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
lean_object* v___x_2927_; 
v___x_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2926_);
return v___x_2927_;
}
}
}
else
{
lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2937_; 
v_isSharedCheck_2937_ = !lean_is_exclusive(v_____do__lift_2919_);
if (v_isSharedCheck_2937_ == 0)
{
lean_object* v_unused_2938_; 
v_unused_2938_ = lean_ctor_get(v_____do__lift_2919_, 0);
lean_dec(v_unused_2938_);
v___x_2931_ = v_____do__lift_2919_;
v_isShared_2932_ = v_isSharedCheck_2937_;
goto v_resetjp_2930_;
}
else
{
lean_dec(v_____do__lift_2919_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2937_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
lean_ctor_set_tag(v___x_2931_, 0);
lean_ctor_set(v___x_2931_, 0, v_a_2918_);
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_a_2918_);
v___x_2934_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
lean_object* v___x_2935_; 
v___x_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2935_, 0, v___x_2934_);
return v___x_2935_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed(lean_object* v_a_2939_, lean_object* v_____do__lift_2940_, lean_object* v___y_2941_){
_start:
{
lean_object* v_res_2942_; 
v_res_2942_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(v_a_2939_, v_____do__lift_2940_);
return v_res_2942_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(lean_object* v_a_2943_, lean_object* v_____do__lift_2944_){
_start:
{
if (lean_obj_tag(v_____do__lift_2944_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2954_; 
lean_dec(v_a_2943_);
v_a_2946_ = lean_ctor_get(v_____do__lift_2944_, 0);
v_isSharedCheck_2954_ = !lean_is_exclusive(v_____do__lift_2944_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2948_ = v_____do__lift_2944_;
v_isShared_2949_ = v_isSharedCheck_2954_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v_____do__lift_2944_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2954_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_a_2946_);
v___x_2951_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; 
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
return v___x_2952_;
}
}
}
else
{
lean_object* v_a_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2964_; 
v_a_2955_ = lean_ctor_get(v_____do__lift_2944_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v_____do__lift_2944_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2957_ = v_____do__lift_2944_;
v_isShared_2958_ = v_isSharedCheck_2964_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_a_2955_);
lean_dec(v_____do__lift_2944_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2964_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2959_; lean_object* v___x_2961_; 
v___x_2959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2959_, 0, v_a_2943_);
lean_ctor_set(v___x_2959_, 1, v_a_2955_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 0, v___x_2959_);
v___x_2961_ = v___x_2957_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v___x_2959_);
v___x_2961_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
lean_object* v___x_2962_; 
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
return v___x_2962_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed(lean_object* v_a_2965_, lean_object* v_____do__lift_2966_, lean_object* v___y_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(v_a_2965_, v_____do__lift_2966_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(lean_object* v_f_2969_, lean_object* v_x_2970_){
_start:
{
if (lean_obj_tag(v_x_2970_) == 0)
{
lean_object* v_a_2972_; lean_object* v___f_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; uint8_t v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v_a_2972_ = lean_ctor_get(v_x_2970_, 0);
lean_inc(v_a_2972_);
lean_dec_ref_known(v_x_2970_, 1);
v___f_2973_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2973_, 0, v_a_2972_);
v___x_2974_ = lean_box(0);
v___x_2975_ = lean_unsigned_to_nat(0u);
v___x_2976_ = 0;
v___x_2977_ = lean_apply_2(v_f_2969_, v___x_2974_, lean_box(0));
v___x_2978_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2975_, v___x_2976_, v___x_2977_, v___f_2973_);
return v___x_2978_;
}
else
{
lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2991_; 
v_a_2979_ = lean_ctor_get(v_x_2970_, 0);
v_isSharedCheck_2991_ = !lean_is_exclusive(v_x_2970_);
if (v_isSharedCheck_2991_ == 0)
{
v___x_2981_ = v_x_2970_;
v_isShared_2982_ = v_isSharedCheck_2991_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v_x_2970_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2991_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___f_2983_; lean_object* v___x_2985_; 
lean_inc(v_a_2979_);
v___f_2983_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2983_, 0, v_a_2979_);
if (v_isShared_2982_ == 0)
{
v___x_2985_ = v___x_2981_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_a_2979_);
v___x_2985_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2986_; uint8_t v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; 
v___x_2986_ = lean_unsigned_to_nat(0u);
v___x_2987_ = 0;
v___x_2988_ = lean_apply_2(v_f_2969_, v___x_2985_, lean_box(0));
v___x_2989_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2986_, v___x_2987_, v___x_2988_, v___f_2983_);
return v___x_2989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed(lean_object* v_f_2992_, lean_object* v_x_2993_, lean_object* v___y_2994_){
_start:
{
lean_object* v_res_2995_; 
v_res_2995_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(v_f_2992_, v_x_2993_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object* v_x_2996_, lean_object* v_f_2997_, lean_object* v_prio_2998_, uint8_t v_sync_2999_){
_start:
{
lean_object* v___f_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v___f_3001_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3001_, 0, v_f_2997_);
v___x_3002_ = lean_apply_1(v_x_2996_, lean_box(0));
v___x_3003_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2998_, v_sync_2999_, v___x_3002_, v___f_3001_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___boxed(lean_object* v_x_3004_, lean_object* v_f_3005_, lean_object* v_prio_3006_, lean_object* v_sync_3007_, lean_object* v_a_3008_){
_start:
{
uint8_t v_sync_boxed_3009_; lean_object* v_res_3010_; 
v_sync_boxed_3009_ = lean_unbox(v_sync_3007_);
v_res_3010_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3004_, v_f_3005_, v_prio_3006_, v_sync_boxed_3009_);
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27(lean_object* v_00_u03b5_3011_, lean_object* v_00_u03b1_3012_, lean_object* v_00_u03b2_3013_, lean_object* v_x_3014_, lean_object* v_f_3015_, lean_object* v_prio_3016_, uint8_t v_sync_3017_){
_start:
{
lean_object* v___x_3019_; 
v___x_3019_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3014_, v_f_3015_, v_prio_3016_, v_sync_3017_);
return v___x_3019_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___boxed(lean_object* v_00_u03b5_3020_, lean_object* v_00_u03b1_3021_, lean_object* v_00_u03b2_3022_, lean_object* v_x_3023_, lean_object* v_f_3024_, lean_object* v_prio_3025_, lean_object* v_sync_3026_, lean_object* v_a_3027_){
_start:
{
uint8_t v_sync_boxed_3028_; lean_object* v_res_3029_; 
v_sync_boxed_3028_ = lean_unbox(v_sync_3026_);
v_res_3029_ = l_Std_Async_EAsync_tryFinally_x27(v_00_u03b5_3020_, v_00_u03b1_3021_, v_00_u03b2_3022_, v_x_3023_, v_f_3024_, v_prio_3025_, v_sync_boxed_3028_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg(lean_object* v_x_3030_){
_start:
{
lean_object* v___x_3032_; 
v___x_3032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3032_, 0, v_x_3030_);
return v___x_3032_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg___boxed(lean_object* v_x_3033_, lean_object* v_a_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Std_Async_EAsync_await___redArg(v_x_3033_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await(lean_object* v_00_u03b5_3036_, lean_object* v_00_u03b1_3037_, lean_object* v_x_3038_){
_start:
{
lean_object* v___x_3040_; 
v___x_3040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3040_, 0, v_x_3038_);
return v___x_3040_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___boxed(lean_object* v_00_u03b5_3041_, lean_object* v_00_u03b1_3042_, lean_object* v_x_3043_, lean_object* v_a_3044_){
_start:
{
lean_object* v_res_3045_; 
v_res_3045_ = l_Std_Async_EAsync_await(v_00_u03b5_3041_, v_00_u03b1_3042_, v_x_3043_);
return v_res_3045_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg(lean_object* v_self_3046_, lean_object* v_prio_3047_){
_start:
{
lean_object* v___f_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; uint8_t v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___f_3049_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_3050_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3050_, 0, lean_box(0));
lean_closure_set(v___x_3050_, 1, v_self_3046_);
v___x_3051_ = lean_io_as_task(v___x_3050_, v_prio_3047_);
v___x_3052_ = lean_unsigned_to_nat(0u);
v___x_3053_ = 1;
v___x_3054_ = lean_task_bind(v___x_3051_, v___f_3049_, v___x_3052_, v___x_3053_);
v___x_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
v___x_3056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3055_);
return v___x_3056_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg___boxed(lean_object* v_self_3057_, lean_object* v_prio_3058_, lean_object* v_a_3059_){
_start:
{
lean_object* v_res_3060_; 
v_res_3060_ = l_Std_Async_EAsync_async___redArg(v_self_3057_, v_prio_3058_);
return v_res_3060_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async(lean_object* v_00_u03b5_3061_, lean_object* v_00_u03b1_3062_, lean_object* v_self_3063_, lean_object* v_prio_3064_){
_start:
{
lean_object* v___f_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; uint8_t v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___f_3066_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_3067_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3067_, 0, lean_box(0));
lean_closure_set(v___x_3067_, 1, v_self_3063_);
v___x_3068_ = lean_io_as_task(v___x_3067_, v_prio_3064_);
v___x_3069_ = lean_unsigned_to_nat(0u);
v___x_3070_ = 1;
v___x_3071_ = lean_task_bind(v___x_3068_, v___f_3066_, v___x_3069_, v___x_3070_);
v___x_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
v___x_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3072_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___boxed(lean_object* v_00_u03b5_3074_, lean_object* v_00_u03b1_3075_, lean_object* v_self_3076_, lean_object* v_prio_3077_, lean_object* v_a_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l_Std_Async_EAsync_async(v_00_u03b5_3074_, v_00_u03b1_3075_, v_self_3076_, v_prio_3077_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0(lean_object* v_00_u03b1_3080_, lean_object* v_00_u03b2_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_){
_start:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; uint8_t v___x_3087_; lean_object* v___x_3088_; lean_object* v___y_3090_; 
lean_inc(v___y_3082_);
v___x_3085_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3085_, 0, lean_box(0));
lean_closure_set(v___x_3085_, 1, lean_box(0));
lean_closure_set(v___x_3085_, 2, lean_box(0));
lean_closure_set(v___x_3085_, 3, v___y_3082_);
v___x_3086_ = lean_unsigned_to_nat(0u);
v___x_3087_ = 0;
v___x_3088_ = lean_apply_1(v___y_3083_, lean_box(0));
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v_a_3092_; 
lean_dec_ref(v___x_3085_);
v_a_3092_ = lean_ctor_get(v___x_3088_, 0);
lean_inc(v_a_3092_);
lean_dec_ref_known(v___x_3088_, 1);
if (lean_obj_tag(v_a_3092_) == 0)
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3100_; 
lean_dec(v___y_3082_);
v_a_3093_ = lean_ctor_get(v_a_3092_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v_a_3092_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3095_ = v_a_3092_;
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v_a_3092_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3098_; 
if (v_isShared_3096_ == 0)
{
v___x_3098_ = v___x_3095_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_a_3093_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
v___y_3090_ = v___x_3098_;
goto v___jp_3089_;
}
}
}
else
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3109_; 
v_a_3101_ = lean_ctor_get(v_a_3092_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v_a_3092_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3103_ = v_a_3092_;
v_isShared_3104_ = v_isSharedCheck_3109_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v_a_3092_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3109_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3105_; lean_object* v___x_3107_; 
v___x_3105_ = lean_apply_1(v___y_3082_, v_a_3101_);
if (v_isShared_3104_ == 0)
{
lean_ctor_set(v___x_3103_, 0, v___x_3105_);
v___x_3107_ = v___x_3103_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v___x_3105_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
v___y_3090_ = v___x_3107_;
goto v___jp_3089_;
}
}
}
}
else
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3118_; 
lean_dec(v___y_3082_);
v_a_3110_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3118_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3112_ = v___x_3088_;
v_isShared_3113_ = v_isSharedCheck_3118_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_3088_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3118_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3114_; lean_object* v___x_3116_; 
v___x_3114_ = lean_task_map(v___x_3085_, v_a_3110_, v___x_3086_, v___x_3087_);
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 0, v___x_3114_);
v___x_3116_ = v___x_3112_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v___x_3114_);
v___x_3116_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
return v___x_3116_;
}
}
}
v___jp_3089_:
{
lean_object* v___x_3091_; 
v___x_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3091_, 0, v___y_3090_);
return v___x_3091_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0___boxed(lean_object* v_00_u03b1_3119_, lean_object* v_00_u03b2_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l_Std_Async_EAsync_instFunctor___redArg___lam__0(v_00_u03b1_3119_, v_00_u03b2_3120_, v___y_3121_, v___y_3122_);
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1(lean_object* v___f_3125_, lean_object* v_00_u03b1_3126_, lean_object* v_00_u03b2_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3131_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_3131_, 0, lean_box(0));
lean_closure_set(v___x_3131_, 1, lean_box(0));
lean_closure_set(v___x_3131_, 2, v___y_3128_);
v___x_3132_ = lean_apply_5(v___f_3125_, lean_box(0), lean_box(0), v___x_3131_, v___y_3129_, lean_box(0));
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1___boxed(lean_object* v___f_3133_, lean_object* v_00_u03b1_3134_, lean_object* v_00_u03b2_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_Std_Async_EAsync_instFunctor___redArg___lam__1(v___f_3133_, v_00_u03b1_3134_, v_00_u03b2_3135_, v___y_3136_, v___y_3137_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg(){
_start:
{
lean_object* v___x_3147_; 
v___x_3147_ = ((lean_object*)(l_Std_Async_EAsync_instFunctor___redArg___closed__2));
return v___x_3147_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___boxed(lean_object* v___dummy_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l_Std_Async_EAsync_instFunctor___redArg();
return v_res_3149_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instFunctor___closed__0(void){
_start:
{
lean_object* v___x_3150_; 
v___x_3150_ = l_Std_Async_EAsync_instFunctor___redArg();
return v___x_3150_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor(lean_object* v_00_u03b5_3151_){
_start:
{
lean_object* v___x_3152_; 
v___x_3152_ = lean_obj_once(&l_Std_Async_EAsync_instFunctor___closed__0, &l_Std_Async_EAsync_instFunctor___closed__0_once, _init_l_Std_Async_EAsync_instFunctor___closed__0);
return v___x_3152_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0(lean_object* v_00_u03b1_3153_, lean_object* v___y_3154_){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3156_, 0, v___y_3154_);
v___x_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3157_, 0, v___x_3156_);
return v___x_3157_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0___boxed(lean_object* v_00_u03b1_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l_Std_Async_EAsync_instMonad___redArg___lam__0(v_00_u03b1_3158_, v___y_3159_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1(lean_object* v_x_3162_, lean_object* v_x_3163_){
_start:
{
if (lean_obj_tag(v_x_3163_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3173_; 
lean_dec_ref(v_x_3162_);
v_a_3165_ = lean_ctor_get(v_x_3163_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v_x_3163_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3167_ = v_x_3163_;
v_isShared_3168_ = v_isSharedCheck_3173_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v_x_3163_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3173_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
lean_object* v___x_3171_; 
v___x_3171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3170_);
return v___x_3171_;
}
}
}
else
{
lean_object* v_a_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; uint8_t v___x_3178_; lean_object* v___x_3179_; lean_object* v___y_3181_; 
v_a_3174_ = lean_ctor_get(v_x_3163_, 0);
lean_inc_n(v_a_3174_, 2);
lean_dec_ref_known(v_x_3163_, 1);
v___x_3175_ = lean_box(0);
v___x_3176_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3176_, 0, lean_box(0));
lean_closure_set(v___x_3176_, 1, lean_box(0));
lean_closure_set(v___x_3176_, 2, lean_box(0));
lean_closure_set(v___x_3176_, 3, v_a_3174_);
v___x_3177_ = lean_unsigned_to_nat(0u);
v___x_3178_ = 0;
v___x_3179_ = lean_apply_2(v_x_3162_, v___x_3175_, lean_box(0));
if (lean_obj_tag(v___x_3179_) == 0)
{
lean_object* v_a_3183_; 
lean_dec_ref(v___x_3176_);
v_a_3183_ = lean_ctor_get(v___x_3179_, 0);
lean_inc(v_a_3183_);
lean_dec_ref_known(v___x_3179_, 1);
if (lean_obj_tag(v_a_3183_) == 0)
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3191_; 
lean_dec(v_a_3174_);
v_a_3184_ = lean_ctor_get(v_a_3183_, 0);
v_isSharedCheck_3191_ = !lean_is_exclusive(v_a_3183_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3186_ = v_a_3183_;
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v_a_3183_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3189_; 
if (v_isShared_3187_ == 0)
{
v___x_3189_ = v___x_3186_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v_a_3184_);
v___x_3189_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
v___y_3181_ = v___x_3189_;
goto v___jp_3180_;
}
}
}
else
{
lean_object* v_a_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3200_; 
v_a_3192_ = lean_ctor_get(v_a_3183_, 0);
v_isSharedCheck_3200_ = !lean_is_exclusive(v_a_3183_);
if (v_isSharedCheck_3200_ == 0)
{
v___x_3194_ = v_a_3183_;
v_isShared_3195_ = v_isSharedCheck_3200_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_a_3192_);
lean_dec(v_a_3183_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3200_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v___x_3196_; lean_object* v___x_3198_; 
v___x_3196_ = lean_apply_1(v_a_3174_, v_a_3192_);
if (v_isShared_3195_ == 0)
{
lean_ctor_set(v___x_3194_, 0, v___x_3196_);
v___x_3198_ = v___x_3194_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v___x_3196_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
v___y_3181_ = v___x_3198_;
goto v___jp_3180_;
}
}
}
}
else
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3209_; 
lean_dec(v_a_3174_);
v_a_3201_ = lean_ctor_get(v___x_3179_, 0);
v_isSharedCheck_3209_ = !lean_is_exclusive(v___x_3179_);
if (v_isSharedCheck_3209_ == 0)
{
v___x_3203_ = v___x_3179_;
v_isShared_3204_ = v_isSharedCheck_3209_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3179_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3209_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3205_; lean_object* v___x_3207_; 
v___x_3205_ = lean_task_map(v___x_3176_, v_a_3201_, v___x_3177_, v___x_3178_);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 0, v___x_3205_);
v___x_3207_ = v___x_3203_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v___x_3205_);
v___x_3207_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
return v___x_3207_;
}
}
}
v___jp_3180_:
{
lean_object* v___x_3182_; 
v___x_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3182_, 0, v___y_3181_);
return v___x_3182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed(lean_object* v_x_3210_, lean_object* v_x_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = l_Std_Async_EAsync_instMonad___redArg___lam__1(v_x_3210_, v_x_3211_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2(lean_object* v_00_u03b1_3214_, lean_object* v_00_u03b2_3215_, lean_object* v_f_3216_, lean_object* v_x_3217_){
_start:
{
lean_object* v___f_3219_; lean_object* v___x_3220_; uint8_t v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___f_3219_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3219_, 0, v_x_3217_);
v___x_3220_ = lean_unsigned_to_nat(0u);
v___x_3221_ = 0;
v___x_3222_ = lean_apply_1(v_f_3216_, lean_box(0));
v___x_3223_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3220_, v___x_3221_, v___x_3222_, v___f_3219_);
return v___x_3223_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2___boxed(lean_object* v_00_u03b1_3224_, lean_object* v_00_u03b2_3225_, lean_object* v_f_3226_, lean_object* v_x_3227_, lean_object* v___y_3228_){
_start:
{
lean_object* v_res_3229_; 
v_res_3229_ = l_Std_Async_EAsync_instMonad___redArg___lam__2(v_00_u03b1_3224_, v_00_u03b2_3225_, v_f_3226_, v_x_3227_);
return v_res_3229_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3(lean_object* v___f_3230_, lean_object* v_a_3231_, lean_object* v_x_3232_){
_start:
{
if (lean_obj_tag(v_x_3232_) == 0)
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3242_; 
lean_dec(v_a_3231_);
lean_dec_ref(v___f_3230_);
v_a_3234_ = lean_ctor_get(v_x_3232_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v_x_3232_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3236_ = v_x_3232_;
v_isShared_3237_ = v_isSharedCheck_3242_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v_x_3232_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3242_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
lean_object* v___x_3240_; 
v___x_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3239_);
return v___x_3240_;
}
}
}
else
{
lean_object* v___x_3243_; 
lean_dec_ref_known(v_x_3232_, 1);
v___x_3243_ = lean_apply_3(v___f_3230_, lean_box(0), v_a_3231_, lean_box(0));
return v___x_3243_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed(lean_object* v___f_3244_, lean_object* v_a_3245_, lean_object* v_x_3246_, lean_object* v___y_3247_){
_start:
{
lean_object* v_res_3248_; 
v_res_3248_ = l_Std_Async_EAsync_instMonad___redArg___lam__3(v___f_3244_, v_a_3245_, v_x_3246_);
return v_res_3248_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4(lean_object* v___f_3249_, lean_object* v_y_3250_, lean_object* v_x_3251_){
_start:
{
if (lean_obj_tag(v_x_3251_) == 0)
{
lean_object* v___x_3253_; 
lean_dec_ref(v_y_3250_);
lean_dec_ref(v___f_3249_);
v___x_3253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3253_, 0, v_x_3251_);
return v___x_3253_;
}
else
{
lean_object* v_a_3254_; lean_object* v___f_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; uint8_t v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v_a_3254_ = lean_ctor_get(v_x_3251_, 0);
lean_inc(v_a_3254_);
lean_dec_ref_known(v_x_3251_, 1);
v___f_3255_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3255_, 0, v___f_3249_);
lean_closure_set(v___f_3255_, 1, v_a_3254_);
v___x_3256_ = lean_box(0);
v___x_3257_ = lean_unsigned_to_nat(0u);
v___x_3258_ = 0;
v___x_3259_ = lean_apply_2(v_y_3250_, v___x_3256_, lean_box(0));
v___x_3260_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3257_, v___x_3258_, v___x_3259_, v___f_3255_);
return v___x_3260_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed(lean_object* v___f_3261_, lean_object* v_y_3262_, lean_object* v_x_3263_, lean_object* v___y_3264_){
_start:
{
lean_object* v_res_3265_; 
v_res_3265_ = l_Std_Async_EAsync_instMonad___redArg___lam__4(v___f_3261_, v_y_3262_, v_x_3263_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5(lean_object* v___f_3266_, lean_object* v_00_u03b1_3267_, lean_object* v_00_u03b2_3268_, lean_object* v_x_3269_, lean_object* v_y_3270_){
_start:
{
lean_object* v___f_3272_; lean_object* v___x_3273_; uint8_t v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___f_3272_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3272_, 0, v___f_3266_);
lean_closure_set(v___f_3272_, 1, v_y_3270_);
v___x_3273_ = lean_unsigned_to_nat(0u);
v___x_3274_ = 0;
v___x_3275_ = lean_apply_1(v_x_3269_, lean_box(0));
v___x_3276_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3273_, v___x_3274_, v___x_3275_, v___f_3272_);
return v___x_3276_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5___boxed(lean_object* v___f_3277_, lean_object* v_00_u03b1_3278_, lean_object* v_00_u03b2_3279_, lean_object* v_x_3280_, lean_object* v_y_3281_, lean_object* v___y_3282_){
_start:
{
lean_object* v_res_3283_; 
v_res_3283_ = l_Std_Async_EAsync_instMonad___redArg___lam__5(v___f_3277_, v_00_u03b1_3278_, v_00_u03b2_3279_, v_x_3280_, v_y_3281_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6(lean_object* v_y_3284_, lean_object* v_x_3285_){
_start:
{
if (lean_obj_tag(v_x_3285_) == 0)
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3295_; 
lean_dec_ref(v_y_3284_);
v_a_3287_ = lean_ctor_get(v_x_3285_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v_x_3285_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3289_ = v_x_3285_;
v_isShared_3290_ = v_isSharedCheck_3295_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v_x_3285_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3295_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3292_; 
if (v_isShared_3290_ == 0)
{
v___x_3292_ = v___x_3289_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_a_3287_);
v___x_3292_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
lean_object* v___x_3293_; 
v___x_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
return v___x_3293_;
}
}
}
else
{
lean_object* v___x_3296_; lean_object* v___x_3297_; 
lean_dec_ref_known(v_x_3285_, 1);
v___x_3296_ = lean_box(0);
v___x_3297_ = lean_apply_2(v_y_3284_, v___x_3296_, lean_box(0));
return v___x_3297_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed(lean_object* v_y_3298_, lean_object* v_x_3299_, lean_object* v___y_3300_){
_start:
{
lean_object* v_res_3301_; 
v_res_3301_ = l_Std_Async_EAsync_instMonad___redArg___lam__6(v_y_3298_, v_x_3299_);
return v_res_3301_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7(lean_object* v_00_u03b1_3302_, lean_object* v_00_u03b2_3303_, lean_object* v_x_3304_, lean_object* v_y_3305_){
_start:
{
lean_object* v___f_3307_; lean_object* v___x_3308_; uint8_t v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___f_3307_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed), 3, 1);
lean_closure_set(v___f_3307_, 0, v_y_3305_);
v___x_3308_ = lean_unsigned_to_nat(0u);
v___x_3309_ = 0;
v___x_3310_ = lean_apply_1(v_x_3304_, lean_box(0));
v___x_3311_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3308_, v___x_3309_, v___x_3310_, v___f_3307_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7___boxed(lean_object* v_00_u03b1_3312_, lean_object* v_00_u03b2_3313_, lean_object* v_x_3314_, lean_object* v_y_3315_, lean_object* v___y_3316_){
_start:
{
lean_object* v_res_3317_; 
v_res_3317_ = l_Std_Async_EAsync_instMonad___redArg___lam__7(v_00_u03b1_3312_, v_00_u03b2_3313_, v_x_3314_, v_y_3315_);
return v_res_3317_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___redArg___closed__4(void){
_start:
{
lean_object* v___f_3323_; lean_object* v___f_3324_; lean_object* v___f_3325_; lean_object* v___f_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___f_3323_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__3));
v___f_3324_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__2));
v___f_3325_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__1));
v___f_3326_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__0));
v___x_3327_ = lean_obj_once(&l_Std_Async_EAsync_instFunctor___closed__0, &l_Std_Async_EAsync_instFunctor___closed__0_once, _init_l_Std_Async_EAsync_instFunctor___closed__0);
v___x_3328_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3328_, 0, v___x_3327_);
lean_ctor_set(v___x_3328_, 1, v___f_3326_);
lean_ctor_set(v___x_3328_, 2, v___f_3325_);
lean_ctor_set(v___x_3328_, 3, v___f_3324_);
lean_ctor_set(v___x_3328_, 4, v___f_3323_);
return v___x_3328_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___redArg___closed__6(void){
_start:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3330_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__5));
v___x_3331_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___redArg___closed__4, &l_Std_Async_EAsync_instMonad___redArg___closed__4_once, _init_l_Std_Async_EAsync_instMonad___redArg___closed__4);
v___x_3332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
lean_ctor_set(v___x_3332_, 1, v___x_3330_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg(){
_start:
{
lean_object* v___x_3334_; 
v___x_3334_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___redArg___closed__6, &l_Std_Async_EAsync_instMonad___redArg___closed__6_once, _init_l_Std_Async_EAsync_instMonad___redArg___closed__6);
return v___x_3334_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___boxed(lean_object* v___dummy_3335_){
_start:
{
lean_object* v_res_3336_; 
v_res_3336_ = l_Std_Async_EAsync_instMonad___redArg();
return v_res_3336_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___closed__0(void){
_start:
{
lean_object* v___x_3337_; 
v___x_3337_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_3337_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad(lean_object* v_00_u03b5_3338_){
_start:
{
lean_object* v___x_3339_; 
v___x_3339_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg(){
_start:
{
lean_object* v___x_3342_; 
v___x_3342_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0));
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg___boxed(lean_object* v___dummy_3343_){
_start:
{
lean_object* v_res_3344_; 
v_res_3344_ = l_Std_Async_EAsync_instMonadLiftEIO___redArg();
return v_res_3344_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO(lean_object* v_00_u03b5_3345_){
_start:
{
lean_object* v___x_3346_; 
v___x_3346_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0));
return v___x_3346_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(lean_object* v_00_u03b1_3347_, lean_object* v_x_3348_, lean_object* v_f_3349_){
_start:
{
lean_object* v___f_3351_; lean_object* v___x_3352_; uint8_t v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; 
v___f_3351_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3351_, 0, v_f_3349_);
v___x_3352_ = lean_unsigned_to_nat(0u);
v___x_3353_ = 0;
v___x_3354_ = lean_apply_1(v_x_3348_, lean_box(0));
v___x_3355_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3352_, v___x_3353_, v___x_3354_, v___f_3351_);
return v___x_3355_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1___boxed(lean_object* v_00_u03b1_3356_, lean_object* v_x_3357_, lean_object* v_f_3358_, lean_object* v___y_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(v_00_u03b1_3356_, v_x_3357_, v_f_3358_);
return v_res_3360_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg(){
_start:
{
lean_object* v___x_3367_; 
v___x_3367_ = ((lean_object*)(l_Std_Async_EAsync_instMonadExcept___redArg___closed__2));
return v___x_3367_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___boxed(lean_object* v___dummy_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Std_Async_EAsync_instMonadExcept___redArg();
return v_res_3369_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadExcept___closed__0(void){
_start:
{
lean_object* v___x_3370_; 
v___x_3370_ = l_Std_Async_EAsync_instMonadExcept___redArg();
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept(lean_object* v_00_u03b5_3371_){
_start:
{
lean_object* v___x_3372_; 
v___x_3372_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExcept___closed__0, &l_Std_Async_EAsync_instMonadExcept___closed__0_once, _init_l_Std_Async_EAsync_instMonadExcept___closed__0);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg(){
_start:
{
lean_object* v___x_3377_; 
v___x_3377_ = ((lean_object*)(l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0));
return v___x_3377_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg___boxed(lean_object* v___dummy_3378_){
_start:
{
lean_object* v_res_3379_; 
v_res_3379_ = l_Std_Async_EAsync_instMonadExceptOf___redArg();
return v_res_3379_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadExceptOf___closed__0(void){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Std_Async_EAsync_instMonadExceptOf___redArg();
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf(lean_object* v_00_u03b5_3381_){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExceptOf___closed__0, &l_Std_Async_EAsync_instMonadExceptOf___closed__0_once, _init_l_Std_Async_EAsync_instMonadExceptOf___closed__0);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(lean_object* v_00_u03b1_3383_, lean_object* v_00_u03b2_3384_, lean_object* v_x_3385_, lean_object* v_f_3386_){
_start:
{
lean_object* v___x_3388_; uint8_t v___x_3389_; lean_object* v___x_3390_; 
v___x_3388_ = lean_unsigned_to_nat(0u);
v___x_3389_ = 0;
v___x_3390_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3385_, v_f_3386_, v___x_3388_, v___x_3389_);
return v___x_3390_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object* v_00_u03b1_3391_, lean_object* v_00_u03b2_3392_, lean_object* v_x_3393_, lean_object* v_f_3394_, lean_object* v___y_3395_){
_start:
{
lean_object* v_res_3396_; 
v_res_3396_ = l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(v_00_u03b1_3391_, v_00_u03b2_3392_, v_x_3393_, v_f_3394_);
return v_res_3396_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg(){
_start:
{
lean_object* v___f_3399_; 
v___f_3399_ = ((lean_object*)(l_Std_Async_EAsync_instMonadFinally___redArg___closed__0));
return v___f_3399_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___boxed(lean_object* v___dummy_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_Std_Async_EAsync_instMonadFinally___redArg();
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally(lean_object* v_00_u03b5_3402_){
_start:
{
lean_object* v___f_3403_; 
v___f_3403_ = ((lean_object*)(l_Std_Async_EAsync_instMonadFinally___redArg___closed__0));
return v___f_3403_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instOrElse___redArg___closed__0(void){
_start:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3404_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExcept___closed__0, &l_Std_Async_EAsync_instMonadExcept___closed__0_once, _init_l_Std_Async_EAsync_instMonadExcept___closed__0);
v___x_3405_ = lean_alloc_closure((void*)(l_MonadExcept_orElse), 6, 4);
lean_closure_set(v___x_3405_, 0, lean_box(0));
lean_closure_set(v___x_3405_, 1, lean_box(0));
lean_closure_set(v___x_3405_, 2, v___x_3404_);
lean_closure_set(v___x_3405_, 3, lean_box(0));
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg(){
_start:
{
lean_object* v___x_3407_; 
v___x_3407_ = lean_obj_once(&l_Std_Async_EAsync_instOrElse___redArg___closed__0, &l_Std_Async_EAsync_instOrElse___redArg___closed__0_once, _init_l_Std_Async_EAsync_instOrElse___redArg___closed__0);
return v___x_3407_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg___boxed(lean_object* v___dummy_3408_){
_start:
{
lean_object* v_res_3409_; 
v_res_3409_ = l_Std_Async_EAsync_instOrElse___redArg();
return v_res_3409_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instOrElse___closed__0(void){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = l_Std_Async_EAsync_instOrElse___redArg();
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse(lean_object* v_00_u03b5_3411_, lean_object* v_00_u03b1_3412_){
_start:
{
lean_object* v___x_3413_; 
v___x_3413_ = lean_obj_once(&l_Std_Async_EAsync_instOrElse___closed__0, &l_Std_Async_EAsync_instOrElse___closed__0_once, _init_l_Std_Async_EAsync_instOrElse___closed__0);
return v___x_3413_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited___redArg(lean_object* v_inst_3414_){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3415_, 0, v_inst_3414_);
v___x_3416_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_pure___boxed), 3, 2);
lean_closure_set(v___x_3416_, 0, lean_box(0));
lean_closure_set(v___x_3416_, 1, v___x_3415_);
v___x_3417_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_mk___boxed), 3, 2);
lean_closure_set(v___x_3417_, 0, lean_box(0));
lean_closure_set(v___x_3417_, 1, v___x_3416_);
return v___x_3417_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited(lean_object* v_00_u03b5_3418_, lean_object* v_00_u03b1_3419_, lean_object* v_inst_3420_){
_start:
{
lean_object* v___x_3421_; 
v___x_3421_ = l_Std_Async_EAsync_instInhabited___redArg(v_inst_3420_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(lean_object* v_00_u03b1_3422_, lean_object* v_t_3423_){
_start:
{
lean_object* v___x_3425_; 
v___x_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3425_, 0, v_t_3423_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0___boxed(lean_object* v_00_u03b1_3426_, lean_object* v_t_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(v_00_u03b1_3426_, v_t_3427_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg(){
_start:
{
lean_object* v___f_3432_; 
v___f_3432_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0));
return v___f_3432_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___boxed(lean_object* v___dummy_3433_){
_start:
{
lean_object* v_res_3434_; 
v_res_3434_ = l_Std_Async_EAsync_instMonadAwaitETask___redArg();
return v_res_3434_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask(lean_object* v_00_u03b5_3435_){
_start:
{
lean_object* v___f_3436_; 
v___f_3436_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0));
return v___f_3436_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(lean_object* v___f_3437_, lean_object* v_00_u03b1_3438_, lean_object* v_t_3439_){
_start:
{
lean_object* v___x_3441_; uint8_t v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3441_ = lean_unsigned_to_nat(0u);
v___x_3442_ = 0;
v___x_3443_ = lean_task_map(v___f_3437_, v_t_3439_, v___x_3441_, v___x_3442_);
v___x_3444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3443_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1___boxed(lean_object* v___f_3445_, lean_object* v_00_u03b1_3446_, lean_object* v_t_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(v___f_3445_, v_00_u03b1_3446_, v_t_3447_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg(){
_start:
{
lean_object* v___f_3453_; 
v___f_3453_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0));
return v___f_3453_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___boxed(lean_object* v___dummy_3454_){
_start:
{
lean_object* v_res_3455_; 
v_res_3455_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg();
return v_res_3455_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAwaitTask___closed__0(void){
_start:
{
lean_object* v___x_3456_; 
v___x_3456_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg();
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask(lean_object* v_00_u03b5_3457_){
_start:
{
lean_object* v___x_3458_; 
v___x_3458_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAwaitTask___closed__0, &l_Std_Async_EAsync_instMonadAwaitTask___closed__0_once, _init_l_Std_Async_EAsync_instMonadAwaitTask___closed__0);
return v___x_3458_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(lean_object* v_00_u03b1_3459_, lean_object* v_t_3460_){
_start:
{
lean_object* v___x_3462_; 
v___x_3462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3462_, 0, v_t_3460_);
return v___x_3462_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed(lean_object* v_00_u03b1_3463_, lean_object* v_t_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(v_00_u03b1_3463_, v_t_3464_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(lean_object* v___f_3469_, lean_object* v_00_u03b1_3470_, lean_object* v_t_3471_){
_start:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; uint8_t v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
v___x_3473_ = l_IO_Promise_result_x21___redArg(v_t_3471_);
v___x_3474_ = lean_unsigned_to_nat(0u);
v___x_3475_ = 0;
v___x_3476_ = lean_task_map(v___f_3469_, v___x_3473_, v___x_3474_, v___x_3475_);
v___x_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3476_);
return v___x_3477_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1___boxed(lean_object* v___f_3478_, lean_object* v_00_u03b1_3479_, lean_object* v_t_3480_, lean_object* v___y_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(v___f_3478_, v_00_u03b1_3479_, v_t_3480_);
lean_dec(v_t_3480_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg(){
_start:
{
lean_object* v___f_3486_; 
v___f_3486_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0));
return v___f_3486_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___boxed(lean_object* v___dummy_3487_){
_start:
{
lean_object* v_res_3488_; 
v_res_3488_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
return v_res_3488_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAwaitPromise___closed__0(void){
_start:
{
lean_object* v___x_3489_; 
v___x_3489_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
return v___x_3489_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise(lean_object* v_00_u03b5_3490_){
_start:
{
lean_object* v___x_3491_; 
v___x_3491_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAwaitPromise___closed__0, &l_Std_Async_EAsync_instMonadAwaitPromise___closed__0_once, _init_l_Std_Async_EAsync_instMonadAwaitPromise___closed__0);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(lean_object* v___f_3492_, lean_object* v_00_u03b1_3493_, lean_object* v_t_3494_, lean_object* v_prio_3495_){
_start:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; uint8_t v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3497_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3497_, 0, lean_box(0));
lean_closure_set(v___x_3497_, 1, v_t_3494_);
v___x_3498_ = lean_io_as_task(v___x_3497_, v_prio_3495_);
v___x_3499_ = lean_unsigned_to_nat(0u);
v___x_3500_ = 1;
v___x_3501_ = lean_task_bind(v___x_3498_, v___f_3492_, v___x_3499_, v___x_3500_);
v___x_3502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3501_);
v___x_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
return v___x_3503_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1___boxed(lean_object* v___f_3504_, lean_object* v_00_u03b1_3505_, lean_object* v_t_3506_, lean_object* v_prio_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v_res_3509_; 
v_res_3509_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(v___f_3504_, v_00_u03b1_3505_, v_t_3506_, v_prio_3507_);
return v_res_3509_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg(){
_start:
{
lean_object* v___f_3513_; 
v___f_3513_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0));
return v___f_3513_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___boxed(lean_object* v___dummy_3514_){
_start:
{
lean_object* v_res_3515_; 
v_res_3515_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg();
return v_res_3515_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAsyncETask___closed__0(void){
_start:
{
lean_object* v___x_3516_; 
v___x_3516_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg();
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask(lean_object* v_00_u03b5_3517_){
_start:
{
lean_object* v___x_3518_; 
v___x_3518_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAsyncETask___closed__0, &l_Std_Async_EAsync_instMonadAsyncETask___closed__0_once, _init_l_Std_Async_EAsync_instMonadAsyncETask___closed__0);
return v___x_3518_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0(lean_object* v_x_3519_){
_start:
{
if (lean_obj_tag(v_x_3519_) == 0)
{
lean_object* v_a_3520_; lean_object* v___x_3521_; 
v_a_3520_ = lean_ctor_get(v_x_3519_, 0);
lean_inc(v_a_3520_);
lean_dec_ref_known(v_x_3519_, 1);
v___x_3521_ = lean_task_pure(v_a_3520_);
return v___x_3521_;
}
else
{
lean_object* v_a_3522_; 
v_a_3522_ = lean_ctor_get(v_x_3519_, 0);
lean_inc_ref(v_a_3522_);
lean_dec_ref_known(v_x_3519_, 1);
return v_a_3522_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(lean_object* v___f_3523_, lean_object* v_00_u03b1_3524_, lean_object* v_t_3525_, lean_object* v_prio_3526_){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; uint8_t v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v___x_3528_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3528_, 0, lean_box(0));
lean_closure_set(v___x_3528_, 1, v_t_3525_);
v___x_3529_ = lean_io_as_task(v___x_3528_, v_prio_3526_);
v___x_3530_ = lean_unsigned_to_nat(0u);
v___x_3531_ = 1;
v___x_3532_ = lean_task_bind(v___x_3529_, v___f_3523_, v___x_3530_, v___x_3531_);
v___x_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3532_);
v___x_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
return v___x_3534_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed(lean_object* v___f_3535_, lean_object* v_00_u03b1_3536_, lean_object* v_t_3537_, lean_object* v_prio_3538_, lean_object* v___y_3539_){
_start:
{
lean_object* v_res_3540_; 
v_res_3540_ = l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(v___f_3535_, v_00_u03b1_3536_, v_t_3537_, v_prio_3538_);
return v_res_3540_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(lean_object* v_00_u03b1_3545_, lean_object* v_x_3546_){
_start:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3548_ = lean_apply_1(v_x_3546_, lean_box(0));
v___x_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3548_);
v___x_3550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3549_);
return v___x_3550_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_3551_, lean_object* v_x_3552_, lean_object* v___y_3553_){
_start:
{
lean_object* v_res_3554_; 
v_res_3554_ = l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(v_00_u03b1_3551_, v_x_3552_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg(){
_start:
{
lean_object* v___f_3557_; 
v___f_3557_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0));
return v___f_3557_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___boxed(lean_object* v___dummy_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l_Std_Async_EAsync_instMonadLiftBaseIO___redArg();
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO(lean_object* v_00_u03b5_3560_){
_start:
{
lean_object* v___f_3561_; 
v___f_3561_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0));
return v___f_3561_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(lean_object* v_00_u03b1_3562_, lean_object* v_x_3563_){
_start:
{
lean_object* v_val_3566_; lean_object* v___x_3568_; 
v___x_3568_ = lean_apply_1(v_x_3563_, lean_box(0));
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3576_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3576_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3571_ = v___x_3568_;
v_isShared_3572_ = v_isSharedCheck_3576_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v___x_3568_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3576_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3574_; 
if (v_isShared_3572_ == 0)
{
lean_ctor_set_tag(v___x_3571_, 1);
v___x_3574_ = v___x_3571_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v_a_3569_);
v___x_3574_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
v_val_3566_ = v___x_3574_;
goto v___jp_3565_;
}
}
}
else
{
lean_object* v_a_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3584_; 
v_a_3577_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3579_ = v___x_3568_;
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_a_3577_);
lean_dec(v___x_3568_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3582_; 
if (v_isShared_3580_ == 0)
{
lean_ctor_set_tag(v___x_3579_, 0);
v___x_3582_ = v___x_3579_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v_a_3577_);
v___x_3582_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
v_val_3566_ = v___x_3582_;
goto v___jp_3565_;
}
}
}
v___jp_3565_:
{
lean_object* v___x_3567_; 
v___x_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3567_, 0, v_val_3566_);
return v___x_3567_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0___boxed(lean_object* v_00_u03b1_3585_, lean_object* v_x_3586_, lean_object* v___y_3587_){
_start:
{
lean_object* v_res_3588_; 
v_res_3588_ = l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(v_00_u03b1_3585_, v_x_3586_);
return v_res_3588_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg(){
_start:
{
lean_object* v___f_3591_; 
v___f_3591_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0));
return v___f_3591_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___boxed(lean_object* v___dummy_3592_){
_start:
{
lean_object* v_res_3593_; 
v_res_3593_ = l_Std_Async_EAsync_instMonadLiftEIO__1___redArg();
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1(lean_object* v_00_u03b5_3594_){
_start:
{
lean_object* v___f_3595_; 
v___f_3595_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0));
return v___f_3595_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(lean_object* v___f_3596_, lean_object* v_00_u03b1_3597_, lean_object* v_x_3598_){
_start:
{
lean_object* v___x_3600_; uint8_t v___x_3601_; lean_object* v___x_3602_; 
v___x_3600_ = lean_unsigned_to_nat(0u);
v___x_3601_ = 0;
v___x_3602_ = lean_apply_1(v_x_3598_, lean_box(0));
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3611_; 
lean_dec_ref(v___f_3596_);
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3605_ = v___x_3602_;
v_isShared_3606_ = v_isSharedCheck_3611_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3602_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3611_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3607_; lean_object* v___x_3609_; 
v___x_3607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3607_, 0, v_a_3603_);
if (v_isShared_3606_ == 0)
{
lean_ctor_set(v___x_3605_, 0, v___x_3607_);
v___x_3609_ = v___x_3605_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3607_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
else
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3620_; 
v_a_3612_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3614_ = v___x_3602_;
v_isShared_3615_ = v_isSharedCheck_3620_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3602_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3620_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3616_; lean_object* v___x_3618_; 
v___x_3616_ = lean_task_map(v___f_3596_, v_a_3612_, v___x_3600_, v___x_3601_);
if (v_isShared_3615_ == 0)
{
lean_ctor_set(v___x_3614_, 0, v___x_3616_);
v___x_3618_ = v___x_3614_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v___x_3616_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1___boxed(lean_object* v___f_3621_, lean_object* v_00_u03b1_3622_, lean_object* v_x_3623_, lean_object* v___y_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(v___f_3621_, v_00_u03b1_3622_, v_x_3623_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg(){
_start:
{
lean_object* v___f_3629_; 
v___f_3629_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0));
return v___f_3629_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___boxed(lean_object* v___dummy_3630_){
_start:
{
lean_object* v_res_3631_; 
v_res_3631_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v_res_3631_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0(void){
_start:
{
lean_object* v___x_3632_; 
v___x_3632_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync(lean_object* v_00_u03b5_3633_){
_start:
{
lean_object* v___x_3634_; 
v___x_3634_ = lean_obj_once(&l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0, &l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0_once, _init_l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed(lean_object* v_promise_3635_, lean_object* v_f_3636_, lean_object* v_prio_3637_, lean_object* v_x_3638_, lean_object* v___y_3639_){
_start:
{
lean_object* v_res_3640_; 
v_res_3640_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(v_promise_3635_, v_f_3636_, v_prio_3637_, v_x_3638_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(lean_object* v_f_3641_, lean_object* v_prio_3642_, lean_object* v_promise_3643_, lean_object* v_b_3644_){
_start:
{
lean_object* v___f_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
lean_inc(v_prio_3642_);
lean_inc_ref_n(v_f_3641_, 2);
lean_inc(v_promise_3643_);
v___f_3646_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3646_, 0, v_promise_3643_);
lean_closure_set(v___f_3646_, 1, v_f_3641_);
lean_closure_set(v___f_3646_, 2, v_prio_3642_);
v___x_3647_ = lean_box(0);
v___x_3648_ = lean_apply_3(v_f_3641_, v___x_3647_, v_b_3644_, lean_box(0));
if (lean_obj_tag(v___x_3648_) == 0)
{
lean_object* v_a_3649_; 
lean_dec_ref(v___f_3646_);
v_a_3649_ = lean_ctor_get(v___x_3648_, 0);
lean_inc(v_a_3649_);
lean_dec_ref_known(v___x_3648_, 1);
if (lean_obj_tag(v_a_3649_) == 0)
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3658_; 
lean_dec(v_prio_3642_);
lean_dec_ref(v_f_3641_);
v_a_3650_ = lean_ctor_get(v_a_3649_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v_a_3649_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3652_ = v_a_3649_;
v_isShared_3653_ = v_isSharedCheck_3658_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v_a_3649_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3658_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3655_; 
if (v_isShared_3653_ == 0)
{
v___x_3655_ = v___x_3652_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3650_);
v___x_3655_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
lean_object* v___x_3656_; 
v___x_3656_ = lean_io_promise_resolve(v___x_3655_, v_promise_3643_);
lean_dec(v_promise_3643_);
return v___x_3656_;
}
}
}
else
{
lean_object* v_a_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3670_; 
v_a_3659_ = lean_ctor_get(v_a_3649_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v_a_3649_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3661_ = v_a_3649_;
v_isShared_3662_ = v_isSharedCheck_3670_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_a_3659_);
lean_dec(v_a_3649_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3670_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
if (lean_obj_tag(v_a_3659_) == 0)
{
lean_object* v_a_3663_; lean_object* v___x_3665_; 
lean_dec(v_prio_3642_);
lean_dec_ref(v_f_3641_);
v_a_3663_ = lean_ctor_get(v_a_3659_, 0);
lean_inc(v_a_3663_);
lean_dec_ref_known(v_a_3659_, 1);
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 0, v_a_3663_);
v___x_3665_ = v___x_3661_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_a_3663_);
v___x_3665_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
lean_object* v___x_3666_; 
v___x_3666_ = lean_io_promise_resolve(v___x_3665_, v_promise_3643_);
lean_dec(v_promise_3643_);
return v___x_3666_;
}
}
else
{
lean_object* v_a_3668_; 
lean_del_object(v___x_3661_);
v_a_3668_ = lean_ctor_get(v_a_3659_, 0);
lean_inc(v_a_3668_);
lean_dec_ref_known(v_a_3659_, 1);
v_b_3644_ = v_a_3668_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3671_; uint8_t v___x_3672_; lean_object* v___x_3673_; 
lean_dec(v_promise_3643_);
lean_dec_ref(v_f_3641_);
v_a_3671_ = lean_ctor_get(v___x_3648_, 0);
lean_inc_ref(v_a_3671_);
lean_dec_ref_known(v___x_3648_, 1);
v___x_3672_ = 0;
v___x_3673_ = l_BaseIO_chainTask___redArg(v_a_3671_, v___f_3646_, v_prio_3642_, v___x_3672_);
return v___x_3673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(lean_object* v_promise_3674_, lean_object* v_f_3675_, lean_object* v_prio_3676_, lean_object* v_x_3677_){
_start:
{
if (lean_obj_tag(v_x_3677_) == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3687_; 
lean_dec(v_prio_3676_);
lean_dec_ref(v_f_3675_);
v_a_3679_ = lean_ctor_get(v_x_3677_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v_x_3677_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3681_ = v_x_3677_;
v_isShared_3682_ = v_isSharedCheck_3687_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v_x_3677_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3687_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3684_; 
if (v_isShared_3682_ == 0)
{
v___x_3684_ = v___x_3681_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v_a_3679_);
v___x_3684_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
lean_object* v___x_3685_; 
v___x_3685_ = lean_io_promise_resolve(v___x_3684_, v_promise_3674_);
lean_dec(v_promise_3674_);
return v___x_3685_;
}
}
}
else
{
lean_object* v_a_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3699_; 
v_a_3688_ = lean_ctor_get(v_x_3677_, 0);
v_isSharedCheck_3699_ = !lean_is_exclusive(v_x_3677_);
if (v_isSharedCheck_3699_ == 0)
{
v___x_3690_ = v_x_3677_;
v_isShared_3691_ = v_isSharedCheck_3699_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_a_3688_);
lean_dec(v_x_3677_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3699_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
if (lean_obj_tag(v_a_3688_) == 0)
{
lean_object* v_a_3692_; lean_object* v___x_3694_; 
lean_dec(v_prio_3676_);
lean_dec_ref(v_f_3675_);
v_a_3692_ = lean_ctor_get(v_a_3688_, 0);
lean_inc(v_a_3692_);
lean_dec_ref_known(v_a_3688_, 1);
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 0, v_a_3692_);
v___x_3694_ = v___x_3690_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3692_);
v___x_3694_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
lean_object* v___x_3695_; 
v___x_3695_ = lean_io_promise_resolve(v___x_3694_, v_promise_3674_);
lean_dec(v_promise_3674_);
return v___x_3695_;
}
}
else
{
lean_object* v_a_3697_; lean_object* v___x_3698_; 
lean_del_object(v___x_3690_);
v_a_3697_ = lean_ctor_get(v_a_3688_, 0);
lean_inc(v_a_3697_);
lean_dec_ref_known(v_a_3688_, 1);
v___x_3698_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3675_, v_prio_3676_, v_promise_3674_, v_a_3697_);
return v___x_3698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___boxed(lean_object* v_f_3700_, lean_object* v_prio_3701_, lean_object* v_promise_3702_, lean_object* v_b_3703_, lean_object* v_a_3704_){
_start:
{
lean_object* v_res_3705_; 
v_res_3705_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3700_, v_prio_3701_, v_promise_3702_, v_b_3703_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object* v_00_u03b5_3706_, lean_object* v_00_u03b2_3707_, lean_object* v_f_3708_, lean_object* v_prio_3709_, lean_object* v_promise_3710_, lean_object* v_b_3711_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3708_, v_prio_3709_, v_promise_3710_, v_b_3711_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___boxed(lean_object* v_00_u03b5_3714_, lean_object* v_00_u03b2_3715_, lean_object* v_f_3716_, lean_object* v_prio_3717_, lean_object* v_promise_3718_, lean_object* v_b_3719_, lean_object* v_a_3720_){
_start:
{
lean_object* v_res_3721_; 
v_res_3721_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(v_00_u03b5_3714_, v_00_u03b2_3715_, v_f_3716_, v_prio_3717_, v_promise_3718_, v_b_3719_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0(lean_object* v_a_3722_, lean_object* v_x_3723_){
_start:
{
if (lean_obj_tag(v_x_3723_) == 0)
{
lean_object* v_a_3725_; lean_object* v___x_3727_; uint8_t v_isShared_3728_; uint8_t v_isSharedCheck_3733_; 
v_a_3725_ = lean_ctor_get(v_x_3723_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v_x_3723_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3727_ = v_x_3723_;
v_isShared_3728_ = v_isSharedCheck_3733_;
goto v_resetjp_3726_;
}
else
{
lean_inc(v_a_3725_);
lean_dec(v_x_3723_);
v___x_3727_ = lean_box(0);
v_isShared_3728_ = v_isSharedCheck_3733_;
goto v_resetjp_3726_;
}
v_resetjp_3726_:
{
lean_object* v___x_3730_; 
if (v_isShared_3728_ == 0)
{
v___x_3730_ = v___x_3727_;
goto v_reusejp_3729_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3725_);
v___x_3730_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3729_;
}
v_reusejp_3729_:
{
lean_object* v___x_3731_; 
v___x_3731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3730_);
return v___x_3731_;
}
}
}
else
{
lean_object* v___x_3734_; lean_object* v___x_3735_; 
lean_dec_ref_known(v_x_3723_, 1);
v___x_3734_ = l_IO_Promise_result_x21___redArg(v_a_3722_);
v___x_3735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3734_);
return v___x_3735_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0___boxed(lean_object* v_a_3736_, lean_object* v_x_3737_, lean_object* v___y_3738_){
_start:
{
lean_object* v_res_3739_; 
v_res_3739_ = l_Std_Async_EAsync_forIn___redArg___lam__0(v_a_3736_, v_x_3737_);
lean_dec(v_a_3736_);
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1(lean_object* v_f_3740_, lean_object* v_prio_3741_, lean_object* v_init_3742_, lean_object* v_x_3743_){
_start:
{
if (lean_obj_tag(v_x_3743_) == 0)
{
lean_object* v_a_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3753_; 
lean_dec(v_init_3742_);
lean_dec(v_prio_3741_);
lean_dec_ref(v_f_3740_);
v_a_3745_ = lean_ctor_get(v_x_3743_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v_x_3743_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3747_ = v_x_3743_;
v_isShared_3748_ = v_isSharedCheck_3753_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_a_3745_);
lean_dec(v_x_3743_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3753_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3750_; 
if (v_isShared_3748_ == 0)
{
v___x_3750_ = v___x_3747_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3745_);
v___x_3750_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
lean_object* v___x_3751_; 
v___x_3751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3750_);
return v___x_3751_;
}
}
}
else
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3767_; 
v_a_3754_ = lean_ctor_get(v_x_3743_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v_x_3743_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3756_ = v_x_3743_;
v_isShared_3757_ = v_isSharedCheck_3767_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v_x_3743_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3767_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___f_3758_; lean_object* v___x_3759_; uint8_t v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3763_; 
lean_inc(v_a_3754_);
v___f_3758_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3758_, 0, v_a_3754_);
v___x_3759_ = lean_unsigned_to_nat(0u);
v___x_3760_ = 0;
v___x_3761_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3740_, v_prio_3741_, v_a_3754_, v_init_3742_);
if (v_isShared_3757_ == 0)
{
lean_ctor_set(v___x_3756_, 0, v___x_3761_);
v___x_3763_ = v___x_3756_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v___x_3761_);
v___x_3763_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3764_, 0, v___x_3763_);
v___x_3765_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3759_, v___x_3760_, v___x_3764_, v___f_3758_);
return v___x_3765_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1___boxed(lean_object* v_f_3768_, lean_object* v_prio_3769_, lean_object* v_init_3770_, lean_object* v_x_3771_, lean_object* v___y_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l_Std_Async_EAsync_forIn___redArg___lam__1(v_f_3768_, v_prio_3769_, v_init_3770_, v_x_3771_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg(lean_object* v_init_3774_, lean_object* v_f_3775_, lean_object* v_prio_3776_){
_start:
{
lean_object* v___f_3778_; lean_object* v___x_3779_; uint8_t v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; 
v___f_3778_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3778_, 0, v_f_3775_);
lean_closure_set(v___f_3778_, 1, v_prio_3776_);
lean_closure_set(v___f_3778_, 2, v_init_3774_);
v___x_3779_ = lean_unsigned_to_nat(0u);
v___x_3780_ = 0;
v___x_3781_ = lean_io_promise_new();
v___x_3782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
v___x_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3782_);
v___x_3784_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3779_, v___x_3780_, v___x_3783_, v___f_3778_);
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___boxed(lean_object* v_init_3785_, lean_object* v_f_3786_, lean_object* v_prio_3787_, lean_object* v_a_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Std_Async_EAsync_forIn___redArg(v_init_3785_, v_f_3786_, v_prio_3787_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn(lean_object* v_00_u03b5_3790_, lean_object* v_00_u03b2_3791_, lean_object* v_init_3792_, lean_object* v_f_3793_, lean_object* v_prio_3794_){
_start:
{
lean_object* v___f_3796_; lean_object* v___x_3797_; uint8_t v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___f_3796_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3796_, 0, v_f_3793_);
lean_closure_set(v___f_3796_, 1, v_prio_3794_);
lean_closure_set(v___f_3796_, 2, v_init_3792_);
v___x_3797_ = lean_unsigned_to_nat(0u);
v___x_3798_ = 0;
v___x_3799_ = lean_io_promise_new();
v___x_3800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3800_, 0, v___x_3799_);
v___x_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3800_);
v___x_3802_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3797_, v___x_3798_, v___x_3801_, v___f_3796_);
return v___x_3802_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___boxed(lean_object* v_00_u03b5_3803_, lean_object* v_00_u03b2_3804_, lean_object* v_init_3805_, lean_object* v_f_3806_, lean_object* v_prio_3807_, lean_object* v_a_3808_){
_start:
{
lean_object* v_res_3809_; 
v_res_3809_ = l_Std_Async_EAsync_forIn(v_00_u03b5_3803_, v_00_u03b2_3804_, v_init_3805_, v_f_3806_, v_prio_3807_);
return v_res_3809_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(lean_object* v_f_3810_, lean_object* v___x_3811_, lean_object* v_init_3812_, lean_object* v_x_3813_){
_start:
{
if (lean_obj_tag(v_x_3813_) == 0)
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3823_; 
lean_dec(v_init_3812_);
lean_dec(v___x_3811_);
lean_dec_ref(v_f_3810_);
v_a_3815_ = lean_ctor_get(v_x_3813_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v_x_3813_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3817_ = v_x_3813_;
v_isShared_3818_ = v_isSharedCheck_3823_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v_x_3813_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3823_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v___x_3820_; 
if (v_isShared_3818_ == 0)
{
v___x_3820_ = v___x_3817_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_a_3815_);
v___x_3820_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
lean_object* v___x_3821_; 
v___x_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3821_, 0, v___x_3820_);
return v___x_3821_;
}
}
}
else
{
lean_object* v_a_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3836_; 
v_a_3824_ = lean_ctor_get(v_x_3813_, 0);
v_isSharedCheck_3836_ = !lean_is_exclusive(v_x_3813_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3826_ = v_x_3813_;
v_isShared_3827_ = v_isSharedCheck_3836_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_a_3824_);
lean_dec(v_x_3813_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3836_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___f_3828_; uint8_t v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3832_; 
lean_inc(v_a_3824_);
v___f_3828_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3828_, 0, v_a_3824_);
v___x_3829_ = 0;
lean_inc(v___x_3811_);
v___x_3830_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3810_, v___x_3811_, v_a_3824_, v_init_3812_);
if (v_isShared_3827_ == 0)
{
lean_ctor_set(v___x_3826_, 0, v___x_3830_);
v___x_3832_ = v___x_3826_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v___x_3830_);
v___x_3832_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; 
v___x_3833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3832_);
v___x_3834_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3811_, v___x_3829_, v___x_3833_, v___f_3828_);
return v___x_3834_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed(lean_object* v_f_3837_, lean_object* v___x_3838_, lean_object* v_init_3839_, lean_object* v_x_3840_, lean_object* v___y_3841_){
_start:
{
lean_object* v_res_3842_; 
v_res_3842_ = l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(v_f_3837_, v___x_3838_, v_init_3839_, v_x_3840_);
return v_res_3842_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(lean_object* v_00_u03b2_3843_, lean_object* v_x_3844_, lean_object* v_init_3845_, lean_object* v_f_3846_){
_start:
{
lean_object* v___x_3848_; lean_object* v___f_3849_; uint8_t v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
v___x_3848_ = lean_unsigned_to_nat(0u);
v___f_3849_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3849_, 0, v_f_3846_);
lean_closure_set(v___f_3849_, 1, v___x_3848_);
lean_closure_set(v___f_3849_, 2, v_init_3845_);
v___x_3850_ = 0;
v___x_3851_ = lean_io_promise_new();
v___x_3852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3852_, 0, v___x_3851_);
v___x_3853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3853_, 0, v___x_3852_);
v___x_3854_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3848_, v___x_3850_, v___x_3853_, v___f_3849_);
return v___x_3854_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0___boxed(lean_object* v_00_u03b2_3855_, lean_object* v_x_3856_, lean_object* v_init_3857_, lean_object* v_f_3858_, lean_object* v___y_3859_){
_start:
{
lean_object* v_res_3860_; 
v_res_3860_ = l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(v_00_u03b2_3855_, v_x_3856_, v_init_3857_, v_f_3858_);
return v_res_3860_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg(){
_start:
{
lean_object* v___f_3863_; 
v___f_3863_ = ((lean_object*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0));
return v___f_3863_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___boxed(lean_object* v___dummy_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_Std_Async_EAsync_instForInLoopUnit___redArg();
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit(lean_object* v_00_u03b5_3866_){
_start:
{
lean_object* v___f_3867_; 
v___f_3867_ = ((lean_object*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0));
return v___f_3867_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg(lean_object* v_except_3868_){
_start:
{
lean_object* v___x_3870_; 
v___x_3870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3870_, 0, v_except_3868_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg___boxed(lean_object* v_except_3871_, lean_object* v_a_3872_){
_start:
{
lean_object* v_res_3873_; 
v_res_3873_ = l_Std_Async_EAsync_ofExcept___redArg(v_except_3871_);
return v_res_3873_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept(lean_object* v_00_u03b5_3874_, lean_object* v_00_u03b1_3875_, lean_object* v_except_3876_){
_start:
{
lean_object* v___x_3878_; 
v___x_3878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3878_, 0, v_except_3876_);
return v___x_3878_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___boxed(lean_object* v_00_u03b5_3879_, lean_object* v_00_u03b1_3880_, lean_object* v_except_3881_, lean_object* v_a_3882_){
_start:
{
lean_object* v_res_3883_; 
v_res_3883_ = l_Std_Async_EAsync_ofExcept(v_00_u03b5_3879_, v_00_u03b1_3880_, v_except_3881_);
return v_res_3883_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1(lean_object* v_a_3884_, lean_object* v_x_3885_){
_start:
{
if (lean_obj_tag(v_x_3885_) == 0)
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3895_; 
lean_dec(v_a_3884_);
v_a_3887_ = lean_ctor_get(v_x_3885_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v_x_3885_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3889_ = v_x_3885_;
v_isShared_3890_ = v_isSharedCheck_3895_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v_x_3885_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3895_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3892_; 
if (v_isShared_3890_ == 0)
{
v___x_3892_ = v___x_3889_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3887_);
v___x_3892_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
lean_object* v___x_3893_; 
v___x_3893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3893_, 0, v___x_3892_);
return v___x_3893_;
}
}
}
else
{
lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3905_; 
v_a_3896_ = lean_ctor_get(v_x_3885_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v_x_3885_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3898_ = v_x_3885_;
v_isShared_3899_ = v_isSharedCheck_3905_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v_x_3885_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3905_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
lean_object* v___x_3900_; lean_object* v___x_3902_; 
v___x_3900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3900_, 0, v_a_3884_);
lean_ctor_set(v___x_3900_, 1, v_a_3896_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 0, v___x_3900_);
v___x_3902_ = v___x_3898_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v___x_3900_);
v___x_3902_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
lean_object* v___x_3903_; 
v___x_3903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3902_);
return v___x_3903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed(lean_object* v_a_3906_, lean_object* v_x_3907_, lean_object* v___y_3908_){
_start:
{
lean_object* v_res_3909_; 
v_res_3909_ = l_Std_Async_EAsync_concurrently___redArg___lam__1(v_a_3906_, v_x_3907_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0(lean_object* v_a_3910_, lean_object* v_x_3911_){
_start:
{
if (lean_obj_tag(v_x_3911_) == 0)
{
lean_object* v_a_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3921_; 
lean_dec_ref(v_a_3910_);
v_a_3913_ = lean_ctor_get(v_x_3911_, 0);
v_isSharedCheck_3921_ = !lean_is_exclusive(v_x_3911_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3915_ = v_x_3911_;
v_isShared_3916_ = v_isSharedCheck_3921_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_a_3913_);
lean_dec(v_x_3911_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3921_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3918_; 
if (v_isShared_3916_ == 0)
{
v___x_3918_ = v___x_3915_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3913_);
v___x_3918_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
lean_object* v___x_3919_; 
v___x_3919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3918_);
return v___x_3919_;
}
}
}
else
{
lean_object* v_a_3922_; lean_object* v___f_3923_; lean_object* v___x_3924_; uint8_t v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; 
v_a_3922_ = lean_ctor_get(v_x_3911_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v_x_3911_, 1);
v___f_3923_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3923_, 0, v_a_3922_);
v___x_3924_ = lean_unsigned_to_nat(0u);
v___x_3925_ = 0;
v___x_3926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3926_, 0, v_a_3910_);
v___x_3927_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3924_, v___x_3925_, v___x_3926_, v___f_3923_);
return v___x_3927_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed(lean_object* v_a_3928_, lean_object* v_x_3929_, lean_object* v___y_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_Std_Async_EAsync_concurrently___redArg___lam__0(v_a_3928_, v_x_3929_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2(lean_object* v_a_3932_, lean_object* v_x_3933_){
_start:
{
if (lean_obj_tag(v_x_3933_) == 0)
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3943_; 
lean_dec_ref(v_a_3932_);
v_a_3935_ = lean_ctor_get(v_x_3933_, 0);
v_isSharedCheck_3943_ = !lean_is_exclusive(v_x_3933_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3937_ = v_x_3933_;
v_isShared_3938_ = v_isSharedCheck_3943_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v_x_3933_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3943_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3940_; 
if (v_isShared_3938_ == 0)
{
v___x_3940_ = v___x_3937_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v_a_3935_);
v___x_3940_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
lean_object* v___x_3941_; 
v___x_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
return v___x_3941_;
}
}
}
else
{
lean_object* v_a_3944_; lean_object* v___f_3945_; lean_object* v___x_3946_; uint8_t v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v_a_3944_ = lean_ctor_get(v_x_3933_, 0);
lean_inc(v_a_3944_);
lean_dec_ref_known(v_x_3933_, 1);
v___f_3945_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3945_, 0, v_a_3944_);
v___x_3946_ = lean_unsigned_to_nat(0u);
v___x_3947_ = 0;
v___x_3948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3948_, 0, v_a_3932_);
v___x_3949_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3946_, v___x_3947_, v___x_3948_, v___f_3945_);
return v___x_3949_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed(lean_object* v_a_3950_, lean_object* v_x_3951_, lean_object* v___y_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Std_Async_EAsync_concurrently___redArg___lam__2(v_a_3950_, v_x_3951_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3(lean_object* v_y_3954_, lean_object* v_prio_3955_, lean_object* v___f_3956_, lean_object* v_x_3957_){
_start:
{
if (lean_obj_tag(v_x_3957_) == 0)
{
lean_object* v_a_3959_; lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3967_; 
lean_dec_ref(v___f_3956_);
lean_dec(v_prio_3955_);
lean_dec_ref(v_y_3954_);
v_a_3959_ = lean_ctor_get(v_x_3957_, 0);
v_isSharedCheck_3967_ = !lean_is_exclusive(v_x_3957_);
if (v_isSharedCheck_3967_ == 0)
{
v___x_3961_ = v_x_3957_;
v_isShared_3962_ = v_isSharedCheck_3967_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_a_3959_);
lean_dec(v_x_3957_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3967_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v___x_3964_; 
if (v_isShared_3962_ == 0)
{
v___x_3964_ = v___x_3961_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_a_3959_);
v___x_3964_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
lean_object* v___x_3965_; 
v___x_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3964_);
return v___x_3965_;
}
}
}
else
{
lean_object* v_a_3968_; lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_3984_; 
v_a_3968_ = lean_ctor_get(v_x_3957_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v_x_3957_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3970_ = v_x_3957_;
v_isShared_3971_ = v_isSharedCheck_3984_;
goto v_resetjp_3969_;
}
else
{
lean_inc(v_a_3968_);
lean_dec(v_x_3957_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_3984_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
lean_object* v___f_3972_; lean_object* v___x_3973_; uint8_t v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; uint8_t v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3980_; 
v___f_3972_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3972_, 0, v_a_3968_);
v___x_3973_ = lean_unsigned_to_nat(0u);
v___x_3974_ = 0;
v___x_3975_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3975_, 0, lean_box(0));
lean_closure_set(v___x_3975_, 1, v_y_3954_);
v___x_3976_ = lean_io_as_task(v___x_3975_, v_prio_3955_);
v___x_3977_ = 1;
v___x_3978_ = lean_task_bind(v___x_3976_, v___f_3956_, v___x_3973_, v___x_3977_);
if (v_isShared_3971_ == 0)
{
lean_ctor_set(v___x_3970_, 0, v___x_3978_);
v___x_3980_ = v___x_3970_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v___x_3978_);
v___x_3980_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
lean_object* v___x_3981_; lean_object* v___x_3982_; 
v___x_3981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3980_);
v___x_3982_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3973_, v___x_3974_, v___x_3981_, v___f_3972_);
return v___x_3982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_3985_, lean_object* v_prio_3986_, lean_object* v___f_3987_, lean_object* v_x_3988_, lean_object* v___y_3989_){
_start:
{
lean_object* v_res_3990_; 
v_res_3990_ = l_Std_Async_EAsync_concurrently___redArg___lam__3(v_y_3985_, v_prio_3986_, v___f_3987_, v_x_3988_);
return v_res_3990_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg(lean_object* v_x_3991_, lean_object* v_y_3992_, lean_object* v_prio_3993_){
_start:
{
lean_object* v___f_3995_; lean_object* v___f_3996_; lean_object* v___x_3997_; uint8_t v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; uint8_t v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___f_3995_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
lean_inc(v_prio_3993_);
v___f_3996_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_3996_, 0, v_y_3992_);
lean_closure_set(v___f_3996_, 1, v_prio_3993_);
lean_closure_set(v___f_3996_, 2, v___f_3995_);
v___x_3997_ = lean_unsigned_to_nat(0u);
v___x_3998_ = 0;
v___x_3999_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3999_, 0, lean_box(0));
lean_closure_set(v___x_3999_, 1, v_x_3991_);
v___x_4000_ = lean_io_as_task(v___x_3999_, v_prio_3993_);
v___x_4001_ = 1;
v___x_4002_ = lean_task_bind(v___x_4000_, v___f_3995_, v___x_3997_, v___x_4001_);
v___x_4003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4003_, 0, v___x_4002_);
v___x_4004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4004_, 0, v___x_4003_);
v___x_4005_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3997_, v___x_3998_, v___x_4004_, v___f_3996_);
return v___x_4005_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___boxed(lean_object* v_x_4006_, lean_object* v_y_4007_, lean_object* v_prio_4008_, lean_object* v_a_4009_){
_start:
{
lean_object* v_res_4010_; 
v_res_4010_ = l_Std_Async_EAsync_concurrently___redArg(v_x_4006_, v_y_4007_, v_prio_4008_);
return v_res_4010_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently(lean_object* v_00_u03b5_4011_, lean_object* v_00_u03b1_4012_, lean_object* v_00_u03b2_4013_, lean_object* v_x_4014_, lean_object* v_y_4015_, lean_object* v_prio_4016_){
_start:
{
lean_object* v___f_4018_; lean_object* v___f_4019_; lean_object* v___x_4020_; uint8_t v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; uint8_t v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___f_4018_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
lean_inc(v_prio_4016_);
v___f_4019_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_4019_, 0, v_y_4015_);
lean_closure_set(v___f_4019_, 1, v_prio_4016_);
lean_closure_set(v___f_4019_, 2, v___f_4018_);
v___x_4020_ = lean_unsigned_to_nat(0u);
v___x_4021_ = 0;
v___x_4022_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4022_, 0, lean_box(0));
lean_closure_set(v___x_4022_, 1, v_x_4014_);
v___x_4023_ = lean_io_as_task(v___x_4022_, v_prio_4016_);
v___x_4024_ = 1;
v___x_4025_ = lean_task_bind(v___x_4023_, v___f_4018_, v___x_4020_, v___x_4024_);
v___x_4026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4026_, 0, v___x_4025_);
v___x_4027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4027_, 0, v___x_4026_);
v___x_4028_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4020_, v___x_4021_, v___x_4027_, v___f_4019_);
return v___x_4028_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___boxed(lean_object* v_00_u03b5_4029_, lean_object* v_00_u03b1_4030_, lean_object* v_00_u03b2_4031_, lean_object* v_x_4032_, lean_object* v_y_4033_, lean_object* v_prio_4034_, lean_object* v_a_4035_){
_start:
{
lean_object* v_res_4036_; 
v_res_4036_ = l_Std_Async_EAsync_concurrently(v_00_u03b5_4029_, v_00_u03b1_4030_, v_00_u03b2_4031_, v_x_4032_, v_y_4033_, v_prio_4034_);
return v_res_4036_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1(lean_object* v_x_4037_){
_start:
{
if (lean_obj_tag(v_x_4037_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4047_; 
v_a_4039_ = lean_ctor_get(v_x_4037_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v_x_4037_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4041_ = v_x_4037_;
v_isShared_4042_ = v_isSharedCheck_4047_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_a_4039_);
lean_dec(v_x_4037_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4047_;
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
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_a_4039_);
v___x_4044_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
lean_object* v___x_4045_; 
v___x_4045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4045_, 0, v___x_4044_);
return v___x_4045_;
}
}
}
else
{
lean_object* v_a_4048_; lean_object* v___x_4049_; 
v_a_4048_ = lean_ctor_get(v_x_4037_, 0);
lean_inc(v_a_4048_);
lean_dec_ref_known(v_x_4037_, 1);
v___x_4049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4049_, 0, v_a_4048_);
return v___x_4049_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1___boxed(lean_object* v_x_4050_, lean_object* v___y_4051_){
_start:
{
lean_object* v_res_4052_; 
v_res_4052_ = l_Std_Async_EAsync_race___redArg___lam__1(v_x_4050_);
return v_res_4052_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__0(lean_object* v_a_4053_){
_start:
{
lean_object* v___x_4054_; 
v___x_4054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4054_, 0, v_a_4053_);
return v___x_4054_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3(lean_object* v_a_4055_, lean_object* v_value_4056_){
_start:
{
lean_object* v___x_4058_; 
v___x_4058_ = lean_io_promise_resolve(v_value_4056_, v_a_4055_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3___boxed(lean_object* v_a_4059_, lean_object* v_value_4060_, lean_object* v___y_4061_){
_start:
{
lean_object* v_res_4062_; 
v_res_4062_ = l_Std_Async_EAsync_race___redArg___lam__3(v_a_4059_, v_value_4060_);
lean_dec(v_a_4059_);
return v_res_4062_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2(lean_object* v_a_4063_, lean_object* v___f_4064_, lean_object* v___f_4065_, lean_object* v_x_4066_){
_start:
{
if (lean_obj_tag(v_x_4066_) == 0)
{
lean_object* v_a_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4076_; 
lean_dec_ref(v___f_4065_);
lean_dec_ref(v___f_4064_);
v_a_4068_ = lean_ctor_get(v_x_4066_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v_x_4066_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4070_ = v_x_4066_;
v_isShared_4071_ = v_isSharedCheck_4076_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_a_4068_);
lean_dec(v_x_4066_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4076_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4073_; 
if (v_isShared_4071_ == 0)
{
v___x_4073_ = v___x_4070_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v_a_4068_);
v___x_4073_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
lean_object* v___x_4074_; 
v___x_4074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4074_, 0, v___x_4073_);
return v___x_4074_;
}
}
}
else
{
lean_object* v___x_4077_; lean_object* v___x_4078_; uint8_t v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; 
lean_dec_ref_known(v_x_4066_, 1);
v___x_4077_ = l_IO_Promise_result_x21___redArg(v_a_4063_);
v___x_4078_ = lean_unsigned_to_nat(0u);
v___x_4079_ = 0;
v___x_4080_ = lean_task_map(v___f_4064_, v___x_4077_, v___x_4078_, v___x_4079_);
v___x_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4080_);
v___x_4082_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4078_, v___x_4079_, v___x_4081_, v___f_4065_);
return v___x_4082_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2___boxed(lean_object* v_a_4083_, lean_object* v___f_4084_, lean_object* v___f_4085_, lean_object* v_x_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v_res_4088_; 
v_res_4088_ = l_Std_Async_EAsync_race___redArg___lam__2(v_a_4083_, v___f_4084_, v___f_4085_, v_x_4086_);
lean_dec(v_a_4083_);
return v_res_4088_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4(lean_object* v_a_4089_, lean_object* v___x_4090_, lean_object* v___x_4091_, uint8_t v___x_4092_, lean_object* v___f_4093_, lean_object* v_x_4094_){
_start:
{
if (lean_obj_tag(v_x_4094_) == 0)
{
lean_object* v_a_4096_; lean_object* v___x_4098_; uint8_t v_isShared_4099_; uint8_t v_isSharedCheck_4104_; 
lean_dec_ref(v___f_4093_);
lean_dec(v___x_4091_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v_a_4089_);
v_a_4096_ = lean_ctor_get(v_x_4094_, 0);
v_isSharedCheck_4104_ = !lean_is_exclusive(v_x_4094_);
if (v_isSharedCheck_4104_ == 0)
{
v___x_4098_ = v_x_4094_;
v_isShared_4099_ = v_isSharedCheck_4104_;
goto v_resetjp_4097_;
}
else
{
lean_inc(v_a_4096_);
lean_dec(v_x_4094_);
v___x_4098_ = lean_box(0);
v_isShared_4099_ = v_isSharedCheck_4104_;
goto v_resetjp_4097_;
}
v_resetjp_4097_:
{
lean_object* v___x_4101_; 
if (v_isShared_4099_ == 0)
{
v___x_4101_ = v___x_4098_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v_a_4096_);
v___x_4101_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
lean_object* v___x_4102_; 
v___x_4102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4102_, 0, v___x_4101_);
return v___x_4102_;
}
}
}
else
{
lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4114_; 
v_isSharedCheck_4114_ = !lean_is_exclusive(v_x_4094_);
if (v_isSharedCheck_4114_ == 0)
{
lean_object* v_unused_4115_; 
v_unused_4115_ = lean_ctor_get(v_x_4094_, 0);
lean_dec(v_unused_4115_);
v___x_4106_ = v_x_4094_;
v_isShared_4107_ = v_isSharedCheck_4114_;
goto v_resetjp_4105_;
}
else
{
lean_dec(v_x_4094_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4114_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v___x_4108_; lean_object* v___x_4110_; 
lean_inc(v___x_4091_);
v___x_4108_ = l_BaseIO_chainTask___redArg(v_a_4089_, v___x_4090_, v___x_4091_, v___x_4092_);
if (v_isShared_4107_ == 0)
{
lean_ctor_set(v___x_4106_, 0, v___x_4108_);
v___x_4110_ = v___x_4106_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v___x_4108_);
v___x_4110_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
lean_object* v___x_4111_; lean_object* v___x_4112_; 
v___x_4111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4110_);
v___x_4112_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4091_, v___x_4092_, v___x_4111_, v___f_4093_);
return v___x_4112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4___boxed(lean_object* v_a_4116_, lean_object* v___x_4117_, lean_object* v___x_4118_, lean_object* v___x_4119_, lean_object* v___f_4120_, lean_object* v_x_4121_, lean_object* v___y_4122_){
_start:
{
uint8_t v___x_1434__boxed_4123_; lean_object* v_res_4124_; 
v___x_1434__boxed_4123_ = lean_unbox(v___x_4119_);
v_res_4124_ = l_Std_Async_EAsync_race___redArg___lam__4(v_a_4116_, v___x_4117_, v___x_4118_, v___x_1434__boxed_4123_, v___f_4120_, v_x_4121_);
return v_res_4124_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5(lean_object* v___f_4125_, lean_object* v___f_4126_, lean_object* v___f_4127_, lean_object* v_a_4128_, lean_object* v_x_4129_){
_start:
{
if (lean_obj_tag(v_x_4129_) == 0)
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4139_; 
lean_dec_ref(v_a_4128_);
lean_dec_ref(v___f_4127_);
lean_dec_ref(v___f_4126_);
lean_dec(v___f_4125_);
v_a_4131_ = lean_ctor_get(v_x_4129_, 0);
v_isSharedCheck_4139_ = !lean_is_exclusive(v_x_4129_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4133_ = v_x_4129_;
v_isShared_4134_ = v_isSharedCheck_4139_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v_x_4129_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4139_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
lean_object* v___x_4137_; 
v___x_4137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4136_);
return v___x_4137_;
}
}
}
else
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4156_; 
v_a_4140_ = lean_ctor_get(v_x_4129_, 0);
v_isSharedCheck_4156_ = !lean_is_exclusive(v_x_4129_);
if (v_isSharedCheck_4156_ == 0)
{
v___x_4142_ = v_x_4129_;
v_isShared_4143_ = v_isSharedCheck_4156_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v_x_4129_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4156_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; uint8_t v___x_4147_; lean_object* v___x_4148_; lean_object* v___f_4149_; lean_object* v___x_4150_; lean_object* v___x_4152_; 
v___x_4144_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4144_, 0, lean_box(0));
lean_closure_set(v___x_4144_, 1, lean_box(0));
lean_closure_set(v___x_4144_, 2, v___f_4125_);
lean_closure_set(v___x_4144_, 3, lean_box(0));
v___x_4145_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4145_, 0, lean_box(0));
lean_closure_set(v___x_4145_, 1, lean_box(0));
lean_closure_set(v___x_4145_, 2, lean_box(0));
lean_closure_set(v___x_4145_, 3, v___x_4144_);
lean_closure_set(v___x_4145_, 4, v___f_4126_);
v___x_4146_ = lean_unsigned_to_nat(0u);
v___x_4147_ = 0;
v___x_4148_ = lean_box(v___x_4147_);
lean_inc_ref(v___x_4145_);
v___f_4149_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_4149_, 0, v_a_4140_);
lean_closure_set(v___f_4149_, 1, v___x_4145_);
lean_closure_set(v___f_4149_, 2, v___x_4146_);
lean_closure_set(v___f_4149_, 3, v___x_4148_);
lean_closure_set(v___f_4149_, 4, v___f_4127_);
v___x_4150_ = l_BaseIO_chainTask___redArg(v_a_4128_, v___x_4145_, v___x_4146_, v___x_4147_);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v___x_4150_);
v___x_4152_ = v___x_4142_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4155_; 
v_reuseFailAlloc_4155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4155_, 0, v___x_4150_);
v___x_4152_ = v_reuseFailAlloc_4155_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4152_);
v___x_4154_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4146_, v___x_4147_, v___x_4153_, v___f_4149_);
return v___x_4154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5___boxed(lean_object* v___f_4157_, lean_object* v___f_4158_, lean_object* v___f_4159_, lean_object* v_a_4160_, lean_object* v_x_4161_, lean_object* v___y_4162_){
_start:
{
lean_object* v_res_4163_; 
v_res_4163_ = l_Std_Async_EAsync_race___redArg___lam__5(v___f_4157_, v___f_4158_, v___f_4159_, v_a_4160_, v_x_4161_);
return v_res_4163_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6(lean_object* v___f_4164_, lean_object* v___f_4165_, lean_object* v___f_4166_, lean_object* v_y_4167_, lean_object* v_prio_4168_, lean_object* v___f_4169_, lean_object* v_x_4170_){
_start:
{
if (lean_obj_tag(v_x_4170_) == 0)
{
lean_object* v_a_4172_; lean_object* v___x_4174_; uint8_t v_isShared_4175_; uint8_t v_isSharedCheck_4180_; 
lean_dec_ref(v___f_4169_);
lean_dec(v_prio_4168_);
lean_dec_ref(v_y_4167_);
lean_dec_ref(v___f_4166_);
lean_dec_ref(v___f_4165_);
lean_dec(v___f_4164_);
v_a_4172_ = lean_ctor_get(v_x_4170_, 0);
v_isSharedCheck_4180_ = !lean_is_exclusive(v_x_4170_);
if (v_isSharedCheck_4180_ == 0)
{
v___x_4174_ = v_x_4170_;
v_isShared_4175_ = v_isSharedCheck_4180_;
goto v_resetjp_4173_;
}
else
{
lean_inc(v_a_4172_);
lean_dec(v_x_4170_);
v___x_4174_ = lean_box(0);
v_isShared_4175_ = v_isSharedCheck_4180_;
goto v_resetjp_4173_;
}
v_resetjp_4173_:
{
lean_object* v___x_4177_; 
if (v_isShared_4175_ == 0)
{
v___x_4177_ = v___x_4174_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v_a_4172_);
v___x_4177_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
lean_object* v___x_4178_; 
v___x_4178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4178_, 0, v___x_4177_);
return v___x_4178_;
}
}
}
else
{
lean_object* v_a_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4197_; 
v_a_4181_ = lean_ctor_get(v_x_4170_, 0);
v_isSharedCheck_4197_ = !lean_is_exclusive(v_x_4170_);
if (v_isSharedCheck_4197_ == 0)
{
v___x_4183_ = v_x_4170_;
v_isShared_4184_ = v_isSharedCheck_4197_;
goto v_resetjp_4182_;
}
else
{
lean_inc(v_a_4181_);
lean_dec(v_x_4170_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4197_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
lean_object* v___f_4185_; lean_object* v___x_4186_; uint8_t v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; uint8_t v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4193_; 
v___f_4185_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_4185_, 0, v___f_4164_);
lean_closure_set(v___f_4185_, 1, v___f_4165_);
lean_closure_set(v___f_4185_, 2, v___f_4166_);
lean_closure_set(v___f_4185_, 3, v_a_4181_);
v___x_4186_ = lean_unsigned_to_nat(0u);
v___x_4187_ = 0;
v___x_4188_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4188_, 0, lean_box(0));
lean_closure_set(v___x_4188_, 1, v_y_4167_);
v___x_4189_ = lean_io_as_task(v___x_4188_, v_prio_4168_);
v___x_4190_ = 1;
v___x_4191_ = lean_task_bind(v___x_4189_, v___f_4169_, v___x_4186_, v___x_4190_);
if (v_isShared_4184_ == 0)
{
lean_ctor_set(v___x_4183_, 0, v___x_4191_);
v___x_4193_ = v___x_4183_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v___x_4191_);
v___x_4193_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4193_);
v___x_4195_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4186_, v___x_4187_, v___x_4194_, v___f_4185_);
return v___x_4195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6___boxed(lean_object* v___f_4198_, lean_object* v___f_4199_, lean_object* v___f_4200_, lean_object* v_y_4201_, lean_object* v_prio_4202_, lean_object* v___f_4203_, lean_object* v_x_4204_, lean_object* v___y_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l_Std_Async_EAsync_race___redArg___lam__6(v___f_4198_, v___f_4199_, v___f_4200_, v_y_4201_, v_prio_4202_, v___f_4203_, v_x_4204_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7(lean_object* v___f_4207_, lean_object* v___f_4208_, lean_object* v___f_4209_, lean_object* v_y_4210_, lean_object* v_prio_4211_, lean_object* v___f_4212_, lean_object* v_x_4213_, lean_object* v___f_4214_, lean_object* v_x_4215_){
_start:
{
if (lean_obj_tag(v_x_4215_) == 0)
{
lean_object* v_a_4217_; lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4225_; 
lean_dec_ref(v___f_4214_);
lean_dec_ref(v_x_4213_);
lean_dec_ref(v___f_4212_);
lean_dec(v_prio_4211_);
lean_dec_ref(v_y_4210_);
lean_dec(v___f_4209_);
lean_dec_ref(v___f_4208_);
lean_dec_ref(v___f_4207_);
v_a_4217_ = lean_ctor_get(v_x_4215_, 0);
v_isSharedCheck_4225_ = !lean_is_exclusive(v_x_4215_);
if (v_isSharedCheck_4225_ == 0)
{
v___x_4219_ = v_x_4215_;
v_isShared_4220_ = v_isSharedCheck_4225_;
goto v_resetjp_4218_;
}
else
{
lean_inc(v_a_4217_);
lean_dec(v_x_4215_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4225_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v___x_4222_; 
if (v_isShared_4220_ == 0)
{
v___x_4222_ = v___x_4219_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4224_; 
v_reuseFailAlloc_4224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4224_, 0, v_a_4217_);
v___x_4222_ = v_reuseFailAlloc_4224_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
lean_object* v___x_4223_; 
v___x_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4223_, 0, v___x_4222_);
return v___x_4223_;
}
}
}
else
{
lean_object* v_a_4226_; lean_object* v___x_4228_; uint8_t v_isShared_4229_; uint8_t v_isSharedCheck_4244_; 
v_a_4226_ = lean_ctor_get(v_x_4215_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v_x_4215_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4228_ = v_x_4215_;
v_isShared_4229_ = v_isSharedCheck_4244_;
goto v_resetjp_4227_;
}
else
{
lean_inc(v_a_4226_);
lean_dec(v_x_4215_);
v___x_4228_ = lean_box(0);
v_isShared_4229_ = v_isSharedCheck_4244_;
goto v_resetjp_4227_;
}
v_resetjp_4227_:
{
lean_object* v___f_4230_; lean_object* v___f_4231_; lean_object* v___f_4232_; lean_object* v___x_4233_; uint8_t v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; uint8_t v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4240_; 
lean_inc(v_a_4226_);
v___f_4230_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4230_, 0, v_a_4226_);
v___f_4231_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4231_, 0, v_a_4226_);
lean_closure_set(v___f_4231_, 1, v___f_4207_);
lean_closure_set(v___f_4231_, 2, v___f_4208_);
lean_inc(v_prio_4211_);
v___f_4232_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_4232_, 0, v___f_4209_);
lean_closure_set(v___f_4232_, 1, v___f_4230_);
lean_closure_set(v___f_4232_, 2, v___f_4231_);
lean_closure_set(v___f_4232_, 3, v_y_4210_);
lean_closure_set(v___f_4232_, 4, v_prio_4211_);
lean_closure_set(v___f_4232_, 5, v___f_4212_);
v___x_4233_ = lean_unsigned_to_nat(0u);
v___x_4234_ = 0;
v___x_4235_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4235_, 0, lean_box(0));
lean_closure_set(v___x_4235_, 1, v_x_4213_);
v___x_4236_ = lean_io_as_task(v___x_4235_, v_prio_4211_);
v___x_4237_ = 1;
v___x_4238_ = lean_task_bind(v___x_4236_, v___f_4214_, v___x_4233_, v___x_4237_);
if (v_isShared_4229_ == 0)
{
lean_ctor_set(v___x_4228_, 0, v___x_4238_);
v___x_4240_ = v___x_4228_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v___x_4238_);
v___x_4240_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
lean_object* v___x_4241_; lean_object* v___x_4242_; 
v___x_4241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4241_, 0, v___x_4240_);
v___x_4242_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4233_, v___x_4234_, v___x_4241_, v___f_4232_);
return v___x_4242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7___boxed(lean_object* v___f_4245_, lean_object* v___f_4246_, lean_object* v___f_4247_, lean_object* v_y_4248_, lean_object* v_prio_4249_, lean_object* v___f_4250_, lean_object* v_x_4251_, lean_object* v___f_4252_, lean_object* v_x_4253_, lean_object* v___y_4254_){
_start:
{
lean_object* v_res_4255_; 
v_res_4255_ = l_Std_Async_EAsync_race___redArg___lam__7(v___f_4245_, v___f_4246_, v___f_4247_, v_y_4248_, v_prio_4249_, v___f_4250_, v_x_4251_, v___f_4252_, v_x_4253_);
return v_res_4255_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg(lean_object* v_x_4258_, lean_object* v_y_4259_, lean_object* v_prio_4260_){
_start:
{
lean_object* v___f_4262_; lean_object* v___f_4263_; lean_object* v___f_4264_; lean_object* v___f_4265_; lean_object* v___f_4266_; lean_object* v___x_4267_; uint8_t v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; 
v___f_4262_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4263_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4264_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4265_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4266_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4266_, 0, v___f_4264_);
lean_closure_set(v___f_4266_, 1, v___f_4263_);
lean_closure_set(v___f_4266_, 2, v___f_4265_);
lean_closure_set(v___f_4266_, 3, v_y_4259_);
lean_closure_set(v___f_4266_, 4, v_prio_4260_);
lean_closure_set(v___f_4266_, 5, v___f_4262_);
lean_closure_set(v___f_4266_, 6, v_x_4258_);
lean_closure_set(v___f_4266_, 7, v___f_4262_);
v___x_4267_ = lean_unsigned_to_nat(0u);
v___x_4268_ = 0;
v___x_4269_ = lean_io_promise_new();
v___x_4270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4270_, 0, v___x_4269_);
v___x_4271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4271_, 0, v___x_4270_);
v___x_4272_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4267_, v___x_4268_, v___x_4271_, v___f_4266_);
return v___x_4272_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___boxed(lean_object* v_x_4273_, lean_object* v_y_4274_, lean_object* v_prio_4275_, lean_object* v_a_4276_){
_start:
{
lean_object* v_res_4277_; 
v_res_4277_ = l_Std_Async_EAsync_race___redArg(v_x_4273_, v_y_4274_, v_prio_4275_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race(lean_object* v_00_u03b1_4278_, lean_object* v_00_u03b5_4279_, lean_object* v_inst_4280_, lean_object* v_x_4281_, lean_object* v_y_4282_, lean_object* v_prio_4283_){
_start:
{
lean_object* v___f_4285_; lean_object* v___f_4286_; lean_object* v___f_4287_; lean_object* v___f_4288_; lean_object* v___f_4289_; lean_object* v___x_4290_; uint8_t v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; 
v___f_4285_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4286_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4287_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4288_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4289_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4289_, 0, v___f_4287_);
lean_closure_set(v___f_4289_, 1, v___f_4286_);
lean_closure_set(v___f_4289_, 2, v___f_4288_);
lean_closure_set(v___f_4289_, 3, v_y_4282_);
lean_closure_set(v___f_4289_, 4, v_prio_4283_);
lean_closure_set(v___f_4289_, 5, v___f_4285_);
lean_closure_set(v___f_4289_, 6, v_x_4281_);
lean_closure_set(v___f_4289_, 7, v___f_4285_);
v___x_4290_ = lean_unsigned_to_nat(0u);
v___x_4291_ = 0;
v___x_4292_ = lean_io_promise_new();
v___x_4293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4293_, 0, v___x_4292_);
v___x_4294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4294_, 0, v___x_4293_);
v___x_4295_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4290_, v___x_4291_, v___x_4294_, v___f_4289_);
return v___x_4295_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___boxed(lean_object* v_00_u03b1_4296_, lean_object* v_00_u03b5_4297_, lean_object* v_inst_4298_, lean_object* v_x_4299_, lean_object* v_y_4300_, lean_object* v_prio_4301_, lean_object* v_a_4302_){
_start:
{
lean_object* v_res_4303_; 
v_res_4303_ = l_Std_Async_EAsync_race(v_00_u03b1_4296_, v_00_u03b5_4297_, v_inst_4298_, v_x_4299_, v_y_4300_, v_prio_4301_);
lean_dec(v_inst_4298_);
return v_res_4303_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_4304_, lean_object* v___f_4305_, lean_object* v_x_4306_){
_start:
{
lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; uint8_t v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; 
v___x_4308_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4308_, 0, lean_box(0));
lean_closure_set(v___x_4308_, 1, v_x_4306_);
v___x_4309_ = lean_io_as_task(v___x_4308_, v_prio_4304_);
v___x_4310_ = lean_unsigned_to_nat(0u);
v___x_4311_ = 1;
v___x_4312_ = lean_task_bind(v___x_4309_, v___f_4305_, v___x_4310_, v___x_4311_);
v___x_4313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4313_, 0, v___x_4312_);
v___x_4314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4314_, 0, v___x_4313_);
return v___x_4314_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_4315_, lean_object* v___f_4316_, lean_object* v_x_4317_, lean_object* v___y_4318_){
_start:
{
lean_object* v_res_4319_; 
v_res_4319_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(v_prio_4315_, v___f_4316_, v_x_4317_);
return v_res_4319_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(lean_object* v___y_4320_){
_start:
{
lean_object* v___x_4322_; 
v___x_4322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4322_, 0, v___y_4320_);
return v___x_4322_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v_res_4325_; 
v_res_4325_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(v___y_4323_);
return v_res_4325_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(lean_object* v___x_4326_, lean_object* v___f_4327_, lean_object* v_x_4328_){
_start:
{
if (lean_obj_tag(v_x_4328_) == 0)
{
lean_object* v_a_4330_; lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4338_; 
lean_dec_ref(v___f_4327_);
lean_dec_ref(v___x_4326_);
v_a_4330_ = lean_ctor_get(v_x_4328_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v_x_4328_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4332_ = v_x_4328_;
v_isShared_4333_ = v_isSharedCheck_4338_;
goto v_resetjp_4331_;
}
else
{
lean_inc(v_a_4330_);
lean_dec(v_x_4328_);
v___x_4332_ = lean_box(0);
v_isShared_4333_ = v_isSharedCheck_4338_;
goto v_resetjp_4331_;
}
v_resetjp_4331_:
{
lean_object* v___x_4335_; 
if (v_isShared_4333_ == 0)
{
v___x_4335_ = v___x_4332_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_a_4330_);
v___x_4335_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
lean_object* v___x_4336_; 
v___x_4336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4336_, 0, v___x_4335_);
return v___x_4336_;
}
}
}
else
{
lean_object* v_a_4339_; size_t v_sz_4340_; size_t v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_308__overap_4344_; lean_object* v___x_4345_; 
v_a_4339_ = lean_ctor_get(v_x_4328_, 0);
lean_inc(v_a_4339_);
lean_dec_ref_known(v_x_4328_, 1);
v_sz_4340_ = lean_array_size(v_a_4339_);
v___x_4341_ = ((size_t)0ULL);
v___x_4342_ = l_unsafeCast___redArg(v_a_4339_);
lean_dec(v_a_4339_);
v___x_4343_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4326_, v___f_4327_, v_sz_4340_, v___x_4341_, v___x_4342_);
v___x_308__overap_4344_ = l_unsafeCast___redArg(v___x_4343_);
lean_dec(v___x_4343_);
v___x_4345_ = lean_apply_1(v___x_308__overap_4344_, lean_box(0));
return v___x_4345_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___x_4346_, lean_object* v___f_4347_, lean_object* v_x_4348_, lean_object* v___y_4349_){
_start:
{
lean_object* v_res_4350_; 
v_res_4350_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(v___x_4346_, v___f_4347_, v_x_4348_);
return v_res_4350_;
}
}
static lean_object* _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___f_4352_; lean_object* v___x_4353_; lean_object* v___f_4354_; 
v___f_4352_ = ((lean_object*)(l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0));
v___x_4353_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4354_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4354_, 0, v___x_4353_);
lean_closure_set(v___f_4354_, 1, v___f_4352_);
return v___f_4354_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg(lean_object* v_xs_4355_, lean_object* v_prio_4356_){
_start:
{
lean_object* v___f_4358_; lean_object* v___f_4359_; lean_object* v___x_4360_; lean_object* v___f_4361_; lean_object* v___x_4362_; uint8_t v___x_4363_; size_t v_sz_4364_; size_t v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_228__overap_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; 
v___f_4358_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4359_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4359_, 0, v_prio_4356_);
lean_closure_set(v___f_4359_, 1, v___f_4358_);
v___x_4360_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4361_ = lean_obj_once(&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1);
v___x_4362_ = lean_unsigned_to_nat(0u);
v___x_4363_ = 0;
v_sz_4364_ = lean_array_size(v_xs_4355_);
v___x_4365_ = ((size_t)0ULL);
v___x_4366_ = l_unsafeCast___redArg(v_xs_4355_);
v___x_4367_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4360_, v___f_4359_, v_sz_4364_, v___x_4365_, v___x_4366_);
v___x_228__overap_4368_ = l_unsafeCast___redArg(v___x_4367_);
lean_dec(v___x_4367_);
v___x_4369_ = lean_apply_1(v___x_228__overap_4368_, lean_box(0));
v___x_4370_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4362_, v___x_4363_, v___x_4369_, v___f_4361_);
return v___x_4370_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_4371_, lean_object* v_prio_4372_, lean_object* v_a_4373_){
_start:
{
lean_object* v_res_4374_; 
v_res_4374_ = l_Std_Async_EAsync_concurrentlyAll___redArg(v_xs_4371_, v_prio_4372_);
lean_dec_ref(v_xs_4371_);
return v_res_4374_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll(lean_object* v_00_u03b5_4375_, lean_object* v_00_u03b1_4376_, lean_object* v_xs_4377_, lean_object* v_prio_4378_){
_start:
{
lean_object* v___f_4380_; lean_object* v___f_4381_; lean_object* v___x_4382_; lean_object* v___f_4383_; lean_object* v___x_4384_; uint8_t v___x_4385_; size_t v_sz_4386_; size_t v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_272__overap_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; 
v___f_4380_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4381_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4381_, 0, v_prio_4378_);
lean_closure_set(v___f_4381_, 1, v___f_4380_);
v___x_4382_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4383_ = lean_obj_once(&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1);
v___x_4384_ = lean_unsigned_to_nat(0u);
v___x_4385_ = 0;
v_sz_4386_ = lean_array_size(v_xs_4377_);
v___x_4387_ = ((size_t)0ULL);
v___x_4388_ = l_unsafeCast___redArg(v_xs_4377_);
v___x_4389_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4382_, v___f_4381_, v_sz_4386_, v___x_4387_, v___x_4388_);
v___x_272__overap_4390_ = l_unsafeCast___redArg(v___x_4389_);
lean_dec(v___x_4389_);
v___x_4391_ = lean_apply_1(v___x_272__overap_4390_, lean_box(0));
v___x_4392_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4384_, v___x_4385_, v___x_4391_, v___f_4383_);
return v___x_4392_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___boxed(lean_object* v_00_u03b5_4393_, lean_object* v_00_u03b1_4394_, lean_object* v_xs_4395_, lean_object* v_prio_4396_, lean_object* v_a_4397_){
_start:
{
lean_object* v_res_4398_; 
v_res_4398_ = l_Std_Async_EAsync_concurrentlyAll(v_00_u03b5_4393_, v_00_u03b1_4394_, v_xs_4395_, v_prio_4396_);
lean_dec_ref(v_xs_4395_);
return v_res_4398_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4(lean_object* v___f_4399_, lean_object* v___f_4400_, lean_object* v_x_4401_){
_start:
{
if (lean_obj_tag(v_x_4401_) == 0)
{
lean_object* v_a_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4411_; 
lean_dec_ref(v___f_4400_);
lean_dec(v___f_4399_);
v_a_4403_ = lean_ctor_get(v_x_4401_, 0);
v_isSharedCheck_4411_ = !lean_is_exclusive(v_x_4401_);
if (v_isSharedCheck_4411_ == 0)
{
v___x_4405_ = v_x_4401_;
v_isShared_4406_ = v_isSharedCheck_4411_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_a_4403_);
lean_dec(v_x_4401_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4411_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
lean_object* v___x_4408_; 
if (v_isShared_4406_ == 0)
{
v___x_4408_ = v___x_4405_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4410_; 
v_reuseFailAlloc_4410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4410_, 0, v_a_4403_);
v___x_4408_ = v_reuseFailAlloc_4410_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
lean_object* v___x_4409_; 
v___x_4409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4409_, 0, v___x_4408_);
return v___x_4409_;
}
}
}
else
{
lean_object* v_a_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4425_; 
v_a_4412_ = lean_ctor_get(v_x_4401_, 0);
v_isSharedCheck_4425_ = !lean_is_exclusive(v_x_4401_);
if (v_isSharedCheck_4425_ == 0)
{
v___x_4414_ = v_x_4401_;
v_isShared_4415_ = v_isSharedCheck_4425_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_a_4412_);
lean_dec(v_x_4401_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4425_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; uint8_t v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4422_; 
v___x_4416_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4416_, 0, lean_box(0));
lean_closure_set(v___x_4416_, 1, lean_box(0));
lean_closure_set(v___x_4416_, 2, v___f_4399_);
lean_closure_set(v___x_4416_, 3, lean_box(0));
v___x_4417_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4417_, 0, lean_box(0));
lean_closure_set(v___x_4417_, 1, lean_box(0));
lean_closure_set(v___x_4417_, 2, lean_box(0));
lean_closure_set(v___x_4417_, 3, v___x_4416_);
lean_closure_set(v___x_4417_, 4, v___f_4400_);
v___x_4418_ = lean_unsigned_to_nat(0u);
v___x_4419_ = 0;
v___x_4420_ = l_BaseIO_chainTask___redArg(v_a_4412_, v___x_4417_, v___x_4418_, v___x_4419_);
if (v_isShared_4415_ == 0)
{
lean_ctor_set(v___x_4414_, 0, v___x_4420_);
v___x_4422_ = v___x_4414_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v___x_4420_);
v___x_4422_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
lean_object* v___x_4423_; 
v___x_4423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4423_, 0, v___x_4422_);
return v___x_4423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed(lean_object* v___f_4426_, lean_object* v___f_4427_, lean_object* v_x_4428_, lean_object* v___y_4429_){
_start:
{
lean_object* v_res_4430_; 
v_res_4430_ = l_Std_Async_EAsync_raceAll___redArg___lam__4(v___f_4426_, v___f_4427_, v_x_4428_);
return v_res_4430_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0(lean_object* v_prio_4431_, lean_object* v___f_4432_, lean_object* v___f_4433_, lean_object* v_x_4434_){
_start:
{
lean_object* v___x_4436_; uint8_t v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; uint8_t v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; 
v___x_4436_ = lean_unsigned_to_nat(0u);
v___x_4437_ = 0;
v___x_4438_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4438_, 0, lean_box(0));
lean_closure_set(v___x_4438_, 1, v_x_4434_);
v___x_4439_ = lean_io_as_task(v___x_4438_, v_prio_4431_);
v___x_4440_ = 1;
v___x_4441_ = lean_task_bind(v___x_4439_, v___f_4432_, v___x_4436_, v___x_4440_);
v___x_4442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4442_, 0, v___x_4441_);
v___x_4443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4443_, 0, v___x_4442_);
v___x_4444_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4436_, v___x_4437_, v___x_4443_, v___f_4433_);
return v___x_4444_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_4445_, lean_object* v___f_4446_, lean_object* v___f_4447_, lean_object* v_x_4448_, lean_object* v___y_4449_){
_start:
{
lean_object* v_res_4450_; 
v_res_4450_ = l_Std_Async_EAsync_raceAll___redArg___lam__0(v_prio_4445_, v___f_4446_, v___f_4447_, v_x_4448_);
return v_res_4450_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2(lean_object* v___f_4451_, lean_object* v_prio_4452_, lean_object* v___f_4453_, lean_object* v___f_4454_, lean_object* v___f_4455_, lean_object* v_inst_4456_, lean_object* v_xs_4457_, lean_object* v_x_4458_){
_start:
{
if (lean_obj_tag(v_x_4458_) == 0)
{
lean_object* v_a_4460_; lean_object* v___x_4462_; uint8_t v_isShared_4463_; uint8_t v_isSharedCheck_4468_; 
lean_dec(v_xs_4457_);
lean_dec_ref(v_inst_4456_);
lean_dec_ref(v___f_4455_);
lean_dec_ref(v___f_4454_);
lean_dec_ref(v___f_4453_);
lean_dec(v_prio_4452_);
lean_dec(v___f_4451_);
v_a_4460_ = lean_ctor_get(v_x_4458_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v_x_4458_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4462_ = v_x_4458_;
v_isShared_4463_ = v_isSharedCheck_4468_;
goto v_resetjp_4461_;
}
else
{
lean_inc(v_a_4460_);
lean_dec(v_x_4458_);
v___x_4462_ = lean_box(0);
v_isShared_4463_ = v_isSharedCheck_4468_;
goto v_resetjp_4461_;
}
v_resetjp_4461_:
{
lean_object* v___x_4465_; 
if (v_isShared_4463_ == 0)
{
v___x_4465_ = v___x_4462_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v_a_4460_);
v___x_4465_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
lean_object* v___x_4466_; 
v___x_4466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4466_, 0, v___x_4465_);
return v___x_4466_;
}
}
}
else
{
lean_object* v_a_4469_; lean_object* v___f_4470_; lean_object* v___f_4471_; lean_object* v___f_4472_; lean_object* v___f_4473_; lean_object* v___x_4474_; uint8_t v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; 
v_a_4469_ = lean_ctor_get(v_x_4458_, 0);
lean_inc_n(v_a_4469_, 2);
lean_dec_ref_known(v_x_4458_, 1);
v___f_4470_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4470_, 0, v_a_4469_);
v___f_4471_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4471_, 0, v___f_4451_);
lean_closure_set(v___f_4471_, 1, v___f_4470_);
v___f_4472_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4472_, 0, v_prio_4452_);
lean_closure_set(v___f_4472_, 1, v___f_4453_);
lean_closure_set(v___f_4472_, 2, v___f_4471_);
v___f_4473_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4473_, 0, v_a_4469_);
lean_closure_set(v___f_4473_, 1, v___f_4454_);
lean_closure_set(v___f_4473_, 2, v___f_4455_);
v___x_4474_ = lean_unsigned_to_nat(0u);
v___x_4475_ = 0;
v___x_4476_ = lean_apply_3(v_inst_4456_, v_xs_4457_, v___f_4472_, lean_box(0));
v___x_4477_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4474_, v___x_4475_, v___x_4476_, v___f_4473_);
return v___x_4477_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_4478_, lean_object* v_prio_4479_, lean_object* v___f_4480_, lean_object* v___f_4481_, lean_object* v___f_4482_, lean_object* v_inst_4483_, lean_object* v_xs_4484_, lean_object* v_x_4485_, lean_object* v___y_4486_){
_start:
{
lean_object* v_res_4487_; 
v_res_4487_ = l_Std_Async_EAsync_raceAll___redArg___lam__2(v___f_4478_, v_prio_4479_, v___f_4480_, v___f_4481_, v___f_4482_, v_inst_4483_, v_xs_4484_, v_x_4485_);
return v_res_4487_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg(lean_object* v_inst_4488_, lean_object* v_xs_4489_, lean_object* v_prio_4490_){
_start:
{
lean_object* v___f_4492_; lean_object* v___f_4493_; lean_object* v___f_4494_; lean_object* v___f_4495_; lean_object* v___f_4496_; lean_object* v___x_4497_; uint8_t v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; 
v___f_4492_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4493_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4494_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4495_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4496_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4496_, 0, v___f_4495_);
lean_closure_set(v___f_4496_, 1, v_prio_4490_);
lean_closure_set(v___f_4496_, 2, v___f_4494_);
lean_closure_set(v___f_4496_, 3, v___f_4492_);
lean_closure_set(v___f_4496_, 4, v___f_4493_);
lean_closure_set(v___f_4496_, 5, v_inst_4488_);
lean_closure_set(v___f_4496_, 6, v_xs_4489_);
v___x_4497_ = lean_unsigned_to_nat(0u);
v___x_4498_ = 0;
v___x_4499_ = lean_io_promise_new();
v___x_4500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4500_, 0, v___x_4499_);
v___x_4501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4501_, 0, v___x_4500_);
v___x_4502_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4497_, v___x_4498_, v___x_4501_, v___f_4496_);
return v___x_4502_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___boxed(lean_object* v_inst_4503_, lean_object* v_xs_4504_, lean_object* v_prio_4505_, lean_object* v_a_4506_){
_start:
{
lean_object* v_res_4507_; 
v_res_4507_ = l_Std_Async_EAsync_raceAll___redArg(v_inst_4503_, v_xs_4504_, v_prio_4505_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll(lean_object* v_00_u03b1_4508_, lean_object* v_00_u03b5_4509_, lean_object* v_c_4510_, lean_object* v_inst_4511_, lean_object* v_inst_4512_, lean_object* v_xs_4513_, lean_object* v_prio_4514_){
_start:
{
lean_object* v___f_4516_; lean_object* v___f_4517_; lean_object* v___f_4518_; lean_object* v___f_4519_; lean_object* v___f_4520_; lean_object* v___x_4521_; uint8_t v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___f_4516_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4517_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4518_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4519_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4520_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4520_, 0, v___f_4519_);
lean_closure_set(v___f_4520_, 1, v_prio_4514_);
lean_closure_set(v___f_4520_, 2, v___f_4518_);
lean_closure_set(v___f_4520_, 3, v___f_4516_);
lean_closure_set(v___f_4520_, 4, v___f_4517_);
lean_closure_set(v___f_4520_, 5, v_inst_4512_);
lean_closure_set(v___f_4520_, 6, v_xs_4513_);
v___x_4521_ = lean_unsigned_to_nat(0u);
v___x_4522_ = 0;
v___x_4523_ = lean_io_promise_new();
v___x_4524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4524_, 0, v___x_4523_);
v___x_4525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4524_);
v___x_4526_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4521_, v___x_4522_, v___x_4525_, v___f_4520_);
return v___x_4526_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___boxed(lean_object* v_00_u03b1_4527_, lean_object* v_00_u03b5_4528_, lean_object* v_c_4529_, lean_object* v_inst_4530_, lean_object* v_inst_4531_, lean_object* v_xs_4532_, lean_object* v_prio_4533_, lean_object* v_a_4534_){
_start:
{
lean_object* v_res_4535_; 
v_res_4535_ = l_Std_Async_EAsync_raceAll(v_00_u03b1_4527_, v_00_u03b5_4528_, v_c_4529_, v_inst_4530_, v_inst_4531_, v_xs_4532_, v_prio_4533_);
lean_dec(v_inst_4530_);
return v_res_4535_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg(lean_object* v_x_4536_){
_start:
{
lean_object* v___x_4538_; 
v___x_4538_ = lean_apply_1(v_x_4536_, lean_box(0));
if (lean_obj_tag(v___x_4538_) == 0)
{
lean_object* v_a_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4547_; 
v_a_4539_ = lean_ctor_get(v___x_4538_, 0);
v_isSharedCheck_4547_ = !lean_is_exclusive(v___x_4538_);
if (v_isSharedCheck_4547_ == 0)
{
v___x_4541_ = v___x_4538_;
v_isShared_4542_ = v_isSharedCheck_4547_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_a_4539_);
lean_dec(v___x_4538_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4547_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4543_; lean_object* v___x_4545_; 
v___x_4543_ = lean_task_pure(v_a_4539_);
if (v_isShared_4542_ == 0)
{
lean_ctor_set(v___x_4541_, 0, v___x_4543_);
v___x_4545_ = v___x_4541_;
goto v_reusejp_4544_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v___x_4543_);
v___x_4545_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4544_;
}
v_reusejp_4544_:
{
return v___x_4545_;
}
}
}
else
{
lean_object* v_a_4548_; lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4555_; 
v_a_4548_ = lean_ctor_get(v___x_4538_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4538_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4550_ = v___x_4538_;
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
else
{
lean_inc(v_a_4548_);
lean_dec(v___x_4538_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v___x_4553_; 
if (v_isShared_4551_ == 0)
{
lean_ctor_set_tag(v___x_4550_, 0);
v___x_4553_ = v___x_4550_;
goto v_reusejp_4552_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_a_4548_);
v___x_4553_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4552_;
}
v_reusejp_4552_:
{
return v___x_4553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg___boxed(lean_object* v_x_4556_, lean_object* v_a_4557_){
_start:
{
lean_object* v_res_4558_; 
v_res_4558_ = l_Std_Async_Async_toIO___redArg(v_x_4556_);
return v_res_4558_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO(lean_object* v_00_u03b1_4559_, lean_object* v_x_4560_){
_start:
{
lean_object* v___x_4562_; 
v___x_4562_ = lean_apply_1(v_x_4560_, lean_box(0));
if (lean_obj_tag(v___x_4562_) == 0)
{
lean_object* v_a_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4571_; 
v_a_4563_ = lean_ctor_get(v___x_4562_, 0);
v_isSharedCheck_4571_ = !lean_is_exclusive(v___x_4562_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4565_ = v___x_4562_;
v_isShared_4566_ = v_isSharedCheck_4571_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_a_4563_);
lean_dec(v___x_4562_);
v___x_4565_ = lean_box(0);
v_isShared_4566_ = v_isSharedCheck_4571_;
goto v_resetjp_4564_;
}
v_resetjp_4564_:
{
lean_object* v___x_4567_; lean_object* v___x_4569_; 
v___x_4567_ = lean_task_pure(v_a_4563_);
if (v_isShared_4566_ == 0)
{
lean_ctor_set(v___x_4565_, 0, v___x_4567_);
v___x_4569_ = v___x_4565_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v___x_4567_);
v___x_4569_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
return v___x_4569_;
}
}
}
else
{
lean_object* v_a_4572_; lean_object* v___x_4574_; uint8_t v_isShared_4575_; uint8_t v_isSharedCheck_4579_; 
v_a_4572_ = lean_ctor_get(v___x_4562_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___x_4562_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4574_ = v___x_4562_;
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
else
{
lean_inc(v_a_4572_);
lean_dec(v___x_4562_);
v___x_4574_ = lean_box(0);
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
v_resetjp_4573_:
{
lean_object* v___x_4577_; 
if (v_isShared_4575_ == 0)
{
lean_ctor_set_tag(v___x_4574_, 0);
v___x_4577_ = v___x_4574_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v_a_4572_);
v___x_4577_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
return v___x_4577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___boxed(lean_object* v_00_u03b1_4580_, lean_object* v_x_4581_, lean_object* v_a_4582_){
_start:
{
lean_object* v_res_4583_; 
v_res_4583_ = l_Std_Async_Async_toIO(v_00_u03b1_4580_, v_x_4581_);
return v_res_4583_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg(lean_object* v_x_4584_, lean_object* v_prio_4585_){
_start:
{
lean_object* v___f_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; uint8_t v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___f_4587_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4588_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4588_, 0, lean_box(0));
lean_closure_set(v___x_4588_, 1, v_x_4584_);
v___x_4589_ = lean_io_as_task(v___x_4588_, v_prio_4585_);
v___x_4590_ = lean_unsigned_to_nat(0u);
v___x_4591_ = 1;
v___x_4592_ = lean_task_bind(v___x_4589_, v___f_4587_, v___x_4590_, v___x_4591_);
v___x_4593_ = lean_task_get_own(v___x_4592_);
if (lean_obj_tag(v___x_4593_) == 0)
{
lean_object* v_a_4594_; lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4601_; 
v_a_4594_ = lean_ctor_get(v___x_4593_, 0);
v_isSharedCheck_4601_ = !lean_is_exclusive(v___x_4593_);
if (v_isSharedCheck_4601_ == 0)
{
v___x_4596_ = v___x_4593_;
v_isShared_4597_ = v_isSharedCheck_4601_;
goto v_resetjp_4595_;
}
else
{
lean_inc(v_a_4594_);
lean_dec(v___x_4593_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4601_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v___x_4599_; 
if (v_isShared_4597_ == 0)
{
lean_ctor_set_tag(v___x_4596_, 1);
v___x_4599_ = v___x_4596_;
goto v_reusejp_4598_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v_a_4594_);
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
v_a_4602_ = lean_ctor_get(v___x_4593_, 0);
v_isSharedCheck_4609_ = !lean_is_exclusive(v___x_4593_);
if (v_isSharedCheck_4609_ == 0)
{
v___x_4604_ = v___x_4593_;
v_isShared_4605_ = v_isSharedCheck_4609_;
goto v_resetjp_4603_;
}
else
{
lean_inc(v_a_4602_);
lean_dec(v___x_4593_);
v___x_4604_ = lean_box(0);
v_isShared_4605_ = v_isSharedCheck_4609_;
goto v_resetjp_4603_;
}
v_resetjp_4603_:
{
lean_object* v___x_4607_; 
if (v_isShared_4605_ == 0)
{
lean_ctor_set_tag(v___x_4604_, 0);
v___x_4607_ = v___x_4604_;
goto v_reusejp_4606_;
}
else
{
lean_object* v_reuseFailAlloc_4608_; 
v_reuseFailAlloc_4608_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg___boxed(lean_object* v_x_4610_, lean_object* v_prio_4611_, lean_object* v_a_4612_){
_start:
{
lean_object* v_res_4613_; 
v_res_4613_ = l_Std_Async_Async_block___redArg(v_x_4610_, v_prio_4611_);
return v_res_4613_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block(lean_object* v_00_u03b1_4614_, lean_object* v_x_4615_, lean_object* v_prio_4616_){
_start:
{
lean_object* v___f_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; uint8_t v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; 
v___f_4618_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4619_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4619_, 0, lean_box(0));
lean_closure_set(v___x_4619_, 1, v_x_4615_);
v___x_4620_ = lean_io_as_task(v___x_4619_, v_prio_4616_);
v___x_4621_ = lean_unsigned_to_nat(0u);
v___x_4622_ = 1;
v___x_4623_ = lean_task_bind(v___x_4620_, v___f_4618_, v___x_4621_, v___x_4622_);
v___x_4624_ = lean_task_get_own(v___x_4623_);
if (lean_obj_tag(v___x_4624_) == 0)
{
lean_object* v_a_4625_; lean_object* v___x_4627_; uint8_t v_isShared_4628_; uint8_t v_isSharedCheck_4632_; 
v_a_4625_ = lean_ctor_get(v___x_4624_, 0);
v_isSharedCheck_4632_ = !lean_is_exclusive(v___x_4624_);
if (v_isSharedCheck_4632_ == 0)
{
v___x_4627_ = v___x_4624_;
v_isShared_4628_ = v_isSharedCheck_4632_;
goto v_resetjp_4626_;
}
else
{
lean_inc(v_a_4625_);
lean_dec(v___x_4624_);
v___x_4627_ = lean_box(0);
v_isShared_4628_ = v_isSharedCheck_4632_;
goto v_resetjp_4626_;
}
v_resetjp_4626_:
{
lean_object* v___x_4630_; 
if (v_isShared_4628_ == 0)
{
lean_ctor_set_tag(v___x_4627_, 1);
v___x_4630_ = v___x_4627_;
goto v_reusejp_4629_;
}
else
{
lean_object* v_reuseFailAlloc_4631_; 
v_reuseFailAlloc_4631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4631_, 0, v_a_4625_);
v___x_4630_ = v_reuseFailAlloc_4631_;
goto v_reusejp_4629_;
}
v_reusejp_4629_:
{
return v___x_4630_;
}
}
}
else
{
lean_object* v_a_4633_; lean_object* v___x_4635_; uint8_t v_isShared_4636_; uint8_t v_isSharedCheck_4640_; 
v_a_4633_ = lean_ctor_get(v___x_4624_, 0);
v_isSharedCheck_4640_ = !lean_is_exclusive(v___x_4624_);
if (v_isSharedCheck_4640_ == 0)
{
v___x_4635_ = v___x_4624_;
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
else
{
lean_inc(v_a_4633_);
lean_dec(v___x_4624_);
v___x_4635_ = lean_box(0);
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
v_resetjp_4634_:
{
lean_object* v___x_4638_; 
if (v_isShared_4636_ == 0)
{
lean_ctor_set_tag(v___x_4635_, 0);
v___x_4638_ = v___x_4635_;
goto v_reusejp_4637_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_a_4633_);
v___x_4638_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4637_;
}
v_reusejp_4637_:
{
return v___x_4638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___boxed(lean_object* v_00_u03b1_4641_, lean_object* v_x_4642_, lean_object* v_prio_4643_, lean_object* v_a_4644_){
_start:
{
lean_object* v_res_4645_; 
v_res_4645_ = l_Std_Async_Async_block(v_00_u03b1_4641_, v_x_4642_, v_prio_4643_);
return v_res_4645_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___lam__1(lean_object* v___f_4646_, lean_object* v_x_4647_){
_start:
{
if (lean_obj_tag(v_x_4647_) == 0)
{
lean_object* v_a_4649_; lean_object* v___x_4651_; uint8_t v_isShared_4652_; uint8_t v_isSharedCheck_4657_; 
lean_dec_ref(v___f_4646_);
v_a_4649_ = lean_ctor_get(v_x_4647_, 0);
v_isSharedCheck_4657_ = !lean_is_exclusive(v_x_4647_);
if (v_isSharedCheck_4657_ == 0)
{
v___x_4651_ = v_x_4647_;
v_isShared_4652_ = v_isSharedCheck_4657_;
goto v_resetjp_4650_;
}
else
{
lean_inc(v_a_4649_);
lean_dec(v_x_4647_);
v___x_4651_ = lean_box(0);
v_isShared_4652_ = v_isSharedCheck_4657_;
goto v_resetjp_4650_;
}
v_resetjp_4650_:
{
lean_object* v___x_4654_; 
if (v_isShared_4652_ == 0)
{
v___x_4654_ = v___x_4651_;
goto v_reusejp_4653_;
}
else
{
lean_object* v_reuseFailAlloc_4656_; 
v_reuseFailAlloc_4656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4656_, 0, v_a_4649_);
v___x_4654_ = v_reuseFailAlloc_4656_;
goto v_reusejp_4653_;
}
v_reusejp_4653_:
{
lean_object* v___x_4655_; 
v___x_4655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4655_, 0, v___x_4654_);
return v___x_4655_;
}
}
}
else
{
lean_object* v_a_4658_; 
v_a_4658_ = lean_ctor_get(v_x_4647_, 0);
lean_inc(v_a_4658_);
lean_dec_ref_known(v_x_4647_, 1);
if (lean_obj_tag(v_a_4658_) == 0)
{
lean_object* v_a_4659_; lean_object* v___x_4661_; uint8_t v_isShared_4662_; uint8_t v_isSharedCheck_4667_; 
lean_dec_ref(v___f_4646_);
v_a_4659_ = lean_ctor_get(v_a_4658_, 0);
v_isSharedCheck_4667_ = !lean_is_exclusive(v_a_4658_);
if (v_isSharedCheck_4667_ == 0)
{
v___x_4661_ = v_a_4658_;
v_isShared_4662_ = v_isSharedCheck_4667_;
goto v_resetjp_4660_;
}
else
{
lean_inc(v_a_4659_);
lean_dec(v_a_4658_);
v___x_4661_ = lean_box(0);
v_isShared_4662_ = v_isSharedCheck_4667_;
goto v_resetjp_4660_;
}
v_resetjp_4660_:
{
lean_object* v___x_4664_; 
if (v_isShared_4662_ == 0)
{
v___x_4664_ = v___x_4661_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4666_; 
v_reuseFailAlloc_4666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4666_, 0, v_a_4659_);
v___x_4664_ = v_reuseFailAlloc_4666_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
lean_object* v___x_4665_; 
v___x_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4665_, 0, v___x_4664_);
return v___x_4665_;
}
}
}
else
{
lean_object* v_a_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; uint8_t v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; 
v_a_4668_ = lean_ctor_get(v_a_4658_, 0);
lean_inc(v_a_4668_);
lean_dec_ref_known(v_a_4658_, 1);
v___x_4669_ = lean_io_promise_result_opt(v_a_4668_);
lean_dec(v_a_4668_);
v___x_4670_ = lean_unsigned_to_nat(0u);
v___x_4671_ = 0;
v___x_4672_ = lean_task_map(v___f_4646_, v___x_4669_, v___x_4670_, v___x_4671_);
v___x_4673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4673_, 0, v___x_4672_);
return v___x_4673_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___lam__1___boxed(lean_object* v___f_4674_, lean_object* v_x_4675_, lean_object* v___y_4676_){
_start:
{
lean_object* v_res_4677_; 
v_res_4677_ = l_Std_Async_Async_ofPromise___redArg___lam__1(v___f_4674_, v_x_4675_);
return v_res_4677_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg(lean_object* v_task_4678_, lean_object* v_error_4679_){
_start:
{
lean_object* v___f_4681_; lean_object* v___f_4682_; lean_object* v___x_4683_; uint8_t v___x_4684_; lean_object* v_val_4686_; lean_object* v___x_4690_; 
v___f_4681_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4681_, 0, v_error_4679_);
v___f_4682_ = lean_alloc_closure((void*)(l_Std_Async_Async_ofPromise___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4682_, 0, v___f_4681_);
v___x_4683_ = lean_unsigned_to_nat(0u);
v___x_4684_ = 0;
v___x_4690_ = lean_apply_1(v_task_4678_, lean_box(0));
if (lean_obj_tag(v___x_4690_) == 0)
{
lean_object* v_a_4691_; lean_object* v___x_4693_; uint8_t v_isShared_4694_; uint8_t v_isSharedCheck_4698_; 
v_a_4691_ = lean_ctor_get(v___x_4690_, 0);
v_isSharedCheck_4698_ = !lean_is_exclusive(v___x_4690_);
if (v_isSharedCheck_4698_ == 0)
{
v___x_4693_ = v___x_4690_;
v_isShared_4694_ = v_isSharedCheck_4698_;
goto v_resetjp_4692_;
}
else
{
lean_inc(v_a_4691_);
lean_dec(v___x_4690_);
v___x_4693_ = lean_box(0);
v_isShared_4694_ = v_isSharedCheck_4698_;
goto v_resetjp_4692_;
}
v_resetjp_4692_:
{
lean_object* v___x_4696_; 
if (v_isShared_4694_ == 0)
{
lean_ctor_set_tag(v___x_4693_, 1);
v___x_4696_ = v___x_4693_;
goto v_reusejp_4695_;
}
else
{
lean_object* v_reuseFailAlloc_4697_; 
v_reuseFailAlloc_4697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4697_, 0, v_a_4691_);
v___x_4696_ = v_reuseFailAlloc_4697_;
goto v_reusejp_4695_;
}
v_reusejp_4695_:
{
v_val_4686_ = v___x_4696_;
goto v___jp_4685_;
}
}
}
else
{
lean_object* v_a_4699_; lean_object* v___x_4701_; uint8_t v_isShared_4702_; uint8_t v_isSharedCheck_4706_; 
v_a_4699_ = lean_ctor_get(v___x_4690_, 0);
v_isSharedCheck_4706_ = !lean_is_exclusive(v___x_4690_);
if (v_isSharedCheck_4706_ == 0)
{
v___x_4701_ = v___x_4690_;
v_isShared_4702_ = v_isSharedCheck_4706_;
goto v_resetjp_4700_;
}
else
{
lean_inc(v_a_4699_);
lean_dec(v___x_4690_);
v___x_4701_ = lean_box(0);
v_isShared_4702_ = v_isSharedCheck_4706_;
goto v_resetjp_4700_;
}
v_resetjp_4700_:
{
lean_object* v___x_4704_; 
if (v_isShared_4702_ == 0)
{
lean_ctor_set_tag(v___x_4701_, 0);
v___x_4704_ = v___x_4701_;
goto v_reusejp_4703_;
}
else
{
lean_object* v_reuseFailAlloc_4705_; 
v_reuseFailAlloc_4705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4705_, 0, v_a_4699_);
v___x_4704_ = v_reuseFailAlloc_4705_;
goto v_reusejp_4703_;
}
v_reusejp_4703_:
{
v_val_4686_ = v___x_4704_;
goto v___jp_4685_;
}
}
}
v___jp_4685_:
{
lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; 
v___x_4687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4687_, 0, v_val_4686_);
v___x_4688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4688_, 0, v___x_4687_);
v___x_4689_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4683_, v___x_4684_, v___x_4688_, v___f_4682_);
return v___x_4689_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___boxed(lean_object* v_task_4707_, lean_object* v_error_4708_, lean_object* v_a_4709_){
_start:
{
lean_object* v_res_4710_; 
v_res_4710_ = l_Std_Async_Async_ofPromise___redArg(v_task_4707_, v_error_4708_);
return v_res_4710_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise(lean_object* v_00_u03b1_4711_, lean_object* v_task_4712_, lean_object* v_error_4713_){
_start:
{
lean_object* v___f_4715_; lean_object* v___f_4716_; lean_object* v___x_4717_; uint8_t v___x_4718_; lean_object* v_val_4720_; lean_object* v___x_4724_; 
v___f_4715_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4715_, 0, v_error_4713_);
v___f_4716_ = lean_alloc_closure((void*)(l_Std_Async_Async_ofPromise___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4716_, 0, v___f_4715_);
v___x_4717_ = lean_unsigned_to_nat(0u);
v___x_4718_ = 0;
v___x_4724_ = lean_apply_1(v_task_4712_, lean_box(0));
if (lean_obj_tag(v___x_4724_) == 0)
{
lean_object* v_a_4725_; lean_object* v___x_4727_; uint8_t v_isShared_4728_; uint8_t v_isSharedCheck_4732_; 
v_a_4725_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4727_ = v___x_4724_;
v_isShared_4728_ = v_isSharedCheck_4732_;
goto v_resetjp_4726_;
}
else
{
lean_inc(v_a_4725_);
lean_dec(v___x_4724_);
v___x_4727_ = lean_box(0);
v_isShared_4728_ = v_isSharedCheck_4732_;
goto v_resetjp_4726_;
}
v_resetjp_4726_:
{
lean_object* v___x_4730_; 
if (v_isShared_4728_ == 0)
{
lean_ctor_set_tag(v___x_4727_, 1);
v___x_4730_ = v___x_4727_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v_a_4725_);
v___x_4730_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
v_val_4720_ = v___x_4730_;
goto v___jp_4719_;
}
}
}
else
{
lean_object* v_a_4733_; lean_object* v___x_4735_; uint8_t v_isShared_4736_; uint8_t v_isSharedCheck_4740_; 
v_a_4733_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4740_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4740_ == 0)
{
v___x_4735_ = v___x_4724_;
v_isShared_4736_ = v_isSharedCheck_4740_;
goto v_resetjp_4734_;
}
else
{
lean_inc(v_a_4733_);
lean_dec(v___x_4724_);
v___x_4735_ = lean_box(0);
v_isShared_4736_ = v_isSharedCheck_4740_;
goto v_resetjp_4734_;
}
v_resetjp_4734_:
{
lean_object* v___x_4738_; 
if (v_isShared_4736_ == 0)
{
lean_ctor_set_tag(v___x_4735_, 0);
v___x_4738_ = v___x_4735_;
goto v_reusejp_4737_;
}
else
{
lean_object* v_reuseFailAlloc_4739_; 
v_reuseFailAlloc_4739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4739_, 0, v_a_4733_);
v___x_4738_ = v_reuseFailAlloc_4739_;
goto v_reusejp_4737_;
}
v_reusejp_4737_:
{
v_val_4720_ = v___x_4738_;
goto v___jp_4719_;
}
}
}
v___jp_4719_:
{
lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; 
v___x_4721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4721_, 0, v_val_4720_);
v___x_4722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4722_, 0, v___x_4721_);
v___x_4723_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4717_, v___x_4718_, v___x_4722_, v___f_4716_);
return v___x_4723_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___boxed(lean_object* v_00_u03b1_4741_, lean_object* v_task_4742_, lean_object* v_error_4743_, lean_object* v_a_4744_){
_start:
{
lean_object* v_res_4745_; 
v_res_4745_ = l_Std_Async_Async_ofPromise(v_00_u03b1_4741_, v_task_4742_, v_error_4743_);
return v_res_4745_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg(lean_object* v_task_4746_){
_start:
{
lean_object* v___x_4748_; 
v___x_4748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4748_, 0, v_task_4746_);
return v___x_4748_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg___boxed(lean_object* v_task_4749_, lean_object* v_a_4750_){
_start:
{
lean_object* v_res_4751_; 
v_res_4751_ = l_Std_Async_Async_ofAsyncTask___redArg(v_task_4749_);
return v_res_4751_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask(lean_object* v_00_u03b1_4752_, lean_object* v_task_4753_){
_start:
{
lean_object* v___x_4755_; 
v___x_4755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4755_, 0, v_task_4753_);
return v___x_4755_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___boxed(lean_object* v_00_u03b1_4756_, lean_object* v_task_4757_, lean_object* v_a_4758_){
_start:
{
lean_object* v_res_4759_; 
v_res_4759_ = l_Std_Async_Async_ofAsyncTask(v_00_u03b1_4756_, v_task_4757_);
return v_res_4759_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__0(lean_object* v_a_4760_){
_start:
{
lean_object* v___x_4761_; 
v___x_4761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4761_, 0, v_a_4760_);
return v___x_4761_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1(lean_object* v___f_4762_, lean_object* v_x_4763_){
_start:
{
if (lean_obj_tag(v_x_4763_) == 0)
{
lean_object* v_a_4765_; lean_object* v___x_4767_; uint8_t v_isShared_4768_; uint8_t v_isSharedCheck_4773_; 
lean_dec_ref(v___f_4762_);
v_a_4765_ = lean_ctor_get(v_x_4763_, 0);
v_isSharedCheck_4773_ = !lean_is_exclusive(v_x_4763_);
if (v_isSharedCheck_4773_ == 0)
{
v___x_4767_ = v_x_4763_;
v_isShared_4768_ = v_isSharedCheck_4773_;
goto v_resetjp_4766_;
}
else
{
lean_inc(v_a_4765_);
lean_dec(v_x_4763_);
v___x_4767_ = lean_box(0);
v_isShared_4768_ = v_isSharedCheck_4773_;
goto v_resetjp_4766_;
}
v_resetjp_4766_:
{
lean_object* v___x_4770_; 
if (v_isShared_4768_ == 0)
{
v___x_4770_ = v___x_4767_;
goto v_reusejp_4769_;
}
else
{
lean_object* v_reuseFailAlloc_4772_; 
v_reuseFailAlloc_4772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4772_, 0, v_a_4765_);
v___x_4770_ = v_reuseFailAlloc_4772_;
goto v_reusejp_4769_;
}
v_reusejp_4769_:
{
lean_object* v___x_4771_; 
v___x_4771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4771_, 0, v___x_4770_);
return v___x_4771_;
}
}
}
else
{
lean_object* v_a_4774_; 
v_a_4774_ = lean_ctor_get(v_x_4763_, 0);
lean_inc(v_a_4774_);
lean_dec_ref_known(v_x_4763_, 1);
if (lean_obj_tag(v_a_4774_) == 0)
{
lean_object* v_a_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4783_; 
lean_dec_ref(v___f_4762_);
v_a_4775_ = lean_ctor_get(v_a_4774_, 0);
v_isSharedCheck_4783_ = !lean_is_exclusive(v_a_4774_);
if (v_isSharedCheck_4783_ == 0)
{
v___x_4777_ = v_a_4774_;
v_isShared_4778_ = v_isSharedCheck_4783_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_a_4775_);
lean_dec(v_a_4774_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4783_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
lean_object* v___x_4780_; 
if (v_isShared_4778_ == 0)
{
v___x_4780_ = v___x_4777_;
goto v_reusejp_4779_;
}
else
{
lean_object* v_reuseFailAlloc_4782_; 
v_reuseFailAlloc_4782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4782_, 0, v_a_4775_);
v___x_4780_ = v_reuseFailAlloc_4782_;
goto v_reusejp_4779_;
}
v_reusejp_4779_:
{
lean_object* v___x_4781_; 
v___x_4781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4781_, 0, v___x_4780_);
return v___x_4781_;
}
}
}
else
{
lean_object* v_a_4784_; lean_object* v___x_4785_; uint8_t v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; 
v_a_4784_ = lean_ctor_get(v_a_4774_, 0);
lean_inc(v_a_4784_);
lean_dec_ref_known(v_a_4774_, 1);
v___x_4785_ = lean_unsigned_to_nat(0u);
v___x_4786_ = 0;
v___x_4787_ = lean_task_map(v___f_4762_, v_a_4784_, v___x_4785_, v___x_4786_);
v___x_4788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4788_, 0, v___x_4787_);
return v___x_4788_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1___boxed(lean_object* v___f_4789_, lean_object* v_x_4790_, lean_object* v___y_4791_){
_start:
{
lean_object* v_res_4792_; 
v_res_4792_ = l_Std_Async_Async_ofIOTask___redArg___lam__1(v___f_4789_, v_x_4790_);
return v_res_4792_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg(lean_object* v_task_4796_){
_start:
{
lean_object* v___f_4798_; lean_object* v___x_4799_; uint8_t v___x_4800_; lean_object* v_val_4802_; lean_object* v___x_4806_; 
v___f_4798_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__1));
v___x_4799_ = lean_unsigned_to_nat(0u);
v___x_4800_ = 0;
v___x_4806_ = lean_apply_1(v_task_4796_, lean_box(0));
if (lean_obj_tag(v___x_4806_) == 0)
{
lean_object* v_a_4807_; lean_object* v___x_4809_; uint8_t v_isShared_4810_; uint8_t v_isSharedCheck_4814_; 
v_a_4807_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4814_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4814_ == 0)
{
v___x_4809_ = v___x_4806_;
v_isShared_4810_ = v_isSharedCheck_4814_;
goto v_resetjp_4808_;
}
else
{
lean_inc(v_a_4807_);
lean_dec(v___x_4806_);
v___x_4809_ = lean_box(0);
v_isShared_4810_ = v_isSharedCheck_4814_;
goto v_resetjp_4808_;
}
v_resetjp_4808_:
{
lean_object* v___x_4812_; 
if (v_isShared_4810_ == 0)
{
lean_ctor_set_tag(v___x_4809_, 1);
v___x_4812_ = v___x_4809_;
goto v_reusejp_4811_;
}
else
{
lean_object* v_reuseFailAlloc_4813_; 
v_reuseFailAlloc_4813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4813_, 0, v_a_4807_);
v___x_4812_ = v_reuseFailAlloc_4813_;
goto v_reusejp_4811_;
}
v_reusejp_4811_:
{
v_val_4802_ = v___x_4812_;
goto v___jp_4801_;
}
}
}
else
{
lean_object* v_a_4815_; lean_object* v___x_4817_; uint8_t v_isShared_4818_; uint8_t v_isSharedCheck_4822_; 
v_a_4815_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4822_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4822_ == 0)
{
v___x_4817_ = v___x_4806_;
v_isShared_4818_ = v_isSharedCheck_4822_;
goto v_resetjp_4816_;
}
else
{
lean_inc(v_a_4815_);
lean_dec(v___x_4806_);
v___x_4817_ = lean_box(0);
v_isShared_4818_ = v_isSharedCheck_4822_;
goto v_resetjp_4816_;
}
v_resetjp_4816_:
{
lean_object* v___x_4820_; 
if (v_isShared_4818_ == 0)
{
lean_ctor_set_tag(v___x_4817_, 0);
v___x_4820_ = v___x_4817_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4821_; 
v_reuseFailAlloc_4821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4821_, 0, v_a_4815_);
v___x_4820_ = v_reuseFailAlloc_4821_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
v_val_4802_ = v___x_4820_;
goto v___jp_4801_;
}
}
}
v___jp_4801_:
{
lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; 
v___x_4803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4803_, 0, v_val_4802_);
v___x_4804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4804_, 0, v___x_4803_);
v___x_4805_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4799_, v___x_4800_, v___x_4804_, v___f_4798_);
return v___x_4805_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___boxed(lean_object* v_task_4823_, lean_object* v_a_4824_){
_start:
{
lean_object* v_res_4825_; 
v_res_4825_ = l_Std_Async_Async_ofIOTask___redArg(v_task_4823_);
return v_res_4825_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask(lean_object* v_00_u03b1_4826_, lean_object* v_task_4827_){
_start:
{
lean_object* v___f_4829_; lean_object* v___x_4830_; uint8_t v___x_4831_; lean_object* v_val_4833_; lean_object* v___x_4837_; 
v___f_4829_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__1));
v___x_4830_ = lean_unsigned_to_nat(0u);
v___x_4831_ = 0;
v___x_4837_ = lean_apply_1(v_task_4827_, lean_box(0));
if (lean_obj_tag(v___x_4837_) == 0)
{
lean_object* v_a_4838_; lean_object* v___x_4840_; uint8_t v_isShared_4841_; uint8_t v_isSharedCheck_4845_; 
v_a_4838_ = lean_ctor_get(v___x_4837_, 0);
v_isSharedCheck_4845_ = !lean_is_exclusive(v___x_4837_);
if (v_isSharedCheck_4845_ == 0)
{
v___x_4840_ = v___x_4837_;
v_isShared_4841_ = v_isSharedCheck_4845_;
goto v_resetjp_4839_;
}
else
{
lean_inc(v_a_4838_);
lean_dec(v___x_4837_);
v___x_4840_ = lean_box(0);
v_isShared_4841_ = v_isSharedCheck_4845_;
goto v_resetjp_4839_;
}
v_resetjp_4839_:
{
lean_object* v___x_4843_; 
if (v_isShared_4841_ == 0)
{
lean_ctor_set_tag(v___x_4840_, 1);
v___x_4843_ = v___x_4840_;
goto v_reusejp_4842_;
}
else
{
lean_object* v_reuseFailAlloc_4844_; 
v_reuseFailAlloc_4844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4844_, 0, v_a_4838_);
v___x_4843_ = v_reuseFailAlloc_4844_;
goto v_reusejp_4842_;
}
v_reusejp_4842_:
{
v_val_4833_ = v___x_4843_;
goto v___jp_4832_;
}
}
}
else
{
lean_object* v_a_4846_; lean_object* v___x_4848_; uint8_t v_isShared_4849_; uint8_t v_isSharedCheck_4853_; 
v_a_4846_ = lean_ctor_get(v___x_4837_, 0);
v_isSharedCheck_4853_ = !lean_is_exclusive(v___x_4837_);
if (v_isSharedCheck_4853_ == 0)
{
v___x_4848_ = v___x_4837_;
v_isShared_4849_ = v_isSharedCheck_4853_;
goto v_resetjp_4847_;
}
else
{
lean_inc(v_a_4846_);
lean_dec(v___x_4837_);
v___x_4848_ = lean_box(0);
v_isShared_4849_ = v_isSharedCheck_4853_;
goto v_resetjp_4847_;
}
v_resetjp_4847_:
{
lean_object* v___x_4851_; 
if (v_isShared_4849_ == 0)
{
lean_ctor_set_tag(v___x_4848_, 0);
v___x_4851_ = v___x_4848_;
goto v_reusejp_4850_;
}
else
{
lean_object* v_reuseFailAlloc_4852_; 
v_reuseFailAlloc_4852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4852_, 0, v_a_4846_);
v___x_4851_ = v_reuseFailAlloc_4852_;
goto v_reusejp_4850_;
}
v_reusejp_4850_:
{
v_val_4833_ = v___x_4851_;
goto v___jp_4832_;
}
}
}
v___jp_4832_:
{
lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; 
v___x_4834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4834_, 0, v_val_4833_);
v___x_4835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4835_, 0, v___x_4834_);
v___x_4836_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4830_, v___x_4831_, v___x_4835_, v___f_4829_);
return v___x_4836_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___boxed(lean_object* v_00_u03b1_4854_, lean_object* v_task_4855_, lean_object* v_a_4856_){
_start:
{
lean_object* v_res_4857_; 
v_res_4857_ = l_Std_Async_Async_ofIOTask(v_00_u03b1_4854_, v_task_4855_);
return v_res_4857_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg(lean_object* v_except_4858_){
_start:
{
lean_object* v___x_4860_; 
v___x_4860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4860_, 0, v_except_4858_);
return v___x_4860_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg___boxed(lean_object* v_except_4861_, lean_object* v_a_4862_){
_start:
{
lean_object* v_res_4863_; 
v_res_4863_ = l_Std_Async_Async_ofExcept___redArg(v_except_4861_);
return v_res_4863_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept(lean_object* v_00_u03b1_4864_, lean_object* v_except_4865_){
_start:
{
lean_object* v___x_4867_; 
v___x_4867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4867_, 0, v_except_4865_);
return v___x_4867_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___boxed(lean_object* v_00_u03b1_4868_, lean_object* v_except_4869_, lean_object* v_a_4870_){
_start:
{
lean_object* v_res_4871_; 
v_res_4871_ = l_Std_Async_Async_ofExcept(v_00_u03b1_4868_, v_except_4869_);
return v_res_4871_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg(lean_object* v_task_4872_){
_start:
{
lean_object* v___f_4874_; lean_object* v___x_4875_; uint8_t v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; 
v___f_4874_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4875_ = lean_unsigned_to_nat(0u);
v___x_4876_ = 0;
v___x_4877_ = lean_task_map(v___f_4874_, v_task_4872_, v___x_4875_, v___x_4876_);
v___x_4878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4878_, 0, v___x_4877_);
return v___x_4878_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg___boxed(lean_object* v_task_4879_, lean_object* v_a_4880_){
_start:
{
lean_object* v_res_4881_; 
v_res_4881_ = l_Std_Async_Async_ofTask___redArg(v_task_4879_);
return v_res_4881_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask(lean_object* v_00_u03b1_4882_, lean_object* v_task_4883_){
_start:
{
lean_object* v___f_4885_; lean_object* v___x_4886_; uint8_t v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; 
v___f_4885_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4886_ = lean_unsigned_to_nat(0u);
v___x_4887_ = 0;
v___x_4888_ = lean_task_map(v___f_4885_, v_task_4883_, v___x_4886_, v___x_4887_);
v___x_4889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4889_, 0, v___x_4888_);
return v___x_4889_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___boxed(lean_object* v_00_u03b1_4890_, lean_object* v_task_4891_, lean_object* v_a_4892_){
_start:
{
lean_object* v_res_4893_; 
v_res_4893_ = l_Std_Async_Async_ofTask(v_00_u03b1_4890_, v_task_4891_);
return v_res_4893_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg(lean_object* v_task_4894_, lean_object* v_error_4895_){
_start:
{
lean_object* v___f_4897_; lean_object* v___x_4898_; 
v___f_4897_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4897_, 0, v_error_4895_);
v___x_4898_ = lean_apply_1(v_task_4894_, lean_box(0));
if (lean_obj_tag(v___x_4898_) == 0)
{
lean_object* v_a_4899_; lean_object* v___x_4901_; uint8_t v_isShared_4902_; uint8_t v_isSharedCheck_4910_; 
v_a_4899_ = lean_ctor_get(v___x_4898_, 0);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4898_);
if (v_isSharedCheck_4910_ == 0)
{
v___x_4901_ = v___x_4898_;
v_isShared_4902_ = v_isSharedCheck_4910_;
goto v_resetjp_4900_;
}
else
{
lean_inc(v_a_4899_);
lean_dec(v___x_4898_);
v___x_4901_ = lean_box(0);
v_isShared_4902_ = v_isSharedCheck_4910_;
goto v_resetjp_4900_;
}
v_resetjp_4900_:
{
lean_object* v___x_4903_; lean_object* v___x_4904_; uint8_t v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4908_; 
v___x_4903_ = lean_io_promise_result_opt(v_a_4899_);
lean_dec(v_a_4899_);
v___x_4904_ = lean_unsigned_to_nat(0u);
v___x_4905_ = 0;
v___x_4906_ = lean_task_map(v___f_4897_, v___x_4903_, v___x_4904_, v___x_4905_);
if (v_isShared_4902_ == 0)
{
lean_ctor_set_tag(v___x_4901_, 1);
lean_ctor_set(v___x_4901_, 0, v___x_4906_);
v___x_4908_ = v___x_4901_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v___x_4906_);
v___x_4908_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4907_;
}
v_reusejp_4907_:
{
return v___x_4908_;
}
}
}
else
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4919_; 
lean_dec_ref(v___f_4897_);
v_a_4911_ = lean_ctor_get(v___x_4898_, 0);
v_isSharedCheck_4919_ = !lean_is_exclusive(v___x_4898_);
if (v_isSharedCheck_4919_ == 0)
{
v___x_4913_ = v___x_4898_;
v_isShared_4914_ = v_isSharedCheck_4919_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4898_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4919_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4916_; 
if (v_isShared_4914_ == 0)
{
lean_ctor_set_tag(v___x_4913_, 0);
v___x_4916_ = v___x_4913_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4918_; 
v_reuseFailAlloc_4918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4918_, 0, v_a_4911_);
v___x_4916_ = v_reuseFailAlloc_4918_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
lean_object* v___x_4917_; 
v___x_4917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4917_, 0, v___x_4916_);
return v___x_4917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg___boxed(lean_object* v_task_4920_, lean_object* v_error_4921_, lean_object* v_a_4922_){
_start:
{
lean_object* v_res_4923_; 
v_res_4923_ = l_Std_Async_Async_ofPurePromise___redArg(v_task_4920_, v_error_4921_);
return v_res_4923_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise(lean_object* v_00_u03b1_4924_, lean_object* v_task_4925_, lean_object* v_error_4926_){
_start:
{
lean_object* v___f_4928_; lean_object* v___x_4929_; 
v___f_4928_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4928_, 0, v_error_4926_);
v___x_4929_ = lean_apply_1(v_task_4925_, lean_box(0));
if (lean_obj_tag(v___x_4929_) == 0)
{
lean_object* v_a_4930_; lean_object* v___x_4932_; uint8_t v_isShared_4933_; uint8_t v_isSharedCheck_4941_; 
v_a_4930_ = lean_ctor_get(v___x_4929_, 0);
v_isSharedCheck_4941_ = !lean_is_exclusive(v___x_4929_);
if (v_isSharedCheck_4941_ == 0)
{
v___x_4932_ = v___x_4929_;
v_isShared_4933_ = v_isSharedCheck_4941_;
goto v_resetjp_4931_;
}
else
{
lean_inc(v_a_4930_);
lean_dec(v___x_4929_);
v___x_4932_ = lean_box(0);
v_isShared_4933_ = v_isSharedCheck_4941_;
goto v_resetjp_4931_;
}
v_resetjp_4931_:
{
lean_object* v___x_4934_; lean_object* v___x_4935_; uint8_t v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4939_; 
v___x_4934_ = lean_io_promise_result_opt(v_a_4930_);
lean_dec(v_a_4930_);
v___x_4935_ = lean_unsigned_to_nat(0u);
v___x_4936_ = 0;
v___x_4937_ = lean_task_map(v___f_4928_, v___x_4934_, v___x_4935_, v___x_4936_);
if (v_isShared_4933_ == 0)
{
lean_ctor_set_tag(v___x_4932_, 1);
lean_ctor_set(v___x_4932_, 0, v___x_4937_);
v___x_4939_ = v___x_4932_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4940_; 
v_reuseFailAlloc_4940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4940_, 0, v___x_4937_);
v___x_4939_ = v_reuseFailAlloc_4940_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
return v___x_4939_;
}
}
}
else
{
lean_object* v_a_4942_; lean_object* v___x_4944_; uint8_t v_isShared_4945_; uint8_t v_isSharedCheck_4950_; 
lean_dec_ref(v___f_4928_);
v_a_4942_ = lean_ctor_get(v___x_4929_, 0);
v_isSharedCheck_4950_ = !lean_is_exclusive(v___x_4929_);
if (v_isSharedCheck_4950_ == 0)
{
v___x_4944_ = v___x_4929_;
v_isShared_4945_ = v_isSharedCheck_4950_;
goto v_resetjp_4943_;
}
else
{
lean_inc(v_a_4942_);
lean_dec(v___x_4929_);
v___x_4944_ = lean_box(0);
v_isShared_4945_ = v_isSharedCheck_4950_;
goto v_resetjp_4943_;
}
v_resetjp_4943_:
{
lean_object* v___x_4947_; 
if (v_isShared_4945_ == 0)
{
lean_ctor_set_tag(v___x_4944_, 0);
v___x_4947_ = v___x_4944_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v_a_4942_);
v___x_4947_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
lean_object* v___x_4948_; 
v___x_4948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4948_, 0, v___x_4947_);
return v___x_4948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___boxed(lean_object* v_00_u03b1_4951_, lean_object* v_task_4952_, lean_object* v_error_4953_, lean_object* v_a_4954_){
_start:
{
lean_object* v_res_4955_; 
v_res_4955_ = l_Std_Async_Async_ofPurePromise(v_00_u03b1_4951_, v_task_4952_, v_error_4953_);
return v_res_4955_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___redArg(lean_object* v_t_4957_){
_start:
{
lean_object* v___x_4959_; 
v___x_4959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4959_, 0, v_t_4957_);
return v___x_4959_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___redArg___boxed(lean_object* v_t_4960_, lean_object* v_a_4961_){
_start:
{
lean_object* v_res_4962_; 
v_res_4962_ = l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___redArg(v_t_4960_);
return v_res_4962_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1(lean_object* v_00_u03b1_4963_, lean_object* v_t_4964_){
_start:
{
lean_object* v___x_4966_; 
v___x_4966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4966_, 0, v_t_4964_);
return v___x_4966_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___boxed(lean_object* v_00_u03b1_4967_, lean_object* v_t_4968_, lean_object* v_a_4969_){
_start:
{
lean_object* v_res_4970_; 
v_res_4970_ = l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1(v_00_u03b1_4967_, v_t_4968_);
return v_res_4970_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___redArg(lean_object* v_t_4973_){
_start:
{
lean_object* v___f_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; uint8_t v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; 
v___f_4975_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4976_ = l_IO_Promise_result_x21___redArg(v_t_4973_);
v___x_4977_ = lean_unsigned_to_nat(0u);
v___x_4978_ = 0;
v___x_4979_ = lean_task_map(v___f_4975_, v___x_4976_, v___x_4977_, v___x_4978_);
v___x_4980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4980_, 0, v___x_4979_);
return v___x_4980_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___redArg___boxed(lean_object* v_t_4981_, lean_object* v_a_4982_){
_start:
{
lean_object* v_res_4983_; 
v_res_4983_ = l_Std_Async_Async_instMonadAwaitPromise___aux__1___redArg(v_t_4981_);
lean_dec(v_t_4981_);
return v_res_4983_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1(lean_object* v_00_u03b1_4984_, lean_object* v_t_4985_){
_start:
{
lean_object* v___f_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; uint8_t v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; 
v___f_4987_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4988_ = l_IO_Promise_result_x21___redArg(v_t_4985_);
v___x_4989_ = lean_unsigned_to_nat(0u);
v___x_4990_ = 0;
v___x_4991_ = lean_task_map(v___f_4987_, v___x_4988_, v___x_4989_, v___x_4990_);
v___x_4992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4991_);
return v___x_4992_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___boxed(lean_object* v_00_u03b1_4993_, lean_object* v_t_4994_, lean_object* v_a_4995_){
_start:
{
lean_object* v_res_4996_; 
v_res_4996_ = l_Std_Async_Async_instMonadAwaitPromise___aux__1(v_00_u03b1_4993_, v_t_4994_);
lean_dec(v_t_4994_);
return v_res_4996_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1(lean_object* v_a_4999_, lean_object* v_x_5000_){
_start:
{
if (lean_obj_tag(v_x_5000_) == 0)
{
lean_object* v_a_5002_; lean_object* v___x_5004_; uint8_t v_isShared_5005_; uint8_t v_isSharedCheck_5010_; 
lean_dec(v_a_4999_);
v_a_5002_ = lean_ctor_get(v_x_5000_, 0);
v_isSharedCheck_5010_ = !lean_is_exclusive(v_x_5000_);
if (v_isSharedCheck_5010_ == 0)
{
v___x_5004_ = v_x_5000_;
v_isShared_5005_ = v_isSharedCheck_5010_;
goto v_resetjp_5003_;
}
else
{
lean_inc(v_a_5002_);
lean_dec(v_x_5000_);
v___x_5004_ = lean_box(0);
v_isShared_5005_ = v_isSharedCheck_5010_;
goto v_resetjp_5003_;
}
v_resetjp_5003_:
{
lean_object* v___x_5007_; 
if (v_isShared_5005_ == 0)
{
v___x_5007_ = v___x_5004_;
goto v_reusejp_5006_;
}
else
{
lean_object* v_reuseFailAlloc_5009_; 
v_reuseFailAlloc_5009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5009_, 0, v_a_5002_);
v___x_5007_ = v_reuseFailAlloc_5009_;
goto v_reusejp_5006_;
}
v_reusejp_5006_:
{
lean_object* v___x_5008_; 
v___x_5008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5008_, 0, v___x_5007_);
return v___x_5008_;
}
}
}
else
{
lean_object* v_a_5011_; lean_object* v___x_5013_; uint8_t v_isShared_5014_; uint8_t v_isSharedCheck_5020_; 
v_a_5011_ = lean_ctor_get(v_x_5000_, 0);
v_isSharedCheck_5020_ = !lean_is_exclusive(v_x_5000_);
if (v_isSharedCheck_5020_ == 0)
{
v___x_5013_ = v_x_5000_;
v_isShared_5014_ = v_isSharedCheck_5020_;
goto v_resetjp_5012_;
}
else
{
lean_inc(v_a_5011_);
lean_dec(v_x_5000_);
v___x_5013_ = lean_box(0);
v_isShared_5014_ = v_isSharedCheck_5020_;
goto v_resetjp_5012_;
}
v_resetjp_5012_:
{
lean_object* v___x_5015_; lean_object* v___x_5017_; 
v___x_5015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5015_, 0, v_a_4999_);
lean_ctor_set(v___x_5015_, 1, v_a_5011_);
if (v_isShared_5014_ == 0)
{
lean_ctor_set(v___x_5013_, 0, v___x_5015_);
v___x_5017_ = v___x_5013_;
goto v_reusejp_5016_;
}
else
{
lean_object* v_reuseFailAlloc_5019_; 
v_reuseFailAlloc_5019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5019_, 0, v___x_5015_);
v___x_5017_ = v_reuseFailAlloc_5019_;
goto v_reusejp_5016_;
}
v_reusejp_5016_:
{
lean_object* v___x_5018_; 
v___x_5018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5018_, 0, v___x_5017_);
return v___x_5018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1___boxed(lean_object* v_a_5021_, lean_object* v_x_5022_, lean_object* v___y_5023_){
_start:
{
lean_object* v_res_5024_; 
v_res_5024_ = l_Std_Async_Async_concurrently___redArg___lam__1(v_a_5021_, v_x_5022_);
return v_res_5024_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0(lean_object* v_a_5025_, lean_object* v_x_5026_){
_start:
{
if (lean_obj_tag(v_x_5026_) == 0)
{
lean_object* v_a_5028_; lean_object* v___x_5030_; uint8_t v_isShared_5031_; uint8_t v_isSharedCheck_5036_; 
lean_dec_ref(v_a_5025_);
v_a_5028_ = lean_ctor_get(v_x_5026_, 0);
v_isSharedCheck_5036_ = !lean_is_exclusive(v_x_5026_);
if (v_isSharedCheck_5036_ == 0)
{
v___x_5030_ = v_x_5026_;
v_isShared_5031_ = v_isSharedCheck_5036_;
goto v_resetjp_5029_;
}
else
{
lean_inc(v_a_5028_);
lean_dec(v_x_5026_);
v___x_5030_ = lean_box(0);
v_isShared_5031_ = v_isSharedCheck_5036_;
goto v_resetjp_5029_;
}
v_resetjp_5029_:
{
lean_object* v___x_5033_; 
if (v_isShared_5031_ == 0)
{
v___x_5033_ = v___x_5030_;
goto v_reusejp_5032_;
}
else
{
lean_object* v_reuseFailAlloc_5035_; 
v_reuseFailAlloc_5035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5035_, 0, v_a_5028_);
v___x_5033_ = v_reuseFailAlloc_5035_;
goto v_reusejp_5032_;
}
v_reusejp_5032_:
{
lean_object* v___x_5034_; 
v___x_5034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5034_, 0, v___x_5033_);
return v___x_5034_;
}
}
}
else
{
lean_object* v_a_5037_; lean_object* v___f_5038_; lean_object* v___x_5039_; uint8_t v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; 
v_a_5037_ = lean_ctor_get(v_x_5026_, 0);
lean_inc(v_a_5037_);
lean_dec_ref_known(v_x_5026_, 1);
v___f_5038_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5038_, 0, v_a_5037_);
v___x_5039_ = lean_unsigned_to_nat(0u);
v___x_5040_ = 0;
v___x_5041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5041_, 0, v_a_5025_);
v___x_5042_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5039_, v___x_5040_, v___x_5041_, v___f_5038_);
return v___x_5042_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0___boxed(lean_object* v_a_5043_, lean_object* v_x_5044_, lean_object* v___y_5045_){
_start:
{
lean_object* v_res_5046_; 
v_res_5046_ = l_Std_Async_Async_concurrently___redArg___lam__0(v_a_5043_, v_x_5044_);
return v_res_5046_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2(lean_object* v_a_5047_, lean_object* v_x_5048_){
_start:
{
if (lean_obj_tag(v_x_5048_) == 0)
{
lean_object* v_a_5050_; lean_object* v___x_5052_; uint8_t v_isShared_5053_; uint8_t v_isSharedCheck_5058_; 
lean_dec_ref(v_a_5047_);
v_a_5050_ = lean_ctor_get(v_x_5048_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v_x_5048_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5052_ = v_x_5048_;
v_isShared_5053_ = v_isSharedCheck_5058_;
goto v_resetjp_5051_;
}
else
{
lean_inc(v_a_5050_);
lean_dec(v_x_5048_);
v___x_5052_ = lean_box(0);
v_isShared_5053_ = v_isSharedCheck_5058_;
goto v_resetjp_5051_;
}
v_resetjp_5051_:
{
lean_object* v___x_5055_; 
if (v_isShared_5053_ == 0)
{
v___x_5055_ = v___x_5052_;
goto v_reusejp_5054_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v_a_5050_);
v___x_5055_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5054_;
}
v_reusejp_5054_:
{
lean_object* v___x_5056_; 
v___x_5056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5056_, 0, v___x_5055_);
return v___x_5056_;
}
}
}
else
{
lean_object* v_a_5059_; lean_object* v___f_5060_; lean_object* v___x_5061_; uint8_t v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; 
v_a_5059_ = lean_ctor_get(v_x_5048_, 0);
lean_inc(v_a_5059_);
lean_dec_ref_known(v_x_5048_, 1);
v___f_5060_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5060_, 0, v_a_5059_);
v___x_5061_ = lean_unsigned_to_nat(0u);
v___x_5062_ = 0;
v___x_5063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5063_, 0, v_a_5047_);
v___x_5064_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5061_, v___x_5062_, v___x_5063_, v___f_5060_);
return v___x_5064_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2___boxed(lean_object* v_a_5065_, lean_object* v_x_5066_, lean_object* v___y_5067_){
_start:
{
lean_object* v_res_5068_; 
v_res_5068_ = l_Std_Async_Async_concurrently___redArg___lam__2(v_a_5065_, v_x_5066_);
return v_res_5068_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3(lean_object* v_y_5069_, lean_object* v_prio_5070_, lean_object* v___f_5071_, lean_object* v_x_5072_){
_start:
{
if (lean_obj_tag(v_x_5072_) == 0)
{
lean_object* v_a_5074_; lean_object* v___x_5076_; uint8_t v_isShared_5077_; uint8_t v_isSharedCheck_5082_; 
lean_dec_ref(v___f_5071_);
lean_dec(v_prio_5070_);
lean_dec_ref(v_y_5069_);
v_a_5074_ = lean_ctor_get(v_x_5072_, 0);
v_isSharedCheck_5082_ = !lean_is_exclusive(v_x_5072_);
if (v_isSharedCheck_5082_ == 0)
{
v___x_5076_ = v_x_5072_;
v_isShared_5077_ = v_isSharedCheck_5082_;
goto v_resetjp_5075_;
}
else
{
lean_inc(v_a_5074_);
lean_dec(v_x_5072_);
v___x_5076_ = lean_box(0);
v_isShared_5077_ = v_isSharedCheck_5082_;
goto v_resetjp_5075_;
}
v_resetjp_5075_:
{
lean_object* v___x_5079_; 
if (v_isShared_5077_ == 0)
{
v___x_5079_ = v___x_5076_;
goto v_reusejp_5078_;
}
else
{
lean_object* v_reuseFailAlloc_5081_; 
v_reuseFailAlloc_5081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5081_, 0, v_a_5074_);
v___x_5079_ = v_reuseFailAlloc_5081_;
goto v_reusejp_5078_;
}
v_reusejp_5078_:
{
lean_object* v___x_5080_; 
v___x_5080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5080_, 0, v___x_5079_);
return v___x_5080_;
}
}
}
else
{
lean_object* v_a_5083_; lean_object* v___x_5085_; uint8_t v_isShared_5086_; uint8_t v_isSharedCheck_5099_; 
v_a_5083_ = lean_ctor_get(v_x_5072_, 0);
v_isSharedCheck_5099_ = !lean_is_exclusive(v_x_5072_);
if (v_isSharedCheck_5099_ == 0)
{
v___x_5085_ = v_x_5072_;
v_isShared_5086_ = v_isSharedCheck_5099_;
goto v_resetjp_5084_;
}
else
{
lean_inc(v_a_5083_);
lean_dec(v_x_5072_);
v___x_5085_ = lean_box(0);
v_isShared_5086_ = v_isSharedCheck_5099_;
goto v_resetjp_5084_;
}
v_resetjp_5084_:
{
lean_object* v___f_5087_; lean_object* v___x_5088_; uint8_t v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; uint8_t v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5095_; 
v___f_5087_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5087_, 0, v_a_5083_);
v___x_5088_ = lean_unsigned_to_nat(0u);
v___x_5089_ = 0;
v___x_5090_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5090_, 0, lean_box(0));
lean_closure_set(v___x_5090_, 1, v_y_5069_);
v___x_5091_ = lean_io_as_task(v___x_5090_, v_prio_5070_);
v___x_5092_ = 1;
v___x_5093_ = lean_task_bind(v___x_5091_, v___f_5071_, v___x_5088_, v___x_5092_);
if (v_isShared_5086_ == 0)
{
lean_ctor_set(v___x_5085_, 0, v___x_5093_);
v___x_5095_ = v___x_5085_;
goto v_reusejp_5094_;
}
else
{
lean_object* v_reuseFailAlloc_5098_; 
v_reuseFailAlloc_5098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5098_, 0, v___x_5093_);
v___x_5095_ = v_reuseFailAlloc_5098_;
goto v_reusejp_5094_;
}
v_reusejp_5094_:
{
lean_object* v___x_5096_; lean_object* v___x_5097_; 
v___x_5096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5096_, 0, v___x_5095_);
v___x_5097_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5088_, v___x_5089_, v___x_5096_, v___f_5087_);
return v___x_5097_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3___boxed(lean_object* v_y_5100_, lean_object* v_prio_5101_, lean_object* v___f_5102_, lean_object* v_x_5103_, lean_object* v___y_5104_){
_start:
{
lean_object* v_res_5105_; 
v_res_5105_ = l_Std_Async_Async_concurrently___redArg___lam__3(v_y_5100_, v_prio_5101_, v___f_5102_, v_x_5103_);
return v_res_5105_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg(lean_object* v_x_5106_, lean_object* v_y_5107_, lean_object* v_prio_5108_){
_start:
{
lean_object* v___f_5110_; lean_object* v___f_5111_; lean_object* v___x_5112_; uint8_t v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; uint8_t v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; 
v___f_5110_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
lean_inc(v_prio_5108_);
v___f_5111_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5111_, 0, v_y_5107_);
lean_closure_set(v___f_5111_, 1, v_prio_5108_);
lean_closure_set(v___f_5111_, 2, v___f_5110_);
v___x_5112_ = lean_unsigned_to_nat(0u);
v___x_5113_ = 0;
v___x_5114_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5114_, 0, lean_box(0));
lean_closure_set(v___x_5114_, 1, v_x_5106_);
v___x_5115_ = lean_io_as_task(v___x_5114_, v_prio_5108_);
v___x_5116_ = 1;
v___x_5117_ = lean_task_bind(v___x_5115_, v___f_5110_, v___x_5112_, v___x_5116_);
v___x_5118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5118_, 0, v___x_5117_);
v___x_5119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5119_, 0, v___x_5118_);
v___x_5120_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5112_, v___x_5113_, v___x_5119_, v___f_5111_);
return v___x_5120_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___boxed(lean_object* v_x_5121_, lean_object* v_y_5122_, lean_object* v_prio_5123_, lean_object* v_a_5124_){
_start:
{
lean_object* v_res_5125_; 
v_res_5125_ = l_Std_Async_Async_concurrently___redArg(v_x_5121_, v_y_5122_, v_prio_5123_);
return v_res_5125_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently(lean_object* v_00_u03b1_5126_, lean_object* v_00_u03b2_5127_, lean_object* v_x_5128_, lean_object* v_y_5129_, lean_object* v_prio_5130_){
_start:
{
lean_object* v___f_5132_; lean_object* v___f_5133_; lean_object* v___x_5134_; uint8_t v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; uint8_t v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; 
v___f_5132_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
lean_inc(v_prio_5130_);
v___f_5133_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5133_, 0, v_y_5129_);
lean_closure_set(v___f_5133_, 1, v_prio_5130_);
lean_closure_set(v___f_5133_, 2, v___f_5132_);
v___x_5134_ = lean_unsigned_to_nat(0u);
v___x_5135_ = 0;
v___x_5136_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5136_, 0, lean_box(0));
lean_closure_set(v___x_5136_, 1, v_x_5128_);
v___x_5137_ = lean_io_as_task(v___x_5136_, v_prio_5130_);
v___x_5138_ = 1;
v___x_5139_ = lean_task_bind(v___x_5137_, v___f_5132_, v___x_5134_, v___x_5138_);
v___x_5140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5140_, 0, v___x_5139_);
v___x_5141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5141_, 0, v___x_5140_);
v___x_5142_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5134_, v___x_5135_, v___x_5141_, v___f_5133_);
return v___x_5142_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___boxed(lean_object* v_00_u03b1_5143_, lean_object* v_00_u03b2_5144_, lean_object* v_x_5145_, lean_object* v_y_5146_, lean_object* v_prio_5147_, lean_object* v_a_5148_){
_start:
{
lean_object* v_res_5149_; 
v_res_5149_ = l_Std_Async_Async_concurrently(v_00_u03b1_5143_, v_00_u03b2_5144_, v_x_5145_, v_y_5146_, v_prio_5147_);
return v_res_5149_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1(lean_object* v_x_5150_){
_start:
{
if (lean_obj_tag(v_x_5150_) == 0)
{
lean_object* v_a_5152_; lean_object* v___x_5154_; uint8_t v_isShared_5155_; uint8_t v_isSharedCheck_5160_; 
v_a_5152_ = lean_ctor_get(v_x_5150_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v_x_5150_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5154_ = v_x_5150_;
v_isShared_5155_ = v_isSharedCheck_5160_;
goto v_resetjp_5153_;
}
else
{
lean_inc(v_a_5152_);
lean_dec(v_x_5150_);
v___x_5154_ = lean_box(0);
v_isShared_5155_ = v_isSharedCheck_5160_;
goto v_resetjp_5153_;
}
v_resetjp_5153_:
{
lean_object* v___x_5157_; 
if (v_isShared_5155_ == 0)
{
v___x_5157_ = v___x_5154_;
goto v_reusejp_5156_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v_a_5152_);
v___x_5157_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5156_;
}
v_reusejp_5156_:
{
lean_object* v___x_5158_; 
v___x_5158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5158_, 0, v___x_5157_);
return v___x_5158_;
}
}
}
else
{
lean_object* v_a_5161_; lean_object* v___x_5162_; 
v_a_5161_ = lean_ctor_get(v_x_5150_, 0);
lean_inc(v_a_5161_);
lean_dec_ref_known(v_x_5150_, 1);
v___x_5162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5162_, 0, v_a_5161_);
return v___x_5162_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1___boxed(lean_object* v_x_5163_, lean_object* v___y_5164_){
_start:
{
lean_object* v_res_5165_; 
v_res_5165_ = l_Std_Async_Async_race___redArg___lam__1(v_x_5163_);
return v_res_5165_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__0(lean_object* v_a_5166_){
_start:
{
lean_object* v___x_5167_; 
v___x_5167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5167_, 0, v_a_5166_);
return v___x_5167_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3(lean_object* v_a_5168_, lean_object* v_value_5169_){
_start:
{
lean_object* v___x_5171_; 
v___x_5171_ = lean_io_promise_resolve(v_value_5169_, v_a_5168_);
return v___x_5171_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3___boxed(lean_object* v_a_5172_, lean_object* v_value_5173_, lean_object* v___y_5174_){
_start:
{
lean_object* v_res_5175_; 
v_res_5175_ = l_Std_Async_Async_race___redArg___lam__3(v_a_5172_, v_value_5173_);
lean_dec(v_a_5172_);
return v_res_5175_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2(lean_object* v_a_5176_, lean_object* v___f_5177_, lean_object* v___f_5178_, lean_object* v_x_5179_){
_start:
{
if (lean_obj_tag(v_x_5179_) == 0)
{
lean_object* v_a_5181_; lean_object* v___x_5183_; uint8_t v_isShared_5184_; uint8_t v_isSharedCheck_5189_; 
lean_dec_ref(v___f_5178_);
lean_dec_ref(v___f_5177_);
v_a_5181_ = lean_ctor_get(v_x_5179_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v_x_5179_);
if (v_isSharedCheck_5189_ == 0)
{
v___x_5183_ = v_x_5179_;
v_isShared_5184_ = v_isSharedCheck_5189_;
goto v_resetjp_5182_;
}
else
{
lean_inc(v_a_5181_);
lean_dec(v_x_5179_);
v___x_5183_ = lean_box(0);
v_isShared_5184_ = v_isSharedCheck_5189_;
goto v_resetjp_5182_;
}
v_resetjp_5182_:
{
lean_object* v___x_5186_; 
if (v_isShared_5184_ == 0)
{
v___x_5186_ = v___x_5183_;
goto v_reusejp_5185_;
}
else
{
lean_object* v_reuseFailAlloc_5188_; 
v_reuseFailAlloc_5188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5188_, 0, v_a_5181_);
v___x_5186_ = v_reuseFailAlloc_5188_;
goto v_reusejp_5185_;
}
v_reusejp_5185_:
{
lean_object* v___x_5187_; 
v___x_5187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5187_, 0, v___x_5186_);
return v___x_5187_;
}
}
}
else
{
lean_object* v___x_5190_; uint8_t v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; 
lean_dec_ref_known(v_x_5179_, 1);
v___x_5190_ = lean_unsigned_to_nat(0u);
v___x_5191_ = 0;
v___x_5192_ = l_IO_Promise_result_x21___redArg(v_a_5176_);
v___x_5193_ = lean_task_map(v___f_5177_, v___x_5192_, v___x_5190_, v___x_5191_);
v___x_5194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5194_, 0, v___x_5193_);
v___x_5195_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5190_, v___x_5191_, v___x_5194_, v___f_5178_);
return v___x_5195_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2___boxed(lean_object* v_a_5196_, lean_object* v___f_5197_, lean_object* v___f_5198_, lean_object* v_x_5199_, lean_object* v___y_5200_){
_start:
{
lean_object* v_res_5201_; 
v_res_5201_ = l_Std_Async_Async_race___redArg___lam__2(v_a_5196_, v___f_5197_, v___f_5198_, v_x_5199_);
lean_dec(v_a_5196_);
return v_res_5201_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4(lean_object* v_a_5202_, lean_object* v___x_5203_, lean_object* v___x_5204_, uint8_t v___x_5205_, lean_object* v___f_5206_, lean_object* v_x_5207_){
_start:
{
if (lean_obj_tag(v_x_5207_) == 0)
{
lean_object* v_a_5209_; lean_object* v___x_5211_; uint8_t v_isShared_5212_; uint8_t v_isSharedCheck_5217_; 
lean_dec_ref(v___f_5206_);
lean_dec(v___x_5204_);
lean_dec_ref(v___x_5203_);
lean_dec_ref(v_a_5202_);
v_a_5209_ = lean_ctor_get(v_x_5207_, 0);
v_isSharedCheck_5217_ = !lean_is_exclusive(v_x_5207_);
if (v_isSharedCheck_5217_ == 0)
{
v___x_5211_ = v_x_5207_;
v_isShared_5212_ = v_isSharedCheck_5217_;
goto v_resetjp_5210_;
}
else
{
lean_inc(v_a_5209_);
lean_dec(v_x_5207_);
v___x_5211_ = lean_box(0);
v_isShared_5212_ = v_isSharedCheck_5217_;
goto v_resetjp_5210_;
}
v_resetjp_5210_:
{
lean_object* v___x_5214_; 
if (v_isShared_5212_ == 0)
{
v___x_5214_ = v___x_5211_;
goto v_reusejp_5213_;
}
else
{
lean_object* v_reuseFailAlloc_5216_; 
v_reuseFailAlloc_5216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5216_, 0, v_a_5209_);
v___x_5214_ = v_reuseFailAlloc_5216_;
goto v_reusejp_5213_;
}
v_reusejp_5213_:
{
lean_object* v___x_5215_; 
v___x_5215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5215_, 0, v___x_5214_);
return v___x_5215_;
}
}
}
else
{
lean_object* v___x_5219_; uint8_t v_isShared_5220_; uint8_t v_isSharedCheck_5227_; 
v_isSharedCheck_5227_ = !lean_is_exclusive(v_x_5207_);
if (v_isSharedCheck_5227_ == 0)
{
lean_object* v_unused_5228_; 
v_unused_5228_ = lean_ctor_get(v_x_5207_, 0);
lean_dec(v_unused_5228_);
v___x_5219_ = v_x_5207_;
v_isShared_5220_ = v_isSharedCheck_5227_;
goto v_resetjp_5218_;
}
else
{
lean_dec(v_x_5207_);
v___x_5219_ = lean_box(0);
v_isShared_5220_ = v_isSharedCheck_5227_;
goto v_resetjp_5218_;
}
v_resetjp_5218_:
{
lean_object* v___x_5221_; lean_object* v___x_5223_; 
lean_inc(v___x_5204_);
v___x_5221_ = l_BaseIO_chainTask___redArg(v_a_5202_, v___x_5203_, v___x_5204_, v___x_5205_);
if (v_isShared_5220_ == 0)
{
lean_ctor_set(v___x_5219_, 0, v___x_5221_);
v___x_5223_ = v___x_5219_;
goto v_reusejp_5222_;
}
else
{
lean_object* v_reuseFailAlloc_5226_; 
v_reuseFailAlloc_5226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5226_, 0, v___x_5221_);
v___x_5223_ = v_reuseFailAlloc_5226_;
goto v_reusejp_5222_;
}
v_reusejp_5222_:
{
lean_object* v___x_5224_; lean_object* v___x_5225_; 
v___x_5224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5224_, 0, v___x_5223_);
v___x_5225_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5204_, v___x_5205_, v___x_5224_, v___f_5206_);
return v___x_5225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4___boxed(lean_object* v_a_5229_, lean_object* v___x_5230_, lean_object* v___x_5231_, lean_object* v___x_5232_, lean_object* v___f_5233_, lean_object* v_x_5234_, lean_object* v___y_5235_){
_start:
{
uint8_t v___x_1414__boxed_5236_; lean_object* v_res_5237_; 
v___x_1414__boxed_5236_ = lean_unbox(v___x_5232_);
v_res_5237_ = l_Std_Async_Async_race___redArg___lam__4(v_a_5229_, v___x_5230_, v___x_5231_, v___x_1414__boxed_5236_, v___f_5233_, v_x_5234_);
return v_res_5237_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5(lean_object* v___f_5238_, lean_object* v___f_5239_, lean_object* v___f_5240_, lean_object* v_a_5241_, lean_object* v_x_5242_){
_start:
{
if (lean_obj_tag(v_x_5242_) == 0)
{
lean_object* v_a_5244_; lean_object* v___x_5246_; uint8_t v_isShared_5247_; uint8_t v_isSharedCheck_5252_; 
lean_dec_ref(v_a_5241_);
lean_dec_ref(v___f_5240_);
lean_dec_ref(v___f_5239_);
lean_dec(v___f_5238_);
v_a_5244_ = lean_ctor_get(v_x_5242_, 0);
v_isSharedCheck_5252_ = !lean_is_exclusive(v_x_5242_);
if (v_isSharedCheck_5252_ == 0)
{
v___x_5246_ = v_x_5242_;
v_isShared_5247_ = v_isSharedCheck_5252_;
goto v_resetjp_5245_;
}
else
{
lean_inc(v_a_5244_);
lean_dec(v_x_5242_);
v___x_5246_ = lean_box(0);
v_isShared_5247_ = v_isSharedCheck_5252_;
goto v_resetjp_5245_;
}
v_resetjp_5245_:
{
lean_object* v___x_5249_; 
if (v_isShared_5247_ == 0)
{
v___x_5249_ = v___x_5246_;
goto v_reusejp_5248_;
}
else
{
lean_object* v_reuseFailAlloc_5251_; 
v_reuseFailAlloc_5251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5251_, 0, v_a_5244_);
v___x_5249_ = v_reuseFailAlloc_5251_;
goto v_reusejp_5248_;
}
v_reusejp_5248_:
{
lean_object* v___x_5250_; 
v___x_5250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5249_);
return v___x_5250_;
}
}
}
else
{
lean_object* v_a_5253_; lean_object* v___x_5255_; uint8_t v_isShared_5256_; uint8_t v_isSharedCheck_5269_; 
v_a_5253_ = lean_ctor_get(v_x_5242_, 0);
v_isSharedCheck_5269_ = !lean_is_exclusive(v_x_5242_);
if (v_isSharedCheck_5269_ == 0)
{
v___x_5255_ = v_x_5242_;
v_isShared_5256_ = v_isSharedCheck_5269_;
goto v_resetjp_5254_;
}
else
{
lean_inc(v_a_5253_);
lean_dec(v_x_5242_);
v___x_5255_ = lean_box(0);
v_isShared_5256_ = v_isSharedCheck_5269_;
goto v_resetjp_5254_;
}
v_resetjp_5254_:
{
lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; uint8_t v___x_5260_; lean_object* v___x_5261_; lean_object* v___f_5262_; lean_object* v___x_5263_; lean_object* v___x_5265_; 
v___x_5257_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5257_, 0, lean_box(0));
lean_closure_set(v___x_5257_, 1, lean_box(0));
lean_closure_set(v___x_5257_, 2, v___f_5238_);
lean_closure_set(v___x_5257_, 3, lean_box(0));
v___x_5258_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5258_, 0, lean_box(0));
lean_closure_set(v___x_5258_, 1, lean_box(0));
lean_closure_set(v___x_5258_, 2, lean_box(0));
lean_closure_set(v___x_5258_, 3, v___x_5257_);
lean_closure_set(v___x_5258_, 4, v___f_5239_);
v___x_5259_ = lean_unsigned_to_nat(0u);
v___x_5260_ = 0;
v___x_5261_ = lean_box(v___x_5260_);
lean_inc_ref(v___x_5258_);
v___f_5262_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_5262_, 0, v_a_5253_);
lean_closure_set(v___f_5262_, 1, v___x_5258_);
lean_closure_set(v___f_5262_, 2, v___x_5259_);
lean_closure_set(v___f_5262_, 3, v___x_5261_);
lean_closure_set(v___f_5262_, 4, v___f_5240_);
v___x_5263_ = l_BaseIO_chainTask___redArg(v_a_5241_, v___x_5258_, v___x_5259_, v___x_5260_);
if (v_isShared_5256_ == 0)
{
lean_ctor_set(v___x_5255_, 0, v___x_5263_);
v___x_5265_ = v___x_5255_;
goto v_reusejp_5264_;
}
else
{
lean_object* v_reuseFailAlloc_5268_; 
v_reuseFailAlloc_5268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5268_, 0, v___x_5263_);
v___x_5265_ = v_reuseFailAlloc_5268_;
goto v_reusejp_5264_;
}
v_reusejp_5264_:
{
lean_object* v___x_5266_; lean_object* v___x_5267_; 
v___x_5266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5266_, 0, v___x_5265_);
v___x_5267_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5259_, v___x_5260_, v___x_5266_, v___f_5262_);
return v___x_5267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5___boxed(lean_object* v___f_5270_, lean_object* v___f_5271_, lean_object* v___f_5272_, lean_object* v_a_5273_, lean_object* v_x_5274_, lean_object* v___y_5275_){
_start:
{
lean_object* v_res_5276_; 
v_res_5276_ = l_Std_Async_Async_race___redArg___lam__5(v___f_5270_, v___f_5271_, v___f_5272_, v_a_5273_, v_x_5274_);
return v_res_5276_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6(lean_object* v___f_5277_, lean_object* v___f_5278_, lean_object* v___f_5279_, lean_object* v_y_5280_, lean_object* v_prio_5281_, lean_object* v___f_5282_, lean_object* v_x_5283_){
_start:
{
if (lean_obj_tag(v_x_5283_) == 0)
{
lean_object* v_a_5285_; lean_object* v___x_5287_; uint8_t v_isShared_5288_; uint8_t v_isSharedCheck_5293_; 
lean_dec_ref(v___f_5282_);
lean_dec(v_prio_5281_);
lean_dec_ref(v_y_5280_);
lean_dec_ref(v___f_5279_);
lean_dec_ref(v___f_5278_);
lean_dec(v___f_5277_);
v_a_5285_ = lean_ctor_get(v_x_5283_, 0);
v_isSharedCheck_5293_ = !lean_is_exclusive(v_x_5283_);
if (v_isSharedCheck_5293_ == 0)
{
v___x_5287_ = v_x_5283_;
v_isShared_5288_ = v_isSharedCheck_5293_;
goto v_resetjp_5286_;
}
else
{
lean_inc(v_a_5285_);
lean_dec(v_x_5283_);
v___x_5287_ = lean_box(0);
v_isShared_5288_ = v_isSharedCheck_5293_;
goto v_resetjp_5286_;
}
v_resetjp_5286_:
{
lean_object* v___x_5290_; 
if (v_isShared_5288_ == 0)
{
v___x_5290_ = v___x_5287_;
goto v_reusejp_5289_;
}
else
{
lean_object* v_reuseFailAlloc_5292_; 
v_reuseFailAlloc_5292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5292_, 0, v_a_5285_);
v___x_5290_ = v_reuseFailAlloc_5292_;
goto v_reusejp_5289_;
}
v_reusejp_5289_:
{
lean_object* v___x_5291_; 
v___x_5291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5291_, 0, v___x_5290_);
return v___x_5291_;
}
}
}
else
{
lean_object* v_a_5294_; lean_object* v___x_5296_; uint8_t v_isShared_5297_; uint8_t v_isSharedCheck_5310_; 
v_a_5294_ = lean_ctor_get(v_x_5283_, 0);
v_isSharedCheck_5310_ = !lean_is_exclusive(v_x_5283_);
if (v_isSharedCheck_5310_ == 0)
{
v___x_5296_ = v_x_5283_;
v_isShared_5297_ = v_isSharedCheck_5310_;
goto v_resetjp_5295_;
}
else
{
lean_inc(v_a_5294_);
lean_dec(v_x_5283_);
v___x_5296_ = lean_box(0);
v_isShared_5297_ = v_isSharedCheck_5310_;
goto v_resetjp_5295_;
}
v_resetjp_5295_:
{
lean_object* v___f_5298_; lean_object* v___x_5299_; uint8_t v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; uint8_t v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5306_; 
v___f_5298_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_5298_, 0, v___f_5277_);
lean_closure_set(v___f_5298_, 1, v___f_5278_);
lean_closure_set(v___f_5298_, 2, v___f_5279_);
lean_closure_set(v___f_5298_, 3, v_a_5294_);
v___x_5299_ = lean_unsigned_to_nat(0u);
v___x_5300_ = 0;
v___x_5301_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5301_, 0, lean_box(0));
lean_closure_set(v___x_5301_, 1, v_y_5280_);
v___x_5302_ = lean_io_as_task(v___x_5301_, v_prio_5281_);
v___x_5303_ = 1;
v___x_5304_ = lean_task_bind(v___x_5302_, v___f_5282_, v___x_5299_, v___x_5303_);
if (v_isShared_5297_ == 0)
{
lean_ctor_set(v___x_5296_, 0, v___x_5304_);
v___x_5306_ = v___x_5296_;
goto v_reusejp_5305_;
}
else
{
lean_object* v_reuseFailAlloc_5309_; 
v_reuseFailAlloc_5309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5309_, 0, v___x_5304_);
v___x_5306_ = v_reuseFailAlloc_5309_;
goto v_reusejp_5305_;
}
v_reusejp_5305_:
{
lean_object* v___x_5307_; lean_object* v___x_5308_; 
v___x_5307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5307_, 0, v___x_5306_);
v___x_5308_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5299_, v___x_5300_, v___x_5307_, v___f_5298_);
return v___x_5308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6___boxed(lean_object* v___f_5311_, lean_object* v___f_5312_, lean_object* v___f_5313_, lean_object* v_y_5314_, lean_object* v_prio_5315_, lean_object* v___f_5316_, lean_object* v_x_5317_, lean_object* v___y_5318_){
_start:
{
lean_object* v_res_5319_; 
v_res_5319_ = l_Std_Async_Async_race___redArg___lam__6(v___f_5311_, v___f_5312_, v___f_5313_, v_y_5314_, v_prio_5315_, v___f_5316_, v_x_5317_);
return v_res_5319_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7(lean_object* v___f_5320_, lean_object* v___f_5321_, lean_object* v___f_5322_, lean_object* v_y_5323_, lean_object* v_prio_5324_, lean_object* v___f_5325_, lean_object* v_x_5326_, lean_object* v___f_5327_, lean_object* v_x_5328_){
_start:
{
if (lean_obj_tag(v_x_5328_) == 0)
{
lean_object* v_a_5330_; lean_object* v___x_5332_; uint8_t v_isShared_5333_; uint8_t v_isSharedCheck_5338_; 
lean_dec_ref(v___f_5327_);
lean_dec_ref(v_x_5326_);
lean_dec_ref(v___f_5325_);
lean_dec(v_prio_5324_);
lean_dec_ref(v_y_5323_);
lean_dec(v___f_5322_);
lean_dec_ref(v___f_5321_);
lean_dec_ref(v___f_5320_);
v_a_5330_ = lean_ctor_get(v_x_5328_, 0);
v_isSharedCheck_5338_ = !lean_is_exclusive(v_x_5328_);
if (v_isSharedCheck_5338_ == 0)
{
v___x_5332_ = v_x_5328_;
v_isShared_5333_ = v_isSharedCheck_5338_;
goto v_resetjp_5331_;
}
else
{
lean_inc(v_a_5330_);
lean_dec(v_x_5328_);
v___x_5332_ = lean_box(0);
v_isShared_5333_ = v_isSharedCheck_5338_;
goto v_resetjp_5331_;
}
v_resetjp_5331_:
{
lean_object* v___x_5335_; 
if (v_isShared_5333_ == 0)
{
v___x_5335_ = v___x_5332_;
goto v_reusejp_5334_;
}
else
{
lean_object* v_reuseFailAlloc_5337_; 
v_reuseFailAlloc_5337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5337_, 0, v_a_5330_);
v___x_5335_ = v_reuseFailAlloc_5337_;
goto v_reusejp_5334_;
}
v_reusejp_5334_:
{
lean_object* v___x_5336_; 
v___x_5336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5336_, 0, v___x_5335_);
return v___x_5336_;
}
}
}
else
{
lean_object* v_a_5339_; lean_object* v___x_5341_; uint8_t v_isShared_5342_; uint8_t v_isSharedCheck_5357_; 
v_a_5339_ = lean_ctor_get(v_x_5328_, 0);
v_isSharedCheck_5357_ = !lean_is_exclusive(v_x_5328_);
if (v_isSharedCheck_5357_ == 0)
{
v___x_5341_ = v_x_5328_;
v_isShared_5342_ = v_isSharedCheck_5357_;
goto v_resetjp_5340_;
}
else
{
lean_inc(v_a_5339_);
lean_dec(v_x_5328_);
v___x_5341_ = lean_box(0);
v_isShared_5342_ = v_isSharedCheck_5357_;
goto v_resetjp_5340_;
}
v_resetjp_5340_:
{
lean_object* v___f_5343_; lean_object* v___f_5344_; lean_object* v___f_5345_; lean_object* v___x_5346_; uint8_t v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; uint8_t v___x_5350_; lean_object* v___x_5351_; lean_object* v___x_5353_; 
lean_inc(v_a_5339_);
v___f_5343_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5343_, 0, v_a_5339_);
v___f_5344_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5344_, 0, v_a_5339_);
lean_closure_set(v___f_5344_, 1, v___f_5320_);
lean_closure_set(v___f_5344_, 2, v___f_5321_);
lean_inc(v_prio_5324_);
v___f_5345_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_5345_, 0, v___f_5322_);
lean_closure_set(v___f_5345_, 1, v___f_5343_);
lean_closure_set(v___f_5345_, 2, v___f_5344_);
lean_closure_set(v___f_5345_, 3, v_y_5323_);
lean_closure_set(v___f_5345_, 4, v_prio_5324_);
lean_closure_set(v___f_5345_, 5, v___f_5325_);
v___x_5346_ = lean_unsigned_to_nat(0u);
v___x_5347_ = 0;
v___x_5348_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5348_, 0, lean_box(0));
lean_closure_set(v___x_5348_, 1, v_x_5326_);
v___x_5349_ = lean_io_as_task(v___x_5348_, v_prio_5324_);
v___x_5350_ = 1;
v___x_5351_ = lean_task_bind(v___x_5349_, v___f_5327_, v___x_5346_, v___x_5350_);
if (v_isShared_5342_ == 0)
{
lean_ctor_set(v___x_5341_, 0, v___x_5351_);
v___x_5353_ = v___x_5341_;
goto v_reusejp_5352_;
}
else
{
lean_object* v_reuseFailAlloc_5356_; 
v_reuseFailAlloc_5356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5356_, 0, v___x_5351_);
v___x_5353_ = v_reuseFailAlloc_5356_;
goto v_reusejp_5352_;
}
v_reusejp_5352_:
{
lean_object* v___x_5354_; lean_object* v___x_5355_; 
v___x_5354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5354_, 0, v___x_5353_);
v___x_5355_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5346_, v___x_5347_, v___x_5354_, v___f_5345_);
return v___x_5355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7___boxed(lean_object* v___f_5358_, lean_object* v___f_5359_, lean_object* v___f_5360_, lean_object* v_y_5361_, lean_object* v_prio_5362_, lean_object* v___f_5363_, lean_object* v_x_5364_, lean_object* v___f_5365_, lean_object* v_x_5366_, lean_object* v___y_5367_){
_start:
{
lean_object* v_res_5368_; 
v_res_5368_ = l_Std_Async_Async_race___redArg___lam__7(v___f_5358_, v___f_5359_, v___f_5360_, v_y_5361_, v_prio_5362_, v___f_5363_, v_x_5364_, v___f_5365_, v_x_5366_);
return v_res_5368_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg(lean_object* v_x_5371_, lean_object* v_y_5372_, lean_object* v_prio_5373_){
_start:
{
lean_object* v___f_5375_; lean_object* v___f_5376_; lean_object* v___f_5377_; lean_object* v___f_5378_; lean_object* v___f_5379_; lean_object* v___x_5380_; uint8_t v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; 
v___f_5375_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5376_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5377_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5378_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5379_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5379_, 0, v___f_5377_);
lean_closure_set(v___f_5379_, 1, v___f_5376_);
lean_closure_set(v___f_5379_, 2, v___f_5378_);
lean_closure_set(v___f_5379_, 3, v_y_5372_);
lean_closure_set(v___f_5379_, 4, v_prio_5373_);
lean_closure_set(v___f_5379_, 5, v___f_5375_);
lean_closure_set(v___f_5379_, 6, v_x_5371_);
lean_closure_set(v___f_5379_, 7, v___f_5375_);
v___x_5380_ = lean_unsigned_to_nat(0u);
v___x_5381_ = 0;
v___x_5382_ = lean_io_promise_new();
v___x_5383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5383_, 0, v___x_5382_);
v___x_5384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5384_, 0, v___x_5383_);
v___x_5385_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5380_, v___x_5381_, v___x_5384_, v___f_5379_);
return v___x_5385_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___boxed(lean_object* v_x_5386_, lean_object* v_y_5387_, lean_object* v_prio_5388_, lean_object* v_a_5389_){
_start:
{
lean_object* v_res_5390_; 
v_res_5390_ = l_Std_Async_Async_race___redArg(v_x_5386_, v_y_5387_, v_prio_5388_);
return v_res_5390_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race(lean_object* v_00_u03b1_5391_, lean_object* v_inst_5392_, lean_object* v_x_5393_, lean_object* v_y_5394_, lean_object* v_prio_5395_){
_start:
{
lean_object* v___f_5397_; lean_object* v___f_5398_; lean_object* v___f_5399_; lean_object* v___f_5400_; lean_object* v___f_5401_; lean_object* v___x_5402_; uint8_t v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; 
v___f_5397_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5398_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5399_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5400_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5401_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5401_, 0, v___f_5399_);
lean_closure_set(v___f_5401_, 1, v___f_5398_);
lean_closure_set(v___f_5401_, 2, v___f_5400_);
lean_closure_set(v___f_5401_, 3, v_y_5394_);
lean_closure_set(v___f_5401_, 4, v_prio_5395_);
lean_closure_set(v___f_5401_, 5, v___f_5397_);
lean_closure_set(v___f_5401_, 6, v_x_5393_);
lean_closure_set(v___f_5401_, 7, v___f_5397_);
v___x_5402_ = lean_unsigned_to_nat(0u);
v___x_5403_ = 0;
v___x_5404_ = lean_io_promise_new();
v___x_5405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5405_, 0, v___x_5404_);
v___x_5406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5406_, 0, v___x_5405_);
v___x_5407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5402_, v___x_5403_, v___x_5406_, v___f_5401_);
return v___x_5407_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___boxed(lean_object* v_00_u03b1_5408_, lean_object* v_inst_5409_, lean_object* v_x_5410_, lean_object* v_y_5411_, lean_object* v_prio_5412_, lean_object* v_a_5413_){
_start:
{
lean_object* v_res_5414_; 
v_res_5414_ = l_Std_Async_Async_race(v_00_u03b1_5408_, v_inst_5409_, v_x_5410_, v_y_5411_, v_prio_5412_);
lean_dec(v_inst_5409_);
return v_res_5414_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1(lean_object* v_prio_5415_, lean_object* v___f_5416_, lean_object* v_x_5417_){
_start:
{
lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; uint8_t v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; 
v___x_5419_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5419_, 0, lean_box(0));
lean_closure_set(v___x_5419_, 1, v_x_5417_);
v___x_5420_ = lean_io_as_task(v___x_5419_, v_prio_5415_);
v___x_5421_ = lean_unsigned_to_nat(0u);
v___x_5422_ = 1;
v___x_5423_ = lean_task_bind(v___x_5420_, v___f_5416_, v___x_5421_, v___x_5422_);
v___x_5424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5424_, 0, v___x_5423_);
v___x_5425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5425_, 0, v___x_5424_);
return v___x_5425_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_5426_, lean_object* v___f_5427_, lean_object* v_x_5428_, lean_object* v___y_5429_){
_start:
{
lean_object* v_res_5430_; 
v_res_5430_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__1(v_prio_5426_, v___f_5427_, v_x_5428_);
return v_res_5430_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0(lean_object* v___x_5432_, lean_object* v_x_5433_){
_start:
{
if (lean_obj_tag(v_x_5433_) == 0)
{
lean_object* v_a_5435_; lean_object* v___x_5437_; uint8_t v_isShared_5438_; uint8_t v_isSharedCheck_5443_; 
lean_dec_ref(v___x_5432_);
v_a_5435_ = lean_ctor_get(v_x_5433_, 0);
v_isSharedCheck_5443_ = !lean_is_exclusive(v_x_5433_);
if (v_isSharedCheck_5443_ == 0)
{
v___x_5437_ = v_x_5433_;
v_isShared_5438_ = v_isSharedCheck_5443_;
goto v_resetjp_5436_;
}
else
{
lean_inc(v_a_5435_);
lean_dec(v_x_5433_);
v___x_5437_ = lean_box(0);
v_isShared_5438_ = v_isSharedCheck_5443_;
goto v_resetjp_5436_;
}
v_resetjp_5436_:
{
lean_object* v___x_5440_; 
if (v_isShared_5438_ == 0)
{
v___x_5440_ = v___x_5437_;
goto v_reusejp_5439_;
}
else
{
lean_object* v_reuseFailAlloc_5442_; 
v_reuseFailAlloc_5442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5442_, 0, v_a_5435_);
v___x_5440_ = v_reuseFailAlloc_5442_;
goto v_reusejp_5439_;
}
v_reusejp_5439_:
{
lean_object* v___x_5441_; 
v___x_5441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5441_, 0, v___x_5440_);
return v___x_5441_;
}
}
}
else
{
lean_object* v_a_5444_; lean_object* v___x_5445_; size_t v_sz_5446_; size_t v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_287__overap_5450_; lean_object* v___x_5451_; 
v_a_5444_ = lean_ctor_get(v_x_5433_, 0);
lean_inc(v_a_5444_);
lean_dec_ref_known(v_x_5433_, 1);
v___x_5445_ = ((lean_object*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__0___closed__0));
v_sz_5446_ = lean_array_size(v_a_5444_);
v___x_5447_ = ((size_t)0ULL);
v___x_5448_ = l_unsafeCast___redArg(v_a_5444_);
lean_dec(v_a_5444_);
v___x_5449_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5432_, v___x_5445_, v_sz_5446_, v___x_5447_, v___x_5448_);
v___x_287__overap_5450_ = l_unsafeCast___redArg(v___x_5449_);
lean_dec(v___x_5449_);
v___x_5451_ = lean_apply_1(v___x_287__overap_5450_, lean_box(0));
return v___x_5451_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___x_5452_, lean_object* v_x_5453_, lean_object* v___y_5454_){
_start:
{
lean_object* v_res_5455_; 
v_res_5455_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__0(v___x_5452_, v_x_5453_);
return v_res_5455_;
}
}
static lean_object* _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__0(void){
_start:
{
lean_object* v___x_5456_; lean_object* v___f_5457_; 
v___x_5456_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5457_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5457_, 0, v___x_5456_);
return v___f_5457_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg(lean_object* v_xs_5458_, lean_object* v_prio_5459_){
_start:
{
lean_object* v___f_5461_; lean_object* v___f_5462_; lean_object* v___x_5463_; lean_object* v___f_5464_; lean_object* v___x_5465_; uint8_t v___x_5466_; size_t v_sz_5467_; size_t v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_215__overap_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; 
v___f_5461_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5462_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5462_, 0, v_prio_5459_);
lean_closure_set(v___f_5462_, 1, v___f_5461_);
v___x_5463_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5464_ = lean_obj_once(&l_Std_Async_Async_concurrentlyAll___redArg___closed__0, &l_Std_Async_Async_concurrentlyAll___redArg___closed__0_once, _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__0);
v___x_5465_ = lean_unsigned_to_nat(0u);
v___x_5466_ = 0;
v_sz_5467_ = lean_array_size(v_xs_5458_);
v___x_5468_ = ((size_t)0ULL);
v___x_5469_ = l_unsafeCast___redArg(v_xs_5458_);
v___x_5470_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5463_, v___f_5462_, v_sz_5467_, v___x_5468_, v___x_5469_);
v___x_215__overap_5471_ = l_unsafeCast___redArg(v___x_5470_);
lean_dec(v___x_5470_);
v___x_5472_ = lean_apply_1(v___x_215__overap_5471_, lean_box(0));
v___x_5473_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5465_, v___x_5466_, v___x_5472_, v___f_5464_);
return v___x_5473_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___boxed(lean_object* v_xs_5474_, lean_object* v_prio_5475_, lean_object* v_a_5476_){
_start:
{
lean_object* v_res_5477_; 
v_res_5477_ = l_Std_Async_Async_concurrentlyAll___redArg(v_xs_5474_, v_prio_5475_);
lean_dec_ref(v_xs_5474_);
return v_res_5477_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll(lean_object* v_00_u03b1_5478_, lean_object* v_xs_5479_, lean_object* v_prio_5480_){
_start:
{
lean_object* v___f_5482_; lean_object* v___f_5483_; lean_object* v___x_5484_; lean_object* v___f_5485_; lean_object* v___x_5486_; uint8_t v___x_5487_; size_t v_sz_5488_; size_t v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_255__overap_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; 
v___f_5482_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5483_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5483_, 0, v_prio_5480_);
lean_closure_set(v___f_5483_, 1, v___f_5482_);
v___x_5484_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5485_ = lean_obj_once(&l_Std_Async_Async_concurrentlyAll___redArg___closed__0, &l_Std_Async_Async_concurrentlyAll___redArg___closed__0_once, _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__0);
v___x_5486_ = lean_unsigned_to_nat(0u);
v___x_5487_ = 0;
v_sz_5488_ = lean_array_size(v_xs_5479_);
v___x_5489_ = ((size_t)0ULL);
v___x_5490_ = l_unsafeCast___redArg(v_xs_5479_);
v___x_5491_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5484_, v___f_5483_, v_sz_5488_, v___x_5489_, v___x_5490_);
v___x_255__overap_5492_ = l_unsafeCast___redArg(v___x_5491_);
lean_dec(v___x_5491_);
v___x_5493_ = lean_apply_1(v___x_255__overap_5492_, lean_box(0));
v___x_5494_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5486_, v___x_5487_, v___x_5493_, v___f_5485_);
return v___x_5494_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___boxed(lean_object* v_00_u03b1_5495_, lean_object* v_xs_5496_, lean_object* v_prio_5497_, lean_object* v_a_5498_){
_start:
{
lean_object* v_res_5499_; 
v_res_5499_ = l_Std_Async_Async_concurrentlyAll(v_00_u03b1_5495_, v_xs_5496_, v_prio_5497_);
lean_dec_ref(v_xs_5496_);
return v_res_5499_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4(lean_object* v___f_5500_, lean_object* v___f_5501_, lean_object* v_x_5502_){
_start:
{
if (lean_obj_tag(v_x_5502_) == 0)
{
lean_object* v_a_5504_; lean_object* v___x_5506_; uint8_t v_isShared_5507_; uint8_t v_isSharedCheck_5512_; 
lean_dec_ref(v___f_5501_);
lean_dec(v___f_5500_);
v_a_5504_ = lean_ctor_get(v_x_5502_, 0);
v_isSharedCheck_5512_ = !lean_is_exclusive(v_x_5502_);
if (v_isSharedCheck_5512_ == 0)
{
v___x_5506_ = v_x_5502_;
v_isShared_5507_ = v_isSharedCheck_5512_;
goto v_resetjp_5505_;
}
else
{
lean_inc(v_a_5504_);
lean_dec(v_x_5502_);
v___x_5506_ = lean_box(0);
v_isShared_5507_ = v_isSharedCheck_5512_;
goto v_resetjp_5505_;
}
v_resetjp_5505_:
{
lean_object* v___x_5509_; 
if (v_isShared_5507_ == 0)
{
v___x_5509_ = v___x_5506_;
goto v_reusejp_5508_;
}
else
{
lean_object* v_reuseFailAlloc_5511_; 
v_reuseFailAlloc_5511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5511_, 0, v_a_5504_);
v___x_5509_ = v_reuseFailAlloc_5511_;
goto v_reusejp_5508_;
}
v_reusejp_5508_:
{
lean_object* v___x_5510_; 
v___x_5510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5510_, 0, v___x_5509_);
return v___x_5510_;
}
}
}
else
{
lean_object* v_a_5513_; lean_object* v___x_5515_; uint8_t v_isShared_5516_; uint8_t v_isSharedCheck_5526_; 
v_a_5513_ = lean_ctor_get(v_x_5502_, 0);
v_isSharedCheck_5526_ = !lean_is_exclusive(v_x_5502_);
if (v_isSharedCheck_5526_ == 0)
{
v___x_5515_ = v_x_5502_;
v_isShared_5516_ = v_isSharedCheck_5526_;
goto v_resetjp_5514_;
}
else
{
lean_inc(v_a_5513_);
lean_dec(v_x_5502_);
v___x_5515_ = lean_box(0);
v_isShared_5516_ = v_isSharedCheck_5526_;
goto v_resetjp_5514_;
}
v_resetjp_5514_:
{
lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; uint8_t v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5523_; 
v___x_5517_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5517_, 0, lean_box(0));
lean_closure_set(v___x_5517_, 1, lean_box(0));
lean_closure_set(v___x_5517_, 2, v___f_5500_);
lean_closure_set(v___x_5517_, 3, lean_box(0));
v___x_5518_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5518_, 0, lean_box(0));
lean_closure_set(v___x_5518_, 1, lean_box(0));
lean_closure_set(v___x_5518_, 2, lean_box(0));
lean_closure_set(v___x_5518_, 3, v___x_5517_);
lean_closure_set(v___x_5518_, 4, v___f_5501_);
v___x_5519_ = lean_unsigned_to_nat(0u);
v___x_5520_ = 0;
v___x_5521_ = l_BaseIO_chainTask___redArg(v_a_5513_, v___x_5518_, v___x_5519_, v___x_5520_);
if (v_isShared_5516_ == 0)
{
lean_ctor_set(v___x_5515_, 0, v___x_5521_);
v___x_5523_ = v___x_5515_;
goto v_reusejp_5522_;
}
else
{
lean_object* v_reuseFailAlloc_5525_; 
v_reuseFailAlloc_5525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5525_, 0, v___x_5521_);
v___x_5523_ = v_reuseFailAlloc_5525_;
goto v_reusejp_5522_;
}
v_reusejp_5522_:
{
lean_object* v___x_5524_; 
v___x_5524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5524_, 0, v___x_5523_);
return v___x_5524_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4___boxed(lean_object* v___f_5527_, lean_object* v___f_5528_, lean_object* v_x_5529_, lean_object* v___y_5530_){
_start:
{
lean_object* v_res_5531_; 
v_res_5531_ = l_Std_Async_Async_raceAll___redArg___lam__4(v___f_5527_, v___f_5528_, v_x_5529_);
return v_res_5531_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0(lean_object* v_prio_5532_, lean_object* v___f_5533_, lean_object* v___f_5534_, lean_object* v_x_5535_){
_start:
{
lean_object* v___x_5537_; uint8_t v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; uint8_t v___x_5541_; lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; 
v___x_5537_ = lean_unsigned_to_nat(0u);
v___x_5538_ = 0;
v___x_5539_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5539_, 0, lean_box(0));
lean_closure_set(v___x_5539_, 1, v_x_5535_);
v___x_5540_ = lean_io_as_task(v___x_5539_, v_prio_5532_);
v___x_5541_ = 1;
v___x_5542_ = lean_task_bind(v___x_5540_, v___f_5533_, v___x_5537_, v___x_5541_);
v___x_5543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5543_, 0, v___x_5542_);
v___x_5544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5544_, 0, v___x_5543_);
v___x_5545_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5537_, v___x_5538_, v___x_5544_, v___f_5534_);
return v___x_5545_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0___boxed(lean_object* v_prio_5546_, lean_object* v___f_5547_, lean_object* v___f_5548_, lean_object* v_x_5549_, lean_object* v___y_5550_){
_start:
{
lean_object* v_res_5551_; 
v_res_5551_ = l_Std_Async_Async_raceAll___redArg___lam__0(v_prio_5546_, v___f_5547_, v___f_5548_, v_x_5549_);
return v_res_5551_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2(lean_object* v___f_5552_, lean_object* v_prio_5553_, lean_object* v___f_5554_, lean_object* v___f_5555_, lean_object* v___f_5556_, lean_object* v_inst_5557_, lean_object* v_xs_5558_, lean_object* v_x_5559_){
_start:
{
if (lean_obj_tag(v_x_5559_) == 0)
{
lean_object* v_a_5561_; lean_object* v___x_5563_; uint8_t v_isShared_5564_; uint8_t v_isSharedCheck_5569_; 
lean_dec(v_xs_5558_);
lean_dec_ref(v_inst_5557_);
lean_dec_ref(v___f_5556_);
lean_dec_ref(v___f_5555_);
lean_dec_ref(v___f_5554_);
lean_dec(v_prio_5553_);
lean_dec(v___f_5552_);
v_a_5561_ = lean_ctor_get(v_x_5559_, 0);
v_isSharedCheck_5569_ = !lean_is_exclusive(v_x_5559_);
if (v_isSharedCheck_5569_ == 0)
{
v___x_5563_ = v_x_5559_;
v_isShared_5564_ = v_isSharedCheck_5569_;
goto v_resetjp_5562_;
}
else
{
lean_inc(v_a_5561_);
lean_dec(v_x_5559_);
v___x_5563_ = lean_box(0);
v_isShared_5564_ = v_isSharedCheck_5569_;
goto v_resetjp_5562_;
}
v_resetjp_5562_:
{
lean_object* v___x_5566_; 
if (v_isShared_5564_ == 0)
{
v___x_5566_ = v___x_5563_;
goto v_reusejp_5565_;
}
else
{
lean_object* v_reuseFailAlloc_5568_; 
v_reuseFailAlloc_5568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5568_, 0, v_a_5561_);
v___x_5566_ = v_reuseFailAlloc_5568_;
goto v_reusejp_5565_;
}
v_reusejp_5565_:
{
lean_object* v___x_5567_; 
v___x_5567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5567_, 0, v___x_5566_);
return v___x_5567_;
}
}
}
else
{
lean_object* v_a_5570_; lean_object* v___f_5571_; lean_object* v___f_5572_; lean_object* v___f_5573_; lean_object* v___f_5574_; lean_object* v___x_5575_; uint8_t v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; 
v_a_5570_ = lean_ctor_get(v_x_5559_, 0);
lean_inc_n(v_a_5570_, 2);
lean_dec_ref_known(v_x_5559_, 1);
v___f_5571_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5571_, 0, v_a_5570_);
v___f_5572_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_5572_, 0, v___f_5552_);
lean_closure_set(v___f_5572_, 1, v___f_5571_);
v___f_5573_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_5573_, 0, v_prio_5553_);
lean_closure_set(v___f_5573_, 1, v___f_5554_);
lean_closure_set(v___f_5573_, 2, v___f_5572_);
v___f_5574_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5574_, 0, v_a_5570_);
lean_closure_set(v___f_5574_, 1, v___f_5555_);
lean_closure_set(v___f_5574_, 2, v___f_5556_);
v___x_5575_ = lean_unsigned_to_nat(0u);
v___x_5576_ = 0;
v___x_5577_ = lean_apply_3(v_inst_5557_, v_xs_5558_, v___f_5573_, lean_box(0));
v___x_5578_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5575_, v___x_5576_, v___x_5577_, v___f_5574_);
return v___x_5578_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2___boxed(lean_object* v___f_5579_, lean_object* v_prio_5580_, lean_object* v___f_5581_, lean_object* v___f_5582_, lean_object* v___f_5583_, lean_object* v_inst_5584_, lean_object* v_xs_5585_, lean_object* v_x_5586_, lean_object* v___y_5587_){
_start:
{
lean_object* v_res_5588_; 
v_res_5588_ = l_Std_Async_Async_raceAll___redArg___lam__2(v___f_5579_, v_prio_5580_, v___f_5581_, v___f_5582_, v___f_5583_, v_inst_5584_, v_xs_5585_, v_x_5586_);
return v_res_5588_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg(lean_object* v_inst_5589_, lean_object* v_xs_5590_, lean_object* v_prio_5591_){
_start:
{
lean_object* v___f_5593_; lean_object* v___f_5594_; lean_object* v___f_5595_; lean_object* v___f_5596_; lean_object* v___f_5597_; lean_object* v___x_5598_; uint8_t v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; lean_object* v___x_5603_; 
v___f_5593_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5594_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5595_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5596_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5597_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5597_, 0, v___f_5596_);
lean_closure_set(v___f_5597_, 1, v_prio_5591_);
lean_closure_set(v___f_5597_, 2, v___f_5595_);
lean_closure_set(v___f_5597_, 3, v___f_5593_);
lean_closure_set(v___f_5597_, 4, v___f_5594_);
lean_closure_set(v___f_5597_, 5, v_inst_5589_);
lean_closure_set(v___f_5597_, 6, v_xs_5590_);
v___x_5598_ = lean_unsigned_to_nat(0u);
v___x_5599_ = 0;
v___x_5600_ = lean_io_promise_new();
v___x_5601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5601_, 0, v___x_5600_);
v___x_5602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5602_, 0, v___x_5601_);
v___x_5603_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5598_, v___x_5599_, v___x_5602_, v___f_5597_);
return v___x_5603_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___boxed(lean_object* v_inst_5604_, lean_object* v_xs_5605_, lean_object* v_prio_5606_, lean_object* v_a_5607_){
_start:
{
lean_object* v_res_5608_; 
v_res_5608_ = l_Std_Async_Async_raceAll___redArg(v_inst_5604_, v_xs_5605_, v_prio_5606_);
return v_res_5608_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll(lean_object* v_c_5609_, lean_object* v_00_u03b1_5610_, lean_object* v_inst_5611_, lean_object* v_xs_5612_, lean_object* v_prio_5613_){
_start:
{
lean_object* v___f_5615_; lean_object* v___f_5616_; lean_object* v___f_5617_; lean_object* v___f_5618_; lean_object* v___f_5619_; lean_object* v___x_5620_; uint8_t v___x_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; lean_object* v___x_5624_; lean_object* v___x_5625_; 
v___f_5615_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5616_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5617_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5618_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5619_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5619_, 0, v___f_5618_);
lean_closure_set(v___f_5619_, 1, v_prio_5613_);
lean_closure_set(v___f_5619_, 2, v___f_5617_);
lean_closure_set(v___f_5619_, 3, v___f_5615_);
lean_closure_set(v___f_5619_, 4, v___f_5616_);
lean_closure_set(v___f_5619_, 5, v_inst_5611_);
lean_closure_set(v___f_5619_, 6, v_xs_5612_);
v___x_5620_ = lean_unsigned_to_nat(0u);
v___x_5621_ = 0;
v___x_5622_ = lean_io_promise_new();
v___x_5623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5623_, 0, v___x_5622_);
v___x_5624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5624_, 0, v___x_5623_);
v___x_5625_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5620_, v___x_5621_, v___x_5624_, v___f_5619_);
return v___x_5625_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___boxed(lean_object* v_c_5626_, lean_object* v_00_u03b1_5627_, lean_object* v_inst_5628_, lean_object* v_xs_5629_, lean_object* v_prio_5630_, lean_object* v_a_5631_){
_start:
{
lean_object* v_res_5632_; 
v_res_5632_ = l_Std_Async_Async_raceAll(v_c_5626_, v_00_u03b1_5627_, v_inst_5628_, v_xs_5629_, v_prio_5630_);
return v_res_5632_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_background___redArg(lean_object* v_inst_5633_, lean_object* v_inst_5634_, lean_object* v_action_5635_, lean_object* v_prio_5636_){
_start:
{
lean_object* v_toApplicative_5637_; lean_object* v_toFunctor_5638_; lean_object* v_mapConst_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; 
v_toApplicative_5637_ = lean_ctor_get(v_inst_5633_, 0);
lean_inc_ref(v_toApplicative_5637_);
lean_dec_ref(v_inst_5633_);
v_toFunctor_5638_ = lean_ctor_get(v_toApplicative_5637_, 0);
lean_inc_ref(v_toFunctor_5638_);
lean_dec_ref(v_toApplicative_5637_);
v_mapConst_5639_ = lean_ctor_get(v_toFunctor_5638_, 1);
lean_inc(v_mapConst_5639_);
lean_dec_ref(v_toFunctor_5638_);
v___x_5640_ = lean_apply_3(v_inst_5634_, lean_box(0), v_action_5635_, v_prio_5636_);
v___x_5641_ = lean_box(0);
v___x_5642_ = lean_apply_4(v_mapConst_5639_, lean_box(0), lean_box(0), v___x_5641_, v___x_5640_);
return v___x_5642_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_background(lean_object* v_m_5643_, lean_object* v_t_5644_, lean_object* v_00_u03b1_5645_, lean_object* v_inst_5646_, lean_object* v_inst_5647_, lean_object* v_action_5648_, lean_object* v_prio_5649_){
_start:
{
lean_object* v_toApplicative_5650_; lean_object* v_toFunctor_5651_; lean_object* v_mapConst_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; lean_object* v___x_5655_; 
v_toApplicative_5650_ = lean_ctor_get(v_inst_5646_, 0);
lean_inc_ref(v_toApplicative_5650_);
lean_dec_ref(v_inst_5646_);
v_toFunctor_5651_ = lean_ctor_get(v_toApplicative_5650_, 0);
lean_inc_ref(v_toFunctor_5651_);
lean_dec_ref(v_toApplicative_5650_);
v_mapConst_5652_ = lean_ctor_get(v_toFunctor_5651_, 1);
lean_inc(v_mapConst_5652_);
lean_dec_ref(v_toFunctor_5651_);
v___x_5653_ = lean_apply_3(v_inst_5647_, lean_box(0), v_action_5648_, v_prio_5649_);
v___x_5654_ = lean_box(0);
v___x_5655_ = lean_apply_4(v_mapConst_5652_, lean_box(0), lean_box(0), v___x_5654_, v___x_5653_);
return v___x_5655_;
}
}
lean_object* runtime_initialize_Init_System_Promise(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Async_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_Promise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Async_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_Promise(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Async_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_Promise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Async_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

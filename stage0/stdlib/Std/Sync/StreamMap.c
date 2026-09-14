// Lean compiler output
// Module: Std.Sync.StreamMap
// Imports: public import Std.Data public import Init.Data.Queue public import Std.Async.IO
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_Std_Async_Selectable_combine___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_Async_Selectable_tryOne___redArg(lean_object*);
lean_object* l_Std_Async_Selectable_one___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_AnyAsyncStream_getSelector___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_AnyAsyncStream_getSelector(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_instCoeDepAnyAsyncStreamOfAsyncStream___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_instCoeDepAnyAsyncStreamOfAsyncStream(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_StreamMap_empty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_StreamMap_empty___redArg___closed__0 = (const lean_object*)&l_Std_StreamMap_empty___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_StreamMap_empty___redArg();
LEAN_EXPORT lean_object* l_Std_StreamMap_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_StreamMap_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_StreamMap_empty___closed__0;
LEAN_EXPORT lean_object* l_Std_StreamMap_empty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_register___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_StreamMap_register___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_StreamMap_register___redArg___closed__0 = (const lean_object*)&l_Std_StreamMap_register___redArg___closed__0_value;
static const lean_closure_object l_Std_StreamMap_register___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_StreamMap_register___redArg___closed__1 = (const lean_object*)&l_Std_StreamMap_register___redArg___closed__1_value;
static const lean_closure_object l_Std_StreamMap_register___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_StreamMap_register___redArg___closed__2 = (const lean_object*)&l_Std_StreamMap_register___redArg___closed__2_value;
static const lean_closure_object l_Std_StreamMap_register___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_StreamMap_register___redArg___closed__3 = (const lean_object*)&l_Std_StreamMap_register___redArg___closed__3_value;
static const lean_closure_object l_Std_StreamMap_register___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_StreamMap_register___redArg___closed__4 = (const lean_object*)&l_Std_StreamMap_register___redArg___closed__4_value;
static const lean_closure_object l_Std_StreamMap_register___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_StreamMap_register___redArg___closed__5 = (const lean_object*)&l_Std_StreamMap_register___redArg___closed__5_value;
static const lean_closure_object l_Std_StreamMap_register___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_StreamMap_register___redArg___closed__6 = (const lean_object*)&l_Std_StreamMap_register___redArg___closed__6_value;
static const lean_ctor_object l_Std_StreamMap_register___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_StreamMap_register___redArg___closed__0_value),((lean_object*)&l_Std_StreamMap_register___redArg___closed__1_value)}};
static const lean_object* l_Std_StreamMap_register___redArg___closed__7 = (const lean_object*)&l_Std_StreamMap_register___redArg___closed__7_value;
static const lean_ctor_object l_Std_StreamMap_register___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_StreamMap_register___redArg___closed__7_value),((lean_object*)&l_Std_StreamMap_register___redArg___closed__2_value),((lean_object*)&l_Std_StreamMap_register___redArg___closed__3_value),((lean_object*)&l_Std_StreamMap_register___redArg___closed__4_value),((lean_object*)&l_Std_StreamMap_register___redArg___closed__5_value)}};
static const lean_object* l_Std_StreamMap_register___redArg___closed__8 = (const lean_object*)&l_Std_StreamMap_register___redArg___closed__8_value;
static const lean_ctor_object l_Std_StreamMap_register___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_StreamMap_register___redArg___closed__8_value),((lean_object*)&l_Std_StreamMap_register___redArg___closed__6_value)}};
static const lean_object* l_Std_StreamMap_register___redArg___closed__9 = (const lean_object*)&l_Std_StreamMap_register___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Std_StreamMap_register___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_register(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_ofArray___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_StreamMap_ofArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_StreamMap_ofArray___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_StreamMap_ofArray___redArg___closed__0 = (const lean_object*)&l_Std_StreamMap_ofArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_StreamMap_ofArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_ofArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_ofArray(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_ofArray___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_selector___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_selector___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_selector(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_selector___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_recv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_recv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_tryRecv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_tryRecv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_unregister___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_unregister(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_StreamMap_contains___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_contains___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_StreamMap_contains___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_contains___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_StreamMap_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_size(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_size___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_StreamMap_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_StreamMap_isEmpty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_isEmpty___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_keys___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_keys___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_keys(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_keys___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_get_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_get_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_StreamMap_get_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_StreamMap_get_x3f___redArg___closed__0 = (const lean_object*)&l_Std_StreamMap_get_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_StreamMap_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_get_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_filterByName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_filterByName___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_filterByName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_filterByName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_toArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_toArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_toArray___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_close(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_StreamMap_close___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AnyAsyncStream_getSelector___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v_inst_2_; lean_object* v_a_3_; lean_object* v_next_4_; lean_object* v_stop_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_14_; 
v_inst_2_ = lean_ctor_get(v_x_1_, 0);
lean_inc_ref(v_inst_2_);
v_a_3_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_a_3_);
lean_dec_ref(v_x_1_);
v_next_4_ = lean_ctor_get(v_inst_2_, 0);
v_stop_5_ = lean_ctor_get(v_inst_2_, 1);
v_isSharedCheck_14_ = !lean_is_exclusive(v_inst_2_);
if (v_isSharedCheck_14_ == 0)
{
v___x_7_ = v_inst_2_;
v_isShared_8_ = v_isSharedCheck_14_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_stop_5_);
lean_inc(v_next_4_);
lean_dec(v_inst_2_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_14_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_12_; 
lean_inc(v_a_3_);
v___x_9_ = lean_apply_1(v_next_4_, v_a_3_);
v___x_10_ = lean_apply_1(v_stop_5_, v_a_3_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v___x_10_);
lean_ctor_set(v___x_7_, 0, v___x_9_);
v___x_12_ = v___x_7_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_13_; 
v_reuseFailAlloc_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_13_, 0, v___x_9_);
lean_ctor_set(v_reuseFailAlloc_13_, 1, v___x_10_);
v___x_12_ = v_reuseFailAlloc_13_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AnyAsyncStream_getSelector(lean_object* v_00_u03b1_15_, lean_object* v_x_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Std_AnyAsyncStream_getSelector___redArg(v_x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Std_instCoeDepAnyAsyncStreamOfAsyncStream___redArg(lean_object* v_x_18_, lean_object* v_inst_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_20_, 0, v_inst_19_);
lean_ctor_set(v___x_20_, 1, v_x_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Std_instCoeDepAnyAsyncStreamOfAsyncStream(lean_object* v_t_21_, lean_object* v_00_u03b1_22_, lean_object* v_x_23_, lean_object* v_inst_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v_inst_24_);
lean_ctor_set(v___x_25_, 1, v_x_23_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_empty___redArg(){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = ((lean_object*)(l_Std_StreamMap_empty___redArg___closed__0));
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_empty___redArg___boxed(lean_object* v___dummy_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Std_StreamMap_empty___redArg();
return v_res_31_;
}
}
static lean_object* _init_l_Std_StreamMap_empty___closed__0(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Std_StreamMap_empty___redArg();
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_empty(lean_object* v_00_u03b2_33_, lean_object* v_00_u03b1_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_obj_once(&l_Std_StreamMap_empty___closed__0, &l_Std_StreamMap_empty___closed__0_once, _init_l_Std_StreamMap_empty___closed__0);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_register___redArg___lam__0(lean_object* v_inst_36_, lean_object* v_name_37_, lean_object* v_x1_38_, lean_object* v_x2_39_){
_start:
{
lean_object* v_fst_40_; lean_object* v___x_41_; uint8_t v___x_42_; 
v_fst_40_ = lean_ctor_get(v_x2_39_, 0);
lean_inc(v_fst_40_);
v___x_41_ = lean_apply_2(v_inst_36_, v_fst_40_, v_name_37_);
v___x_42_ = lean_unbox(v___x_41_);
if (v___x_42_ == 0)
{
lean_object* v___x_43_; 
v___x_43_ = lean_array_push(v_x1_38_, v_x2_39_);
return v___x_43_;
}
else
{
lean_dec_ref(v_x2_39_);
return v_x1_38_;
}
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_register___redArg(lean_object* v_inst_63_, lean_object* v_inst_64_, lean_object* v_sm_65_, lean_object* v_name_66_, lean_object* v_reader_67_){
_start:
{
lean_object* v_next_68_; lean_object* v_stop_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_95_; 
v_next_68_ = lean_ctor_get(v_inst_64_, 0);
v_stop_69_ = lean_ctor_get(v_inst_64_, 1);
v_isSharedCheck_95_ = !lean_is_exclusive(v_inst_64_);
if (v_isSharedCheck_95_ == 0)
{
v___x_71_ = v_inst_64_;
v_isShared_72_ = v_isSharedCheck_95_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_stop_69_);
lean_inc(v_next_68_);
lean_dec(v_inst_64_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_95_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v_newSelector_73_; lean_object* v___y_75_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
lean_inc(v_reader_67_);
v_newSelector_73_ = lean_apply_1(v_next_68_, v_reader_67_);
v___x_82_ = lean_unsigned_to_nat(0u);
v___x_83_ = lean_array_get_size(v_sm_65_);
v___x_84_ = ((lean_object*)(l_Std_StreamMap_empty___redArg___closed__0));
v___x_85_ = ((lean_object*)(l_Std_StreamMap_register___redArg___closed__9));
v___x_86_ = lean_nat_dec_lt(v___x_82_, v___x_83_);
if (v___x_86_ == 0)
{
lean_dec_ref(v_sm_65_);
lean_dec_ref(v_inst_63_);
v___y_75_ = v___x_84_;
goto v___jp_74_;
}
else
{
lean_object* v___f_87_; uint8_t v___x_88_; 
lean_inc(v_name_66_);
v___f_87_ = lean_alloc_closure((void*)(l_Std_StreamMap_register___redArg___lam__0), 4, 2);
lean_closure_set(v___f_87_, 0, v_inst_63_);
lean_closure_set(v___f_87_, 1, v_name_66_);
v___x_88_ = lean_nat_dec_le(v___x_83_, v___x_83_);
if (v___x_88_ == 0)
{
if (v___x_86_ == 0)
{
lean_dec_ref(v___f_87_);
lean_dec_ref(v_sm_65_);
v___y_75_ = v___x_84_;
goto v___jp_74_;
}
else
{
size_t v___x_89_; size_t v___x_90_; lean_object* v___x_91_; 
v___x_89_ = ((size_t)0ULL);
v___x_90_ = lean_usize_of_nat(v___x_83_);
v___x_91_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_85_, v___f_87_, v_sm_65_, v___x_89_, v___x_90_, v___x_84_);
v___y_75_ = v___x_91_;
goto v___jp_74_;
}
}
else
{
size_t v___x_92_; size_t v___x_93_; lean_object* v___x_94_; 
v___x_92_ = ((size_t)0ULL);
v___x_93_ = lean_usize_of_nat(v___x_83_);
v___x_94_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_85_, v___f_87_, v_sm_65_, v___x_92_, v___x_93_, v___x_84_);
v___y_75_ = v___x_94_;
goto v___jp_74_;
}
}
v___jp_74_:
{
lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_76_ = lean_apply_1(v_stop_69_, v_reader_67_);
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 1, v___x_76_);
lean_ctor_set(v___x_71_, 0, v_newSelector_73_);
v___x_78_ = v___x_71_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_newSelector_73_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v___x_76_);
v___x_78_ = v_reuseFailAlloc_81_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_79_, 0, v_name_66_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_array_push(v___y_75_, v___x_79_);
return v___x_80_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_register(lean_object* v_00_u03b1_96_, lean_object* v_t_97_, lean_object* v_00_u03b2_98_, lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_sm_101_, lean_object* v_name_102_, lean_object* v_reader_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Std_StreamMap_register___redArg(v_inst_99_, v_inst_100_, v_sm_101_, v_name_102_, v_reader_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_ofArray___redArg___lam__0(lean_object* v_x_105_){
_start:
{
lean_object* v_fst_106_; lean_object* v_snd_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_115_; 
v_fst_106_ = lean_ctor_get(v_x_105_, 0);
v_snd_107_ = lean_ctor_get(v_x_105_, 1);
v_isSharedCheck_115_ = !lean_is_exclusive(v_x_105_);
if (v_isSharedCheck_115_ == 0)
{
v___x_109_ = v_x_105_;
v_isShared_110_ = v_isSharedCheck_115_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_snd_107_);
lean_inc(v_fst_106_);
lean_dec(v_x_105_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_115_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_111_; lean_object* v___x_113_; 
v___x_111_ = l_Std_AnyAsyncStream_getSelector___redArg(v_snd_107_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 1, v___x_111_);
v___x_113_ = v___x_109_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_fst_106_);
lean_ctor_set(v_reuseFailAlloc_114_, 1, v___x_111_);
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
LEAN_EXPORT lean_object* l_Std_StreamMap_ofArray___redArg(lean_object* v_streams_117_){
_start:
{
lean_object* v___f_118_; lean_object* v___x_119_; size_t v_sz_120_; size_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v_arrayOfSelectors_124_; 
v___f_118_ = ((lean_object*)(l_Std_StreamMap_ofArray___redArg___closed__0));
v___x_119_ = ((lean_object*)(l_Std_StreamMap_register___redArg___closed__9));
v_sz_120_ = lean_array_size(v_streams_117_);
v___x_121_ = ((size_t)0ULL);
v___x_122_ = l_unsafeCast___redArg(v_streams_117_);
v___x_123_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_119_, v___f_118_, v_sz_120_, v___x_121_, v___x_122_);
v_arrayOfSelectors_124_ = l_unsafeCast___redArg(v___x_123_);
lean_dec(v___x_123_);
return v_arrayOfSelectors_124_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_ofArray___redArg___boxed(lean_object* v_streams_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Std_StreamMap_ofArray___redArg(v_streams_125_);
lean_dec_ref(v_streams_125_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_ofArray(lean_object* v_00_u03b1_127_, lean_object* v_00_u03b2_128_, lean_object* v_inst_129_, lean_object* v_streams_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Std_StreamMap_ofArray___redArg(v_streams_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_ofArray___boxed(lean_object* v_00_u03b1_132_, lean_object* v_00_u03b2_133_, lean_object* v_inst_134_, lean_object* v_streams_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Std_StreamMap_ofArray(v_00_u03b1_132_, v_00_u03b2_133_, v_inst_134_, v_streams_135_);
lean_dec_ref(v_streams_135_);
lean_dec_ref(v_inst_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg___lam__0(lean_object* v_fst_137_, lean_object* v_x_138_){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_140_, 0, v_fst_137_);
lean_ctor_set(v___x_140_, 1, v_x_138_);
v___x_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
v___x_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg___lam__0___boxed(lean_object* v_fst_143_, lean_object* v_x_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg___lam__0(v_fst_143_, v_x_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg(size_t v_sz_147_, size_t v_i_148_, lean_object* v_bs_149_){
_start:
{
uint8_t v___x_150_; 
v___x_150_ = lean_usize_dec_lt(v_i_148_, v_sz_147_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; 
v___x_151_ = l_unsafeCast___redArg(v_bs_149_);
lean_dec_ref(v_bs_149_);
return v___x_151_;
}
else
{
lean_object* v_v_152_; lean_object* v___x_153_; lean_object* v_snd_154_; lean_object* v_fst_155_; lean_object* v_fst_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_171_; 
v_v_152_ = lean_array_uget_borrowed(v_bs_149_, v_i_148_);
v___x_153_ = l_unsafeCast___redArg(v_v_152_);
v_snd_154_ = lean_ctor_get(v___x_153_, 1);
lean_inc(v_snd_154_);
v_fst_155_ = lean_ctor_get(v___x_153_, 0);
lean_inc(v_fst_155_);
lean_dec(v___x_153_);
v_fst_156_ = lean_ctor_get(v_snd_154_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v_snd_154_);
if (v_isSharedCheck_171_ == 0)
{
lean_object* v_unused_172_; 
v_unused_172_ = lean_ctor_get(v_snd_154_, 1);
lean_dec(v_unused_172_);
v___x_158_ = v_snd_154_;
v_isShared_159_ = v_isSharedCheck_171_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_fst_156_);
lean_dec(v_snd_154_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_171_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v_bs_x27_161_; lean_object* v___f_162_; lean_object* v___x_164_; 
v___x_160_ = lean_unsigned_to_nat(0u);
v_bs_x27_161_ = lean_array_uset(v_bs_149_, v_i_148_, v___x_160_);
v___f_162_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_162_, 0, v_fst_155_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v___f_162_);
v___x_164_ = v___x_158_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_fst_156_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___f_162_);
v___x_164_ = v_reuseFailAlloc_170_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
size_t v___x_165_; size_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_165_ = ((size_t)1ULL);
v___x_166_ = lean_usize_add(v_i_148_, v___x_165_);
v___x_167_ = l_unsafeCast___redArg(v___x_164_);
lean_dec_ref(v___x_164_);
v___x_168_ = lean_array_uset(v_bs_x27_161_, v_i_148_, v___x_167_);
v_i_148_ = v___x_166_;
v_bs_149_ = v___x_168_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg___boxed(lean_object* v_sz_173_, lean_object* v_i_174_, lean_object* v_bs_175_){
_start:
{
size_t v_sz_boxed_176_; size_t v_i_boxed_177_; lean_object* v_res_178_; 
v_sz_boxed_176_ = lean_unbox_usize(v_sz_173_);
lean_dec(v_sz_173_);
v_i_boxed_177_ = lean_unbox_usize(v_i_174_);
lean_dec(v_i_174_);
v_res_178_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg(v_sz_boxed_176_, v_i_boxed_177_, v_bs_175_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_selector___redArg(lean_object* v_stream_179_){
_start:
{
lean_object* v_val_182_; size_t v_sz_184_; size_t v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v_selectables_188_; lean_object* v___x_189_; 
v_sz_184_ = lean_array_size(v_stream_179_);
v___x_185_ = ((size_t)0ULL);
v___x_186_ = l_unsafeCast___redArg(v_stream_179_);
v___x_187_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg(v_sz_184_, v___x_185_, v___x_186_);
v_selectables_188_ = l_unsafeCast___redArg(v___x_187_);
lean_dec_ref(v___x_187_);
v___x_189_ = l_Std_Async_Selectable_combine___redArg(v_selectables_188_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_197_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_197_ == 0)
{
v___x_192_ = v___x_189_;
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_189_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
lean_ctor_set_tag(v___x_192_, 1);
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_a_190_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
v_val_182_ = v___x_195_;
goto v___jp_181_;
}
}
}
else
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
v_a_198_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_189_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_189_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_203_; 
if (v_isShared_201_ == 0)
{
lean_ctor_set_tag(v___x_200_, 0);
v___x_203_ = v___x_200_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_198_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
v_val_182_ = v___x_203_;
goto v___jp_181_;
}
}
}
v___jp_181_:
{
lean_object* v___x_183_; 
v___x_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_183_, 0, v_val_182_);
return v___x_183_;
}
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_selector___redArg___boxed(lean_object* v_stream_206_, lean_object* v_a_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Std_StreamMap_selector___redArg(v_stream_206_);
lean_dec_ref(v_stream_206_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_selector(lean_object* v_00_u03b1_209_, lean_object* v_00_u03b2_210_, lean_object* v_stream_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Std_StreamMap_selector___redArg(v_stream_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_selector___boxed(lean_object* v_00_u03b1_214_, lean_object* v_00_u03b2_215_, lean_object* v_stream_216_, lean_object* v_a_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Std_StreamMap_selector(v_00_u03b1_214_, v_00_u03b2_215_, v_stream_216_);
lean_dec_ref(v_stream_216_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0(lean_object* v_00_u03b1_219_, lean_object* v_00_u03b2_220_, size_t v_sz_221_, size_t v_i_222_, lean_object* v_bs_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg(v_sz_221_, v_i_222_, v_bs_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___boxed(lean_object* v_00_u03b1_225_, lean_object* v_00_u03b2_226_, lean_object* v_sz_227_, lean_object* v_i_228_, lean_object* v_bs_229_){
_start:
{
size_t v_sz_boxed_230_; size_t v_i_boxed_231_; lean_object* v_res_232_; 
v_sz_boxed_230_ = lean_unbox_usize(v_sz_227_);
lean_dec(v_sz_227_);
v_i_boxed_231_ = lean_unbox_usize(v_i_228_);
lean_dec(v_i_228_);
v_res_232_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0(v_00_u03b1_225_, v_00_u03b2_226_, v_sz_boxed_230_, v_i_boxed_231_, v_bs_229_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_recv___redArg(lean_object* v_stream_233_){
_start:
{
size_t v_sz_235_; size_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v_selectables_239_; lean_object* v___x_240_; 
v_sz_235_ = lean_array_size(v_stream_233_);
v___x_236_ = ((size_t)0ULL);
v___x_237_ = l_unsafeCast___redArg(v_stream_233_);
v___x_238_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg(v_sz_235_, v___x_236_, v___x_237_);
v_selectables_239_ = l_unsafeCast___redArg(v___x_238_);
lean_dec_ref(v___x_238_);
v___x_240_ = l_Std_Async_Selectable_one___redArg(v_selectables_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_recv___redArg___boxed(lean_object* v_stream_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Std_StreamMap_recv___redArg(v_stream_241_);
lean_dec_ref(v_stream_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_recv(lean_object* v_00_u03b1_244_, lean_object* v_00_u03b2_245_, lean_object* v_stream_246_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l_Std_StreamMap_recv___redArg(v_stream_246_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_recv___boxed(lean_object* v_00_u03b1_249_, lean_object* v_00_u03b2_250_, lean_object* v_stream_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Std_StreamMap_recv(v_00_u03b1_249_, v_00_u03b2_250_, v_stream_251_);
lean_dec_ref(v_stream_251_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_tryRecv___redArg(lean_object* v_stream_254_){
_start:
{
size_t v_sz_256_; size_t v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v_selectables_260_; lean_object* v___x_261_; 
v_sz_256_ = lean_array_size(v_stream_254_);
v___x_257_ = ((size_t)0ULL);
v___x_258_ = l_unsafeCast___redArg(v_stream_254_);
v___x_259_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_selector_spec__0___redArg(v_sz_256_, v___x_257_, v___x_258_);
v_selectables_260_ = l_unsafeCast___redArg(v___x_259_);
lean_dec_ref(v___x_259_);
v___x_261_ = l_Std_Async_Selectable_tryOne___redArg(v_selectables_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_tryRecv___redArg___boxed(lean_object* v_stream_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Std_StreamMap_tryRecv___redArg(v_stream_262_);
lean_dec_ref(v_stream_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_tryRecv(lean_object* v_00_u03b1_265_, lean_object* v_00_u03b2_266_, lean_object* v_stream_267_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l_Std_StreamMap_tryRecv___redArg(v_stream_267_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_tryRecv___boxed(lean_object* v_00_u03b1_270_, lean_object* v_00_u03b2_271_, lean_object* v_stream_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Std_StreamMap_tryRecv(v_00_u03b1_270_, v_00_u03b2_271_, v_stream_272_);
lean_dec_ref(v_stream_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_unregister___redArg(lean_object* v_inst_275_, lean_object* v_sm_276_, lean_object* v_name_277_){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_278_ = lean_unsigned_to_nat(0u);
v___x_279_ = lean_array_get_size(v_sm_276_);
v___x_280_ = ((lean_object*)(l_Std_StreamMap_empty___redArg___closed__0));
v___x_281_ = ((lean_object*)(l_Std_StreamMap_register___redArg___closed__9));
v___x_282_ = lean_nat_dec_lt(v___x_278_, v___x_279_);
if (v___x_282_ == 0)
{
lean_dec(v_name_277_);
lean_dec_ref(v_sm_276_);
lean_dec_ref(v_inst_275_);
return v___x_280_;
}
else
{
lean_object* v___f_283_; uint8_t v___x_284_; 
v___f_283_ = lean_alloc_closure((void*)(l_Std_StreamMap_register___redArg___lam__0), 4, 2);
lean_closure_set(v___f_283_, 0, v_inst_275_);
lean_closure_set(v___f_283_, 1, v_name_277_);
v___x_284_ = lean_nat_dec_le(v___x_279_, v___x_279_);
if (v___x_284_ == 0)
{
if (v___x_282_ == 0)
{
lean_dec_ref(v___f_283_);
lean_dec_ref(v_sm_276_);
return v___x_280_;
}
else
{
size_t v___x_285_; size_t v___x_286_; lean_object* v___x_287_; 
v___x_285_ = ((size_t)0ULL);
v___x_286_ = lean_usize_of_nat(v___x_279_);
v___x_287_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_281_, v___f_283_, v_sm_276_, v___x_285_, v___x_286_, v___x_280_);
return v___x_287_;
}
}
else
{
size_t v___x_288_; size_t v___x_289_; lean_object* v___x_290_; 
v___x_288_ = ((size_t)0ULL);
v___x_289_ = lean_usize_of_nat(v___x_279_);
v___x_290_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_281_, v___f_283_, v_sm_276_, v___x_288_, v___x_289_, v___x_280_);
return v___x_290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_unregister(lean_object* v_00_u03b1_291_, lean_object* v_00_u03b2_292_, lean_object* v_inst_293_, lean_object* v_sm_294_, lean_object* v_name_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Std_StreamMap_unregister___redArg(v_inst_293_, v_sm_294_, v_name_295_);
return v___x_296_;
}
}
LEAN_EXPORT uint8_t l_Std_StreamMap_contains___redArg___lam__0(lean_object* v_inst_297_, lean_object* v_name_298_, lean_object* v_x_299_){
_start:
{
lean_object* v_fst_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v_fst_300_ = lean_ctor_get(v_x_299_, 0);
lean_inc(v_fst_300_);
lean_dec_ref(v_x_299_);
v___x_301_ = lean_apply_2(v_inst_297_, v_fst_300_, v_name_298_);
v___x_302_ = lean_unbox(v___x_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_contains___redArg___lam__0___boxed(lean_object* v_inst_303_, lean_object* v_name_304_, lean_object* v_x_305_){
_start:
{
uint8_t v_res_306_; lean_object* v_r_307_; 
v_res_306_ = l_Std_StreamMap_contains___redArg___lam__0(v_inst_303_, v_name_304_, v_x_305_);
v_r_307_ = lean_box(v_res_306_);
return v_r_307_;
}
}
LEAN_EXPORT uint8_t l_Std_StreamMap_contains___redArg(lean_object* v_inst_308_, lean_object* v_sm_309_, lean_object* v_name_310_){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = lean_array_get_size(v_sm_309_);
v___x_313_ = ((lean_object*)(l_Std_StreamMap_register___redArg___closed__9));
v___x_314_ = lean_nat_dec_lt(v___x_311_, v___x_312_);
if (v___x_314_ == 0)
{
lean_dec(v_name_310_);
lean_dec_ref(v_sm_309_);
lean_dec_ref(v_inst_308_);
return v___x_314_;
}
else
{
if (v___x_314_ == 0)
{
lean_dec(v_name_310_);
lean_dec_ref(v_sm_309_);
lean_dec_ref(v_inst_308_);
return v___x_314_;
}
else
{
lean_object* v___f_315_; size_t v___x_316_; size_t v___x_317_; lean_object* v___x_318_; uint8_t v___x_319_; 
v___f_315_ = lean_alloc_closure((void*)(l_Std_StreamMap_contains___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_315_, 0, v_inst_308_);
lean_closure_set(v___f_315_, 1, v_name_310_);
v___x_316_ = ((size_t)0ULL);
v___x_317_ = lean_usize_of_nat(v___x_312_);
v___x_318_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_313_, v___f_315_, v_sm_309_, v___x_316_, v___x_317_);
v___x_319_ = lean_unbox(v___x_318_);
lean_dec(v___x_318_);
return v___x_319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_contains___redArg___boxed(lean_object* v_inst_320_, lean_object* v_sm_321_, lean_object* v_name_322_){
_start:
{
uint8_t v_res_323_; lean_object* v_r_324_; 
v_res_323_ = l_Std_StreamMap_contains___redArg(v_inst_320_, v_sm_321_, v_name_322_);
v_r_324_ = lean_box(v_res_323_);
return v_r_324_;
}
}
LEAN_EXPORT uint8_t l_Std_StreamMap_contains(lean_object* v_00_u03b1_325_, lean_object* v_00_u03b2_326_, lean_object* v_inst_327_, lean_object* v_sm_328_, lean_object* v_name_329_){
_start:
{
uint8_t v___x_330_; 
v___x_330_ = l_Std_StreamMap_contains___redArg(v_inst_327_, v_sm_328_, v_name_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_contains___boxed(lean_object* v_00_u03b1_331_, lean_object* v_00_u03b2_332_, lean_object* v_inst_333_, lean_object* v_sm_334_, lean_object* v_name_335_){
_start:
{
uint8_t v_res_336_; lean_object* v_r_337_; 
v_res_336_ = l_Std_StreamMap_contains(v_00_u03b1_331_, v_00_u03b2_332_, v_inst_333_, v_sm_334_, v_name_335_);
v_r_337_ = lean_box(v_res_336_);
return v_r_337_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_size___redArg(lean_object* v_sm_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_array_get_size(v_sm_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_size___redArg___boxed(lean_object* v_sm_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Std_StreamMap_size___redArg(v_sm_340_);
lean_dec_ref(v_sm_340_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_size(lean_object* v_00_u03b1_342_, lean_object* v_00_u03b2_343_, lean_object* v_sm_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_array_get_size(v_sm_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_size___boxed(lean_object* v_00_u03b1_346_, lean_object* v_00_u03b2_347_, lean_object* v_sm_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Std_StreamMap_size(v_00_u03b1_346_, v_00_u03b2_347_, v_sm_348_);
lean_dec_ref(v_sm_348_);
return v_res_349_;
}
}
LEAN_EXPORT uint8_t l_Std_StreamMap_isEmpty___redArg(lean_object* v_sm_350_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_351_ = lean_array_get_size(v_sm_350_);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = lean_nat_dec_eq(v___x_351_, v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_isEmpty___redArg___boxed(lean_object* v_sm_354_){
_start:
{
uint8_t v_res_355_; lean_object* v_r_356_; 
v_res_355_ = l_Std_StreamMap_isEmpty___redArg(v_sm_354_);
lean_dec_ref(v_sm_354_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
LEAN_EXPORT uint8_t l_Std_StreamMap_isEmpty(lean_object* v_00_u03b1_357_, lean_object* v_00_u03b2_358_, lean_object* v_sm_359_){
_start:
{
uint8_t v___x_360_; 
v___x_360_ = l_Std_StreamMap_isEmpty___redArg(v_sm_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_isEmpty___boxed(lean_object* v_00_u03b1_361_, lean_object* v_00_u03b2_362_, lean_object* v_sm_363_){
_start:
{
uint8_t v_res_364_; lean_object* v_r_365_; 
v_res_364_ = l_Std_StreamMap_isEmpty(v_00_u03b1_361_, v_00_u03b2_362_, v_sm_363_);
lean_dec_ref(v_sm_363_);
v_r_365_ = lean_box(v_res_364_);
return v_r_365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0___redArg(size_t v_sz_366_, size_t v_i_367_, lean_object* v_bs_368_){
_start:
{
uint8_t v___x_369_; 
v___x_369_ = lean_usize_dec_lt(v_i_367_, v_sz_366_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; 
v___x_370_ = l_unsafeCast___redArg(v_bs_368_);
lean_dec_ref(v_bs_368_);
return v___x_370_;
}
else
{
lean_object* v_v_371_; lean_object* v___x_372_; lean_object* v_fst_373_; lean_object* v___x_374_; lean_object* v_bs_x27_375_; size_t v___x_376_; size_t v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v_v_371_ = lean_array_uget_borrowed(v_bs_368_, v_i_367_);
v___x_372_ = l_unsafeCast___redArg(v_v_371_);
v_fst_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_fst_373_);
lean_dec(v___x_372_);
v___x_374_ = lean_unsigned_to_nat(0u);
v_bs_x27_375_ = lean_array_uset(v_bs_368_, v_i_367_, v___x_374_);
v___x_376_ = ((size_t)1ULL);
v___x_377_ = lean_usize_add(v_i_367_, v___x_376_);
v___x_378_ = l_unsafeCast___redArg(v_fst_373_);
lean_dec(v_fst_373_);
v___x_379_ = lean_array_uset(v_bs_x27_375_, v_i_367_, v___x_378_);
v_i_367_ = v___x_377_;
v_bs_368_ = v___x_379_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0___redArg___boxed(lean_object* v_sz_381_, lean_object* v_i_382_, lean_object* v_bs_383_){
_start:
{
size_t v_sz_boxed_384_; size_t v_i_boxed_385_; lean_object* v_res_386_; 
v_sz_boxed_384_ = lean_unbox_usize(v_sz_381_);
lean_dec(v_sz_381_);
v_i_boxed_385_ = lean_unbox_usize(v_i_382_);
lean_dec(v_i_382_);
v_res_386_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0___redArg(v_sz_boxed_384_, v_i_boxed_385_, v_bs_383_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_keys___redArg(lean_object* v_sm_387_){
_start:
{
size_t v_sz_388_; size_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v_sz_388_ = lean_array_size(v_sm_387_);
v___x_389_ = ((size_t)0ULL);
v___x_390_ = l_unsafeCast___redArg(v_sm_387_);
v___x_391_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0___redArg(v_sz_388_, v___x_389_, v___x_390_);
v___x_392_ = l_unsafeCast___redArg(v___x_391_);
lean_dec_ref(v___x_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_keys___redArg___boxed(lean_object* v_sm_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Std_StreamMap_keys___redArg(v_sm_393_);
lean_dec_ref(v_sm_393_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_keys(lean_object* v_00_u03b1_395_, lean_object* v_00_u03b2_396_, lean_object* v_sm_397_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l_Std_StreamMap_keys___redArg(v_sm_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_keys___boxed(lean_object* v_00_u03b1_399_, lean_object* v_00_u03b2_400_, lean_object* v_sm_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Std_StreamMap_keys(v_00_u03b1_399_, v_00_u03b2_400_, v_sm_401_);
lean_dec_ref(v_sm_401_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0(lean_object* v_00_u03b1_403_, lean_object* v_00_u03b2_404_, size_t v_sz_405_, size_t v_i_406_, lean_object* v_bs_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0___redArg(v_sz_405_, v_i_406_, v_bs_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0___boxed(lean_object* v_00_u03b1_409_, lean_object* v_00_u03b2_410_, lean_object* v_sz_411_, lean_object* v_i_412_, lean_object* v_bs_413_){
_start:
{
size_t v_sz_boxed_414_; size_t v_i_boxed_415_; lean_object* v_res_416_; 
v_sz_boxed_414_ = lean_unbox_usize(v_sz_411_);
lean_dec(v_sz_411_);
v_i_boxed_415_ = lean_unbox_usize(v_i_412_);
lean_dec(v_i_412_);
v_res_416_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_keys_spec__0(v_00_u03b1_409_, v_00_u03b2_410_, v_sz_boxed_414_, v_i_boxed_415_, v_bs_413_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_get_x3f___redArg___lam__0(lean_object* v_inst_417_, lean_object* v_name_418_, lean_object* v___x_419_, lean_object* v___x_420_, lean_object* v_a_421_, lean_object* v_x_422_, lean_object* v___y_423_){
_start:
{
lean_object* v_fst_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v_fst_424_ = lean_ctor_get(v_a_421_, 0);
lean_inc(v_fst_424_);
v___x_425_ = lean_apply_2(v_inst_417_, v_fst_424_, v_name_418_);
v___x_426_ = lean_unbox(v___x_425_);
if (v___x_426_ == 0)
{
lean_object* v___x_427_; 
lean_dec_ref(v_a_421_);
v___x_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_427_, 0, v___x_419_);
return v___x_427_;
}
else
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
lean_dec_ref(v___x_419_);
v___x_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_428_, 0, v_a_421_);
v___x_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
v___x_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v___x_420_);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_get_x3f___redArg___lam__0___boxed(lean_object* v_inst_432_, lean_object* v_name_433_, lean_object* v___x_434_, lean_object* v___x_435_, lean_object* v_a_436_, lean_object* v_x_437_, lean_object* v___y_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Std_StreamMap_get_x3f___redArg___lam__0(v_inst_432_, v_name_433_, v___x_434_, v___x_435_, v_a_436_, v_x_437_, v___y_438_);
lean_dec_ref(v___y_438_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_get_x3f___redArg(lean_object* v_inst_443_, lean_object* v_sm_444_, lean_object* v_name_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___f_450_; size_t v_sz_451_; size_t v___x_452_; lean_object* v___x_453_; lean_object* v_fst_454_; 
v___x_446_ = ((lean_object*)(l_Std_StreamMap_register___redArg___closed__9));
v___x_447_ = lean_box(0);
v___x_448_ = lean_box(0);
v___x_449_ = ((lean_object*)(l_Std_StreamMap_get_x3f___redArg___closed__0));
v___f_450_ = lean_alloc_closure((void*)(l_Std_StreamMap_get_x3f___redArg___lam__0___boxed), 7, 4);
lean_closure_set(v___f_450_, 0, v_inst_443_);
lean_closure_set(v___f_450_, 1, v_name_445_);
lean_closure_set(v___f_450_, 2, v___x_449_);
lean_closure_set(v___f_450_, 3, v___x_448_);
v_sz_451_ = lean_array_size(v_sm_444_);
v___x_452_ = ((size_t)0ULL);
v___x_453_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_446_, v_sm_444_, v___f_450_, v_sz_451_, v___x_452_, v___x_449_);
v_fst_454_ = lean_ctor_get(v___x_453_, 0);
lean_inc(v_fst_454_);
lean_dec(v___x_453_);
if (lean_obj_tag(v_fst_454_) == 0)
{
return v___x_447_;
}
else
{
lean_object* v_val_455_; 
v_val_455_ = lean_ctor_get(v_fst_454_, 0);
lean_inc(v_val_455_);
lean_dec_ref_known(v_fst_454_, 1);
if (lean_obj_tag(v_val_455_) == 0)
{
return v___x_447_;
}
else
{
lean_object* v_val_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_465_; 
v_val_456_ = lean_ctor_get(v_val_455_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v_val_455_);
if (v_isSharedCheck_465_ == 0)
{
v___x_458_ = v_val_455_;
v_isShared_459_ = v_isSharedCheck_465_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_val_456_);
lean_dec(v_val_455_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_465_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v_snd_460_; lean_object* v_fst_461_; lean_object* v___x_463_; 
v_snd_460_ = lean_ctor_get(v_val_456_, 1);
lean_inc(v_snd_460_);
lean_dec(v_val_456_);
v_fst_461_ = lean_ctor_get(v_snd_460_, 0);
lean_inc(v_fst_461_);
lean_dec(v_snd_460_);
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 0, v_fst_461_);
v___x_463_ = v___x_458_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_fst_461_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_get_x3f(lean_object* v_00_u03b1_466_, lean_object* v_00_u03b2_467_, lean_object* v_inst_468_, lean_object* v_sm_469_, lean_object* v_name_470_){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = l_Std_StreamMap_get_x3f___redArg(v_inst_468_, v_sm_469_, v_name_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0___redArg(lean_object* v_pred_472_, lean_object* v_as_473_, size_t v_i_474_, size_t v_stop_475_, lean_object* v_b_476_){
_start:
{
lean_object* v___y_478_; uint8_t v___x_482_; 
v___x_482_ = lean_usize_dec_eq(v_i_474_, v_stop_475_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v_fst_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_483_ = lean_array_uget_borrowed(v_as_473_, v_i_474_);
v_fst_484_ = lean_ctor_get(v___x_483_, 0);
lean_inc_ref(v_pred_472_);
lean_inc(v_fst_484_);
v___x_485_ = lean_apply_1(v_pred_472_, v_fst_484_);
v___x_486_ = lean_unbox(v___x_485_);
if (v___x_486_ == 0)
{
v___y_478_ = v_b_476_;
goto v___jp_477_;
}
else
{
lean_object* v___x_487_; 
lean_inc(v___x_483_);
v___x_487_ = lean_array_push(v_b_476_, v___x_483_);
v___y_478_ = v___x_487_;
goto v___jp_477_;
}
}
else
{
lean_dec_ref(v_pred_472_);
return v_b_476_;
}
v___jp_477_:
{
size_t v___x_479_; size_t v___x_480_; 
v___x_479_ = ((size_t)1ULL);
v___x_480_ = lean_usize_add(v_i_474_, v___x_479_);
v_i_474_ = v___x_480_;
v_b_476_ = v___y_478_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0___redArg___boxed(lean_object* v_pred_488_, lean_object* v_as_489_, lean_object* v_i_490_, lean_object* v_stop_491_, lean_object* v_b_492_){
_start:
{
size_t v_i_boxed_493_; size_t v_stop_boxed_494_; lean_object* v_res_495_; 
v_i_boxed_493_ = lean_unbox_usize(v_i_490_);
lean_dec(v_i_490_);
v_stop_boxed_494_ = lean_unbox_usize(v_stop_491_);
lean_dec(v_stop_491_);
v_res_495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0___redArg(v_pred_488_, v_as_489_, v_i_boxed_493_, v_stop_boxed_494_, v_b_492_);
lean_dec_ref(v_as_489_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_filterByName___redArg(lean_object* v_sm_496_, lean_object* v_pred_497_){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = lean_array_get_size(v_sm_496_);
v___x_500_ = ((lean_object*)(l_Std_StreamMap_empty___redArg___closed__0));
v___x_501_ = lean_nat_dec_lt(v___x_498_, v___x_499_);
if (v___x_501_ == 0)
{
lean_dec_ref(v_pred_497_);
return v___x_500_;
}
else
{
uint8_t v___x_502_; 
v___x_502_ = lean_nat_dec_le(v___x_499_, v___x_499_);
if (v___x_502_ == 0)
{
if (v___x_501_ == 0)
{
lean_dec_ref(v_pred_497_);
return v___x_500_;
}
else
{
size_t v___x_503_; size_t v___x_504_; lean_object* v___x_505_; 
v___x_503_ = ((size_t)0ULL);
v___x_504_ = lean_usize_of_nat(v___x_499_);
v___x_505_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0___redArg(v_pred_497_, v_sm_496_, v___x_503_, v___x_504_, v___x_500_);
return v___x_505_;
}
}
else
{
size_t v___x_506_; size_t v___x_507_; lean_object* v___x_508_; 
v___x_506_ = ((size_t)0ULL);
v___x_507_ = lean_usize_of_nat(v___x_499_);
v___x_508_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0___redArg(v_pred_497_, v_sm_496_, v___x_506_, v___x_507_, v___x_500_);
return v___x_508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_filterByName___redArg___boxed(lean_object* v_sm_509_, lean_object* v_pred_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Std_StreamMap_filterByName___redArg(v_sm_509_, v_pred_510_);
lean_dec_ref(v_sm_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_filterByName(lean_object* v_00_u03b1_512_, lean_object* v_00_u03b2_513_, lean_object* v_sm_514_, lean_object* v_pred_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = l_Std_StreamMap_filterByName___redArg(v_sm_514_, v_pred_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_filterByName___boxed(lean_object* v_00_u03b1_517_, lean_object* v_00_u03b2_518_, lean_object* v_sm_519_, lean_object* v_pred_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Std_StreamMap_filterByName(v_00_u03b1_517_, v_00_u03b2_518_, v_sm_519_, v_pred_520_);
lean_dec_ref(v_sm_519_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0(lean_object* v_00_u03b1_522_, lean_object* v_00_u03b2_523_, lean_object* v_pred_524_, lean_object* v_as_525_, size_t v_i_526_, size_t v_stop_527_, lean_object* v_b_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0___redArg(v_pred_524_, v_as_525_, v_i_526_, v_stop_527_, v_b_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0___boxed(lean_object* v_00_u03b1_530_, lean_object* v_00_u03b2_531_, lean_object* v_pred_532_, lean_object* v_as_533_, lean_object* v_i_534_, lean_object* v_stop_535_, lean_object* v_b_536_){
_start:
{
size_t v_i_boxed_537_; size_t v_stop_boxed_538_; lean_object* v_res_539_; 
v_i_boxed_537_ = lean_unbox_usize(v_i_534_);
lean_dec(v_i_534_);
v_stop_boxed_538_ = lean_unbox_usize(v_stop_535_);
lean_dec(v_stop_535_);
v_res_539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_filterByName_spec__0(v_00_u03b1_530_, v_00_u03b2_531_, v_pred_532_, v_as_533_, v_i_boxed_537_, v_stop_boxed_538_, v_b_536_);
lean_dec_ref(v_as_533_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0___redArg(size_t v_sz_540_, size_t v_i_541_, lean_object* v_bs_542_){
_start:
{
uint8_t v___x_543_; 
v___x_543_ = lean_usize_dec_lt(v_i_541_, v_sz_540_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; 
v___x_544_ = l_unsafeCast___redArg(v_bs_542_);
lean_dec_ref(v_bs_542_);
return v___x_544_;
}
else
{
lean_object* v_v_545_; lean_object* v___x_546_; lean_object* v_snd_547_; lean_object* v_fst_548_; lean_object* v_fst_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_563_; 
v_v_545_ = lean_array_uget_borrowed(v_bs_542_, v_i_541_);
v___x_546_ = l_unsafeCast___redArg(v_v_545_);
v_snd_547_ = lean_ctor_get(v___x_546_, 1);
lean_inc(v_snd_547_);
v_fst_548_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_fst_548_);
lean_dec(v___x_546_);
v_fst_549_ = lean_ctor_get(v_snd_547_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v_snd_547_);
if (v_isSharedCheck_563_ == 0)
{
lean_object* v_unused_564_; 
v_unused_564_ = lean_ctor_get(v_snd_547_, 1);
lean_dec(v_unused_564_);
v___x_551_ = v_snd_547_;
v_isShared_552_ = v_isSharedCheck_563_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_fst_549_);
lean_dec(v_snd_547_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_563_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v_bs_x27_554_; lean_object* v___x_556_; 
v___x_553_ = lean_unsigned_to_nat(0u);
v_bs_x27_554_ = lean_array_uset(v_bs_542_, v_i_541_, v___x_553_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 1, v_fst_549_);
lean_ctor_set(v___x_551_, 0, v_fst_548_);
v___x_556_ = v___x_551_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_fst_548_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v_fst_549_);
v___x_556_ = v_reuseFailAlloc_562_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
size_t v___x_557_; size_t v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_557_ = ((size_t)1ULL);
v___x_558_ = lean_usize_add(v_i_541_, v___x_557_);
v___x_559_ = l_unsafeCast___redArg(v___x_556_);
lean_dec_ref(v___x_556_);
v___x_560_ = lean_array_uset(v_bs_x27_554_, v_i_541_, v___x_559_);
v_i_541_ = v___x_558_;
v_bs_542_ = v___x_560_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0___redArg___boxed(lean_object* v_sz_565_, lean_object* v_i_566_, lean_object* v_bs_567_){
_start:
{
size_t v_sz_boxed_568_; size_t v_i_boxed_569_; lean_object* v_res_570_; 
v_sz_boxed_568_ = lean_unbox_usize(v_sz_565_);
lean_dec(v_sz_565_);
v_i_boxed_569_ = lean_unbox_usize(v_i_566_);
lean_dec(v_i_566_);
v_res_570_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0___redArg(v_sz_boxed_568_, v_i_boxed_569_, v_bs_567_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_toArray___redArg(lean_object* v_sm_571_){
_start:
{
size_t v_sz_572_; size_t v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v_sz_572_ = lean_array_size(v_sm_571_);
v___x_573_ = ((size_t)0ULL);
v___x_574_ = l_unsafeCast___redArg(v_sm_571_);
v___x_575_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0___redArg(v_sz_572_, v___x_573_, v___x_574_);
v___x_576_ = l_unsafeCast___redArg(v___x_575_);
lean_dec_ref(v___x_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_toArray___redArg___boxed(lean_object* v_sm_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Std_StreamMap_toArray___redArg(v_sm_577_);
lean_dec_ref(v_sm_577_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_toArray(lean_object* v_00_u03b1_579_, lean_object* v_00_u03b2_580_, lean_object* v_sm_581_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Std_StreamMap_toArray___redArg(v_sm_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_toArray___boxed(lean_object* v_00_u03b1_583_, lean_object* v_00_u03b2_584_, lean_object* v_sm_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Std_StreamMap_toArray(v_00_u03b1_583_, v_00_u03b2_584_, v_sm_585_);
lean_dec_ref(v_sm_585_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0(lean_object* v_00_u03b1_587_, lean_object* v_00_u03b2_588_, size_t v_sz_589_, size_t v_i_590_, lean_object* v_bs_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0___redArg(v_sz_589_, v_i_590_, v_bs_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0___boxed(lean_object* v_00_u03b1_593_, lean_object* v_00_u03b2_594_, lean_object* v_sz_595_, lean_object* v_i_596_, lean_object* v_bs_597_){
_start:
{
size_t v_sz_boxed_598_; size_t v_i_boxed_599_; lean_object* v_res_600_; 
v_sz_boxed_598_ = lean_unbox_usize(v_sz_595_);
lean_dec(v_sz_595_);
v_i_boxed_599_ = lean_unbox_usize(v_i_596_);
lean_dec(v_i_596_);
v_res_600_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_StreamMap_toArray_spec__0(v_00_u03b1_593_, v_00_u03b2_594_, v_sz_boxed_598_, v_i_boxed_599_, v_bs_597_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0___redArg(lean_object* v_as_601_, size_t v_i_602_, size_t v_stop_603_, lean_object* v_b_604_){
_start:
{
uint8_t v___x_606_; 
v___x_606_ = lean_usize_dec_eq(v_i_602_, v_stop_603_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v_snd_608_; lean_object* v_snd_609_; lean_object* v___x_610_; 
v___x_607_ = lean_array_uget_borrowed(v_as_601_, v_i_602_);
v_snd_608_ = lean_ctor_get(v___x_607_, 1);
v_snd_609_ = lean_ctor_get(v_snd_608_, 1);
lean_inc(v_snd_609_);
v___x_610_ = lean_apply_1(v_snd_609_, lean_box(0));
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; size_t v___x_612_; size_t v___x_613_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
lean_inc(v_a_611_);
lean_dec_ref_known(v___x_610_, 1);
v___x_612_ = ((size_t)1ULL);
v___x_613_ = lean_usize_add(v_i_602_, v___x_612_);
v_i_602_ = v___x_613_;
v_b_604_ = v_a_611_;
goto _start;
}
else
{
return v___x_610_;
}
}
else
{
lean_object* v___x_615_; 
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v_b_604_);
return v___x_615_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0___redArg___boxed(lean_object* v_as_616_, lean_object* v_i_617_, lean_object* v_stop_618_, lean_object* v_b_619_, lean_object* v___y_620_){
_start:
{
size_t v_i_boxed_621_; size_t v_stop_boxed_622_; lean_object* v_res_623_; 
v_i_boxed_621_ = lean_unbox_usize(v_i_617_);
lean_dec(v_i_617_);
v_stop_boxed_622_ = lean_unbox_usize(v_stop_618_);
lean_dec(v_stop_618_);
v_res_623_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0___redArg(v_as_616_, v_i_boxed_621_, v_stop_boxed_622_, v_b_619_);
lean_dec_ref(v_as_616_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_close___redArg(lean_object* v_sm_624_){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; uint8_t v___x_629_; 
v___x_626_ = lean_unsigned_to_nat(0u);
v___x_627_ = lean_array_get_size(v_sm_624_);
v___x_628_ = lean_box(0);
v___x_629_ = lean_nat_dec_lt(v___x_626_, v___x_627_);
if (v___x_629_ == 0)
{
lean_object* v___x_630_; 
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_628_);
return v___x_630_;
}
else
{
uint8_t v___x_631_; 
v___x_631_ = lean_nat_dec_le(v___x_627_, v___x_627_);
if (v___x_631_ == 0)
{
if (v___x_629_ == 0)
{
lean_object* v___x_632_; 
v___x_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_628_);
return v___x_632_;
}
else
{
size_t v___x_633_; size_t v___x_634_; lean_object* v___x_635_; 
v___x_633_ = ((size_t)0ULL);
v___x_634_ = lean_usize_of_nat(v___x_627_);
v___x_635_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0___redArg(v_sm_624_, v___x_633_, v___x_634_, v___x_628_);
return v___x_635_;
}
}
else
{
size_t v___x_636_; size_t v___x_637_; lean_object* v___x_638_; 
v___x_636_ = ((size_t)0ULL);
v___x_637_ = lean_usize_of_nat(v___x_627_);
v___x_638_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0___redArg(v_sm_624_, v___x_636_, v___x_637_, v___x_628_);
return v___x_638_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_close___redArg___boxed(lean_object* v_sm_639_, lean_object* v_a_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = l_Std_StreamMap_close___redArg(v_sm_639_);
lean_dec_ref(v_sm_639_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_close(lean_object* v_00_u03b1_642_, lean_object* v_00_u03b2_643_, lean_object* v_sm_644_){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = l_Std_StreamMap_close___redArg(v_sm_644_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Std_StreamMap_close___boxed(lean_object* v_00_u03b1_647_, lean_object* v_00_u03b2_648_, lean_object* v_sm_649_, lean_object* v_a_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_Std_StreamMap_close(v_00_u03b1_647_, v_00_u03b2_648_, v_sm_649_);
lean_dec_ref(v_sm_649_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0(lean_object* v_00_u03b1_652_, lean_object* v_00_u03b2_653_, lean_object* v_as_654_, size_t v_i_655_, size_t v_stop_656_, lean_object* v_b_657_){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0___redArg(v_as_654_, v_i_655_, v_stop_656_, v_b_657_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0___boxed(lean_object* v_00_u03b1_660_, lean_object* v_00_u03b2_661_, lean_object* v_as_662_, lean_object* v_i_663_, lean_object* v_stop_664_, lean_object* v_b_665_, lean_object* v___y_666_){
_start:
{
size_t v_i_boxed_667_; size_t v_stop_boxed_668_; lean_object* v_res_669_; 
v_i_boxed_667_ = lean_unbox_usize(v_i_663_);
lean_dec(v_i_663_);
v_stop_boxed_668_ = lean_unbox_usize(v_stop_664_);
lean_dec(v_stop_664_);
v_res_669_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_StreamMap_close_spec__0(v_00_u03b1_660_, v_00_u03b2_661_, v_as_662_, v_i_boxed_667_, v_stop_boxed_668_, v_b_665_);
lean_dec_ref(v_as_662_);
return v_res_669_;
}
}
lean_object* runtime_initialize_Std_Data(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Queue(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_IO(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Sync_StreamMap(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Sync_StreamMap(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data(uint8_t builtin);
lean_object* initialize_Init_Data_Queue(uint8_t builtin);
lean_object* initialize_Std_Async_IO(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Sync_StreamMap(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_StreamMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Sync_StreamMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Sync_StreamMap(builtin);
}
#ifdef __cplusplus
}
#endif

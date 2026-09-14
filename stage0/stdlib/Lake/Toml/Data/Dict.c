// Lean compiler output
// Module: Lake.Toml.Data.Dict
// Imports: public import Lean.Data.NameMap.Basic import Init.Data.Nat.Fold
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static const lean_array_object l_Lake_Toml_instInhabitedRBDict_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Toml_instInhabitedRBDict_default___redArg___closed__0 = (const lean_object*)&l_Lake_Toml_instInhabitedRBDict_default___redArg___closed__0_value;
static const lean_ctor_object l_Lake_Toml_instInhabitedRBDict_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Toml_instInhabitedRBDict_default___redArg___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_Toml_instInhabitedRBDict_default___redArg___closed__1 = (const lean_object*)&l_Lake_Toml_instInhabitedRBDict_default___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict_default___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_Toml_instInhabitedRBDict_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_instInhabitedRBDict_default___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict_default(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict_default___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_Toml_RBDict_empty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Toml_RBDict_empty___redArg___closed__0 = (const lean_object*)&l_Lake_Toml_RBDict_empty___redArg___closed__0_value;
static const lean_ctor_object l_Lake_Toml_RBDict_empty___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Toml_RBDict_empty___redArg___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_Toml_RBDict_empty___redArg___closed__1 = (const lean_object*)&l_Lake_Toml_RBDict_empty___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_empty___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_Toml_RBDict_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_RBDict_empty___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_empty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_empty___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instEmptyCollection___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instEmptyCollection(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instEmptyCollection___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_mkEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_mkEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_mkEmpty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_mkEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Toml_RBDict_ofArray_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_ofArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_ofArray(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Toml_RBDict_ofArray_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_beq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_beq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_beq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_beq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instBEqOfProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instBEqOfProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_size(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_size___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_isEmpty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_isEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_keys___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_keys___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_keys(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_keys___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_values___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_values___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_values(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_values___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_contains___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_contains___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_Toml_RBDict_findIdx_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_findIdx_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_findIdx_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_Toml_RBDict_findIdx_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_findEntry_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_findEntry_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_find_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_find_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_push___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_push(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_RBDict_alter___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_RBDict_alter___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_appendArray___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_appendArray___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_appendArray(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_appendArray___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instHAppendArrayProd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instHAppendArrayProd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_append___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_append___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_append(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_append___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instAppend___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instAppend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_map___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_RBDict_map___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_RBDict_map___redArg___closed__0 = (const lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__0_value;
static const lean_closure_object l_Lake_Toml_RBDict_map___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_RBDict_map___redArg___closed__1 = (const lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__1_value;
static const lean_closure_object l_Lake_Toml_RBDict_map___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_RBDict_map___redArg___closed__2 = (const lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__2_value;
static const lean_closure_object l_Lake_Toml_RBDict_map___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_RBDict_map___redArg___closed__3 = (const lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__3_value;
static const lean_closure_object l_Lake_Toml_RBDict_map___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_RBDict_map___redArg___closed__4 = (const lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__4_value;
static const lean_closure_object l_Lake_Toml_RBDict_map___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_RBDict_map___redArg___closed__5 = (const lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__5_value;
static const lean_closure_object l_Lake_Toml_RBDict_map___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_RBDict_map___redArg___closed__6 = (const lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__6_value;
static const lean_ctor_object l_Lake_Toml_RBDict_map___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__0_value),((lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__1_value)}};
static const lean_object* l_Lake_Toml_RBDict_map___redArg___closed__7 = (const lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__7_value;
static const lean_ctor_object l_Lake_Toml_RBDict_map___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__7_value),((lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__2_value),((lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__3_value),((lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__4_value),((lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__5_value)}};
static const lean_object* l_Lake_Toml_RBDict_map___redArg___closed__8 = (const lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__8_value;
static const lean_ctor_object l_Lake_Toml_RBDict_map___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__8_value),((lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__6_value)}};
static const lean_object* l_Lake_Toml_RBDict_map___redArg___closed__9 = (const lean_object*)&l_Lake_Toml_RBDict_map___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filterMap___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filterMap___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filterMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_foldM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_foldM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_foldM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_foldM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_fold___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict_default___redArg(){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = ((lean_object*)(l_Lake_Toml_instInhabitedRBDict_default___redArg___closed__1));
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict_default___redArg___boxed(lean_object* v___dummy_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lake_Toml_instInhabitedRBDict_default___redArg();
return v_res_9_;
}
}
static lean_object* _init_l_Lake_Toml_instInhabitedRBDict_default___closed__0(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lake_Toml_instInhabitedRBDict_default___redArg();
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict_default(lean_object* v_00_u03b1_11_, lean_object* v_00_u03b2_12_, lean_object* v_cmp_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_obj_once(&l_Lake_Toml_instInhabitedRBDict_default___closed__0, &l_Lake_Toml_instInhabitedRBDict_default___closed__0_once, _init_l_Lake_Toml_instInhabitedRBDict_default___closed__0);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict_default___boxed(lean_object* v_00_u03b1_15_, lean_object* v_00_u03b2_16_, lean_object* v_cmp_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lake_Toml_instInhabitedRBDict_default(v_00_u03b1_15_, v_00_u03b2_16_, v_cmp_17_);
lean_dec_ref(v_cmp_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict___redArg(){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_obj_once(&l_Lake_Toml_instInhabitedRBDict_default___closed__0, &l_Lake_Toml_instInhabitedRBDict_default___closed__0_once, _init_l_Lake_Toml_instInhabitedRBDict_default___closed__0);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict___redArg___boxed(lean_object* v___dummy_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lake_Toml_instInhabitedRBDict___redArg();
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict(lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_obj_once(&l_Lake_Toml_instInhabitedRBDict_default___closed__0, &l_Lake_Toml_instInhabitedRBDict_default___closed__0_once, _init_l_Lake_Toml_instInhabitedRBDict_default___closed__0);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedRBDict___boxed(lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lake_Toml_instInhabitedRBDict(v_a_27_, v_a_28_, v_a_29_);
lean_dec_ref(v_a_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_empty___redArg(){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = ((lean_object*)(l_Lake_Toml_RBDict_empty___redArg___closed__1));
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_empty___redArg___boxed(lean_object* v___dummy_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lake_Toml_RBDict_empty___redArg();
return v_res_39_;
}
}
static lean_object* _init_l_Lake_Toml_RBDict_empty___closed__0(void){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lake_Toml_RBDict_empty___redArg();
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_empty(lean_object* v_00_u03b1_41_, lean_object* v_00_u03b2_42_, lean_object* v_cmp_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_obj_once(&l_Lake_Toml_RBDict_empty___closed__0, &l_Lake_Toml_RBDict_empty___closed__0_once, _init_l_Lake_Toml_RBDict_empty___closed__0);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_empty___boxed(lean_object* v_00_u03b1_45_, lean_object* v_00_u03b2_46_, lean_object* v_cmp_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lake_Toml_RBDict_empty(v_00_u03b1_45_, v_00_u03b2_46_, v_cmp_47_);
lean_dec_ref(v_cmp_47_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_obj_once(&l_Lake_Toml_RBDict_empty___closed__0, &l_Lake_Toml_RBDict_empty___closed__0_once, _init_l_Lake_Toml_RBDict_empty___closed__0);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instEmptyCollection___redArg___boxed(lean_object* v___dummy_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lake_Toml_RBDict_instEmptyCollection___redArg();
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instEmptyCollection(lean_object* v_00_u03b1_53_, lean_object* v_00_u03b2_54_, lean_object* v_cmp_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_obj_once(&l_Lake_Toml_RBDict_empty___closed__0, &l_Lake_Toml_RBDict_empty___closed__0_once, _init_l_Lake_Toml_RBDict_empty___closed__0);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instEmptyCollection___boxed(lean_object* v_00_u03b1_57_, lean_object* v_00_u03b2_58_, lean_object* v_cmp_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lake_Toml_RBDict_instEmptyCollection(v_00_u03b1_57_, v_00_u03b2_58_, v_cmp_59_);
lean_dec_ref(v_cmp_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_mkEmpty___redArg(lean_object* v_capacity_61_){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = lean_mk_empty_array_with_capacity(v_capacity_61_);
v___x_63_ = lean_box(1);
v___x_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_62_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_mkEmpty___redArg___boxed(lean_object* v_capacity_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lake_Toml_RBDict_mkEmpty___redArg(v_capacity_65_);
lean_dec(v_capacity_65_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_mkEmpty(lean_object* v_00_u03b1_67_, lean_object* v_00_u03b2_68_, lean_object* v_cmp_69_, lean_object* v_capacity_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lake_Toml_RBDict_mkEmpty___redArg(v_capacity_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_mkEmpty___boxed(lean_object* v_00_u03b1_72_, lean_object* v_00_u03b2_73_, lean_object* v_cmp_74_, lean_object* v_capacity_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lake_Toml_RBDict_mkEmpty(v_00_u03b1_72_, v_00_u03b2_73_, v_cmp_74_, v_capacity_75_);
lean_dec(v_capacity_75_);
lean_dec_ref(v_cmp_74_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Toml_RBDict_ofArray_spec__0___redArg(lean_object* v_cmp_77_, lean_object* v_k_78_, lean_object* v_v_79_, lean_object* v_t_80_){
_start:
{
if (lean_obj_tag(v_t_80_) == 0)
{
lean_object* v_size_81_; lean_object* v_k_82_; lean_object* v_v_83_; lean_object* v_l_84_; lean_object* v_r_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_366_; 
v_size_81_ = lean_ctor_get(v_t_80_, 0);
v_k_82_ = lean_ctor_get(v_t_80_, 1);
v_v_83_ = lean_ctor_get(v_t_80_, 2);
v_l_84_ = lean_ctor_get(v_t_80_, 3);
v_r_85_ = lean_ctor_get(v_t_80_, 4);
v_isSharedCheck_366_ = !lean_is_exclusive(v_t_80_);
if (v_isSharedCheck_366_ == 0)
{
v___x_87_ = v_t_80_;
v_isShared_88_ = v_isSharedCheck_366_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_r_85_);
lean_inc(v_l_84_);
lean_inc(v_v_83_);
lean_inc(v_k_82_);
lean_inc(v_size_81_);
lean_dec(v_t_80_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_366_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_89_; uint8_t v___x_90_; 
lean_inc_ref(v_cmp_77_);
lean_inc(v_k_82_);
lean_inc(v_k_78_);
v___x_89_ = lean_apply_2(v_cmp_77_, v_k_78_, v_k_82_);
v___x_90_ = lean_unbox(v___x_89_);
switch(v___x_90_)
{
case 0:
{
lean_object* v_impl_91_; lean_object* v___x_92_; 
lean_dec(v_size_81_);
v_impl_91_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Toml_RBDict_ofArray_spec__0___redArg(v_cmp_77_, v_k_78_, v_v_79_, v_l_84_);
v___x_92_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_85_) == 0)
{
lean_object* v_size_93_; lean_object* v_size_94_; lean_object* v_k_95_; lean_object* v_v_96_; lean_object* v_l_97_; lean_object* v_r_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v_size_93_ = lean_ctor_get(v_r_85_, 0);
v_size_94_ = lean_ctor_get(v_impl_91_, 0);
lean_inc(v_size_94_);
v_k_95_ = lean_ctor_get(v_impl_91_, 1);
lean_inc(v_k_95_);
v_v_96_ = lean_ctor_get(v_impl_91_, 2);
lean_inc(v_v_96_);
v_l_97_ = lean_ctor_get(v_impl_91_, 3);
lean_inc(v_l_97_);
v_r_98_ = lean_ctor_get(v_impl_91_, 4);
lean_inc(v_r_98_);
v___x_99_ = lean_unsigned_to_nat(3u);
v___x_100_ = lean_nat_mul(v___x_99_, v_size_93_);
v___x_101_ = lean_nat_dec_lt(v___x_100_, v_size_94_);
lean_dec(v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_105_; 
lean_dec(v_r_98_);
lean_dec(v_l_97_);
lean_dec(v_v_96_);
lean_dec(v_k_95_);
v___x_102_ = lean_nat_add(v___x_92_, v_size_94_);
lean_dec(v_size_94_);
v___x_103_ = lean_nat_add(v___x_102_, v_size_93_);
lean_dec(v___x_102_);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 3, v_impl_91_);
lean_ctor_set(v___x_87_, 0, v___x_103_);
v___x_105_ = v___x_87_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_103_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_106_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_106_, 3, v_impl_91_);
lean_ctor_set(v_reuseFailAlloc_106_, 4, v_r_85_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
else
{
lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_172_; 
v_isSharedCheck_172_ = !lean_is_exclusive(v_impl_91_);
if (v_isSharedCheck_172_ == 0)
{
lean_object* v_unused_173_; lean_object* v_unused_174_; lean_object* v_unused_175_; lean_object* v_unused_176_; lean_object* v_unused_177_; 
v_unused_173_ = lean_ctor_get(v_impl_91_, 4);
lean_dec(v_unused_173_);
v_unused_174_ = lean_ctor_get(v_impl_91_, 3);
lean_dec(v_unused_174_);
v_unused_175_ = lean_ctor_get(v_impl_91_, 2);
lean_dec(v_unused_175_);
v_unused_176_ = lean_ctor_get(v_impl_91_, 1);
lean_dec(v_unused_176_);
v_unused_177_ = lean_ctor_get(v_impl_91_, 0);
lean_dec(v_unused_177_);
v___x_108_ = v_impl_91_;
v_isShared_109_ = v_isSharedCheck_172_;
goto v_resetjp_107_;
}
else
{
lean_dec(v_impl_91_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_172_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v_size_110_; lean_object* v_size_111_; lean_object* v_k_112_; lean_object* v_v_113_; lean_object* v_l_114_; lean_object* v_r_115_; lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; 
v_size_110_ = lean_ctor_get(v_l_97_, 0);
v_size_111_ = lean_ctor_get(v_r_98_, 0);
v_k_112_ = lean_ctor_get(v_r_98_, 1);
v_v_113_ = lean_ctor_get(v_r_98_, 2);
v_l_114_ = lean_ctor_get(v_r_98_, 3);
v_r_115_ = lean_ctor_get(v_r_98_, 4);
v___x_116_ = lean_unsigned_to_nat(2u);
v___x_117_ = lean_nat_mul(v___x_116_, v_size_110_);
v___x_118_ = lean_nat_dec_lt(v_size_111_, v___x_117_);
lean_dec(v___x_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_147_; 
lean_inc(v_r_115_);
lean_inc(v_l_114_);
lean_inc(v_v_113_);
lean_inc(v_k_112_);
v_isSharedCheck_147_ = !lean_is_exclusive(v_r_98_);
if (v_isSharedCheck_147_ == 0)
{
lean_object* v_unused_148_; lean_object* v_unused_149_; lean_object* v_unused_150_; lean_object* v_unused_151_; lean_object* v_unused_152_; 
v_unused_148_ = lean_ctor_get(v_r_98_, 4);
lean_dec(v_unused_148_);
v_unused_149_ = lean_ctor_get(v_r_98_, 3);
lean_dec(v_unused_149_);
v_unused_150_ = lean_ctor_get(v_r_98_, 2);
lean_dec(v_unused_150_);
v_unused_151_ = lean_ctor_get(v_r_98_, 1);
lean_dec(v_unused_151_);
v_unused_152_ = lean_ctor_get(v_r_98_, 0);
lean_dec(v_unused_152_);
v___x_120_ = v_r_98_;
v_isShared_121_ = v_isSharedCheck_147_;
goto v_resetjp_119_;
}
else
{
lean_dec(v_r_98_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_147_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___y_125_; lean_object* v___y_126_; lean_object* v___y_127_; lean_object* v___x_135_; lean_object* v___y_137_; 
v___x_122_ = lean_nat_add(v___x_92_, v_size_94_);
lean_dec(v_size_94_);
v___x_123_ = lean_nat_add(v___x_122_, v_size_93_);
lean_dec(v___x_122_);
v___x_135_ = lean_nat_add(v___x_92_, v_size_110_);
if (lean_obj_tag(v_l_114_) == 0)
{
lean_object* v_size_145_; 
v_size_145_ = lean_ctor_get(v_l_114_, 0);
lean_inc(v_size_145_);
v___y_137_ = v_size_145_;
goto v___jp_136_;
}
else
{
lean_object* v___x_146_; 
v___x_146_ = lean_unsigned_to_nat(0u);
v___y_137_ = v___x_146_;
goto v___jp_136_;
}
v___jp_124_:
{
lean_object* v___x_128_; lean_object* v___x_130_; 
v___x_128_ = lean_nat_add(v___y_126_, v___y_127_);
lean_dec(v___y_127_);
lean_dec(v___y_126_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 4, v_r_85_);
lean_ctor_set(v___x_120_, 3, v_r_115_);
lean_ctor_set(v___x_120_, 2, v_v_83_);
lean_ctor_set(v___x_120_, 1, v_k_82_);
lean_ctor_set(v___x_120_, 0, v___x_128_);
v___x_130_ = v___x_120_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_128_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_134_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_134_, 3, v_r_115_);
lean_ctor_set(v_reuseFailAlloc_134_, 4, v_r_85_);
v___x_130_ = v_reuseFailAlloc_134_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
lean_object* v___x_132_; 
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 4, v___x_130_);
lean_ctor_set(v___x_108_, 3, v___y_125_);
lean_ctor_set(v___x_108_, 2, v_v_113_);
lean_ctor_set(v___x_108_, 1, v_k_112_);
lean_ctor_set(v___x_108_, 0, v___x_123_);
v___x_132_ = v___x_108_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v_k_112_);
lean_ctor_set(v_reuseFailAlloc_133_, 2, v_v_113_);
lean_ctor_set(v_reuseFailAlloc_133_, 3, v___y_125_);
lean_ctor_set(v_reuseFailAlloc_133_, 4, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
v___jp_136_:
{
lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_138_ = lean_nat_add(v___x_135_, v___y_137_);
lean_dec(v___y_137_);
lean_dec(v___x_135_);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v_l_114_);
lean_ctor_set(v___x_87_, 3, v_l_97_);
lean_ctor_set(v___x_87_, 2, v_v_96_);
lean_ctor_set(v___x_87_, 1, v_k_95_);
lean_ctor_set(v___x_87_, 0, v___x_138_);
v___x_140_ = v___x_87_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_138_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_144_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_144_, 3, v_l_97_);
lean_ctor_set(v_reuseFailAlloc_144_, 4, v_l_114_);
v___x_140_ = v_reuseFailAlloc_144_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
lean_object* v___x_141_; 
v___x_141_ = lean_nat_add(v___x_92_, v_size_93_);
if (lean_obj_tag(v_r_115_) == 0)
{
lean_object* v_size_142_; 
v_size_142_ = lean_ctor_get(v_r_115_, 0);
lean_inc(v_size_142_);
v___y_125_ = v___x_140_;
v___y_126_ = v___x_141_;
v___y_127_ = v_size_142_;
goto v___jp_124_;
}
else
{
lean_object* v___x_143_; 
v___x_143_ = lean_unsigned_to_nat(0u);
v___y_125_ = v___x_140_;
v___y_126_ = v___x_141_;
v___y_127_ = v___x_143_;
goto v___jp_124_;
}
}
}
}
}
else
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
lean_del_object(v___x_87_);
v___x_153_ = lean_nat_add(v___x_92_, v_size_94_);
lean_dec(v_size_94_);
v___x_154_ = lean_nat_add(v___x_153_, v_size_93_);
lean_dec(v___x_153_);
v___x_155_ = lean_nat_add(v___x_92_, v_size_93_);
v___x_156_ = lean_nat_add(v___x_155_, v_size_111_);
lean_dec(v___x_155_);
lean_inc_ref(v_r_85_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 4, v_r_85_);
lean_ctor_set(v___x_108_, 3, v_r_98_);
lean_ctor_set(v___x_108_, 2, v_v_83_);
lean_ctor_set(v___x_108_, 1, v_k_82_);
lean_ctor_set(v___x_108_, 0, v___x_156_);
v___x_158_ = v___x_108_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v___x_156_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_171_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_171_, 3, v_r_98_);
lean_ctor_set(v_reuseFailAlloc_171_, 4, v_r_85_);
v___x_158_ = v_reuseFailAlloc_171_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
v_isSharedCheck_165_ = !lean_is_exclusive(v_r_85_);
if (v_isSharedCheck_165_ == 0)
{
lean_object* v_unused_166_; lean_object* v_unused_167_; lean_object* v_unused_168_; lean_object* v_unused_169_; lean_object* v_unused_170_; 
v_unused_166_ = lean_ctor_get(v_r_85_, 4);
lean_dec(v_unused_166_);
v_unused_167_ = lean_ctor_get(v_r_85_, 3);
lean_dec(v_unused_167_);
v_unused_168_ = lean_ctor_get(v_r_85_, 2);
lean_dec(v_unused_168_);
v_unused_169_ = lean_ctor_get(v_r_85_, 1);
lean_dec(v_unused_169_);
v_unused_170_ = lean_ctor_get(v_r_85_, 0);
lean_dec(v_unused_170_);
v___x_160_ = v_r_85_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_dec(v_r_85_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 4, v___x_158_);
lean_ctor_set(v___x_160_, 3, v_l_97_);
lean_ctor_set(v___x_160_, 2, v_v_96_);
lean_ctor_set(v___x_160_, 1, v_k_95_);
lean_ctor_set(v___x_160_, 0, v___x_154_);
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_164_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_164_, 3, v_l_97_);
lean_ctor_set(v_reuseFailAlloc_164_, 4, v___x_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_178_; 
v_l_178_ = lean_ctor_get(v_impl_91_, 3);
lean_inc(v_l_178_);
if (lean_obj_tag(v_l_178_) == 0)
{
lean_object* v_r_179_; lean_object* v_k_180_; lean_object* v_v_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_192_; 
v_r_179_ = lean_ctor_get(v_impl_91_, 4);
v_k_180_ = lean_ctor_get(v_impl_91_, 1);
v_v_181_ = lean_ctor_get(v_impl_91_, 2);
v_isSharedCheck_192_ = !lean_is_exclusive(v_impl_91_);
if (v_isSharedCheck_192_ == 0)
{
lean_object* v_unused_193_; lean_object* v_unused_194_; 
v_unused_193_ = lean_ctor_get(v_impl_91_, 3);
lean_dec(v_unused_193_);
v_unused_194_ = lean_ctor_get(v_impl_91_, 0);
lean_dec(v_unused_194_);
v___x_183_ = v_impl_91_;
v_isShared_184_ = v_isSharedCheck_192_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_r_179_);
lean_inc(v_v_181_);
lean_inc(v_k_180_);
lean_dec(v_impl_91_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_192_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_187_; 
v___x_185_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_179_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 3, v_r_179_);
lean_ctor_set(v___x_183_, 2, v_v_83_);
lean_ctor_set(v___x_183_, 1, v_k_82_);
lean_ctor_set(v___x_183_, 0, v___x_92_);
v___x_187_ = v___x_183_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_191_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_191_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_191_, 3, v_r_179_);
lean_ctor_set(v_reuseFailAlloc_191_, 4, v_r_179_);
v___x_187_ = v_reuseFailAlloc_191_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_189_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v___x_187_);
lean_ctor_set(v___x_87_, 3, v_l_178_);
lean_ctor_set(v___x_87_, 2, v_v_181_);
lean_ctor_set(v___x_87_, 1, v_k_180_);
lean_ctor_set(v___x_87_, 0, v___x_185_);
v___x_189_ = v___x_87_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_185_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_k_180_);
lean_ctor_set(v_reuseFailAlloc_190_, 2, v_v_181_);
lean_ctor_set(v_reuseFailAlloc_190_, 3, v_l_178_);
lean_ctor_set(v_reuseFailAlloc_190_, 4, v___x_187_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
else
{
lean_object* v_r_195_; 
v_r_195_ = lean_ctor_get(v_impl_91_, 4);
lean_inc(v_r_195_);
if (lean_obj_tag(v_r_195_) == 0)
{
lean_object* v_k_196_; lean_object* v_v_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_220_; 
v_k_196_ = lean_ctor_get(v_impl_91_, 1);
v_v_197_ = lean_ctor_get(v_impl_91_, 2);
v_isSharedCheck_220_ = !lean_is_exclusive(v_impl_91_);
if (v_isSharedCheck_220_ == 0)
{
lean_object* v_unused_221_; lean_object* v_unused_222_; lean_object* v_unused_223_; 
v_unused_221_ = lean_ctor_get(v_impl_91_, 4);
lean_dec(v_unused_221_);
v_unused_222_ = lean_ctor_get(v_impl_91_, 3);
lean_dec(v_unused_222_);
v_unused_223_ = lean_ctor_get(v_impl_91_, 0);
lean_dec(v_unused_223_);
v___x_199_ = v_impl_91_;
v_isShared_200_ = v_isSharedCheck_220_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_v_197_);
lean_inc(v_k_196_);
lean_dec(v_impl_91_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_220_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v_k_201_; lean_object* v_v_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_216_; 
v_k_201_ = lean_ctor_get(v_r_195_, 1);
v_v_202_ = lean_ctor_get(v_r_195_, 2);
v_isSharedCheck_216_ = !lean_is_exclusive(v_r_195_);
if (v_isSharedCheck_216_ == 0)
{
lean_object* v_unused_217_; lean_object* v_unused_218_; lean_object* v_unused_219_; 
v_unused_217_ = lean_ctor_get(v_r_195_, 4);
lean_dec(v_unused_217_);
v_unused_218_ = lean_ctor_get(v_r_195_, 3);
lean_dec(v_unused_218_);
v_unused_219_ = lean_ctor_get(v_r_195_, 0);
lean_dec(v_unused_219_);
v___x_204_ = v_r_195_;
v_isShared_205_ = v_isSharedCheck_216_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_v_202_);
lean_inc(v_k_201_);
lean_dec(v_r_195_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_216_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_206_; lean_object* v___x_208_; 
v___x_206_ = lean_unsigned_to_nat(3u);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 4, v_l_178_);
lean_ctor_set(v___x_204_, 3, v_l_178_);
lean_ctor_set(v___x_204_, 2, v_v_197_);
lean_ctor_set(v___x_204_, 1, v_k_196_);
lean_ctor_set(v___x_204_, 0, v___x_92_);
v___x_208_ = v___x_204_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v_k_196_);
lean_ctor_set(v_reuseFailAlloc_215_, 2, v_v_197_);
lean_ctor_set(v_reuseFailAlloc_215_, 3, v_l_178_);
lean_ctor_set(v_reuseFailAlloc_215_, 4, v_l_178_);
v___x_208_ = v_reuseFailAlloc_215_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
lean_object* v___x_210_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 4, v_l_178_);
lean_ctor_set(v___x_199_, 2, v_v_83_);
lean_ctor_set(v___x_199_, 1, v_k_82_);
lean_ctor_set(v___x_199_, 0, v___x_92_);
v___x_210_ = v___x_199_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_214_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_214_, 3, v_l_178_);
lean_ctor_set(v_reuseFailAlloc_214_, 4, v_l_178_);
v___x_210_ = v_reuseFailAlloc_214_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
lean_object* v___x_212_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v___x_210_);
lean_ctor_set(v___x_87_, 3, v___x_208_);
lean_ctor_set(v___x_87_, 2, v_v_202_);
lean_ctor_set(v___x_87_, 1, v_k_201_);
lean_ctor_set(v___x_87_, 0, v___x_206_);
v___x_212_ = v___x_87_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_206_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_k_201_);
lean_ctor_set(v_reuseFailAlloc_213_, 2, v_v_202_);
lean_ctor_set(v_reuseFailAlloc_213_, 3, v___x_208_);
lean_ctor_set(v_reuseFailAlloc_213_, 4, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
}
}
else
{
lean_object* v___x_224_; lean_object* v___x_226_; 
v___x_224_ = lean_unsigned_to_nat(2u);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v_r_195_);
lean_ctor_set(v___x_87_, 3, v_impl_91_);
lean_ctor_set(v___x_87_, 0, v___x_224_);
v___x_226_ = v___x_87_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_224_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_227_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_227_, 3, v_impl_91_);
lean_ctor_set(v_reuseFailAlloc_227_, 4, v_r_195_);
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
case 1:
{
lean_object* v___x_229_; 
lean_dec(v_v_83_);
lean_dec(v_k_82_);
lean_dec_ref(v_cmp_77_);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 2, v_v_79_);
lean_ctor_set(v___x_87_, 1, v_k_78_);
v___x_229_ = v___x_87_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_size_81_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_k_78_);
lean_ctor_set(v_reuseFailAlloc_230_, 2, v_v_79_);
lean_ctor_set(v_reuseFailAlloc_230_, 3, v_l_84_);
lean_ctor_set(v_reuseFailAlloc_230_, 4, v_r_85_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
default: 
{
lean_object* v_impl_231_; lean_object* v___x_232_; 
lean_dec(v_size_81_);
v_impl_231_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Toml_RBDict_ofArray_spec__0___redArg(v_cmp_77_, v_k_78_, v_v_79_, v_r_85_);
v___x_232_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_84_) == 0)
{
lean_object* v_size_233_; lean_object* v_size_234_; lean_object* v_k_235_; lean_object* v_v_236_; lean_object* v_l_237_; lean_object* v_r_238_; lean_object* v___x_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v_size_233_ = lean_ctor_get(v_l_84_, 0);
v_size_234_ = lean_ctor_get(v_impl_231_, 0);
lean_inc(v_size_234_);
v_k_235_ = lean_ctor_get(v_impl_231_, 1);
lean_inc(v_k_235_);
v_v_236_ = lean_ctor_get(v_impl_231_, 2);
lean_inc(v_v_236_);
v_l_237_ = lean_ctor_get(v_impl_231_, 3);
lean_inc(v_l_237_);
v_r_238_ = lean_ctor_get(v_impl_231_, 4);
lean_inc(v_r_238_);
v___x_239_ = lean_unsigned_to_nat(3u);
v___x_240_ = lean_nat_mul(v___x_239_, v_size_233_);
v___x_241_ = lean_nat_dec_lt(v___x_240_, v_size_234_);
lean_dec(v___x_240_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_245_; 
lean_dec(v_r_238_);
lean_dec(v_l_237_);
lean_dec(v_v_236_);
lean_dec(v_k_235_);
v___x_242_ = lean_nat_add(v___x_232_, v_size_233_);
v___x_243_ = lean_nat_add(v___x_242_, v_size_234_);
lean_dec(v_size_234_);
lean_dec(v___x_242_);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v_impl_231_);
lean_ctor_set(v___x_87_, 0, v___x_243_);
v___x_245_ = v___x_87_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_246_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_246_, 3, v_l_84_);
lean_ctor_set(v_reuseFailAlloc_246_, 4, v_impl_231_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
else
{
lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_310_; 
v_isSharedCheck_310_ = !lean_is_exclusive(v_impl_231_);
if (v_isSharedCheck_310_ == 0)
{
lean_object* v_unused_311_; lean_object* v_unused_312_; lean_object* v_unused_313_; lean_object* v_unused_314_; lean_object* v_unused_315_; 
v_unused_311_ = lean_ctor_get(v_impl_231_, 4);
lean_dec(v_unused_311_);
v_unused_312_ = lean_ctor_get(v_impl_231_, 3);
lean_dec(v_unused_312_);
v_unused_313_ = lean_ctor_get(v_impl_231_, 2);
lean_dec(v_unused_313_);
v_unused_314_ = lean_ctor_get(v_impl_231_, 1);
lean_dec(v_unused_314_);
v_unused_315_ = lean_ctor_get(v_impl_231_, 0);
lean_dec(v_unused_315_);
v___x_248_ = v_impl_231_;
v_isShared_249_ = v_isSharedCheck_310_;
goto v_resetjp_247_;
}
else
{
lean_dec(v_impl_231_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_310_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v_size_250_; lean_object* v_k_251_; lean_object* v_v_252_; lean_object* v_l_253_; lean_object* v_r_254_; lean_object* v_size_255_; lean_object* v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; 
v_size_250_ = lean_ctor_get(v_l_237_, 0);
v_k_251_ = lean_ctor_get(v_l_237_, 1);
v_v_252_ = lean_ctor_get(v_l_237_, 2);
v_l_253_ = lean_ctor_get(v_l_237_, 3);
v_r_254_ = lean_ctor_get(v_l_237_, 4);
v_size_255_ = lean_ctor_get(v_r_238_, 0);
v___x_256_ = lean_unsigned_to_nat(2u);
v___x_257_ = lean_nat_mul(v___x_256_, v_size_255_);
v___x_258_ = lean_nat_dec_lt(v_size_250_, v___x_257_);
lean_dec(v___x_257_);
if (v___x_258_ == 0)
{
lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_286_; 
lean_inc(v_r_254_);
lean_inc(v_l_253_);
lean_inc(v_v_252_);
lean_inc(v_k_251_);
v_isSharedCheck_286_ = !lean_is_exclusive(v_l_237_);
if (v_isSharedCheck_286_ == 0)
{
lean_object* v_unused_287_; lean_object* v_unused_288_; lean_object* v_unused_289_; lean_object* v_unused_290_; lean_object* v_unused_291_; 
v_unused_287_ = lean_ctor_get(v_l_237_, 4);
lean_dec(v_unused_287_);
v_unused_288_ = lean_ctor_get(v_l_237_, 3);
lean_dec(v_unused_288_);
v_unused_289_ = lean_ctor_get(v_l_237_, 2);
lean_dec(v_unused_289_);
v_unused_290_ = lean_ctor_get(v_l_237_, 1);
lean_dec(v_unused_290_);
v_unused_291_ = lean_ctor_get(v_l_237_, 0);
lean_dec(v_unused_291_);
v___x_260_ = v_l_237_;
v_isShared_261_ = v_isSharedCheck_286_;
goto v_resetjp_259_;
}
else
{
lean_dec(v_l_237_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_286_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___y_265_; lean_object* v___y_266_; lean_object* v___y_267_; lean_object* v___y_276_; 
v___x_262_ = lean_nat_add(v___x_232_, v_size_233_);
v___x_263_ = lean_nat_add(v___x_262_, v_size_234_);
lean_dec(v_size_234_);
if (lean_obj_tag(v_l_253_) == 0)
{
lean_object* v_size_284_; 
v_size_284_ = lean_ctor_get(v_l_253_, 0);
lean_inc(v_size_284_);
v___y_276_ = v_size_284_;
goto v___jp_275_;
}
else
{
lean_object* v___x_285_; 
v___x_285_ = lean_unsigned_to_nat(0u);
v___y_276_ = v___x_285_;
goto v___jp_275_;
}
v___jp_264_:
{
lean_object* v___x_268_; lean_object* v___x_270_; 
v___x_268_ = lean_nat_add(v___y_266_, v___y_267_);
lean_dec(v___y_267_);
lean_dec(v___y_266_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 4, v_r_238_);
lean_ctor_set(v___x_260_, 3, v_r_254_);
lean_ctor_set(v___x_260_, 2, v_v_236_);
lean_ctor_set(v___x_260_, 1, v_k_235_);
lean_ctor_set(v___x_260_, 0, v___x_268_);
v___x_270_ = v___x_260_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_268_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v_k_235_);
lean_ctor_set(v_reuseFailAlloc_274_, 2, v_v_236_);
lean_ctor_set(v_reuseFailAlloc_274_, 3, v_r_254_);
lean_ctor_set(v_reuseFailAlloc_274_, 4, v_r_238_);
v___x_270_ = v_reuseFailAlloc_274_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
lean_object* v___x_272_; 
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 4, v___x_270_);
lean_ctor_set(v___x_248_, 3, v___y_265_);
lean_ctor_set(v___x_248_, 2, v_v_252_);
lean_ctor_set(v___x_248_, 1, v_k_251_);
lean_ctor_set(v___x_248_, 0, v___x_263_);
v___x_272_ = v___x_248_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_263_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v_k_251_);
lean_ctor_set(v_reuseFailAlloc_273_, 2, v_v_252_);
lean_ctor_set(v_reuseFailAlloc_273_, 3, v___y_265_);
lean_ctor_set(v_reuseFailAlloc_273_, 4, v___x_270_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
v___jp_275_:
{
lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_277_ = lean_nat_add(v___x_262_, v___y_276_);
lean_dec(v___y_276_);
lean_dec(v___x_262_);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v_l_253_);
lean_ctor_set(v___x_87_, 0, v___x_277_);
v___x_279_ = v___x_87_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_277_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_283_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_283_, 3, v_l_84_);
lean_ctor_set(v_reuseFailAlloc_283_, 4, v_l_253_);
v___x_279_ = v_reuseFailAlloc_283_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
lean_object* v___x_280_; 
v___x_280_ = lean_nat_add(v___x_232_, v_size_255_);
if (lean_obj_tag(v_r_254_) == 0)
{
lean_object* v_size_281_; 
v_size_281_ = lean_ctor_get(v_r_254_, 0);
lean_inc(v_size_281_);
v___y_265_ = v___x_279_;
v___y_266_ = v___x_280_;
v___y_267_ = v_size_281_;
goto v___jp_264_;
}
else
{
lean_object* v___x_282_; 
v___x_282_ = lean_unsigned_to_nat(0u);
v___y_265_ = v___x_279_;
v___y_266_ = v___x_280_;
v___y_267_ = v___x_282_;
goto v___jp_264_;
}
}
}
}
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_296_; 
lean_del_object(v___x_87_);
v___x_292_ = lean_nat_add(v___x_232_, v_size_233_);
v___x_293_ = lean_nat_add(v___x_292_, v_size_234_);
lean_dec(v_size_234_);
v___x_294_ = lean_nat_add(v___x_292_, v_size_250_);
lean_dec(v___x_292_);
lean_inc_ref(v_l_84_);
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 4, v_l_237_);
lean_ctor_set(v___x_248_, 3, v_l_84_);
lean_ctor_set(v___x_248_, 2, v_v_83_);
lean_ctor_set(v___x_248_, 1, v_k_82_);
lean_ctor_set(v___x_248_, 0, v___x_294_);
v___x_296_ = v___x_248_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_294_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_309_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_309_, 3, v_l_84_);
lean_ctor_set(v_reuseFailAlloc_309_, 4, v_l_237_);
v___x_296_ = v_reuseFailAlloc_309_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
v_isSharedCheck_303_ = !lean_is_exclusive(v_l_84_);
if (v_isSharedCheck_303_ == 0)
{
lean_object* v_unused_304_; lean_object* v_unused_305_; lean_object* v_unused_306_; lean_object* v_unused_307_; lean_object* v_unused_308_; 
v_unused_304_ = lean_ctor_get(v_l_84_, 4);
lean_dec(v_unused_304_);
v_unused_305_ = lean_ctor_get(v_l_84_, 3);
lean_dec(v_unused_305_);
v_unused_306_ = lean_ctor_get(v_l_84_, 2);
lean_dec(v_unused_306_);
v_unused_307_ = lean_ctor_get(v_l_84_, 1);
lean_dec(v_unused_307_);
v_unused_308_ = lean_ctor_get(v_l_84_, 0);
lean_dec(v_unused_308_);
v___x_298_ = v_l_84_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_dec(v_l_84_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 4, v_r_238_);
lean_ctor_set(v___x_298_, 3, v___x_296_);
lean_ctor_set(v___x_298_, 2, v_v_236_);
lean_ctor_set(v___x_298_, 1, v_k_235_);
lean_ctor_set(v___x_298_, 0, v___x_293_);
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v_k_235_);
lean_ctor_set(v_reuseFailAlloc_302_, 2, v_v_236_);
lean_ctor_set(v_reuseFailAlloc_302_, 3, v___x_296_);
lean_ctor_set(v_reuseFailAlloc_302_, 4, v_r_238_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_316_; 
v_l_316_ = lean_ctor_get(v_impl_231_, 3);
lean_inc(v_l_316_);
if (lean_obj_tag(v_l_316_) == 0)
{
lean_object* v_r_317_; lean_object* v_k_318_; lean_object* v_v_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_342_; 
v_r_317_ = lean_ctor_get(v_impl_231_, 4);
v_k_318_ = lean_ctor_get(v_impl_231_, 1);
v_v_319_ = lean_ctor_get(v_impl_231_, 2);
v_isSharedCheck_342_ = !lean_is_exclusive(v_impl_231_);
if (v_isSharedCheck_342_ == 0)
{
lean_object* v_unused_343_; lean_object* v_unused_344_; 
v_unused_343_ = lean_ctor_get(v_impl_231_, 3);
lean_dec(v_unused_343_);
v_unused_344_ = lean_ctor_get(v_impl_231_, 0);
lean_dec(v_unused_344_);
v___x_321_ = v_impl_231_;
v_isShared_322_ = v_isSharedCheck_342_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_r_317_);
lean_inc(v_v_319_);
lean_inc(v_k_318_);
lean_dec(v_impl_231_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_342_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v_k_323_; lean_object* v_v_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_338_; 
v_k_323_ = lean_ctor_get(v_l_316_, 1);
v_v_324_ = lean_ctor_get(v_l_316_, 2);
v_isSharedCheck_338_ = !lean_is_exclusive(v_l_316_);
if (v_isSharedCheck_338_ == 0)
{
lean_object* v_unused_339_; lean_object* v_unused_340_; lean_object* v_unused_341_; 
v_unused_339_ = lean_ctor_get(v_l_316_, 4);
lean_dec(v_unused_339_);
v_unused_340_ = lean_ctor_get(v_l_316_, 3);
lean_dec(v_unused_340_);
v_unused_341_ = lean_ctor_get(v_l_316_, 0);
lean_dec(v_unused_341_);
v___x_326_ = v_l_316_;
v_isShared_327_ = v_isSharedCheck_338_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_v_324_);
lean_inc(v_k_323_);
lean_dec(v_l_316_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_338_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_328_; lean_object* v___x_330_; 
v___x_328_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_317_, 2);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 4, v_r_317_);
lean_ctor_set(v___x_326_, 3, v_r_317_);
lean_ctor_set(v___x_326_, 2, v_v_83_);
lean_ctor_set(v___x_326_, 1, v_k_82_);
lean_ctor_set(v___x_326_, 0, v___x_232_);
v___x_330_ = v___x_326_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_337_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_337_, 3, v_r_317_);
lean_ctor_set(v_reuseFailAlloc_337_, 4, v_r_317_);
v___x_330_ = v_reuseFailAlloc_337_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
lean_object* v___x_332_; 
lean_inc(v_r_317_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 3, v_r_317_);
lean_ctor_set(v___x_321_, 0, v___x_232_);
v___x_332_ = v___x_321_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v_k_318_);
lean_ctor_set(v_reuseFailAlloc_336_, 2, v_v_319_);
lean_ctor_set(v_reuseFailAlloc_336_, 3, v_r_317_);
lean_ctor_set(v_reuseFailAlloc_336_, 4, v_r_317_);
v___x_332_ = v_reuseFailAlloc_336_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
lean_object* v___x_334_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v___x_332_);
lean_ctor_set(v___x_87_, 3, v___x_330_);
lean_ctor_set(v___x_87_, 2, v_v_324_);
lean_ctor_set(v___x_87_, 1, v_k_323_);
lean_ctor_set(v___x_87_, 0, v___x_328_);
v___x_334_ = v___x_87_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_328_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_k_323_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v_v_324_);
lean_ctor_set(v_reuseFailAlloc_335_, 3, v___x_330_);
lean_ctor_set(v_reuseFailAlloc_335_, 4, v___x_332_);
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
else
{
lean_object* v_r_345_; 
v_r_345_ = lean_ctor_get(v_impl_231_, 4);
lean_inc(v_r_345_);
if (lean_obj_tag(v_r_345_) == 0)
{
lean_object* v_k_346_; lean_object* v_v_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_358_; 
v_k_346_ = lean_ctor_get(v_impl_231_, 1);
v_v_347_ = lean_ctor_get(v_impl_231_, 2);
v_isSharedCheck_358_ = !lean_is_exclusive(v_impl_231_);
if (v_isSharedCheck_358_ == 0)
{
lean_object* v_unused_359_; lean_object* v_unused_360_; lean_object* v_unused_361_; 
v_unused_359_ = lean_ctor_get(v_impl_231_, 4);
lean_dec(v_unused_359_);
v_unused_360_ = lean_ctor_get(v_impl_231_, 3);
lean_dec(v_unused_360_);
v_unused_361_ = lean_ctor_get(v_impl_231_, 0);
lean_dec(v_unused_361_);
v___x_349_ = v_impl_231_;
v_isShared_350_ = v_isSharedCheck_358_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_v_347_);
lean_inc(v_k_346_);
lean_dec(v_impl_231_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_358_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; lean_object* v___x_353_; 
v___x_351_ = lean_unsigned_to_nat(3u);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 4, v_l_316_);
lean_ctor_set(v___x_349_, 2, v_v_83_);
lean_ctor_set(v___x_349_, 1, v_k_82_);
lean_ctor_set(v___x_349_, 0, v___x_232_);
v___x_353_ = v___x_349_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_357_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_357_, 3, v_l_316_);
lean_ctor_set(v_reuseFailAlloc_357_, 4, v_l_316_);
v___x_353_ = v_reuseFailAlloc_357_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_object* v___x_355_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v_r_345_);
lean_ctor_set(v___x_87_, 3, v___x_353_);
lean_ctor_set(v___x_87_, 2, v_v_347_);
lean_ctor_set(v___x_87_, 1, v_k_346_);
lean_ctor_set(v___x_87_, 0, v___x_351_);
v___x_355_ = v___x_87_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_k_346_);
lean_ctor_set(v_reuseFailAlloc_356_, 2, v_v_347_);
lean_ctor_set(v_reuseFailAlloc_356_, 3, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_356_, 4, v_r_345_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
}
else
{
lean_object* v___x_362_; lean_object* v___x_364_; 
v___x_362_ = lean_unsigned_to_nat(2u);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v_impl_231_);
lean_ctor_set(v___x_87_, 3, v_r_345_);
lean_ctor_set(v___x_87_, 0, v___x_362_);
v___x_364_ = v___x_87_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_362_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v_k_82_);
lean_ctor_set(v_reuseFailAlloc_365_, 2, v_v_83_);
lean_ctor_set(v_reuseFailAlloc_365_, 3, v_r_345_);
lean_ctor_set(v_reuseFailAlloc_365_, 4, v_impl_231_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
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
lean_object* v___x_367_; lean_object* v___x_368_; 
lean_dec_ref(v_cmp_77_);
v___x_367_ = lean_unsigned_to_nat(1u);
v___x_368_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
lean_ctor_set(v___x_368_, 1, v_k_78_);
lean_ctor_set(v___x_368_, 2, v_v_79_);
lean_ctor_set(v___x_368_, 3, v_t_80_);
lean_ctor_set(v___x_368_, 4, v_t_80_);
return v___x_368_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1___redArg(lean_object* v_items_369_, lean_object* v_cmp_370_, lean_object* v_n_371_, lean_object* v_j_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_zero_374_; uint8_t v_isZero_375_; 
v_zero_374_ = lean_unsigned_to_nat(0u);
v_isZero_375_ = lean_nat_dec_eq(v_j_372_, v_zero_374_);
if (v_isZero_375_ == 1)
{
lean_dec(v_j_372_);
lean_dec_ref(v_cmp_370_);
return v_a_373_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v_fst_378_; lean_object* v_one_379_; lean_object* v_n_380_; lean_object* v___x_381_; 
v___x_376_ = lean_nat_sub(v_n_371_, v_j_372_);
v___x_377_ = lean_array_fget_borrowed(v_items_369_, v___x_376_);
v_fst_378_ = lean_ctor_get(v___x_377_, 0);
v_one_379_ = lean_unsigned_to_nat(1u);
v_n_380_ = lean_nat_sub(v_j_372_, v_one_379_);
lean_dec(v_j_372_);
lean_inc(v_fst_378_);
lean_inc_ref(v_cmp_370_);
v___x_381_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Toml_RBDict_ofArray_spec__0___redArg(v_cmp_370_, v_fst_378_, v___x_376_, v_a_373_);
v_j_372_ = v_n_380_;
v_a_373_ = v___x_381_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1___redArg___boxed(lean_object* v_items_383_, lean_object* v_cmp_384_, lean_object* v_n_385_, lean_object* v_j_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1___redArg(v_items_383_, v_cmp_384_, v_n_385_, v_j_386_, v_a_387_);
lean_dec(v_n_385_);
lean_dec_ref(v_items_383_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_ofArray___redArg(lean_object* v_cmp_389_, lean_object* v_items_390_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v_indices_393_; lean_object* v___x_394_; 
v___x_391_ = lean_array_get_size(v_items_390_);
v___x_392_ = lean_box(1);
v_indices_393_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1___redArg(v_items_390_, v_cmp_389_, v___x_391_, v___x_391_, v___x_392_);
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v_items_390_);
lean_ctor_set(v___x_394_, 1, v_indices_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_ofArray(lean_object* v_00_u03b1_395_, lean_object* v_00_u03b2_396_, lean_object* v_cmp_397_, lean_object* v_items_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lake_Toml_RBDict_ofArray___redArg(v_cmp_397_, v_items_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Toml_RBDict_ofArray_spec__0(lean_object* v_00_u03b1_400_, lean_object* v_cmp_401_, lean_object* v_00_u03b2_402_, lean_object* v_k_403_, lean_object* v_v_404_, lean_object* v_t_405_, lean_object* v_hl_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Toml_RBDict_ofArray_spec__0___redArg(v_cmp_401_, v_k_403_, v_v_404_, v_t_405_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1(lean_object* v_00_u03b1_408_, lean_object* v_00_u03b2_409_, lean_object* v_items_410_, lean_object* v_cmp_411_, lean_object* v_n_412_, lean_object* v_j_413_, lean_object* v_a_414_, lean_object* v_a_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1___redArg(v_items_410_, v_cmp_411_, v_n_412_, v_j_413_, v_a_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1___boxed(lean_object* v_00_u03b1_417_, lean_object* v_00_u03b2_418_, lean_object* v_items_419_, lean_object* v_cmp_420_, lean_object* v_n_421_, lean_object* v_j_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Toml_RBDict_ofArray_spec__1(v_00_u03b1_417_, v_00_u03b2_418_, v_items_419_, v_cmp_420_, v_n_421_, v_j_422_, v_a_423_, v_a_424_);
lean_dec(v_n_421_);
lean_dec_ref(v_items_419_);
return v_res_425_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_beq___redArg(lean_object* v_inst_426_, lean_object* v_self_427_, lean_object* v_other_428_){
_start:
{
lean_object* v_items_429_; lean_object* v_items_430_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v_items_429_ = lean_ctor_get(v_self_427_, 0);
v_items_430_ = lean_ctor_get(v_other_428_, 0);
v___x_431_ = lean_array_get_size(v_items_429_);
v___x_432_ = lean_array_get_size(v_items_430_);
v___x_433_ = lean_nat_dec_eq(v___x_431_, v___x_432_);
if (v___x_433_ == 0)
{
lean_dec_ref(v_inst_426_);
return v___x_433_;
}
else
{
uint8_t v___x_434_; 
v___x_434_ = l_Array_isEqvAux___redArg(v_items_429_, v_items_430_, v_inst_426_, v___x_431_);
return v___x_434_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_beq___redArg___boxed(lean_object* v_inst_435_, lean_object* v_self_436_, lean_object* v_other_437_){
_start:
{
uint8_t v_res_438_; lean_object* v_r_439_; 
v_res_438_ = l_Lake_Toml_RBDict_beq___redArg(v_inst_435_, v_self_436_, v_other_437_);
lean_dec_ref(v_other_437_);
lean_dec_ref(v_self_436_);
v_r_439_ = lean_box(v_res_438_);
return v_r_439_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_beq(lean_object* v_00_u03b1_440_, lean_object* v_00_u03b2_441_, lean_object* v_cmp_442_, lean_object* v_inst_443_, lean_object* v_self_444_, lean_object* v_other_445_){
_start:
{
uint8_t v___x_446_; 
v___x_446_ = l_Lake_Toml_RBDict_beq___redArg(v_inst_443_, v_self_444_, v_other_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_beq___boxed(lean_object* v_00_u03b1_447_, lean_object* v_00_u03b2_448_, lean_object* v_cmp_449_, lean_object* v_inst_450_, lean_object* v_self_451_, lean_object* v_other_452_){
_start:
{
uint8_t v_res_453_; lean_object* v_r_454_; 
v_res_453_ = l_Lake_Toml_RBDict_beq(v_00_u03b1_447_, v_00_u03b2_448_, v_cmp_449_, v_inst_450_, v_self_451_, v_other_452_);
lean_dec_ref(v_other_452_);
lean_dec_ref(v_self_451_);
lean_dec_ref(v_cmp_449_);
v_r_454_ = lean_box(v_res_453_);
return v_r_454_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instBEqOfProd___redArg(lean_object* v_cmp_455_, lean_object* v_inst_456_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_beq___boxed), 6, 4);
lean_closure_set(v___x_457_, 0, lean_box(0));
lean_closure_set(v___x_457_, 1, lean_box(0));
lean_closure_set(v___x_457_, 2, v_cmp_455_);
lean_closure_set(v___x_457_, 3, v_inst_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instBEqOfProd(lean_object* v_00_u03b1_458_, lean_object* v_00_u03b2_459_, lean_object* v_cmp_460_, lean_object* v_inst_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_beq___boxed), 6, 4);
lean_closure_set(v___x_462_, 0, lean_box(0));
lean_closure_set(v___x_462_, 1, lean_box(0));
lean_closure_set(v___x_462_, 2, v_cmp_460_);
lean_closure_set(v___x_462_, 3, v_inst_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_size___redArg(lean_object* v_t_463_){
_start:
{
lean_object* v_items_464_; lean_object* v___x_465_; 
v_items_464_ = lean_ctor_get(v_t_463_, 0);
v___x_465_ = lean_array_get_size(v_items_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_size___redArg___boxed(lean_object* v_t_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lake_Toml_RBDict_size___redArg(v_t_466_);
lean_dec_ref(v_t_466_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_size(lean_object* v_00_u03b1_468_, lean_object* v_00_u03b2_469_, lean_object* v_cmp_470_, lean_object* v_t_471_){
_start:
{
lean_object* v_items_472_; lean_object* v___x_473_; 
v_items_472_ = lean_ctor_get(v_t_471_, 0);
v___x_473_ = lean_array_get_size(v_items_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_size___boxed(lean_object* v_00_u03b1_474_, lean_object* v_00_u03b2_475_, lean_object* v_cmp_476_, lean_object* v_t_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lake_Toml_RBDict_size(v_00_u03b1_474_, v_00_u03b2_475_, v_cmp_476_, v_t_477_);
lean_dec_ref(v_t_477_);
lean_dec_ref(v_cmp_476_);
return v_res_478_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_isEmpty___redArg(lean_object* v_t_479_){
_start:
{
lean_object* v_items_480_; lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v_items_480_ = lean_ctor_get(v_t_479_, 0);
v___x_481_ = lean_array_get_size(v_items_480_);
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = lean_nat_dec_eq(v___x_481_, v___x_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_isEmpty___redArg___boxed(lean_object* v_t_484_){
_start:
{
uint8_t v_res_485_; lean_object* v_r_486_; 
v_res_485_ = l_Lake_Toml_RBDict_isEmpty___redArg(v_t_484_);
lean_dec_ref(v_t_484_);
v_r_486_ = lean_box(v_res_485_);
return v_r_486_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_isEmpty(lean_object* v_00_u03b1_487_, lean_object* v_00_u03b2_488_, lean_object* v_cmp_489_, lean_object* v_t_490_){
_start:
{
lean_object* v_items_491_; lean_object* v___x_492_; lean_object* v___x_493_; uint8_t v___x_494_; 
v_items_491_ = lean_ctor_get(v_t_490_, 0);
v___x_492_ = lean_array_get_size(v_items_491_);
v___x_493_ = lean_unsigned_to_nat(0u);
v___x_494_ = lean_nat_dec_eq(v___x_492_, v___x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_isEmpty___boxed(lean_object* v_00_u03b1_495_, lean_object* v_00_u03b2_496_, lean_object* v_cmp_497_, lean_object* v_t_498_){
_start:
{
uint8_t v_res_499_; lean_object* v_r_500_; 
v_res_499_ = l_Lake_Toml_RBDict_isEmpty(v_00_u03b1_495_, v_00_u03b2_496_, v_cmp_497_, v_t_498_);
lean_dec_ref(v_t_498_);
lean_dec_ref(v_cmp_497_);
v_r_500_ = lean_box(v_res_499_);
return v_r_500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0___redArg(size_t v_sz_501_, size_t v_i_502_, lean_object* v_bs_503_){
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
lean_object* v_v_506_; lean_object* v___x_507_; lean_object* v_fst_508_; lean_object* v___x_509_; lean_object* v_bs_x27_510_; size_t v___x_511_; size_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_v_506_ = lean_array_uget_borrowed(v_bs_503_, v_i_502_);
v___x_507_ = l_unsafeCast___redArg(v_v_506_);
v_fst_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_fst_508_);
lean_dec(v___x_507_);
v___x_509_ = lean_unsigned_to_nat(0u);
v_bs_x27_510_ = lean_array_uset(v_bs_503_, v_i_502_, v___x_509_);
v___x_511_ = ((size_t)1ULL);
v___x_512_ = lean_usize_add(v_i_502_, v___x_511_);
v___x_513_ = l_unsafeCast___redArg(v_fst_508_);
lean_dec(v_fst_508_);
v___x_514_ = lean_array_uset(v_bs_x27_510_, v_i_502_, v___x_513_);
v_i_502_ = v___x_512_;
v_bs_503_ = v___x_514_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0___redArg___boxed(lean_object* v_sz_516_, lean_object* v_i_517_, lean_object* v_bs_518_){
_start:
{
size_t v_sz_boxed_519_; size_t v_i_boxed_520_; lean_object* v_res_521_; 
v_sz_boxed_519_ = lean_unbox_usize(v_sz_516_);
lean_dec(v_sz_516_);
v_i_boxed_520_ = lean_unbox_usize(v_i_517_);
lean_dec(v_i_517_);
v_res_521_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0___redArg(v_sz_boxed_519_, v_i_boxed_520_, v_bs_518_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_keys___redArg(lean_object* v_t_522_){
_start:
{
lean_object* v_items_523_; size_t v_sz_524_; size_t v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v_items_523_ = lean_ctor_get(v_t_522_, 0);
v_sz_524_ = lean_array_size(v_items_523_);
v___x_525_ = ((size_t)0ULL);
v___x_526_ = l_unsafeCast___redArg(v_items_523_);
v___x_527_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0___redArg(v_sz_524_, v___x_525_, v___x_526_);
v___x_528_ = l_unsafeCast___redArg(v___x_527_);
lean_dec_ref(v___x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_keys___redArg___boxed(lean_object* v_t_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lake_Toml_RBDict_keys___redArg(v_t_529_);
lean_dec_ref(v_t_529_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_keys(lean_object* v_00_u03b1_531_, lean_object* v_00_u03b2_532_, lean_object* v_cmp_533_, lean_object* v_t_534_){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = l_Lake_Toml_RBDict_keys___redArg(v_t_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_keys___boxed(lean_object* v_00_u03b1_536_, lean_object* v_00_u03b2_537_, lean_object* v_cmp_538_, lean_object* v_t_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lake_Toml_RBDict_keys(v_00_u03b1_536_, v_00_u03b2_537_, v_cmp_538_, v_t_539_);
lean_dec_ref(v_t_539_);
lean_dec_ref(v_cmp_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0(lean_object* v_00_u03b1_541_, lean_object* v_00_u03b2_542_, size_t v_sz_543_, size_t v_i_544_, lean_object* v_bs_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0___redArg(v_sz_543_, v_i_544_, v_bs_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0___boxed(lean_object* v_00_u03b1_547_, lean_object* v_00_u03b2_548_, lean_object* v_sz_549_, lean_object* v_i_550_, lean_object* v_bs_551_){
_start:
{
size_t v_sz_boxed_552_; size_t v_i_boxed_553_; lean_object* v_res_554_; 
v_sz_boxed_552_ = lean_unbox_usize(v_sz_549_);
lean_dec(v_sz_549_);
v_i_boxed_553_ = lean_unbox_usize(v_i_550_);
lean_dec(v_i_550_);
v_res_554_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_keys_spec__0(v_00_u03b1_547_, v_00_u03b2_548_, v_sz_boxed_552_, v_i_boxed_553_, v_bs_551_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0___redArg(size_t v_sz_555_, size_t v_i_556_, lean_object* v_bs_557_){
_start:
{
uint8_t v___x_558_; 
v___x_558_ = lean_usize_dec_lt(v_i_556_, v_sz_555_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; 
v___x_559_ = l_unsafeCast___redArg(v_bs_557_);
lean_dec_ref(v_bs_557_);
return v___x_559_;
}
else
{
lean_object* v_v_560_; lean_object* v___x_561_; lean_object* v_snd_562_; lean_object* v___x_563_; lean_object* v_bs_x27_564_; size_t v___x_565_; size_t v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v_v_560_ = lean_array_uget_borrowed(v_bs_557_, v_i_556_);
v___x_561_ = l_unsafeCast___redArg(v_v_560_);
v_snd_562_ = lean_ctor_get(v___x_561_, 1);
lean_inc(v_snd_562_);
lean_dec(v___x_561_);
v___x_563_ = lean_unsigned_to_nat(0u);
v_bs_x27_564_ = lean_array_uset(v_bs_557_, v_i_556_, v___x_563_);
v___x_565_ = ((size_t)1ULL);
v___x_566_ = lean_usize_add(v_i_556_, v___x_565_);
v___x_567_ = l_unsafeCast___redArg(v_snd_562_);
lean_dec(v_snd_562_);
v___x_568_ = lean_array_uset(v_bs_x27_564_, v_i_556_, v___x_567_);
v_i_556_ = v___x_566_;
v_bs_557_ = v___x_568_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0___redArg___boxed(lean_object* v_sz_570_, lean_object* v_i_571_, lean_object* v_bs_572_){
_start:
{
size_t v_sz_boxed_573_; size_t v_i_boxed_574_; lean_object* v_res_575_; 
v_sz_boxed_573_ = lean_unbox_usize(v_sz_570_);
lean_dec(v_sz_570_);
v_i_boxed_574_ = lean_unbox_usize(v_i_571_);
lean_dec(v_i_571_);
v_res_575_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0___redArg(v_sz_boxed_573_, v_i_boxed_574_, v_bs_572_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_values___redArg(lean_object* v_t_576_){
_start:
{
lean_object* v_items_577_; size_t v_sz_578_; size_t v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v_items_577_ = lean_ctor_get(v_t_576_, 0);
v_sz_578_ = lean_array_size(v_items_577_);
v___x_579_ = ((size_t)0ULL);
v___x_580_ = l_unsafeCast___redArg(v_items_577_);
v___x_581_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0___redArg(v_sz_578_, v___x_579_, v___x_580_);
v___x_582_ = l_unsafeCast___redArg(v___x_581_);
lean_dec_ref(v___x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_values___redArg___boxed(lean_object* v_t_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lake_Toml_RBDict_values___redArg(v_t_583_);
lean_dec_ref(v_t_583_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_values(lean_object* v_00_u03b1_585_, lean_object* v_00_u03b2_586_, lean_object* v_cmp_587_, lean_object* v_t_588_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lake_Toml_RBDict_values___redArg(v_t_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_values___boxed(lean_object* v_00_u03b1_590_, lean_object* v_00_u03b2_591_, lean_object* v_cmp_592_, lean_object* v_t_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lake_Toml_RBDict_values(v_00_u03b1_590_, v_00_u03b2_591_, v_cmp_592_, v_t_593_);
lean_dec_ref(v_t_593_);
lean_dec_ref(v_cmp_592_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0(lean_object* v_00_u03b1_595_, lean_object* v_00_u03b2_596_, size_t v_sz_597_, size_t v_i_598_, lean_object* v_bs_599_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0___redArg(v_sz_597_, v_i_598_, v_bs_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0___boxed(lean_object* v_00_u03b1_601_, lean_object* v_00_u03b2_602_, lean_object* v_sz_603_, lean_object* v_i_604_, lean_object* v_bs_605_){
_start:
{
size_t v_sz_boxed_606_; size_t v_i_boxed_607_; lean_object* v_res_608_; 
v_sz_boxed_606_ = lean_unbox_usize(v_sz_603_);
lean_dec(v_sz_603_);
v_i_boxed_607_ = lean_unbox_usize(v_i_604_);
lean_dec(v_i_604_);
v_res_608_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_RBDict_values_spec__0(v_00_u03b1_601_, v_00_u03b2_602_, v_sz_boxed_606_, v_i_boxed_607_, v_bs_605_);
return v_res_608_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0___redArg(lean_object* v_cmp_609_, lean_object* v_k_610_, lean_object* v_t_611_){
_start:
{
if (lean_obj_tag(v_t_611_) == 0)
{
lean_object* v_k_612_; lean_object* v_l_613_; lean_object* v_r_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v_k_612_ = lean_ctor_get(v_t_611_, 1);
lean_inc(v_k_612_);
v_l_613_ = lean_ctor_get(v_t_611_, 3);
lean_inc(v_l_613_);
v_r_614_ = lean_ctor_get(v_t_611_, 4);
lean_inc(v_r_614_);
lean_dec_ref_known(v_t_611_, 5);
lean_inc_ref(v_cmp_609_);
lean_inc(v_k_610_);
v___x_615_ = lean_apply_2(v_cmp_609_, v_k_610_, v_k_612_);
v___x_616_ = lean_unbox(v___x_615_);
switch(v___x_616_)
{
case 0:
{
lean_dec(v_r_614_);
v_t_611_ = v_l_613_;
goto _start;
}
case 1:
{
uint8_t v___x_618_; 
lean_dec(v_r_614_);
lean_dec(v_l_613_);
lean_dec(v_k_610_);
lean_dec_ref(v_cmp_609_);
v___x_618_ = 1;
return v___x_618_;
}
default: 
{
lean_dec(v_l_613_);
v_t_611_ = v_r_614_;
goto _start;
}
}
}
else
{
uint8_t v___x_620_; 
lean_dec(v_k_610_);
lean_dec_ref(v_cmp_609_);
v___x_620_ = 0;
return v___x_620_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0___redArg___boxed(lean_object* v_cmp_621_, lean_object* v_k_622_, lean_object* v_t_623_){
_start:
{
uint8_t v_res_624_; lean_object* v_r_625_; 
v_res_624_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0___redArg(v_cmp_621_, v_k_622_, v_t_623_);
v_r_625_ = lean_box(v_res_624_);
return v_r_625_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_contains___redArg(lean_object* v_cmp_626_, lean_object* v_k_627_, lean_object* v_t_628_){
_start:
{
lean_object* v_indices_629_; uint8_t v___x_630_; 
v_indices_629_ = lean_ctor_get(v_t_628_, 1);
lean_inc(v_indices_629_);
lean_dec_ref(v_t_628_);
v___x_630_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0___redArg(v_cmp_626_, v_k_627_, v_indices_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_contains___redArg___boxed(lean_object* v_cmp_631_, lean_object* v_k_632_, lean_object* v_t_633_){
_start:
{
uint8_t v_res_634_; lean_object* v_r_635_; 
v_res_634_ = l_Lake_Toml_RBDict_contains___redArg(v_cmp_631_, v_k_632_, v_t_633_);
v_r_635_ = lean_box(v_res_634_);
return v_r_635_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_contains(lean_object* v_00_u03b1_636_, lean_object* v_00_u03b2_637_, lean_object* v_cmp_638_, lean_object* v_k_639_, lean_object* v_t_640_){
_start:
{
uint8_t v___x_641_; 
v___x_641_ = l_Lake_Toml_RBDict_contains___redArg(v_cmp_638_, v_k_639_, v_t_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_contains___boxed(lean_object* v_00_u03b1_642_, lean_object* v_00_u03b2_643_, lean_object* v_cmp_644_, lean_object* v_k_645_, lean_object* v_t_646_){
_start:
{
uint8_t v_res_647_; lean_object* v_r_648_; 
v_res_647_ = l_Lake_Toml_RBDict_contains(v_00_u03b1_642_, v_00_u03b2_643_, v_cmp_644_, v_k_645_, v_t_646_);
v_r_648_ = lean_box(v_res_647_);
return v_r_648_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0(lean_object* v_00_u03b1_649_, lean_object* v_cmp_650_, lean_object* v_00_u03b2_651_, lean_object* v_k_652_, lean_object* v_t_653_){
_start:
{
uint8_t v___x_654_; 
v___x_654_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0___redArg(v_cmp_650_, v_k_652_, v_t_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0___boxed(lean_object* v_00_u03b1_655_, lean_object* v_cmp_656_, lean_object* v_00_u03b2_657_, lean_object* v_k_658_, lean_object* v_t_659_){
_start:
{
uint8_t v_res_660_; lean_object* v_r_661_; 
v_res_660_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_Toml_RBDict_contains_spec__0(v_00_u03b1_655_, v_cmp_656_, v_00_u03b2_657_, v_k_658_, v_t_659_);
v_r_661_ = lean_box(v_res_660_);
return v_r_661_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_Toml_RBDict_findIdx_x3f_spec__0___redArg(lean_object* v_cmp_662_, lean_object* v_t_663_, lean_object* v_k_664_){
_start:
{
if (lean_obj_tag(v_t_663_) == 0)
{
lean_object* v_k_665_; lean_object* v_v_666_; lean_object* v_l_667_; lean_object* v_r_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v_k_665_ = lean_ctor_get(v_t_663_, 1);
lean_inc(v_k_665_);
v_v_666_ = lean_ctor_get(v_t_663_, 2);
lean_inc(v_v_666_);
v_l_667_ = lean_ctor_get(v_t_663_, 3);
lean_inc(v_l_667_);
v_r_668_ = lean_ctor_get(v_t_663_, 4);
lean_inc(v_r_668_);
lean_dec_ref_known(v_t_663_, 5);
lean_inc_ref(v_cmp_662_);
lean_inc(v_k_664_);
v___x_669_ = lean_apply_2(v_cmp_662_, v_k_664_, v_k_665_);
v___x_670_ = lean_unbox(v___x_669_);
switch(v___x_670_)
{
case 0:
{
lean_dec(v_r_668_);
lean_dec(v_v_666_);
v_t_663_ = v_l_667_;
goto _start;
}
case 1:
{
lean_object* v___x_672_; 
lean_dec(v_r_668_);
lean_dec(v_l_667_);
lean_dec(v_k_664_);
lean_dec_ref(v_cmp_662_);
v___x_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_672_, 0, v_v_666_);
return v___x_672_;
}
default: 
{
lean_dec(v_l_667_);
lean_dec(v_v_666_);
v_t_663_ = v_r_668_;
goto _start;
}
}
}
else
{
lean_object* v___x_674_; 
lean_dec(v_k_664_);
lean_dec_ref(v_cmp_662_);
v___x_674_ = lean_box(0);
return v___x_674_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_findIdx_x3f___redArg(lean_object* v_cmp_675_, lean_object* v_k_676_, lean_object* v_t_677_){
_start:
{
lean_object* v_items_678_; lean_object* v_indices_679_; lean_object* v___x_680_; 
v_items_678_ = lean_ctor_get(v_t_677_, 0);
lean_inc_ref(v_items_678_);
v_indices_679_ = lean_ctor_get(v_t_677_, 1);
lean_inc(v_indices_679_);
lean_dec_ref(v_t_677_);
v___x_680_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_Toml_RBDict_findIdx_x3f_spec__0___redArg(v_cmp_675_, v_indices_679_, v_k_676_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v___x_681_; 
lean_dec_ref(v_items_678_);
v___x_681_ = lean_box(0);
return v___x_681_;
}
else
{
lean_object* v_val_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_692_; 
v_val_682_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_692_ == 0)
{
v___x_684_ = v___x_680_;
v_isShared_685_ = v_isSharedCheck_692_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_val_682_);
lean_dec(v___x_680_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_692_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_686_ = lean_array_get_size(v_items_678_);
lean_dec_ref(v_items_678_);
v___x_687_ = lean_nat_dec_lt(v_val_682_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; 
lean_del_object(v___x_684_);
lean_dec(v_val_682_);
v___x_688_ = lean_box(0);
return v___x_688_;
}
else
{
lean_object* v___x_690_; 
if (v_isShared_685_ == 0)
{
v___x_690_ = v___x_684_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_val_682_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_findIdx_x3f(lean_object* v_00_u03b1_693_, lean_object* v_00_u03b2_694_, lean_object* v_cmp_695_, lean_object* v_k_696_, lean_object* v_t_697_){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = l_Lake_Toml_RBDict_findIdx_x3f___redArg(v_cmp_695_, v_k_696_, v_t_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_Toml_RBDict_findIdx_x3f_spec__0(lean_object* v_00_u03b1_699_, lean_object* v_cmp_700_, lean_object* v_00_u03b4_701_, lean_object* v_t_702_, lean_object* v_k_703_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lake_Toml_RBDict_findIdx_x3f_spec__0___redArg(v_cmp_700_, v_t_702_, v_k_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_findEntry_x3f___redArg(lean_object* v_cmp_705_, lean_object* v_k_706_, lean_object* v_t_707_){
_start:
{
lean_object* v___x_708_; 
lean_inc_ref(v_t_707_);
v___x_708_ = l_Lake_Toml_RBDict_findIdx_x3f___redArg(v_cmp_705_, v_k_706_, v_t_707_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v___x_709_; 
lean_dec_ref(v_t_707_);
v___x_709_ = lean_box(0);
return v___x_709_;
}
else
{
lean_object* v_val_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_719_; 
v_val_710_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_719_ == 0)
{
v___x_712_ = v___x_708_;
v_isShared_713_ = v_isSharedCheck_719_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_val_710_);
lean_dec(v___x_708_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_719_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v_items_714_; lean_object* v___x_715_; lean_object* v___x_717_; 
v_items_714_ = lean_ctor_get(v_t_707_, 0);
lean_inc_ref(v_items_714_);
lean_dec_ref(v_t_707_);
v___x_715_ = lean_array_fget(v_items_714_, v_val_710_);
lean_dec(v_val_710_);
lean_dec_ref(v_items_714_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_715_);
v___x_717_ = v___x_712_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_715_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_findEntry_x3f(lean_object* v_00_u03b1_720_, lean_object* v_00_u03b2_721_, lean_object* v_cmp_722_, lean_object* v_k_723_, lean_object* v_t_724_){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v_cmp_722_, v_k_723_, v_t_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_find_x3f___redArg(lean_object* v_cmp_726_, lean_object* v_k_727_, lean_object* v_t_728_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v_cmp_726_, v_k_727_, v_t_728_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v___x_730_; 
v___x_730_ = lean_box(0);
return v___x_730_;
}
else
{
lean_object* v_val_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_739_; 
v_val_731_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_739_ == 0)
{
v___x_733_ = v___x_729_;
v_isShared_734_ = v_isSharedCheck_739_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_val_731_);
lean_dec(v___x_729_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_739_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v_snd_735_; lean_object* v___x_737_; 
v_snd_735_ = lean_ctor_get(v_val_731_, 1);
lean_inc(v_snd_735_);
lean_dec(v_val_731_);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 0, v_snd_735_);
v___x_737_ = v___x_733_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_snd_735_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_find_x3f(lean_object* v_00_u03b1_740_, lean_object* v_00_u03b2_741_, lean_object* v_cmp_742_, lean_object* v_k_743_, lean_object* v_t_744_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v_cmp_742_, v_k_743_, v_t_744_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v___x_746_; 
v___x_746_ = lean_box(0);
return v___x_746_;
}
else
{
lean_object* v_val_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_755_; 
v_val_747_ = lean_ctor_get(v___x_745_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_755_ == 0)
{
v___x_749_ = v___x_745_;
v_isShared_750_ = v_isSharedCheck_755_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_val_747_);
lean_dec(v___x_745_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_755_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v_snd_751_; lean_object* v___x_753_; 
v_snd_751_ = lean_ctor_get(v_val_747_, 1);
lean_inc(v_snd_751_);
lean_dec(v_val_747_);
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 0, v_snd_751_);
v___x_753_ = v___x_749_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_snd_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_push___redArg(lean_object* v_cmp_756_, lean_object* v_k_757_, lean_object* v_v_758_, lean_object* v_t_759_){
_start:
{
lean_object* v_items_760_; lean_object* v_indices_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_772_; 
v_items_760_ = lean_ctor_get(v_t_759_, 0);
v_indices_761_ = lean_ctor_get(v_t_759_, 1);
v_isSharedCheck_772_ = !lean_is_exclusive(v_t_759_);
if (v_isSharedCheck_772_ == 0)
{
v___x_763_ = v_t_759_;
v_isShared_764_ = v_isSharedCheck_772_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_indices_761_);
lean_inc(v_items_760_);
lean_dec(v_t_759_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_772_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_770_; 
lean_inc(v_k_757_);
v___x_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_765_, 0, v_k_757_);
lean_ctor_set(v___x_765_, 1, v_v_758_);
lean_inc_ref(v_items_760_);
v___x_766_ = lean_array_push(v_items_760_, v___x_765_);
v___x_767_ = lean_array_get_size(v_items_760_);
lean_dec_ref(v_items_760_);
v___x_768_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Toml_RBDict_ofArray_spec__0___redArg(v_cmp_756_, v_k_757_, v___x_767_, v_indices_761_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 1, v___x_768_);
lean_ctor_set(v___x_763_, 0, v___x_766_);
v___x_770_ = v___x_763_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_771_, 1, v___x_768_);
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
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_push(lean_object* v_00_u03b1_773_, lean_object* v_00_u03b2_774_, lean_object* v_cmp_775_, lean_object* v_k_776_, lean_object* v_v_777_, lean_object* v_t_778_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l_Lake_Toml_RBDict_push___redArg(v_cmp_775_, v_k_776_, v_v_777_, v_t_778_);
return v___x_779_;
}
}
static lean_object* _init_l_Lake_Toml_RBDict_alter___redArg___closed__0(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = lean_box(0);
v___x_781_ = l_unsafeCast___redArg(v___x_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___redArg(lean_object* v_cmp_782_, lean_object* v_k_783_, lean_object* v_f_784_, lean_object* v_t_785_){
_start:
{
lean_object* v___x_786_; 
lean_inc_ref(v_t_785_);
lean_inc(v_k_783_);
lean_inc_ref(v_cmp_782_);
v___x_786_ = l_Lake_Toml_RBDict_findIdx_x3f___redArg(v_cmp_782_, v_k_783_, v_t_785_);
if (lean_obj_tag(v___x_786_) == 1)
{
lean_object* v_val_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_822_; 
lean_dec(v_k_783_);
lean_dec_ref(v_cmp_782_);
v_val_787_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_822_ == 0)
{
v___x_789_ = v___x_786_;
v_isShared_790_ = v_isSharedCheck_822_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_val_787_);
lean_dec(v___x_786_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_822_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v_items_791_; lean_object* v_indices_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_821_; 
v_items_791_ = lean_ctor_get(v_t_785_, 0);
v_indices_792_ = lean_ctor_get(v_t_785_, 1);
v_isSharedCheck_821_ = !lean_is_exclusive(v_t_785_);
if (v_isSharedCheck_821_ == 0)
{
v___x_794_ = v_t_785_;
v_isShared_795_ = v_isSharedCheck_821_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_indices_792_);
lean_inc(v_items_791_);
lean_dec(v_t_785_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_821_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_796_ = lean_array_get_size(v_items_791_);
v___x_797_ = lean_nat_dec_lt(v_val_787_, v___x_796_);
if (v___x_797_ == 0)
{
lean_object* v___x_799_; 
lean_del_object(v___x_789_);
lean_dec(v_val_787_);
lean_dec(v_f_784_);
if (v_isShared_795_ == 0)
{
v___x_799_ = v___x_794_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_items_791_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v_indices_792_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
else
{
lean_object* v_v_801_; lean_object* v_fst_802_; lean_object* v_snd_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_820_; 
v_v_801_ = lean_array_fget(v_items_791_, v_val_787_);
v_fst_802_ = lean_ctor_get(v_v_801_, 0);
v_snd_803_ = lean_ctor_get(v_v_801_, 1);
v_isSharedCheck_820_ = !lean_is_exclusive(v_v_801_);
if (v_isSharedCheck_820_ == 0)
{
v___x_805_ = v_v_801_;
v_isShared_806_ = v_isSharedCheck_820_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_snd_803_);
lean_inc(v_fst_802_);
lean_dec(v_v_801_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_820_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; lean_object* v_xs_x27_808_; lean_object* v___x_810_; 
v___x_807_ = lean_obj_once(&l_Lake_Toml_RBDict_alter___redArg___closed__0, &l_Lake_Toml_RBDict_alter___redArg___closed__0_once, _init_l_Lake_Toml_RBDict_alter___redArg___closed__0);
v_xs_x27_808_ = lean_array_fset(v_items_791_, v_val_787_, v___x_807_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v_snd_803_);
v___x_810_ = v___x_789_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_snd_803_);
v___x_810_ = v_reuseFailAlloc_819_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_811_ = lean_apply_1(v_f_784_, v___x_810_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 1, v___x_811_);
v___x_813_ = v___x_805_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_fst_802_);
lean_ctor_set(v_reuseFailAlloc_818_, 1, v___x_811_);
v___x_813_ = v_reuseFailAlloc_818_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
lean_object* v___x_814_; lean_object* v___x_816_; 
v___x_814_ = lean_array_fset(v_xs_x27_808_, v_val_787_, v___x_813_);
lean_dec(v_val_787_);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_814_);
v___x_816_ = v___x_794_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v_indices_792_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
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
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
lean_dec(v___x_786_);
v___x_823_ = lean_box(0);
v___x_824_ = lean_apply_1(v_f_784_, v___x_823_);
v___x_825_ = l_Lake_Toml_RBDict_push___redArg(v_cmp_782_, v_k_783_, v___x_824_, v_t_785_);
return v___x_825_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter(lean_object* v_00_u03b1_826_, lean_object* v_00_u03b2_827_, lean_object* v_cmp_828_, lean_object* v_k_829_, lean_object* v_f_830_, lean_object* v_t_831_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = l_Lake_Toml_RBDict_alter___redArg(v_cmp_828_, v_k_829_, v_f_830_, v_t_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_insert___redArg(lean_object* v_cmp_833_, lean_object* v_k_834_, lean_object* v_v_835_, lean_object* v_t_836_){
_start:
{
lean_object* v___x_837_; 
lean_inc_ref(v_t_836_);
lean_inc(v_k_834_);
lean_inc_ref(v_cmp_833_);
v___x_837_ = l_Lake_Toml_RBDict_findIdx_x3f___redArg(v_cmp_833_, v_k_834_, v_t_836_);
if (lean_obj_tag(v___x_837_) == 1)
{
lean_object* v_val_838_; lean_object* v_items_839_; lean_object* v_indices_840_; lean_object* v___x_841_; uint8_t v___x_842_; 
v_val_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_val_838_);
lean_dec_ref_known(v___x_837_, 1);
v_items_839_ = lean_ctor_get(v_t_836_, 0);
v_indices_840_ = lean_ctor_get(v_t_836_, 1);
v___x_841_ = lean_array_get_size(v_items_839_);
v___x_842_ = lean_nat_dec_lt(v_val_838_, v___x_841_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; 
lean_dec(v_val_838_);
v___x_843_ = l_Lake_Toml_RBDict_push___redArg(v_cmp_833_, v_k_834_, v_v_835_, v_t_836_);
return v___x_843_;
}
else
{
lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_852_; 
lean_inc(v_indices_840_);
lean_inc_ref(v_items_839_);
lean_dec_ref(v_cmp_833_);
v_isSharedCheck_852_ = !lean_is_exclusive(v_t_836_);
if (v_isSharedCheck_852_ == 0)
{
lean_object* v_unused_853_; lean_object* v_unused_854_; 
v_unused_853_ = lean_ctor_get(v_t_836_, 1);
lean_dec(v_unused_853_);
v_unused_854_ = lean_ctor_get(v_t_836_, 0);
lean_dec(v_unused_854_);
v___x_845_ = v_t_836_;
v_isShared_846_ = v_isSharedCheck_852_;
goto v_resetjp_844_;
}
else
{
lean_dec(v_t_836_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_852_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_850_; 
v___x_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_847_, 0, v_k_834_);
lean_ctor_set(v___x_847_, 1, v_v_835_);
v___x_848_ = lean_array_fset(v_items_839_, v_val_838_, v___x_847_);
lean_dec(v_val_838_);
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_848_);
v___x_850_ = v___x_845_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v___x_848_);
lean_ctor_set(v_reuseFailAlloc_851_, 1, v_indices_840_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
else
{
lean_object* v___x_855_; 
lean_dec(v___x_837_);
v___x_855_ = l_Lake_Toml_RBDict_push___redArg(v_cmp_833_, v_k_834_, v_v_835_, v_t_836_);
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_insert(lean_object* v_00_u03b1_856_, lean_object* v_00_u03b2_857_, lean_object* v_cmp_858_, lean_object* v_k_859_, lean_object* v_v_860_, lean_object* v_t_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = l_Lake_Toml_RBDict_insert___redArg(v_cmp_858_, v_k_859_, v_v_860_, v_t_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0___redArg(lean_object* v_cmp_863_, lean_object* v_as_864_, size_t v_i_865_, size_t v_stop_866_, lean_object* v_b_867_){
_start:
{
uint8_t v___x_868_; 
v___x_868_ = lean_usize_dec_eq(v_i_865_, v_stop_866_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; lean_object* v_fst_870_; lean_object* v_snd_871_; lean_object* v___x_872_; size_t v___x_873_; size_t v___x_874_; 
v___x_869_ = lean_array_uget_borrowed(v_as_864_, v_i_865_);
v_fst_870_ = lean_ctor_get(v___x_869_, 0);
v_snd_871_ = lean_ctor_get(v___x_869_, 1);
lean_inc(v_snd_871_);
lean_inc(v_fst_870_);
lean_inc_ref(v_cmp_863_);
v___x_872_ = l_Lake_Toml_RBDict_insert___redArg(v_cmp_863_, v_fst_870_, v_snd_871_, v_b_867_);
v___x_873_ = ((size_t)1ULL);
v___x_874_ = lean_usize_add(v_i_865_, v___x_873_);
v_i_865_ = v___x_874_;
v_b_867_ = v___x_872_;
goto _start;
}
else
{
lean_dec_ref(v_cmp_863_);
return v_b_867_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0___redArg___boxed(lean_object* v_cmp_876_, lean_object* v_as_877_, lean_object* v_i_878_, lean_object* v_stop_879_, lean_object* v_b_880_){
_start:
{
size_t v_i_boxed_881_; size_t v_stop_boxed_882_; lean_object* v_res_883_; 
v_i_boxed_881_ = lean_unbox_usize(v_i_878_);
lean_dec(v_i_878_);
v_stop_boxed_882_ = lean_unbox_usize(v_stop_879_);
lean_dec(v_stop_879_);
v_res_883_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0___redArg(v_cmp_876_, v_as_877_, v_i_boxed_881_, v_stop_boxed_882_, v_b_880_);
lean_dec_ref(v_as_877_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_appendArray___redArg(lean_object* v_cmp_884_, lean_object* v_self_885_, lean_object* v_other_886_){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
v___x_887_ = lean_unsigned_to_nat(0u);
v___x_888_ = lean_array_get_size(v_other_886_);
v___x_889_ = lean_nat_dec_lt(v___x_887_, v___x_888_);
if (v___x_889_ == 0)
{
lean_dec_ref(v_cmp_884_);
return v_self_885_;
}
else
{
uint8_t v___x_890_; 
v___x_890_ = lean_nat_dec_le(v___x_888_, v___x_888_);
if (v___x_890_ == 0)
{
if (v___x_889_ == 0)
{
lean_dec_ref(v_cmp_884_);
return v_self_885_;
}
else
{
size_t v___x_891_; size_t v___x_892_; lean_object* v___x_893_; 
v___x_891_ = ((size_t)0ULL);
v___x_892_ = lean_usize_of_nat(v___x_888_);
v___x_893_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0___redArg(v_cmp_884_, v_other_886_, v___x_891_, v___x_892_, v_self_885_);
return v___x_893_;
}
}
else
{
size_t v___x_894_; size_t v___x_895_; lean_object* v___x_896_; 
v___x_894_ = ((size_t)0ULL);
v___x_895_ = lean_usize_of_nat(v___x_888_);
v___x_896_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0___redArg(v_cmp_884_, v_other_886_, v___x_894_, v___x_895_, v_self_885_);
return v___x_896_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_appendArray___redArg___boxed(lean_object* v_cmp_897_, lean_object* v_self_898_, lean_object* v_other_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_Lake_Toml_RBDict_appendArray___redArg(v_cmp_897_, v_self_898_, v_other_899_);
lean_dec_ref(v_other_899_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_appendArray(lean_object* v_00_u03b1_901_, lean_object* v_00_u03b2_902_, lean_object* v_cmp_903_, lean_object* v_self_904_, lean_object* v_other_905_){
_start:
{
lean_object* v___x_906_; 
v___x_906_ = l_Lake_Toml_RBDict_appendArray___redArg(v_cmp_903_, v_self_904_, v_other_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_appendArray___boxed(lean_object* v_00_u03b1_907_, lean_object* v_00_u03b2_908_, lean_object* v_cmp_909_, lean_object* v_self_910_, lean_object* v_other_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lake_Toml_RBDict_appendArray(v_00_u03b1_907_, v_00_u03b2_908_, v_cmp_909_, v_self_910_, v_other_911_);
lean_dec_ref(v_other_911_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0(lean_object* v_00_u03b1_913_, lean_object* v_00_u03b2_914_, lean_object* v_cmp_915_, lean_object* v_as_916_, size_t v_i_917_, size_t v_stop_918_, lean_object* v_b_919_){
_start:
{
lean_object* v___x_920_; 
v___x_920_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0___redArg(v_cmp_915_, v_as_916_, v_i_917_, v_stop_918_, v_b_919_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0___boxed(lean_object* v_00_u03b1_921_, lean_object* v_00_u03b2_922_, lean_object* v_cmp_923_, lean_object* v_as_924_, lean_object* v_i_925_, lean_object* v_stop_926_, lean_object* v_b_927_){
_start:
{
size_t v_i_boxed_928_; size_t v_stop_boxed_929_; lean_object* v_res_930_; 
v_i_boxed_928_ = lean_unbox_usize(v_i_925_);
lean_dec(v_i_925_);
v_stop_boxed_929_ = lean_unbox_usize(v_stop_926_);
lean_dec(v_stop_926_);
v_res_930_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_RBDict_appendArray_spec__0(v_00_u03b1_921_, v_00_u03b2_922_, v_cmp_923_, v_as_924_, v_i_boxed_928_, v_stop_boxed_929_, v_b_927_);
lean_dec_ref(v_as_924_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instHAppendArrayProd___redArg(lean_object* v_cmp_931_){
_start:
{
lean_object* v___x_932_; 
v___x_932_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_appendArray___boxed), 5, 3);
lean_closure_set(v___x_932_, 0, lean_box(0));
lean_closure_set(v___x_932_, 1, lean_box(0));
lean_closure_set(v___x_932_, 2, v_cmp_931_);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instHAppendArrayProd(lean_object* v_00_u03b1_933_, lean_object* v_00_u03b2_934_, lean_object* v_cmp_935_){
_start:
{
lean_object* v___x_936_; 
v___x_936_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_appendArray___boxed), 5, 3);
lean_closure_set(v___x_936_, 0, lean_box(0));
lean_closure_set(v___x_936_, 1, lean_box(0));
lean_closure_set(v___x_936_, 2, v_cmp_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_append___redArg(lean_object* v_cmp_937_, lean_object* v_self_938_, lean_object* v_other_939_){
_start:
{
lean_object* v_items_940_; lean_object* v___x_941_; 
v_items_940_ = lean_ctor_get(v_other_939_, 0);
v___x_941_ = l_Lake_Toml_RBDict_appendArray___redArg(v_cmp_937_, v_self_938_, v_items_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_append___redArg___boxed(lean_object* v_cmp_942_, lean_object* v_self_943_, lean_object* v_other_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Lake_Toml_RBDict_append___redArg(v_cmp_942_, v_self_943_, v_other_944_);
lean_dec_ref(v_other_944_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_append(lean_object* v_00_u03b1_946_, lean_object* v_00_u03b2_947_, lean_object* v_cmp_948_, lean_object* v_self_949_, lean_object* v_other_950_){
_start:
{
lean_object* v_items_951_; lean_object* v___x_952_; 
v_items_951_ = lean_ctor_get(v_other_950_, 0);
v___x_952_ = l_Lake_Toml_RBDict_appendArray___redArg(v_cmp_948_, v_self_949_, v_items_951_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_append___boxed(lean_object* v_00_u03b1_953_, lean_object* v_00_u03b2_954_, lean_object* v_cmp_955_, lean_object* v_self_956_, lean_object* v_other_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_Lake_Toml_RBDict_append(v_00_u03b1_953_, v_00_u03b2_954_, v_cmp_955_, v_self_956_, v_other_957_);
lean_dec_ref(v_other_957_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instAppend___redArg(lean_object* v_cmp_959_){
_start:
{
lean_object* v___x_960_; 
v___x_960_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_append___boxed), 5, 3);
lean_closure_set(v___x_960_, 0, lean_box(0));
lean_closure_set(v___x_960_, 1, lean_box(0));
lean_closure_set(v___x_960_, 2, v_cmp_959_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_instAppend(lean_object* v_00_u03b1_961_, lean_object* v_00_u03b2_962_, lean_object* v_cmp_963_){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_append___boxed), 5, 3);
lean_closure_set(v___x_964_, 0, lean_box(0));
lean_closure_set(v___x_964_, 1, lean_box(0));
lean_closure_set(v___x_964_, 2, v_cmp_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_map___redArg___lam__0(lean_object* v_f_965_, lean_object* v_x_966_){
_start:
{
lean_object* v_fst_967_; lean_object* v_snd_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_976_; 
v_fst_967_ = lean_ctor_get(v_x_966_, 0);
v_snd_968_ = lean_ctor_get(v_x_966_, 1);
v_isSharedCheck_976_ = !lean_is_exclusive(v_x_966_);
if (v_isSharedCheck_976_ == 0)
{
v___x_970_ = v_x_966_;
v_isShared_971_ = v_isSharedCheck_976_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_snd_968_);
lean_inc(v_fst_967_);
lean_dec(v_x_966_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_976_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_972_; lean_object* v___x_974_; 
lean_inc(v_fst_967_);
v___x_972_ = lean_apply_2(v_f_965_, v_fst_967_, v_snd_968_);
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 1, v___x_972_);
v___x_974_ = v___x_970_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_fst_967_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v___x_972_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_map___redArg(lean_object* v_f_996_, lean_object* v_t_997_){
_start:
{
lean_object* v_items_998_; lean_object* v_indices_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1013_; 
v_items_998_ = lean_ctor_get(v_t_997_, 0);
v_indices_999_ = lean_ctor_get(v_t_997_, 1);
v_isSharedCheck_1013_ = !lean_is_exclusive(v_t_997_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1001_ = v_t_997_;
v_isShared_1002_ = v_isSharedCheck_1013_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_indices_999_);
lean_inc(v_items_998_);
lean_dec(v_t_997_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1013_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___f_1003_; lean_object* v___x_1004_; size_t v_sz_1005_; size_t v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1011_; 
v___f_1003_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1003_, 0, v_f_996_);
v___x_1004_ = ((lean_object*)(l_Lake_Toml_RBDict_map___redArg___closed__9));
v_sz_1005_ = lean_array_size(v_items_998_);
v___x_1006_ = ((size_t)0ULL);
v___x_1007_ = l_unsafeCast___redArg(v_items_998_);
lean_dec_ref(v_items_998_);
v___x_1008_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1004_, v___f_1003_, v_sz_1005_, v___x_1006_, v___x_1007_);
v___x_1009_ = l_unsafeCast___redArg(v___x_1008_);
lean_dec(v___x_1008_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_1009_);
v___x_1011_ = v___x_1001_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1012_, 1, v_indices_999_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_map(lean_object* v_00_u03b1_1014_, lean_object* v_00_u03b2_1015_, lean_object* v_00_u03b3_1016_, lean_object* v_cmp_1017_, lean_object* v_f_1018_, lean_object* v_t_1019_){
_start:
{
lean_object* v_items_1020_; lean_object* v_indices_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1035_; 
v_items_1020_ = lean_ctor_get(v_t_1019_, 0);
v_indices_1021_ = lean_ctor_get(v_t_1019_, 1);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_t_1019_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1023_ = v_t_1019_;
v_isShared_1024_ = v_isSharedCheck_1035_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_indices_1021_);
lean_inc(v_items_1020_);
lean_dec(v_t_1019_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1035_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___f_1025_; lean_object* v___x_1026_; size_t v_sz_1027_; size_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1033_; 
v___f_1025_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1025_, 0, v_f_1018_);
v___x_1026_ = ((lean_object*)(l_Lake_Toml_RBDict_map___redArg___closed__9));
v_sz_1027_ = lean_array_size(v_items_1020_);
v___x_1028_ = ((size_t)0ULL);
v___x_1029_ = l_unsafeCast___redArg(v_items_1020_);
lean_dec_ref(v_items_1020_);
v___x_1030_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1026_, v___f_1025_, v_sz_1027_, v___x_1028_, v___x_1029_);
v___x_1031_ = l_unsafeCast___redArg(v___x_1030_);
lean_dec(v___x_1030_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1031_);
v___x_1033_ = v___x_1023_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v___x_1031_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v_indices_1021_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_map___boxed(lean_object* v_00_u03b1_1036_, lean_object* v_00_u03b2_1037_, lean_object* v_00_u03b3_1038_, lean_object* v_cmp_1039_, lean_object* v_f_1040_, lean_object* v_t_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lake_Toml_RBDict_map(v_00_u03b1_1036_, v_00_u03b2_1037_, v_00_u03b3_1038_, v_cmp_1039_, v_f_1040_, v_t_1041_);
lean_dec_ref(v_cmp_1039_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filter___redArg___lam__0(lean_object* v_p_1043_, lean_object* v_cmp_1044_, lean_object* v_x1_1045_, lean_object* v_x2_1046_){
_start:
{
lean_object* v_fst_1047_; lean_object* v_snd_1048_; lean_object* v___x_1049_; uint8_t v___x_1050_; 
v_fst_1047_ = lean_ctor_get(v_x2_1046_, 0);
lean_inc_n(v_fst_1047_, 2);
v_snd_1048_ = lean_ctor_get(v_x2_1046_, 1);
lean_inc_n(v_snd_1048_, 2);
lean_dec_ref(v_x2_1046_);
v___x_1049_ = lean_apply_2(v_p_1043_, v_fst_1047_, v_snd_1048_);
v___x_1050_ = lean_unbox(v___x_1049_);
if (v___x_1050_ == 0)
{
lean_dec(v_snd_1048_);
lean_dec(v_fst_1047_);
lean_dec_ref(v_cmp_1044_);
return v_x1_1045_;
}
else
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lake_Toml_RBDict_push___redArg(v_cmp_1044_, v_fst_1047_, v_snd_1048_, v_x1_1045_);
return v___x_1051_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filter___redArg(lean_object* v_cmp_1052_, lean_object* v_p_1053_, lean_object* v_t_1054_){
_start:
{
lean_object* v_items_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; uint8_t v___x_1060_; 
v_items_1055_ = lean_ctor_get(v_t_1054_, 0);
lean_inc_ref(v_items_1055_);
lean_dec_ref(v_t_1054_);
v___x_1056_ = lean_obj_once(&l_Lake_Toml_RBDict_empty___closed__0, &l_Lake_Toml_RBDict_empty___closed__0_once, _init_l_Lake_Toml_RBDict_empty___closed__0);
v___x_1057_ = lean_unsigned_to_nat(0u);
v___x_1058_ = lean_array_get_size(v_items_1055_);
v___x_1059_ = ((lean_object*)(l_Lake_Toml_RBDict_map___redArg___closed__9));
v___x_1060_ = lean_nat_dec_lt(v___x_1057_, v___x_1058_);
if (v___x_1060_ == 0)
{
lean_dec_ref(v_items_1055_);
lean_dec_ref(v_p_1053_);
lean_dec_ref(v_cmp_1052_);
return v___x_1056_;
}
else
{
lean_object* v___f_1061_; uint8_t v___x_1062_; 
v___f_1061_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_filter___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1061_, 0, v_p_1053_);
lean_closure_set(v___f_1061_, 1, v_cmp_1052_);
v___x_1062_ = lean_nat_dec_le(v___x_1058_, v___x_1058_);
if (v___x_1062_ == 0)
{
if (v___x_1060_ == 0)
{
lean_dec_ref(v___f_1061_);
lean_dec_ref(v_items_1055_);
return v___x_1056_;
}
else
{
size_t v___x_1063_; size_t v___x_1064_; lean_object* v___x_1065_; 
v___x_1063_ = ((size_t)0ULL);
v___x_1064_ = lean_usize_of_nat(v___x_1058_);
v___x_1065_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1059_, v___f_1061_, v_items_1055_, v___x_1063_, v___x_1064_, v___x_1056_);
return v___x_1065_;
}
}
else
{
size_t v___x_1066_; size_t v___x_1067_; lean_object* v___x_1068_; 
v___x_1066_ = ((size_t)0ULL);
v___x_1067_ = lean_usize_of_nat(v___x_1058_);
v___x_1068_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1059_, v___f_1061_, v_items_1055_, v___x_1066_, v___x_1067_, v___x_1056_);
return v___x_1068_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filter(lean_object* v_00_u03b1_1069_, lean_object* v_00_u03b2_1070_, lean_object* v_cmp_1071_, lean_object* v_p_1072_, lean_object* v_t_1073_){
_start:
{
lean_object* v_items_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; uint8_t v___x_1079_; 
v_items_1074_ = lean_ctor_get(v_t_1073_, 0);
lean_inc_ref(v_items_1074_);
lean_dec_ref(v_t_1073_);
v___x_1075_ = lean_obj_once(&l_Lake_Toml_RBDict_empty___closed__0, &l_Lake_Toml_RBDict_empty___closed__0_once, _init_l_Lake_Toml_RBDict_empty___closed__0);
v___x_1076_ = lean_unsigned_to_nat(0u);
v___x_1077_ = lean_array_get_size(v_items_1074_);
v___x_1078_ = ((lean_object*)(l_Lake_Toml_RBDict_map___redArg___closed__9));
v___x_1079_ = lean_nat_dec_lt(v___x_1076_, v___x_1077_);
if (v___x_1079_ == 0)
{
lean_dec_ref(v_items_1074_);
lean_dec_ref(v_p_1072_);
lean_dec_ref(v_cmp_1071_);
return v___x_1075_;
}
else
{
lean_object* v___f_1080_; uint8_t v___x_1081_; 
v___f_1080_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_filter___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1080_, 0, v_p_1072_);
lean_closure_set(v___f_1080_, 1, v_cmp_1071_);
v___x_1081_ = lean_nat_dec_le(v___x_1077_, v___x_1077_);
if (v___x_1081_ == 0)
{
if (v___x_1079_ == 0)
{
lean_dec_ref(v___f_1080_);
lean_dec_ref(v_items_1074_);
return v___x_1075_;
}
else
{
size_t v___x_1082_; size_t v___x_1083_; lean_object* v___x_1084_; 
v___x_1082_ = ((size_t)0ULL);
v___x_1083_ = lean_usize_of_nat(v___x_1077_);
v___x_1084_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1078_, v___f_1080_, v_items_1074_, v___x_1082_, v___x_1083_, v___x_1075_);
return v___x_1084_;
}
}
else
{
size_t v___x_1085_; size_t v___x_1086_; lean_object* v___x_1087_; 
v___x_1085_ = ((size_t)0ULL);
v___x_1086_ = lean_usize_of_nat(v___x_1077_);
v___x_1087_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1078_, v___f_1080_, v_items_1074_, v___x_1085_, v___x_1086_, v___x_1075_);
return v___x_1087_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filterMap___redArg___lam__0(lean_object* v_f_1088_, lean_object* v_cmp_1089_, lean_object* v_x1_1090_, lean_object* v_x2_1091_){
_start:
{
lean_object* v_fst_1092_; lean_object* v_snd_1093_; lean_object* v___x_1094_; 
v_fst_1092_ = lean_ctor_get(v_x2_1091_, 0);
lean_inc_n(v_fst_1092_, 2);
v_snd_1093_ = lean_ctor_get(v_x2_1091_, 1);
lean_inc(v_snd_1093_);
lean_dec_ref(v_x2_1091_);
v___x_1094_ = lean_apply_2(v_f_1088_, v_fst_1092_, v_snd_1093_);
if (lean_obj_tag(v___x_1094_) == 1)
{
lean_object* v_val_1095_; lean_object* v___x_1096_; 
v_val_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_val_1095_);
lean_dec_ref_known(v___x_1094_, 1);
v___x_1096_ = l_Lake_Toml_RBDict_push___redArg(v_cmp_1089_, v_fst_1092_, v_val_1095_, v_x1_1090_);
return v___x_1096_;
}
else
{
lean_dec(v___x_1094_);
lean_dec(v_fst_1092_);
lean_dec_ref(v_cmp_1089_);
return v_x1_1090_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filterMap___redArg(lean_object* v_cmp_1097_, lean_object* v_f_1098_, lean_object* v_t_1099_){
_start:
{
lean_object* v_items_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; uint8_t v___x_1105_; 
v_items_1100_ = lean_ctor_get(v_t_1099_, 0);
lean_inc_ref(v_items_1100_);
lean_dec_ref(v_t_1099_);
v___x_1101_ = lean_obj_once(&l_Lake_Toml_RBDict_empty___closed__0, &l_Lake_Toml_RBDict_empty___closed__0_once, _init_l_Lake_Toml_RBDict_empty___closed__0);
v___x_1102_ = lean_unsigned_to_nat(0u);
v___x_1103_ = lean_array_get_size(v_items_1100_);
v___x_1104_ = ((lean_object*)(l_Lake_Toml_RBDict_map___redArg___closed__9));
v___x_1105_ = lean_nat_dec_lt(v___x_1102_, v___x_1103_);
if (v___x_1105_ == 0)
{
lean_dec_ref(v_items_1100_);
lean_dec_ref(v_f_1098_);
lean_dec_ref(v_cmp_1097_);
return v___x_1101_;
}
else
{
lean_object* v___f_1106_; uint8_t v___x_1107_; 
v___f_1106_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_filterMap___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1106_, 0, v_f_1098_);
lean_closure_set(v___f_1106_, 1, v_cmp_1097_);
v___x_1107_ = lean_nat_dec_le(v___x_1103_, v___x_1103_);
if (v___x_1107_ == 0)
{
if (v___x_1105_ == 0)
{
lean_dec_ref(v___f_1106_);
lean_dec_ref(v_items_1100_);
return v___x_1101_;
}
else
{
size_t v___x_1108_; size_t v___x_1109_; lean_object* v___x_1110_; 
v___x_1108_ = ((size_t)0ULL);
v___x_1109_ = lean_usize_of_nat(v___x_1103_);
v___x_1110_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1104_, v___f_1106_, v_items_1100_, v___x_1108_, v___x_1109_, v___x_1101_);
return v___x_1110_;
}
}
else
{
size_t v___x_1111_; size_t v___x_1112_; lean_object* v___x_1113_; 
v___x_1111_ = ((size_t)0ULL);
v___x_1112_ = lean_usize_of_nat(v___x_1103_);
v___x_1113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1104_, v___f_1106_, v_items_1100_, v___x_1111_, v___x_1112_, v___x_1101_);
return v___x_1113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_filterMap(lean_object* v_00_u03b1_1114_, lean_object* v_00_u03b2_1115_, lean_object* v_00_u03b3_1116_, lean_object* v_cmp_1117_, lean_object* v_f_1118_, lean_object* v_t_1119_){
_start:
{
lean_object* v_items_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; uint8_t v___x_1125_; 
v_items_1120_ = lean_ctor_get(v_t_1119_, 0);
lean_inc_ref(v_items_1120_);
lean_dec_ref(v_t_1119_);
v___x_1121_ = lean_obj_once(&l_Lake_Toml_RBDict_empty___closed__0, &l_Lake_Toml_RBDict_empty___closed__0_once, _init_l_Lake_Toml_RBDict_empty___closed__0);
v___x_1122_ = lean_unsigned_to_nat(0u);
v___x_1123_ = lean_array_get_size(v_items_1120_);
v___x_1124_ = ((lean_object*)(l_Lake_Toml_RBDict_map___redArg___closed__9));
v___x_1125_ = lean_nat_dec_lt(v___x_1122_, v___x_1123_);
if (v___x_1125_ == 0)
{
lean_dec_ref(v_items_1120_);
lean_dec_ref(v_f_1118_);
lean_dec_ref(v_cmp_1117_);
return v___x_1121_;
}
else
{
lean_object* v___f_1126_; uint8_t v___x_1127_; 
v___f_1126_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_filterMap___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1126_, 0, v_f_1118_);
lean_closure_set(v___f_1126_, 1, v_cmp_1117_);
v___x_1127_ = lean_nat_dec_le(v___x_1123_, v___x_1123_);
if (v___x_1127_ == 0)
{
if (v___x_1125_ == 0)
{
lean_dec_ref(v___f_1126_);
lean_dec_ref(v_items_1120_);
return v___x_1121_;
}
else
{
size_t v___x_1128_; size_t v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = ((size_t)0ULL);
v___x_1129_ = lean_usize_of_nat(v___x_1123_);
v___x_1130_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1124_, v___f_1126_, v_items_1120_, v___x_1128_, v___x_1129_, v___x_1121_);
return v___x_1130_;
}
}
else
{
size_t v___x_1131_; size_t v___x_1132_; lean_object* v___x_1133_; 
v___x_1131_ = ((size_t)0ULL);
v___x_1132_ = lean_usize_of_nat(v___x_1123_);
v___x_1133_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1124_, v___f_1126_, v_items_1120_, v___x_1131_, v___x_1132_, v___x_1121_);
return v___x_1133_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_foldM___redArg___lam__0(lean_object* v_f_1134_, lean_object* v_s_1135_, lean_object* v_x_1136_){
_start:
{
lean_object* v_fst_1137_; lean_object* v_snd_1138_; lean_object* v___x_1139_; 
v_fst_1137_ = lean_ctor_get(v_x_1136_, 0);
lean_inc(v_fst_1137_);
v_snd_1138_ = lean_ctor_get(v_x_1136_, 1);
lean_inc(v_snd_1138_);
lean_dec_ref(v_x_1136_);
v___x_1139_ = lean_apply_3(v_f_1134_, v_s_1135_, v_fst_1137_, v_snd_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_foldM___redArg(lean_object* v_inst_1140_, lean_object* v_f_1141_, lean_object* v_init_1142_, lean_object* v_t_1143_){
_start:
{
lean_object* v_toApplicative_1144_; lean_object* v_items_1145_; lean_object* v_toPure_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; uint8_t v___x_1149_; 
v_toApplicative_1144_ = lean_ctor_get(v_inst_1140_, 0);
v_items_1145_ = lean_ctor_get(v_t_1143_, 0);
lean_inc_ref(v_items_1145_);
lean_dec_ref(v_t_1143_);
v_toPure_1146_ = lean_ctor_get(v_toApplicative_1144_, 1);
v___x_1147_ = lean_unsigned_to_nat(0u);
v___x_1148_ = lean_array_get_size(v_items_1145_);
v___x_1149_ = lean_nat_dec_lt(v___x_1147_, v___x_1148_);
if (v___x_1149_ == 0)
{
lean_object* v___x_1150_; 
lean_inc(v_toPure_1146_);
lean_dec_ref(v_items_1145_);
lean_dec(v_f_1141_);
lean_dec_ref(v_inst_1140_);
v___x_1150_ = lean_apply_2(v_toPure_1146_, lean_box(0), v_init_1142_);
return v___x_1150_;
}
else
{
lean_object* v___f_1151_; uint8_t v___x_1152_; 
v___f_1151_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_foldM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1151_, 0, v_f_1141_);
v___x_1152_ = lean_nat_dec_le(v___x_1148_, v___x_1148_);
if (v___x_1152_ == 0)
{
if (v___x_1149_ == 0)
{
lean_object* v___x_1153_; 
lean_inc(v_toPure_1146_);
lean_dec_ref(v___f_1151_);
lean_dec_ref(v_items_1145_);
lean_dec_ref(v_inst_1140_);
v___x_1153_ = lean_apply_2(v_toPure_1146_, lean_box(0), v_init_1142_);
return v___x_1153_;
}
else
{
size_t v___x_1154_; size_t v___x_1155_; lean_object* v___x_1156_; 
v___x_1154_ = ((size_t)0ULL);
v___x_1155_ = lean_usize_of_nat(v___x_1148_);
v___x_1156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1140_, v___f_1151_, v_items_1145_, v___x_1154_, v___x_1155_, v_init_1142_);
return v___x_1156_;
}
}
else
{
size_t v___x_1157_; size_t v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = ((size_t)0ULL);
v___x_1158_ = lean_usize_of_nat(v___x_1148_);
v___x_1159_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1140_, v___f_1151_, v_items_1145_, v___x_1157_, v___x_1158_, v_init_1142_);
return v___x_1159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_foldM(lean_object* v_m_1160_, lean_object* v_00_u03c3_1161_, lean_object* v_00_u03b1_1162_, lean_object* v_00_u03b2_1163_, lean_object* v_cmp_1164_, lean_object* v_inst_1165_, lean_object* v_f_1166_, lean_object* v_init_1167_, lean_object* v_t_1168_){
_start:
{
lean_object* v_toApplicative_1169_; lean_object* v_items_1170_; lean_object* v_toPure_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; 
v_toApplicative_1169_ = lean_ctor_get(v_inst_1165_, 0);
v_items_1170_ = lean_ctor_get(v_t_1168_, 0);
lean_inc_ref(v_items_1170_);
lean_dec_ref(v_t_1168_);
v_toPure_1171_ = lean_ctor_get(v_toApplicative_1169_, 1);
v___x_1172_ = lean_unsigned_to_nat(0u);
v___x_1173_ = lean_array_get_size(v_items_1170_);
v___x_1174_ = lean_nat_dec_lt(v___x_1172_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; 
lean_inc(v_toPure_1171_);
lean_dec_ref(v_items_1170_);
lean_dec(v_f_1166_);
lean_dec_ref(v_inst_1165_);
v___x_1175_ = lean_apply_2(v_toPure_1171_, lean_box(0), v_init_1167_);
return v___x_1175_;
}
else
{
lean_object* v___f_1176_; uint8_t v___x_1177_; 
v___f_1176_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_foldM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1176_, 0, v_f_1166_);
v___x_1177_ = lean_nat_dec_le(v___x_1173_, v___x_1173_);
if (v___x_1177_ == 0)
{
if (v___x_1174_ == 0)
{
lean_object* v___x_1178_; 
lean_inc(v_toPure_1171_);
lean_dec_ref(v___f_1176_);
lean_dec_ref(v_items_1170_);
lean_dec_ref(v_inst_1165_);
v___x_1178_ = lean_apply_2(v_toPure_1171_, lean_box(0), v_init_1167_);
return v___x_1178_;
}
else
{
size_t v___x_1179_; size_t v___x_1180_; lean_object* v___x_1181_; 
v___x_1179_ = ((size_t)0ULL);
v___x_1180_ = lean_usize_of_nat(v___x_1173_);
v___x_1181_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1165_, v___f_1176_, v_items_1170_, v___x_1179_, v___x_1180_, v_init_1167_);
return v___x_1181_;
}
}
else
{
size_t v___x_1182_; size_t v___x_1183_; lean_object* v___x_1184_; 
v___x_1182_ = ((size_t)0ULL);
v___x_1183_ = lean_usize_of_nat(v___x_1173_);
v___x_1184_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1165_, v___f_1176_, v_items_1170_, v___x_1182_, v___x_1183_, v_init_1167_);
return v___x_1184_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_foldM___boxed(lean_object* v_m_1185_, lean_object* v_00_u03c3_1186_, lean_object* v_00_u03b1_1187_, lean_object* v_00_u03b2_1188_, lean_object* v_cmp_1189_, lean_object* v_inst_1190_, lean_object* v_f_1191_, lean_object* v_init_1192_, lean_object* v_t_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_Lake_Toml_RBDict_foldM(v_m_1185_, v_00_u03c3_1186_, v_00_u03b1_1187_, v_00_u03b2_1188_, v_cmp_1189_, v_inst_1190_, v_f_1191_, v_init_1192_, v_t_1193_);
lean_dec_ref(v_cmp_1189_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_fold___redArg(lean_object* v_f_1195_, lean_object* v_init_1196_, lean_object* v_t_1197_){
_start:
{
lean_object* v___x_1198_; lean_object* v_items_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; uint8_t v___x_1202_; 
v___x_1198_ = ((lean_object*)(l_Lake_Toml_RBDict_map___redArg___closed__9));
v_items_1199_ = lean_ctor_get(v_t_1197_, 0);
lean_inc_ref(v_items_1199_);
lean_dec_ref(v_t_1197_);
v___x_1200_ = lean_unsigned_to_nat(0u);
v___x_1201_ = lean_array_get_size(v_items_1199_);
v___x_1202_ = lean_nat_dec_lt(v___x_1200_, v___x_1201_);
if (v___x_1202_ == 0)
{
lean_dec_ref(v_items_1199_);
lean_dec(v_f_1195_);
return v_init_1196_;
}
else
{
lean_object* v___f_1203_; size_t v___x_1204_; size_t v___x_1205_; lean_object* v___x_1206_; 
v___f_1203_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_foldM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1203_, 0, v_f_1195_);
v___x_1204_ = ((size_t)0ULL);
v___x_1205_ = lean_usize_of_nat(v___x_1201_);
v___x_1206_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1198_, v___f_1203_, v_items_1199_, v___x_1204_, v___x_1205_, v_init_1196_);
return v___x_1206_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_fold(lean_object* v_00_u03c3_1207_, lean_object* v_00_u03b1_1208_, lean_object* v_00_u03b2_1209_, lean_object* v_cmp_1210_, lean_object* v_f_1211_, lean_object* v_init_1212_, lean_object* v_t_1213_){
_start:
{
lean_object* v___x_1214_; lean_object* v_items_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
v___x_1214_ = ((lean_object*)(l_Lake_Toml_RBDict_map___redArg___closed__9));
v_items_1215_ = lean_ctor_get(v_t_1213_, 0);
lean_inc_ref(v_items_1215_);
lean_dec_ref(v_t_1213_);
v___x_1216_ = lean_unsigned_to_nat(0u);
v___x_1217_ = lean_array_get_size(v_items_1215_);
v___x_1218_ = lean_nat_dec_lt(v___x_1216_, v___x_1217_);
if (v___x_1218_ == 0)
{
lean_dec_ref(v_items_1215_);
lean_dec(v_f_1211_);
return v_init_1212_;
}
else
{
lean_object* v___f_1219_; size_t v___x_1220_; size_t v___x_1221_; lean_object* v___x_1222_; 
v___f_1219_ = lean_alloc_closure((void*)(l_Lake_Toml_RBDict_foldM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1219_, 0, v_f_1211_);
v___x_1220_ = ((size_t)0ULL);
v___x_1221_ = lean_usize_of_nat(v___x_1217_);
v___x_1222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1214_, v___f_1219_, v_items_1215_, v___x_1220_, v___x_1221_, v_init_1212_);
return v___x_1222_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_fold___boxed(lean_object* v_00_u03c3_1223_, lean_object* v_00_u03b1_1224_, lean_object* v_00_u03b2_1225_, lean_object* v_cmp_1226_, lean_object* v_f_1227_, lean_object* v_init_1228_, lean_object* v_t_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_Lake_Toml_RBDict_fold(v_00_u03c3_1223_, v_00_u03b1_1224_, v_00_u03b2_1225_, v_cmp_1226_, v_f_1227_, v_init_1228_, v_t_1229_);
lean_dec_ref(v_cmp_1226_);
return v_res_1230_;
}
}
lean_object* runtime_initialize_Lean_Data_NameMap_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Fold(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_Data_Dict(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Data_NameMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_Data_Dict(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_NameMap_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Fold(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_Data_Dict(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_NameMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Data_Dict(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_Data_Dict(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_Data_Dict(builtin);
}
#ifdef __cplusplus
}
#endif

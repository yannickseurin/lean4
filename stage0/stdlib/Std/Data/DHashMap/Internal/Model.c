// Lean compiler output
// Module: Std.Data.DHashMap.Internal.Model
// Imports: public import Init.Data.Array.TakeDrop public import Std.Data.DHashMap.Basic import all Std.Data.DHashMap.Internal.Defs public import Std.Data.DHashMap.Internal.HashesTo public import Std.Data.DHashMap.Internal.AssocList.Lemmas import Init.Data.Array.Bootstrap import Init.Data.UInt.Lemmas
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
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getEntry_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getKey_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getCast_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instForInOfForIn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DHashMap_Internal_AssocList_length___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_replace___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getCast___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getKey___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_erase___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getEntry_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getEntry___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getEntryD___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_toListModel___redArg(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_bucket___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_bucket___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_bucket(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_bucket___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateBucket___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateBucket(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateAllBuckets___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateAllBuckets___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateAllBuckets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateAllBuckets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_withComputedSize___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_withComputedSize(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_replace_u2098___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_replace_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_replace_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_cons_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase_u2098aux___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase_u2098aux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase_u2098aux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_alter_u2098___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_alter_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_alter_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_modify_u2098___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_modify_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_modify_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify_u2098___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filterMap_go___at___00Std_DHashMap_Internal_Raw_u2080_filterMap_u2098_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filterMap_go___at___00Std_DHashMap_Internal_Raw_u2080_filterMap_u2098_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_map_go___at___00Std_DHashMap_Internal_Raw_u2080_map_u2098_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map_u2098___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map_u2098___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_map_go___at___00Std_DHashMap_Internal_Raw_u2080_map_u2098_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go___at___00Std_DHashMap_Internal_Raw_u2080_filter_u2098_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter_u2098(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go___at___00Std_DHashMap_Internal_Raw_u2080_filter_u2098_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertList_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertList_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseList_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseList_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__0_value;
static const lean_closure_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__1_value;
static const lean_closure_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__2_value;
static const lean_closure_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__3 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__3_value;
static const lean_closure_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__4 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__4_value;
static const lean_closure_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__5 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__5_value;
static const lean_closure_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__6 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__6_value;
static const lean_ctor_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__0_value),((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__1_value)}};
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__7 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__7_value;
static const lean_ctor_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__7_value),((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__2_value),((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__3_value),((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__4_value),((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__5_value)}};
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__8 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__8_value;
static const lean_ctor_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__8_value),((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__6_value)}};
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__9 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__9_value;
static const lean_closure_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__9_value)} };
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__10 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__10_value;
static const lean_closure_object l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instForInOfForIn_x27___redArg___lam__1, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__10_value)} };
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__11 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertListIfNew_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertListIfNew_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertList_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertList_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertListIfNewUnit_u2098___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertListIfNewUnit_u2098(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_expandIfNecessary_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_expandIfNecessary_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_u2098_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_u2098_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_u2098_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_reinsertAux_match__1_splitter___redArg(size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_reinsertAux_match__1_splitter___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_reinsertAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_reinsertAux_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__3_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_alter_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_alter_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__1_splitter___redArg(size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__1_splitter___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_insertList_u2098_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_insertList_u2098_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_eraseList_u2098_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_eraseList_u2098_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_insertList_u2098_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_insertList_u2098_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_bucket___redArg(lean_object* v_inst_1_, lean_object* v_self_2_, lean_object* v_k_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; uint64_t v___x_6_; uint64_t v___x_7_; uint64_t v___x_8_; uint64_t v___x_9_; uint64_t v_fold_10_; uint64_t v___x_11_; uint64_t v___x_12_; uint64_t v___x_13_; size_t v___x_14_; size_t v___x_15_; size_t v___x_16_; size_t v___x_17_; size_t v___x_18_; lean_object* v___x_19_; 
v___x_4_ = lean_array_get_size(v_self_2_);
v___x_5_ = lean_apply_1(v_inst_1_, v_k_3_);
v___x_6_ = 32ULL;
v___x_7_ = lean_unbox_uint64(v___x_5_);
v___x_8_ = lean_uint64_shift_right(v___x_7_, v___x_6_);
v___x_9_ = lean_unbox_uint64(v___x_5_);
lean_dec_ref(v___x_5_);
v_fold_10_ = lean_uint64_xor(v___x_9_, v___x_8_);
v___x_11_ = 16ULL;
v___x_12_ = lean_uint64_shift_right(v_fold_10_, v___x_11_);
v___x_13_ = lean_uint64_xor(v_fold_10_, v___x_12_);
v___x_14_ = lean_uint64_to_usize(v___x_13_);
v___x_15_ = lean_usize_of_nat(v___x_4_);
v___x_16_ = ((size_t)1ULL);
v___x_17_ = lean_usize_sub(v___x_15_, v___x_16_);
v___x_18_ = lean_usize_land(v___x_14_, v___x_17_);
v___x_19_ = lean_array_uget_borrowed(v_self_2_, v___x_18_);
lean_inc(v___x_19_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_bucket___redArg___boxed(lean_object* v_inst_20_, lean_object* v_self_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_20_, v_self_21_, v_k_22_);
lean_dec_ref(v_self_21_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_bucket(lean_object* v_00_u03b1_24_, lean_object* v_00_u03b2_25_, lean_object* v_inst_26_, lean_object* v_self_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_26_, v_self_27_, v_k_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_bucket___boxed(lean_object* v_00_u03b1_31_, lean_object* v_00_u03b2_32_, lean_object* v_inst_33_, lean_object* v_self_34_, lean_object* v_h_35_, lean_object* v_k_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_DHashMap_Internal_bucket(v_00_u03b1_31_, v_00_u03b2_32_, v_inst_33_, v_self_34_, v_h_35_, v_k_36_);
lean_dec_ref(v_self_34_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateBucket___redArg(lean_object* v_inst_38_, lean_object* v_self_39_, lean_object* v_k_40_, lean_object* v_f_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; uint64_t v___x_44_; uint64_t v___x_45_; uint64_t v___x_46_; uint64_t v___x_47_; uint64_t v_fold_48_; uint64_t v___x_49_; uint64_t v___x_50_; uint64_t v___x_51_; size_t v___x_52_; size_t v___x_53_; size_t v___x_54_; size_t v___x_55_; size_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_42_ = lean_array_get_size(v_self_39_);
v___x_43_ = lean_apply_1(v_inst_38_, v_k_40_);
v___x_44_ = 32ULL;
v___x_45_ = lean_unbox_uint64(v___x_43_);
v___x_46_ = lean_uint64_shift_right(v___x_45_, v___x_44_);
v___x_47_ = lean_unbox_uint64(v___x_43_);
lean_dec_ref(v___x_43_);
v_fold_48_ = lean_uint64_xor(v___x_47_, v___x_46_);
v___x_49_ = 16ULL;
v___x_50_ = lean_uint64_shift_right(v_fold_48_, v___x_49_);
v___x_51_ = lean_uint64_xor(v_fold_48_, v___x_50_);
v___x_52_ = lean_uint64_to_usize(v___x_51_);
v___x_53_ = lean_usize_of_nat(v___x_42_);
v___x_54_ = ((size_t)1ULL);
v___x_55_ = lean_usize_sub(v___x_53_, v___x_54_);
v___x_56_ = lean_usize_land(v___x_52_, v___x_55_);
v___x_57_ = lean_array_uget_borrowed(v_self_39_, v___x_56_);
lean_inc(v___x_57_);
v___x_58_ = lean_apply_1(v_f_41_, v___x_57_);
v___x_59_ = lean_array_uset(v_self_39_, v___x_56_, v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateBucket(lean_object* v_00_u03b1_60_, lean_object* v_00_u03b2_61_, lean_object* v_inst_62_, lean_object* v_self_63_, lean_object* v_h_64_, lean_object* v_k_65_, lean_object* v_f_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Std_DHashMap_Internal_updateBucket___redArg(v_inst_62_, v_self_63_, v_k_65_, v_f_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0___redArg(lean_object* v_f_68_, size_t v_sz_69_, size_t v_i_70_, lean_object* v_bs_71_){
_start:
{
uint8_t v___x_72_; 
v___x_72_ = lean_usize_dec_lt(v_i_70_, v_sz_69_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; 
lean_dec_ref(v_f_68_);
v___x_73_ = l_unsafeCast___redArg(v_bs_71_);
lean_dec_ref(v_bs_71_);
return v___x_73_;
}
else
{
lean_object* v_v_74_; lean_object* v___x_75_; lean_object* v_bs_x27_76_; lean_object* v___x_77_; lean_object* v___x_78_; size_t v___x_79_; size_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v_v_74_ = lean_array_uget(v_bs_71_, v_i_70_);
v___x_75_ = lean_unsigned_to_nat(0u);
v_bs_x27_76_ = lean_array_uset(v_bs_71_, v_i_70_, v___x_75_);
v___x_77_ = l_unsafeCast___redArg(v_v_74_);
lean_dec(v_v_74_);
lean_inc_ref(v_f_68_);
v___x_78_ = lean_apply_1(v_f_68_, v___x_77_);
v___x_79_ = ((size_t)1ULL);
v___x_80_ = lean_usize_add(v_i_70_, v___x_79_);
v___x_81_ = l_unsafeCast___redArg(v___x_78_);
lean_dec(v___x_78_);
v___x_82_ = lean_array_uset(v_bs_x27_76_, v_i_70_, v___x_81_);
v_i_70_ = v___x_80_;
v_bs_71_ = v___x_82_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0___redArg___boxed(lean_object* v_f_84_, lean_object* v_sz_85_, lean_object* v_i_86_, lean_object* v_bs_87_){
_start:
{
size_t v_sz_boxed_88_; size_t v_i_boxed_89_; lean_object* v_res_90_; 
v_sz_boxed_88_ = lean_unbox_usize(v_sz_85_);
lean_dec(v_sz_85_);
v_i_boxed_89_ = lean_unbox_usize(v_i_86_);
lean_dec(v_i_86_);
v_res_90_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0___redArg(v_f_84_, v_sz_boxed_88_, v_i_boxed_89_, v_bs_87_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateAllBuckets___redArg(lean_object* v_self_91_, lean_object* v_f_92_){
_start:
{
size_t v_sz_93_; size_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_sz_93_ = lean_array_size(v_self_91_);
v___x_94_ = ((size_t)0ULL);
v___x_95_ = l_unsafeCast___redArg(v_self_91_);
v___x_96_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0___redArg(v_f_92_, v_sz_93_, v___x_94_, v___x_95_);
v___x_97_ = l_unsafeCast___redArg(v___x_96_);
lean_dec_ref(v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateAllBuckets___redArg___boxed(lean_object* v_self_98_, lean_object* v_f_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Std_DHashMap_Internal_updateAllBuckets___redArg(v_self_98_, v_f_99_);
lean_dec_ref(v_self_98_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateAllBuckets(lean_object* v_00_u03b1_101_, lean_object* v_00_u03b2_102_, lean_object* v_00_u03b4_103_, lean_object* v_self_104_, lean_object* v_f_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Std_DHashMap_Internal_updateAllBuckets___redArg(v_self_104_, v_f_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_updateAllBuckets___boxed(lean_object* v_00_u03b1_107_, lean_object* v_00_u03b2_108_, lean_object* v_00_u03b4_109_, lean_object* v_self_110_, lean_object* v_f_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Std_DHashMap_Internal_updateAllBuckets(v_00_u03b1_107_, v_00_u03b2_108_, v_00_u03b4_109_, v_self_110_, v_f_111_);
lean_dec_ref(v_self_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0(lean_object* v_00_u03b1_113_, lean_object* v_00_u03b2_114_, lean_object* v_00_u03b4_115_, lean_object* v_f_116_, size_t v_sz_117_, size_t v_i_118_, lean_object* v_bs_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0___redArg(v_f_116_, v_sz_117_, v_i_118_, v_bs_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0___boxed(lean_object* v_00_u03b1_121_, lean_object* v_00_u03b2_122_, lean_object* v_00_u03b4_123_, lean_object* v_f_124_, lean_object* v_sz_125_, lean_object* v_i_126_, lean_object* v_bs_127_){
_start:
{
size_t v_sz_boxed_128_; size_t v_i_boxed_129_; lean_object* v_res_130_; 
v_sz_boxed_128_ = lean_unbox_usize(v_sz_125_);
lean_dec(v_sz_125_);
v_i_boxed_129_ = lean_unbox_usize(v_i_126_);
lean_dec(v_i_126_);
v_res_130_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_updateAllBuckets_spec__0(v_00_u03b1_121_, v_00_u03b2_122_, v_00_u03b4_123_, v_f_124_, v_sz_boxed_128_, v_i_boxed_129_, v_bs_127_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0___redArg(lean_object* v_as_131_, size_t v_i_132_, size_t v_stop_133_, lean_object* v_b_134_){
_start:
{
uint8_t v___x_135_; 
v___x_135_ = lean_usize_dec_eq(v_i_132_, v_stop_133_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; size_t v___x_139_; size_t v___x_140_; 
v___x_136_ = lean_array_uget_borrowed(v_as_131_, v_i_132_);
v___x_137_ = l_Std_DHashMap_Internal_AssocList_length___redArg(v___x_136_);
v___x_138_ = lean_nat_add(v_b_134_, v___x_137_);
lean_dec(v___x_137_);
lean_dec(v_b_134_);
v___x_139_ = ((size_t)1ULL);
v___x_140_ = lean_usize_add(v_i_132_, v___x_139_);
v_i_132_ = v___x_140_;
v_b_134_ = v___x_138_;
goto _start;
}
else
{
return v_b_134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0___redArg___boxed(lean_object* v_as_142_, lean_object* v_i_143_, lean_object* v_stop_144_, lean_object* v_b_145_){
_start:
{
size_t v_i_boxed_146_; size_t v_stop_boxed_147_; lean_object* v_res_148_; 
v_i_boxed_146_ = lean_unbox_usize(v_i_143_);
lean_dec(v_i_143_);
v_stop_boxed_147_ = lean_unbox_usize(v_stop_144_);
lean_dec(v_stop_144_);
v_res_148_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0___redArg(v_as_142_, v_i_boxed_146_, v_stop_boxed_147_, v_b_145_);
lean_dec_ref(v_as_142_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_withComputedSize___redArg(lean_object* v_self_149_){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_150_ = lean_unsigned_to_nat(0u);
v___x_151_ = lean_array_get_size(v_self_149_);
v___x_152_ = lean_nat_dec_lt(v___x_150_, v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
v___x_153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_150_);
lean_ctor_set(v___x_153_, 1, v_self_149_);
return v___x_153_;
}
else
{
size_t v___x_154_; size_t v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_154_ = ((size_t)0ULL);
v___x_155_ = lean_usize_of_nat(v___x_151_);
v___x_156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0___redArg(v_self_149_, v___x_154_, v___x_155_, v___x_150_);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v_self_149_);
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_withComputedSize(lean_object* v_00_u03b1_158_, lean_object* v_00_u03b2_159_, lean_object* v_self_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = l_Std_DHashMap_Internal_withComputedSize___redArg(v_self_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0(lean_object* v_00_u03b1_162_, lean_object* v_00_u03b2_163_, lean_object* v_as_164_, size_t v_i_165_, size_t v_stop_166_, lean_object* v_b_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0___redArg(v_as_164_, v_i_165_, v_stop_166_, v_b_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0___boxed(lean_object* v_00_u03b1_169_, lean_object* v_00_u03b2_170_, lean_object* v_as_171_, lean_object* v_i_172_, lean_object* v_stop_173_, lean_object* v_b_174_){
_start:
{
size_t v_i_boxed_175_; size_t v_stop_boxed_176_; lean_object* v_res_177_; 
v_i_boxed_175_ = lean_unbox_usize(v_i_172_);
lean_dec(v_i_172_);
v_stop_boxed_176_ = lean_unbox_usize(v_stop_173_);
lean_dec(v_stop_173_);
v_res_177_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_withComputedSize_spec__0(v_00_u03b1_169_, v_00_u03b2_170_, v_as_171_, v_i_boxed_175_, v_stop_boxed_176_, v_b_174_);
lean_dec_ref(v_as_171_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_replace_u2098___redArg___lam__0(lean_object* v_inst_178_, lean_object* v_a_179_, lean_object* v_b_180_, lean_object* v_l_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = l_Std_DHashMap_Internal_AssocList_replace___redArg(v_inst_178_, v_a_179_, v_b_180_, v_l_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_replace_u2098___redArg(lean_object* v_inst_183_, lean_object* v_inst_184_, lean_object* v_m_185_, lean_object* v_a_186_, lean_object* v_b_187_){
_start:
{
lean_object* v_size_188_; lean_object* v_buckets_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_198_; 
v_size_188_ = lean_ctor_get(v_m_185_, 0);
v_buckets_189_ = lean_ctor_get(v_m_185_, 1);
v_isSharedCheck_198_ = !lean_is_exclusive(v_m_185_);
if (v_isSharedCheck_198_ == 0)
{
v___x_191_ = v_m_185_;
v_isShared_192_ = v_isSharedCheck_198_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_buckets_189_);
lean_inc(v_size_188_);
lean_dec(v_m_185_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_198_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___f_193_; lean_object* v___x_194_; lean_object* v___x_196_; 
lean_inc(v_a_186_);
v___f_193_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_replace_u2098___redArg___lam__0), 4, 3);
lean_closure_set(v___f_193_, 0, v_inst_183_);
lean_closure_set(v___f_193_, 1, v_a_186_);
lean_closure_set(v___f_193_, 2, v_b_187_);
v___x_194_ = l_Std_DHashMap_Internal_updateBucket___redArg(v_inst_184_, v_buckets_189_, v_a_186_, v___f_193_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 1, v___x_194_);
v___x_196_ = v___x_191_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_size_188_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_replace_u2098(lean_object* v_00_u03b1_199_, lean_object* v_00_u03b2_200_, lean_object* v_inst_201_, lean_object* v_inst_202_, lean_object* v_m_203_, lean_object* v_a_204_, lean_object* v_b_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Std_DHashMap_Internal_Raw_u2080_replace_u2098___redArg(v_inst_201_, v_inst_202_, v_m_203_, v_a_204_, v_b_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___redArg___lam__0(lean_object* v_a_207_, lean_object* v_b_208_, lean_object* v_l_209_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_210_, 0, v_a_207_);
lean_ctor_set(v___x_210_, 1, v_b_208_);
lean_ctor_set(v___x_210_, 2, v_l_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___redArg(lean_object* v_inst_211_, lean_object* v_m_212_, lean_object* v_a_213_, lean_object* v_b_214_){
_start:
{
lean_object* v_size_215_; lean_object* v_buckets_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_227_; 
v_size_215_ = lean_ctor_get(v_m_212_, 0);
v_buckets_216_ = lean_ctor_get(v_m_212_, 1);
v_isSharedCheck_227_ = !lean_is_exclusive(v_m_212_);
if (v_isSharedCheck_227_ == 0)
{
v___x_218_ = v_m_212_;
v_isShared_219_ = v_isSharedCheck_227_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_buckets_216_);
lean_inc(v_size_215_);
lean_dec(v_m_212_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_227_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___f_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_225_; 
lean_inc(v_a_213_);
v___f_220_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___redArg___lam__0), 3, 2);
lean_closure_set(v___f_220_, 0, v_a_213_);
lean_closure_set(v___f_220_, 1, v_b_214_);
v___x_221_ = lean_unsigned_to_nat(1u);
v___x_222_ = lean_nat_add(v_size_215_, v___x_221_);
lean_dec(v_size_215_);
v___x_223_ = l_Std_DHashMap_Internal_updateBucket___redArg(v_inst_211_, v_buckets_216_, v_a_213_, v___f_220_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 1, v___x_223_);
lean_ctor_set(v___x_218_, 0, v___x_222_);
v___x_225_ = v___x_218_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_222_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v___x_223_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_cons_u2098(lean_object* v_00_u03b1_228_, lean_object* v_00_u03b2_229_, lean_object* v_inst_230_, lean_object* v_inst_231_, lean_object* v_m_232_, lean_object* v_a_233_, lean_object* v_b_234_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___redArg(v_inst_231_, v_m_232_, v_a_233_, v_b_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___boxed(lean_object* v_00_u03b1_236_, lean_object* v_00_u03b2_237_, lean_object* v_inst_238_, lean_object* v_inst_239_, lean_object* v_m_240_, lean_object* v_a_241_, lean_object* v_b_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Std_DHashMap_Internal_Raw_u2080_cons_u2098(v_00_u03b1_236_, v_00_u03b2_237_, v_inst_238_, v_inst_239_, v_m_240_, v_a_241_, v_b_242_);
lean_dec_ref(v_inst_238_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098___redArg(lean_object* v_inst_244_, lean_object* v_inst_245_, lean_object* v_m_246_, lean_object* v_a_247_){
_start:
{
lean_object* v_buckets_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v_buckets_248_ = lean_ctor_get(v_m_246_, 1);
lean_inc(v_a_247_);
v___x_249_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_245_, v_buckets_248_, v_a_247_);
v___x_250_ = l_Std_DHashMap_Internal_AssocList_getCast_x3f___redArg(v_inst_244_, v_a_247_, v___x_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098___redArg___boxed(lean_object* v_inst_251_, lean_object* v_inst_252_, lean_object* v_m_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098___redArg(v_inst_251_, v_inst_252_, v_m_253_, v_a_254_);
lean_dec_ref(v_m_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098(lean_object* v_00_u03b1_256_, lean_object* v_00_u03b2_257_, lean_object* v_inst_258_, lean_object* v_inst_259_, lean_object* v_inst_260_, lean_object* v_m_261_, lean_object* v_a_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098___redArg(v_inst_258_, v_inst_260_, v_m_261_, v_a_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098___boxed(lean_object* v_00_u03b1_264_, lean_object* v_00_u03b2_265_, lean_object* v_inst_266_, lean_object* v_inst_267_, lean_object* v_inst_268_, lean_object* v_m_269_, lean_object* v_a_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098(v_00_u03b1_264_, v_00_u03b2_265_, v_inst_266_, v_inst_267_, v_inst_268_, v_m_269_, v_a_270_);
lean_dec_ref(v_m_269_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098___redArg(lean_object* v_inst_272_, lean_object* v_inst_273_, lean_object* v_m_274_, lean_object* v_a_275_){
_start:
{
lean_object* v_buckets_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_buckets_276_ = lean_ctor_get(v_m_274_, 1);
lean_inc(v_a_275_);
v___x_277_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_273_, v_buckets_276_, v_a_275_);
v___x_278_ = l_Std_DHashMap_Internal_AssocList_getKey_x3f___redArg(v_inst_272_, v_a_275_, v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098___redArg___boxed(lean_object* v_inst_279_, lean_object* v_inst_280_, lean_object* v_m_281_, lean_object* v_a_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098___redArg(v_inst_279_, v_inst_280_, v_m_281_, v_a_282_);
lean_dec_ref(v_m_281_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098(lean_object* v_00_u03b1_284_, lean_object* v_00_u03b2_285_, lean_object* v_inst_286_, lean_object* v_inst_287_, lean_object* v_m_288_, lean_object* v_a_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098___redArg(v_inst_286_, v_inst_287_, v_m_288_, v_a_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098___boxed(lean_object* v_00_u03b1_291_, lean_object* v_00_u03b2_292_, lean_object* v_inst_293_, lean_object* v_inst_294_, lean_object* v_m_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098(v_00_u03b1_291_, v_00_u03b2_292_, v_inst_293_, v_inst_294_, v_m_295_, v_a_296_);
lean_dec_ref(v_m_295_);
return v_res_297_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(lean_object* v_inst_298_, lean_object* v_inst_299_, lean_object* v_m_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_buckets_302_; lean_object* v___x_303_; uint8_t v___x_304_; 
v_buckets_302_ = lean_ctor_get(v_m_300_, 1);
lean_inc(v_a_301_);
v___x_303_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_299_, v_buckets_302_, v_a_301_);
v___x_304_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_298_, v_a_301_, v___x_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg___boxed(lean_object* v_inst_305_, lean_object* v_inst_306_, lean_object* v_m_307_, lean_object* v_a_308_){
_start:
{
uint8_t v_res_309_; lean_object* v_r_310_; 
v_res_309_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(v_inst_305_, v_inst_306_, v_m_307_, v_a_308_);
lean_dec_ref(v_m_307_);
v_r_310_ = lean_box(v_res_309_);
return v_r_310_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains_u2098(lean_object* v_00_u03b1_311_, lean_object* v_00_u03b2_312_, lean_object* v_inst_313_, lean_object* v_inst_314_, lean_object* v_m_315_, lean_object* v_a_316_){
_start:
{
uint8_t v___x_317_; 
v___x_317_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(v_inst_313_, v_inst_314_, v_m_315_, v_a_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___boxed(lean_object* v_00_u03b1_318_, lean_object* v_00_u03b2_319_, lean_object* v_inst_320_, lean_object* v_inst_321_, lean_object* v_m_322_, lean_object* v_a_323_){
_start:
{
uint8_t v_res_324_; lean_object* v_r_325_; 
v_res_324_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098(v_00_u03b1_318_, v_00_u03b2_319_, v_inst_320_, v_inst_321_, v_m_322_, v_a_323_);
lean_dec_ref(v_m_322_);
v_r_325_ = lean_box(v_res_324_);
return v_r_325_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_u2098___redArg(lean_object* v_inst_326_, lean_object* v_inst_327_, lean_object* v_m_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_buckets_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v_buckets_330_ = lean_ctor_get(v_m_328_, 1);
lean_inc(v_a_329_);
v___x_331_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_327_, v_buckets_330_, v_a_329_);
v___x_332_ = l_Std_DHashMap_Internal_AssocList_getCast___redArg(v_inst_326_, v_a_329_, v___x_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_u2098___redArg___boxed(lean_object* v_inst_333_, lean_object* v_inst_334_, lean_object* v_m_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Std_DHashMap_Internal_Raw_u2080_get_u2098___redArg(v_inst_333_, v_inst_334_, v_m_335_, v_a_336_);
lean_dec_ref(v_m_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_u2098(lean_object* v_00_u03b1_338_, lean_object* v_00_u03b2_339_, lean_object* v_inst_340_, lean_object* v_inst_341_, lean_object* v_inst_342_, lean_object* v_m_343_, lean_object* v_a_344_, lean_object* v_h_345_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = l_Std_DHashMap_Internal_Raw_u2080_get_u2098___redArg(v_inst_340_, v_inst_342_, v_m_343_, v_a_344_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_u2098___boxed(lean_object* v_00_u03b1_347_, lean_object* v_00_u03b2_348_, lean_object* v_inst_349_, lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_m_352_, lean_object* v_a_353_, lean_object* v_h_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Std_DHashMap_Internal_Raw_u2080_get_u2098(v_00_u03b1_347_, v_00_u03b2_348_, v_inst_349_, v_inst_350_, v_inst_351_, v_m_352_, v_a_353_, v_h_354_);
lean_dec_ref(v_m_352_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098___redArg(lean_object* v_inst_356_, lean_object* v_inst_357_, lean_object* v_m_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_buckets_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v_buckets_360_ = lean_ctor_get(v_m_358_, 1);
lean_inc(v_a_359_);
v___x_361_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_357_, v_buckets_360_, v_a_359_);
v___x_362_ = l_Std_DHashMap_Internal_AssocList_getEntry___redArg(v_inst_356_, v_a_359_, v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098___redArg___boxed(lean_object* v_inst_363_, lean_object* v_inst_364_, lean_object* v_m_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098___redArg(v_inst_363_, v_inst_364_, v_m_365_, v_a_366_);
lean_dec_ref(v_m_365_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098(lean_object* v_00_u03b1_368_, lean_object* v_00_u03b2_369_, lean_object* v_inst_370_, lean_object* v_inst_371_, lean_object* v_m_372_, lean_object* v_a_373_, lean_object* v_h_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098___redArg(v_inst_370_, v_inst_371_, v_m_372_, v_a_373_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098___boxed(lean_object* v_00_u03b1_376_, lean_object* v_00_u03b2_377_, lean_object* v_inst_378_, lean_object* v_inst_379_, lean_object* v_m_380_, lean_object* v_a_381_, lean_object* v_h_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_u2098(v_00_u03b1_376_, v_00_u03b2_377_, v_inst_378_, v_inst_379_, v_m_380_, v_a_381_, v_h_382_);
lean_dec_ref(v_m_380_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098___redArg(lean_object* v_inst_384_, lean_object* v_inst_385_, lean_object* v_m_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_buckets_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v_buckets_388_ = lean_ctor_get(v_m_386_, 1);
lean_inc(v_a_387_);
v___x_389_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_385_, v_buckets_388_, v_a_387_);
v___x_390_ = l_Std_DHashMap_Internal_AssocList_getEntry_x3f___redArg(v_inst_384_, v_a_387_, v___x_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098___redArg___boxed(lean_object* v_inst_391_, lean_object* v_inst_392_, lean_object* v_m_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098___redArg(v_inst_391_, v_inst_392_, v_m_393_, v_a_394_);
lean_dec_ref(v_m_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098(lean_object* v_00_u03b1_396_, lean_object* v_00_u03b2_397_, lean_object* v_inst_398_, lean_object* v_inst_399_, lean_object* v_m_400_, lean_object* v_a_401_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098___redArg(v_inst_398_, v_inst_399_, v_m_400_, v_a_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098___boxed(lean_object* v_00_u03b1_403_, lean_object* v_00_u03b2_404_, lean_object* v_inst_405_, lean_object* v_inst_406_, lean_object* v_m_407_, lean_object* v_a_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098(v_00_u03b1_403_, v_00_u03b2_404_, v_inst_405_, v_inst_406_, v_m_407_, v_a_408_);
lean_dec_ref(v_m_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098___redArg(lean_object* v_inst_410_, lean_object* v_inst_411_, lean_object* v_m_412_, lean_object* v_a_413_, lean_object* v_fallback_414_){
_start:
{
lean_object* v_buckets_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v_buckets_415_ = lean_ctor_get(v_m_412_, 1);
lean_inc(v_a_413_);
v___x_416_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_411_, v_buckets_415_, v_a_413_);
v___x_417_ = l_Std_DHashMap_Internal_AssocList_getEntryD___redArg(v_inst_410_, v_a_413_, v_fallback_414_, v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098___redArg___boxed(lean_object* v_inst_418_, lean_object* v_inst_419_, lean_object* v_m_420_, lean_object* v_a_421_, lean_object* v_fallback_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098___redArg(v_inst_418_, v_inst_419_, v_m_420_, v_a_421_, v_fallback_422_);
lean_dec_ref(v_fallback_422_);
lean_dec_ref(v_m_420_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098(lean_object* v_00_u03b1_424_, lean_object* v_00_u03b2_425_, lean_object* v_inst_426_, lean_object* v_inst_427_, lean_object* v_m_428_, lean_object* v_a_429_, lean_object* v_fallback_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098___redArg(v_inst_426_, v_inst_427_, v_m_428_, v_a_429_, v_fallback_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098___boxed(lean_object* v_00_u03b1_432_, lean_object* v_00_u03b2_433_, lean_object* v_inst_434_, lean_object* v_inst_435_, lean_object* v_m_436_, lean_object* v_a_437_, lean_object* v_fallback_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Std_DHashMap_Internal_Raw_u2080_getEntryD_u2098(v_00_u03b1_432_, v_00_u03b2_433_, v_inst_434_, v_inst_435_, v_m_436_, v_a_437_, v_fallback_438_);
lean_dec_ref(v_fallback_438_);
lean_dec_ref(v_m_436_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098___redArg(lean_object* v_inst_440_, lean_object* v_inst_441_, lean_object* v_inst_442_, lean_object* v_m_443_, lean_object* v_a_444_){
_start:
{
lean_object* v_buckets_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v_buckets_445_ = lean_ctor_get(v_m_443_, 1);
lean_inc(v_a_444_);
v___x_446_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_441_, v_buckets_445_, v_a_444_);
v___x_447_ = l_Std_DHashMap_Internal_AssocList_getEntry_x21___redArg(v_inst_440_, v_a_444_, v_inst_442_, v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098___redArg___boxed(lean_object* v_inst_448_, lean_object* v_inst_449_, lean_object* v_inst_450_, lean_object* v_m_451_, lean_object* v_a_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098___redArg(v_inst_448_, v_inst_449_, v_inst_450_, v_m_451_, v_a_452_);
lean_dec_ref(v_m_451_);
lean_dec_ref(v_inst_450_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098(lean_object* v_00_u03b1_454_, lean_object* v_00_u03b2_455_, lean_object* v_inst_456_, lean_object* v_inst_457_, lean_object* v_inst_458_, lean_object* v_m_459_, lean_object* v_a_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098___redArg(v_inst_456_, v_inst_457_, v_inst_458_, v_m_459_, v_a_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098___boxed(lean_object* v_00_u03b1_462_, lean_object* v_00_u03b2_463_, lean_object* v_inst_464_, lean_object* v_inst_465_, lean_object* v_inst_466_, lean_object* v_m_467_, lean_object* v_a_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21_u2098(v_00_u03b1_462_, v_00_u03b2_463_, v_inst_464_, v_inst_465_, v_inst_466_, v_m_467_, v_a_468_);
lean_dec_ref(v_m_467_);
lean_dec_ref(v_inst_466_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD_u2098___redArg(lean_object* v_inst_470_, lean_object* v_inst_471_, lean_object* v_m_472_, lean_object* v_a_473_, lean_object* v_fallback_474_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098___redArg(v_inst_470_, v_inst_471_, v_m_472_, v_a_473_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_inc(v_fallback_474_);
return v_fallback_474_;
}
else
{
lean_object* v_val_476_; 
v_val_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_val_476_);
lean_dec_ref_known(v___x_475_, 1);
return v_val_476_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD_u2098___redArg___boxed(lean_object* v_inst_477_, lean_object* v_inst_478_, lean_object* v_m_479_, lean_object* v_a_480_, lean_object* v_fallback_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Std_DHashMap_Internal_Raw_u2080_getD_u2098___redArg(v_inst_477_, v_inst_478_, v_m_479_, v_a_480_, v_fallback_481_);
lean_dec(v_fallback_481_);
lean_dec_ref(v_m_479_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD_u2098(lean_object* v_00_u03b1_483_, lean_object* v_00_u03b2_484_, lean_object* v_inst_485_, lean_object* v_inst_486_, lean_object* v_inst_487_, lean_object* v_m_488_, lean_object* v_a_489_, lean_object* v_fallback_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Std_DHashMap_Internal_Raw_u2080_getD_u2098___redArg(v_inst_485_, v_inst_487_, v_m_488_, v_a_489_, v_fallback_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD_u2098___boxed(lean_object* v_00_u03b1_492_, lean_object* v_00_u03b2_493_, lean_object* v_inst_494_, lean_object* v_inst_495_, lean_object* v_inst_496_, lean_object* v_m_497_, lean_object* v_a_498_, lean_object* v_fallback_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Std_DHashMap_Internal_Raw_u2080_getD_u2098(v_00_u03b1_492_, v_00_u03b2_493_, v_inst_494_, v_inst_495_, v_inst_496_, v_m_497_, v_a_498_, v_fallback_499_);
lean_dec(v_fallback_499_);
lean_dec_ref(v_m_497_);
return v_res_500_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_504_ = ((lean_object*)(l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__2));
v___x_505_ = lean_unsigned_to_nat(14u);
v___x_506_ = lean_unsigned_to_nat(22u);
v___x_507_ = ((lean_object*)(l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__1));
v___x_508_ = ((lean_object*)(l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__0));
v___x_509_ = l_mkPanicMessageWithDecl(v___x_508_, v___x_507_, v___x_506_, v___x_505_, v___x_504_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg(lean_object* v_inst_510_, lean_object* v_inst_511_, lean_object* v_m_512_, lean_object* v_a_513_, lean_object* v_inst_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l_Std_DHashMap_Internal_Raw_u2080_get_x3f_u2098___redArg(v_inst_510_, v_inst_511_, v_m_512_, v_a_513_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3, &l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3_once, _init_l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3);
v___x_517_ = l_panic___redArg(v_inst_514_, v___x_516_);
return v___x_517_;
}
else
{
lean_object* v_val_518_; 
v_val_518_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_val_518_);
lean_dec_ref_known(v___x_515_, 1);
return v_val_518_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___boxed(lean_object* v_inst_519_, lean_object* v_inst_520_, lean_object* v_m_521_, lean_object* v_a_522_, lean_object* v_inst_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg(v_inst_519_, v_inst_520_, v_m_521_, v_a_522_, v_inst_523_);
lean_dec(v_inst_523_);
lean_dec_ref(v_m_521_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098(lean_object* v_00_u03b1_525_, lean_object* v_00_u03b2_526_, lean_object* v_inst_527_, lean_object* v_inst_528_, lean_object* v_inst_529_, lean_object* v_m_530_, lean_object* v_a_531_, lean_object* v_inst_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg(v_inst_527_, v_inst_529_, v_m_530_, v_a_531_, v_inst_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___boxed(lean_object* v_00_u03b1_534_, lean_object* v_00_u03b2_535_, lean_object* v_inst_536_, lean_object* v_inst_537_, lean_object* v_inst_538_, lean_object* v_m_539_, lean_object* v_a_540_, lean_object* v_inst_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098(v_00_u03b1_534_, v_00_u03b2_535_, v_inst_536_, v_inst_537_, v_inst_538_, v_m_539_, v_a_540_, v_inst_541_);
lean_dec(v_inst_541_);
lean_dec_ref(v_m_539_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098___redArg(lean_object* v_inst_543_, lean_object* v_inst_544_, lean_object* v_m_545_, lean_object* v_a_546_){
_start:
{
lean_object* v_buckets_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_buckets_547_ = lean_ctor_get(v_m_545_, 1);
lean_inc(v_a_546_);
v___x_548_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_544_, v_buckets_547_, v_a_546_);
v___x_549_ = l_Std_DHashMap_Internal_AssocList_getKey___redArg(v_inst_543_, v_a_546_, v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098___redArg___boxed(lean_object* v_inst_550_, lean_object* v_inst_551_, lean_object* v_m_552_, lean_object* v_a_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098___redArg(v_inst_550_, v_inst_551_, v_m_552_, v_a_553_);
lean_dec_ref(v_m_552_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098(lean_object* v_00_u03b1_555_, lean_object* v_00_u03b2_556_, lean_object* v_inst_557_, lean_object* v_inst_558_, lean_object* v_m_559_, lean_object* v_a_560_, lean_object* v_h_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098___redArg(v_inst_557_, v_inst_558_, v_m_559_, v_a_560_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098___boxed(lean_object* v_00_u03b1_563_, lean_object* v_00_u03b2_564_, lean_object* v_inst_565_, lean_object* v_inst_566_, lean_object* v_m_567_, lean_object* v_a_568_, lean_object* v_h_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_u2098(v_00_u03b1_563_, v_00_u03b2_564_, v_inst_565_, v_inst_566_, v_m_567_, v_a_568_, v_h_569_);
lean_dec_ref(v_m_567_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098___redArg(lean_object* v_inst_571_, lean_object* v_inst_572_, lean_object* v_m_573_, lean_object* v_a_574_, lean_object* v_fallback_575_){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098___redArg(v_inst_571_, v_inst_572_, v_m_573_, v_a_574_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_inc(v_fallback_575_);
return v_fallback_575_;
}
else
{
lean_object* v_val_577_; 
v_val_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_val_577_);
lean_dec_ref_known(v___x_576_, 1);
return v_val_577_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098___redArg___boxed(lean_object* v_inst_578_, lean_object* v_inst_579_, lean_object* v_m_580_, lean_object* v_a_581_, lean_object* v_fallback_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098___redArg(v_inst_578_, v_inst_579_, v_m_580_, v_a_581_, v_fallback_582_);
lean_dec(v_fallback_582_);
lean_dec_ref(v_m_580_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098(lean_object* v_00_u03b1_584_, lean_object* v_00_u03b2_585_, lean_object* v_inst_586_, lean_object* v_inst_587_, lean_object* v_m_588_, lean_object* v_a_589_, lean_object* v_fallback_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098___redArg(v_inst_586_, v_inst_587_, v_m_588_, v_a_589_, v_fallback_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098___boxed(lean_object* v_00_u03b1_592_, lean_object* v_00_u03b2_593_, lean_object* v_inst_594_, lean_object* v_inst_595_, lean_object* v_m_596_, lean_object* v_a_597_, lean_object* v_fallback_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Std_DHashMap_Internal_Raw_u2080_getKeyD_u2098(v_00_u03b1_592_, v_00_u03b2_593_, v_inst_594_, v_inst_595_, v_m_596_, v_a_597_, v_fallback_598_);
lean_dec(v_fallback_598_);
lean_dec_ref(v_m_596_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098___redArg(lean_object* v_inst_600_, lean_object* v_inst_601_, lean_object* v_inst_602_, lean_object* v_m_603_, lean_object* v_a_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f_u2098___redArg(v_inst_600_, v_inst_601_, v_m_603_, v_a_604_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3, &l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3_once, _init_l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3);
v___x_607_ = l_panic___redArg(v_inst_602_, v___x_606_);
return v___x_607_;
}
else
{
lean_object* v_val_608_; 
v_val_608_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_val_608_);
lean_dec_ref_known(v___x_605_, 1);
return v_val_608_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098___redArg___boxed(lean_object* v_inst_609_, lean_object* v_inst_610_, lean_object* v_inst_611_, lean_object* v_m_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098___redArg(v_inst_609_, v_inst_610_, v_inst_611_, v_m_612_, v_a_613_);
lean_dec_ref(v_m_612_);
lean_dec(v_inst_611_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098(lean_object* v_00_u03b1_615_, lean_object* v_00_u03b2_616_, lean_object* v_inst_617_, lean_object* v_inst_618_, lean_object* v_inst_619_, lean_object* v_m_620_, lean_object* v_a_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098___redArg(v_inst_617_, v_inst_618_, v_inst_619_, v_m_620_, v_a_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098___boxed(lean_object* v_00_u03b1_623_, lean_object* v_00_u03b2_624_, lean_object* v_inst_625_, lean_object* v_inst_626_, lean_object* v_inst_627_, lean_object* v_m_628_, lean_object* v_a_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x21_u2098(v_00_u03b1_623_, v_00_u03b2_624_, v_inst_625_, v_inst_626_, v_inst_627_, v_m_628_, v_a_629_);
lean_dec_ref(v_m_628_);
lean_dec(v_inst_627_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert_u2098___redArg(lean_object* v_inst_631_, lean_object* v_inst_632_, lean_object* v_m_633_, lean_object* v_a_634_, lean_object* v_b_635_){
_start:
{
uint8_t v___x_636_; 
lean_inc(v_a_634_);
lean_inc_ref(v_inst_632_);
lean_inc_ref(v_inst_631_);
v___x_636_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(v_inst_631_, v_inst_632_, v_m_633_, v_a_634_);
if (v___x_636_ == 0)
{
lean_object* v_val_637_; lean_object* v_size_638_; lean_object* v_buckets_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___x_645_; 
lean_dec_ref(v_inst_631_);
lean_inc_ref(v_inst_632_);
v_val_637_ = l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___redArg(v_inst_632_, v_m_633_, v_a_634_, v_b_635_);
v_size_638_ = lean_ctor_get(v_val_637_, 0);
lean_inc(v_size_638_);
v_buckets_639_ = lean_ctor_get(v_val_637_, 1);
lean_inc_ref(v_buckets_639_);
v___x_640_ = lean_unsigned_to_nat(4u);
v___x_641_ = lean_nat_mul(v_size_638_, v___x_640_);
v___x_642_ = lean_unsigned_to_nat(3u);
v___x_643_ = lean_nat_div(v___x_641_, v___x_642_);
lean_dec(v___x_641_);
v___x_644_ = lean_array_get_size(v_buckets_639_);
v___x_645_ = lean_nat_dec_le(v___x_643_, v___x_644_);
lean_dec(v___x_643_);
if (v___x_645_ == 0)
{
lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_653_; 
v_isSharedCheck_653_ = !lean_is_exclusive(v_val_637_);
if (v_isSharedCheck_653_ == 0)
{
lean_object* v_unused_654_; lean_object* v_unused_655_; 
v_unused_654_ = lean_ctor_get(v_val_637_, 1);
lean_dec(v_unused_654_);
v_unused_655_ = lean_ctor_get(v_val_637_, 0);
lean_dec(v_unused_655_);
v___x_647_ = v_val_637_;
v_isShared_648_ = v_isSharedCheck_653_;
goto v_resetjp_646_;
}
else
{
lean_dec(v_val_637_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_653_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_val_649_; lean_object* v___x_651_; 
v_val_649_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_632_, v_buckets_639_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v_val_649_);
v___x_651_ = v___x_647_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_size_638_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_val_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
else
{
lean_dec_ref(v_buckets_639_);
lean_dec(v_size_638_);
lean_dec_ref(v_inst_632_);
return v_val_637_;
}
}
else
{
lean_object* v___x_656_; 
v___x_656_ = l_Std_DHashMap_Internal_Raw_u2080_replace_u2098___redArg(v_inst_631_, v_inst_632_, v_m_633_, v_a_634_, v_b_635_);
return v___x_656_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert_u2098(lean_object* v_00_u03b1_657_, lean_object* v_00_u03b2_658_, lean_object* v_inst_659_, lean_object* v_inst_660_, lean_object* v_m_661_, lean_object* v_a_662_, lean_object* v_b_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_Std_DHashMap_Internal_Raw_u2080_insert_u2098___redArg(v_inst_659_, v_inst_660_, v_m_661_, v_a_662_, v_b_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew_u2098___redArg(lean_object* v_inst_665_, lean_object* v_inst_666_, lean_object* v_m_667_, lean_object* v_a_668_, lean_object* v_b_669_){
_start:
{
uint8_t v___x_670_; 
lean_inc(v_a_668_);
lean_inc_ref(v_inst_666_);
v___x_670_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(v_inst_665_, v_inst_666_, v_m_667_, v_a_668_);
if (v___x_670_ == 0)
{
lean_object* v_val_671_; lean_object* v_size_672_; lean_object* v_buckets_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
lean_inc_ref(v_inst_666_);
v_val_671_ = l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___redArg(v_inst_666_, v_m_667_, v_a_668_, v_b_669_);
v_size_672_ = lean_ctor_get(v_val_671_, 0);
lean_inc(v_size_672_);
v_buckets_673_ = lean_ctor_get(v_val_671_, 1);
lean_inc_ref(v_buckets_673_);
v___x_674_ = lean_unsigned_to_nat(4u);
v___x_675_ = lean_nat_mul(v_size_672_, v___x_674_);
v___x_676_ = lean_unsigned_to_nat(3u);
v___x_677_ = lean_nat_div(v___x_675_, v___x_676_);
lean_dec(v___x_675_);
v___x_678_ = lean_array_get_size(v_buckets_673_);
v___x_679_ = lean_nat_dec_le(v___x_677_, v___x_678_);
lean_dec(v___x_677_);
if (v___x_679_ == 0)
{
lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_687_; 
v_isSharedCheck_687_ = !lean_is_exclusive(v_val_671_);
if (v_isSharedCheck_687_ == 0)
{
lean_object* v_unused_688_; lean_object* v_unused_689_; 
v_unused_688_ = lean_ctor_get(v_val_671_, 1);
lean_dec(v_unused_688_);
v_unused_689_ = lean_ctor_get(v_val_671_, 0);
lean_dec(v_unused_689_);
v___x_681_ = v_val_671_;
v_isShared_682_ = v_isSharedCheck_687_;
goto v_resetjp_680_;
}
else
{
lean_dec(v_val_671_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_687_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v_val_683_; lean_object* v___x_685_; 
v_val_683_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_666_, v_buckets_673_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 1, v_val_683_);
v___x_685_ = v___x_681_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_size_672_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v_val_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
else
{
lean_dec_ref(v_buckets_673_);
lean_dec(v_size_672_);
lean_dec_ref(v_inst_666_);
return v_val_671_;
}
}
else
{
lean_dec(v_b_669_);
lean_dec(v_a_668_);
lean_dec_ref(v_inst_666_);
return v_m_667_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew_u2098(lean_object* v_00_u03b1_690_, lean_object* v_00_u03b2_691_, lean_object* v_inst_692_, lean_object* v_inst_693_, lean_object* v_m_694_, lean_object* v_a_695_, lean_object* v_b_696_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew_u2098___redArg(v_inst_692_, v_inst_693_, v_m_694_, v_a_695_, v_b_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase_u2098aux___redArg___lam__0(lean_object* v_inst_698_, lean_object* v_a_699_, lean_object* v_l_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Std_DHashMap_Internal_AssocList_erase___redArg(v_inst_698_, v_a_699_, v_l_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase_u2098aux___redArg(lean_object* v_inst_702_, lean_object* v_inst_703_, lean_object* v_m_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_size_706_; lean_object* v_buckets_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_718_; 
v_size_706_ = lean_ctor_get(v_m_704_, 0);
v_buckets_707_ = lean_ctor_get(v_m_704_, 1);
v_isSharedCheck_718_ = !lean_is_exclusive(v_m_704_);
if (v_isSharedCheck_718_ == 0)
{
v___x_709_ = v_m_704_;
v_isShared_710_ = v_isSharedCheck_718_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_buckets_707_);
lean_inc(v_size_706_);
lean_dec(v_m_704_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_718_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___f_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
lean_inc(v_a_705_);
v___f_711_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_erase_u2098aux___redArg___lam__0), 3, 2);
lean_closure_set(v___f_711_, 0, v_inst_702_);
lean_closure_set(v___f_711_, 1, v_a_705_);
v___x_712_ = lean_unsigned_to_nat(1u);
v___x_713_ = lean_nat_sub(v_size_706_, v___x_712_);
lean_dec(v_size_706_);
v___x_714_ = l_Std_DHashMap_Internal_updateBucket___redArg(v_inst_703_, v_buckets_707_, v_a_705_, v___f_711_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 1, v___x_714_);
lean_ctor_set(v___x_709_, 0, v___x_713_);
v___x_716_ = v___x_709_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v___x_714_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase_u2098aux(lean_object* v_00_u03b1_719_, lean_object* v_00_u03b2_720_, lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_m_723_, lean_object* v_a_724_){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = l_Std_DHashMap_Internal_Raw_u2080_erase_u2098aux___redArg(v_inst_721_, v_inst_722_, v_m_723_, v_a_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase_u2098___redArg(lean_object* v_inst_726_, lean_object* v_inst_727_, lean_object* v_m_728_, lean_object* v_a_729_){
_start:
{
uint8_t v___x_730_; 
lean_inc(v_a_729_);
lean_inc_ref(v_inst_727_);
lean_inc_ref(v_inst_726_);
v___x_730_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(v_inst_726_, v_inst_727_, v_m_728_, v_a_729_);
if (v___x_730_ == 0)
{
lean_dec(v_a_729_);
lean_dec_ref(v_inst_727_);
lean_dec_ref(v_inst_726_);
return v_m_728_;
}
else
{
lean_object* v___x_731_; 
v___x_731_ = l_Std_DHashMap_Internal_Raw_u2080_erase_u2098aux___redArg(v_inst_726_, v_inst_727_, v_m_728_, v_a_729_);
return v___x_731_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase_u2098(lean_object* v_00_u03b1_732_, lean_object* v_00_u03b2_733_, lean_object* v_inst_734_, lean_object* v_inst_735_, lean_object* v_m_736_, lean_object* v_a_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = l_Std_DHashMap_Internal_Raw_u2080_erase_u2098___redArg(v_inst_734_, v_inst_735_, v_m_736_, v_a_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_alter_u2098___redArg___lam__0(lean_object* v_inst_739_, lean_object* v_a_740_, lean_object* v_f_741_, lean_object* v_l_742_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l_Std_DHashMap_Internal_AssocList_alter___redArg(v_inst_739_, v_a_740_, v_f_741_, v_l_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_alter_u2098___redArg(lean_object* v_inst_744_, lean_object* v_inst_745_, lean_object* v_m_746_, lean_object* v_a_747_, lean_object* v_f_748_){
_start:
{
uint8_t v___x_749_; 
lean_inc(v_a_747_);
lean_inc_ref(v_inst_745_);
lean_inc_ref(v_inst_744_);
v___x_749_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(v_inst_744_, v_inst_745_, v_m_746_, v_a_747_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; 
lean_dec_ref(v_inst_744_);
v___x_750_ = lean_box(0);
v___x_751_ = lean_apply_1(v_f_748_, v___x_750_);
if (lean_obj_tag(v___x_751_) == 0)
{
lean_dec(v_a_747_);
lean_dec_ref(v_inst_745_);
return v_m_746_;
}
else
{
lean_object* v_val_752_; lean_object* v_val_753_; lean_object* v_size_754_; lean_object* v_buckets_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; uint8_t v___x_761_; 
v_val_752_ = lean_ctor_get(v___x_751_, 0);
lean_inc(v_val_752_);
lean_dec_ref_known(v___x_751_, 1);
lean_inc_ref(v_inst_745_);
v_val_753_ = l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___redArg(v_inst_745_, v_m_746_, v_a_747_, v_val_752_);
v_size_754_ = lean_ctor_get(v_val_753_, 0);
lean_inc(v_size_754_);
v_buckets_755_ = lean_ctor_get(v_val_753_, 1);
lean_inc_ref(v_buckets_755_);
v___x_756_ = lean_unsigned_to_nat(4u);
v___x_757_ = lean_nat_mul(v_size_754_, v___x_756_);
v___x_758_ = lean_unsigned_to_nat(3u);
v___x_759_ = lean_nat_div(v___x_757_, v___x_758_);
lean_dec(v___x_757_);
v___x_760_ = lean_array_get_size(v_buckets_755_);
v___x_761_ = lean_nat_dec_le(v___x_759_, v___x_760_);
lean_dec(v___x_759_);
if (v___x_761_ == 0)
{
lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_769_; 
v_isSharedCheck_769_ = !lean_is_exclusive(v_val_753_);
if (v_isSharedCheck_769_ == 0)
{
lean_object* v_unused_770_; lean_object* v_unused_771_; 
v_unused_770_ = lean_ctor_get(v_val_753_, 1);
lean_dec(v_unused_770_);
v_unused_771_ = lean_ctor_get(v_val_753_, 0);
lean_dec(v_unused_771_);
v___x_763_ = v_val_753_;
v_isShared_764_ = v_isSharedCheck_769_;
goto v_resetjp_762_;
}
else
{
lean_dec(v_val_753_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_769_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v_val_765_; lean_object* v___x_767_; 
v_val_765_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_745_, v_buckets_755_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 1, v_val_765_);
v___x_767_ = v___x_763_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_size_754_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v_val_765_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
else
{
lean_dec_ref(v_buckets_755_);
lean_dec(v_size_754_);
lean_dec_ref(v_inst_745_);
return v_val_753_;
}
}
}
else
{
lean_object* v_size_772_; lean_object* v_buckets_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_789_; 
v_size_772_ = lean_ctor_get(v_m_746_, 0);
v_buckets_773_ = lean_ctor_get(v_m_746_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v_m_746_);
if (v_isSharedCheck_789_ == 0)
{
v___x_775_ = v_m_746_;
v_isShared_776_ = v_isSharedCheck_789_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_buckets_773_);
lean_inc(v_size_772_);
lean_dec(v_m_746_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_789_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___f_777_; lean_object* v_buckets_x27_778_; lean_object* v___x_779_; uint8_t v___x_780_; 
lean_inc_n(v_a_747_, 2);
lean_inc_ref(v_inst_744_);
v___f_777_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_alter_u2098___redArg___lam__0), 4, 3);
lean_closure_set(v___f_777_, 0, v_inst_744_);
lean_closure_set(v___f_777_, 1, v_a_747_);
lean_closure_set(v___f_777_, 2, v_f_748_);
lean_inc_ref(v_inst_745_);
v_buckets_x27_778_ = l_Std_DHashMap_Internal_updateBucket___redArg(v_inst_745_, v_buckets_773_, v_a_747_, v___f_777_);
lean_inc_ref(v_buckets_x27_778_);
v___x_779_ = l_Std_DHashMap_Internal_withComputedSize___redArg(v_buckets_x27_778_);
v___x_780_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(v_inst_744_, v_inst_745_, v___x_779_, v_a_747_);
lean_dec_ref(v___x_779_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_781_ = lean_unsigned_to_nat(1u);
v___x_782_ = lean_nat_sub(v_size_772_, v___x_781_);
lean_dec(v_size_772_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 1, v_buckets_x27_778_);
lean_ctor_set(v___x_775_, 0, v___x_782_);
v___x_784_ = v___x_775_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_782_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_buckets_x27_778_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
else
{
lean_object* v___x_787_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 1, v_buckets_x27_778_);
v___x_787_ = v___x_775_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_size_772_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_buckets_x27_778_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_alter_u2098(lean_object* v_00_u03b1_790_, lean_object* v_00_u03b2_791_, lean_object* v_inst_792_, lean_object* v_inst_793_, lean_object* v_inst_794_, lean_object* v_m_795_, lean_object* v_a_796_, lean_object* v_f_797_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = l_Std_DHashMap_Internal_Raw_u2080_alter_u2098___redArg(v_inst_792_, v_inst_793_, v_m_795_, v_a_796_, v_f_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_modify_u2098___redArg___lam__0(lean_object* v_f_799_, lean_object* v_x_800_){
_start:
{
if (lean_obj_tag(v_x_800_) == 0)
{
lean_dec(v_f_799_);
return v_x_800_;
}
else
{
lean_object* v_val_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_809_; 
v_val_801_ = lean_ctor_get(v_x_800_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v_x_800_);
if (v_isSharedCheck_809_ == 0)
{
v___x_803_ = v_x_800_;
v_isShared_804_ = v_isSharedCheck_809_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_val_801_);
lean_dec(v_x_800_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_809_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_805_ = lean_apply_1(v_f_799_, v_val_801_);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 0, v___x_805_);
v___x_807_ = v___x_803_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_805_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_modify_u2098___redArg(lean_object* v_inst_810_, lean_object* v_inst_811_, lean_object* v_m_812_, lean_object* v_a_813_, lean_object* v_f_814_){
_start:
{
lean_object* v___f_815_; lean_object* v___x_816_; 
v___f_815_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_modify_u2098___redArg___lam__0), 2, 1);
lean_closure_set(v___f_815_, 0, v_f_814_);
v___x_816_ = l_Std_DHashMap_Internal_Raw_u2080_alter_u2098___redArg(v_inst_810_, v_inst_811_, v_m_812_, v_a_813_, v___f_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_modify_u2098(lean_object* v_00_u03b1_817_, lean_object* v_00_u03b2_818_, lean_object* v_inst_819_, lean_object* v_inst_820_, lean_object* v_inst_821_, lean_object* v_m_822_, lean_object* v_a_823_, lean_object* v_f_824_){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = l_Std_DHashMap_Internal_Raw_u2080_modify_u2098___redArg(v_inst_819_, v_inst_820_, v_m_822_, v_a_823_, v_f_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098___redArg___lam__0(lean_object* v_inst_826_, lean_object* v_a_827_, lean_object* v_f_828_, lean_object* v_l_829_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Std_DHashMap_Internal_AssocList_Const_alter___redArg(v_inst_826_, v_a_827_, v_f_828_, v_l_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098___redArg(lean_object* v_inst_831_, lean_object* v_inst_832_, lean_object* v_m_833_, lean_object* v_a_834_, lean_object* v_f_835_){
_start:
{
uint8_t v___x_836_; 
lean_inc(v_a_834_);
lean_inc_ref(v_inst_832_);
lean_inc_ref(v_inst_831_);
v___x_836_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(v_inst_831_, v_inst_832_, v_m_833_, v_a_834_);
if (v___x_836_ == 0)
{
lean_object* v___x_837_; lean_object* v___x_838_; 
lean_dec_ref(v_inst_831_);
v___x_837_ = lean_box(0);
v___x_838_ = lean_apply_1(v_f_835_, v___x_837_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_dec(v_a_834_);
lean_dec_ref(v_inst_832_);
return v_m_833_;
}
else
{
lean_object* v_val_839_; lean_object* v_val_840_; lean_object* v_size_841_; lean_object* v_buckets_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; uint8_t v___x_848_; 
v_val_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc(v_val_839_);
lean_dec_ref_known(v___x_838_, 1);
lean_inc_ref(v_inst_832_);
v_val_840_ = l_Std_DHashMap_Internal_Raw_u2080_cons_u2098___redArg(v_inst_832_, v_m_833_, v_a_834_, v_val_839_);
v_size_841_ = lean_ctor_get(v_val_840_, 0);
lean_inc(v_size_841_);
v_buckets_842_ = lean_ctor_get(v_val_840_, 1);
lean_inc_ref(v_buckets_842_);
v___x_843_ = lean_unsigned_to_nat(4u);
v___x_844_ = lean_nat_mul(v_size_841_, v___x_843_);
v___x_845_ = lean_unsigned_to_nat(3u);
v___x_846_ = lean_nat_div(v___x_844_, v___x_845_);
lean_dec(v___x_844_);
v___x_847_ = lean_array_get_size(v_buckets_842_);
v___x_848_ = lean_nat_dec_le(v___x_846_, v___x_847_);
lean_dec(v___x_846_);
if (v___x_848_ == 0)
{
lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_856_; 
v_isSharedCheck_856_ = !lean_is_exclusive(v_val_840_);
if (v_isSharedCheck_856_ == 0)
{
lean_object* v_unused_857_; lean_object* v_unused_858_; 
v_unused_857_ = lean_ctor_get(v_val_840_, 1);
lean_dec(v_unused_857_);
v_unused_858_ = lean_ctor_get(v_val_840_, 0);
lean_dec(v_unused_858_);
v___x_850_ = v_val_840_;
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
else
{
lean_dec(v_val_840_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v_val_852_; lean_object* v___x_854_; 
v_val_852_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_832_, v_buckets_842_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 1, v_val_852_);
v___x_854_ = v___x_850_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_size_841_);
lean_ctor_set(v_reuseFailAlloc_855_, 1, v_val_852_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
else
{
lean_dec_ref(v_buckets_842_);
lean_dec(v_size_841_);
lean_dec_ref(v_inst_832_);
return v_val_840_;
}
}
}
else
{
lean_object* v_size_859_; lean_object* v_buckets_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_876_; 
v_size_859_ = lean_ctor_get(v_m_833_, 0);
v_buckets_860_ = lean_ctor_get(v_m_833_, 1);
v_isSharedCheck_876_ = !lean_is_exclusive(v_m_833_);
if (v_isSharedCheck_876_ == 0)
{
v___x_862_ = v_m_833_;
v_isShared_863_ = v_isSharedCheck_876_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_buckets_860_);
lean_inc(v_size_859_);
lean_dec(v_m_833_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_876_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___f_864_; lean_object* v_buckets_x27_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
lean_inc_n(v_a_834_, 2);
lean_inc_ref(v_inst_831_);
v___f_864_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098___redArg___lam__0), 4, 3);
lean_closure_set(v___f_864_, 0, v_inst_831_);
lean_closure_set(v___f_864_, 1, v_a_834_);
lean_closure_set(v___f_864_, 2, v_f_835_);
lean_inc_ref(v_inst_832_);
v_buckets_x27_865_ = l_Std_DHashMap_Internal_updateBucket___redArg(v_inst_832_, v_buckets_860_, v_a_834_, v___f_864_);
lean_inc_ref(v_buckets_x27_865_);
v___x_866_ = l_Std_DHashMap_Internal_withComputedSize___redArg(v_buckets_x27_865_);
v___x_867_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(v_inst_831_, v_inst_832_, v___x_866_, v_a_834_);
lean_dec_ref(v___x_866_);
if (v___x_867_ == 0)
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_871_; 
v___x_868_ = lean_unsigned_to_nat(1u);
v___x_869_ = lean_nat_sub(v_size_859_, v___x_868_);
lean_dec(v_size_859_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 1, v_buckets_x27_865_);
lean_ctor_set(v___x_862_, 0, v___x_869_);
v___x_871_ = v___x_862_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_869_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v_buckets_x27_865_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
else
{
lean_object* v___x_874_; 
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 1, v_buckets_x27_865_);
v___x_874_ = v___x_862_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_size_859_);
lean_ctor_set(v_reuseFailAlloc_875_, 1, v_buckets_x27_865_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098(lean_object* v_00_u03b1_877_, lean_object* v_00_u03b2_878_, lean_object* v_inst_879_, lean_object* v_inst_880_, lean_object* v_m_881_, lean_object* v_a_882_, lean_object* v_f_883_){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098___redArg(v_inst_879_, v_inst_880_, v_m_881_, v_a_882_, v_f_883_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify_u2098___redArg___lam__0(lean_object* v_f_885_, lean_object* v_option_886_){
_start:
{
if (lean_obj_tag(v_option_886_) == 0)
{
lean_dec(v_f_885_);
return v_option_886_;
}
else
{
lean_object* v_val_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_895_; 
v_val_887_ = lean_ctor_get(v_option_886_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v_option_886_);
if (v_isSharedCheck_895_ == 0)
{
v___x_889_ = v_option_886_;
v_isShared_890_ = v_isSharedCheck_895_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_val_887_);
lean_dec(v_option_886_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_895_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; lean_object* v___x_893_; 
v___x_891_ = lean_apply_1(v_f_885_, v_val_887_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v___x_891_);
v___x_893_ = v___x_889_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_891_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify_u2098___redArg(lean_object* v_inst_896_, lean_object* v_inst_897_, lean_object* v_m_898_, lean_object* v_a_899_, lean_object* v_f_900_){
_start:
{
lean_object* v___f_901_; lean_object* v___x_902_; 
v___f_901_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_Const_modify_u2098___redArg___lam__0), 2, 1);
lean_closure_set(v___f_901_, 0, v_f_900_);
v___x_902_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098___redArg(v_inst_896_, v_inst_897_, v_m_898_, v_a_899_, v___f_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify_u2098(lean_object* v_00_u03b1_903_, lean_object* v_00_u03b2_904_, lean_object* v_inst_905_, lean_object* v_inst_906_, lean_object* v_m_907_, lean_object* v_a_908_, lean_object* v_f_909_){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify_u2098___redArg(v_inst_905_, v_inst_906_, v_m_907_, v_a_908_, v_f_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filterMap_go___at___00Std_DHashMap_Internal_Raw_u2080_filterMap_u2098_spec__0___redArg(lean_object* v_f_911_, lean_object* v_acc_912_, lean_object* v_a_913_){
_start:
{
if (lean_obj_tag(v_a_913_) == 0)
{
lean_dec_ref(v_f_911_);
return v_acc_912_;
}
else
{
lean_object* v_key_914_; lean_object* v_value_915_; lean_object* v_tail_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_927_; 
v_key_914_ = lean_ctor_get(v_a_913_, 0);
v_value_915_ = lean_ctor_get(v_a_913_, 1);
v_tail_916_ = lean_ctor_get(v_a_913_, 2);
v_isSharedCheck_927_ = !lean_is_exclusive(v_a_913_);
if (v_isSharedCheck_927_ == 0)
{
v___x_918_ = v_a_913_;
v_isShared_919_ = v_isSharedCheck_927_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_tail_916_);
lean_inc(v_value_915_);
lean_inc(v_key_914_);
lean_dec(v_a_913_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_927_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; 
lean_inc_ref(v_f_911_);
lean_inc(v_key_914_);
v___x_920_ = lean_apply_2(v_f_911_, v_key_914_, v_value_915_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_del_object(v___x_918_);
lean_dec(v_key_914_);
v_a_913_ = v_tail_916_;
goto _start;
}
else
{
lean_object* v_val_922_; lean_object* v___x_924_; 
v_val_922_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_val_922_);
lean_dec_ref_known(v___x_920_, 1);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 2, v_acc_912_);
lean_ctor_set(v___x_918_, 1, v_val_922_);
v___x_924_ = v___x_918_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_key_914_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_val_922_);
lean_ctor_set(v_reuseFailAlloc_926_, 2, v_acc_912_);
v___x_924_ = v_reuseFailAlloc_926_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
v_acc_912_ = v___x_924_;
v_a_913_ = v_tail_916_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___redArg___lam__0(lean_object* v_f_928_, lean_object* v_l_929_){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = lean_box(0);
v___x_931_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filterMap_go___at___00Std_DHashMap_Internal_Raw_u2080_filterMap_u2098_spec__0___redArg(v_f_928_, v___x_930_, v_l_929_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___redArg(lean_object* v_m_932_, lean_object* v_f_933_){
_start:
{
lean_object* v_buckets_934_; lean_object* v___f_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v_buckets_934_ = lean_ctor_get(v_m_932_, 1);
v___f_935_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___redArg___lam__0), 2, 1);
lean_closure_set(v___f_935_, 0, v_f_933_);
v___x_936_ = l_Std_DHashMap_Internal_updateAllBuckets___redArg(v_buckets_934_, v___f_935_);
v___x_937_ = l_Std_DHashMap_Internal_withComputedSize___redArg(v___x_936_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___redArg___boxed(lean_object* v_m_938_, lean_object* v_f_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___redArg(v_m_938_, v_f_939_);
lean_dec_ref(v_m_938_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098(lean_object* v_00_u03b1_941_, lean_object* v_00_u03b2_942_, lean_object* v_00_u03b4_943_, lean_object* v_m_944_, lean_object* v_f_945_){
_start:
{
lean_object* v___x_946_; 
v___x_946_ = l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___redArg(v_m_944_, v_f_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098___boxed(lean_object* v_00_u03b1_947_, lean_object* v_00_u03b2_948_, lean_object* v_00_u03b4_949_, lean_object* v_m_950_, lean_object* v_f_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Std_DHashMap_Internal_Raw_u2080_filterMap_u2098(v_00_u03b1_947_, v_00_u03b2_948_, v_00_u03b4_949_, v_m_950_, v_f_951_);
lean_dec_ref(v_m_950_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filterMap_go___at___00Std_DHashMap_Internal_Raw_u2080_filterMap_u2098_spec__0(lean_object* v_00_u03b1_953_, lean_object* v_00_u03b2_954_, lean_object* v_00_u03b4_955_, lean_object* v_f_956_, lean_object* v_acc_957_, lean_object* v_a_958_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filterMap_go___at___00Std_DHashMap_Internal_Raw_u2080_filterMap_u2098_spec__0___redArg(v_f_956_, v_acc_957_, v_a_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_map_go___at___00Std_DHashMap_Internal_Raw_u2080_map_u2098_spec__0___redArg(lean_object* v_f_960_, lean_object* v_acc_961_, lean_object* v_a_962_){
_start:
{
if (lean_obj_tag(v_a_962_) == 0)
{
lean_dec(v_f_960_);
return v_acc_961_;
}
else
{
lean_object* v_key_963_; lean_object* v_value_964_; lean_object* v_tail_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_974_; 
v_key_963_ = lean_ctor_get(v_a_962_, 0);
v_value_964_ = lean_ctor_get(v_a_962_, 1);
v_tail_965_ = lean_ctor_get(v_a_962_, 2);
v_isSharedCheck_974_ = !lean_is_exclusive(v_a_962_);
if (v_isSharedCheck_974_ == 0)
{
v___x_967_ = v_a_962_;
v_isShared_968_ = v_isSharedCheck_974_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_tail_965_);
lean_inc(v_value_964_);
lean_inc(v_key_963_);
lean_dec(v_a_962_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_974_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_969_; lean_object* v___x_971_; 
lean_inc(v_f_960_);
lean_inc(v_key_963_);
v___x_969_ = lean_apply_2(v_f_960_, v_key_963_, v_value_964_);
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 2, v_acc_961_);
lean_ctor_set(v___x_967_, 1, v___x_969_);
v___x_971_ = v___x_967_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_key_963_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_973_, 2, v_acc_961_);
v___x_971_ = v_reuseFailAlloc_973_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
v_acc_961_ = v___x_971_;
v_a_962_ = v_tail_965_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map_u2098___redArg___lam__0(lean_object* v_f_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = lean_box(0);
v___x_978_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_map_go___at___00Std_DHashMap_Internal_Raw_u2080_map_u2098_spec__0___redArg(v_f_975_, v___x_977_, v___y_976_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map_u2098___redArg(lean_object* v_m_979_, lean_object* v_f_980_){
_start:
{
lean_object* v_size_981_; lean_object* v_buckets_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_991_; 
v_size_981_ = lean_ctor_get(v_m_979_, 0);
v_buckets_982_ = lean_ctor_get(v_m_979_, 1);
v_isSharedCheck_991_ = !lean_is_exclusive(v_m_979_);
if (v_isSharedCheck_991_ == 0)
{
v___x_984_ = v_m_979_;
v_isShared_985_ = v_isSharedCheck_991_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_buckets_982_);
lean_inc(v_size_981_);
lean_dec(v_m_979_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_991_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___f_986_; lean_object* v___x_987_; lean_object* v___x_989_; 
v___f_986_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_map_u2098___redArg___lam__0), 2, 1);
lean_closure_set(v___f_986_, 0, v_f_980_);
v___x_987_ = l_Std_DHashMap_Internal_updateAllBuckets___redArg(v_buckets_982_, v___f_986_);
lean_dec_ref(v_buckets_982_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 1, v___x_987_);
v___x_989_ = v___x_984_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_size_981_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v___x_987_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map_u2098(lean_object* v_00_u03b1_992_, lean_object* v_00_u03b2_993_, lean_object* v_00_u03b4_994_, lean_object* v_m_995_, lean_object* v_f_996_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = l_Std_DHashMap_Internal_Raw_u2080_map_u2098___redArg(v_m_995_, v_f_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_map_go___at___00Std_DHashMap_Internal_Raw_u2080_map_u2098_spec__0(lean_object* v_00_u03b1_998_, lean_object* v_00_u03b2_999_, lean_object* v_00_u03b4_1000_, lean_object* v_f_1001_, lean_object* v_acc_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_map_go___at___00Std_DHashMap_Internal_Raw_u2080_map_u2098_spec__0___redArg(v_f_1001_, v_acc_1002_, v_a_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go___at___00Std_DHashMap_Internal_Raw_u2080_filter_u2098_spec__0___redArg(lean_object* v_f_1005_, lean_object* v_acc_1006_, lean_object* v_a_1007_){
_start:
{
if (lean_obj_tag(v_a_1007_) == 0)
{
lean_dec_ref(v_f_1005_);
return v_acc_1006_;
}
else
{
lean_object* v_key_1008_; lean_object* v_value_1009_; lean_object* v_tail_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1021_; 
v_key_1008_ = lean_ctor_get(v_a_1007_, 0);
v_value_1009_ = lean_ctor_get(v_a_1007_, 1);
v_tail_1010_ = lean_ctor_get(v_a_1007_, 2);
v_isSharedCheck_1021_ = !lean_is_exclusive(v_a_1007_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1012_ = v_a_1007_;
v_isShared_1013_ = v_isSharedCheck_1021_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_tail_1010_);
lean_inc(v_value_1009_);
lean_inc(v_key_1008_);
lean_dec(v_a_1007_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1021_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1014_; uint8_t v___x_1015_; 
lean_inc_ref(v_f_1005_);
lean_inc(v_value_1009_);
lean_inc(v_key_1008_);
v___x_1014_ = lean_apply_2(v_f_1005_, v_key_1008_, v_value_1009_);
v___x_1015_ = lean_unbox(v___x_1014_);
if (v___x_1015_ == 0)
{
lean_del_object(v___x_1012_);
lean_dec(v_value_1009_);
lean_dec(v_key_1008_);
v_a_1007_ = v_tail_1010_;
goto _start;
}
else
{
lean_object* v___x_1018_; 
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 2, v_acc_1006_);
v___x_1018_ = v___x_1012_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_key_1008_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v_value_1009_);
lean_ctor_set(v_reuseFailAlloc_1020_, 2, v_acc_1006_);
v___x_1018_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
v_acc_1006_ = v___x_1018_;
v_a_1007_ = v_tail_1010_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___redArg___lam__0(lean_object* v_f_1022_, lean_object* v_l_1023_){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = lean_box(0);
v___x_1025_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go___at___00Std_DHashMap_Internal_Raw_u2080_filter_u2098_spec__0___redArg(v_f_1022_, v___x_1024_, v_l_1023_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___redArg(lean_object* v_m_1026_, lean_object* v_f_1027_){
_start:
{
lean_object* v_buckets_1028_; lean_object* v___f_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_buckets_1028_ = lean_ctor_get(v_m_1026_, 1);
v___f_1029_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1029_, 0, v_f_1027_);
v___x_1030_ = l_Std_DHashMap_Internal_updateAllBuckets___redArg(v_buckets_1028_, v___f_1029_);
v___x_1031_ = l_Std_DHashMap_Internal_withComputedSize___redArg(v___x_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___redArg___boxed(lean_object* v_m_1032_, lean_object* v_f_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___redArg(v_m_1032_, v_f_1033_);
lean_dec_ref(v_m_1032_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter_u2098(lean_object* v_00_u03b1_1035_, lean_object* v_00_u03b2_1036_, lean_object* v_m_1037_, lean_object* v_f_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___redArg(v_m_1037_, v_f_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___boxed(lean_object* v_00_u03b1_1040_, lean_object* v_00_u03b2_1041_, lean_object* v_m_1042_, lean_object* v_f_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Std_DHashMap_Internal_Raw_u2080_filter_u2098(v_00_u03b1_1040_, v_00_u03b2_1041_, v_m_1042_, v_f_1043_);
lean_dec_ref(v_m_1042_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go___at___00Std_DHashMap_Internal_Raw_u2080_filter_u2098_spec__0(lean_object* v_00_u03b1_1045_, lean_object* v_00_u03b2_1046_, lean_object* v_f_1047_, lean_object* v_acc_1048_, lean_object* v_a_1049_){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go___at___00Std_DHashMap_Internal_Raw_u2080_filter_u2098_spec__0___redArg(v_f_1047_, v_acc_1048_, v_a_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertList_u2098___redArg(lean_object* v_inst_1051_, lean_object* v_inst_1052_, lean_object* v_m_1053_, lean_object* v_l_1054_){
_start:
{
if (lean_obj_tag(v_l_1054_) == 0)
{
lean_dec_ref(v_inst_1052_);
lean_dec_ref(v_inst_1051_);
return v_m_1053_;
}
else
{
lean_object* v_head_1055_; lean_object* v_tail_1056_; lean_object* v_fst_1057_; lean_object* v_snd_1058_; lean_object* v___x_1059_; 
v_head_1055_ = lean_ctor_get(v_l_1054_, 0);
lean_inc(v_head_1055_);
v_tail_1056_ = lean_ctor_get(v_l_1054_, 1);
lean_inc(v_tail_1056_);
lean_dec_ref_known(v_l_1054_, 2);
v_fst_1057_ = lean_ctor_get(v_head_1055_, 0);
lean_inc(v_fst_1057_);
v_snd_1058_ = lean_ctor_get(v_head_1055_, 1);
lean_inc(v_snd_1058_);
lean_dec(v_head_1055_);
lean_inc_ref(v_inst_1052_);
lean_inc_ref(v_inst_1051_);
v___x_1059_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1051_, v_inst_1052_, v_m_1053_, v_fst_1057_, v_snd_1058_);
v_m_1053_ = v___x_1059_;
v_l_1054_ = v_tail_1056_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertList_u2098(lean_object* v_00_u03b1_1061_, lean_object* v_00_u03b2_1062_, lean_object* v_inst_1063_, lean_object* v_inst_1064_, lean_object* v_m_1065_, lean_object* v_l_1066_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Std_DHashMap_Internal_Raw_u2080_insertList_u2098___redArg(v_inst_1063_, v_inst_1064_, v_m_1065_, v_l_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseList_u2098___redArg(lean_object* v_inst_1068_, lean_object* v_inst_1069_, lean_object* v_m_1070_, lean_object* v_l_1071_){
_start:
{
if (lean_obj_tag(v_l_1071_) == 0)
{
lean_dec_ref(v_inst_1069_);
lean_dec_ref(v_inst_1068_);
return v_m_1070_;
}
else
{
lean_object* v_head_1072_; lean_object* v_tail_1073_; lean_object* v___x_1074_; 
v_head_1072_ = lean_ctor_get(v_l_1071_, 0);
lean_inc(v_head_1072_);
v_tail_1073_ = lean_ctor_get(v_l_1071_, 1);
lean_inc(v_tail_1073_);
lean_dec_ref_known(v_l_1071_, 2);
lean_inc_ref(v_inst_1069_);
lean_inc_ref(v_inst_1068_);
v___x_1074_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v_inst_1068_, v_inst_1069_, v_m_1070_, v_head_1072_);
v_m_1070_ = v___x_1074_;
v_l_1071_ = v_tail_1073_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseList_u2098(lean_object* v_00_u03b1_1076_, lean_object* v_00_u03b2_1077_, lean_object* v_inst_1078_, lean_object* v_inst_1079_, lean_object* v_m_1080_, lean_object* v_l_1081_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Std_DHashMap_Internal_Raw_u2080_eraseList_u2098___redArg(v_inst_1078_, v_inst_1079_, v_m_1080_, v_l_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___lam__0(lean_object* v_inst_1083_, lean_object* v_inst_1084_, lean_object* v_m_u2082_1085_, uint8_t v___x_1086_, lean_object* v_k_1087_, lean_object* v_x_1088_){
_start:
{
uint8_t v___x_1089_; 
v___x_1089_ = l_Std_DHashMap_Internal_Raw_u2080_contains_u2098___redArg(v_inst_1083_, v_inst_1084_, v_m_u2082_1085_, v_k_1087_);
if (v___x_1089_ == 0)
{
return v___x_1086_;
}
else
{
uint8_t v___x_1090_; 
v___x_1090_ = 0;
return v___x_1090_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___lam__0___boxed(lean_object* v_inst_1091_, lean_object* v_inst_1092_, lean_object* v_m_u2082_1093_, lean_object* v___x_1094_, lean_object* v_k_1095_, lean_object* v_x_1096_){
_start:
{
uint8_t v___x_55__boxed_1097_; uint8_t v_res_1098_; lean_object* v_r_1099_; 
v___x_55__boxed_1097_ = lean_unbox(v___x_1094_);
v_res_1098_ = l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___lam__0(v_inst_1091_, v_inst_1092_, v_m_u2082_1093_, v___x_55__boxed_1097_, v_k_1095_, v_x_1096_);
lean_dec(v_x_1096_);
lean_dec_ref(v_m_u2082_1093_);
v_r_1099_ = lean_box(v_res_1098_);
return v_r_1099_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg(lean_object* v_inst_1123_, lean_object* v_inst_1124_, lean_object* v_m_u2081_1125_, lean_object* v_m_u2082_1126_){
_start:
{
lean_object* v_size_1127_; lean_object* v_size_1128_; lean_object* v_buckets_1129_; uint8_t v___x_1130_; 
v_size_1127_ = lean_ctor_get(v_m_u2081_1125_, 0);
v_size_1128_ = lean_ctor_get(v_m_u2082_1126_, 0);
v_buckets_1129_ = lean_ctor_get(v_m_u2082_1126_, 1);
v___x_1130_ = lean_nat_dec_le(v_size_1127_, v_size_1128_);
if (v___x_1130_ == 0)
{
lean_object* v___f_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
lean_inc_ref(v_buckets_1129_);
lean_dec_ref(v_m_u2082_1126_);
v___f_1131_ = ((lean_object*)(l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___closed__11));
v___x_1132_ = l_Std_DHashMap_Internal_toListModel___redArg(v_buckets_1129_);
v___x_1133_ = l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries___redArg(v___f_1131_, v_inst_1123_, v_inst_1124_, v_m_u2081_1125_, v___x_1132_);
return v___x_1133_;
}
else
{
lean_object* v___x_1134_; lean_object* v___f_1135_; lean_object* v___x_1136_; 
v___x_1134_ = lean_box(v___x_1130_);
v___f_1135_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_1135_, 0, v_inst_1123_);
lean_closure_set(v___f_1135_, 1, v_inst_1124_);
lean_closure_set(v___f_1135_, 2, v_m_u2082_1126_);
lean_closure_set(v___f_1135_, 3, v___x_1134_);
v___x_1136_ = l_Std_DHashMap_Internal_Raw_u2080_filter_u2098___redArg(v_m_u2081_1125_, v___f_1135_);
lean_dec_ref(v_m_u2081_1125_);
return v___x_1136_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff_u2098(lean_object* v_00_u03b1_1137_, lean_object* v_00_u03b2_1138_, lean_object* v_inst_1139_, lean_object* v_inst_1140_, lean_object* v_m_u2081_1141_, lean_object* v_m_u2082_1142_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Std_DHashMap_Internal_Raw_u2080_diff_u2098___redArg(v_inst_1139_, v_inst_1140_, v_m_u2081_1141_, v_m_u2082_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertListIfNew_u2098___redArg(lean_object* v_inst_1144_, lean_object* v_inst_1145_, lean_object* v_m_1146_, lean_object* v_l_1147_){
_start:
{
if (lean_obj_tag(v_l_1147_) == 0)
{
lean_dec_ref(v_inst_1145_);
lean_dec_ref(v_inst_1144_);
return v_m_1146_;
}
else
{
lean_object* v_head_1148_; lean_object* v_tail_1149_; lean_object* v_fst_1150_; lean_object* v_snd_1151_; lean_object* v___x_1152_; 
v_head_1148_ = lean_ctor_get(v_l_1147_, 0);
lean_inc(v_head_1148_);
v_tail_1149_ = lean_ctor_get(v_l_1147_, 1);
lean_inc(v_tail_1149_);
lean_dec_ref_known(v_l_1147_, 2);
v_fst_1150_ = lean_ctor_get(v_head_1148_, 0);
lean_inc(v_fst_1150_);
v_snd_1151_ = lean_ctor_get(v_head_1148_, 1);
lean_inc(v_snd_1151_);
lean_dec(v_head_1148_);
lean_inc_ref(v_inst_1145_);
lean_inc_ref(v_inst_1144_);
v___x_1152_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v_inst_1144_, v_inst_1145_, v_m_1146_, v_fst_1150_, v_snd_1151_);
v_m_1146_ = v___x_1152_;
v_l_1147_ = v_tail_1149_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertListIfNew_u2098(lean_object* v_00_u03b1_1154_, lean_object* v_00_u03b2_1155_, lean_object* v_inst_1156_, lean_object* v_inst_1157_, lean_object* v_m_1158_, lean_object* v_l_1159_){
_start:
{
lean_object* v___x_1160_; 
v___x_1160_ = l_Std_DHashMap_Internal_Raw_u2080_insertListIfNew_u2098___redArg(v_inst_1156_, v_inst_1157_, v_m_1158_, v_l_1159_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union_u2098___redArg(lean_object* v_inst_1161_, lean_object* v_inst_1162_, lean_object* v_m_u2081_1163_, lean_object* v_m_u2082_1164_){
_start:
{
lean_object* v_size_1165_; lean_object* v_buckets_1166_; lean_object* v_size_1167_; lean_object* v_buckets_1168_; uint8_t v___x_1169_; 
v_size_1165_ = lean_ctor_get(v_m_u2081_1163_, 0);
v_buckets_1166_ = lean_ctor_get(v_m_u2081_1163_, 1);
v_size_1167_ = lean_ctor_get(v_m_u2082_1164_, 0);
v_buckets_1168_ = lean_ctor_get(v_m_u2082_1164_, 1);
v___x_1169_ = lean_nat_dec_le(v_size_1165_, v_size_1167_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
lean_inc_ref(v_buckets_1168_);
lean_dec_ref(v_m_u2082_1164_);
v___x_1170_ = l_Std_DHashMap_Internal_toListModel___redArg(v_buckets_1168_);
v___x_1171_ = l_Std_DHashMap_Internal_Raw_u2080_insertList_u2098___redArg(v_inst_1161_, v_inst_1162_, v_m_u2081_1163_, v___x_1170_);
return v___x_1171_;
}
else
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
lean_inc_ref(v_buckets_1166_);
lean_dec_ref(v_m_u2081_1163_);
v___x_1172_ = l_Std_DHashMap_Internal_toListModel___redArg(v_buckets_1166_);
v___x_1173_ = l_Std_DHashMap_Internal_Raw_u2080_insertListIfNew_u2098___redArg(v_inst_1161_, v_inst_1162_, v_m_u2082_1164_, v___x_1172_);
return v___x_1173_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union_u2098(lean_object* v_00_u03b1_1174_, lean_object* v_00_u03b2_1175_, lean_object* v_inst_1176_, lean_object* v_inst_1177_, lean_object* v_m_u2081_1178_, lean_object* v_m_u2082_1179_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = l_Std_DHashMap_Internal_Raw_u2080_union_u2098___redArg(v_inst_1176_, v_inst_1177_, v_m_u2081_1178_, v_m_u2082_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098___redArg(lean_object* v_inst_1181_, lean_object* v_inst_1182_, lean_object* v_m_1183_, lean_object* v_sofar_1184_, lean_object* v_k_1185_){
_start:
{
lean_object* v___x_1186_; 
lean_inc_ref(v_inst_1182_);
lean_inc_ref(v_inst_1181_);
v___x_1186_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f_u2098___redArg(v_inst_1181_, v_inst_1182_, v_m_1183_, v_k_1185_);
if (lean_obj_tag(v___x_1186_) == 0)
{
lean_dec_ref(v_inst_1182_);
lean_dec_ref(v_inst_1181_);
return v_sofar_1184_;
}
else
{
lean_object* v_val_1187_; lean_object* v_fst_1188_; lean_object* v_snd_1189_; lean_object* v___x_1190_; 
v_val_1187_ = lean_ctor_get(v___x_1186_, 0);
lean_inc(v_val_1187_);
lean_dec_ref_known(v___x_1186_, 1);
v_fst_1188_ = lean_ctor_get(v_val_1187_, 0);
lean_inc(v_fst_1188_);
v_snd_1189_ = lean_ctor_get(v_val_1187_, 1);
lean_inc(v_snd_1189_);
lean_dec(v_val_1187_);
v___x_1190_ = l_Std_DHashMap_Internal_Raw_u2080_insert_u2098___redArg(v_inst_1181_, v_inst_1182_, v_sofar_1184_, v_fst_1188_, v_snd_1189_);
return v___x_1190_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098___redArg___boxed(lean_object* v_inst_1191_, lean_object* v_inst_1192_, lean_object* v_m_1193_, lean_object* v_sofar_1194_, lean_object* v_k_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098___redArg(v_inst_1191_, v_inst_1192_, v_m_1193_, v_sofar_1194_, v_k_1195_);
lean_dec_ref(v_m_1193_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098(lean_object* v_00_u03b1_1197_, lean_object* v_00_u03b2_1198_, lean_object* v_inst_1199_, lean_object* v_inst_1200_, lean_object* v_m_1201_, lean_object* v_sofar_1202_, lean_object* v_k_1203_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098___redArg(v_inst_1199_, v_inst_1200_, v_m_1201_, v_sofar_1202_, v_k_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098___boxed(lean_object* v_00_u03b1_1205_, lean_object* v_00_u03b2_1206_, lean_object* v_inst_1207_, lean_object* v_inst_1208_, lean_object* v_m_1209_, lean_object* v_sofar_1210_, lean_object* v_k_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn_u2098(v_00_u03b1_1205_, v_00_u03b2_1206_, v_inst_1207_, v_inst_1208_, v_m_1209_, v_sofar_1210_, v_k_1211_);
lean_dec_ref(v_m_1209_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098___redArg(lean_object* v_inst_1213_, lean_object* v_inst_1214_, lean_object* v_m_1215_, lean_object* v_a_1216_){
_start:
{
lean_object* v_buckets_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v_buckets_1217_ = lean_ctor_get(v_m_1215_, 1);
lean_inc(v_a_1216_);
v___x_1218_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_1214_, v_buckets_1217_, v_a_1216_);
v___x_1219_ = l_Std_DHashMap_Internal_AssocList_get_x3f___redArg(v_inst_1213_, v_a_1216_, v___x_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098___redArg___boxed(lean_object* v_inst_1220_, lean_object* v_inst_1221_, lean_object* v_m_1222_, lean_object* v_a_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098___redArg(v_inst_1220_, v_inst_1221_, v_m_1222_, v_a_1223_);
lean_dec_ref(v_m_1222_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098(lean_object* v_00_u03b1_1225_, lean_object* v_00_u03b2_1226_, lean_object* v_inst_1227_, lean_object* v_inst_1228_, lean_object* v_m_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098___redArg(v_inst_1227_, v_inst_1228_, v_m_1229_, v_a_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098___boxed(lean_object* v_00_u03b1_1232_, lean_object* v_00_u03b2_1233_, lean_object* v_inst_1234_, lean_object* v_inst_1235_, lean_object* v_m_1236_, lean_object* v_a_1237_){
_start:
{
lean_object* v_res_1238_; 
v_res_1238_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098(v_00_u03b1_1232_, v_00_u03b2_1233_, v_inst_1234_, v_inst_1235_, v_m_1236_, v_a_1237_);
lean_dec_ref(v_m_1236_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098___redArg(lean_object* v_inst_1239_, lean_object* v_inst_1240_, lean_object* v_m_1241_, lean_object* v_a_1242_){
_start:
{
lean_object* v_buckets_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v_buckets_1243_ = lean_ctor_get(v_m_1241_, 1);
lean_inc(v_a_1242_);
v___x_1244_ = l_Std_DHashMap_Internal_bucket___redArg(v_inst_1240_, v_buckets_1243_, v_a_1242_);
v___x_1245_ = l_Std_DHashMap_Internal_AssocList_get___redArg(v_inst_1239_, v_a_1242_, v___x_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098___redArg___boxed(lean_object* v_inst_1246_, lean_object* v_inst_1247_, lean_object* v_m_1248_, lean_object* v_a_1249_){
_start:
{
lean_object* v_res_1250_; 
v_res_1250_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098___redArg(v_inst_1246_, v_inst_1247_, v_m_1248_, v_a_1249_);
lean_dec_ref(v_m_1248_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098(lean_object* v_00_u03b1_1251_, lean_object* v_00_u03b2_1252_, lean_object* v_inst_1253_, lean_object* v_inst_1254_, lean_object* v_m_1255_, lean_object* v_a_1256_, lean_object* v_h_1257_){
_start:
{
lean_object* v___x_1258_; 
v___x_1258_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098___redArg(v_inst_1253_, v_inst_1254_, v_m_1255_, v_a_1256_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098___boxed(lean_object* v_00_u03b1_1259_, lean_object* v_00_u03b2_1260_, lean_object* v_inst_1261_, lean_object* v_inst_1262_, lean_object* v_m_1263_, lean_object* v_a_1264_, lean_object* v_h_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_u2098(v_00_u03b1_1259_, v_00_u03b2_1260_, v_inst_1261_, v_inst_1262_, v_m_1263_, v_a_1264_, v_h_1265_);
lean_dec_ref(v_m_1263_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098___redArg(lean_object* v_inst_1267_, lean_object* v_inst_1268_, lean_object* v_m_1269_, lean_object* v_a_1270_, lean_object* v_fallback_1271_){
_start:
{
lean_object* v___x_1272_; 
v___x_1272_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098___redArg(v_inst_1267_, v_inst_1268_, v_m_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_inc(v_fallback_1271_);
return v_fallback_1271_;
}
else
{
lean_object* v_val_1273_; 
v_val_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_val_1273_);
lean_dec_ref_known(v___x_1272_, 1);
return v_val_1273_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098___redArg___boxed(lean_object* v_inst_1274_, lean_object* v_inst_1275_, lean_object* v_m_1276_, lean_object* v_a_1277_, lean_object* v_fallback_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098___redArg(v_inst_1274_, v_inst_1275_, v_m_1276_, v_a_1277_, v_fallback_1278_);
lean_dec(v_fallback_1278_);
lean_dec_ref(v_m_1276_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098(lean_object* v_00_u03b1_1280_, lean_object* v_00_u03b2_1281_, lean_object* v_inst_1282_, lean_object* v_inst_1283_, lean_object* v_m_1284_, lean_object* v_a_1285_, lean_object* v_fallback_1286_){
_start:
{
lean_object* v___x_1287_; 
v___x_1287_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098___redArg(v_inst_1282_, v_inst_1283_, v_m_1284_, v_a_1285_, v_fallback_1286_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098___boxed(lean_object* v_00_u03b1_1288_, lean_object* v_00_u03b2_1289_, lean_object* v_inst_1290_, lean_object* v_inst_1291_, lean_object* v_m_1292_, lean_object* v_a_1293_, lean_object* v_fallback_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD_u2098(v_00_u03b1_1288_, v_00_u03b2_1289_, v_inst_1290_, v_inst_1291_, v_m_1292_, v_a_1293_, v_fallback_1294_);
lean_dec(v_fallback_1294_);
lean_dec_ref(v_m_1292_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098___redArg(lean_object* v_inst_1296_, lean_object* v_inst_1297_, lean_object* v_inst_1298_, lean_object* v_m_1299_, lean_object* v_a_1300_){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f_u2098___redArg(v_inst_1296_, v_inst_1297_, v_m_1299_, v_a_1300_);
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3, &l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3_once, _init_l_Std_DHashMap_Internal_Raw_u2080_get_x21_u2098___redArg___closed__3);
v___x_1303_ = l_panic___redArg(v_inst_1298_, v___x_1302_);
return v___x_1303_;
}
else
{
lean_object* v_val_1304_; 
v_val_1304_ = lean_ctor_get(v___x_1301_, 0);
lean_inc(v_val_1304_);
lean_dec_ref_known(v___x_1301_, 1);
return v_val_1304_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098___redArg___boxed(lean_object* v_inst_1305_, lean_object* v_inst_1306_, lean_object* v_inst_1307_, lean_object* v_m_1308_, lean_object* v_a_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098___redArg(v_inst_1305_, v_inst_1306_, v_inst_1307_, v_m_1308_, v_a_1309_);
lean_dec_ref(v_m_1308_);
lean_dec(v_inst_1307_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098(lean_object* v_00_u03b1_1311_, lean_object* v_00_u03b2_1312_, lean_object* v_inst_1313_, lean_object* v_inst_1314_, lean_object* v_inst_1315_, lean_object* v_m_1316_, lean_object* v_a_1317_){
_start:
{
lean_object* v___x_1318_; 
v___x_1318_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098___redArg(v_inst_1313_, v_inst_1314_, v_inst_1315_, v_m_1316_, v_a_1317_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098___boxed(lean_object* v_00_u03b1_1319_, lean_object* v_00_u03b2_1320_, lean_object* v_inst_1321_, lean_object* v_inst_1322_, lean_object* v_inst_1323_, lean_object* v_m_1324_, lean_object* v_a_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21_u2098(v_00_u03b1_1319_, v_00_u03b2_1320_, v_inst_1321_, v_inst_1322_, v_inst_1323_, v_m_1324_, v_a_1325_);
lean_dec_ref(v_m_1324_);
lean_dec(v_inst_1323_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertList_u2098___redArg(lean_object* v_inst_1327_, lean_object* v_inst_1328_, lean_object* v_m_1329_, lean_object* v_l_1330_){
_start:
{
if (lean_obj_tag(v_l_1330_) == 0)
{
lean_dec_ref(v_inst_1328_);
lean_dec_ref(v_inst_1327_);
return v_m_1329_;
}
else
{
lean_object* v_head_1331_; lean_object* v_tail_1332_; lean_object* v_fst_1333_; lean_object* v_snd_1334_; lean_object* v___x_1335_; 
v_head_1331_ = lean_ctor_get(v_l_1330_, 0);
lean_inc(v_head_1331_);
v_tail_1332_ = lean_ctor_get(v_l_1330_, 1);
lean_inc(v_tail_1332_);
lean_dec_ref_known(v_l_1330_, 2);
v_fst_1333_ = lean_ctor_get(v_head_1331_, 0);
lean_inc(v_fst_1333_);
v_snd_1334_ = lean_ctor_get(v_head_1331_, 1);
lean_inc(v_snd_1334_);
lean_dec(v_head_1331_);
lean_inc_ref(v_inst_1328_);
lean_inc_ref(v_inst_1327_);
v___x_1335_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1327_, v_inst_1328_, v_m_1329_, v_fst_1333_, v_snd_1334_);
v_m_1329_ = v___x_1335_;
v_l_1330_ = v_tail_1332_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertList_u2098(lean_object* v_00_u03b1_1337_, lean_object* v_00_u03b2_1338_, lean_object* v_inst_1339_, lean_object* v_inst_1340_, lean_object* v_m_1341_, lean_object* v_l_1342_){
_start:
{
lean_object* v___x_1343_; 
v___x_1343_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertList_u2098___redArg(v_inst_1339_, v_inst_1340_, v_m_1341_, v_l_1342_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertListIfNewUnit_u2098___redArg(lean_object* v_inst_1344_, lean_object* v_inst_1345_, lean_object* v_m_1346_, lean_object* v_l_1347_){
_start:
{
if (lean_obj_tag(v_l_1347_) == 0)
{
lean_dec_ref(v_inst_1345_);
lean_dec_ref(v_inst_1344_);
return v_m_1346_;
}
else
{
lean_object* v_head_1348_; lean_object* v_tail_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v_head_1348_ = lean_ctor_get(v_l_1347_, 0);
lean_inc(v_head_1348_);
v_tail_1349_ = lean_ctor_get(v_l_1347_, 1);
lean_inc(v_tail_1349_);
lean_dec_ref_known(v_l_1347_, 2);
v___x_1350_ = lean_box(0);
lean_inc_ref(v_inst_1345_);
lean_inc_ref(v_inst_1344_);
v___x_1351_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v_inst_1344_, v_inst_1345_, v_m_1346_, v_head_1348_, v___x_1350_);
v_m_1346_ = v___x_1351_;
v_l_1347_ = v_tail_1349_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertListIfNewUnit_u2098(lean_object* v_00_u03b1_1353_, lean_object* v_inst_1354_, lean_object* v_inst_1355_, lean_object* v_m_1356_, lean_object* v_l_1357_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertListIfNewUnit_u2098___redArg(v_inst_1354_, v_inst_1355_, v_m_1356_, v_l_1357_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_expandIfNecessary_match__1_splitter___redArg(lean_object* v_m_1359_, lean_object* v_h__1_1360_){
_start:
{
lean_object* v_size_1361_; lean_object* v_buckets_1362_; lean_object* v___x_1363_; 
v_size_1361_ = lean_ctor_get(v_m_1359_, 0);
lean_inc(v_size_1361_);
v_buckets_1362_ = lean_ctor_get(v_m_1359_, 1);
lean_inc_ref(v_buckets_1362_);
lean_dec_ref(v_m_1359_);
v___x_1363_ = lean_apply_3(v_h__1_1360_, v_size_1361_, v_buckets_1362_, lean_box(0));
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_expandIfNecessary_match__1_splitter(lean_object* v_00_u03b1_1364_, lean_object* v_00_u03b2_1365_, lean_object* v_motive_1366_, lean_object* v_m_1367_, lean_object* v_h__1_1368_){
_start:
{
lean_object* v_size_1369_; lean_object* v_buckets_1370_; lean_object* v___x_1371_; 
v_size_1369_ = lean_ctor_get(v_m_1367_, 0);
lean_inc(v_size_1369_);
v_buckets_1370_ = lean_ctor_get(v_m_1367_, 1);
lean_inc_ref(v_buckets_1370_);
lean_dec_ref(v_m_1367_);
v___x_1371_ = lean_apply_3(v_h__1_1368_, v_size_1369_, v_buckets_1370_, lean_box(0));
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_match__1_splitter___redArg(lean_object* v_x_1372_, lean_object* v_h__1_1373_, lean_object* v_h__2_1374_){
_start:
{
if (lean_obj_tag(v_x_1372_) == 0)
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
lean_dec(v_h__2_1374_);
v___x_1375_ = lean_box(0);
v___x_1376_ = lean_apply_1(v_h__1_1373_, v___x_1375_);
return v___x_1376_;
}
else
{
lean_object* v_val_1377_; lean_object* v___x_1378_; 
lean_dec(v_h__1_1373_);
v_val_1377_ = lean_ctor_get(v_x_1372_, 0);
lean_inc(v_val_1377_);
lean_dec_ref_known(v_x_1372_, 1);
v___x_1378_ = lean_apply_1(v_h__2_1374_, v_val_1377_);
return v___x_1378_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_match__1_splitter(lean_object* v_00_u03b1_1379_, lean_object* v_00_u03b2_1380_, lean_object* v_a_1381_, lean_object* v_motive_1382_, lean_object* v_x_1383_, lean_object* v_h__1_1384_, lean_object* v_h__2_1385_){
_start:
{
if (lean_obj_tag(v_x_1383_) == 0)
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
lean_dec(v_h__2_1385_);
v___x_1386_ = lean_box(0);
v___x_1387_ = lean_apply_1(v_h__1_1384_, v___x_1386_);
return v___x_1387_;
}
else
{
lean_object* v_val_1388_; lean_object* v___x_1389_; 
lean_dec(v_h__1_1384_);
v_val_1388_ = lean_ctor_get(v_x_1383_, 0);
lean_inc(v_val_1388_);
lean_dec_ref_known(v_x_1383_, 1);
v___x_1389_ = lean_apply_1(v_h__2_1385_, v_val_1388_);
return v___x_1389_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_match__1_splitter___boxed(lean_object* v_00_u03b1_1390_, lean_object* v_00_u03b2_1391_, lean_object* v_a_1392_, lean_object* v_motive_1393_, lean_object* v_x_1394_, lean_object* v_h__1_1395_, lean_object* v_h__2_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_match__1_splitter(v_00_u03b1_1390_, v_00_u03b2_1391_, v_a_1392_, v_motive_1393_, v_x_1394_, v_h__1_1395_, v_h__2_1396_);
lean_dec(v_a_1392_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_u2098_match__1_splitter___redArg(lean_object* v_x_1398_, lean_object* v_h__1_1399_, lean_object* v_h__2_1400_){
_start:
{
if (lean_obj_tag(v_x_1398_) == 0)
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
lean_dec(v_h__2_1400_);
v___x_1401_ = lean_box(0);
v___x_1402_ = lean_apply_1(v_h__1_1399_, v___x_1401_);
return v___x_1402_;
}
else
{
lean_object* v_val_1403_; lean_object* v___x_1404_; 
lean_dec(v_h__1_1399_);
v_val_1403_ = lean_ctor_get(v_x_1398_, 0);
lean_inc(v_val_1403_);
lean_dec_ref_known(v_x_1398_, 1);
v___x_1404_ = lean_apply_1(v_h__2_1400_, v_val_1403_);
return v___x_1404_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_u2098_match__1_splitter(lean_object* v_00_u03b1_1405_, lean_object* v_00_u03b2_1406_, lean_object* v_a_1407_, lean_object* v_motive_1408_, lean_object* v_x_1409_, lean_object* v_h__1_1410_, lean_object* v_h__2_1411_){
_start:
{
if (lean_obj_tag(v_x_1409_) == 0)
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
lean_dec(v_h__2_1411_);
v___x_1412_ = lean_box(0);
v___x_1413_ = lean_apply_1(v_h__1_1410_, v___x_1412_);
return v___x_1413_;
}
else
{
lean_object* v_val_1414_; lean_object* v___x_1415_; 
lean_dec(v_h__1_1410_);
v_val_1414_ = lean_ctor_get(v_x_1409_, 0);
lean_inc(v_val_1414_);
lean_dec_ref_known(v_x_1409_, 1);
v___x_1415_ = lean_apply_1(v_h__2_1411_, v_val_1414_);
return v___x_1415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_u2098_match__1_splitter___boxed(lean_object* v_00_u03b1_1416_, lean_object* v_00_u03b2_1417_, lean_object* v_a_1418_, lean_object* v_motive_1419_, lean_object* v_x_1420_, lean_object* v_h__1_1421_, lean_object* v_h__2_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_alter_u2098_match__1_splitter(v_00_u03b1_1416_, v_00_u03b2_1417_, v_a_1418_, v_motive_1419_, v_x_1420_, v_h__1_1421_, v_h__2_1422_);
lean_dec(v_a_1418_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_reinsertAux_match__1_splitter___redArg(size_t v_x_1424_, lean_object* v_h__1_1425_){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1426_ = lean_box_usize(v_x_1424_);
v___x_1427_ = lean_apply_2(v_h__1_1425_, v___x_1426_, lean_box(0));
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_reinsertAux_match__1_splitter___redArg___boxed(lean_object* v_x_1428_, lean_object* v_h__1_1429_){
_start:
{
size_t v_x_14__boxed_1430_; lean_object* v_res_1431_; 
v_x_14__boxed_1430_ = lean_unbox_usize(v_x_1428_);
lean_dec(v_x_1428_);
v_res_1431_ = l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_reinsertAux_match__1_splitter___redArg(v_x_14__boxed_1430_, v_h__1_1429_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_reinsertAux_match__1_splitter(lean_object* v_00_u03b1_1432_, lean_object* v_00_u03b2_1433_, lean_object* v_data_1434_, lean_object* v_motive_1435_, size_t v_x_1436_, lean_object* v_h__1_1437_){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = lean_box_usize(v_x_1436_);
v___x_1439_ = lean_apply_2(v_h__1_1437_, v___x_1438_, lean_box(0));
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_reinsertAux_match__1_splitter___boxed(lean_object* v_00_u03b1_1440_, lean_object* v_00_u03b2_1441_, lean_object* v_data_1442_, lean_object* v_motive_1443_, lean_object* v_x_1444_, lean_object* v_h__1_1445_){
_start:
{
size_t v_x_21__boxed_1446_; lean_object* v_res_1447_; 
v_x_21__boxed_1446_ = lean_unbox_usize(v_x_1444_);
lean_dec(v_x_1444_);
v_res_1447_ = l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_reinsertAux_match__1_splitter(v_00_u03b1_1440_, v_00_u03b2_1441_, v_data_1442_, v_motive_1443_, v_x_21__boxed_1446_, v_h__1_1445_);
lean_dec_ref(v_data_1442_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__3_splitter___redArg(lean_object* v_m_1448_, lean_object* v_h__1_1449_){
_start:
{
lean_object* v_size_1450_; lean_object* v_buckets_1451_; lean_object* v___x_1452_; 
v_size_1450_ = lean_ctor_get(v_m_1448_, 0);
lean_inc(v_size_1450_);
v_buckets_1451_ = lean_ctor_get(v_m_1448_, 1);
lean_inc_ref(v_buckets_1451_);
lean_dec_ref(v_m_1448_);
v___x_1452_ = lean_apply_3(v_h__1_1449_, v_size_1450_, v_buckets_1451_, lean_box(0));
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__3_splitter(lean_object* v_00_u03b1_1453_, lean_object* v_00_u03b2_1454_, lean_object* v_motive_1455_, lean_object* v_m_1456_, lean_object* v_h__1_1457_){
_start:
{
lean_object* v_size_1458_; lean_object* v_buckets_1459_; lean_object* v___x_1460_; 
v_size_1458_ = lean_ctor_get(v_m_1456_, 0);
lean_inc(v_size_1458_);
v_buckets_1459_ = lean_ctor_get(v_m_1456_, 1);
lean_inc_ref(v_buckets_1459_);
lean_dec_ref(v_m_1456_);
v___x_1460_ = lean_apply_3(v_h__1_1457_, v_size_1458_, v_buckets_1459_, lean_box(0));
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_alter_match__1_splitter___redArg(lean_object* v_x_1461_, lean_object* v_h__1_1462_, lean_object* v_h__2_1463_){
_start:
{
if (lean_obj_tag(v_x_1461_) == 0)
{
lean_object* v___x_1464_; lean_object* v___x_1465_; 
lean_dec(v_h__2_1463_);
v___x_1464_ = lean_box(0);
v___x_1465_ = lean_apply_1(v_h__1_1462_, v___x_1464_);
return v___x_1465_;
}
else
{
lean_object* v_val_1466_; lean_object* v___x_1467_; 
lean_dec(v_h__1_1462_);
v_val_1466_ = lean_ctor_get(v_x_1461_, 0);
lean_inc(v_val_1466_);
lean_dec_ref_known(v_x_1461_, 1);
v___x_1467_ = lean_apply_1(v_h__2_1463_, v_val_1466_);
return v___x_1467_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_alter_match__1_splitter(lean_object* v_00_u03b2_1468_, lean_object* v_motive_1469_, lean_object* v_x_1470_, lean_object* v_h__1_1471_, lean_object* v_h__2_1472_){
_start:
{
if (lean_obj_tag(v_x_1470_) == 0)
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
lean_dec(v_h__2_1472_);
v___x_1473_ = lean_box(0);
v___x_1474_ = lean_apply_1(v_h__1_1471_, v___x_1473_);
return v___x_1474_;
}
else
{
lean_object* v_val_1475_; lean_object* v___x_1476_; 
lean_dec(v_h__1_1471_);
v_val_1475_ = lean_ctor_get(v_x_1470_, 0);
lean_inc(v_val_1475_);
lean_dec_ref_known(v_x_1470_, 1);
v___x_1476_ = lean_apply_1(v_h__2_1472_, v_val_1475_);
return v___x_1476_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098_match__1_splitter___redArg(lean_object* v_x_1477_, lean_object* v_h__1_1478_, lean_object* v_h__2_1479_){
_start:
{
if (lean_obj_tag(v_x_1477_) == 0)
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
lean_dec(v_h__2_1479_);
v___x_1480_ = lean_box(0);
v___x_1481_ = lean_apply_1(v_h__1_1478_, v___x_1480_);
return v___x_1481_;
}
else
{
lean_object* v_val_1482_; lean_object* v___x_1483_; 
lean_dec(v_h__1_1478_);
v_val_1482_ = lean_ctor_get(v_x_1477_, 0);
lean_inc(v_val_1482_);
lean_dec_ref_known(v_x_1477_, 1);
v___x_1483_ = lean_apply_1(v_h__2_1479_, v_val_1482_);
return v___x_1483_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_alter_u2098_match__1_splitter(lean_object* v_00_u03b2_1484_, lean_object* v_motive_1485_, lean_object* v_x_1486_, lean_object* v_h__1_1487_, lean_object* v_h__2_1488_){
_start:
{
if (lean_obj_tag(v_x_1486_) == 0)
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
lean_dec(v_h__2_1488_);
v___x_1489_ = lean_box(0);
v___x_1490_ = lean_apply_1(v_h__1_1487_, v___x_1489_);
return v___x_1490_;
}
else
{
lean_object* v_val_1491_; lean_object* v___x_1492_; 
lean_dec(v_h__1_1487_);
v_val_1491_ = lean_ctor_get(v_x_1486_, 0);
lean_inc(v_val_1491_);
lean_dec_ref_known(v_x_1486_, 1);
v___x_1492_ = lean_apply_1(v_h__2_1488_, v_val_1491_);
return v___x_1492_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__1_splitter___redArg(size_t v_x_1493_, lean_object* v_h__1_1494_){
_start:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1495_ = lean_box_usize(v_x_1493_);
v___x_1496_ = lean_apply_2(v_h__1_1494_, v___x_1495_, lean_box(0));
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__1_splitter___redArg___boxed(lean_object* v_x_1497_, lean_object* v_h__1_1498_){
_start:
{
size_t v_x_14__boxed_1499_; lean_object* v_res_1500_; 
v_x_14__boxed_1499_ = lean_unbox_usize(v_x_1497_);
lean_dec(v_x_1497_);
v_res_1500_ = l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__1_splitter___redArg(v_x_14__boxed_1499_, v_h__1_1498_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__1_splitter(lean_object* v_00_u03b1_1501_, lean_object* v_00_u03b2_1502_, lean_object* v_buckets_1503_, lean_object* v_motive_1504_, size_t v_x_1505_, lean_object* v_h__1_1506_){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = lean_box_usize(v_x_1505_);
v___x_1508_ = lean_apply_2(v_h__1_1506_, v___x_1507_, lean_box(0));
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__1_splitter___boxed(lean_object* v_00_u03b1_1509_, lean_object* v_00_u03b2_1510_, lean_object* v_buckets_1511_, lean_object* v_motive_1512_, lean_object* v_x_1513_, lean_object* v_h__1_1514_){
_start:
{
size_t v_x_21__boxed_1515_; lean_object* v_res_1516_; 
v_x_21__boxed_1515_ = lean_unbox_usize(v_x_1513_);
lean_dec(v_x_1513_);
v_res_1516_ = l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_modify_match__1_splitter(v_00_u03b1_1509_, v_00_u03b2_1510_, v_buckets_1511_, v_motive_1512_, v_x_21__boxed_1515_, v_h__1_1514_);
lean_dec_ref(v_buckets_1511_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_insertList_u2098_match__1_splitter___redArg(lean_object* v_l_1517_, lean_object* v_h__1_1518_, lean_object* v_h__2_1519_){
_start:
{
if (lean_obj_tag(v_l_1517_) == 0)
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
lean_dec(v_h__2_1519_);
v___x_1520_ = lean_box(0);
v___x_1521_ = lean_apply_1(v_h__1_1518_, v___x_1520_);
return v___x_1521_;
}
else
{
lean_object* v_head_1522_; lean_object* v_tail_1523_; lean_object* v___x_1524_; 
lean_dec(v_h__1_1518_);
v_head_1522_ = lean_ctor_get(v_l_1517_, 0);
lean_inc(v_head_1522_);
v_tail_1523_ = lean_ctor_get(v_l_1517_, 1);
lean_inc(v_tail_1523_);
lean_dec_ref_known(v_l_1517_, 2);
v___x_1524_ = lean_apply_2(v_h__2_1519_, v_head_1522_, v_tail_1523_);
return v___x_1524_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_insertList_u2098_match__1_splitter(lean_object* v_00_u03b1_1525_, lean_object* v_00_u03b2_1526_, lean_object* v_motive_1527_, lean_object* v_l_1528_, lean_object* v_h__1_1529_, lean_object* v_h__2_1530_){
_start:
{
if (lean_obj_tag(v_l_1528_) == 0)
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
lean_dec(v_h__2_1530_);
v___x_1531_ = lean_box(0);
v___x_1532_ = lean_apply_1(v_h__1_1529_, v___x_1531_);
return v___x_1532_;
}
else
{
lean_object* v_head_1533_; lean_object* v_tail_1534_; lean_object* v___x_1535_; 
lean_dec(v_h__1_1529_);
v_head_1533_ = lean_ctor_get(v_l_1528_, 0);
lean_inc(v_head_1533_);
v_tail_1534_ = lean_ctor_get(v_l_1528_, 1);
lean_inc(v_tail_1534_);
lean_dec_ref_known(v_l_1528_, 2);
v___x_1535_ = lean_apply_2(v_h__2_1530_, v_head_1533_, v_tail_1534_);
return v___x_1535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_eraseList_u2098_match__1_splitter___redArg(lean_object* v_l_1536_, lean_object* v_h__1_1537_, lean_object* v_h__2_1538_){
_start:
{
if (lean_obj_tag(v_l_1536_) == 0)
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
lean_dec(v_h__2_1538_);
v___x_1539_ = lean_box(0);
v___x_1540_ = lean_apply_1(v_h__1_1537_, v___x_1539_);
return v___x_1540_;
}
else
{
lean_object* v_head_1541_; lean_object* v_tail_1542_; lean_object* v___x_1543_; 
lean_dec(v_h__1_1537_);
v_head_1541_ = lean_ctor_get(v_l_1536_, 0);
lean_inc(v_head_1541_);
v_tail_1542_ = lean_ctor_get(v_l_1536_, 1);
lean_inc(v_tail_1542_);
lean_dec_ref_known(v_l_1536_, 2);
v___x_1543_ = lean_apply_2(v_h__2_1538_, v_head_1541_, v_tail_1542_);
return v___x_1543_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_eraseList_u2098_match__1_splitter(lean_object* v_00_u03b1_1544_, lean_object* v_motive_1545_, lean_object* v_l_1546_, lean_object* v_h__1_1547_, lean_object* v_h__2_1548_){
_start:
{
if (lean_obj_tag(v_l_1546_) == 0)
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
lean_dec(v_h__2_1548_);
v___x_1549_ = lean_box(0);
v___x_1550_ = lean_apply_1(v_h__1_1547_, v___x_1549_);
return v___x_1550_;
}
else
{
lean_object* v_head_1551_; lean_object* v_tail_1552_; lean_object* v___x_1553_; 
lean_dec(v_h__1_1547_);
v_head_1551_ = lean_ctor_get(v_l_1546_, 0);
lean_inc(v_head_1551_);
v_tail_1552_ = lean_ctor_get(v_l_1546_, 1);
lean_inc(v_tail_1552_);
lean_dec_ref_known(v_l_1546_, 2);
v___x_1553_ = lean_apply_2(v_h__2_1548_, v_head_1551_, v_tail_1552_);
return v___x_1553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_insertList_u2098_match__1_splitter___redArg(lean_object* v_l_1554_, lean_object* v_h__1_1555_, lean_object* v_h__2_1556_){
_start:
{
if (lean_obj_tag(v_l_1554_) == 0)
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_dec(v_h__2_1556_);
v___x_1557_ = lean_box(0);
v___x_1558_ = lean_apply_1(v_h__1_1555_, v___x_1557_);
return v___x_1558_;
}
else
{
lean_object* v_head_1559_; lean_object* v_tail_1560_; lean_object* v___x_1561_; 
lean_dec(v_h__1_1555_);
v_head_1559_ = lean_ctor_get(v_l_1554_, 0);
lean_inc(v_head_1559_);
v_tail_1560_ = lean_ctor_get(v_l_1554_, 1);
lean_inc(v_tail_1560_);
lean_dec_ref_known(v_l_1554_, 2);
v___x_1561_ = lean_apply_2(v_h__2_1556_, v_head_1559_, v_tail_1560_);
return v___x_1561_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Model_0__Std_DHashMap_Internal_Raw_u2080_Const_insertList_u2098_match__1_splitter(lean_object* v_00_u03b1_1562_, lean_object* v_00_u03b2_1563_, lean_object* v_motive_1564_, lean_object* v_l_1565_, lean_object* v_h__1_1566_, lean_object* v_h__2_1567_){
_start:
{
if (lean_obj_tag(v_l_1565_) == 0)
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
lean_dec(v_h__2_1567_);
v___x_1568_ = lean_box(0);
v___x_1569_ = lean_apply_1(v_h__1_1566_, v___x_1568_);
return v___x_1569_;
}
else
{
lean_object* v_head_1570_; lean_object* v_tail_1571_; lean_object* v___x_1572_; 
lean_dec(v_h__1_1566_);
v_head_1570_ = lean_ctor_get(v_l_1565_, 0);
lean_inc(v_head_1570_);
v_tail_1571_ = lean_ctor_get(v_l_1565_, 1);
lean_inc(v_tail_1571_);
lean_dec_ref_known(v_l_1565_, 2);
v___x_1572_ = lean_apply_2(v_h__2_1567_, v_head_1570_, v_tail_1571_);
return v___x_1572_;
}
}
}
lean_object* runtime_initialize_Init_Data_Array_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_DHashMap_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_DHashMap_Internal_Defs(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_DHashMap_Internal_HashesTo(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_DHashMap_Internal_AssocList_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Bootstrap(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Data_DHashMap_Internal_Model(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_DHashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_DHashMap_Internal_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_DHashMap_Internal_HashesTo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_DHashMap_Internal_AssocList_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Data_DHashMap_Internal_Model(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_TakeDrop(uint8_t builtin);
lean_object* initialize_Std_Data_DHashMap_Basic(uint8_t builtin);
lean_object* initialize_Std_Data_DHashMap_Internal_Defs(uint8_t builtin);
lean_object* initialize_Std_Data_DHashMap_Internal_HashesTo(uint8_t builtin);
lean_object* initialize_Std_Data_DHashMap_Internal_AssocList_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Bootstrap(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Data_DHashMap_Internal_Model(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_DHashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_DHashMap_Internal_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_DHashMap_Internal_HashesTo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_DHashMap_Internal_AssocList_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_DHashMap_Internal_Model(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Data_DHashMap_Internal_Model(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Data_DHashMap_Internal_Model(builtin);
}
#ifdef __cplusplus
}
#endif

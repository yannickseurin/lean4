// Lean compiler output
// Module: Std.Data.DHashMap.Internal.Defs
// Imports: public import Init.Data.Array.Lemmas public import Std.Data.DHashMap.RawDef public import Std.Data.Internal.List.Defs public import Std.Data.DHashMap.Internal.Index public import Init.Data.Nat.Power2.Basic import Init.Data.Nat.Power2.Lemmas import Init.Data.List.Impl import Init.Omega
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
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_length___redArg(lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getD___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getEntry_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_replace___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getCast_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getCastD___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getKeyD___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filterMap_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getEntry_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getKey_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getCast_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getKey___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Raw_instForInSigmaOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_erase___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getCast___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_toList___redArg(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getEntry___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getEntryD___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_getKey_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_map_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_numBucketsForCapacity(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_numBucketsForCapacity___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_toListModel___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_toListModel___redArg___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_toListModel___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_toListModel___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_toListModel(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_computeSize___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_computeSize___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_DHashMap_Internal_computeSize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__0_value;
static const lean_closure_object l_Std_DHashMap_Internal_computeSize___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__1_value;
static const lean_closure_object l_Std_DHashMap_Internal_computeSize___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__2_value;
static const lean_closure_object l_Std_DHashMap_Internal_computeSize___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__3 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__3_value;
static const lean_closure_object l_Std_DHashMap_Internal_computeSize___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__4 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__4_value;
static const lean_closure_object l_Std_DHashMap_Internal_computeSize___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__5 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__5_value;
static const lean_closure_object l_Std_DHashMap_Internal_computeSize___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__6 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__6_value;
static const lean_ctor_object l_Std_DHashMap_Internal_computeSize___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__0_value),((lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__1_value)}};
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__7 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__7_value;
static const lean_ctor_object l_Std_DHashMap_Internal_computeSize___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__7_value),((lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__2_value),((lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__3_value),((lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__4_value),((lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__5_value)}};
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__8 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__8_value;
static const lean_ctor_object l_Std_DHashMap_Internal_computeSize___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__8_value),((lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__6_value)}};
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__9 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__9_value;
static const lean_closure_object l_Std_DHashMap_Internal_computeSize___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_DHashMap_Internal_computeSize___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_DHashMap_Internal_computeSize___redArg___closed__10 = (const lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_computeSize___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_computeSize(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_emptyWithCapacity___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_emptyWithCapacity___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_emptyWithCapacity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_emptyWithCapacity___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_reinsertAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_reinsertAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expandIfNecessary___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expandIfNecessary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expandIfNecessary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_modify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_alter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_containsThenInsert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_containsThenInsert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_containsThenInsertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_containsThenInsertIfNew(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getThenInsertIfNew_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getThenInsertIfNew_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertManyIfNew___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertManyIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertManyIfNew(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__0;
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_DHashMap_Internal_Raw_u2080_union___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_DHashMap_Raw_instForInSigmaOfMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_DHashMap_Internal_computeSize___redArg___closed__9_value)} };
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_union___redArg___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_union___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_inter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_inter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_inter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_inter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___closed__0_value;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_beq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_beq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_diff___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_Const_beq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_beq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getThenInsertIfNew_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getThenInsertIfNew_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_numBucketsForCapacity(lean_object* v_capacity_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_2_ = lean_unsigned_to_nat(4u);
v___x_3_ = lean_nat_mul(v_capacity_1_, v___x_2_);
v___x_4_ = lean_unsigned_to_nat(3u);
v___x_5_ = lean_nat_div(v___x_3_, v___x_4_);
lean_dec(v___x_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_numBucketsForCapacity___boxed(lean_object* v_capacity_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_numBucketsForCapacity(v_capacity_6_);
lean_dec(v_capacity_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0___redArg(lean_object* v_a_8_, lean_object* v_a_9_){
_start:
{
if (lean_obj_tag(v_a_8_) == 0)
{
lean_object* v___x_10_; 
v___x_10_ = lean_array_to_list(v_a_9_);
return v___x_10_;
}
else
{
lean_object* v_head_11_; lean_object* v_tail_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v_head_11_ = lean_ctor_get(v_a_8_, 0);
v_tail_12_ = lean_ctor_get(v_a_8_, 1);
v___x_13_ = l_Std_DHashMap_Internal_AssocList_toList___redArg(v_head_11_);
v___x_14_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_9_, v___x_13_);
v_a_8_ = v_tail_12_;
v_a_9_ = v___x_14_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0___redArg___boxed(lean_object* v_a_16_, lean_object* v_a_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0___redArg(v_a_16_, v_a_17_);
lean_dec(v_a_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_toListModel___redArg(lean_object* v_buckets_21_){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = lean_array_to_list(v_buckets_21_);
v___x_23_ = ((lean_object*)(l_Std_DHashMap_Internal_toListModel___redArg___closed__0));
v___x_24_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0___redArg(v___x_22_, v___x_23_);
lean_dec(v___x_22_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_toListModel(lean_object* v_00_u03b1_25_, lean_object* v_00_u03b2_26_, lean_object* v_buckets_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Std_DHashMap_Internal_toListModel___redArg(v_buckets_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0(lean_object* v_00_u03b1_29_, lean_object* v_00_u03b2_30_, lean_object* v_a_31_, lean_object* v_a_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0___redArg(v_a_31_, v_a_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0___boxed(lean_object* v_00_u03b1_34_, lean_object* v_00_u03b2_35_, lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Std_DHashMap_Internal_toListModel_spec__0(v_00_u03b1_34_, v_00_u03b2_35_, v_a_36_, v_a_37_);
lean_dec(v_a_36_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_computeSize___redArg___lam__0(lean_object* v_x1_39_, lean_object* v_x2_40_){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = l_Std_DHashMap_Internal_AssocList_length___redArg(v_x2_40_);
v___x_42_ = lean_nat_add(v_x1_39_, v___x_41_);
lean_dec(v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_computeSize___redArg___lam__0___boxed(lean_object* v_x1_43_, lean_object* v_x2_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Std_DHashMap_Internal_computeSize___redArg___lam__0(v_x1_43_, v_x2_44_);
lean_dec(v_x2_44_);
lean_dec(v_x1_43_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_computeSize___redArg(lean_object* v_buckets_66_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; uint8_t v___x_70_; 
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_array_get_size(v_buckets_66_);
v___x_69_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v___x_70_ = lean_nat_dec_lt(v___x_67_, v___x_68_);
if (v___x_70_ == 0)
{
lean_dec_ref(v_buckets_66_);
return v___x_67_;
}
else
{
lean_object* v___f_71_; uint8_t v___x_72_; 
v___f_71_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__10));
v___x_72_ = lean_nat_dec_le(v___x_68_, v___x_68_);
if (v___x_72_ == 0)
{
if (v___x_70_ == 0)
{
lean_dec_ref(v_buckets_66_);
return v___x_67_;
}
else
{
size_t v___x_73_; size_t v___x_74_; lean_object* v___x_75_; 
v___x_73_ = ((size_t)0ULL);
v___x_74_ = lean_usize_of_nat(v___x_68_);
v___x_75_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_69_, v___f_71_, v_buckets_66_, v___x_73_, v___x_74_, v___x_67_);
return v___x_75_;
}
}
else
{
size_t v___x_76_; size_t v___x_77_; lean_object* v___x_78_; 
v___x_76_ = ((size_t)0ULL);
v___x_77_ = lean_usize_of_nat(v___x_68_);
v___x_78_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_69_, v___f_71_, v_buckets_66_, v___x_76_, v___x_77_, v___x_67_);
return v___x_78_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_computeSize(lean_object* v_00_u03b1_79_, lean_object* v_00_u03b2_80_, lean_object* v_buckets_81_){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_82_ = lean_unsigned_to_nat(0u);
v___x_83_ = lean_array_get_size(v_buckets_81_);
v___x_84_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v___x_85_ = lean_nat_dec_lt(v___x_82_, v___x_83_);
if (v___x_85_ == 0)
{
lean_dec_ref(v_buckets_81_);
return v___x_82_;
}
else
{
lean_object* v___f_86_; uint8_t v___x_87_; 
v___f_86_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__10));
v___x_87_ = lean_nat_dec_le(v___x_83_, v___x_83_);
if (v___x_87_ == 0)
{
if (v___x_85_ == 0)
{
lean_dec_ref(v_buckets_81_);
return v___x_82_;
}
else
{
size_t v___x_88_; size_t v___x_89_; lean_object* v___x_90_; 
v___x_88_ = ((size_t)0ULL);
v___x_89_ = lean_usize_of_nat(v___x_83_);
v___x_90_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_84_, v___f_86_, v_buckets_81_, v___x_88_, v___x_89_, v___x_82_);
return v___x_90_;
}
}
else
{
size_t v___x_91_; size_t v___x_92_; lean_object* v___x_93_; 
v___x_91_ = ((size_t)0ULL);
v___x_92_ = lean_usize_of_nat(v___x_83_);
v___x_93_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_84_, v___f_86_, v_buckets_81_, v___x_91_, v___x_92_, v___x_82_);
return v___x_93_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_emptyWithCapacity___redArg(lean_object* v_capacity_94_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_95_ = lean_unsigned_to_nat(0u);
v___x_96_ = lean_unsigned_to_nat(4u);
v___x_97_ = lean_nat_mul(v_capacity_94_, v___x_96_);
v___x_98_ = lean_unsigned_to_nat(3u);
v___x_99_ = lean_nat_div(v___x_97_, v___x_98_);
lean_dec(v___x_97_);
v___x_100_ = l_Nat_nextPowerOfTwo(v___x_99_);
lean_dec(v___x_99_);
v___x_101_ = lean_box(0);
v___x_102_ = lean_mk_array(v___x_100_, v___x_101_);
v___x_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_95_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_emptyWithCapacity___redArg___boxed(lean_object* v_capacity_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Std_DHashMap_Internal_Raw_u2080_emptyWithCapacity___redArg(v_capacity_104_);
lean_dec(v_capacity_104_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_emptyWithCapacity(lean_object* v_00_u03b1_106_, lean_object* v_00_u03b2_107_, lean_object* v_capacity_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_109_ = lean_unsigned_to_nat(0u);
v___x_110_ = lean_unsigned_to_nat(4u);
v___x_111_ = lean_nat_mul(v_capacity_108_, v___x_110_);
v___x_112_ = lean_unsigned_to_nat(3u);
v___x_113_ = lean_nat_div(v___x_111_, v___x_112_);
lean_dec(v___x_111_);
v___x_114_ = l_Nat_nextPowerOfTwo(v___x_113_);
lean_dec(v___x_113_);
v___x_115_ = lean_box(0);
v___x_116_ = lean_mk_array(v___x_114_, v___x_115_);
v___x_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_109_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_emptyWithCapacity___boxed(lean_object* v_00_u03b1_118_, lean_object* v_00_u03b2_119_, lean_object* v_capacity_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Std_DHashMap_Internal_Raw_u2080_emptyWithCapacity(v_00_u03b1_118_, v_00_u03b2_119_, v_capacity_120_);
lean_dec(v_capacity_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_reinsertAux___redArg(lean_object* v_hash_122_, lean_object* v_data_123_, lean_object* v_a_124_, lean_object* v_b_125_){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; uint64_t v___x_128_; uint64_t v___x_129_; uint64_t v___x_130_; uint64_t v___x_131_; uint64_t v_fold_132_; uint64_t v___x_133_; uint64_t v___x_134_; uint64_t v___x_135_; size_t v___x_136_; size_t v___x_137_; size_t v___x_138_; size_t v___x_139_; size_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_126_ = lean_array_get_size(v_data_123_);
lean_inc(v_a_124_);
v___x_127_ = lean_apply_1(v_hash_122_, v_a_124_);
v___x_128_ = 32ULL;
v___x_129_ = lean_unbox_uint64(v___x_127_);
v___x_130_ = lean_uint64_shift_right(v___x_129_, v___x_128_);
v___x_131_ = lean_unbox_uint64(v___x_127_);
lean_dec_ref(v___x_127_);
v_fold_132_ = lean_uint64_xor(v___x_131_, v___x_130_);
v___x_133_ = 16ULL;
v___x_134_ = lean_uint64_shift_right(v_fold_132_, v___x_133_);
v___x_135_ = lean_uint64_xor(v_fold_132_, v___x_134_);
v___x_136_ = lean_uint64_to_usize(v___x_135_);
v___x_137_ = lean_usize_of_nat(v___x_126_);
v___x_138_ = ((size_t)1ULL);
v___x_139_ = lean_usize_sub(v___x_137_, v___x_138_);
v___x_140_ = lean_usize_land(v___x_136_, v___x_139_);
v___x_141_ = lean_array_uget_borrowed(v_data_123_, v___x_140_);
lean_inc(v___x_141_);
v___x_142_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_142_, 0, v_a_124_);
lean_ctor_set(v___x_142_, 1, v_b_125_);
lean_ctor_set(v___x_142_, 2, v___x_141_);
v___x_143_ = lean_array_uset(v_data_123_, v___x_140_, v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_reinsertAux(lean_object* v_00_u03b1_144_, lean_object* v_00_u03b2_145_, lean_object* v_hash_146_, lean_object* v_data_147_, lean_object* v_a_148_, lean_object* v_b_149_){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; uint64_t v___x_152_; uint64_t v___x_153_; uint64_t v___x_154_; uint64_t v___x_155_; uint64_t v_fold_156_; uint64_t v___x_157_; uint64_t v___x_158_; uint64_t v___x_159_; size_t v___x_160_; size_t v___x_161_; size_t v___x_162_; size_t v___x_163_; size_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_150_ = lean_array_get_size(v_data_147_);
lean_inc(v_a_148_);
v___x_151_ = lean_apply_1(v_hash_146_, v_a_148_);
v___x_152_ = 32ULL;
v___x_153_ = lean_unbox_uint64(v___x_151_);
v___x_154_ = lean_uint64_shift_right(v___x_153_, v___x_152_);
v___x_155_ = lean_unbox_uint64(v___x_151_);
lean_dec_ref(v___x_151_);
v_fold_156_ = lean_uint64_xor(v___x_155_, v___x_154_);
v___x_157_ = 16ULL;
v___x_158_ = lean_uint64_shift_right(v_fold_156_, v___x_157_);
v___x_159_ = lean_uint64_xor(v_fold_156_, v___x_158_);
v___x_160_ = lean_uint64_to_usize(v___x_159_);
v___x_161_ = lean_usize_of_nat(v___x_150_);
v___x_162_ = ((size_t)1ULL);
v___x_163_ = lean_usize_sub(v___x_161_, v___x_162_);
v___x_164_ = lean_usize_land(v___x_160_, v___x_163_);
v___x_165_ = lean_array_uget_borrowed(v_data_147_, v___x_164_);
lean_inc(v___x_165_);
v___x_166_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_166_, 0, v_a_148_);
lean_ctor_set(v___x_166_, 1, v_b_149_);
lean_ctor_set(v___x_166_, 2, v___x_165_);
v___x_167_ = lean_array_uset(v_data_147_, v___x_164_, v___x_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___redArg___lam__0(lean_object* v_inst_168_, lean_object* v_x1_169_, lean_object* v_x2_170_, lean_object* v_x3_171_){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; uint64_t v___x_174_; uint64_t v___x_175_; uint64_t v___x_176_; uint64_t v___x_177_; uint64_t v_fold_178_; uint64_t v___x_179_; uint64_t v___x_180_; uint64_t v___x_181_; size_t v___x_182_; size_t v___x_183_; size_t v___x_184_; size_t v___x_185_; size_t v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_172_ = lean_array_get_size(v_x1_169_);
lean_inc(v_x2_170_);
v___x_173_ = lean_apply_1(v_inst_168_, v_x2_170_);
v___x_174_ = 32ULL;
v___x_175_ = lean_unbox_uint64(v___x_173_);
v___x_176_ = lean_uint64_shift_right(v___x_175_, v___x_174_);
v___x_177_ = lean_unbox_uint64(v___x_173_);
lean_dec_ref(v___x_173_);
v_fold_178_ = lean_uint64_xor(v___x_177_, v___x_176_);
v___x_179_ = 16ULL;
v___x_180_ = lean_uint64_shift_right(v_fold_178_, v___x_179_);
v___x_181_ = lean_uint64_xor(v_fold_178_, v___x_180_);
v___x_182_ = lean_uint64_to_usize(v___x_181_);
v___x_183_ = lean_usize_of_nat(v___x_172_);
v___x_184_ = ((size_t)1ULL);
v___x_185_ = lean_usize_sub(v___x_183_, v___x_184_);
v___x_186_ = lean_usize_land(v___x_182_, v___x_185_);
v___x_187_ = lean_array_uget_borrowed(v_x1_169_, v___x_186_);
lean_inc(v___x_187_);
v___x_188_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_188_, 0, v_x2_170_);
lean_ctor_set(v___x_188_, 1, v_x3_171_);
lean_ctor_set(v___x_188_, 2, v___x_187_);
v___x_189_ = lean_array_uset(v_x1_169_, v___x_186_, v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___redArg(lean_object* v_inst_190_, lean_object* v_i_191_, lean_object* v_source_192_, lean_object* v_target_193_){
_start:
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = lean_array_get_size(v_source_192_);
v___x_195_ = lean_nat_dec_lt(v_i_191_, v___x_194_);
if (v___x_195_ == 0)
{
lean_dec_ref(v_source_192_);
lean_dec(v_i_191_);
lean_dec_ref(v_inst_190_);
return v_target_193_;
}
else
{
lean_object* v___f_196_; lean_object* v_es_197_; lean_object* v___x_198_; lean_object* v_source_199_; lean_object* v___x_200_; lean_object* v_target_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
lean_inc_ref(v_inst_190_);
v___f_196_ = lean_alloc_closure((void*)(l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___redArg___lam__0), 4, 1);
lean_closure_set(v___f_196_, 0, v_inst_190_);
v_es_197_ = lean_array_fget(v_source_192_, v_i_191_);
v___x_198_ = lean_box(0);
v_source_199_ = lean_array_fset(v_source_192_, v_i_191_, v___x_198_);
v___x_200_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v_target_201_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_200_, v___f_196_, v_target_193_, v_es_197_);
v___x_202_ = lean_unsigned_to_nat(1u);
v___x_203_ = lean_nat_add(v_i_191_, v___x_202_);
lean_dec(v_i_191_);
v_i_191_ = v___x_203_;
v_source_192_ = v_source_199_;
v_target_193_ = v_target_201_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go(lean_object* v_00_u03b1_205_, lean_object* v_00_u03b2_206_, lean_object* v_inst_207_, lean_object* v_i_208_, lean_object* v_source_209_, lean_object* v_target_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___redArg(v_inst_207_, v_i_208_, v_source_209_, v_target_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(lean_object* v_inst_212_, lean_object* v_data_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v_nbuckets_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_214_ = lean_array_get_size(v_data_213_);
v___x_215_ = lean_unsigned_to_nat(2u);
v_nbuckets_216_ = lean_nat_mul(v___x_214_, v___x_215_);
v___x_217_ = lean_unsigned_to_nat(0u);
v___x_218_ = lean_box(0);
v___x_219_ = lean_mk_array(v_nbuckets_216_, v___x_218_);
v___x_220_ = lean_array_propagate_mark(v_data_213_, v___x_219_);
v___x_221_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___redArg(v_inst_212_, v___x_217_, v_data_213_, v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand(lean_object* v_00_u03b1_222_, lean_object* v_00_u03b2_223_, lean_object* v_inst_224_, lean_object* v_data_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_224_, v_data_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expandIfNecessary___redArg(lean_object* v_inst_227_, lean_object* v_m_228_){
_start:
{
lean_object* v_size_229_; lean_object* v_buckets_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v_size_229_ = lean_ctor_get(v_m_228_, 0);
v_buckets_230_ = lean_ctor_get(v_m_228_, 1);
v___x_231_ = lean_unsigned_to_nat(4u);
v___x_232_ = lean_nat_mul(v_size_229_, v___x_231_);
v___x_233_ = lean_unsigned_to_nat(3u);
v___x_234_ = lean_nat_div(v___x_232_, v___x_233_);
lean_dec(v___x_232_);
v___x_235_ = lean_array_get_size(v_buckets_230_);
v___x_236_ = lean_nat_dec_le(v___x_234_, v___x_235_);
lean_dec(v___x_234_);
if (v___x_236_ == 0)
{
lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_244_; 
lean_inc_ref(v_buckets_230_);
lean_inc(v_size_229_);
v_isSharedCheck_244_ = !lean_is_exclusive(v_m_228_);
if (v_isSharedCheck_244_ == 0)
{
lean_object* v_unused_245_; lean_object* v_unused_246_; 
v_unused_245_ = lean_ctor_get(v_m_228_, 1);
lean_dec(v_unused_245_);
v_unused_246_ = lean_ctor_get(v_m_228_, 0);
lean_dec(v_unused_246_);
v___x_238_ = v_m_228_;
v_isShared_239_ = v_isSharedCheck_244_;
goto v_resetjp_237_;
}
else
{
lean_dec(v_m_228_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_244_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v_val_240_; lean_object* v___x_242_; 
v_val_240_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_227_, v_buckets_230_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 1, v_val_240_);
v___x_242_ = v___x_238_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_size_229_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v_val_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
else
{
lean_dec_ref(v_inst_227_);
return v_m_228_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expandIfNecessary(lean_object* v_00_u03b1_247_, lean_object* v_00_u03b2_248_, lean_object* v_inst_249_, lean_object* v_inst_250_, lean_object* v_m_251_){
_start:
{
lean_object* v_size_252_; lean_object* v_buckets_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v_size_252_ = lean_ctor_get(v_m_251_, 0);
v_buckets_253_ = lean_ctor_get(v_m_251_, 1);
v___x_254_ = lean_unsigned_to_nat(4u);
v___x_255_ = lean_nat_mul(v_size_252_, v___x_254_);
v___x_256_ = lean_unsigned_to_nat(3u);
v___x_257_ = lean_nat_div(v___x_255_, v___x_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_array_get_size(v_buckets_253_);
v___x_259_ = lean_nat_dec_le(v___x_257_, v___x_258_);
lean_dec(v___x_257_);
if (v___x_259_ == 0)
{
lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_267_; 
lean_inc_ref(v_buckets_253_);
lean_inc(v_size_252_);
v_isSharedCheck_267_ = !lean_is_exclusive(v_m_251_);
if (v_isSharedCheck_267_ == 0)
{
lean_object* v_unused_268_; lean_object* v_unused_269_; 
v_unused_268_ = lean_ctor_get(v_m_251_, 1);
lean_dec(v_unused_268_);
v_unused_269_ = lean_ctor_get(v_m_251_, 0);
lean_dec(v_unused_269_);
v___x_261_ = v_m_251_;
v_isShared_262_ = v_isSharedCheck_267_;
goto v_resetjp_260_;
}
else
{
lean_dec(v_m_251_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_267_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v_val_263_; lean_object* v___x_265_; 
v_val_263_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_250_, v_buckets_253_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 1, v_val_263_);
v___x_265_ = v___x_261_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_size_252_);
lean_ctor_set(v_reuseFailAlloc_266_, 1, v_val_263_);
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
lean_dec_ref(v_inst_250_);
return v_m_251_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expandIfNecessary___boxed(lean_object* v_00_u03b1_270_, lean_object* v_00_u03b2_271_, lean_object* v_inst_272_, lean_object* v_inst_273_, lean_object* v_m_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Std_DHashMap_Internal_Raw_u2080_expandIfNecessary(v_00_u03b1_270_, v_00_u03b2_271_, v_inst_272_, v_inst_273_, v_m_274_);
lean_dec_ref(v_inst_272_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object* v_inst_276_, lean_object* v_inst_277_, lean_object* v_m_278_, lean_object* v_a_279_, lean_object* v_b_280_){
_start:
{
lean_object* v_size_281_; lean_object* v_buckets_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_327_; 
v_size_281_ = lean_ctor_get(v_m_278_, 0);
v_buckets_282_ = lean_ctor_get(v_m_278_, 1);
v_isSharedCheck_327_ = !lean_is_exclusive(v_m_278_);
if (v_isSharedCheck_327_ == 0)
{
v___x_284_ = v_m_278_;
v_isShared_285_ = v_isSharedCheck_327_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_buckets_282_);
lean_inc(v_size_281_);
lean_dec(v_m_278_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_327_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_286_; lean_object* v___x_287_; uint64_t v___x_288_; uint64_t v___x_289_; uint64_t v___x_290_; uint64_t v___x_291_; uint64_t v_fold_292_; uint64_t v___x_293_; uint64_t v___x_294_; uint64_t v___x_295_; size_t v___x_296_; size_t v___x_297_; size_t v___x_298_; size_t v___x_299_; size_t v___x_300_; lean_object* v_bkt_301_; uint8_t v___x_302_; 
v___x_286_ = lean_array_get_size(v_buckets_282_);
lean_inc_ref(v_inst_277_);
lean_inc_n(v_a_279_, 2);
v___x_287_ = lean_apply_1(v_inst_277_, v_a_279_);
v___x_288_ = 32ULL;
v___x_289_ = lean_unbox_uint64(v___x_287_);
v___x_290_ = lean_uint64_shift_right(v___x_289_, v___x_288_);
v___x_291_ = lean_unbox_uint64(v___x_287_);
lean_dec_ref(v___x_287_);
v_fold_292_ = lean_uint64_xor(v___x_291_, v___x_290_);
v___x_293_ = 16ULL;
v___x_294_ = lean_uint64_shift_right(v_fold_292_, v___x_293_);
v___x_295_ = lean_uint64_xor(v_fold_292_, v___x_294_);
v___x_296_ = lean_uint64_to_usize(v___x_295_);
v___x_297_ = lean_usize_of_nat(v___x_286_);
v___x_298_ = ((size_t)1ULL);
v___x_299_ = lean_usize_sub(v___x_297_, v___x_298_);
v___x_300_ = lean_usize_land(v___x_296_, v___x_299_);
v_bkt_301_ = lean_array_uget_borrowed(v_buckets_282_, v___x_300_);
lean_inc(v_bkt_301_);
lean_inc_ref(v_inst_276_);
v___x_302_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_276_, v_a_279_, v_bkt_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; lean_object* v_size_x27_304_; lean_object* v___x_305_; lean_object* v_buckets_x27_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; uint8_t v___x_312_; 
lean_dec_ref(v_inst_276_);
v___x_303_ = lean_unsigned_to_nat(1u);
v_size_x27_304_ = lean_nat_add(v_size_281_, v___x_303_);
lean_dec(v_size_281_);
lean_inc(v_bkt_301_);
v___x_305_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_305_, 0, v_a_279_);
lean_ctor_set(v___x_305_, 1, v_b_280_);
lean_ctor_set(v___x_305_, 2, v_bkt_301_);
v_buckets_x27_306_ = lean_array_uset(v_buckets_282_, v___x_300_, v___x_305_);
v___x_307_ = lean_unsigned_to_nat(4u);
v___x_308_ = lean_nat_mul(v_size_x27_304_, v___x_307_);
v___x_309_ = lean_unsigned_to_nat(3u);
v___x_310_ = lean_nat_div(v___x_308_, v___x_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_array_get_size(v_buckets_x27_306_);
v___x_312_ = lean_nat_dec_le(v___x_310_, v___x_311_);
lean_dec(v___x_310_);
if (v___x_312_ == 0)
{
lean_object* v_val_313_; lean_object* v___x_315_; 
v_val_313_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_277_, v_buckets_x27_306_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v_val_313_);
lean_ctor_set(v___x_284_, 0, v_size_x27_304_);
v___x_315_ = v___x_284_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_size_x27_304_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_val_313_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
else
{
lean_object* v___x_318_; 
lean_dec_ref(v_inst_277_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v_buckets_x27_306_);
lean_ctor_set(v___x_284_, 0, v_size_x27_304_);
v___x_318_ = v___x_284_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_size_x27_304_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v_buckets_x27_306_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
else
{
lean_object* v___x_320_; lean_object* v_buckets_x27_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_325_; 
lean_inc(v_bkt_301_);
lean_dec_ref(v_inst_277_);
v___x_320_ = lean_box(0);
v_buckets_x27_321_ = lean_array_uset(v_buckets_282_, v___x_300_, v___x_320_);
v___x_322_ = l_Std_DHashMap_Internal_AssocList_replace___redArg(v_inst_276_, v_a_279_, v_b_280_, v_bkt_301_);
v___x_323_ = lean_array_uset(v_buckets_x27_321_, v___x_300_, v___x_322_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v___x_323_);
v___x_325_ = v___x_284_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_size_281_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_323_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert(lean_object* v_00_u03b1_328_, lean_object* v_00_u03b2_329_, lean_object* v_inst_330_, lean_object* v_inst_331_, lean_object* v_m_332_, lean_object* v_a_333_, lean_object* v_b_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_330_, v_inst_331_, v_m_332_, v_a_333_, v_b_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_modify___redArg(lean_object* v_inst_336_, lean_object* v_inst_337_, lean_object* v_m_338_, lean_object* v_a_339_, lean_object* v_f_340_){
_start:
{
lean_object* v_size_341_; lean_object* v_buckets_342_; lean_object* v___x_343_; lean_object* v___x_344_; uint64_t v___x_345_; uint64_t v___x_346_; uint64_t v___x_347_; uint64_t v___x_348_; uint64_t v_fold_349_; uint64_t v___x_350_; uint64_t v___x_351_; uint64_t v___x_352_; size_t v___x_353_; size_t v___x_354_; size_t v___x_355_; size_t v___x_356_; size_t v___x_357_; lean_object* v_bucket_358_; uint8_t v___x_359_; 
v_size_341_ = lean_ctor_get(v_m_338_, 0);
v_buckets_342_ = lean_ctor_get(v_m_338_, 1);
v___x_343_ = lean_array_get_size(v_buckets_342_);
lean_inc_n(v_a_339_, 2);
v___x_344_ = lean_apply_1(v_inst_337_, v_a_339_);
v___x_345_ = 32ULL;
v___x_346_ = lean_unbox_uint64(v___x_344_);
v___x_347_ = lean_uint64_shift_right(v___x_346_, v___x_345_);
v___x_348_ = lean_unbox_uint64(v___x_344_);
lean_dec_ref(v___x_344_);
v_fold_349_ = lean_uint64_xor(v___x_348_, v___x_347_);
v___x_350_ = 16ULL;
v___x_351_ = lean_uint64_shift_right(v_fold_349_, v___x_350_);
v___x_352_ = lean_uint64_xor(v_fold_349_, v___x_351_);
v___x_353_ = lean_uint64_to_usize(v___x_352_);
v___x_354_ = lean_usize_of_nat(v___x_343_);
v___x_355_ = ((size_t)1ULL);
v___x_356_ = lean_usize_sub(v___x_354_, v___x_355_);
v___x_357_ = lean_usize_land(v___x_353_, v___x_356_);
v_bucket_358_ = lean_array_uget_borrowed(v_buckets_342_, v___x_357_);
lean_inc(v_bucket_358_);
lean_inc_ref(v_inst_336_);
v___x_359_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_336_, v_a_339_, v_bucket_358_);
if (v___x_359_ == 0)
{
lean_dec(v_f_340_);
lean_dec(v_a_339_);
lean_dec_ref(v_inst_336_);
return v_m_338_;
}
else
{
lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_370_; 
lean_inc(v_bucket_358_);
lean_inc_ref(v_buckets_342_);
lean_inc(v_size_341_);
v_isSharedCheck_370_ = !lean_is_exclusive(v_m_338_);
if (v_isSharedCheck_370_ == 0)
{
lean_object* v_unused_371_; lean_object* v_unused_372_; 
v_unused_371_ = lean_ctor_get(v_m_338_, 1);
lean_dec(v_unused_371_);
v_unused_372_ = lean_ctor_get(v_m_338_, 0);
lean_dec(v_unused_372_);
v___x_361_ = v_m_338_;
v_isShared_362_ = v_isSharedCheck_370_;
goto v_resetjp_360_;
}
else
{
lean_dec(v_m_338_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_370_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v_buckets_364_; lean_object* v_bucket_365_; lean_object* v___x_366_; lean_object* v___x_368_; 
v___x_363_ = lean_box(0);
v_buckets_364_ = lean_array_uset(v_buckets_342_, v___x_357_, v___x_363_);
v_bucket_365_ = l_Std_DHashMap_Internal_AssocList_modify___redArg(v_inst_336_, v_a_339_, v_f_340_, v_bucket_358_);
v___x_366_ = lean_array_uset(v_buckets_364_, v___x_357_, v_bucket_365_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 1, v___x_366_);
v___x_368_ = v___x_361_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_size_341_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v___x_366_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_modify(lean_object* v_00_u03b1_373_, lean_object* v_00_u03b2_374_, lean_object* v_inst_375_, lean_object* v_inst_376_, lean_object* v_inst_377_, lean_object* v_m_378_, lean_object* v_a_379_, lean_object* v_f_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Std_DHashMap_Internal_Raw_u2080_modify___redArg(v_inst_375_, v_inst_376_, v_m_378_, v_a_379_, v_f_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___redArg(lean_object* v_inst_382_, lean_object* v_inst_383_, lean_object* v_m_384_, lean_object* v_a_385_, lean_object* v_f_386_){
_start:
{
lean_object* v_size_387_; lean_object* v_buckets_388_; lean_object* v___x_389_; lean_object* v___x_390_; uint64_t v___x_391_; uint64_t v___x_392_; uint64_t v___x_393_; uint64_t v___x_394_; uint64_t v_fold_395_; uint64_t v___x_396_; uint64_t v___x_397_; uint64_t v___x_398_; size_t v___x_399_; size_t v___x_400_; size_t v___x_401_; size_t v___x_402_; size_t v___x_403_; lean_object* v_bucket_404_; uint8_t v___x_405_; 
v_size_387_ = lean_ctor_get(v_m_384_, 0);
v_buckets_388_ = lean_ctor_get(v_m_384_, 1);
v___x_389_ = lean_array_get_size(v_buckets_388_);
lean_inc_n(v_a_385_, 2);
v___x_390_ = lean_apply_1(v_inst_383_, v_a_385_);
v___x_391_ = 32ULL;
v___x_392_ = lean_unbox_uint64(v___x_390_);
v___x_393_ = lean_uint64_shift_right(v___x_392_, v___x_391_);
v___x_394_ = lean_unbox_uint64(v___x_390_);
lean_dec_ref(v___x_390_);
v_fold_395_ = lean_uint64_xor(v___x_394_, v___x_393_);
v___x_396_ = 16ULL;
v___x_397_ = lean_uint64_shift_right(v_fold_395_, v___x_396_);
v___x_398_ = lean_uint64_xor(v_fold_395_, v___x_397_);
v___x_399_ = lean_uint64_to_usize(v___x_398_);
v___x_400_ = lean_usize_of_nat(v___x_389_);
v___x_401_ = ((size_t)1ULL);
v___x_402_ = lean_usize_sub(v___x_400_, v___x_401_);
v___x_403_ = lean_usize_land(v___x_399_, v___x_402_);
v_bucket_404_ = lean_array_uget_borrowed(v_buckets_388_, v___x_403_);
lean_inc(v_bucket_404_);
lean_inc_ref(v_inst_382_);
v___x_405_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_382_, v_a_385_, v_bucket_404_);
if (v___x_405_ == 0)
{
lean_dec(v_f_386_);
lean_dec(v_a_385_);
lean_dec_ref(v_inst_382_);
return v_m_384_;
}
else
{
lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_416_; 
lean_inc(v_bucket_404_);
lean_inc_ref(v_buckets_388_);
lean_inc(v_size_387_);
v_isSharedCheck_416_ = !lean_is_exclusive(v_m_384_);
if (v_isSharedCheck_416_ == 0)
{
lean_object* v_unused_417_; lean_object* v_unused_418_; 
v_unused_417_ = lean_ctor_get(v_m_384_, 1);
lean_dec(v_unused_417_);
v_unused_418_ = lean_ctor_get(v_m_384_, 0);
lean_dec(v_unused_418_);
v___x_407_ = v_m_384_;
v_isShared_408_ = v_isSharedCheck_416_;
goto v_resetjp_406_;
}
else
{
lean_dec(v_m_384_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_416_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v_buckets_410_; lean_object* v_bucket_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_409_ = lean_box(0);
v_buckets_410_ = lean_array_uset(v_buckets_388_, v___x_403_, v___x_409_);
v_bucket_411_ = l_Std_DHashMap_Internal_AssocList_Const_modify___redArg(v_inst_382_, v_a_385_, v_f_386_, v_bucket_404_);
v___x_412_ = lean_array_uset(v_buckets_410_, v___x_403_, v_bucket_411_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 1, v___x_412_);
v___x_414_ = v___x_407_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_size_387_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify(lean_object* v_00_u03b1_419_, lean_object* v_inst_420_, lean_object* v_00_u03b2_421_, lean_object* v_inst_422_, lean_object* v_m_423_, lean_object* v_a_424_, lean_object* v_f_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___redArg(v_inst_420_, v_inst_422_, v_m_423_, v_a_424_, v_f_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_alter___redArg(lean_object* v_inst_427_, lean_object* v_inst_428_, lean_object* v_m_429_, lean_object* v_a_430_, lean_object* v_f_431_){
_start:
{
lean_object* v_size_432_; lean_object* v_buckets_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint64_t v___x_436_; uint64_t v___x_437_; uint64_t v___x_438_; uint64_t v___x_439_; uint64_t v_fold_440_; uint64_t v___x_441_; uint64_t v___x_442_; uint64_t v___x_443_; size_t v___x_444_; size_t v___x_445_; size_t v___x_446_; size_t v___x_447_; size_t v___x_448_; lean_object* v_bkt_449_; uint8_t v___x_450_; 
v_size_432_ = lean_ctor_get(v_m_429_, 0);
v_buckets_433_ = lean_ctor_get(v_m_429_, 1);
v___x_434_ = lean_array_get_size(v_buckets_433_);
lean_inc_ref(v_inst_428_);
lean_inc_n(v_a_430_, 2);
v___x_435_ = lean_apply_1(v_inst_428_, v_a_430_);
v___x_436_ = 32ULL;
v___x_437_ = lean_unbox_uint64(v___x_435_);
v___x_438_ = lean_uint64_shift_right(v___x_437_, v___x_436_);
v___x_439_ = lean_unbox_uint64(v___x_435_);
lean_dec_ref(v___x_435_);
v_fold_440_ = lean_uint64_xor(v___x_439_, v___x_438_);
v___x_441_ = 16ULL;
v___x_442_ = lean_uint64_shift_right(v_fold_440_, v___x_441_);
v___x_443_ = lean_uint64_xor(v_fold_440_, v___x_442_);
v___x_444_ = lean_uint64_to_usize(v___x_443_);
v___x_445_ = lean_usize_of_nat(v___x_434_);
v___x_446_ = ((size_t)1ULL);
v___x_447_ = lean_usize_sub(v___x_445_, v___x_446_);
v___x_448_ = lean_usize_land(v___x_444_, v___x_447_);
v_bkt_449_ = lean_array_uget_borrowed(v_buckets_433_, v___x_448_);
lean_inc(v_bkt_449_);
lean_inc_ref(v_inst_427_);
v___x_450_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_427_, v_a_430_, v_bkt_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; 
lean_dec_ref(v_inst_427_);
v___x_451_ = lean_box(0);
v___x_452_ = lean_apply_1(v_f_431_, v___x_451_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_dec(v_a_430_);
lean_dec_ref(v_inst_428_);
return v_m_429_;
}
else
{
lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_474_; 
lean_inc_ref(v_buckets_433_);
lean_inc(v_size_432_);
v_isSharedCheck_474_ = !lean_is_exclusive(v_m_429_);
if (v_isSharedCheck_474_ == 0)
{
lean_object* v_unused_475_; lean_object* v_unused_476_; 
v_unused_475_ = lean_ctor_get(v_m_429_, 1);
lean_dec(v_unused_475_);
v_unused_476_ = lean_ctor_get(v_m_429_, 0);
lean_dec(v_unused_476_);
v___x_454_ = v_m_429_;
v_isShared_455_ = v_isSharedCheck_474_;
goto v_resetjp_453_;
}
else
{
lean_dec(v_m_429_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_474_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v_val_456_; lean_object* v___x_457_; lean_object* v_size_x27_458_; lean_object* v___x_459_; lean_object* v_buckets_x27_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; 
v_val_456_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_val_456_);
lean_dec_ref_known(v___x_452_, 1);
v___x_457_ = lean_unsigned_to_nat(1u);
v_size_x27_458_ = lean_nat_add(v_size_432_, v___x_457_);
lean_dec(v_size_432_);
lean_inc(v_bkt_449_);
v___x_459_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_459_, 0, v_a_430_);
lean_ctor_set(v___x_459_, 1, v_val_456_);
lean_ctor_set(v___x_459_, 2, v_bkt_449_);
v_buckets_x27_460_ = lean_array_uset(v_buckets_433_, v___x_448_, v___x_459_);
v___x_461_ = lean_unsigned_to_nat(4u);
v___x_462_ = lean_nat_mul(v_size_x27_458_, v___x_461_);
v___x_463_ = lean_unsigned_to_nat(3u);
v___x_464_ = lean_nat_div(v___x_462_, v___x_463_);
lean_dec(v___x_462_);
v___x_465_ = lean_array_get_size(v_buckets_x27_460_);
v___x_466_ = lean_nat_dec_le(v___x_464_, v___x_465_);
lean_dec(v___x_464_);
if (v___x_466_ == 0)
{
lean_object* v_val_467_; lean_object* v___x_469_; 
v_val_467_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_428_, v_buckets_x27_460_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v_val_467_);
lean_ctor_set(v___x_454_, 0, v_size_x27_458_);
v___x_469_ = v___x_454_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_size_x27_458_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_val_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
else
{
lean_object* v___x_472_; 
lean_dec_ref(v_inst_428_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v_buckets_x27_460_);
lean_ctor_set(v___x_454_, 0, v_size_x27_458_);
v___x_472_ = v___x_454_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_size_x27_458_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v_buckets_x27_460_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
}
else
{
lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_492_; 
lean_inc(v_bkt_449_);
lean_inc_ref(v_buckets_433_);
lean_inc(v_size_432_);
lean_dec_ref(v_inst_428_);
v_isSharedCheck_492_ = !lean_is_exclusive(v_m_429_);
if (v_isSharedCheck_492_ == 0)
{
lean_object* v_unused_493_; lean_object* v_unused_494_; 
v_unused_493_ = lean_ctor_get(v_m_429_, 1);
lean_dec(v_unused_493_);
v_unused_494_ = lean_ctor_get(v_m_429_, 0);
lean_dec(v_unused_494_);
v___x_478_ = v_m_429_;
v_isShared_479_ = v_isSharedCheck_492_;
goto v_resetjp_477_;
}
else
{
lean_dec(v_m_429_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_492_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_480_; lean_object* v_buckets_x27_481_; lean_object* v_bkt_x27_482_; lean_object* v___y_484_; uint8_t v___x_489_; 
v___x_480_ = lean_box(0);
v_buckets_x27_481_ = lean_array_uset(v_buckets_433_, v___x_448_, v___x_480_);
lean_inc(v_a_430_);
lean_inc_ref(v_inst_427_);
v_bkt_x27_482_ = l_Std_DHashMap_Internal_AssocList_alter___redArg(v_inst_427_, v_a_430_, v_f_431_, v_bkt_449_);
lean_inc(v_bkt_x27_482_);
v___x_489_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_427_, v_a_430_, v_bkt_x27_482_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_490_ = lean_unsigned_to_nat(1u);
v___x_491_ = lean_nat_sub(v_size_432_, v___x_490_);
lean_dec(v_size_432_);
v___y_484_ = v___x_491_;
goto v___jp_483_;
}
else
{
v___y_484_ = v_size_432_;
goto v___jp_483_;
}
v___jp_483_:
{
lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_485_ = lean_array_uset(v_buckets_x27_481_, v___x_448_, v_bkt_x27_482_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 1, v___x_485_);
lean_ctor_set(v___x_478_, 0, v___y_484_);
v___x_487_ = v___x_478_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___y_484_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_alter(lean_object* v_00_u03b1_495_, lean_object* v_00_u03b2_496_, lean_object* v_inst_497_, lean_object* v_inst_498_, lean_object* v_inst_499_, lean_object* v_m_500_, lean_object* v_a_501_, lean_object* v_f_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Std_DHashMap_Internal_Raw_u2080_alter___redArg(v_inst_497_, v_inst_498_, v_m_500_, v_a_501_, v_f_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(lean_object* v_inst_504_, lean_object* v_inst_505_, lean_object* v_m_506_, lean_object* v_a_507_, lean_object* v_f_508_){
_start:
{
lean_object* v_size_509_; lean_object* v_buckets_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint64_t v___x_513_; uint64_t v___x_514_; uint64_t v___x_515_; uint64_t v___x_516_; uint64_t v_fold_517_; uint64_t v___x_518_; uint64_t v___x_519_; uint64_t v___x_520_; size_t v___x_521_; size_t v___x_522_; size_t v___x_523_; size_t v___x_524_; size_t v___x_525_; lean_object* v_bkt_526_; uint8_t v___x_527_; 
v_size_509_ = lean_ctor_get(v_m_506_, 0);
v_buckets_510_ = lean_ctor_get(v_m_506_, 1);
v___x_511_ = lean_array_get_size(v_buckets_510_);
lean_inc_ref(v_inst_505_);
lean_inc_n(v_a_507_, 2);
v___x_512_ = lean_apply_1(v_inst_505_, v_a_507_);
v___x_513_ = 32ULL;
v___x_514_ = lean_unbox_uint64(v___x_512_);
v___x_515_ = lean_uint64_shift_right(v___x_514_, v___x_513_);
v___x_516_ = lean_unbox_uint64(v___x_512_);
lean_dec_ref(v___x_512_);
v_fold_517_ = lean_uint64_xor(v___x_516_, v___x_515_);
v___x_518_ = 16ULL;
v___x_519_ = lean_uint64_shift_right(v_fold_517_, v___x_518_);
v___x_520_ = lean_uint64_xor(v_fold_517_, v___x_519_);
v___x_521_ = lean_uint64_to_usize(v___x_520_);
v___x_522_ = lean_usize_of_nat(v___x_511_);
v___x_523_ = ((size_t)1ULL);
v___x_524_ = lean_usize_sub(v___x_522_, v___x_523_);
v___x_525_ = lean_usize_land(v___x_521_, v___x_524_);
v_bkt_526_ = lean_array_uget_borrowed(v_buckets_510_, v___x_525_);
lean_inc(v_bkt_526_);
lean_inc_ref(v_inst_504_);
v___x_527_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_504_, v_a_507_, v_bkt_526_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; lean_object* v___x_529_; 
lean_dec_ref(v_inst_504_);
v___x_528_ = lean_box(0);
v___x_529_ = lean_apply_1(v_f_508_, v___x_528_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_dec(v_a_507_);
lean_dec_ref(v_inst_505_);
return v_m_506_;
}
else
{
lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_551_; 
lean_inc_ref(v_buckets_510_);
lean_inc(v_size_509_);
v_isSharedCheck_551_ = !lean_is_exclusive(v_m_506_);
if (v_isSharedCheck_551_ == 0)
{
lean_object* v_unused_552_; lean_object* v_unused_553_; 
v_unused_552_ = lean_ctor_get(v_m_506_, 1);
lean_dec(v_unused_552_);
v_unused_553_ = lean_ctor_get(v_m_506_, 0);
lean_dec(v_unused_553_);
v___x_531_ = v_m_506_;
v_isShared_532_ = v_isSharedCheck_551_;
goto v_resetjp_530_;
}
else
{
lean_dec(v_m_506_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_551_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v_val_533_; lean_object* v___x_534_; lean_object* v_size_x27_535_; lean_object* v___x_536_; lean_object* v_buckets_x27_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
v_val_533_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_val_533_);
lean_dec_ref_known(v___x_529_, 1);
v___x_534_ = lean_unsigned_to_nat(1u);
v_size_x27_535_ = lean_nat_add(v_size_509_, v___x_534_);
lean_dec(v_size_509_);
lean_inc(v_bkt_526_);
v___x_536_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_536_, 0, v_a_507_);
lean_ctor_set(v___x_536_, 1, v_val_533_);
lean_ctor_set(v___x_536_, 2, v_bkt_526_);
v_buckets_x27_537_ = lean_array_uset(v_buckets_510_, v___x_525_, v___x_536_);
v___x_538_ = lean_unsigned_to_nat(4u);
v___x_539_ = lean_nat_mul(v_size_x27_535_, v___x_538_);
v___x_540_ = lean_unsigned_to_nat(3u);
v___x_541_ = lean_nat_div(v___x_539_, v___x_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_array_get_size(v_buckets_x27_537_);
v___x_543_ = lean_nat_dec_le(v___x_541_, v___x_542_);
lean_dec(v___x_541_);
if (v___x_543_ == 0)
{
lean_object* v_val_544_; lean_object* v___x_546_; 
v_val_544_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_505_, v_buckets_x27_537_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 1, v_val_544_);
lean_ctor_set(v___x_531_, 0, v_size_x27_535_);
v___x_546_ = v___x_531_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_size_x27_535_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v_val_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
else
{
lean_object* v___x_549_; 
lean_dec_ref(v_inst_505_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 1, v_buckets_x27_537_);
lean_ctor_set(v___x_531_, 0, v_size_x27_535_);
v___x_549_ = v___x_531_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_size_x27_535_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v_buckets_x27_537_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
else
{
lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_569_; 
lean_inc(v_bkt_526_);
lean_inc_ref(v_buckets_510_);
lean_inc(v_size_509_);
lean_dec_ref(v_inst_505_);
v_isSharedCheck_569_ = !lean_is_exclusive(v_m_506_);
if (v_isSharedCheck_569_ == 0)
{
lean_object* v_unused_570_; lean_object* v_unused_571_; 
v_unused_570_ = lean_ctor_get(v_m_506_, 1);
lean_dec(v_unused_570_);
v_unused_571_ = lean_ctor_get(v_m_506_, 0);
lean_dec(v_unused_571_);
v___x_555_ = v_m_506_;
v_isShared_556_ = v_isSharedCheck_569_;
goto v_resetjp_554_;
}
else
{
lean_dec(v_m_506_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_569_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_557_; lean_object* v_buckets_x27_558_; lean_object* v_bkt_x27_559_; lean_object* v___y_561_; uint8_t v___x_566_; 
v___x_557_ = lean_box(0);
v_buckets_x27_558_ = lean_array_uset(v_buckets_510_, v___x_525_, v___x_557_);
lean_inc(v_a_507_);
lean_inc_ref(v_inst_504_);
v_bkt_x27_559_ = l_Std_DHashMap_Internal_AssocList_Const_alter___redArg(v_inst_504_, v_a_507_, v_f_508_, v_bkt_526_);
lean_inc(v_bkt_x27_559_);
v___x_566_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_504_, v_a_507_, v_bkt_x27_559_);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = lean_unsigned_to_nat(1u);
v___x_568_ = lean_nat_sub(v_size_509_, v___x_567_);
lean_dec(v_size_509_);
v___y_561_ = v___x_568_;
goto v___jp_560_;
}
else
{
v___y_561_ = v_size_509_;
goto v___jp_560_;
}
v___jp_560_:
{
lean_object* v___x_562_; lean_object* v___x_564_; 
v___x_562_ = lean_array_uset(v_buckets_x27_558_, v___x_525_, v_bkt_x27_559_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 1, v___x_562_);
lean_ctor_set(v___x_555_, 0, v___y_561_);
v___x_564_ = v___x_555_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___y_561_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter(lean_object* v_00_u03b1_572_, lean_object* v_inst_573_, lean_object* v_inst_574_, lean_object* v_00_u03b2_575_, lean_object* v_m_576_, lean_object* v_a_577_, lean_object* v_f_578_){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_573_, v_inst_574_, v_m_576_, v_a_577_, v_f_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_containsThenInsert___redArg(lean_object* v_inst_580_, lean_object* v_inst_581_, lean_object* v_m_582_, lean_object* v_a_583_, lean_object* v_b_584_){
_start:
{
lean_object* v_size_585_; lean_object* v_buckets_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_637_; 
v_size_585_ = lean_ctor_get(v_m_582_, 0);
v_buckets_586_ = lean_ctor_get(v_m_582_, 1);
v_isSharedCheck_637_ = !lean_is_exclusive(v_m_582_);
if (v_isSharedCheck_637_ == 0)
{
v___x_588_ = v_m_582_;
v_isShared_589_ = v_isSharedCheck_637_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_buckets_586_);
lean_inc(v_size_585_);
lean_dec(v_m_582_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_637_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_590_; lean_object* v___x_591_; uint64_t v___x_592_; uint64_t v___x_593_; uint64_t v___x_594_; uint64_t v___x_595_; uint64_t v_fold_596_; uint64_t v___x_597_; uint64_t v___x_598_; uint64_t v___x_599_; size_t v___x_600_; size_t v___x_601_; size_t v___x_602_; size_t v___x_603_; size_t v___x_604_; lean_object* v_bkt_605_; uint8_t v___x_606_; 
v___x_590_ = lean_array_get_size(v_buckets_586_);
lean_inc_ref(v_inst_581_);
lean_inc_n(v_a_583_, 2);
v___x_591_ = lean_apply_1(v_inst_581_, v_a_583_);
v___x_592_ = 32ULL;
v___x_593_ = lean_unbox_uint64(v___x_591_);
v___x_594_ = lean_uint64_shift_right(v___x_593_, v___x_592_);
v___x_595_ = lean_unbox_uint64(v___x_591_);
lean_dec_ref(v___x_591_);
v_fold_596_ = lean_uint64_xor(v___x_595_, v___x_594_);
v___x_597_ = 16ULL;
v___x_598_ = lean_uint64_shift_right(v_fold_596_, v___x_597_);
v___x_599_ = lean_uint64_xor(v_fold_596_, v___x_598_);
v___x_600_ = lean_uint64_to_usize(v___x_599_);
v___x_601_ = lean_usize_of_nat(v___x_590_);
v___x_602_ = ((size_t)1ULL);
v___x_603_ = lean_usize_sub(v___x_601_, v___x_602_);
v___x_604_ = lean_usize_land(v___x_600_, v___x_603_);
v_bkt_605_ = lean_array_uget_borrowed(v_buckets_586_, v___x_604_);
lean_inc(v_bkt_605_);
lean_inc_ref(v_inst_580_);
v___x_606_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_580_, v_a_583_, v_bkt_605_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v_size_x27_608_; lean_object* v___x_609_; lean_object* v_buckets_x27_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
lean_dec_ref(v_inst_580_);
v___x_607_ = lean_unsigned_to_nat(1u);
v_size_x27_608_ = lean_nat_add(v_size_585_, v___x_607_);
lean_dec(v_size_585_);
lean_inc(v_bkt_605_);
v___x_609_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_609_, 0, v_a_583_);
lean_ctor_set(v___x_609_, 1, v_b_584_);
lean_ctor_set(v___x_609_, 2, v_bkt_605_);
v_buckets_x27_610_ = lean_array_uset(v_buckets_586_, v___x_604_, v___x_609_);
v___x_611_ = lean_unsigned_to_nat(4u);
v___x_612_ = lean_nat_mul(v_size_x27_608_, v___x_611_);
v___x_613_ = lean_unsigned_to_nat(3u);
v___x_614_ = lean_nat_div(v___x_612_, v___x_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_array_get_size(v_buckets_x27_610_);
v___x_616_ = lean_nat_dec_le(v___x_614_, v___x_615_);
lean_dec(v___x_614_);
if (v___x_616_ == 0)
{
lean_object* v_val_617_; lean_object* v___x_619_; 
v_val_617_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_581_, v_buckets_x27_610_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 1, v_val_617_);
lean_ctor_set(v___x_588_, 0, v_size_x27_608_);
v___x_619_ = v___x_588_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_size_x27_608_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v_val_617_);
v___x_619_ = v_reuseFailAlloc_622_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = lean_box(v___x_606_);
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
lean_ctor_set(v___x_621_, 1, v___x_619_);
return v___x_621_;
}
}
else
{
lean_object* v___x_624_; 
lean_dec_ref(v_inst_581_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 1, v_buckets_x27_610_);
lean_ctor_set(v___x_588_, 0, v_size_x27_608_);
v___x_624_ = v___x_588_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_size_x27_608_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_buckets_x27_610_);
v___x_624_ = v_reuseFailAlloc_627_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_box(v___x_606_);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
return v___x_626_;
}
}
}
else
{
lean_object* v___x_628_; lean_object* v_buckets_x27_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
lean_inc(v_bkt_605_);
lean_dec_ref(v_inst_581_);
v___x_628_ = lean_box(0);
v_buckets_x27_629_ = lean_array_uset(v_buckets_586_, v___x_604_, v___x_628_);
v___x_630_ = l_Std_DHashMap_Internal_AssocList_replace___redArg(v_inst_580_, v_a_583_, v_b_584_, v_bkt_605_);
v___x_631_ = lean_array_uset(v_buckets_x27_629_, v___x_604_, v___x_630_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 1, v___x_631_);
v___x_633_ = v___x_588_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_size_585_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v___x_631_);
v___x_633_ = v_reuseFailAlloc_636_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = lean_box(v___x_606_);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
lean_ctor_set(v___x_635_, 1, v___x_633_);
return v___x_635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_containsThenInsert(lean_object* v_00_u03b1_638_, lean_object* v_00_u03b2_639_, lean_object* v_inst_640_, lean_object* v_inst_641_, lean_object* v_m_642_, lean_object* v_a_643_, lean_object* v_b_644_){
_start:
{
lean_object* v_size_645_; lean_object* v_buckets_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_697_; 
v_size_645_ = lean_ctor_get(v_m_642_, 0);
v_buckets_646_ = lean_ctor_get(v_m_642_, 1);
v_isSharedCheck_697_ = !lean_is_exclusive(v_m_642_);
if (v_isSharedCheck_697_ == 0)
{
v___x_648_ = v_m_642_;
v_isShared_649_ = v_isSharedCheck_697_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_buckets_646_);
lean_inc(v_size_645_);
lean_dec(v_m_642_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_697_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_650_; lean_object* v___x_651_; uint64_t v___x_652_; uint64_t v___x_653_; uint64_t v___x_654_; uint64_t v___x_655_; uint64_t v_fold_656_; uint64_t v___x_657_; uint64_t v___x_658_; uint64_t v___x_659_; size_t v___x_660_; size_t v___x_661_; size_t v___x_662_; size_t v___x_663_; size_t v___x_664_; lean_object* v_bkt_665_; uint8_t v___x_666_; 
v___x_650_ = lean_array_get_size(v_buckets_646_);
lean_inc_ref(v_inst_641_);
lean_inc_n(v_a_643_, 2);
v___x_651_ = lean_apply_1(v_inst_641_, v_a_643_);
v___x_652_ = 32ULL;
v___x_653_ = lean_unbox_uint64(v___x_651_);
v___x_654_ = lean_uint64_shift_right(v___x_653_, v___x_652_);
v___x_655_ = lean_unbox_uint64(v___x_651_);
lean_dec_ref(v___x_651_);
v_fold_656_ = lean_uint64_xor(v___x_655_, v___x_654_);
v___x_657_ = 16ULL;
v___x_658_ = lean_uint64_shift_right(v_fold_656_, v___x_657_);
v___x_659_ = lean_uint64_xor(v_fold_656_, v___x_658_);
v___x_660_ = lean_uint64_to_usize(v___x_659_);
v___x_661_ = lean_usize_of_nat(v___x_650_);
v___x_662_ = ((size_t)1ULL);
v___x_663_ = lean_usize_sub(v___x_661_, v___x_662_);
v___x_664_ = lean_usize_land(v___x_660_, v___x_663_);
v_bkt_665_ = lean_array_uget_borrowed(v_buckets_646_, v___x_664_);
lean_inc(v_bkt_665_);
lean_inc_ref(v_inst_640_);
v___x_666_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_640_, v_a_643_, v_bkt_665_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v_size_x27_668_; lean_object* v___x_669_; lean_object* v_buckets_x27_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; uint8_t v___x_676_; 
lean_dec_ref(v_inst_640_);
v___x_667_ = lean_unsigned_to_nat(1u);
v_size_x27_668_ = lean_nat_add(v_size_645_, v___x_667_);
lean_dec(v_size_645_);
lean_inc(v_bkt_665_);
v___x_669_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_669_, 0, v_a_643_);
lean_ctor_set(v___x_669_, 1, v_b_644_);
lean_ctor_set(v___x_669_, 2, v_bkt_665_);
v_buckets_x27_670_ = lean_array_uset(v_buckets_646_, v___x_664_, v___x_669_);
v___x_671_ = lean_unsigned_to_nat(4u);
v___x_672_ = lean_nat_mul(v_size_x27_668_, v___x_671_);
v___x_673_ = lean_unsigned_to_nat(3u);
v___x_674_ = lean_nat_div(v___x_672_, v___x_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_array_get_size(v_buckets_x27_670_);
v___x_676_ = lean_nat_dec_le(v___x_674_, v___x_675_);
lean_dec(v___x_674_);
if (v___x_676_ == 0)
{
lean_object* v_val_677_; lean_object* v___x_679_; 
v_val_677_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_641_, v_buckets_x27_670_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 1, v_val_677_);
lean_ctor_set(v___x_648_, 0, v_size_x27_668_);
v___x_679_ = v___x_648_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_size_x27_668_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v_val_677_);
v___x_679_ = v_reuseFailAlloc_682_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = lean_box(v___x_666_);
v___x_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v___x_679_);
return v___x_681_;
}
}
else
{
lean_object* v___x_684_; 
lean_dec_ref(v_inst_641_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 1, v_buckets_x27_670_);
lean_ctor_set(v___x_648_, 0, v_size_x27_668_);
v___x_684_ = v___x_648_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_size_x27_668_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v_buckets_x27_670_);
v___x_684_ = v_reuseFailAlloc_687_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = lean_box(v___x_666_);
v___x_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
lean_ctor_set(v___x_686_, 1, v___x_684_);
return v___x_686_;
}
}
}
else
{
lean_object* v___x_688_; lean_object* v_buckets_x27_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_693_; 
lean_inc(v_bkt_665_);
lean_dec_ref(v_inst_641_);
v___x_688_ = lean_box(0);
v_buckets_x27_689_ = lean_array_uset(v_buckets_646_, v___x_664_, v___x_688_);
v___x_690_ = l_Std_DHashMap_Internal_AssocList_replace___redArg(v_inst_640_, v_a_643_, v_b_644_, v_bkt_665_);
v___x_691_ = lean_array_uset(v_buckets_x27_689_, v___x_664_, v___x_690_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 1, v___x_691_);
v___x_693_ = v___x_648_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_size_645_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v___x_691_);
v___x_693_ = v_reuseFailAlloc_696_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_box(v___x_666_);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
lean_ctor_set(v___x_695_, 1, v___x_693_);
return v___x_695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_containsThenInsertIfNew___redArg(lean_object* v_inst_698_, lean_object* v_inst_699_, lean_object* v_m_700_, lean_object* v_a_701_, lean_object* v_b_702_){
_start:
{
lean_object* v_size_703_; lean_object* v_buckets_704_; lean_object* v___x_705_; lean_object* v___x_706_; uint64_t v___x_707_; uint64_t v___x_708_; uint64_t v___x_709_; uint64_t v___x_710_; uint64_t v_fold_711_; uint64_t v___x_712_; uint64_t v___x_713_; uint64_t v___x_714_; size_t v___x_715_; size_t v___x_716_; size_t v___x_717_; size_t v___x_718_; size_t v___x_719_; lean_object* v_bkt_720_; uint8_t v___x_721_; 
v_size_703_ = lean_ctor_get(v_m_700_, 0);
v_buckets_704_ = lean_ctor_get(v_m_700_, 1);
v___x_705_ = lean_array_get_size(v_buckets_704_);
lean_inc_ref(v_inst_699_);
lean_inc_n(v_a_701_, 2);
v___x_706_ = lean_apply_1(v_inst_699_, v_a_701_);
v___x_707_ = 32ULL;
v___x_708_ = lean_unbox_uint64(v___x_706_);
v___x_709_ = lean_uint64_shift_right(v___x_708_, v___x_707_);
v___x_710_ = lean_unbox_uint64(v___x_706_);
lean_dec_ref(v___x_706_);
v_fold_711_ = lean_uint64_xor(v___x_710_, v___x_709_);
v___x_712_ = 16ULL;
v___x_713_ = lean_uint64_shift_right(v_fold_711_, v___x_712_);
v___x_714_ = lean_uint64_xor(v_fold_711_, v___x_713_);
v___x_715_ = lean_uint64_to_usize(v___x_714_);
v___x_716_ = lean_usize_of_nat(v___x_705_);
v___x_717_ = ((size_t)1ULL);
v___x_718_ = lean_usize_sub(v___x_716_, v___x_717_);
v___x_719_ = lean_usize_land(v___x_715_, v___x_718_);
v_bkt_720_ = lean_array_uget_borrowed(v_buckets_704_, v___x_719_);
lean_inc(v_bkt_720_);
v___x_721_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_698_, v_a_701_, v_bkt_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_746_; 
lean_inc_ref(v_buckets_704_);
lean_inc(v_size_703_);
v_isSharedCheck_746_ = !lean_is_exclusive(v_m_700_);
if (v_isSharedCheck_746_ == 0)
{
lean_object* v_unused_747_; lean_object* v_unused_748_; 
v_unused_747_ = lean_ctor_get(v_m_700_, 1);
lean_dec(v_unused_747_);
v_unused_748_ = lean_ctor_get(v_m_700_, 0);
lean_dec(v_unused_748_);
v___x_723_ = v_m_700_;
v_isShared_724_ = v_isSharedCheck_746_;
goto v_resetjp_722_;
}
else
{
lean_dec(v_m_700_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_746_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_725_; lean_object* v_size_x27_726_; lean_object* v___x_727_; lean_object* v_buckets_x27_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; uint8_t v___x_734_; 
v___x_725_ = lean_unsigned_to_nat(1u);
v_size_x27_726_ = lean_nat_add(v_size_703_, v___x_725_);
lean_dec(v_size_703_);
lean_inc(v_bkt_720_);
v___x_727_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_727_, 0, v_a_701_);
lean_ctor_set(v___x_727_, 1, v_b_702_);
lean_ctor_set(v___x_727_, 2, v_bkt_720_);
v_buckets_x27_728_ = lean_array_uset(v_buckets_704_, v___x_719_, v___x_727_);
v___x_729_ = lean_unsigned_to_nat(4u);
v___x_730_ = lean_nat_mul(v_size_x27_726_, v___x_729_);
v___x_731_ = lean_unsigned_to_nat(3u);
v___x_732_ = lean_nat_div(v___x_730_, v___x_731_);
lean_dec(v___x_730_);
v___x_733_ = lean_array_get_size(v_buckets_x27_728_);
v___x_734_ = lean_nat_dec_le(v___x_732_, v___x_733_);
lean_dec(v___x_732_);
if (v___x_734_ == 0)
{
lean_object* v_val_735_; lean_object* v___x_737_; 
v_val_735_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_699_, v_buckets_x27_728_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 1, v_val_735_);
lean_ctor_set(v___x_723_, 0, v_size_x27_726_);
v___x_737_ = v___x_723_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_size_x27_726_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v_val_735_);
v___x_737_ = v_reuseFailAlloc_740_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = lean_box(v___x_721_);
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
lean_ctor_set(v___x_739_, 1, v___x_737_);
return v___x_739_;
}
}
else
{
lean_object* v___x_742_; 
lean_dec_ref(v_inst_699_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 1, v_buckets_x27_728_);
lean_ctor_set(v___x_723_, 0, v_size_x27_726_);
v___x_742_ = v___x_723_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_size_x27_726_);
lean_ctor_set(v_reuseFailAlloc_745_, 1, v_buckets_x27_728_);
v___x_742_ = v_reuseFailAlloc_745_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_743_ = lean_box(v___x_721_);
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_743_);
lean_ctor_set(v___x_744_, 1, v___x_742_);
return v___x_744_;
}
}
}
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; 
lean_dec(v_b_702_);
lean_dec(v_a_701_);
lean_dec_ref(v_inst_699_);
v___x_749_ = lean_box(v___x_721_);
v___x_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
lean_ctor_set(v___x_750_, 1, v_m_700_);
return v___x_750_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_containsThenInsertIfNew(lean_object* v_00_u03b1_751_, lean_object* v_00_u03b2_752_, lean_object* v_inst_753_, lean_object* v_inst_754_, lean_object* v_m_755_, lean_object* v_a_756_, lean_object* v_b_757_){
_start:
{
lean_object* v_size_758_; lean_object* v_buckets_759_; lean_object* v___x_760_; lean_object* v___x_761_; uint64_t v___x_762_; uint64_t v___x_763_; uint64_t v___x_764_; uint64_t v___x_765_; uint64_t v_fold_766_; uint64_t v___x_767_; uint64_t v___x_768_; uint64_t v___x_769_; size_t v___x_770_; size_t v___x_771_; size_t v___x_772_; size_t v___x_773_; size_t v___x_774_; lean_object* v_bkt_775_; uint8_t v___x_776_; 
v_size_758_ = lean_ctor_get(v_m_755_, 0);
v_buckets_759_ = lean_ctor_get(v_m_755_, 1);
v___x_760_ = lean_array_get_size(v_buckets_759_);
lean_inc_ref(v_inst_754_);
lean_inc_n(v_a_756_, 2);
v___x_761_ = lean_apply_1(v_inst_754_, v_a_756_);
v___x_762_ = 32ULL;
v___x_763_ = lean_unbox_uint64(v___x_761_);
v___x_764_ = lean_uint64_shift_right(v___x_763_, v___x_762_);
v___x_765_ = lean_unbox_uint64(v___x_761_);
lean_dec_ref(v___x_761_);
v_fold_766_ = lean_uint64_xor(v___x_765_, v___x_764_);
v___x_767_ = 16ULL;
v___x_768_ = lean_uint64_shift_right(v_fold_766_, v___x_767_);
v___x_769_ = lean_uint64_xor(v_fold_766_, v___x_768_);
v___x_770_ = lean_uint64_to_usize(v___x_769_);
v___x_771_ = lean_usize_of_nat(v___x_760_);
v___x_772_ = ((size_t)1ULL);
v___x_773_ = lean_usize_sub(v___x_771_, v___x_772_);
v___x_774_ = lean_usize_land(v___x_770_, v___x_773_);
v_bkt_775_ = lean_array_uget_borrowed(v_buckets_759_, v___x_774_);
lean_inc(v_bkt_775_);
v___x_776_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_753_, v_a_756_, v_bkt_775_);
if (v___x_776_ == 0)
{
lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_801_; 
lean_inc_ref(v_buckets_759_);
lean_inc(v_size_758_);
v_isSharedCheck_801_ = !lean_is_exclusive(v_m_755_);
if (v_isSharedCheck_801_ == 0)
{
lean_object* v_unused_802_; lean_object* v_unused_803_; 
v_unused_802_ = lean_ctor_get(v_m_755_, 1);
lean_dec(v_unused_802_);
v_unused_803_ = lean_ctor_get(v_m_755_, 0);
lean_dec(v_unused_803_);
v___x_778_ = v_m_755_;
v_isShared_779_ = v_isSharedCheck_801_;
goto v_resetjp_777_;
}
else
{
lean_dec(v_m_755_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_801_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_780_; lean_object* v_size_x27_781_; lean_object* v___x_782_; lean_object* v_buckets_x27_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_780_ = lean_unsigned_to_nat(1u);
v_size_x27_781_ = lean_nat_add(v_size_758_, v___x_780_);
lean_dec(v_size_758_);
lean_inc(v_bkt_775_);
v___x_782_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_782_, 0, v_a_756_);
lean_ctor_set(v___x_782_, 1, v_b_757_);
lean_ctor_set(v___x_782_, 2, v_bkt_775_);
v_buckets_x27_783_ = lean_array_uset(v_buckets_759_, v___x_774_, v___x_782_);
v___x_784_ = lean_unsigned_to_nat(4u);
v___x_785_ = lean_nat_mul(v_size_x27_781_, v___x_784_);
v___x_786_ = lean_unsigned_to_nat(3u);
v___x_787_ = lean_nat_div(v___x_785_, v___x_786_);
lean_dec(v___x_785_);
v___x_788_ = lean_array_get_size(v_buckets_x27_783_);
v___x_789_ = lean_nat_dec_le(v___x_787_, v___x_788_);
lean_dec(v___x_787_);
if (v___x_789_ == 0)
{
lean_object* v_val_790_; lean_object* v___x_792_; 
v_val_790_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_754_, v_buckets_x27_783_);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 1, v_val_790_);
lean_ctor_set(v___x_778_, 0, v_size_x27_781_);
v___x_792_ = v___x_778_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_size_x27_781_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_val_790_);
v___x_792_ = v_reuseFailAlloc_795_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = lean_box(v___x_776_);
v___x_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
lean_ctor_set(v___x_794_, 1, v___x_792_);
return v___x_794_;
}
}
else
{
lean_object* v___x_797_; 
lean_dec_ref(v_inst_754_);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 1, v_buckets_x27_783_);
lean_ctor_set(v___x_778_, 0, v_size_x27_781_);
v___x_797_ = v___x_778_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_size_x27_781_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v_buckets_x27_783_);
v___x_797_ = v_reuseFailAlloc_800_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_798_ = lean_box(v___x_776_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
lean_ctor_set(v___x_799_, 1, v___x_797_);
return v___x_799_;
}
}
}
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; 
lean_dec(v_b_757_);
lean_dec(v_a_756_);
lean_dec_ref(v_inst_754_);
v___x_804_ = lean_box(v___x_776_);
v___x_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
lean_ctor_set(v___x_805_, 1, v_m_755_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object* v_inst_806_, lean_object* v_inst_807_, lean_object* v_m_808_, lean_object* v_a_809_, lean_object* v_b_810_){
_start:
{
lean_object* v_size_811_; lean_object* v_buckets_812_; lean_object* v___x_813_; lean_object* v___x_814_; uint64_t v___x_815_; uint64_t v___x_816_; uint64_t v___x_817_; uint64_t v___x_818_; uint64_t v_fold_819_; uint64_t v___x_820_; uint64_t v___x_821_; uint64_t v___x_822_; size_t v___x_823_; size_t v___x_824_; size_t v___x_825_; size_t v___x_826_; size_t v___x_827_; lean_object* v_bkt_828_; uint8_t v___x_829_; 
v_size_811_ = lean_ctor_get(v_m_808_, 0);
v_buckets_812_ = lean_ctor_get(v_m_808_, 1);
v___x_813_ = lean_array_get_size(v_buckets_812_);
lean_inc_ref(v_inst_807_);
lean_inc_n(v_a_809_, 2);
v___x_814_ = lean_apply_1(v_inst_807_, v_a_809_);
v___x_815_ = 32ULL;
v___x_816_ = lean_unbox_uint64(v___x_814_);
v___x_817_ = lean_uint64_shift_right(v___x_816_, v___x_815_);
v___x_818_ = lean_unbox_uint64(v___x_814_);
lean_dec_ref(v___x_814_);
v_fold_819_ = lean_uint64_xor(v___x_818_, v___x_817_);
v___x_820_ = 16ULL;
v___x_821_ = lean_uint64_shift_right(v_fold_819_, v___x_820_);
v___x_822_ = lean_uint64_xor(v_fold_819_, v___x_821_);
v___x_823_ = lean_uint64_to_usize(v___x_822_);
v___x_824_ = lean_usize_of_nat(v___x_813_);
v___x_825_ = ((size_t)1ULL);
v___x_826_ = lean_usize_sub(v___x_824_, v___x_825_);
v___x_827_ = lean_usize_land(v___x_823_, v___x_826_);
v_bkt_828_ = lean_array_uget_borrowed(v_buckets_812_, v___x_827_);
lean_inc(v_bkt_828_);
v___x_829_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_806_, v_a_809_, v_bkt_828_);
if (v___x_829_ == 0)
{
lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_850_; 
lean_inc_ref(v_buckets_812_);
lean_inc(v_size_811_);
v_isSharedCheck_850_ = !lean_is_exclusive(v_m_808_);
if (v_isSharedCheck_850_ == 0)
{
lean_object* v_unused_851_; lean_object* v_unused_852_; 
v_unused_851_ = lean_ctor_get(v_m_808_, 1);
lean_dec(v_unused_851_);
v_unused_852_ = lean_ctor_get(v_m_808_, 0);
lean_dec(v_unused_852_);
v___x_831_ = v_m_808_;
v_isShared_832_ = v_isSharedCheck_850_;
goto v_resetjp_830_;
}
else
{
lean_dec(v_m_808_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_850_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_833_; lean_object* v_size_x27_834_; lean_object* v___x_835_; lean_object* v_buckets_x27_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; uint8_t v___x_842_; 
v___x_833_ = lean_unsigned_to_nat(1u);
v_size_x27_834_ = lean_nat_add(v_size_811_, v___x_833_);
lean_dec(v_size_811_);
lean_inc(v_bkt_828_);
v___x_835_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_835_, 0, v_a_809_);
lean_ctor_set(v___x_835_, 1, v_b_810_);
lean_ctor_set(v___x_835_, 2, v_bkt_828_);
v_buckets_x27_836_ = lean_array_uset(v_buckets_812_, v___x_827_, v___x_835_);
v___x_837_ = lean_unsigned_to_nat(4u);
v___x_838_ = lean_nat_mul(v_size_x27_834_, v___x_837_);
v___x_839_ = lean_unsigned_to_nat(3u);
v___x_840_ = lean_nat_div(v___x_838_, v___x_839_);
lean_dec(v___x_838_);
v___x_841_ = lean_array_get_size(v_buckets_x27_836_);
v___x_842_ = lean_nat_dec_le(v___x_840_, v___x_841_);
lean_dec(v___x_840_);
if (v___x_842_ == 0)
{
lean_object* v_val_843_; lean_object* v___x_845_; 
v_val_843_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_807_, v_buckets_x27_836_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 1, v_val_843_);
lean_ctor_set(v___x_831_, 0, v_size_x27_834_);
v___x_845_ = v___x_831_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_size_x27_834_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v_val_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
else
{
lean_object* v___x_848_; 
lean_dec_ref(v_inst_807_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 1, v_buckets_x27_836_);
lean_ctor_set(v___x_831_, 0, v_size_x27_834_);
v___x_848_ = v___x_831_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_size_x27_834_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_buckets_x27_836_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
}
else
{
lean_dec(v_b_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_inst_807_);
return v_m_808_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew(lean_object* v_00_u03b1_853_, lean_object* v_00_u03b2_854_, lean_object* v_inst_855_, lean_object* v_inst_856_, lean_object* v_m_857_, lean_object* v_a_858_, lean_object* v_b_859_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v_inst_855_, v_inst_856_, v_m_857_, v_a_858_, v_b_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getThenInsertIfNew_x3f___redArg(lean_object* v_inst_861_, lean_object* v_inst_862_, lean_object* v_m_863_, lean_object* v_a_864_, lean_object* v_b_865_){
_start:
{
lean_object* v_size_866_; lean_object* v_buckets_867_; lean_object* v___x_868_; lean_object* v___x_869_; uint64_t v___x_870_; uint64_t v___x_871_; uint64_t v___x_872_; uint64_t v___x_873_; uint64_t v_fold_874_; uint64_t v___x_875_; uint64_t v___x_876_; uint64_t v___x_877_; size_t v___x_878_; size_t v___x_879_; size_t v___x_880_; size_t v___x_881_; size_t v___x_882_; lean_object* v_bkt_883_; lean_object* v___x_884_; 
v_size_866_ = lean_ctor_get(v_m_863_, 0);
v_buckets_867_ = lean_ctor_get(v_m_863_, 1);
v___x_868_ = lean_array_get_size(v_buckets_867_);
lean_inc_ref(v_inst_862_);
lean_inc_n(v_a_864_, 2);
v___x_869_ = lean_apply_1(v_inst_862_, v_a_864_);
v___x_870_ = 32ULL;
v___x_871_ = lean_unbox_uint64(v___x_869_);
v___x_872_ = lean_uint64_shift_right(v___x_871_, v___x_870_);
v___x_873_ = lean_unbox_uint64(v___x_869_);
lean_dec_ref(v___x_869_);
v_fold_874_ = lean_uint64_xor(v___x_873_, v___x_872_);
v___x_875_ = 16ULL;
v___x_876_ = lean_uint64_shift_right(v_fold_874_, v___x_875_);
v___x_877_ = lean_uint64_xor(v_fold_874_, v___x_876_);
v___x_878_ = lean_uint64_to_usize(v___x_877_);
v___x_879_ = lean_usize_of_nat(v___x_868_);
v___x_880_ = ((size_t)1ULL);
v___x_881_ = lean_usize_sub(v___x_879_, v___x_880_);
v___x_882_ = lean_usize_land(v___x_878_, v___x_881_);
v_bkt_883_ = lean_array_uget_borrowed(v_buckets_867_, v___x_882_);
lean_inc(v_bkt_883_);
v___x_884_ = l_Std_DHashMap_Internal_AssocList_getCast_x3f___redArg(v_inst_861_, v_a_864_, v_bkt_883_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_907_; 
lean_inc_ref(v_buckets_867_);
lean_inc(v_size_866_);
v_isSharedCheck_907_ = !lean_is_exclusive(v_m_863_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; lean_object* v_unused_909_; 
v_unused_908_ = lean_ctor_get(v_m_863_, 1);
lean_dec(v_unused_908_);
v_unused_909_ = lean_ctor_get(v_m_863_, 0);
lean_dec(v_unused_909_);
v___x_886_ = v_m_863_;
v_isShared_887_ = v_isSharedCheck_907_;
goto v_resetjp_885_;
}
else
{
lean_dec(v_m_863_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_907_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_888_; lean_object* v_size_x27_889_; lean_object* v___x_890_; lean_object* v_buckets_x27_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; uint8_t v___x_897_; 
v___x_888_ = lean_unsigned_to_nat(1u);
v_size_x27_889_ = lean_nat_add(v_size_866_, v___x_888_);
lean_dec(v_size_866_);
lean_inc(v_bkt_883_);
v___x_890_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_890_, 0, v_a_864_);
lean_ctor_set(v___x_890_, 1, v_b_865_);
lean_ctor_set(v___x_890_, 2, v_bkt_883_);
v_buckets_x27_891_ = lean_array_uset(v_buckets_867_, v___x_882_, v___x_890_);
v___x_892_ = lean_unsigned_to_nat(4u);
v___x_893_ = lean_nat_mul(v_size_x27_889_, v___x_892_);
v___x_894_ = lean_unsigned_to_nat(3u);
v___x_895_ = lean_nat_div(v___x_893_, v___x_894_);
lean_dec(v___x_893_);
v___x_896_ = lean_array_get_size(v_buckets_x27_891_);
v___x_897_ = lean_nat_dec_le(v___x_895_, v___x_896_);
lean_dec(v___x_895_);
if (v___x_897_ == 0)
{
lean_object* v_val_898_; lean_object* v___x_900_; 
v_val_898_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_862_, v_buckets_x27_891_);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 1, v_val_898_);
lean_ctor_set(v___x_886_, 0, v_size_x27_889_);
v___x_900_ = v___x_886_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_size_x27_889_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v_val_898_);
v___x_900_ = v_reuseFailAlloc_902_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
lean_object* v___x_901_; 
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_884_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
return v___x_901_;
}
}
else
{
lean_object* v___x_904_; 
lean_dec_ref(v_inst_862_);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 1, v_buckets_x27_891_);
lean_ctor_set(v___x_886_, 0, v_size_x27_889_);
v___x_904_ = v___x_886_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_size_x27_889_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_buckets_x27_891_);
v___x_904_ = v_reuseFailAlloc_906_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
lean_object* v___x_905_; 
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_884_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
return v___x_905_;
}
}
}
}
else
{
lean_object* v___x_910_; 
lean_dec(v_b_865_);
lean_dec(v_a_864_);
lean_dec_ref(v_inst_862_);
v___x_910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_884_);
lean_ctor_set(v___x_910_, 1, v_m_863_);
return v___x_910_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getThenInsertIfNew_x3f(lean_object* v_00_u03b1_911_, lean_object* v_00_u03b2_912_, lean_object* v_inst_913_, lean_object* v_inst_914_, lean_object* v_inst_915_, lean_object* v_m_916_, lean_object* v_a_917_, lean_object* v_b_918_){
_start:
{
lean_object* v_size_919_; lean_object* v_buckets_920_; lean_object* v___x_921_; lean_object* v___x_922_; uint64_t v___x_923_; uint64_t v___x_924_; uint64_t v___x_925_; uint64_t v___x_926_; uint64_t v_fold_927_; uint64_t v___x_928_; uint64_t v___x_929_; uint64_t v___x_930_; size_t v___x_931_; size_t v___x_932_; size_t v___x_933_; size_t v___x_934_; size_t v___x_935_; lean_object* v_bkt_936_; lean_object* v___x_937_; 
v_size_919_ = lean_ctor_get(v_m_916_, 0);
v_buckets_920_ = lean_ctor_get(v_m_916_, 1);
v___x_921_ = lean_array_get_size(v_buckets_920_);
lean_inc_ref(v_inst_914_);
lean_inc_n(v_a_917_, 2);
v___x_922_ = lean_apply_1(v_inst_914_, v_a_917_);
v___x_923_ = 32ULL;
v___x_924_ = lean_unbox_uint64(v___x_922_);
v___x_925_ = lean_uint64_shift_right(v___x_924_, v___x_923_);
v___x_926_ = lean_unbox_uint64(v___x_922_);
lean_dec_ref(v___x_922_);
v_fold_927_ = lean_uint64_xor(v___x_926_, v___x_925_);
v___x_928_ = 16ULL;
v___x_929_ = lean_uint64_shift_right(v_fold_927_, v___x_928_);
v___x_930_ = lean_uint64_xor(v_fold_927_, v___x_929_);
v___x_931_ = lean_uint64_to_usize(v___x_930_);
v___x_932_ = lean_usize_of_nat(v___x_921_);
v___x_933_ = ((size_t)1ULL);
v___x_934_ = lean_usize_sub(v___x_932_, v___x_933_);
v___x_935_ = lean_usize_land(v___x_931_, v___x_934_);
v_bkt_936_ = lean_array_uget_borrowed(v_buckets_920_, v___x_935_);
lean_inc(v_bkt_936_);
v___x_937_ = l_Std_DHashMap_Internal_AssocList_getCast_x3f___redArg(v_inst_913_, v_a_917_, v_bkt_936_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_960_; 
lean_inc_ref(v_buckets_920_);
lean_inc(v_size_919_);
v_isSharedCheck_960_ = !lean_is_exclusive(v_m_916_);
if (v_isSharedCheck_960_ == 0)
{
lean_object* v_unused_961_; lean_object* v_unused_962_; 
v_unused_961_ = lean_ctor_get(v_m_916_, 1);
lean_dec(v_unused_961_);
v_unused_962_ = lean_ctor_get(v_m_916_, 0);
lean_dec(v_unused_962_);
v___x_939_ = v_m_916_;
v_isShared_940_ = v_isSharedCheck_960_;
goto v_resetjp_938_;
}
else
{
lean_dec(v_m_916_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_960_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_941_; lean_object* v_size_x27_942_; lean_object* v___x_943_; lean_object* v_buckets_x27_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_941_ = lean_unsigned_to_nat(1u);
v_size_x27_942_ = lean_nat_add(v_size_919_, v___x_941_);
lean_dec(v_size_919_);
lean_inc(v_bkt_936_);
v___x_943_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_943_, 0, v_a_917_);
lean_ctor_set(v___x_943_, 1, v_b_918_);
lean_ctor_set(v___x_943_, 2, v_bkt_936_);
v_buckets_x27_944_ = lean_array_uset(v_buckets_920_, v___x_935_, v___x_943_);
v___x_945_ = lean_unsigned_to_nat(4u);
v___x_946_ = lean_nat_mul(v_size_x27_942_, v___x_945_);
v___x_947_ = lean_unsigned_to_nat(3u);
v___x_948_ = lean_nat_div(v___x_946_, v___x_947_);
lean_dec(v___x_946_);
v___x_949_ = lean_array_get_size(v_buckets_x27_944_);
v___x_950_ = lean_nat_dec_le(v___x_948_, v___x_949_);
lean_dec(v___x_948_);
if (v___x_950_ == 0)
{
lean_object* v_val_951_; lean_object* v___x_953_; 
v_val_951_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_914_, v_buckets_x27_944_);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v_val_951_);
lean_ctor_set(v___x_939_, 0, v_size_x27_942_);
v___x_953_ = v___x_939_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_size_x27_942_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v_val_951_);
v___x_953_ = v_reuseFailAlloc_955_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
lean_object* v___x_954_; 
v___x_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_937_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
return v___x_954_;
}
}
else
{
lean_object* v___x_957_; 
lean_dec_ref(v_inst_914_);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v_buckets_x27_944_);
lean_ctor_set(v___x_939_, 0, v_size_x27_942_);
v___x_957_ = v___x_939_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_size_x27_942_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_buckets_x27_944_);
v___x_957_ = v_reuseFailAlloc_959_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
lean_object* v___x_958_; 
v___x_958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_937_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
return v___x_958_;
}
}
}
}
else
{
lean_object* v___x_963_; 
lean_dec(v_b_918_);
lean_dec(v_a_917_);
lean_dec_ref(v_inst_914_);
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_937_);
lean_ctor_set(v___x_963_, 1, v_m_916_);
return v___x_963_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f___redArg(lean_object* v_inst_964_, lean_object* v_inst_965_, lean_object* v_m_966_, lean_object* v_a_967_){
_start:
{
lean_object* v_buckets_968_; lean_object* v___x_969_; lean_object* v___x_970_; uint64_t v___x_971_; uint64_t v___x_972_; uint64_t v___x_973_; uint64_t v___x_974_; uint64_t v_fold_975_; uint64_t v___x_976_; uint64_t v___x_977_; uint64_t v___x_978_; size_t v___x_979_; size_t v___x_980_; size_t v___x_981_; size_t v___x_982_; size_t v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v_buckets_968_ = lean_ctor_get(v_m_966_, 1);
v___x_969_ = lean_array_get_size(v_buckets_968_);
lean_inc(v_a_967_);
v___x_970_ = lean_apply_1(v_inst_965_, v_a_967_);
v___x_971_ = 32ULL;
v___x_972_ = lean_unbox_uint64(v___x_970_);
v___x_973_ = lean_uint64_shift_right(v___x_972_, v___x_971_);
v___x_974_ = lean_unbox_uint64(v___x_970_);
lean_dec_ref(v___x_970_);
v_fold_975_ = lean_uint64_xor(v___x_974_, v___x_973_);
v___x_976_ = 16ULL;
v___x_977_ = lean_uint64_shift_right(v_fold_975_, v___x_976_);
v___x_978_ = lean_uint64_xor(v_fold_975_, v___x_977_);
v___x_979_ = lean_uint64_to_usize(v___x_978_);
v___x_980_ = lean_usize_of_nat(v___x_969_);
v___x_981_ = ((size_t)1ULL);
v___x_982_ = lean_usize_sub(v___x_980_, v___x_981_);
v___x_983_ = lean_usize_land(v___x_979_, v___x_982_);
v___x_984_ = lean_array_uget_borrowed(v_buckets_968_, v___x_983_);
lean_inc(v___x_984_);
v___x_985_ = l_Std_DHashMap_Internal_AssocList_getCast_x3f___redArg(v_inst_964_, v_a_967_, v___x_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f___redArg___boxed(lean_object* v_inst_986_, lean_object* v_inst_987_, lean_object* v_m_988_, lean_object* v_a_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Std_DHashMap_Internal_Raw_u2080_get_x3f___redArg(v_inst_986_, v_inst_987_, v_m_988_, v_a_989_);
lean_dec_ref(v_m_988_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f(lean_object* v_00_u03b1_991_, lean_object* v_00_u03b2_992_, lean_object* v_inst_993_, lean_object* v_inst_994_, lean_object* v_inst_995_, lean_object* v_m_996_, lean_object* v_a_997_){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l_Std_DHashMap_Internal_Raw_u2080_get_x3f___redArg(v_inst_993_, v_inst_995_, v_m_996_, v_a_997_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x3f___boxed(lean_object* v_00_u03b1_999_, lean_object* v_00_u03b2_1000_, lean_object* v_inst_1001_, lean_object* v_inst_1002_, lean_object* v_inst_1003_, lean_object* v_m_1004_, lean_object* v_a_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Std_DHashMap_Internal_Raw_u2080_get_x3f(v_00_u03b1_999_, v_00_u03b2_1000_, v_inst_1001_, v_inst_1002_, v_inst_1003_, v_m_1004_, v_a_1005_);
lean_dec_ref(v_m_1004_);
return v_res_1006_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object* v_inst_1007_, lean_object* v_inst_1008_, lean_object* v_m_1009_, lean_object* v_a_1010_){
_start:
{
lean_object* v_buckets_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; uint64_t v___x_1014_; uint64_t v___x_1015_; uint64_t v___x_1016_; uint64_t v___x_1017_; uint64_t v_fold_1018_; uint64_t v___x_1019_; uint64_t v___x_1020_; uint64_t v___x_1021_; size_t v___x_1022_; size_t v___x_1023_; size_t v___x_1024_; size_t v___x_1025_; size_t v___x_1026_; lean_object* v___x_1027_; uint8_t v___x_1028_; 
v_buckets_1011_ = lean_ctor_get(v_m_1009_, 1);
v___x_1012_ = lean_array_get_size(v_buckets_1011_);
lean_inc(v_a_1010_);
v___x_1013_ = lean_apply_1(v_inst_1008_, v_a_1010_);
v___x_1014_ = 32ULL;
v___x_1015_ = lean_unbox_uint64(v___x_1013_);
v___x_1016_ = lean_uint64_shift_right(v___x_1015_, v___x_1014_);
v___x_1017_ = lean_unbox_uint64(v___x_1013_);
lean_dec_ref(v___x_1013_);
v_fold_1018_ = lean_uint64_xor(v___x_1017_, v___x_1016_);
v___x_1019_ = 16ULL;
v___x_1020_ = lean_uint64_shift_right(v_fold_1018_, v___x_1019_);
v___x_1021_ = lean_uint64_xor(v_fold_1018_, v___x_1020_);
v___x_1022_ = lean_uint64_to_usize(v___x_1021_);
v___x_1023_ = lean_usize_of_nat(v___x_1012_);
v___x_1024_ = ((size_t)1ULL);
v___x_1025_ = lean_usize_sub(v___x_1023_, v___x_1024_);
v___x_1026_ = lean_usize_land(v___x_1022_, v___x_1025_);
v___x_1027_ = lean_array_uget_borrowed(v_buckets_1011_, v___x_1026_);
lean_inc(v___x_1027_);
v___x_1028_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_1007_, v_a_1010_, v___x_1027_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___redArg___boxed(lean_object* v_inst_1029_, lean_object* v_inst_1030_, lean_object* v_m_1031_, lean_object* v_a_1032_){
_start:
{
uint8_t v_res_1033_; lean_object* v_r_1034_; 
v_res_1033_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_1029_, v_inst_1030_, v_m_1031_, v_a_1032_);
lean_dec_ref(v_m_1031_);
v_r_1034_ = lean_box(v_res_1033_);
return v_r_1034_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains(lean_object* v_00_u03b1_1035_, lean_object* v_00_u03b2_1036_, lean_object* v_inst_1037_, lean_object* v_inst_1038_, lean_object* v_m_1039_, lean_object* v_a_1040_){
_start:
{
uint8_t v___x_1041_; 
v___x_1041_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_1037_, v_inst_1038_, v_m_1039_, v_a_1040_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___boxed(lean_object* v_00_u03b1_1042_, lean_object* v_00_u03b2_1043_, lean_object* v_inst_1044_, lean_object* v_inst_1045_, lean_object* v_m_1046_, lean_object* v_a_1047_){
_start:
{
uint8_t v_res_1048_; lean_object* v_r_1049_; 
v_res_1048_ = l_Std_DHashMap_Internal_Raw_u2080_contains(v_00_u03b1_1042_, v_00_u03b2_1043_, v_inst_1044_, v_inst_1045_, v_m_1046_, v_a_1047_);
lean_dec_ref(v_m_1046_);
v_r_1049_ = lean_box(v_res_1048_);
return v_r_1049_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get___redArg(lean_object* v_inst_1050_, lean_object* v_inst_1051_, lean_object* v_m_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v_buckets_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; uint64_t v___x_1057_; uint64_t v___x_1058_; uint64_t v___x_1059_; uint64_t v___x_1060_; uint64_t v_fold_1061_; uint64_t v___x_1062_; uint64_t v___x_1063_; uint64_t v___x_1064_; size_t v___x_1065_; size_t v___x_1066_; size_t v___x_1067_; size_t v___x_1068_; size_t v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v_buckets_1054_ = lean_ctor_get(v_m_1052_, 1);
v___x_1055_ = lean_array_get_size(v_buckets_1054_);
lean_inc(v_a_1053_);
v___x_1056_ = lean_apply_1(v_inst_1051_, v_a_1053_);
v___x_1057_ = 32ULL;
v___x_1058_ = lean_unbox_uint64(v___x_1056_);
v___x_1059_ = lean_uint64_shift_right(v___x_1058_, v___x_1057_);
v___x_1060_ = lean_unbox_uint64(v___x_1056_);
lean_dec_ref(v___x_1056_);
v_fold_1061_ = lean_uint64_xor(v___x_1060_, v___x_1059_);
v___x_1062_ = 16ULL;
v___x_1063_ = lean_uint64_shift_right(v_fold_1061_, v___x_1062_);
v___x_1064_ = lean_uint64_xor(v_fold_1061_, v___x_1063_);
v___x_1065_ = lean_uint64_to_usize(v___x_1064_);
v___x_1066_ = lean_usize_of_nat(v___x_1055_);
v___x_1067_ = ((size_t)1ULL);
v___x_1068_ = lean_usize_sub(v___x_1066_, v___x_1067_);
v___x_1069_ = lean_usize_land(v___x_1065_, v___x_1068_);
v___x_1070_ = lean_array_uget_borrowed(v_buckets_1054_, v___x_1069_);
lean_inc(v___x_1070_);
v___x_1071_ = l_Std_DHashMap_Internal_AssocList_getCast___redArg(v_inst_1050_, v_a_1053_, v___x_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get___redArg___boxed(lean_object* v_inst_1072_, lean_object* v_inst_1073_, lean_object* v_m_1074_, lean_object* v_a_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Std_DHashMap_Internal_Raw_u2080_get___redArg(v_inst_1072_, v_inst_1073_, v_m_1074_, v_a_1075_);
lean_dec_ref(v_m_1074_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get(lean_object* v_00_u03b1_1077_, lean_object* v_00_u03b2_1078_, lean_object* v_inst_1079_, lean_object* v_inst_1080_, lean_object* v_inst_1081_, lean_object* v_m_1082_, lean_object* v_a_1083_, lean_object* v_hma_1084_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Std_DHashMap_Internal_Raw_u2080_get___redArg(v_inst_1079_, v_inst_1081_, v_m_1082_, v_a_1083_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get___boxed(lean_object* v_00_u03b1_1086_, lean_object* v_00_u03b2_1087_, lean_object* v_inst_1088_, lean_object* v_inst_1089_, lean_object* v_inst_1090_, lean_object* v_m_1091_, lean_object* v_a_1092_, lean_object* v_hma_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Std_DHashMap_Internal_Raw_u2080_get(v_00_u03b1_1086_, v_00_u03b2_1087_, v_inst_1088_, v_inst_1089_, v_inst_1090_, v_m_1091_, v_a_1092_, v_hma_1093_);
lean_dec_ref(v_m_1091_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry___redArg(lean_object* v_inst_1095_, lean_object* v_inst_1096_, lean_object* v_m_1097_, lean_object* v_a_1098_){
_start:
{
lean_object* v_buckets_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; uint64_t v___x_1102_; uint64_t v___x_1103_; uint64_t v___x_1104_; uint64_t v___x_1105_; uint64_t v_fold_1106_; uint64_t v___x_1107_; uint64_t v___x_1108_; uint64_t v___x_1109_; size_t v___x_1110_; size_t v___x_1111_; size_t v___x_1112_; size_t v___x_1113_; size_t v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v_buckets_1099_ = lean_ctor_get(v_m_1097_, 1);
v___x_1100_ = lean_array_get_size(v_buckets_1099_);
lean_inc(v_a_1098_);
v___x_1101_ = lean_apply_1(v_inst_1096_, v_a_1098_);
v___x_1102_ = 32ULL;
v___x_1103_ = lean_unbox_uint64(v___x_1101_);
v___x_1104_ = lean_uint64_shift_right(v___x_1103_, v___x_1102_);
v___x_1105_ = lean_unbox_uint64(v___x_1101_);
lean_dec_ref(v___x_1101_);
v_fold_1106_ = lean_uint64_xor(v___x_1105_, v___x_1104_);
v___x_1107_ = 16ULL;
v___x_1108_ = lean_uint64_shift_right(v_fold_1106_, v___x_1107_);
v___x_1109_ = lean_uint64_xor(v_fold_1106_, v___x_1108_);
v___x_1110_ = lean_uint64_to_usize(v___x_1109_);
v___x_1111_ = lean_usize_of_nat(v___x_1100_);
v___x_1112_ = ((size_t)1ULL);
v___x_1113_ = lean_usize_sub(v___x_1111_, v___x_1112_);
v___x_1114_ = lean_usize_land(v___x_1110_, v___x_1113_);
v___x_1115_ = lean_array_uget_borrowed(v_buckets_1099_, v___x_1114_);
lean_inc(v___x_1115_);
v___x_1116_ = l_Std_DHashMap_Internal_AssocList_getEntry___redArg(v_inst_1095_, v_a_1098_, v___x_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry___redArg___boxed(lean_object* v_inst_1117_, lean_object* v_inst_1118_, lean_object* v_m_1119_, lean_object* v_a_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry___redArg(v_inst_1117_, v_inst_1118_, v_m_1119_, v_a_1120_);
lean_dec_ref(v_m_1119_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry(lean_object* v_00_u03b1_1122_, lean_object* v_00_u03b2_1123_, lean_object* v_inst_1124_, lean_object* v_inst_1125_, lean_object* v_m_1126_, lean_object* v_a_1127_, lean_object* v_hma_1128_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry___redArg(v_inst_1124_, v_inst_1125_, v_m_1126_, v_a_1127_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry___boxed(lean_object* v_00_u03b1_1130_, lean_object* v_00_u03b2_1131_, lean_object* v_inst_1132_, lean_object* v_inst_1133_, lean_object* v_m_1134_, lean_object* v_a_1135_, lean_object* v_hma_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry(v_00_u03b1_1130_, v_00_u03b2_1131_, v_inst_1132_, v_inst_1133_, v_m_1134_, v_a_1135_, v_hma_1136_);
lean_dec_ref(v_m_1134_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___redArg(lean_object* v_inst_1138_, lean_object* v_inst_1139_, lean_object* v_m_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_buckets_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; uint64_t v___x_1145_; uint64_t v___x_1146_; uint64_t v___x_1147_; uint64_t v___x_1148_; uint64_t v_fold_1149_; uint64_t v___x_1150_; uint64_t v___x_1151_; uint64_t v___x_1152_; size_t v___x_1153_; size_t v___x_1154_; size_t v___x_1155_; size_t v___x_1156_; size_t v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v_buckets_1142_ = lean_ctor_get(v_m_1140_, 1);
v___x_1143_ = lean_array_get_size(v_buckets_1142_);
lean_inc(v_a_1141_);
v___x_1144_ = lean_apply_1(v_inst_1139_, v_a_1141_);
v___x_1145_ = 32ULL;
v___x_1146_ = lean_unbox_uint64(v___x_1144_);
v___x_1147_ = lean_uint64_shift_right(v___x_1146_, v___x_1145_);
v___x_1148_ = lean_unbox_uint64(v___x_1144_);
lean_dec_ref(v___x_1144_);
v_fold_1149_ = lean_uint64_xor(v___x_1148_, v___x_1147_);
v___x_1150_ = 16ULL;
v___x_1151_ = lean_uint64_shift_right(v_fold_1149_, v___x_1150_);
v___x_1152_ = lean_uint64_xor(v_fold_1149_, v___x_1151_);
v___x_1153_ = lean_uint64_to_usize(v___x_1152_);
v___x_1154_ = lean_usize_of_nat(v___x_1143_);
v___x_1155_ = ((size_t)1ULL);
v___x_1156_ = lean_usize_sub(v___x_1154_, v___x_1155_);
v___x_1157_ = lean_usize_land(v___x_1153_, v___x_1156_);
v___x_1158_ = lean_array_uget_borrowed(v_buckets_1142_, v___x_1157_);
lean_inc(v___x_1158_);
v___x_1159_ = l_Std_DHashMap_Internal_AssocList_getEntry_x3f___redArg(v_inst_1138_, v_a_1141_, v___x_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___redArg___boxed(lean_object* v_inst_1160_, lean_object* v_inst_1161_, lean_object* v_m_1162_, lean_object* v_a_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___redArg(v_inst_1160_, v_inst_1161_, v_m_1162_, v_a_1163_);
lean_dec_ref(v_m_1162_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f(lean_object* v_00_u03b1_1165_, lean_object* v_00_u03b2_1166_, lean_object* v_inst_1167_, lean_object* v_inst_1168_, lean_object* v_m_1169_, lean_object* v_a_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___redArg(v_inst_1167_, v_inst_1168_, v_m_1169_, v_a_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___boxed(lean_object* v_00_u03b1_1172_, lean_object* v_00_u03b2_1173_, lean_object* v_inst_1174_, lean_object* v_inst_1175_, lean_object* v_m_1176_, lean_object* v_a_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f(v_00_u03b1_1172_, v_00_u03b2_1173_, v_inst_1174_, v_inst_1175_, v_m_1176_, v_a_1177_);
lean_dec_ref(v_m_1176_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD___redArg(lean_object* v_inst_1179_, lean_object* v_inst_1180_, lean_object* v_m_1181_, lean_object* v_a_1182_, lean_object* v_fallback_1183_){
_start:
{
lean_object* v_buckets_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; uint64_t v___x_1187_; uint64_t v___x_1188_; uint64_t v___x_1189_; uint64_t v___x_1190_; uint64_t v_fold_1191_; uint64_t v___x_1192_; uint64_t v___x_1193_; uint64_t v___x_1194_; size_t v___x_1195_; size_t v___x_1196_; size_t v___x_1197_; size_t v___x_1198_; size_t v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v_buckets_1184_ = lean_ctor_get(v_m_1181_, 1);
v___x_1185_ = lean_array_get_size(v_buckets_1184_);
lean_inc(v_a_1182_);
v___x_1186_ = lean_apply_1(v_inst_1180_, v_a_1182_);
v___x_1187_ = 32ULL;
v___x_1188_ = lean_unbox_uint64(v___x_1186_);
v___x_1189_ = lean_uint64_shift_right(v___x_1188_, v___x_1187_);
v___x_1190_ = lean_unbox_uint64(v___x_1186_);
lean_dec_ref(v___x_1186_);
v_fold_1191_ = lean_uint64_xor(v___x_1190_, v___x_1189_);
v___x_1192_ = 16ULL;
v___x_1193_ = lean_uint64_shift_right(v_fold_1191_, v___x_1192_);
v___x_1194_ = lean_uint64_xor(v_fold_1191_, v___x_1193_);
v___x_1195_ = lean_uint64_to_usize(v___x_1194_);
v___x_1196_ = lean_usize_of_nat(v___x_1185_);
v___x_1197_ = ((size_t)1ULL);
v___x_1198_ = lean_usize_sub(v___x_1196_, v___x_1197_);
v___x_1199_ = lean_usize_land(v___x_1195_, v___x_1198_);
v___x_1200_ = lean_array_uget_borrowed(v_buckets_1184_, v___x_1199_);
lean_inc(v___x_1200_);
v___x_1201_ = l_Std_DHashMap_Internal_AssocList_getEntryD___redArg(v_inst_1179_, v_a_1182_, v_fallback_1183_, v___x_1200_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD___redArg___boxed(lean_object* v_inst_1202_, lean_object* v_inst_1203_, lean_object* v_m_1204_, lean_object* v_a_1205_, lean_object* v_fallback_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_Std_DHashMap_Internal_Raw_u2080_getEntryD___redArg(v_inst_1202_, v_inst_1203_, v_m_1204_, v_a_1205_, v_fallback_1206_);
lean_dec_ref(v_fallback_1206_);
lean_dec_ref(v_m_1204_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD(lean_object* v_00_u03b1_1208_, lean_object* v_00_u03b2_1209_, lean_object* v_inst_1210_, lean_object* v_inst_1211_, lean_object* v_m_1212_, lean_object* v_a_1213_, lean_object* v_fallback_1214_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = l_Std_DHashMap_Internal_Raw_u2080_getEntryD___redArg(v_inst_1210_, v_inst_1211_, v_m_1212_, v_a_1213_, v_fallback_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntryD___boxed(lean_object* v_00_u03b1_1216_, lean_object* v_00_u03b2_1217_, lean_object* v_inst_1218_, lean_object* v_inst_1219_, lean_object* v_m_1220_, lean_object* v_a_1221_, lean_object* v_fallback_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Std_DHashMap_Internal_Raw_u2080_getEntryD(v_00_u03b1_1216_, v_00_u03b2_1217_, v_inst_1218_, v_inst_1219_, v_m_1220_, v_a_1221_, v_fallback_1222_);
lean_dec_ref(v_fallback_1222_);
lean_dec_ref(v_m_1220_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21___redArg(lean_object* v_inst_1224_, lean_object* v_inst_1225_, lean_object* v_m_1226_, lean_object* v_a_1227_, lean_object* v_inst_1228_){
_start:
{
lean_object* v_buckets_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; uint64_t v___x_1232_; uint64_t v___x_1233_; uint64_t v___x_1234_; uint64_t v___x_1235_; uint64_t v_fold_1236_; uint64_t v___x_1237_; uint64_t v___x_1238_; uint64_t v___x_1239_; size_t v___x_1240_; size_t v___x_1241_; size_t v___x_1242_; size_t v___x_1243_; size_t v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v_buckets_1229_ = lean_ctor_get(v_m_1226_, 1);
v___x_1230_ = lean_array_get_size(v_buckets_1229_);
lean_inc(v_a_1227_);
v___x_1231_ = lean_apply_1(v_inst_1225_, v_a_1227_);
v___x_1232_ = 32ULL;
v___x_1233_ = lean_unbox_uint64(v___x_1231_);
v___x_1234_ = lean_uint64_shift_right(v___x_1233_, v___x_1232_);
v___x_1235_ = lean_unbox_uint64(v___x_1231_);
lean_dec_ref(v___x_1231_);
v_fold_1236_ = lean_uint64_xor(v___x_1235_, v___x_1234_);
v___x_1237_ = 16ULL;
v___x_1238_ = lean_uint64_shift_right(v_fold_1236_, v___x_1237_);
v___x_1239_ = lean_uint64_xor(v_fold_1236_, v___x_1238_);
v___x_1240_ = lean_uint64_to_usize(v___x_1239_);
v___x_1241_ = lean_usize_of_nat(v___x_1230_);
v___x_1242_ = ((size_t)1ULL);
v___x_1243_ = lean_usize_sub(v___x_1241_, v___x_1242_);
v___x_1244_ = lean_usize_land(v___x_1240_, v___x_1243_);
v___x_1245_ = lean_array_uget_borrowed(v_buckets_1229_, v___x_1244_);
lean_inc(v___x_1245_);
v___x_1246_ = l_Std_DHashMap_Internal_AssocList_getEntry_x21___redArg(v_inst_1224_, v_a_1227_, v_inst_1228_, v___x_1245_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21___redArg___boxed(lean_object* v_inst_1247_, lean_object* v_inst_1248_, lean_object* v_m_1249_, lean_object* v_a_1250_, lean_object* v_inst_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21___redArg(v_inst_1247_, v_inst_1248_, v_m_1249_, v_a_1250_, v_inst_1251_);
lean_dec_ref(v_inst_1251_);
lean_dec_ref(v_m_1249_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21(lean_object* v_00_u03b1_1253_, lean_object* v_00_u03b2_1254_, lean_object* v_inst_1255_, lean_object* v_inst_1256_, lean_object* v_m_1257_, lean_object* v_a_1258_, lean_object* v_inst_1259_){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21___redArg(v_inst_1255_, v_inst_1256_, v_m_1257_, v_a_1258_, v_inst_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21___boxed(lean_object* v_00_u03b1_1261_, lean_object* v_00_u03b2_1262_, lean_object* v_inst_1263_, lean_object* v_inst_1264_, lean_object* v_m_1265_, lean_object* v_a_1266_, lean_object* v_inst_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x21(v_00_u03b1_1261_, v_00_u03b2_1262_, v_inst_1263_, v_inst_1264_, v_m_1265_, v_a_1266_, v_inst_1267_);
lean_dec_ref(v_inst_1267_);
lean_dec_ref(v_m_1265_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD___redArg(lean_object* v_inst_1269_, lean_object* v_inst_1270_, lean_object* v_m_1271_, lean_object* v_a_1272_, lean_object* v_fallback_1273_){
_start:
{
lean_object* v_buckets_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; uint64_t v___x_1277_; uint64_t v___x_1278_; uint64_t v___x_1279_; uint64_t v___x_1280_; uint64_t v_fold_1281_; uint64_t v___x_1282_; uint64_t v___x_1283_; uint64_t v___x_1284_; size_t v___x_1285_; size_t v___x_1286_; size_t v___x_1287_; size_t v___x_1288_; size_t v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v_buckets_1274_ = lean_ctor_get(v_m_1271_, 1);
v___x_1275_ = lean_array_get_size(v_buckets_1274_);
lean_inc(v_a_1272_);
v___x_1276_ = lean_apply_1(v_inst_1270_, v_a_1272_);
v___x_1277_ = 32ULL;
v___x_1278_ = lean_unbox_uint64(v___x_1276_);
v___x_1279_ = lean_uint64_shift_right(v___x_1278_, v___x_1277_);
v___x_1280_ = lean_unbox_uint64(v___x_1276_);
lean_dec_ref(v___x_1276_);
v_fold_1281_ = lean_uint64_xor(v___x_1280_, v___x_1279_);
v___x_1282_ = 16ULL;
v___x_1283_ = lean_uint64_shift_right(v_fold_1281_, v___x_1282_);
v___x_1284_ = lean_uint64_xor(v_fold_1281_, v___x_1283_);
v___x_1285_ = lean_uint64_to_usize(v___x_1284_);
v___x_1286_ = lean_usize_of_nat(v___x_1275_);
v___x_1287_ = ((size_t)1ULL);
v___x_1288_ = lean_usize_sub(v___x_1286_, v___x_1287_);
v___x_1289_ = lean_usize_land(v___x_1285_, v___x_1288_);
v___x_1290_ = lean_array_uget_borrowed(v_buckets_1274_, v___x_1289_);
lean_inc(v___x_1290_);
v___x_1291_ = l_Std_DHashMap_Internal_AssocList_getCastD___redArg(v_inst_1269_, v_a_1272_, v_fallback_1273_, v___x_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD___redArg___boxed(lean_object* v_inst_1292_, lean_object* v_inst_1293_, lean_object* v_m_1294_, lean_object* v_a_1295_, lean_object* v_fallback_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Std_DHashMap_Internal_Raw_u2080_getD___redArg(v_inst_1292_, v_inst_1293_, v_m_1294_, v_a_1295_, v_fallback_1296_);
lean_dec(v_fallback_1296_);
lean_dec_ref(v_m_1294_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD(lean_object* v_00_u03b1_1298_, lean_object* v_00_u03b2_1299_, lean_object* v_inst_1300_, lean_object* v_inst_1301_, lean_object* v_inst_1302_, lean_object* v_m_1303_, lean_object* v_a_1304_, lean_object* v_fallback_1305_){
_start:
{
lean_object* v___x_1306_; 
v___x_1306_ = l_Std_DHashMap_Internal_Raw_u2080_getD___redArg(v_inst_1300_, v_inst_1302_, v_m_1303_, v_a_1304_, v_fallback_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getD___boxed(lean_object* v_00_u03b1_1307_, lean_object* v_00_u03b2_1308_, lean_object* v_inst_1309_, lean_object* v_inst_1310_, lean_object* v_inst_1311_, lean_object* v_m_1312_, lean_object* v_a_1313_, lean_object* v_fallback_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Std_DHashMap_Internal_Raw_u2080_getD(v_00_u03b1_1307_, v_00_u03b2_1308_, v_inst_1309_, v_inst_1310_, v_inst_1311_, v_m_1312_, v_a_1313_, v_fallback_1314_);
lean_dec(v_fallback_1314_);
lean_dec_ref(v_m_1312_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21___redArg(lean_object* v_inst_1316_, lean_object* v_inst_1317_, lean_object* v_m_1318_, lean_object* v_a_1319_, lean_object* v_inst_1320_){
_start:
{
lean_object* v_buckets_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; uint64_t v___x_1324_; uint64_t v___x_1325_; uint64_t v___x_1326_; uint64_t v___x_1327_; uint64_t v_fold_1328_; uint64_t v___x_1329_; uint64_t v___x_1330_; uint64_t v___x_1331_; size_t v___x_1332_; size_t v___x_1333_; size_t v___x_1334_; size_t v___x_1335_; size_t v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v_buckets_1321_ = lean_ctor_get(v_m_1318_, 1);
v___x_1322_ = lean_array_get_size(v_buckets_1321_);
lean_inc(v_a_1319_);
v___x_1323_ = lean_apply_1(v_inst_1317_, v_a_1319_);
v___x_1324_ = 32ULL;
v___x_1325_ = lean_unbox_uint64(v___x_1323_);
v___x_1326_ = lean_uint64_shift_right(v___x_1325_, v___x_1324_);
v___x_1327_ = lean_unbox_uint64(v___x_1323_);
lean_dec_ref(v___x_1323_);
v_fold_1328_ = lean_uint64_xor(v___x_1327_, v___x_1326_);
v___x_1329_ = 16ULL;
v___x_1330_ = lean_uint64_shift_right(v_fold_1328_, v___x_1329_);
v___x_1331_ = lean_uint64_xor(v_fold_1328_, v___x_1330_);
v___x_1332_ = lean_uint64_to_usize(v___x_1331_);
v___x_1333_ = lean_usize_of_nat(v___x_1322_);
v___x_1334_ = ((size_t)1ULL);
v___x_1335_ = lean_usize_sub(v___x_1333_, v___x_1334_);
v___x_1336_ = lean_usize_land(v___x_1332_, v___x_1335_);
v___x_1337_ = lean_array_uget_borrowed(v_buckets_1321_, v___x_1336_);
lean_inc(v___x_1337_);
v___x_1338_ = l_Std_DHashMap_Internal_AssocList_getCast_x21___redArg(v_inst_1316_, v_a_1319_, v_inst_1320_, v___x_1337_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21___redArg___boxed(lean_object* v_inst_1339_, lean_object* v_inst_1340_, lean_object* v_m_1341_, lean_object* v_a_1342_, lean_object* v_inst_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Std_DHashMap_Internal_Raw_u2080_get_x21___redArg(v_inst_1339_, v_inst_1340_, v_m_1341_, v_a_1342_, v_inst_1343_);
lean_dec(v_inst_1343_);
lean_dec_ref(v_m_1341_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21(lean_object* v_00_u03b1_1345_, lean_object* v_00_u03b2_1346_, lean_object* v_inst_1347_, lean_object* v_inst_1348_, lean_object* v_inst_1349_, lean_object* v_m_1350_, lean_object* v_a_1351_, lean_object* v_inst_1352_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = l_Std_DHashMap_Internal_Raw_u2080_get_x21___redArg(v_inst_1347_, v_inst_1349_, v_m_1350_, v_a_1351_, v_inst_1352_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_get_x21___boxed(lean_object* v_00_u03b1_1354_, lean_object* v_00_u03b2_1355_, lean_object* v_inst_1356_, lean_object* v_inst_1357_, lean_object* v_inst_1358_, lean_object* v_m_1359_, lean_object* v_a_1360_, lean_object* v_inst_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Std_DHashMap_Internal_Raw_u2080_get_x21(v_00_u03b1_1354_, v_00_u03b2_1355_, v_inst_1356_, v_inst_1357_, v_inst_1358_, v_m_1359_, v_a_1360_, v_inst_1361_);
lean_dec(v_inst_1361_);
lean_dec_ref(v_m_1359_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(lean_object* v_inst_1363_, lean_object* v_inst_1364_, lean_object* v_m_1365_, lean_object* v_a_1366_){
_start:
{
lean_object* v_size_1367_; lean_object* v_buckets_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; uint64_t v___x_1371_; uint64_t v___x_1372_; uint64_t v___x_1373_; uint64_t v___x_1374_; uint64_t v_fold_1375_; uint64_t v___x_1376_; uint64_t v___x_1377_; uint64_t v___x_1378_; size_t v___x_1379_; size_t v___x_1380_; size_t v___x_1381_; size_t v___x_1382_; size_t v___x_1383_; lean_object* v_bkt_1384_; uint8_t v___x_1385_; 
v_size_1367_ = lean_ctor_get(v_m_1365_, 0);
v_buckets_1368_ = lean_ctor_get(v_m_1365_, 1);
v___x_1369_ = lean_array_get_size(v_buckets_1368_);
lean_inc_n(v_a_1366_, 2);
v___x_1370_ = lean_apply_1(v_inst_1364_, v_a_1366_);
v___x_1371_ = 32ULL;
v___x_1372_ = lean_unbox_uint64(v___x_1370_);
v___x_1373_ = lean_uint64_shift_right(v___x_1372_, v___x_1371_);
v___x_1374_ = lean_unbox_uint64(v___x_1370_);
lean_dec_ref(v___x_1370_);
v_fold_1375_ = lean_uint64_xor(v___x_1374_, v___x_1373_);
v___x_1376_ = 16ULL;
v___x_1377_ = lean_uint64_shift_right(v_fold_1375_, v___x_1376_);
v___x_1378_ = lean_uint64_xor(v_fold_1375_, v___x_1377_);
v___x_1379_ = lean_uint64_to_usize(v___x_1378_);
v___x_1380_ = lean_usize_of_nat(v___x_1369_);
v___x_1381_ = ((size_t)1ULL);
v___x_1382_ = lean_usize_sub(v___x_1380_, v___x_1381_);
v___x_1383_ = lean_usize_land(v___x_1379_, v___x_1382_);
v_bkt_1384_ = lean_array_uget_borrowed(v_buckets_1368_, v___x_1383_);
lean_inc(v_bkt_1384_);
lean_inc_ref(v_inst_1363_);
v___x_1385_ = l_Std_DHashMap_Internal_AssocList_contains___redArg(v_inst_1363_, v_a_1366_, v_bkt_1384_);
if (v___x_1385_ == 0)
{
lean_dec(v_a_1366_);
lean_dec_ref(v_inst_1363_);
return v_m_1365_;
}
else
{
lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1398_; 
lean_inc(v_bkt_1384_);
lean_inc_ref(v_buckets_1368_);
lean_inc(v_size_1367_);
v_isSharedCheck_1398_ = !lean_is_exclusive(v_m_1365_);
if (v_isSharedCheck_1398_ == 0)
{
lean_object* v_unused_1399_; lean_object* v_unused_1400_; 
v_unused_1399_ = lean_ctor_get(v_m_1365_, 1);
lean_dec(v_unused_1399_);
v_unused_1400_ = lean_ctor_get(v_m_1365_, 0);
lean_dec(v_unused_1400_);
v___x_1387_ = v_m_1365_;
v_isShared_1388_ = v_isSharedCheck_1398_;
goto v_resetjp_1386_;
}
else
{
lean_dec(v_m_1365_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1398_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1389_; lean_object* v_buckets_x27_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1396_; 
v___x_1389_ = lean_box(0);
v_buckets_x27_1390_ = lean_array_uset(v_buckets_1368_, v___x_1383_, v___x_1389_);
v___x_1391_ = lean_unsigned_to_nat(1u);
v___x_1392_ = lean_nat_sub(v_size_1367_, v___x_1391_);
lean_dec(v_size_1367_);
v___x_1393_ = l_Std_DHashMap_Internal_AssocList_erase___redArg(v_inst_1363_, v_a_1366_, v_bkt_1384_);
v___x_1394_ = lean_array_uset(v_buckets_x27_1390_, v___x_1383_, v___x_1393_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v___x_1394_);
lean_ctor_set(v___x_1387_, 0, v___x_1392_);
v___x_1396_ = v___x_1387_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1392_);
lean_ctor_set(v_reuseFailAlloc_1397_, 1, v___x_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase(lean_object* v_00_u03b1_1401_, lean_object* v_00_u03b2_1402_, lean_object* v_inst_1403_, lean_object* v_inst_1404_, lean_object* v_m_1405_, lean_object* v_a_1406_){
_start:
{
lean_object* v___x_1407_; 
v___x_1407_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v_inst_1403_, v_inst_1404_, v_m_1405_, v_a_1406_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap___redArg___lam__0(lean_object* v_f_1408_, lean_object* v_x_1409_){
_start:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1410_ = lean_box(0);
v___x_1411_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filterMap_go(lean_box(0), lean_box(0), lean_box(0), v_f_1408_, v___x_1410_, v_x_1409_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap___redArg(lean_object* v_f_1412_, lean_object* v_m_1413_){
_start:
{
lean_object* v_buckets_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1437_; 
v_buckets_1414_ = lean_ctor_get(v_m_1413_, 1);
v_isSharedCheck_1437_ = !lean_is_exclusive(v_m_1413_);
if (v_isSharedCheck_1437_ == 0)
{
lean_object* v_unused_1438_; 
v_unused_1438_ = lean_ctor_get(v_m_1413_, 0);
lean_dec(v_unused_1438_);
v___x_1416_ = v_m_1413_;
v_isShared_1417_ = v_isSharedCheck_1437_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_buckets_1414_);
lean_dec(v_m_1413_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1437_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___f_1418_; lean_object* v___x_1419_; size_t v_sz_1420_; size_t v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v_newBuckets_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___f_1418_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_filterMap___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1418_, 0, v_f_1412_);
v___x_1419_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v_sz_1420_ = lean_array_size(v_buckets_1414_);
v___x_1421_ = ((size_t)0ULL);
v___x_1422_ = l_unsafeCast___redArg(v_buckets_1414_);
lean_dec_ref(v_buckets_1414_);
v___x_1423_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1419_, v___f_1418_, v_sz_1420_, v___x_1421_, v___x_1422_);
v_newBuckets_1424_ = l_unsafeCast___redArg(v___x_1423_);
lean_dec(v___x_1423_);
v___x_1425_ = lean_unsigned_to_nat(0u);
v___x_1426_ = lean_array_get_size(v_newBuckets_1424_);
v___x_1427_ = lean_nat_dec_lt(v___x_1425_, v___x_1426_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1429_; 
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 1, v_newBuckets_1424_);
lean_ctor_set(v___x_1416_, 0, v___x_1425_);
v___x_1429_ = v___x_1416_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v___x_1425_);
lean_ctor_set(v_reuseFailAlloc_1430_, 1, v_newBuckets_1424_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
else
{
lean_object* v___f_1431_; size_t v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1435_; 
v___f_1431_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__10));
v___x_1432_ = lean_usize_of_nat(v___x_1426_);
lean_inc(v_newBuckets_1424_);
v___x_1433_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1419_, v___f_1431_, v_newBuckets_1424_, v___x_1421_, v___x_1432_, v___x_1425_);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 1, v_newBuckets_1424_);
lean_ctor_set(v___x_1416_, 0, v___x_1433_);
v___x_1435_ = v___x_1416_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___x_1433_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v_newBuckets_1424_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filterMap(lean_object* v_00_u03b1_1439_, lean_object* v_00_u03b2_1440_, lean_object* v_00_u03b3_1441_, lean_object* v_f_1442_, lean_object* v_m_1443_){
_start:
{
lean_object* v___x_1444_; 
v___x_1444_ = l_Std_DHashMap_Internal_Raw_u2080_filterMap___redArg(v_f_1442_, v_m_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map___redArg___lam__0(lean_object* v_f_1445_, lean_object* v_x_1446_){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1447_ = lean_box(0);
v___x_1448_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_map_go(lean_box(0), lean_box(0), lean_box(0), v_f_1445_, v___x_1447_, v_x_1446_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map___redArg(lean_object* v_f_1449_, lean_object* v_m_1450_){
_start:
{
lean_object* v_size_1451_; lean_object* v_buckets_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1466_; 
v_size_1451_ = lean_ctor_get(v_m_1450_, 0);
v_buckets_1452_ = lean_ctor_get(v_m_1450_, 1);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_m_1450_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1454_ = v_m_1450_;
v_isShared_1455_ = v_isSharedCheck_1466_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_buckets_1452_);
lean_inc(v_size_1451_);
lean_dec(v_m_1450_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1466_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___f_1456_; lean_object* v___x_1457_; size_t v_sz_1458_; size_t v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v_newBuckets_1462_; lean_object* v___x_1464_; 
v___f_1456_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1456_, 0, v_f_1449_);
v___x_1457_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v_sz_1458_ = lean_array_size(v_buckets_1452_);
v___x_1459_ = ((size_t)0ULL);
v___x_1460_ = l_unsafeCast___redArg(v_buckets_1452_);
lean_dec_ref(v_buckets_1452_);
v___x_1461_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1457_, v___f_1456_, v_sz_1458_, v___x_1459_, v___x_1460_);
v_newBuckets_1462_ = l_unsafeCast___redArg(v___x_1461_);
lean_dec(v___x_1461_);
if (v_isShared_1455_ == 0)
{
lean_ctor_set(v___x_1454_, 1, v_newBuckets_1462_);
v___x_1464_ = v___x_1454_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_size_1451_);
lean_ctor_set(v_reuseFailAlloc_1465_, 1, v_newBuckets_1462_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_map(lean_object* v_00_u03b1_1467_, lean_object* v_00_u03b2_1468_, lean_object* v_00_u03b3_1469_, lean_object* v_f_1470_, lean_object* v_m_1471_){
_start:
{
lean_object* v___x_1472_; 
v___x_1472_ = l_Std_DHashMap_Internal_Raw_u2080_map___redArg(v_f_1470_, v_m_1471_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter___redArg___lam__0(lean_object* v_f_1473_, lean_object* v_x_1474_){
_start:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1475_ = lean_box(0);
v___x_1476_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go(lean_box(0), lean_box(0), v_f_1473_, v___x_1475_, v_x_1474_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter___redArg(lean_object* v_f_1477_, lean_object* v_m_1478_){
_start:
{
lean_object* v_buckets_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1502_; 
v_buckets_1479_ = lean_ctor_get(v_m_1478_, 1);
v_isSharedCheck_1502_ = !lean_is_exclusive(v_m_1478_);
if (v_isSharedCheck_1502_ == 0)
{
lean_object* v_unused_1503_; 
v_unused_1503_ = lean_ctor_get(v_m_1478_, 0);
lean_dec(v_unused_1503_);
v___x_1481_ = v_m_1478_;
v_isShared_1482_ = v_isSharedCheck_1502_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_buckets_1479_);
lean_dec(v_m_1478_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1502_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___f_1483_; lean_object* v___x_1484_; size_t v_sz_1485_; size_t v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v_newBuckets_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; uint8_t v___x_1492_; 
v___f_1483_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_filter___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1483_, 0, v_f_1477_);
v___x_1484_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v_sz_1485_ = lean_array_size(v_buckets_1479_);
v___x_1486_ = ((size_t)0ULL);
v___x_1487_ = l_unsafeCast___redArg(v_buckets_1479_);
lean_dec_ref(v_buckets_1479_);
v___x_1488_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1484_, v___f_1483_, v_sz_1485_, v___x_1486_, v___x_1487_);
v_newBuckets_1489_ = l_unsafeCast___redArg(v___x_1488_);
lean_dec(v___x_1488_);
v___x_1490_ = lean_unsigned_to_nat(0u);
v___x_1491_ = lean_array_get_size(v_newBuckets_1489_);
v___x_1492_ = lean_nat_dec_lt(v___x_1490_, v___x_1491_);
if (v___x_1492_ == 0)
{
lean_object* v___x_1494_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 1, v_newBuckets_1489_);
lean_ctor_set(v___x_1481_, 0, v___x_1490_);
v___x_1494_ = v___x_1481_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v___x_1490_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_newBuckets_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
else
{
lean_object* v___f_1496_; size_t v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1500_; 
v___f_1496_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__10));
v___x_1497_ = lean_usize_of_nat(v___x_1491_);
lean_inc(v_newBuckets_1489_);
v___x_1498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1484_, v___f_1496_, v_newBuckets_1489_, v___x_1486_, v___x_1497_, v___x_1490_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 1, v_newBuckets_1489_);
lean_ctor_set(v___x_1481_, 0, v___x_1498_);
v___x_1500_ = v___x_1481_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v___x_1498_);
lean_ctor_set(v_reuseFailAlloc_1501_, 1, v_newBuckets_1489_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter(lean_object* v_00_u03b1_1504_, lean_object* v_00_u03b2_1505_, lean_object* v_f_1506_, lean_object* v_m_1507_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l_Std_DHashMap_Internal_Raw_u2080_filter___redArg(v_f_1506_, v_m_1507_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg___lam__0(lean_object* v_inst_1509_, lean_object* v_inst_1510_, lean_object* v_x_1511_, lean_object* v_____s_1512_){
_start:
{
lean_object* v_fst_1513_; lean_object* v_snd_1514_; lean_object* v_r_1515_; lean_object* v___x_1516_; 
v_fst_1513_ = lean_ctor_get(v_x_1511_, 0);
lean_inc(v_fst_1513_);
v_snd_1514_ = lean_ctor_get(v_x_1511_, 1);
lean_inc(v_snd_1514_);
lean_dec_ref(v_x_1511_);
v_r_1515_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1509_, v_inst_1510_, v_____s_1512_, v_fst_1513_, v_snd_1514_);
v___x_1516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1516_, 0, v_r_1515_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(lean_object* v_inst_1517_, lean_object* v_inst_1518_, lean_object* v_inst_1519_, lean_object* v_m_1520_, lean_object* v_l_1521_){
_start:
{
lean_object* v___f_1522_; lean_object* v___x_1523_; 
v___f_1522_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1522_, 0, v_inst_1518_);
lean_closure_set(v___f_1522_, 1, v_inst_1519_);
v___x_1523_ = lean_apply_4(v_inst_1517_, lean_box(0), v_l_1521_, v_m_1520_, v___f_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany(lean_object* v_00_u03b1_1524_, lean_object* v_00_u03b2_1525_, lean_object* v_00_u03c1_1526_, lean_object* v_inst_1527_, lean_object* v_inst_1528_, lean_object* v_inst_1529_, lean_object* v_m_1530_, lean_object* v_l_1531_){
_start:
{
lean_object* v___x_1532_; 
v___x_1532_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(v_inst_1527_, v_inst_1528_, v_inst_1529_, v_m_1530_, v_l_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries___redArg___lam__0(lean_object* v_inst_1533_, lean_object* v_inst_1534_, lean_object* v_x_1535_, lean_object* v_____s_1536_){
_start:
{
lean_object* v_fst_1537_; lean_object* v_r_1538_; lean_object* v___x_1539_; 
v_fst_1537_ = lean_ctor_get(v_x_1535_, 0);
lean_inc(v_fst_1537_);
lean_dec_ref(v_x_1535_);
v_r_1538_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v_inst_1533_, v_inst_1534_, v_____s_1536_, v_fst_1537_);
v___x_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1539_, 0, v_r_1538_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries___redArg(lean_object* v_inst_1540_, lean_object* v_inst_1541_, lean_object* v_inst_1542_, lean_object* v_m_1543_, lean_object* v_l_1544_){
_start:
{
lean_object* v___f_1545_; lean_object* v___x_1546_; 
v___f_1545_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1545_, 0, v_inst_1541_);
lean_closure_set(v___f_1545_, 1, v_inst_1542_);
v___x_1546_ = lean_apply_4(v_inst_1540_, lean_box(0), v_l_1544_, v_m_1543_, v___f_1545_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries(lean_object* v_00_u03b1_1547_, lean_object* v_00_u03b2_1548_, lean_object* v_00_u03c1_1549_, lean_object* v_inst_1550_, lean_object* v_inst_1551_, lean_object* v_inst_1552_, lean_object* v_m_1553_, lean_object* v_l_1554_){
_start:
{
lean_object* v___x_1555_; 
v___x_1555_ = l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries___redArg(v_inst_1550_, v_inst_1551_, v_inst_1552_, v_m_1553_, v_l_1554_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertManyIfNew___redArg___lam__0(lean_object* v_inst_1556_, lean_object* v_inst_1557_, lean_object* v_x_1558_, lean_object* v_____s_1559_){
_start:
{
lean_object* v_fst_1560_; lean_object* v_snd_1561_; lean_object* v_r_1562_; lean_object* v___x_1563_; 
v_fst_1560_ = lean_ctor_get(v_x_1558_, 0);
lean_inc(v_fst_1560_);
v_snd_1561_ = lean_ctor_get(v_x_1558_, 1);
lean_inc(v_snd_1561_);
lean_dec_ref(v_x_1558_);
v_r_1562_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v_inst_1556_, v_inst_1557_, v_____s_1559_, v_fst_1560_, v_snd_1561_);
v___x_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1563_, 0, v_r_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertManyIfNew___redArg(lean_object* v_inst_1564_, lean_object* v_inst_1565_, lean_object* v_inst_1566_, lean_object* v_m_1567_, lean_object* v_l_1568_){
_start:
{
lean_object* v___f_1569_; lean_object* v___x_1570_; 
v___f_1569_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_insertManyIfNew___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1569_, 0, v_inst_1565_);
lean_closure_set(v___f_1569_, 1, v_inst_1566_);
v___x_1570_ = lean_apply_4(v_inst_1564_, lean_box(0), v_l_1568_, v_m_1567_, v___f_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertManyIfNew(lean_object* v_00_u03b1_1571_, lean_object* v_00_u03b2_1572_, lean_object* v_00_u03c1_1573_, lean_object* v_inst_1574_, lean_object* v_inst_1575_, lean_object* v_inst_1576_, lean_object* v_m_1577_, lean_object* v_l_1578_){
_start:
{
lean_object* v___f_1579_; lean_object* v___x_1580_; 
v___f_1579_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_insertManyIfNew___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1579_, 0, v_inst_1575_);
lean_closure_set(v___f_1579_, 1, v_inst_1576_);
v___x_1580_ = lean_apply_4(v_inst_1574_, lean_box(0), v_l_1578_, v_m_1577_, v___f_1579_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn___redArg(lean_object* v_inst_1581_, lean_object* v_inst_1582_, lean_object* v_m_1583_, lean_object* v_sofar_1584_, lean_object* v_k_1585_){
_start:
{
lean_object* v___x_1586_; 
lean_inc_ref(v_inst_1582_);
lean_inc_ref(v_inst_1581_);
v___x_1586_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___redArg(v_inst_1581_, v_inst_1582_, v_m_1583_, v_k_1585_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_dec_ref(v_inst_1582_);
lean_dec_ref(v_inst_1581_);
return v_sofar_1584_;
}
else
{
lean_object* v_val_1587_; lean_object* v_fst_1588_; lean_object* v_snd_1589_; lean_object* v___x_1590_; 
v_val_1587_ = lean_ctor_get(v___x_1586_, 0);
lean_inc(v_val_1587_);
lean_dec_ref_known(v___x_1586_, 1);
v_fst_1588_ = lean_ctor_get(v_val_1587_, 0);
lean_inc(v_fst_1588_);
v_snd_1589_ = lean_ctor_get(v_val_1587_, 1);
lean_inc(v_snd_1589_);
lean_dec(v_val_1587_);
v___x_1590_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1581_, v_inst_1582_, v_sofar_1584_, v_fst_1588_, v_snd_1589_);
return v___x_1590_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn___redArg___boxed(lean_object* v_inst_1591_, lean_object* v_inst_1592_, lean_object* v_m_1593_, lean_object* v_sofar_1594_, lean_object* v_k_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn___redArg(v_inst_1591_, v_inst_1592_, v_m_1593_, v_sofar_1594_, v_k_1595_);
lean_dec_ref(v_m_1593_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn(lean_object* v_00_u03b1_1597_, lean_object* v_00_u03b2_1598_, lean_object* v_inst_1599_, lean_object* v_inst_1600_, lean_object* v_m_1601_, lean_object* v_sofar_1602_, lean_object* v_k_1603_){
_start:
{
lean_object* v___x_1604_; 
lean_inc_ref(v_inst_1600_);
lean_inc_ref(v_inst_1599_);
v___x_1604_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___redArg(v_inst_1599_, v_inst_1600_, v_m_1601_, v_k_1603_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_dec_ref(v_inst_1600_);
lean_dec_ref(v_inst_1599_);
return v_sofar_1602_;
}
else
{
lean_object* v_val_1605_; lean_object* v_fst_1606_; lean_object* v_snd_1607_; lean_object* v___x_1608_; 
v_val_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_val_1605_);
lean_dec_ref_known(v___x_1604_, 1);
v_fst_1606_ = lean_ctor_get(v_val_1605_, 0);
lean_inc(v_fst_1606_);
v_snd_1607_ = lean_ctor_get(v_val_1605_, 1);
lean_inc(v_snd_1607_);
lean_dec(v_val_1605_);
v___x_1608_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1599_, v_inst_1600_, v_sofar_1602_, v_fst_1606_, v_snd_1607_);
return v___x_1608_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn___boxed(lean_object* v_00_u03b1_1609_, lean_object* v_00_u03b2_1610_, lean_object* v_inst_1611_, lean_object* v_inst_1612_, lean_object* v_m_1613_, lean_object* v_sofar_1614_, lean_object* v_k_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Std_DHashMap_Internal_Raw_u2080_interSmallerFn(v_00_u03b1_1609_, v_00_u03b2_1610_, v_inst_1611_, v_inst_1612_, v_m_1613_, v_sofar_1614_, v_k_1615_);
lean_dec_ref(v_m_1613_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___lam__0(lean_object* v_inst_1617_, lean_object* v_inst_1618_, lean_object* v_m_u2081_1619_, lean_object* v_x1_1620_, lean_object* v_x2_1621_, lean_object* v_x3_1622_){
_start:
{
lean_object* v___x_1623_; 
lean_inc_ref(v_inst_1618_);
lean_inc_ref(v_inst_1617_);
v___x_1623_ = l_Std_DHashMap_Internal_Raw_u2080_getEntry_x3f___redArg(v_inst_1617_, v_inst_1618_, v_m_u2081_1619_, v_x2_1621_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_dec_ref(v_inst_1618_);
lean_dec_ref(v_inst_1617_);
return v_x1_1620_;
}
else
{
lean_object* v_val_1624_; lean_object* v_fst_1625_; lean_object* v_snd_1626_; lean_object* v___x_1627_; 
v_val_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_val_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v_fst_1625_ = lean_ctor_get(v_val_1624_, 0);
lean_inc(v_fst_1625_);
v_snd_1626_ = lean_ctor_get(v_val_1624_, 1);
lean_inc(v_snd_1626_);
lean_dec(v_val_1624_);
v___x_1627_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1617_, v_inst_1618_, v_x1_1620_, v_fst_1625_, v_snd_1626_);
return v___x_1627_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___lam__0___boxed(lean_object* v_inst_1628_, lean_object* v_inst_1629_, lean_object* v_m_u2081_1630_, lean_object* v_x1_1631_, lean_object* v_x2_1632_, lean_object* v_x3_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___lam__0(v_inst_1628_, v_inst_1629_, v_m_u2081_1630_, v_x1_1631_, v_x2_1632_, v_x3_1633_);
lean_dec(v_x3_1633_);
lean_dec_ref(v_m_u2081_1630_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___lam__1(lean_object* v___x_1635_, lean_object* v___f_1636_, lean_object* v_acc_1637_, lean_object* v_l_1638_){
_start:
{
lean_object* v___x_1639_; 
v___x_1639_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_1635_, v___f_1636_, v_acc_1637_, v_l_1638_);
return v___x_1639_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__0(void){
_start:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1640_ = lean_box(0);
v___x_1641_ = lean_unsigned_to_nat(16u);
v___x_1642_ = lean_mk_array(v___x_1641_, v___x_1640_);
return v___x_1642_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__1(void){
_start:
{
lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1643_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__0);
v___x_1644_ = lean_unsigned_to_nat(0u);
v___x_1645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
lean_ctor_set(v___x_1645_, 1, v___x_1643_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg(lean_object* v_inst_1646_, lean_object* v_inst_1647_, lean_object* v_m_u2081_1648_, lean_object* v_m_u2082_1649_){
_start:
{
lean_object* v___x_1650_; lean_object* v_buckets_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; uint8_t v___x_1655_; 
v___x_1650_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v_buckets_1651_ = lean_ctor_get(v_m_u2082_1649_, 1);
lean_inc_ref(v_buckets_1651_);
lean_dec_ref(v_m_u2082_1649_);
v___x_1652_ = lean_unsigned_to_nat(0u);
v___x_1653_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__1, &l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__1_once, _init_l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___closed__1);
v___x_1654_ = lean_array_get_size(v_buckets_1651_);
v___x_1655_ = lean_nat_dec_lt(v___x_1652_, v___x_1654_);
if (v___x_1655_ == 0)
{
lean_dec_ref(v_buckets_1651_);
lean_dec_ref(v_m_u2081_1648_);
lean_dec_ref(v_inst_1647_);
lean_dec_ref(v_inst_1646_);
return v___x_1653_;
}
else
{
lean_object* v___f_1656_; lean_object* v___f_1657_; size_t v___x_1658_; size_t v___x_1659_; lean_object* v___x_1660_; 
v___f_1656_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_1656_, 0, v_inst_1646_);
lean_closure_set(v___f_1656_, 1, v_inst_1647_);
lean_closure_set(v___f_1656_, 2, v_m_u2081_1648_);
v___f_1657_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg___lam__1), 4, 2);
lean_closure_set(v___f_1657_, 0, v___x_1650_);
lean_closure_set(v___f_1657_, 1, v___f_1656_);
v___x_1658_ = ((size_t)0ULL);
v___x_1659_ = lean_usize_of_nat(v___x_1654_);
v___x_1660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1650_, v___f_1657_, v_buckets_1651_, v___x_1658_, v___x_1659_, v___x_1653_);
return v___x_1660_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_interSmaller(lean_object* v_00_u03b1_1661_, lean_object* v_00_u03b2_1662_, lean_object* v_inst_1663_, lean_object* v_inst_1664_, lean_object* v_m_u2081_1665_, lean_object* v_m_u2082_1666_){
_start:
{
lean_object* v___x_1667_; 
v___x_1667_ = l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg(v_inst_1663_, v_inst_1664_, v_m_u2081_1665_, v_m_u2082_1666_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union___redArg___lam__0(lean_object* v_inst_1668_, lean_object* v_inst_1669_, lean_object* v_a_1670_, lean_object* v_b_1671_, lean_object* v_acc_1672_){
_start:
{
lean_object* v_r_1673_; lean_object* v___x_1674_; 
v_r_1673_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v_inst_1668_, v_inst_1669_, v_acc_1672_, v_a_1670_, v_b_1671_);
v___x_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1674_, 0, v_r_1673_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union___redArg___lam__1(lean_object* v___x_1675_, lean_object* v___f_1676_, lean_object* v_a_1677_, lean_object* v_x_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v___x_1675_, v___f_1676_, v_a_1677_, v___y_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union___redArg(lean_object* v_inst_1683_, lean_object* v_inst_1684_, lean_object* v_m_u2081_1685_, lean_object* v_m_u2082_1686_){
_start:
{
lean_object* v___x_1687_; lean_object* v_size_1688_; lean_object* v_buckets_1689_; lean_object* v_size_1690_; uint8_t v___x_1691_; 
v___x_1687_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v_size_1688_ = lean_ctor_get(v_m_u2081_1685_, 0);
v_buckets_1689_ = lean_ctor_get(v_m_u2081_1685_, 1);
v_size_1690_ = lean_ctor_get(v_m_u2082_1686_, 0);
v___x_1691_ = lean_nat_dec_le(v_size_1688_, v_size_1690_);
if (v___x_1691_ == 0)
{
lean_object* v___f_1692_; lean_object* v___x_1693_; 
v___f_1692_ = ((lean_object*)(l_Std_DHashMap_Internal_Raw_u2080_union___redArg___closed__0));
v___x_1693_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(v___f_1692_, v_inst_1683_, v_inst_1684_, v_m_u2081_1685_, v_m_u2082_1686_);
return v___x_1693_;
}
else
{
lean_object* v___f_1694_; lean_object* v___f_1695_; size_t v_sz_1696_; size_t v___x_1697_; lean_object* v___x_1698_; 
lean_inc_ref(v_buckets_1689_);
lean_dec_ref(v_m_u2081_1685_);
v___f_1694_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_union___redArg___lam__0), 5, 2);
lean_closure_set(v___f_1694_, 0, v_inst_1683_);
lean_closure_set(v___f_1694_, 1, v_inst_1684_);
v___f_1695_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_union___redArg___lam__1), 5, 2);
lean_closure_set(v___f_1695_, 0, v___x_1687_);
lean_closure_set(v___f_1695_, 1, v___f_1694_);
v_sz_1696_ = lean_array_size(v_buckets_1689_);
v___x_1697_ = ((size_t)0ULL);
v___x_1698_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1687_, v_buckets_1689_, v___f_1695_, v_sz_1696_, v___x_1697_, v_m_u2082_1686_);
return v___x_1698_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_union(lean_object* v_00_u03b1_1699_, lean_object* v_00_u03b2_1700_, lean_object* v_inst_1701_, lean_object* v_inst_1702_, lean_object* v_m_u2081_1703_, lean_object* v_m_u2082_1704_){
_start:
{
lean_object* v___x_1705_; lean_object* v_size_1706_; lean_object* v_buckets_1707_; lean_object* v_size_1708_; uint8_t v___x_1709_; 
v___x_1705_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v_size_1706_ = lean_ctor_get(v_m_u2081_1703_, 0);
v_buckets_1707_ = lean_ctor_get(v_m_u2081_1703_, 1);
v_size_1708_ = lean_ctor_get(v_m_u2082_1704_, 0);
v___x_1709_ = lean_nat_dec_le(v_size_1706_, v_size_1708_);
if (v___x_1709_ == 0)
{
lean_object* v___f_1710_; lean_object* v___x_1711_; 
v___f_1710_ = ((lean_object*)(l_Std_DHashMap_Internal_Raw_u2080_union___redArg___closed__0));
v___x_1711_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(v___f_1710_, v_inst_1701_, v_inst_1702_, v_m_u2081_1703_, v_m_u2082_1704_);
return v___x_1711_;
}
else
{
lean_object* v___f_1712_; lean_object* v___f_1713_; size_t v_sz_1714_; size_t v___x_1715_; lean_object* v___x_1716_; 
lean_inc_ref(v_buckets_1707_);
lean_dec_ref(v_m_u2081_1703_);
v___f_1712_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_union___redArg___lam__0), 5, 2);
lean_closure_set(v___f_1712_, 0, v_inst_1701_);
lean_closure_set(v___f_1712_, 1, v_inst_1702_);
v___f_1713_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_union___redArg___lam__1), 5, 2);
lean_closure_set(v___f_1713_, 0, v___x_1705_);
lean_closure_set(v___f_1713_, 1, v___f_1712_);
v_sz_1714_ = lean_array_size(v_buckets_1707_);
v___x_1715_ = ((size_t)0ULL);
v___x_1716_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1705_, v_buckets_1707_, v___f_1713_, v_sz_1714_, v___x_1715_, v_m_u2082_1704_);
return v___x_1716_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_inter___redArg___lam__0(lean_object* v_inst_1717_, lean_object* v_inst_1718_, lean_object* v_m_u2082_1719_, lean_object* v_k_1720_, lean_object* v_x_1721_){
_start:
{
uint8_t v___x_1722_; 
v___x_1722_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_1717_, v_inst_1718_, v_m_u2082_1719_, v_k_1720_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_inter___redArg___lam__0___boxed(lean_object* v_inst_1723_, lean_object* v_inst_1724_, lean_object* v_m_u2082_1725_, lean_object* v_k_1726_, lean_object* v_x_1727_){
_start:
{
uint8_t v_res_1728_; lean_object* v_r_1729_; 
v_res_1728_ = l_Std_DHashMap_Internal_Raw_u2080_inter___redArg___lam__0(v_inst_1723_, v_inst_1724_, v_m_u2082_1725_, v_k_1726_, v_x_1727_);
lean_dec(v_x_1727_);
lean_dec_ref(v_m_u2082_1725_);
v_r_1729_ = lean_box(v_res_1728_);
return v_r_1729_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_inter___redArg(lean_object* v_inst_1730_, lean_object* v_inst_1731_, lean_object* v_m_u2081_1732_, lean_object* v_m_u2082_1733_){
_start:
{
lean_object* v_size_1734_; lean_object* v_size_1735_; uint8_t v___x_1736_; 
v_size_1734_ = lean_ctor_get(v_m_u2081_1732_, 0);
v_size_1735_ = lean_ctor_get(v_m_u2082_1733_, 0);
v___x_1736_ = lean_nat_dec_le(v_size_1734_, v_size_1735_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Std_DHashMap_Internal_Raw_u2080_interSmaller___redArg(v_inst_1730_, v_inst_1731_, v_m_u2081_1732_, v_m_u2082_1733_);
return v___x_1737_;
}
else
{
lean_object* v___f_1738_; lean_object* v___x_1739_; 
v___f_1738_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_inter___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1738_, 0, v_inst_1730_);
lean_closure_set(v___f_1738_, 1, v_inst_1731_);
lean_closure_set(v___f_1738_, 2, v_m_u2082_1733_);
v___x_1739_ = l_Std_DHashMap_Internal_Raw_u2080_filter___redArg(v___f_1738_, v_m_u2081_1732_);
return v___x_1739_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_inter(lean_object* v_00_u03b1_1740_, lean_object* v_00_u03b2_1741_, lean_object* v_inst_1742_, lean_object* v_inst_1743_, lean_object* v_m_u2081_1744_, lean_object* v_m_u2082_1745_){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = l_Std_DHashMap_Internal_Raw_u2080_inter___redArg(v_inst_1742_, v_inst_1743_, v_m_u2081_1744_, v_m_u2082_1745_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___lam__0(lean_object* v_inst_1747_, lean_object* v_inst_1748_, lean_object* v_inst_1749_, lean_object* v_m_u2082_1750_, uint8_t v___x_1751_, lean_object* v___x_1752_, lean_object* v___x_1753_, lean_object* v_a_1754_, lean_object* v_b_1755_, lean_object* v_acc_1756_){
_start:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; uint8_t v___x_1760_; 
lean_inc(v_a_1754_);
v___x_1757_ = lean_apply_1(v_inst_1747_, v_a_1754_);
v___x_1758_ = l_Std_DHashMap_Internal_Raw_u2080_get_x3f___redArg(v_inst_1748_, v_inst_1749_, v_m_u2082_1750_, v_a_1754_);
v___x_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1759_, 0, v_b_1755_);
v___x_1760_ = l_Option_instBEq_beq___redArg(v___x_1757_, v___x_1758_, v___x_1759_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
lean_dec_ref(v___x_1753_);
v___x_1761_ = lean_box(v___x_1751_);
v___x_1762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1761_);
v___x_1763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
lean_ctor_set(v___x_1763_, 1, v___x_1752_);
v___x_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
return v___x_1764_;
}
else
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1753_);
return v___x_1765_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___lam__0___boxed(lean_object* v_inst_1766_, lean_object* v_inst_1767_, lean_object* v_inst_1768_, lean_object* v_m_u2082_1769_, lean_object* v___x_1770_, lean_object* v___x_1771_, lean_object* v___x_1772_, lean_object* v_a_1773_, lean_object* v_b_1774_, lean_object* v_acc_1775_){
_start:
{
uint8_t v___x_238__boxed_1776_; lean_object* v_res_1777_; 
v___x_238__boxed_1776_ = lean_unbox(v___x_1770_);
v_res_1777_ = l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___lam__0(v_inst_1766_, v_inst_1767_, v_inst_1768_, v_m_u2082_1769_, v___x_238__boxed_1776_, v___x_1771_, v___x_1772_, v_a_1773_, v_b_1774_, v_acc_1775_);
lean_dec_ref(v_acc_1775_);
lean_dec_ref(v_m_u2082_1769_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___lam__1(lean_object* v___x_1778_, lean_object* v___f_1779_, lean_object* v_a_1780_, lean_object* v_x_1781_, lean_object* v___y_1782_){
_start:
{
lean_object* v___x_1783_; 
v___x_1783_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v___x_1778_, v___f_1779_, v_a_1780_, v___y_1782_);
return v___x_1783_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_beq___redArg(lean_object* v_inst_1787_, lean_object* v_inst_1788_, lean_object* v_inst_1789_, lean_object* v_m_u2081_1790_, lean_object* v_m_u2082_1791_){
_start:
{
lean_object* v_size_1792_; lean_object* v_buckets_1793_; lean_object* v_size_1794_; uint8_t v___x_1795_; 
v_size_1792_ = lean_ctor_get(v_m_u2081_1790_, 0);
lean_inc(v_size_1792_);
v_buckets_1793_ = lean_ctor_get(v_m_u2081_1790_, 1);
lean_inc_ref(v_buckets_1793_);
lean_dec_ref(v_m_u2081_1790_);
v_size_1794_ = lean_ctor_get(v_m_u2082_1791_, 0);
v___x_1795_ = lean_nat_dec_eq(v_size_1792_, v_size_1794_);
lean_dec(v_size_1792_);
if (v___x_1795_ == 0)
{
lean_dec_ref(v_buckets_1793_);
lean_dec_ref(v_m_u2082_1791_);
lean_dec_ref(v_inst_1789_);
lean_dec_ref(v_inst_1788_);
lean_dec_ref(v_inst_1787_);
return v___x_1795_;
}
else
{
uint8_t v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___f_1801_; lean_object* v___f_1802_; size_t v_sz_1803_; size_t v___x_1804_; lean_object* v___x_1805_; lean_object* v_fst_1806_; 
v___x_1796_ = 0;
v___x_1797_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v___x_1798_ = lean_box(0);
v___x_1799_ = ((lean_object*)(l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___closed__0));
v___x_1800_ = lean_box(v___x_1796_);
v___f_1801_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1801_, 0, v_inst_1789_);
lean_closure_set(v___f_1801_, 1, v_inst_1787_);
lean_closure_set(v___f_1801_, 2, v_inst_1788_);
lean_closure_set(v___f_1801_, 3, v_m_u2082_1791_);
lean_closure_set(v___f_1801_, 4, v___x_1800_);
lean_closure_set(v___f_1801_, 5, v___x_1798_);
lean_closure_set(v___f_1801_, 6, v___x_1799_);
v___f_1802_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___lam__1), 5, 2);
lean_closure_set(v___f_1802_, 0, v___x_1797_);
lean_closure_set(v___f_1802_, 1, v___f_1801_);
v_sz_1803_ = lean_array_size(v_buckets_1793_);
v___x_1804_ = ((size_t)0ULL);
v___x_1805_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1797_, v_buckets_1793_, v___f_1802_, v_sz_1803_, v___x_1804_, v___x_1799_);
v_fst_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_fst_1806_);
lean_dec(v___x_1805_);
if (lean_obj_tag(v_fst_1806_) == 0)
{
return v___x_1795_;
}
else
{
lean_object* v_val_1807_; uint8_t v___x_1808_; 
v_val_1807_ = lean_ctor_get(v_fst_1806_, 0);
lean_inc(v_val_1807_);
lean_dec_ref_known(v_fst_1806_, 1);
v___x_1808_ = lean_unbox(v_val_1807_);
lean_dec(v_val_1807_);
return v___x_1808_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___boxed(lean_object* v_inst_1809_, lean_object* v_inst_1810_, lean_object* v_inst_1811_, lean_object* v_m_u2081_1812_, lean_object* v_m_u2082_1813_){
_start:
{
uint8_t v_res_1814_; lean_object* v_r_1815_; 
v_res_1814_ = l_Std_DHashMap_Internal_Raw_u2080_beq___redArg(v_inst_1809_, v_inst_1810_, v_inst_1811_, v_m_u2081_1812_, v_m_u2082_1813_);
v_r_1815_ = lean_box(v_res_1814_);
return v_r_1815_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_beq(lean_object* v_00_u03b1_1816_, lean_object* v_00_u03b2_1817_, lean_object* v_inst_1818_, lean_object* v_inst_1819_, lean_object* v_inst_1820_, lean_object* v_inst_1821_, lean_object* v_m_u2081_1822_, lean_object* v_m_u2082_1823_){
_start:
{
uint8_t v___x_1824_; 
v___x_1824_ = l_Std_DHashMap_Internal_Raw_u2080_beq___redArg(v_inst_1818_, v_inst_1820_, v_inst_1821_, v_m_u2081_1822_, v_m_u2082_1823_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_beq___boxed(lean_object* v_00_u03b1_1825_, lean_object* v_00_u03b2_1826_, lean_object* v_inst_1827_, lean_object* v_inst_1828_, lean_object* v_inst_1829_, lean_object* v_inst_1830_, lean_object* v_m_u2081_1831_, lean_object* v_m_u2082_1832_){
_start:
{
uint8_t v_res_1833_; lean_object* v_r_1834_; 
v_res_1833_ = l_Std_DHashMap_Internal_Raw_u2080_beq(v_00_u03b1_1825_, v_00_u03b2_1826_, v_inst_1827_, v_inst_1828_, v_inst_1829_, v_inst_1830_, v_m_u2081_1831_, v_m_u2082_1832_);
v_r_1834_ = lean_box(v_res_1833_);
return v_r_1834_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_diff___redArg___lam__0(lean_object* v_inst_1835_, lean_object* v_inst_1836_, lean_object* v_m_u2082_1837_, uint8_t v___x_1838_, lean_object* v_k_1839_, lean_object* v_x_1840_){
_start:
{
uint8_t v___x_1841_; 
v___x_1841_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_1835_, v_inst_1836_, v_m_u2082_1837_, v_k_1839_);
if (v___x_1841_ == 0)
{
return v___x_1838_;
}
else
{
uint8_t v___x_1842_; 
v___x_1842_ = 0;
return v___x_1842_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff___redArg___lam__0___boxed(lean_object* v_inst_1843_, lean_object* v_inst_1844_, lean_object* v_m_u2082_1845_, lean_object* v___x_1846_, lean_object* v_k_1847_, lean_object* v_x_1848_){
_start:
{
uint8_t v___x_71__boxed_1849_; uint8_t v_res_1850_; lean_object* v_r_1851_; 
v___x_71__boxed_1849_ = lean_unbox(v___x_1846_);
v_res_1850_ = l_Std_DHashMap_Internal_Raw_u2080_diff___redArg___lam__0(v_inst_1843_, v_inst_1844_, v_m_u2082_1845_, v___x_71__boxed_1849_, v_k_1847_, v_x_1848_);
lean_dec(v_x_1848_);
lean_dec_ref(v_m_u2082_1845_);
v_r_1851_ = lean_box(v_res_1850_);
return v_r_1851_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff___redArg(lean_object* v_inst_1852_, lean_object* v_inst_1853_, lean_object* v_m_u2081_1854_, lean_object* v_m_u2082_1855_){
_start:
{
lean_object* v_size_1856_; lean_object* v_size_1857_; uint8_t v___x_1858_; 
v_size_1856_ = lean_ctor_get(v_m_u2081_1854_, 0);
v_size_1857_ = lean_ctor_get(v_m_u2082_1855_, 0);
v___x_1858_ = lean_nat_dec_le(v_size_1856_, v_size_1857_);
if (v___x_1858_ == 0)
{
lean_object* v___f_1859_; lean_object* v___x_1860_; 
v___f_1859_ = ((lean_object*)(l_Std_DHashMap_Internal_Raw_u2080_union___redArg___closed__0));
v___x_1860_ = l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries___redArg(v___f_1859_, v_inst_1852_, v_inst_1853_, v_m_u2081_1854_, v_m_u2082_1855_);
return v___x_1860_;
}
else
{
lean_object* v___x_1861_; lean_object* v___f_1862_; lean_object* v___x_1863_; 
v___x_1861_ = lean_box(v___x_1858_);
v___f_1862_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_diff___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_1862_, 0, v_inst_1852_);
lean_closure_set(v___f_1862_, 1, v_inst_1853_);
lean_closure_set(v___f_1862_, 2, v_m_u2082_1855_);
lean_closure_set(v___f_1862_, 3, v___x_1861_);
v___x_1863_ = l_Std_DHashMap_Internal_Raw_u2080_filter___redArg(v___f_1862_, v_m_u2081_1854_);
return v___x_1863_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_diff(lean_object* v_00_u03b1_1864_, lean_object* v_00_u03b2_1865_, lean_object* v_inst_1866_, lean_object* v_inst_1867_, lean_object* v_m_u2081_1868_, lean_object* v_m_u2082_1869_){
_start:
{
lean_object* v_size_1870_; lean_object* v_size_1871_; uint8_t v___x_1872_; 
v_size_1870_ = lean_ctor_get(v_m_u2081_1868_, 0);
v_size_1871_ = lean_ctor_get(v_m_u2082_1869_, 0);
v___x_1872_ = lean_nat_dec_le(v_size_1870_, v_size_1871_);
if (v___x_1872_ == 0)
{
lean_object* v___f_1873_; lean_object* v___x_1874_; 
v___f_1873_ = ((lean_object*)(l_Std_DHashMap_Internal_Raw_u2080_union___redArg___closed__0));
v___x_1874_ = l_Std_DHashMap_Internal_Raw_u2080_eraseManyEntries___redArg(v___f_1873_, v_inst_1866_, v_inst_1867_, v_m_u2081_1868_, v_m_u2082_1869_);
return v___x_1874_;
}
else
{
lean_object* v___x_1875_; lean_object* v___f_1876_; lean_object* v___x_1877_; 
v___x_1875_ = lean_box(v___x_1872_);
v___f_1876_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_diff___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_1876_, 0, v_inst_1866_);
lean_closure_set(v___f_1876_, 1, v_inst_1867_);
lean_closure_set(v___f_1876_, 2, v_m_u2082_1869_);
lean_closure_set(v___f_1876_, 3, v___x_1875_);
v___x_1877_ = l_Std_DHashMap_Internal_Raw_u2080_filter___redArg(v___f_1876_, v_m_u2081_1868_);
return v___x_1877_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object* v_inst_1878_, lean_object* v_inst_1879_, lean_object* v_m_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v_buckets_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; uint64_t v___x_1885_; uint64_t v___x_1886_; uint64_t v___x_1887_; uint64_t v___x_1888_; uint64_t v_fold_1889_; uint64_t v___x_1890_; uint64_t v___x_1891_; uint64_t v___x_1892_; size_t v___x_1893_; size_t v___x_1894_; size_t v___x_1895_; size_t v___x_1896_; size_t v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v_buckets_1882_ = lean_ctor_get(v_m_1880_, 1);
v___x_1883_ = lean_array_get_size(v_buckets_1882_);
lean_inc(v_a_1881_);
v___x_1884_ = lean_apply_1(v_inst_1879_, v_a_1881_);
v___x_1885_ = 32ULL;
v___x_1886_ = lean_unbox_uint64(v___x_1884_);
v___x_1887_ = lean_uint64_shift_right(v___x_1886_, v___x_1885_);
v___x_1888_ = lean_unbox_uint64(v___x_1884_);
lean_dec_ref(v___x_1884_);
v_fold_1889_ = lean_uint64_xor(v___x_1888_, v___x_1887_);
v___x_1890_ = 16ULL;
v___x_1891_ = lean_uint64_shift_right(v_fold_1889_, v___x_1890_);
v___x_1892_ = lean_uint64_xor(v_fold_1889_, v___x_1891_);
v___x_1893_ = lean_uint64_to_usize(v___x_1892_);
v___x_1894_ = lean_usize_of_nat(v___x_1883_);
v___x_1895_ = ((size_t)1ULL);
v___x_1896_ = lean_usize_sub(v___x_1894_, v___x_1895_);
v___x_1897_ = lean_usize_land(v___x_1893_, v___x_1896_);
v___x_1898_ = lean_array_uget_borrowed(v_buckets_1882_, v___x_1897_);
lean_inc(v___x_1898_);
v___x_1899_ = l_Std_DHashMap_Internal_AssocList_get_x3f___redArg(v_inst_1878_, v_a_1881_, v___x_1898_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg___boxed(lean_object* v_inst_1900_, lean_object* v_inst_1901_, lean_object* v_m_1902_, lean_object* v_a_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1900_, v_inst_1901_, v_m_1902_, v_a_1903_);
lean_dec_ref(v_m_1902_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f(lean_object* v_00_u03b1_1905_, lean_object* v_00_u03b2_1906_, lean_object* v_inst_1907_, lean_object* v_inst_1908_, lean_object* v_m_1909_, lean_object* v_a_1910_){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1907_, v_inst_1908_, v_m_1909_, v_a_1910_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___boxed(lean_object* v_00_u03b1_1912_, lean_object* v_00_u03b2_1913_, lean_object* v_inst_1914_, lean_object* v_inst_1915_, lean_object* v_m_1916_, lean_object* v_a_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f(v_00_u03b1_1912_, v_00_u03b2_1913_, v_inst_1914_, v_inst_1915_, v_m_1916_, v_a_1917_);
lean_dec_ref(v_m_1916_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg___lam__0(lean_object* v_inst_1919_, lean_object* v_inst_1920_, lean_object* v_m_u2082_1921_, lean_object* v_inst_1922_, uint8_t v___x_1923_, lean_object* v___x_1924_, lean_object* v___x_1925_, lean_object* v_a_1926_, lean_object* v_b_1927_, lean_object* v_acc_1928_){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; uint8_t v___x_1931_; 
v___x_1929_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1919_, v_inst_1920_, v_m_u2082_1921_, v_a_1926_);
v___x_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1930_, 0, v_b_1927_);
v___x_1931_ = l_Option_instBEq_beq___redArg(v_inst_1922_, v___x_1929_, v___x_1930_);
if (v___x_1931_ == 0)
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
lean_dec_ref(v___x_1925_);
v___x_1932_ = lean_box(v___x_1923_);
v___x_1933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1933_, 0, v___x_1932_);
v___x_1934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1933_);
lean_ctor_set(v___x_1934_, 1, v___x_1924_);
v___x_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1934_);
return v___x_1935_;
}
else
{
lean_object* v___x_1936_; 
v___x_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1925_);
return v___x_1936_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg___lam__0___boxed(lean_object* v_inst_1937_, lean_object* v_inst_1938_, lean_object* v_m_u2082_1939_, lean_object* v_inst_1940_, lean_object* v___x_1941_, lean_object* v___x_1942_, lean_object* v___x_1943_, lean_object* v_a_1944_, lean_object* v_b_1945_, lean_object* v_acc_1946_){
_start:
{
uint8_t v___x_231__boxed_1947_; lean_object* v_res_1948_; 
v___x_231__boxed_1947_ = lean_unbox(v___x_1941_);
v_res_1948_ = l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg___lam__0(v_inst_1937_, v_inst_1938_, v_m_u2082_1939_, v_inst_1940_, v___x_231__boxed_1947_, v___x_1942_, v___x_1943_, v_a_1944_, v_b_1945_, v_acc_1946_);
lean_dec_ref(v_acc_1946_);
lean_dec_ref(v_m_u2082_1939_);
return v_res_1948_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg(lean_object* v_inst_1949_, lean_object* v_inst_1950_, lean_object* v_inst_1951_, lean_object* v_m_u2081_1952_, lean_object* v_m_u2082_1953_){
_start:
{
lean_object* v_size_1954_; lean_object* v_buckets_1955_; lean_object* v_size_1956_; uint8_t v___x_1957_; 
v_size_1954_ = lean_ctor_get(v_m_u2081_1952_, 0);
lean_inc(v_size_1954_);
v_buckets_1955_ = lean_ctor_get(v_m_u2081_1952_, 1);
lean_inc_ref(v_buckets_1955_);
lean_dec_ref(v_m_u2081_1952_);
v_size_1956_ = lean_ctor_get(v_m_u2082_1953_, 0);
v___x_1957_ = lean_nat_dec_eq(v_size_1954_, v_size_1956_);
lean_dec(v_size_1954_);
if (v___x_1957_ == 0)
{
lean_dec_ref(v_buckets_1955_);
lean_dec_ref(v_m_u2082_1953_);
lean_dec_ref(v_inst_1951_);
lean_dec_ref(v_inst_1950_);
lean_dec_ref(v_inst_1949_);
return v___x_1957_;
}
else
{
uint8_t v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___f_1963_; lean_object* v___f_1964_; size_t v_sz_1965_; size_t v___x_1966_; lean_object* v___x_1967_; lean_object* v_fst_1968_; 
v___x_1958_ = 0;
v___x_1959_ = ((lean_object*)(l_Std_DHashMap_Internal_computeSize___redArg___closed__9));
v___x_1960_ = lean_box(0);
v___x_1961_ = ((lean_object*)(l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___closed__0));
v___x_1962_ = lean_box(v___x_1958_);
v___f_1963_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1963_, 0, v_inst_1949_);
lean_closure_set(v___f_1963_, 1, v_inst_1950_);
lean_closure_set(v___f_1963_, 2, v_m_u2082_1953_);
lean_closure_set(v___f_1963_, 3, v_inst_1951_);
lean_closure_set(v___f_1963_, 4, v___x_1962_);
lean_closure_set(v___f_1963_, 5, v___x_1960_);
lean_closure_set(v___f_1963_, 6, v___x_1961_);
v___f_1964_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_beq___redArg___lam__1), 5, 2);
lean_closure_set(v___f_1964_, 0, v___x_1959_);
lean_closure_set(v___f_1964_, 1, v___f_1963_);
v_sz_1965_ = lean_array_size(v_buckets_1955_);
v___x_1966_ = ((size_t)0ULL);
v___x_1967_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1959_, v_buckets_1955_, v___f_1964_, v_sz_1965_, v___x_1966_, v___x_1961_);
v_fst_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_fst_1968_);
lean_dec(v___x_1967_);
if (lean_obj_tag(v_fst_1968_) == 0)
{
return v___x_1957_;
}
else
{
lean_object* v_val_1969_; uint8_t v___x_1970_; 
v_val_1969_ = lean_ctor_get(v_fst_1968_, 0);
lean_inc(v_val_1969_);
lean_dec_ref_known(v_fst_1968_, 1);
v___x_1970_ = lean_unbox(v_val_1969_);
lean_dec(v_val_1969_);
return v___x_1970_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg___boxed(lean_object* v_inst_1971_, lean_object* v_inst_1972_, lean_object* v_inst_1973_, lean_object* v_m_u2081_1974_, lean_object* v_m_u2082_1975_){
_start:
{
uint8_t v_res_1976_; lean_object* v_r_1977_; 
v_res_1976_ = l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg(v_inst_1971_, v_inst_1972_, v_inst_1973_, v_m_u2081_1974_, v_m_u2082_1975_);
v_r_1977_ = lean_box(v_res_1976_);
return v_r_1977_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_Const_beq(lean_object* v_00_u03b1_1978_, lean_object* v_00_u03b2_1979_, lean_object* v_inst_1980_, lean_object* v_inst_1981_, lean_object* v_inst_1982_, lean_object* v_m_u2081_1983_, lean_object* v_m_u2082_1984_){
_start:
{
uint8_t v___x_1985_; 
v___x_1985_ = l_Std_DHashMap_Internal_Raw_u2080_Const_beq___redArg(v_inst_1980_, v_inst_1981_, v_inst_1982_, v_m_u2081_1983_, v_m_u2082_1984_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_beq___boxed(lean_object* v_00_u03b1_1986_, lean_object* v_00_u03b2_1987_, lean_object* v_inst_1988_, lean_object* v_inst_1989_, lean_object* v_inst_1990_, lean_object* v_m_u2081_1991_, lean_object* v_m_u2082_1992_){
_start:
{
uint8_t v_res_1993_; lean_object* v_r_1994_; 
v_res_1993_ = l_Std_DHashMap_Internal_Raw_u2080_Const_beq(v_00_u03b1_1986_, v_00_u03b2_1987_, v_inst_1988_, v_inst_1989_, v_inst_1990_, v_m_u2081_1991_, v_m_u2082_1992_);
v_r_1994_ = lean_box(v_res_1993_);
return v_r_1994_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(lean_object* v_inst_1995_, lean_object* v_inst_1996_, lean_object* v_m_1997_, lean_object* v_a_1998_){
_start:
{
lean_object* v_buckets_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; uint64_t v___x_2002_; uint64_t v___x_2003_; uint64_t v___x_2004_; uint64_t v___x_2005_; uint64_t v_fold_2006_; uint64_t v___x_2007_; uint64_t v___x_2008_; uint64_t v___x_2009_; size_t v___x_2010_; size_t v___x_2011_; size_t v___x_2012_; size_t v___x_2013_; size_t v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v_buckets_1999_ = lean_ctor_get(v_m_1997_, 1);
v___x_2000_ = lean_array_get_size(v_buckets_1999_);
lean_inc(v_a_1998_);
v___x_2001_ = lean_apply_1(v_inst_1996_, v_a_1998_);
v___x_2002_ = 32ULL;
v___x_2003_ = lean_unbox_uint64(v___x_2001_);
v___x_2004_ = lean_uint64_shift_right(v___x_2003_, v___x_2002_);
v___x_2005_ = lean_unbox_uint64(v___x_2001_);
lean_dec_ref(v___x_2001_);
v_fold_2006_ = lean_uint64_xor(v___x_2005_, v___x_2004_);
v___x_2007_ = 16ULL;
v___x_2008_ = lean_uint64_shift_right(v_fold_2006_, v___x_2007_);
v___x_2009_ = lean_uint64_xor(v_fold_2006_, v___x_2008_);
v___x_2010_ = lean_uint64_to_usize(v___x_2009_);
v___x_2011_ = lean_usize_of_nat(v___x_2000_);
v___x_2012_ = ((size_t)1ULL);
v___x_2013_ = lean_usize_sub(v___x_2011_, v___x_2012_);
v___x_2014_ = lean_usize_land(v___x_2010_, v___x_2013_);
v___x_2015_ = lean_array_uget_borrowed(v_buckets_1999_, v___x_2014_);
lean_inc(v___x_2015_);
v___x_2016_ = l_Std_DHashMap_Internal_AssocList_get___redArg(v_inst_1995_, v_a_1998_, v___x_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg___boxed(lean_object* v_inst_2017_, lean_object* v_inst_2018_, lean_object* v_m_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_2017_, v_inst_2018_, v_m_2019_, v_a_2020_);
lean_dec_ref(v_m_2019_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get(lean_object* v_00_u03b1_2022_, lean_object* v_00_u03b2_2023_, lean_object* v_inst_2024_, lean_object* v_inst_2025_, lean_object* v_m_2026_, lean_object* v_a_2027_, lean_object* v_hma_2028_){
_start:
{
lean_object* v___x_2029_; 
v___x_2029_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_2024_, v_inst_2025_, v_m_2026_, v_a_2027_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___boxed(lean_object* v_00_u03b1_2030_, lean_object* v_00_u03b2_2031_, lean_object* v_inst_2032_, lean_object* v_inst_2033_, lean_object* v_m_2034_, lean_object* v_a_2035_, lean_object* v_hma_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get(v_00_u03b1_2030_, v_00_u03b2_2031_, v_inst_2032_, v_inst_2033_, v_m_2034_, v_a_2035_, v_hma_2036_);
lean_dec_ref(v_m_2034_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(lean_object* v_inst_2038_, lean_object* v_inst_2039_, lean_object* v_m_2040_, lean_object* v_a_2041_, lean_object* v_fallback_2042_){
_start:
{
lean_object* v_buckets_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; uint64_t v___x_2046_; uint64_t v___x_2047_; uint64_t v___x_2048_; uint64_t v___x_2049_; uint64_t v_fold_2050_; uint64_t v___x_2051_; uint64_t v___x_2052_; uint64_t v___x_2053_; size_t v___x_2054_; size_t v___x_2055_; size_t v___x_2056_; size_t v___x_2057_; size_t v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v_buckets_2043_ = lean_ctor_get(v_m_2040_, 1);
v___x_2044_ = lean_array_get_size(v_buckets_2043_);
lean_inc(v_a_2041_);
v___x_2045_ = lean_apply_1(v_inst_2039_, v_a_2041_);
v___x_2046_ = 32ULL;
v___x_2047_ = lean_unbox_uint64(v___x_2045_);
v___x_2048_ = lean_uint64_shift_right(v___x_2047_, v___x_2046_);
v___x_2049_ = lean_unbox_uint64(v___x_2045_);
lean_dec_ref(v___x_2045_);
v_fold_2050_ = lean_uint64_xor(v___x_2049_, v___x_2048_);
v___x_2051_ = 16ULL;
v___x_2052_ = lean_uint64_shift_right(v_fold_2050_, v___x_2051_);
v___x_2053_ = lean_uint64_xor(v_fold_2050_, v___x_2052_);
v___x_2054_ = lean_uint64_to_usize(v___x_2053_);
v___x_2055_ = lean_usize_of_nat(v___x_2044_);
v___x_2056_ = ((size_t)1ULL);
v___x_2057_ = lean_usize_sub(v___x_2055_, v___x_2056_);
v___x_2058_ = lean_usize_land(v___x_2054_, v___x_2057_);
v___x_2059_ = lean_array_uget_borrowed(v_buckets_2043_, v___x_2058_);
lean_inc(v___x_2059_);
v___x_2060_ = l_Std_DHashMap_Internal_AssocList_getD___redArg(v_inst_2038_, v_a_2041_, v_fallback_2042_, v___x_2059_);
return v___x_2060_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg___boxed(lean_object* v_inst_2061_, lean_object* v_inst_2062_, lean_object* v_m_2063_, lean_object* v_a_2064_, lean_object* v_fallback_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(v_inst_2061_, v_inst_2062_, v_m_2063_, v_a_2064_, v_fallback_2065_);
lean_dec(v_fallback_2065_);
lean_dec_ref(v_m_2063_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD(lean_object* v_00_u03b1_2067_, lean_object* v_00_u03b2_2068_, lean_object* v_inst_2069_, lean_object* v_inst_2070_, lean_object* v_m_2071_, lean_object* v_a_2072_, lean_object* v_fallback_2073_){
_start:
{
lean_object* v___x_2074_; 
v___x_2074_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(v_inst_2069_, v_inst_2070_, v_m_2071_, v_a_2072_, v_fallback_2073_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___boxed(lean_object* v_00_u03b1_2075_, lean_object* v_00_u03b2_2076_, lean_object* v_inst_2077_, lean_object* v_inst_2078_, lean_object* v_m_2079_, lean_object* v_a_2080_, lean_object* v_fallback_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD(v_00_u03b1_2075_, v_00_u03b2_2076_, v_inst_2077_, v_inst_2078_, v_m_2079_, v_a_2080_, v_fallback_2081_);
lean_dec(v_fallback_2081_);
lean_dec_ref(v_m_2079_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg(lean_object* v_inst_2083_, lean_object* v_inst_2084_, lean_object* v_inst_2085_, lean_object* v_m_2086_, lean_object* v_a_2087_){
_start:
{
lean_object* v_buckets_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; uint64_t v___x_2091_; uint64_t v___x_2092_; uint64_t v___x_2093_; uint64_t v___x_2094_; uint64_t v_fold_2095_; uint64_t v___x_2096_; uint64_t v___x_2097_; uint64_t v___x_2098_; size_t v___x_2099_; size_t v___x_2100_; size_t v___x_2101_; size_t v___x_2102_; size_t v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v_buckets_2088_ = lean_ctor_get(v_m_2086_, 1);
v___x_2089_ = lean_array_get_size(v_buckets_2088_);
lean_inc(v_a_2087_);
v___x_2090_ = lean_apply_1(v_inst_2084_, v_a_2087_);
v___x_2091_ = 32ULL;
v___x_2092_ = lean_unbox_uint64(v___x_2090_);
v___x_2093_ = lean_uint64_shift_right(v___x_2092_, v___x_2091_);
v___x_2094_ = lean_unbox_uint64(v___x_2090_);
lean_dec_ref(v___x_2090_);
v_fold_2095_ = lean_uint64_xor(v___x_2094_, v___x_2093_);
v___x_2096_ = 16ULL;
v___x_2097_ = lean_uint64_shift_right(v_fold_2095_, v___x_2096_);
v___x_2098_ = lean_uint64_xor(v_fold_2095_, v___x_2097_);
v___x_2099_ = lean_uint64_to_usize(v___x_2098_);
v___x_2100_ = lean_usize_of_nat(v___x_2089_);
v___x_2101_ = ((size_t)1ULL);
v___x_2102_ = lean_usize_sub(v___x_2100_, v___x_2101_);
v___x_2103_ = lean_usize_land(v___x_2099_, v___x_2102_);
v___x_2104_ = lean_array_uget_borrowed(v_buckets_2088_, v___x_2103_);
lean_inc(v___x_2104_);
v___x_2105_ = l_Std_DHashMap_Internal_AssocList_get_x21___redArg(v_inst_2083_, v_inst_2085_, v_a_2087_, v___x_2104_);
return v___x_2105_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg___boxed(lean_object* v_inst_2106_, lean_object* v_inst_2107_, lean_object* v_inst_2108_, lean_object* v_m_2109_, lean_object* v_a_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg(v_inst_2106_, v_inst_2107_, v_inst_2108_, v_m_2109_, v_a_2110_);
lean_dec_ref(v_m_2109_);
lean_dec(v_inst_2108_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21(lean_object* v_00_u03b1_2112_, lean_object* v_00_u03b2_2113_, lean_object* v_inst_2114_, lean_object* v_inst_2115_, lean_object* v_inst_2116_, lean_object* v_m_2117_, lean_object* v_a_2118_){
_start:
{
lean_object* v___x_2119_; 
v___x_2119_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg(v_inst_2114_, v_inst_2115_, v_inst_2116_, v_m_2117_, v_a_2118_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___boxed(lean_object* v_00_u03b1_2120_, lean_object* v_00_u03b2_2121_, lean_object* v_inst_2122_, lean_object* v_inst_2123_, lean_object* v_inst_2124_, lean_object* v_m_2125_, lean_object* v_a_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21(v_00_u03b1_2120_, v_00_u03b2_2121_, v_inst_2122_, v_inst_2123_, v_inst_2124_, v_m_2125_, v_a_2126_);
lean_dec_ref(v_m_2125_);
lean_dec(v_inst_2124_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getThenInsertIfNew_x3f___redArg(lean_object* v_inst_2128_, lean_object* v_inst_2129_, lean_object* v_m_2130_, lean_object* v_a_2131_, lean_object* v_b_2132_){
_start:
{
lean_object* v_size_2133_; lean_object* v_buckets_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; uint64_t v___x_2137_; uint64_t v___x_2138_; uint64_t v___x_2139_; uint64_t v___x_2140_; uint64_t v_fold_2141_; uint64_t v___x_2142_; uint64_t v___x_2143_; uint64_t v___x_2144_; size_t v___x_2145_; size_t v___x_2146_; size_t v___x_2147_; size_t v___x_2148_; size_t v___x_2149_; lean_object* v_bkt_2150_; lean_object* v___x_2151_; 
v_size_2133_ = lean_ctor_get(v_m_2130_, 0);
v_buckets_2134_ = lean_ctor_get(v_m_2130_, 1);
v___x_2135_ = lean_array_get_size(v_buckets_2134_);
lean_inc_ref(v_inst_2129_);
lean_inc_n(v_a_2131_, 2);
v___x_2136_ = lean_apply_1(v_inst_2129_, v_a_2131_);
v___x_2137_ = 32ULL;
v___x_2138_ = lean_unbox_uint64(v___x_2136_);
v___x_2139_ = lean_uint64_shift_right(v___x_2138_, v___x_2137_);
v___x_2140_ = lean_unbox_uint64(v___x_2136_);
lean_dec_ref(v___x_2136_);
v_fold_2141_ = lean_uint64_xor(v___x_2140_, v___x_2139_);
v___x_2142_ = 16ULL;
v___x_2143_ = lean_uint64_shift_right(v_fold_2141_, v___x_2142_);
v___x_2144_ = lean_uint64_xor(v_fold_2141_, v___x_2143_);
v___x_2145_ = lean_uint64_to_usize(v___x_2144_);
v___x_2146_ = lean_usize_of_nat(v___x_2135_);
v___x_2147_ = ((size_t)1ULL);
v___x_2148_ = lean_usize_sub(v___x_2146_, v___x_2147_);
v___x_2149_ = lean_usize_land(v___x_2145_, v___x_2148_);
v_bkt_2150_ = lean_array_uget_borrowed(v_buckets_2134_, v___x_2149_);
lean_inc(v_bkt_2150_);
v___x_2151_ = l_Std_DHashMap_Internal_AssocList_get_x3f___redArg(v_inst_2128_, v_a_2131_, v_bkt_2150_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2174_; 
lean_inc_ref(v_buckets_2134_);
lean_inc(v_size_2133_);
v_isSharedCheck_2174_ = !lean_is_exclusive(v_m_2130_);
if (v_isSharedCheck_2174_ == 0)
{
lean_object* v_unused_2175_; lean_object* v_unused_2176_; 
v_unused_2175_ = lean_ctor_get(v_m_2130_, 1);
lean_dec(v_unused_2175_);
v_unused_2176_ = lean_ctor_get(v_m_2130_, 0);
lean_dec(v_unused_2176_);
v___x_2153_ = v_m_2130_;
v_isShared_2154_ = v_isSharedCheck_2174_;
goto v_resetjp_2152_;
}
else
{
lean_dec(v_m_2130_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2174_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2155_; lean_object* v_size_x27_2156_; lean_object* v___x_2157_; lean_object* v_buckets_x27_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; uint8_t v___x_2164_; 
v___x_2155_ = lean_unsigned_to_nat(1u);
v_size_x27_2156_ = lean_nat_add(v_size_2133_, v___x_2155_);
lean_dec(v_size_2133_);
lean_inc(v_bkt_2150_);
v___x_2157_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2157_, 0, v_a_2131_);
lean_ctor_set(v___x_2157_, 1, v_b_2132_);
lean_ctor_set(v___x_2157_, 2, v_bkt_2150_);
v_buckets_x27_2158_ = lean_array_uset(v_buckets_2134_, v___x_2149_, v___x_2157_);
v___x_2159_ = lean_unsigned_to_nat(4u);
v___x_2160_ = lean_nat_mul(v_size_x27_2156_, v___x_2159_);
v___x_2161_ = lean_unsigned_to_nat(3u);
v___x_2162_ = lean_nat_div(v___x_2160_, v___x_2161_);
lean_dec(v___x_2160_);
v___x_2163_ = lean_array_get_size(v_buckets_x27_2158_);
v___x_2164_ = lean_nat_dec_le(v___x_2162_, v___x_2163_);
lean_dec(v___x_2162_);
if (v___x_2164_ == 0)
{
lean_object* v_val_2165_; lean_object* v___x_2167_; 
v_val_2165_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_2129_, v_buckets_x27_2158_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 1, v_val_2165_);
lean_ctor_set(v___x_2153_, 0, v_size_x27_2156_);
v___x_2167_ = v___x_2153_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_size_x27_2156_);
lean_ctor_set(v_reuseFailAlloc_2169_, 1, v_val_2165_);
v___x_2167_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
lean_object* v___x_2168_; 
v___x_2168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2151_);
lean_ctor_set(v___x_2168_, 1, v___x_2167_);
return v___x_2168_;
}
}
else
{
lean_object* v___x_2171_; 
lean_dec_ref(v_inst_2129_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 1, v_buckets_x27_2158_);
lean_ctor_set(v___x_2153_, 0, v_size_x27_2156_);
v___x_2171_ = v___x_2153_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_size_x27_2156_);
lean_ctor_set(v_reuseFailAlloc_2173_, 1, v_buckets_x27_2158_);
v___x_2171_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
lean_object* v___x_2172_; 
v___x_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2151_);
lean_ctor_set(v___x_2172_, 1, v___x_2171_);
return v___x_2172_;
}
}
}
}
else
{
lean_object* v___x_2177_; 
lean_dec(v_b_2132_);
lean_dec(v_a_2131_);
lean_dec_ref(v_inst_2129_);
v___x_2177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2151_);
lean_ctor_set(v___x_2177_, 1, v_m_2130_);
return v___x_2177_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getThenInsertIfNew_x3f(lean_object* v_00_u03b1_2178_, lean_object* v_00_u03b2_2179_, lean_object* v_inst_2180_, lean_object* v_inst_2181_, lean_object* v_m_2182_, lean_object* v_a_2183_, lean_object* v_b_2184_){
_start:
{
lean_object* v_size_2185_; lean_object* v_buckets_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; uint64_t v___x_2189_; uint64_t v___x_2190_; uint64_t v___x_2191_; uint64_t v___x_2192_; uint64_t v_fold_2193_; uint64_t v___x_2194_; uint64_t v___x_2195_; uint64_t v___x_2196_; size_t v___x_2197_; size_t v___x_2198_; size_t v___x_2199_; size_t v___x_2200_; size_t v___x_2201_; lean_object* v_bkt_2202_; lean_object* v___x_2203_; 
v_size_2185_ = lean_ctor_get(v_m_2182_, 0);
v_buckets_2186_ = lean_ctor_get(v_m_2182_, 1);
v___x_2187_ = lean_array_get_size(v_buckets_2186_);
lean_inc_ref(v_inst_2181_);
lean_inc_n(v_a_2183_, 2);
v___x_2188_ = lean_apply_1(v_inst_2181_, v_a_2183_);
v___x_2189_ = 32ULL;
v___x_2190_ = lean_unbox_uint64(v___x_2188_);
v___x_2191_ = lean_uint64_shift_right(v___x_2190_, v___x_2189_);
v___x_2192_ = lean_unbox_uint64(v___x_2188_);
lean_dec_ref(v___x_2188_);
v_fold_2193_ = lean_uint64_xor(v___x_2192_, v___x_2191_);
v___x_2194_ = 16ULL;
v___x_2195_ = lean_uint64_shift_right(v_fold_2193_, v___x_2194_);
v___x_2196_ = lean_uint64_xor(v_fold_2193_, v___x_2195_);
v___x_2197_ = lean_uint64_to_usize(v___x_2196_);
v___x_2198_ = lean_usize_of_nat(v___x_2187_);
v___x_2199_ = ((size_t)1ULL);
v___x_2200_ = lean_usize_sub(v___x_2198_, v___x_2199_);
v___x_2201_ = lean_usize_land(v___x_2197_, v___x_2200_);
v_bkt_2202_ = lean_array_uget_borrowed(v_buckets_2186_, v___x_2201_);
lean_inc(v_bkt_2202_);
v___x_2203_ = l_Std_DHashMap_Internal_AssocList_get_x3f___redArg(v_inst_2180_, v_a_2183_, v_bkt_2202_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2226_; 
lean_inc_ref(v_buckets_2186_);
lean_inc(v_size_2185_);
v_isSharedCheck_2226_ = !lean_is_exclusive(v_m_2182_);
if (v_isSharedCheck_2226_ == 0)
{
lean_object* v_unused_2227_; lean_object* v_unused_2228_; 
v_unused_2227_ = lean_ctor_get(v_m_2182_, 1);
lean_dec(v_unused_2227_);
v_unused_2228_ = lean_ctor_get(v_m_2182_, 0);
lean_dec(v_unused_2228_);
v___x_2205_ = v_m_2182_;
v_isShared_2206_ = v_isSharedCheck_2226_;
goto v_resetjp_2204_;
}
else
{
lean_dec(v_m_2182_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2226_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2207_; lean_object* v_size_x27_2208_; lean_object* v___x_2209_; lean_object* v_buckets_x27_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; uint8_t v___x_2216_; 
v___x_2207_ = lean_unsigned_to_nat(1u);
v_size_x27_2208_ = lean_nat_add(v_size_2185_, v___x_2207_);
lean_dec(v_size_2185_);
lean_inc(v_bkt_2202_);
v___x_2209_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2209_, 0, v_a_2183_);
lean_ctor_set(v___x_2209_, 1, v_b_2184_);
lean_ctor_set(v___x_2209_, 2, v_bkt_2202_);
v_buckets_x27_2210_ = lean_array_uset(v_buckets_2186_, v___x_2201_, v___x_2209_);
v___x_2211_ = lean_unsigned_to_nat(4u);
v___x_2212_ = lean_nat_mul(v_size_x27_2208_, v___x_2211_);
v___x_2213_ = lean_unsigned_to_nat(3u);
v___x_2214_ = lean_nat_div(v___x_2212_, v___x_2213_);
lean_dec(v___x_2212_);
v___x_2215_ = lean_array_get_size(v_buckets_x27_2210_);
v___x_2216_ = lean_nat_dec_le(v___x_2214_, v___x_2215_);
lean_dec(v___x_2214_);
if (v___x_2216_ == 0)
{
lean_object* v_val_2217_; lean_object* v___x_2219_; 
v_val_2217_ = l_Std_DHashMap_Internal_Raw_u2080_expand___redArg(v_inst_2181_, v_buckets_x27_2210_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 1, v_val_2217_);
lean_ctor_set(v___x_2205_, 0, v_size_x27_2208_);
v___x_2219_ = v___x_2205_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_size_x27_2208_);
lean_ctor_set(v_reuseFailAlloc_2221_, 1, v_val_2217_);
v___x_2219_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
lean_object* v___x_2220_; 
v___x_2220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2203_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
return v___x_2220_;
}
}
else
{
lean_object* v___x_2223_; 
lean_dec_ref(v_inst_2181_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 1, v_buckets_x27_2210_);
lean_ctor_set(v___x_2205_, 0, v_size_x27_2208_);
v___x_2223_ = v___x_2205_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_size_x27_2208_);
lean_ctor_set(v_reuseFailAlloc_2225_, 1, v_buckets_x27_2210_);
v___x_2223_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v___x_2224_; 
v___x_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2203_);
lean_ctor_set(v___x_2224_, 1, v___x_2223_);
return v___x_2224_;
}
}
}
}
else
{
lean_object* v___x_2229_; 
lean_dec(v_b_2184_);
lean_dec(v_a_2183_);
lean_dec_ref(v_inst_2181_);
v___x_2229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2203_);
lean_ctor_set(v___x_2229_, 1, v_m_2182_);
return v___x_2229_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___redArg___lam__0(lean_object* v_inst_2230_, lean_object* v_inst_2231_, lean_object* v_x_2232_, lean_object* v_____s_2233_){
_start:
{
lean_object* v_fst_2234_; lean_object* v_snd_2235_; lean_object* v_r_2236_; lean_object* v___x_2237_; 
v_fst_2234_ = lean_ctor_get(v_x_2232_, 0);
lean_inc(v_fst_2234_);
v_snd_2235_ = lean_ctor_get(v_x_2232_, 1);
lean_inc(v_snd_2235_);
lean_dec_ref(v_x_2232_);
v_r_2236_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_2230_, v_inst_2231_, v_____s_2233_, v_fst_2234_, v_snd_2235_);
v___x_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2237_, 0, v_r_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___redArg(lean_object* v_inst_2238_, lean_object* v_inst_2239_, lean_object* v_inst_2240_, lean_object* v_m_2241_, lean_object* v_l_2242_){
_start:
{
lean_object* v___f_2243_; lean_object* v___x_2244_; 
v___f_2243_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2243_, 0, v_inst_2239_);
lean_closure_set(v___f_2243_, 1, v_inst_2240_);
v___x_2244_ = lean_apply_4(v_inst_2238_, lean_box(0), v_l_2242_, v_m_2241_, v___f_2243_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany(lean_object* v_00_u03b1_2245_, lean_object* v_00_u03b2_2246_, lean_object* v_00_u03c1_2247_, lean_object* v_inst_2248_, lean_object* v_inst_2249_, lean_object* v_inst_2250_, lean_object* v_m_2251_, lean_object* v_l_2252_){
_start:
{
lean_object* v___x_2253_; 
v___x_2253_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___redArg(v_inst_2248_, v_inst_2249_, v_inst_2250_, v_m_2251_, v_l_2252_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___redArg___lam__0(lean_object* v_inst_2254_, lean_object* v_inst_2255_, lean_object* v_a_2256_, lean_object* v_____s_2257_){
_start:
{
lean_object* v___x_2258_; lean_object* v_r_2259_; lean_object* v___x_2260_; 
v___x_2258_ = lean_box(0);
v_r_2259_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v_inst_2254_, v_inst_2255_, v_____s_2257_, v_a_2256_, v___x_2258_);
v___x_2260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2260_, 0, v_r_2259_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___redArg(lean_object* v_inst_2261_, lean_object* v_inst_2262_, lean_object* v_inst_2263_, lean_object* v_m_2264_, lean_object* v_l_2265_){
_start:
{
lean_object* v___f_2266_; lean_object* v___x_2267_; 
v___f_2266_ = lean_alloc_closure((void*)(l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2266_, 0, v_inst_2262_);
lean_closure_set(v___f_2266_, 1, v_inst_2263_);
v___x_2267_ = lean_apply_4(v_inst_2261_, lean_box(0), v_l_2265_, v_m_2264_, v___f_2266_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit(lean_object* v_00_u03b1_2268_, lean_object* v_00_u03c1_2269_, lean_object* v_inst_2270_, lean_object* v_inst_2271_, lean_object* v_inst_2272_, lean_object* v_m_2273_, lean_object* v_l_2274_){
_start:
{
lean_object* v___x_2275_; 
v___x_2275_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___redArg(v_inst_2270_, v_inst_2271_, v_inst_2272_, v_m_2273_, v_l_2274_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___redArg(lean_object* v_inst_2276_, lean_object* v_inst_2277_, lean_object* v_m_2278_, lean_object* v_a_2279_){
_start:
{
lean_object* v_buckets_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; uint64_t v___x_2283_; uint64_t v___x_2284_; uint64_t v___x_2285_; uint64_t v___x_2286_; uint64_t v_fold_2287_; uint64_t v___x_2288_; uint64_t v___x_2289_; uint64_t v___x_2290_; size_t v___x_2291_; size_t v___x_2292_; size_t v___x_2293_; size_t v___x_2294_; size_t v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v_buckets_2280_ = lean_ctor_get(v_m_2278_, 1);
v___x_2281_ = lean_array_get_size(v_buckets_2280_);
lean_inc(v_a_2279_);
v___x_2282_ = lean_apply_1(v_inst_2277_, v_a_2279_);
v___x_2283_ = 32ULL;
v___x_2284_ = lean_unbox_uint64(v___x_2282_);
v___x_2285_ = lean_uint64_shift_right(v___x_2284_, v___x_2283_);
v___x_2286_ = lean_unbox_uint64(v___x_2282_);
lean_dec_ref(v___x_2282_);
v_fold_2287_ = lean_uint64_xor(v___x_2286_, v___x_2285_);
v___x_2288_ = 16ULL;
v___x_2289_ = lean_uint64_shift_right(v_fold_2287_, v___x_2288_);
v___x_2290_ = lean_uint64_xor(v_fold_2287_, v___x_2289_);
v___x_2291_ = lean_uint64_to_usize(v___x_2290_);
v___x_2292_ = lean_usize_of_nat(v___x_2281_);
v___x_2293_ = ((size_t)1ULL);
v___x_2294_ = lean_usize_sub(v___x_2292_, v___x_2293_);
v___x_2295_ = lean_usize_land(v___x_2291_, v___x_2294_);
v___x_2296_ = lean_array_uget_borrowed(v_buckets_2280_, v___x_2295_);
lean_inc(v___x_2296_);
v___x_2297_ = l_Std_DHashMap_Internal_AssocList_getKey_x3f___redArg(v_inst_2276_, v_a_2279_, v___x_2296_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___redArg___boxed(lean_object* v_inst_2298_, lean_object* v_inst_2299_, lean_object* v_m_2300_, lean_object* v_a_2301_){
_start:
{
lean_object* v_res_2302_; 
v_res_2302_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___redArg(v_inst_2298_, v_inst_2299_, v_m_2300_, v_a_2301_);
lean_dec_ref(v_m_2300_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f(lean_object* v_00_u03b1_2303_, lean_object* v_00_u03b2_2304_, lean_object* v_inst_2305_, lean_object* v_inst_2306_, lean_object* v_m_2307_, lean_object* v_a_2308_){
_start:
{
lean_object* v___x_2309_; 
v___x_2309_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___redArg(v_inst_2305_, v_inst_2306_, v_m_2307_, v_a_2308_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___boxed(lean_object* v_00_u03b1_2310_, lean_object* v_00_u03b2_2311_, lean_object* v_inst_2312_, lean_object* v_inst_2313_, lean_object* v_m_2314_, lean_object* v_a_2315_){
_start:
{
lean_object* v_res_2316_; 
v_res_2316_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f(v_00_u03b1_2310_, v_00_u03b2_2311_, v_inst_2312_, v_inst_2313_, v_m_2314_, v_a_2315_);
lean_dec_ref(v_m_2314_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey___redArg(lean_object* v_inst_2317_, lean_object* v_inst_2318_, lean_object* v_m_2319_, lean_object* v_a_2320_){
_start:
{
lean_object* v_buckets_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; uint64_t v___x_2324_; uint64_t v___x_2325_; uint64_t v___x_2326_; uint64_t v___x_2327_; uint64_t v_fold_2328_; uint64_t v___x_2329_; uint64_t v___x_2330_; uint64_t v___x_2331_; size_t v___x_2332_; size_t v___x_2333_; size_t v___x_2334_; size_t v___x_2335_; size_t v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v_buckets_2321_ = lean_ctor_get(v_m_2319_, 1);
v___x_2322_ = lean_array_get_size(v_buckets_2321_);
lean_inc(v_a_2320_);
v___x_2323_ = lean_apply_1(v_inst_2318_, v_a_2320_);
v___x_2324_ = 32ULL;
v___x_2325_ = lean_unbox_uint64(v___x_2323_);
v___x_2326_ = lean_uint64_shift_right(v___x_2325_, v___x_2324_);
v___x_2327_ = lean_unbox_uint64(v___x_2323_);
lean_dec_ref(v___x_2323_);
v_fold_2328_ = lean_uint64_xor(v___x_2327_, v___x_2326_);
v___x_2329_ = 16ULL;
v___x_2330_ = lean_uint64_shift_right(v_fold_2328_, v___x_2329_);
v___x_2331_ = lean_uint64_xor(v_fold_2328_, v___x_2330_);
v___x_2332_ = lean_uint64_to_usize(v___x_2331_);
v___x_2333_ = lean_usize_of_nat(v___x_2322_);
v___x_2334_ = ((size_t)1ULL);
v___x_2335_ = lean_usize_sub(v___x_2333_, v___x_2334_);
v___x_2336_ = lean_usize_land(v___x_2332_, v___x_2335_);
v___x_2337_ = lean_array_uget_borrowed(v_buckets_2321_, v___x_2336_);
lean_inc(v___x_2337_);
v___x_2338_ = l_Std_DHashMap_Internal_AssocList_getKey___redArg(v_inst_2317_, v_a_2320_, v___x_2337_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey___redArg___boxed(lean_object* v_inst_2339_, lean_object* v_inst_2340_, lean_object* v_m_2341_, lean_object* v_a_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Std_DHashMap_Internal_Raw_u2080_getKey___redArg(v_inst_2339_, v_inst_2340_, v_m_2341_, v_a_2342_);
lean_dec_ref(v_m_2341_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey(lean_object* v_00_u03b1_2344_, lean_object* v_00_u03b2_2345_, lean_object* v_inst_2346_, lean_object* v_inst_2347_, lean_object* v_m_2348_, lean_object* v_a_2349_, lean_object* v_hma_2350_){
_start:
{
lean_object* v___x_2351_; 
v___x_2351_ = l_Std_DHashMap_Internal_Raw_u2080_getKey___redArg(v_inst_2346_, v_inst_2347_, v_m_2348_, v_a_2349_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey___boxed(lean_object* v_00_u03b1_2352_, lean_object* v_00_u03b2_2353_, lean_object* v_inst_2354_, lean_object* v_inst_2355_, lean_object* v_m_2356_, lean_object* v_a_2357_, lean_object* v_hma_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_Std_DHashMap_Internal_Raw_u2080_getKey(v_00_u03b1_2352_, v_00_u03b2_2353_, v_inst_2354_, v_inst_2355_, v_m_2356_, v_a_2357_, v_hma_2358_);
lean_dec_ref(v_m_2356_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD___redArg(lean_object* v_inst_2360_, lean_object* v_inst_2361_, lean_object* v_m_2362_, lean_object* v_a_2363_, lean_object* v_fallback_2364_){
_start:
{
lean_object* v_buckets_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; uint64_t v___x_2368_; uint64_t v___x_2369_; uint64_t v___x_2370_; uint64_t v___x_2371_; uint64_t v_fold_2372_; uint64_t v___x_2373_; uint64_t v___x_2374_; uint64_t v___x_2375_; size_t v___x_2376_; size_t v___x_2377_; size_t v___x_2378_; size_t v___x_2379_; size_t v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v_buckets_2365_ = lean_ctor_get(v_m_2362_, 1);
v___x_2366_ = lean_array_get_size(v_buckets_2365_);
lean_inc(v_a_2363_);
v___x_2367_ = lean_apply_1(v_inst_2361_, v_a_2363_);
v___x_2368_ = 32ULL;
v___x_2369_ = lean_unbox_uint64(v___x_2367_);
v___x_2370_ = lean_uint64_shift_right(v___x_2369_, v___x_2368_);
v___x_2371_ = lean_unbox_uint64(v___x_2367_);
lean_dec_ref(v___x_2367_);
v_fold_2372_ = lean_uint64_xor(v___x_2371_, v___x_2370_);
v___x_2373_ = 16ULL;
v___x_2374_ = lean_uint64_shift_right(v_fold_2372_, v___x_2373_);
v___x_2375_ = lean_uint64_xor(v_fold_2372_, v___x_2374_);
v___x_2376_ = lean_uint64_to_usize(v___x_2375_);
v___x_2377_ = lean_usize_of_nat(v___x_2366_);
v___x_2378_ = ((size_t)1ULL);
v___x_2379_ = lean_usize_sub(v___x_2377_, v___x_2378_);
v___x_2380_ = lean_usize_land(v___x_2376_, v___x_2379_);
v___x_2381_ = lean_array_uget_borrowed(v_buckets_2365_, v___x_2380_);
lean_inc(v___x_2381_);
v___x_2382_ = l_Std_DHashMap_Internal_AssocList_getKeyD___redArg(v_inst_2360_, v_a_2363_, v_fallback_2364_, v___x_2381_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD___redArg___boxed(lean_object* v_inst_2383_, lean_object* v_inst_2384_, lean_object* v_m_2385_, lean_object* v_a_2386_, lean_object* v_fallback_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l_Std_DHashMap_Internal_Raw_u2080_getKeyD___redArg(v_inst_2383_, v_inst_2384_, v_m_2385_, v_a_2386_, v_fallback_2387_);
lean_dec(v_fallback_2387_);
lean_dec_ref(v_m_2385_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD(lean_object* v_00_u03b1_2389_, lean_object* v_00_u03b2_2390_, lean_object* v_inst_2391_, lean_object* v_inst_2392_, lean_object* v_m_2393_, lean_object* v_a_2394_, lean_object* v_fallback_2395_){
_start:
{
lean_object* v___x_2396_; 
v___x_2396_ = l_Std_DHashMap_Internal_Raw_u2080_getKeyD___redArg(v_inst_2391_, v_inst_2392_, v_m_2393_, v_a_2394_, v_fallback_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKeyD___boxed(lean_object* v_00_u03b1_2397_, lean_object* v_00_u03b2_2398_, lean_object* v_inst_2399_, lean_object* v_inst_2400_, lean_object* v_m_2401_, lean_object* v_a_2402_, lean_object* v_fallback_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Std_DHashMap_Internal_Raw_u2080_getKeyD(v_00_u03b1_2397_, v_00_u03b2_2398_, v_inst_2399_, v_inst_2400_, v_m_2401_, v_a_2402_, v_fallback_2403_);
lean_dec(v_fallback_2403_);
lean_dec_ref(v_m_2401_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21___redArg(lean_object* v_inst_2405_, lean_object* v_inst_2406_, lean_object* v_inst_2407_, lean_object* v_m_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v_buckets_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; uint64_t v___x_2413_; uint64_t v___x_2414_; uint64_t v___x_2415_; uint64_t v___x_2416_; uint64_t v_fold_2417_; uint64_t v___x_2418_; uint64_t v___x_2419_; uint64_t v___x_2420_; size_t v___x_2421_; size_t v___x_2422_; size_t v___x_2423_; size_t v___x_2424_; size_t v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v_buckets_2410_ = lean_ctor_get(v_m_2408_, 1);
v___x_2411_ = lean_array_get_size(v_buckets_2410_);
lean_inc(v_a_2409_);
v___x_2412_ = lean_apply_1(v_inst_2406_, v_a_2409_);
v___x_2413_ = 32ULL;
v___x_2414_ = lean_unbox_uint64(v___x_2412_);
v___x_2415_ = lean_uint64_shift_right(v___x_2414_, v___x_2413_);
v___x_2416_ = lean_unbox_uint64(v___x_2412_);
lean_dec_ref(v___x_2412_);
v_fold_2417_ = lean_uint64_xor(v___x_2416_, v___x_2415_);
v___x_2418_ = 16ULL;
v___x_2419_ = lean_uint64_shift_right(v_fold_2417_, v___x_2418_);
v___x_2420_ = lean_uint64_xor(v_fold_2417_, v___x_2419_);
v___x_2421_ = lean_uint64_to_usize(v___x_2420_);
v___x_2422_ = lean_usize_of_nat(v___x_2411_);
v___x_2423_ = ((size_t)1ULL);
v___x_2424_ = lean_usize_sub(v___x_2422_, v___x_2423_);
v___x_2425_ = lean_usize_land(v___x_2421_, v___x_2424_);
v___x_2426_ = lean_array_uget_borrowed(v_buckets_2410_, v___x_2425_);
lean_inc(v___x_2426_);
v___x_2427_ = l_Std_DHashMap_Internal_AssocList_getKey_x21___redArg(v_inst_2405_, v_inst_2407_, v_a_2409_, v___x_2426_);
return v___x_2427_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21___redArg___boxed(lean_object* v_inst_2428_, lean_object* v_inst_2429_, lean_object* v_inst_2430_, lean_object* v_m_2431_, lean_object* v_a_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x21___redArg(v_inst_2428_, v_inst_2429_, v_inst_2430_, v_m_2431_, v_a_2432_);
lean_dec_ref(v_m_2431_);
lean_dec(v_inst_2430_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21(lean_object* v_00_u03b1_2434_, lean_object* v_00_u03b2_2435_, lean_object* v_inst_2436_, lean_object* v_inst_2437_, lean_object* v_inst_2438_, lean_object* v_m_2439_, lean_object* v_a_2440_){
_start:
{
lean_object* v___x_2441_; 
v___x_2441_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x21___redArg(v_inst_2436_, v_inst_2437_, v_inst_2438_, v_m_2439_, v_a_2440_);
return v___x_2441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x21___boxed(lean_object* v_00_u03b1_2442_, lean_object* v_00_u03b2_2443_, lean_object* v_inst_2444_, lean_object* v_inst_2445_, lean_object* v_inst_2446_, lean_object* v_m_2447_, lean_object* v_a_2448_){
_start:
{
lean_object* v_res_2449_; 
v_res_2449_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x21(v_00_u03b1_2442_, v_00_u03b2_2443_, v_inst_2444_, v_inst_2445_, v_inst_2446_, v_m_2447_, v_a_2448_);
lean_dec_ref(v_m_2447_);
lean_dec(v_inst_2446_);
return v_res_2449_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_DHashMap_RawDef(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_Internal_List_Defs(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_DHashMap_Internal_Index(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Power2_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Power2_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Impl(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Data_DHashMap_Internal_Defs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_DHashMap_RawDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_Internal_List_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_DHashMap_Internal_Index(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Power2_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Power2_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Impl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Data_DHashMap_Internal_Defs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* initialize_Std_Data_DHashMap_RawDef(uint8_t builtin);
lean_object* initialize_Std_Data_Internal_List_Defs(uint8_t builtin);
lean_object* initialize_Std_Data_DHashMap_Internal_Index(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Power2_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Power2_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_List_Impl(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Data_DHashMap_Internal_Defs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_DHashMap_RawDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_Internal_List_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_DHashMap_Internal_Index(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Power2_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Power2_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Impl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_DHashMap_Internal_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Data_DHashMap_Internal_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Data_DHashMap_Internal_Defs(builtin);
}
#ifdef __cplusplus
}
#endif

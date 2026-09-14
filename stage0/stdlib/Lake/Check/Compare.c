// Lean compiler output
// Module: Lake.Check.Compare
// Imports: public import LeanExport.Parse import Lake.Check.Util import Init.Data.ToString.Macro import Std.Data.HashSet
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
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
uint8_t l_Lean_instBEqConstantInfo_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_value_x3f(lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_instBEqConstantVal_beq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_instBEqDefinitionSafety_beq(uint8_t, uint8_t);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___closed__0 = (const lean_object*)&l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___closed__0_value;
static const lean_ctor_object l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___boxed__const__1 = (const lean_object*)&l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts___closed__0 = (const lean_object*)&l___private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Const does not match between challenge and target '"};
static const lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__0 = (const lean_object*)&l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__0_value;
static const lean_string_object l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1 = (const lean_object*)&l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1_value;
static const lean_string_object l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Const not found in solution '"};
static const lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__2 = (const lean_object*)&l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__2_value;
static const lean_string_object l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Const not found in challenge '"};
static const lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__3 = (const lean_object*)&l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Check_definitionHoleMatches(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_definitionHoleMatches___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Solution constant is not a definition: '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Challenge constant is not a definition: '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Const not found in solution: '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Const not found in challenge: '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Challenge and solution constant kind don't match: '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Challenge and solution theorem statement do not match: '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Check_compareAt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_compareAt___closed__0;
static lean_once_cell_t l_Lake_Check_compareAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_compareAt___closed__1;
LEAN_EXPORT lean_object* l_Lake_Check_compareAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_compareAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0___redArg(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_key_4_; lean_object* v_tail_5_; uint8_t v___x_6_; 
v_key_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v___x_6_ = lean_name_eq(v_key_4_, v_a_1_);
if (v___x_6_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0___redArg___boxed(lean_object* v_a_8_, lean_object* v_x_9_){
_start:
{
uint8_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0___redArg(v_a_8_, v_x_9_);
lean_dec(v_x_9_);
lean_dec(v_a_8_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___redArg(lean_object* v_m_12_, lean_object* v_a_13_){
_start:
{
lean_object* v_buckets_14_; lean_object* v___x_15_; uint64_t v___y_17_; lean_object* v___x_31_; 
v_buckets_14_ = lean_ctor_get(v_m_12_, 1);
v___x_15_ = lean_array_get_size(v_buckets_14_);
v___x_31_ = l_unsafeCast___redArg(v_a_13_);
if (lean_obj_tag(v___x_31_) == 0)
{
uint64_t v___x_32_; 
v___x_32_ = 1723ULL;
v___y_17_ = v___x_32_;
goto v___jp_16_;
}
else
{
uint64_t v_hash_33_; 
v_hash_33_ = lean_ctor_get_uint64(v___x_31_, sizeof(void*)*2);
lean_dec(v___x_31_);
v___y_17_ = v_hash_33_;
goto v___jp_16_;
}
v___jp_16_:
{
uint64_t v___x_18_; uint64_t v___x_19_; uint64_t v_fold_20_; uint64_t v___x_21_; uint64_t v___x_22_; uint64_t v___x_23_; size_t v___x_24_; size_t v___x_25_; size_t v___x_26_; size_t v___x_27_; size_t v___x_28_; lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_18_ = 32ULL;
v___x_19_ = lean_uint64_shift_right(v___y_17_, v___x_18_);
v_fold_20_ = lean_uint64_xor(v___y_17_, v___x_19_);
v___x_21_ = 16ULL;
v___x_22_ = lean_uint64_shift_right(v_fold_20_, v___x_21_);
v___x_23_ = lean_uint64_xor(v_fold_20_, v___x_22_);
v___x_24_ = lean_uint64_to_usize(v___x_23_);
v___x_25_ = lean_usize_of_nat(v___x_15_);
v___x_26_ = ((size_t)1ULL);
v___x_27_ = lean_usize_sub(v___x_25_, v___x_26_);
v___x_28_ = lean_usize_land(v___x_24_, v___x_27_);
v___x_29_ = lean_array_uget_borrowed(v_buckets_14_, v___x_28_);
v___x_30_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0___redArg(v_a_13_, v___x_29_);
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___redArg___boxed(lean_object* v_m_34_, lean_object* v_a_35_){
_start:
{
uint8_t v_res_36_; lean_object* v_r_37_; 
v_res_36_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___redArg(v_m_34_, v_a_35_);
lean_dec(v_a_35_);
lean_dec_ref(v_m_34_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist___redArg(lean_object* v_n_38_, lean_object* v_a_39_){
_start:
{
lean_object* v_worklist_40_; lean_object* v_checked_41_; uint8_t v___x_42_; 
v_worklist_40_ = lean_ctor_get(v_a_39_, 0);
v_checked_41_ = lean_ctor_get(v_a_39_, 1);
v___x_42_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___redArg(v_checked_41_, v_n_38_);
if (v___x_42_ == 0)
{
lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_53_; 
lean_inc_ref(v_checked_41_);
lean_inc_ref(v_worklist_40_);
v_isSharedCheck_53_ = !lean_is_exclusive(v_a_39_);
if (v_isSharedCheck_53_ == 0)
{
lean_object* v_unused_54_; lean_object* v_unused_55_; 
v_unused_54_ = lean_ctor_get(v_a_39_, 1);
lean_dec(v_unused_54_);
v_unused_55_ = lean_ctor_get(v_a_39_, 0);
lean_dec(v_unused_55_);
v___x_44_ = v_a_39_;
v_isShared_45_ = v_isSharedCheck_53_;
goto v_resetjp_43_;
}
else
{
lean_dec(v_a_39_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_53_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_49_; 
v___x_46_ = lean_box(0);
v___x_47_ = lean_array_push(v_worklist_40_, v_n_38_);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v___x_47_);
v___x_49_ = v___x_44_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v___x_47_);
lean_ctor_set(v_reuseFailAlloc_52_, 1, v_checked_41_);
v___x_49_ = v_reuseFailAlloc_52_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_50_, 0, v___x_46_);
lean_ctor_set(v___x_50_, 1, v___x_49_);
v___x_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
return v___x_51_;
}
}
}
else
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
lean_dec(v_n_38_);
v___x_56_ = lean_box(0);
v___x_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
lean_ctor_set(v___x_57_, 1, v_a_39_);
v___x_58_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist(lean_object* v_n_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l___private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist___redArg(v_n_59_, v_a_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist___boxed(lean_object* v_n_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist(v_n_63_, v_a_64_, v_a_65_);
lean_dec_ref(v_a_64_);
return v_res_66_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0(lean_object* v_00_u03b2_67_, lean_object* v_m_68_, lean_object* v_a_69_){
_start:
{
uint8_t v___x_70_; 
v___x_70_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___redArg(v_m_68_, v_a_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___boxed(lean_object* v_00_u03b2_71_, lean_object* v_m_72_, lean_object* v_a_73_){
_start:
{
uint8_t v_res_74_; lean_object* v_r_75_; 
v_res_74_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0(v_00_u03b2_71_, v_m_72_, v_a_73_);
lean_dec(v_a_73_);
lean_dec_ref(v_m_72_);
v_r_75_ = lean_box(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0(lean_object* v_00_u03b2_76_, lean_object* v_a_77_, lean_object* v_x_78_){
_start:
{
uint8_t v___x_79_; 
v___x_79_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0___redArg(v_a_77_, v_x_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0___boxed(lean_object* v_00_u03b2_80_, lean_object* v_a_81_, lean_object* v_x_82_){
_start:
{
uint8_t v_res_83_; lean_object* v_r_84_; 
v_res_83_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0(v_00_u03b2_80_, v_a_81_, v_x_82_);
lean_dec(v_x_82_);
lean_dec(v_a_81_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___lam__0(lean_object* v___x_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_85_);
lean_ctor_set(v___x_88_, 1, v___y_87_);
v___x_89_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___lam__0___boxed(lean_object* v___x_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___lam__0(v___x_90_, v___y_91_, v___y_92_);
lean_dec_ref(v___y_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__0(lean_object* v_f_94_, lean_object* v_as_95_, size_t v_i_96_, size_t v_stop_97_, lean_object* v_b_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
uint8_t v___x_101_; 
v___x_101_ = lean_usize_dec_eq(v_i_96_, v_stop_97_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_array_uget_borrowed(v_as_95_, v_i_96_);
lean_inc_ref(v_f_94_);
lean_inc_ref(v___y_99_);
lean_inc(v___x_102_);
v___x_103_ = lean_apply_3(v_f_94_, v___x_102_, v___y_99_, v___y_100_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_dec_ref(v_f_94_);
return v___x_103_;
}
else
{
lean_object* v_a_104_; lean_object* v_fst_105_; lean_object* v_snd_106_; size_t v___x_107_; size_t v___x_108_; 
v_a_104_ = lean_ctor_get(v___x_103_, 0);
lean_inc(v_a_104_);
lean_dec_ref_known(v___x_103_, 1);
v_fst_105_ = lean_ctor_get(v_a_104_, 0);
lean_inc(v_fst_105_);
v_snd_106_ = lean_ctor_get(v_a_104_, 1);
lean_inc(v_snd_106_);
lean_dec(v_a_104_);
v___x_107_ = ((size_t)1ULL);
v___x_108_ = lean_usize_add(v_i_96_, v___x_107_);
v_i_96_ = v___x_108_;
v_b_98_ = v_fst_105_;
v___y_100_ = v_snd_106_;
goto _start;
}
}
else
{
lean_object* v___x_110_; lean_object* v___x_111_; 
lean_dec_ref(v_f_94_);
v___x_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_110_, 0, v_b_98_);
lean_ctor_set(v___x_110_, 1, v___y_100_);
v___x_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__0___boxed(lean_object* v_f_112_, lean_object* v_as_113_, lean_object* v_i_114_, lean_object* v_stop_115_, lean_object* v_b_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
size_t v_i_boxed_119_; size_t v_stop_boxed_120_; lean_object* v_res_121_; 
v_i_boxed_119_ = lean_unbox_usize(v_i_114_);
lean_dec(v_i_114_);
v_stop_boxed_120_ = lean_unbox_usize(v_stop_115_);
lean_dec(v_stop_115_);
v_res_121_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__0(v_f_112_, v_as_113_, v_i_boxed_119_, v_stop_boxed_120_, v_b_116_, v___y_117_, v___y_118_);
lean_dec_ref(v___y_117_);
lean_dec_ref(v_as_113_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__1(lean_object* v_f_122_, lean_object* v_as_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
if (lean_obj_tag(v_as_123_) == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
lean_dec_ref(v_f_122_);
v___x_126_ = lean_box(0);
v___x_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v___y_125_);
v___x_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
return v___x_128_;
}
else
{
lean_object* v_head_129_; lean_object* v_tail_130_; lean_object* v___x_131_; 
v_head_129_ = lean_ctor_get(v_as_123_, 0);
lean_inc(v_head_129_);
v_tail_130_ = lean_ctor_get(v_as_123_, 1);
lean_inc(v_tail_130_);
lean_dec_ref_known(v_as_123_, 2);
lean_inc_ref(v_f_122_);
lean_inc_ref(v___y_124_);
v___x_131_ = lean_apply_3(v_f_122_, v_head_129_, v___y_124_, v___y_125_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_dec(v_tail_130_);
lean_dec_ref(v_f_122_);
return v___x_131_;
}
else
{
lean_object* v_a_132_; lean_object* v_snd_133_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_131_, 1);
v_snd_133_ = lean_ctor_get(v_a_132_, 1);
lean_inc(v_snd_133_);
lean_dec(v_a_132_);
v_as_123_ = v_tail_130_;
v___y_125_ = v_snd_133_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__1___boxed(lean_object* v_f_135_, lean_object* v_as_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__1(v_f_135_, v_as_136_, v___y_137_, v___y_138_);
lean_dec_ref(v___y_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__2(lean_object* v_f_140_, lean_object* v_as_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
if (lean_obj_tag(v_as_141_) == 0)
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec_ref(v_f_140_);
v___x_144_ = lean_box(0);
v___x_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
lean_ctor_set(v___x_145_, 1, v___y_143_);
v___x_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
return v___x_146_;
}
else
{
lean_object* v_head_147_; lean_object* v_tail_148_; lean_object* v_ctor_149_; lean_object* v_rhs_150_; lean_object* v___x_151_; 
v_head_147_ = lean_ctor_get(v_as_141_, 0);
lean_inc(v_head_147_);
v_tail_148_ = lean_ctor_get(v_as_141_, 1);
lean_inc(v_tail_148_);
lean_dec_ref_known(v_as_141_, 2);
v_ctor_149_ = lean_ctor_get(v_head_147_, 0);
lean_inc(v_ctor_149_);
v_rhs_150_ = lean_ctor_get(v_head_147_, 2);
lean_inc_ref(v_rhs_150_);
lean_dec(v_head_147_);
lean_inc_ref(v_f_140_);
lean_inc_ref(v___y_142_);
v___x_151_ = lean_apply_3(v_f_140_, v_ctor_149_, v___y_142_, v___y_143_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_dec_ref(v_rhs_150_);
lean_dec(v_tail_148_);
lean_dec_ref(v_f_140_);
return v___x_151_;
}
else
{
lean_object* v_a_152_; lean_object* v_snd_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_a_152_);
lean_dec_ref_known(v___x_151_, 1);
v_snd_153_ = lean_ctor_get(v_a_152_, 1);
lean_inc(v_snd_153_);
lean_dec(v_a_152_);
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = l_Lean_Expr_getUsedConstants(v_rhs_150_);
v___x_156_ = lean_array_get_size(v___x_155_);
v___x_157_ = lean_nat_dec_lt(v___x_154_, v___x_156_);
if (v___x_157_ == 0)
{
lean_dec_ref(v___x_155_);
v_as_141_ = v_tail_148_;
v___y_143_ = v_snd_153_;
goto _start;
}
else
{
lean_object* v___x_159_; size_t v___x_160_; size_t v___x_161_; lean_object* v___x_162_; 
v___x_159_ = lean_box(0);
v___x_160_ = ((size_t)0ULL);
v___x_161_ = lean_usize_of_nat(v___x_156_);
lean_inc_ref(v_f_140_);
v___x_162_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__0(v_f_140_, v___x_155_, v___x_160_, v___x_161_, v___x_159_, v___y_142_, v_snd_153_);
lean_dec_ref(v___x_155_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_dec(v_tail_148_);
lean_dec_ref(v_f_140_);
return v___x_162_;
}
else
{
lean_object* v_a_163_; lean_object* v_snd_164_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_a_163_);
lean_dec_ref_known(v___x_162_, 1);
v_snd_164_ = lean_ctor_get(v_a_163_, 1);
lean_inc(v_snd_164_);
lean_dec(v_a_163_);
v_as_141_ = v_tail_148_;
v___y_143_ = v_snd_164_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__2___boxed(lean_object* v_f_166_, lean_object* v_as_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__2(v_f_166_, v_as_167_, v___y_168_, v___y_169_);
lean_dec_ref(v___y_168_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0(lean_object* v_info_175_, lean_object* v_f_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___y_180_; lean_object* v___y_181_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___y_202_; lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_198_ = l_Lean_ConstantInfo_type(v_info_175_);
v___x_199_ = l_Lean_Expr_getUsedConstants(v___x_198_);
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_222_ = lean_array_get_size(v___x_199_);
v___x_223_ = lean_box(0);
v___x_224_ = lean_nat_dec_lt(v___x_200_, v___x_222_);
if (v___x_224_ == 0)
{
lean_object* v___f_225_; 
lean_dec_ref(v___x_199_);
v___f_225_ = ((lean_object*)(l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___closed__0));
v___y_202_ = v___f_225_;
goto v___jp_201_;
}
else
{
size_t v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_226_ = lean_usize_of_nat(v___x_222_);
v___x_227_ = ((lean_object*)(l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___boxed__const__1));
v___x_228_ = lean_box_usize(v___x_226_);
lean_inc_ref(v_f_176_);
v___x_229_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__0___boxed), 7, 5);
lean_closure_set(v___x_229_, 0, v_f_176_);
lean_closure_set(v___x_229_, 1, v___x_199_);
lean_closure_set(v___x_229_, 2, v___x_227_);
lean_closure_set(v___x_229_, 3, v___x_228_);
lean_closure_set(v___x_229_, 4, v___x_223_);
v___y_202_ = v___x_229_;
goto v___jp_201_;
}
v___jp_179_:
{
switch(lean_obj_tag(v_info_175_))
{
case 5:
{
lean_object* v_val_182_; lean_object* v_all_183_; lean_object* v_ctors_184_; lean_object* v___x_185_; 
v_val_182_ = lean_ctor_get(v_info_175_, 0);
lean_inc_ref(v_val_182_);
lean_dec_ref_known(v_info_175_, 1);
v_all_183_ = lean_ctor_get(v_val_182_, 3);
lean_inc(v_all_183_);
v_ctors_184_ = lean_ctor_get(v_val_182_, 4);
lean_inc(v_ctors_184_);
lean_dec_ref(v_val_182_);
lean_inc_ref(v_f_176_);
v___x_185_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__1(v_f_176_, v_ctors_184_, v___y_180_, v___y_181_);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_dec(v_all_183_);
lean_dec_ref(v_f_176_);
return v___x_185_;
}
else
{
lean_object* v_a_186_; lean_object* v_snd_187_; lean_object* v___x_188_; 
v_a_186_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_a_186_);
lean_dec_ref_known(v___x_185_, 1);
v_snd_187_ = lean_ctor_get(v_a_186_, 1);
lean_inc(v_snd_187_);
lean_dec(v_a_186_);
v___x_188_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__1(v_f_176_, v_all_183_, v___y_180_, v_snd_187_);
return v___x_188_;
}
}
case 6:
{
lean_object* v_val_189_; lean_object* v_induct_190_; lean_object* v___x_191_; 
v_val_189_ = lean_ctor_get(v_info_175_, 0);
lean_inc_ref(v_val_189_);
lean_dec_ref_known(v_info_175_, 1);
v_induct_190_ = lean_ctor_get(v_val_189_, 1);
lean_inc(v_induct_190_);
lean_dec_ref(v_val_189_);
lean_inc_ref(v___y_180_);
v___x_191_ = lean_apply_3(v_f_176_, v_induct_190_, v___y_180_, v___y_181_);
return v___x_191_;
}
case 7:
{
lean_object* v_val_192_; lean_object* v_rules_193_; lean_object* v___x_194_; 
v_val_192_ = lean_ctor_get(v_info_175_, 0);
lean_inc_ref(v_val_192_);
lean_dec_ref_known(v_info_175_, 1);
v_rules_193_ = lean_ctor_get(v_val_192_, 6);
lean_inc(v_rules_193_);
lean_dec_ref(v_val_192_);
v___x_194_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__2(v_f_176_, v_rules_193_, v___y_180_, v___y_181_);
return v___x_194_;
}
default: 
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
lean_dec_ref(v_f_176_);
lean_dec_ref(v_info_175_);
v___x_195_ = lean_box(0);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v___y_181_);
v___x_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
return v___x_197_;
}
}
}
v___jp_201_:
{
lean_object* v___x_203_; 
lean_inc_ref(v___y_177_);
v___x_203_ = lean_apply_2(v___y_202_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_dec_ref(v_f_176_);
lean_dec_ref(v_info_175_);
return v___x_203_;
}
else
{
lean_object* v_a_204_; lean_object* v_snd_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v_a_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_a_204_);
lean_dec_ref_known(v___x_203_, 1);
v_snd_205_ = lean_ctor_get(v_a_204_, 1);
lean_inc(v_snd_205_);
lean_dec(v_a_204_);
v___x_206_ = l_Lean_ConstantInfo_name(v_info_175_);
lean_inc_ref(v_f_176_);
lean_inc_ref(v___y_177_);
v___x_207_ = lean_apply_3(v_f_176_, v___x_206_, v___y_177_, v_snd_205_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_dec_ref(v_f_176_);
lean_dec_ref(v_info_175_);
return v___x_207_;
}
else
{
lean_object* v_a_208_; lean_object* v_snd_209_; uint8_t v___x_210_; lean_object* v___x_211_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc(v_a_208_);
lean_dec_ref_known(v___x_207_, 1);
v_snd_209_ = lean_ctor_get(v_a_208_, 1);
lean_inc(v_snd_209_);
lean_dec(v_a_208_);
v___x_210_ = 1;
lean_inc_ref(v_info_175_);
v___x_211_ = l_Lean_ConstantInfo_value_x3f(v_info_175_, v___x_210_);
if (lean_obj_tag(v___x_211_) == 1)
{
lean_object* v_val_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v_val_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_val_212_);
lean_dec_ref_known(v___x_211_, 1);
v___x_213_ = l_Lean_Expr_getUsedConstants(v_val_212_);
v___x_214_ = lean_array_get_size(v___x_213_);
v___x_215_ = lean_nat_dec_lt(v___x_200_, v___x_214_);
if (v___x_215_ == 0)
{
lean_dec_ref(v___x_213_);
v___y_180_ = v___y_177_;
v___y_181_ = v_snd_209_;
goto v___jp_179_;
}
else
{
lean_object* v___x_216_; size_t v___x_217_; size_t v___x_218_; lean_object* v___x_219_; 
v___x_216_ = lean_box(0);
v___x_217_ = ((size_t)0ULL);
v___x_218_ = lean_usize_of_nat(v___x_214_);
lean_inc_ref(v_f_176_);
v___x_219_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0_spec__0(v_f_176_, v___x_213_, v___x_217_, v___x_218_, v___x_216_, v___y_177_, v_snd_209_);
lean_dec_ref(v___x_213_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_dec_ref(v_f_176_);
lean_dec_ref(v_info_175_);
return v___x_219_;
}
else
{
lean_object* v_a_220_; lean_object* v_snd_221_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
lean_inc(v_a_220_);
lean_dec_ref_known(v___x_219_, 1);
v_snd_221_ = lean_ctor_get(v_a_220_, 1);
lean_inc(v_snd_221_);
lean_dec(v_a_220_);
v___y_180_ = v___y_177_;
v___y_181_ = v_snd_221_;
goto v___jp_179_;
}
}
}
else
{
lean_dec(v___x_211_);
v___y_180_ = v___y_177_;
v___y_181_ = v_snd_209_;
goto v___jp_179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0___boxed(lean_object* v_info_230_, lean_object* v_f_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0(v_info_230_, v_f_231_, v___y_232_, v___y_233_);
lean_dec_ref(v___y_232_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts(lean_object* v_info_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts___closed__0));
v___x_240_ = l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts_spec__0(v_info_236_, v___x_239_, v_a_237_, v_a_238_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts___boxed(lean_object* v_info_241_, lean_object* v_a_242_, lean_object* v_a_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l___private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts(v_info_241_, v_a_242_, v_a_243_);
lean_dec_ref(v_a_242_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2___redArg(lean_object* v_a_245_, lean_object* v_x_246_){
_start:
{
if (lean_obj_tag(v_x_246_) == 0)
{
lean_object* v___x_247_; 
v___x_247_ = lean_box(0);
return v___x_247_;
}
else
{
lean_object* v_key_248_; lean_object* v_value_249_; lean_object* v_tail_250_; uint8_t v___x_251_; 
v_key_248_ = lean_ctor_get(v_x_246_, 0);
v_value_249_ = lean_ctor_get(v_x_246_, 1);
v_tail_250_ = lean_ctor_get(v_x_246_, 2);
v___x_251_ = lean_name_eq(v_key_248_, v_a_245_);
if (v___x_251_ == 0)
{
v_x_246_ = v_tail_250_;
goto _start;
}
else
{
lean_object* v___x_253_; 
lean_inc(v_value_249_);
v___x_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_253_, 0, v_value_249_);
return v___x_253_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2___redArg___boxed(lean_object* v_a_254_, lean_object* v_x_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2___redArg(v_a_254_, v_x_255_);
lean_dec(v_x_255_);
lean_dec(v_a_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg(lean_object* v_m_257_, lean_object* v_a_258_){
_start:
{
lean_object* v_buckets_259_; lean_object* v___x_260_; uint64_t v___y_262_; lean_object* v___x_276_; 
v_buckets_259_ = lean_ctor_get(v_m_257_, 1);
v___x_260_ = lean_array_get_size(v_buckets_259_);
v___x_276_ = l_unsafeCast___redArg(v_a_258_);
if (lean_obj_tag(v___x_276_) == 0)
{
uint64_t v___x_277_; 
v___x_277_ = 1723ULL;
v___y_262_ = v___x_277_;
goto v___jp_261_;
}
else
{
uint64_t v_hash_278_; 
v_hash_278_ = lean_ctor_get_uint64(v___x_276_, sizeof(void*)*2);
lean_dec(v___x_276_);
v___y_262_ = v_hash_278_;
goto v___jp_261_;
}
v___jp_261_:
{
uint64_t v___x_263_; uint64_t v___x_264_; uint64_t v_fold_265_; uint64_t v___x_266_; uint64_t v___x_267_; uint64_t v___x_268_; size_t v___x_269_; size_t v___x_270_; size_t v___x_271_; size_t v___x_272_; size_t v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_263_ = 32ULL;
v___x_264_ = lean_uint64_shift_right(v___y_262_, v___x_263_);
v_fold_265_ = lean_uint64_xor(v___y_262_, v___x_264_);
v___x_266_ = 16ULL;
v___x_267_ = lean_uint64_shift_right(v_fold_265_, v___x_266_);
v___x_268_ = lean_uint64_xor(v_fold_265_, v___x_267_);
v___x_269_ = lean_uint64_to_usize(v___x_268_);
v___x_270_ = lean_usize_of_nat(v___x_260_);
v___x_271_ = ((size_t)1ULL);
v___x_272_ = lean_usize_sub(v___x_270_, v___x_271_);
v___x_273_ = lean_usize_land(v___x_269_, v___x_272_);
v___x_274_ = lean_array_uget_borrowed(v_buckets_259_, v___x_273_);
v___x_275_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2___redArg(v_a_258_, v___x_274_);
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg___boxed(lean_object* v_m_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg(v_m_279_, v_a_280_);
lean_dec(v_a_280_);
lean_dec_ref(v_m_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_x_282_, lean_object* v_x_283_){
_start:
{
if (lean_obj_tag(v_x_283_) == 0)
{
return v_x_282_;
}
else
{
lean_object* v_key_284_; lean_object* v_value_285_; lean_object* v_tail_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_313_; 
v_key_284_ = lean_ctor_get(v_x_283_, 0);
v_value_285_ = lean_ctor_get(v_x_283_, 1);
v_tail_286_ = lean_ctor_get(v_x_283_, 2);
v_isSharedCheck_313_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_313_ == 0)
{
v___x_288_ = v_x_283_;
v_isShared_289_ = v_isSharedCheck_313_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_tail_286_);
lean_inc(v_value_285_);
lean_inc(v_key_284_);
lean_dec(v_x_283_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_313_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_290_; uint64_t v___y_292_; lean_object* v___x_310_; 
v___x_290_ = lean_array_get_size(v_x_282_);
v___x_310_ = l_unsafeCast___redArg(v_key_284_);
if (lean_obj_tag(v___x_310_) == 0)
{
uint64_t v___x_311_; 
v___x_311_ = 1723ULL;
v___y_292_ = v___x_311_;
goto v___jp_291_;
}
else
{
uint64_t v_hash_312_; 
v_hash_312_ = lean_ctor_get_uint64(v___x_310_, sizeof(void*)*2);
lean_dec(v___x_310_);
v___y_292_ = v_hash_312_;
goto v___jp_291_;
}
v___jp_291_:
{
uint64_t v___x_293_; uint64_t v___x_294_; uint64_t v_fold_295_; uint64_t v___x_296_; uint64_t v___x_297_; uint64_t v___x_298_; size_t v___x_299_; size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; size_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_306_; 
v___x_293_ = 32ULL;
v___x_294_ = lean_uint64_shift_right(v___y_292_, v___x_293_);
v_fold_295_ = lean_uint64_xor(v___y_292_, v___x_294_);
v___x_296_ = 16ULL;
v___x_297_ = lean_uint64_shift_right(v_fold_295_, v___x_296_);
v___x_298_ = lean_uint64_xor(v_fold_295_, v___x_297_);
v___x_299_ = lean_uint64_to_usize(v___x_298_);
v___x_300_ = lean_usize_of_nat(v___x_290_);
v___x_301_ = ((size_t)1ULL);
v___x_302_ = lean_usize_sub(v___x_300_, v___x_301_);
v___x_303_ = lean_usize_land(v___x_299_, v___x_302_);
v___x_304_ = lean_array_uget_borrowed(v_x_282_, v___x_303_);
lean_inc(v___x_304_);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 2, v___x_304_);
v___x_306_ = v___x_288_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_key_284_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v_value_285_);
lean_ctor_set(v_reuseFailAlloc_309_, 2, v___x_304_);
v___x_306_ = v_reuseFailAlloc_309_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
lean_object* v___x_307_; 
v___x_307_ = lean_array_uset(v_x_282_, v___x_303_, v___x_306_);
v_x_282_ = v___x_307_;
v_x_283_ = v_tail_286_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1___redArg(lean_object* v_i_314_, lean_object* v_source_315_, lean_object* v_target_316_){
_start:
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = lean_array_get_size(v_source_315_);
v___x_318_ = lean_nat_dec_lt(v_i_314_, v___x_317_);
if (v___x_318_ == 0)
{
lean_dec_ref(v_source_315_);
lean_dec(v_i_314_);
return v_target_316_;
}
else
{
lean_object* v_es_319_; lean_object* v___x_320_; lean_object* v_source_321_; lean_object* v_target_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_es_319_ = lean_array_fget(v_source_315_, v_i_314_);
v___x_320_ = lean_box(0);
v_source_321_ = lean_array_fset(v_source_315_, v_i_314_, v___x_320_);
v_target_322_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1_spec__4___redArg(v_target_316_, v_es_319_);
v___x_323_ = lean_unsigned_to_nat(1u);
v___x_324_ = lean_nat_add(v_i_314_, v___x_323_);
lean_dec(v_i_314_);
v_i_314_ = v___x_324_;
v_source_315_ = v_source_321_;
v_target_316_ = v_target_322_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0___redArg(lean_object* v_data_326_){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v_nbuckets_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_327_ = lean_array_get_size(v_data_326_);
v___x_328_ = lean_unsigned_to_nat(2u);
v_nbuckets_329_ = lean_nat_mul(v___x_327_, v___x_328_);
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = lean_box(0);
v___x_332_ = lean_mk_array(v_nbuckets_329_, v___x_331_);
v___x_333_ = lean_array_propagate_mark(v_data_326_, v___x_332_);
v___x_334_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1___redArg(v___x_330_, v_data_326_, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0___redArg(lean_object* v_m_335_, lean_object* v_a_336_, lean_object* v_b_337_){
_start:
{
lean_object* v_size_338_; lean_object* v_buckets_339_; lean_object* v___x_340_; uint64_t v___y_342_; lean_object* v___x_379_; 
v_size_338_ = lean_ctor_get(v_m_335_, 0);
v_buckets_339_ = lean_ctor_get(v_m_335_, 1);
v___x_340_ = lean_array_get_size(v_buckets_339_);
v___x_379_ = l_unsafeCast___redArg(v_a_336_);
if (lean_obj_tag(v___x_379_) == 0)
{
uint64_t v___x_380_; 
v___x_380_ = 1723ULL;
v___y_342_ = v___x_380_;
goto v___jp_341_;
}
else
{
uint64_t v_hash_381_; 
v_hash_381_ = lean_ctor_get_uint64(v___x_379_, sizeof(void*)*2);
lean_dec(v___x_379_);
v___y_342_ = v_hash_381_;
goto v___jp_341_;
}
v___jp_341_:
{
uint64_t v___x_343_; uint64_t v___x_344_; uint64_t v_fold_345_; uint64_t v___x_346_; uint64_t v___x_347_; uint64_t v___x_348_; size_t v___x_349_; size_t v___x_350_; size_t v___x_351_; size_t v___x_352_; size_t v___x_353_; lean_object* v_bkt_354_; uint8_t v___x_355_; 
v___x_343_ = 32ULL;
v___x_344_ = lean_uint64_shift_right(v___y_342_, v___x_343_);
v_fold_345_ = lean_uint64_xor(v___y_342_, v___x_344_);
v___x_346_ = 16ULL;
v___x_347_ = lean_uint64_shift_right(v_fold_345_, v___x_346_);
v___x_348_ = lean_uint64_xor(v_fold_345_, v___x_347_);
v___x_349_ = lean_uint64_to_usize(v___x_348_);
v___x_350_ = lean_usize_of_nat(v___x_340_);
v___x_351_ = ((size_t)1ULL);
v___x_352_ = lean_usize_sub(v___x_350_, v___x_351_);
v___x_353_ = lean_usize_land(v___x_349_, v___x_352_);
v_bkt_354_ = lean_array_uget_borrowed(v_buckets_339_, v___x_353_);
v___x_355_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0_spec__0___redArg(v_a_336_, v_bkt_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_376_; 
lean_inc_ref(v_buckets_339_);
lean_inc(v_size_338_);
v_isSharedCheck_376_ = !lean_is_exclusive(v_m_335_);
if (v_isSharedCheck_376_ == 0)
{
lean_object* v_unused_377_; lean_object* v_unused_378_; 
v_unused_377_ = lean_ctor_get(v_m_335_, 1);
lean_dec(v_unused_377_);
v_unused_378_ = lean_ctor_get(v_m_335_, 0);
lean_dec(v_unused_378_);
v___x_357_ = v_m_335_;
v_isShared_358_ = v_isSharedCheck_376_;
goto v_resetjp_356_;
}
else
{
lean_dec(v_m_335_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_376_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; lean_object* v_size_x27_360_; lean_object* v___x_361_; lean_object* v_buckets_x27_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_359_ = lean_unsigned_to_nat(1u);
v_size_x27_360_ = lean_nat_add(v_size_338_, v___x_359_);
lean_dec(v_size_338_);
lean_inc(v_bkt_354_);
v___x_361_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_361_, 0, v_a_336_);
lean_ctor_set(v___x_361_, 1, v_b_337_);
lean_ctor_set(v___x_361_, 2, v_bkt_354_);
v_buckets_x27_362_ = lean_array_uset(v_buckets_339_, v___x_353_, v___x_361_);
v___x_363_ = lean_unsigned_to_nat(4u);
v___x_364_ = lean_nat_mul(v_size_x27_360_, v___x_363_);
v___x_365_ = lean_unsigned_to_nat(3u);
v___x_366_ = lean_nat_div(v___x_364_, v___x_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_array_get_size(v_buckets_x27_362_);
v___x_368_ = lean_nat_dec_le(v___x_366_, v___x_367_);
lean_dec(v___x_366_);
if (v___x_368_ == 0)
{
lean_object* v_val_369_; lean_object* v___x_371_; 
v_val_369_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0___redArg(v_buckets_x27_362_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v_val_369_);
lean_ctor_set(v___x_357_, 0, v_size_x27_360_);
v___x_371_ = v___x_357_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_size_x27_360_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_val_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
else
{
lean_object* v___x_374_; 
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v_buckets_x27_362_);
lean_ctor_set(v___x_357_, 0, v_size_x27_360_);
v___x_374_ = v___x_357_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_size_x27_360_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_buckets_x27_362_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
else
{
lean_dec(v_b_337_);
lean_dec(v_a_336_);
return v_m_335_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2___redArg(lean_object* v_as_382_, size_t v_i_383_, size_t v_stop_384_, lean_object* v_b_385_, lean_object* v___y_386_){
_start:
{
uint8_t v___x_387_; 
v___x_387_ = lean_usize_dec_eq(v_i_383_, v_stop_384_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = lean_array_uget_borrowed(v_as_382_, v_i_383_);
lean_inc(v___x_388_);
v___x_389_ = l___private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist___redArg(v___x_388_, v___y_386_);
if (lean_obj_tag(v___x_389_) == 0)
{
return v___x_389_;
}
else
{
lean_object* v_a_390_; lean_object* v_fst_391_; lean_object* v_snd_392_; size_t v___x_393_; size_t v___x_394_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_a_390_);
lean_dec_ref_known(v___x_389_, 1);
v_fst_391_ = lean_ctor_get(v_a_390_, 0);
lean_inc(v_fst_391_);
v_snd_392_ = lean_ctor_get(v_a_390_, 1);
lean_inc(v_snd_392_);
lean_dec(v_a_390_);
v___x_393_ = ((size_t)1ULL);
v___x_394_ = lean_usize_add(v_i_383_, v___x_393_);
v_i_383_ = v___x_394_;
v_b_385_ = v_fst_391_;
v___y_386_ = v_snd_392_;
goto _start;
}
}
else
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_396_, 0, v_b_385_);
lean_ctor_set(v___x_396_, 1, v___y_386_);
v___x_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2___redArg___boxed(lean_object* v_as_398_, lean_object* v_i_399_, lean_object* v_stop_400_, lean_object* v_b_401_, lean_object* v___y_402_){
_start:
{
size_t v_i_boxed_403_; size_t v_stop_boxed_404_; lean_object* v_res_405_; 
v_i_boxed_403_ = lean_unbox_usize(v_i_399_);
lean_dec(v_i_399_);
v_stop_boxed_404_ = lean_unbox_usize(v_stop_400_);
lean_dec(v_stop_400_);
v_res_405_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2___redArg(v_as_398_, v_i_boxed_403_, v_stop_boxed_404_, v_b_401_, v___y_402_);
lean_dec_ref(v_as_398_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop(lean_object* v_a_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_worklist_412_; lean_object* v_checked_413_; lean_object* v___x_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v_worklist_412_ = lean_ctor_get(v_a_411_, 0);
v_checked_413_ = lean_ctor_get(v_a_411_, 1);
v___x_414_ = lean_array_get_size(v_worklist_412_);
v___x_415_ = lean_unsigned_to_nat(0u);
v___x_416_ = lean_nat_dec_eq(v___x_414_, v___x_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_510_; 
lean_inc_ref(v_checked_413_);
lean_inc_ref(v_worklist_412_);
v_isSharedCheck_510_ = !lean_is_exclusive(v_a_411_);
if (v_isSharedCheck_510_ == 0)
{
lean_object* v_unused_511_; lean_object* v_unused_512_; 
v_unused_511_ = lean_ctor_get(v_a_411_, 1);
lean_dec(v_unused_511_);
v_unused_512_ = lean_ctor_get(v_a_411_, 0);
lean_dec(v_unused_512_);
v___x_418_ = v_a_411_;
v_isShared_419_ = v_isSharedCheck_510_;
goto v_resetjp_417_;
}
else
{
lean_dec(v_a_411_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_510_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___y_425_; lean_object* v_worklist_426_; lean_object* v_checked_427_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v___y_440_; lean_object* v___x_443_; lean_object* v___x_444_; uint8_t v___x_445_; 
v___x_420_ = l_Lean_instInhabitedName;
v___x_421_ = lean_unsigned_to_nat(1u);
v___x_422_ = lean_nat_sub(v___x_414_, v___x_421_);
v___x_423_ = lean_array_get(v___x_420_, v_worklist_412_, v___x_422_);
lean_dec(v___x_422_);
v___x_443_ = lean_array_pop(v_worklist_412_);
lean_inc_ref(v_checked_413_);
lean_inc_ref(v___x_443_);
v___x_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v_checked_413_);
v___x_445_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___redArg(v_checked_413_, v___x_423_);
if (v___x_445_ == 0)
{
lean_object* v_challenge_446_; lean_object* v_solution_447_; lean_object* v_definitionTargets_448_; lean_object* v_theoremTargets_449_; lean_object* v_constMap_450_; lean_object* v___x_451_; 
v_challenge_446_ = lean_ctor_get(v_a_410_, 0);
v_solution_447_ = lean_ctor_get(v_a_410_, 1);
v_definitionTargets_448_ = lean_ctor_get(v_a_410_, 2);
v_theoremTargets_449_ = lean_ctor_get(v_a_410_, 3);
v_constMap_450_ = lean_ctor_get(v_challenge_446_, 0);
v___x_451_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg(v_constMap_450_, v___x_423_);
if (lean_obj_tag(v___x_451_) == 1)
{
lean_object* v_val_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_501_; 
v_val_452_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_501_ == 0)
{
v___x_454_ = v___x_451_;
v_isShared_455_ = v_isSharedCheck_501_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_val_452_);
lean_dec(v___x_451_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_501_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v_constMap_456_; lean_object* v___x_457_; 
v_constMap_456_ = lean_ctor_get(v_solution_447_, 0);
v___x_457_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg(v_constMap_456_, v___x_423_);
if (lean_obj_tag(v___x_457_) == 1)
{
lean_object* v_val_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_491_; 
lean_del_object(v___x_454_);
v_val_458_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_491_ == 0)
{
v___x_460_ = v___x_457_;
v_isShared_461_ = v_isSharedCheck_491_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_val_458_);
lean_dec(v___x_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_491_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_475_ = l_Lean_ConstantInfo_name(v_val_458_);
v___x_476_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___redArg(v_definitionTargets_448_, v___x_475_);
if (v___x_476_ == 0)
{
uint8_t v___x_477_; 
v___x_477_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_addWorklist_spec__0___redArg(v_theoremTargets_449_, v___x_475_);
lean_dec(v___x_475_);
if (v___x_477_ == 0)
{
uint8_t v___x_478_; 
lean_dec_ref(v___x_443_);
lean_dec_ref(v_checked_413_);
v___x_478_ = l_Lean_instBEqConstantInfo_beq(v_val_452_, v_val_458_);
lean_dec(v_val_452_);
if (v___x_478_ == 0)
{
uint8_t v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_486_; 
lean_dec(v_val_458_);
lean_dec_ref_known(v___x_444_, 2);
lean_del_object(v___x_418_);
v___x_479_ = 1;
v___x_480_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__0));
v___x_481_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_423_, v___x_479_);
v___x_482_ = lean_string_append(v___x_480_, v___x_481_);
lean_dec_ref(v___x_481_);
v___x_483_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_484_ = lean_string_append(v___x_482_, v___x_483_);
if (v_isShared_461_ == 0)
{
lean_ctor_set_tag(v___x_460_, 0);
lean_ctor_set(v___x_460_, 0, v___x_484_);
v___x_486_ = v___x_460_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
else
{
lean_object* v___x_488_; 
lean_del_object(v___x_460_);
v___x_488_ = l___private_Lake_Check_Compare_0__Lake_Check_Compare_addRelevantConsts(v_val_458_, v_a_410_, v___x_444_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_dec(v___x_423_);
lean_del_object(v___x_418_);
return v___x_488_;
}
else
{
lean_object* v_a_489_; lean_object* v_snd_490_; 
v_a_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_489_);
lean_dec_ref_known(v___x_488_, 1);
v_snd_490_ = lean_ctor_get(v_a_489_, 1);
lean_inc(v_snd_490_);
lean_dec(v_a_489_);
v___y_435_ = v_a_410_;
v___y_436_ = v_snd_490_;
goto v___jp_434_;
}
}
}
else
{
lean_del_object(v___x_460_);
lean_dec(v_val_452_);
goto v___jp_462_;
}
}
else
{
lean_dec(v___x_475_);
lean_del_object(v___x_460_);
lean_dec(v_val_452_);
goto v___jp_462_;
}
v___jp_462_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_463_ = l_Lean_ConstantInfo_type(v_val_458_);
lean_dec(v_val_458_);
v___x_464_ = l_Lean_Expr_getUsedConstants(v___x_463_);
v___x_465_ = lean_array_get_size(v___x_464_);
v___x_466_ = lean_nat_dec_lt(v___x_415_, v___x_465_);
if (v___x_466_ == 0)
{
lean_dec_ref(v___x_464_);
lean_dec_ref_known(v___x_444_, 2);
v___y_425_ = v_a_410_;
v_worklist_426_ = v___x_443_;
v_checked_427_ = v_checked_413_;
goto v___jp_424_;
}
else
{
lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_467_ = lean_box(0);
v___x_468_ = lean_nat_dec_le(v___x_465_, v___x_465_);
if (v___x_468_ == 0)
{
if (v___x_466_ == 0)
{
lean_dec_ref(v___x_464_);
lean_dec_ref_known(v___x_444_, 2);
v___y_425_ = v_a_410_;
v_worklist_426_ = v___x_443_;
v_checked_427_ = v_checked_413_;
goto v___jp_424_;
}
else
{
size_t v___x_469_; size_t v___x_470_; lean_object* v___x_471_; 
lean_dec_ref(v___x_443_);
lean_dec_ref(v_checked_413_);
v___x_469_ = ((size_t)0ULL);
v___x_470_ = lean_usize_of_nat(v___x_465_);
v___x_471_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2___redArg(v___x_464_, v___x_469_, v___x_470_, v___x_467_, v___x_444_);
lean_dec_ref(v___x_464_);
v___y_440_ = v___x_471_;
goto v___jp_439_;
}
}
else
{
size_t v___x_472_; size_t v___x_473_; lean_object* v___x_474_; 
lean_dec_ref(v___x_443_);
lean_dec_ref(v_checked_413_);
v___x_472_ = ((size_t)0ULL);
v___x_473_ = lean_usize_of_nat(v___x_465_);
v___x_474_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2___redArg(v___x_464_, v___x_472_, v___x_473_, v___x_467_, v___x_444_);
lean_dec_ref(v___x_464_);
v___y_440_ = v___x_474_;
goto v___jp_439_;
}
}
}
}
}
else
{
lean_object* v___x_492_; uint8_t v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_499_; 
lean_dec(v___x_457_);
lean_dec(v_val_452_);
lean_dec_ref_known(v___x_444_, 2);
lean_dec_ref(v___x_443_);
lean_del_object(v___x_418_);
lean_dec_ref(v_checked_413_);
v___x_492_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__2));
v___x_493_ = 1;
v___x_494_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_423_, v___x_493_);
v___x_495_ = lean_string_append(v___x_492_, v___x_494_);
lean_dec_ref(v___x_494_);
v___x_496_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_497_ = lean_string_append(v___x_495_, v___x_496_);
if (v_isShared_455_ == 0)
{
lean_ctor_set_tag(v___x_454_, 0);
lean_ctor_set(v___x_454_, 0, v___x_497_);
v___x_499_ = v___x_454_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_497_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
else
{
lean_object* v___x_502_; uint8_t v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
lean_dec(v___x_451_);
lean_dec_ref_known(v___x_444_, 2);
lean_dec_ref(v___x_443_);
lean_del_object(v___x_418_);
lean_dec_ref(v_checked_413_);
v___x_502_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__3));
v___x_503_ = 1;
v___x_504_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_423_, v___x_503_);
v___x_505_ = lean_string_append(v___x_502_, v___x_504_);
lean_dec_ref(v___x_504_);
v___x_506_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_507_ = lean_string_append(v___x_505_, v___x_506_);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
return v___x_508_;
}
}
else
{
lean_dec_ref(v___x_443_);
lean_dec(v___x_423_);
lean_del_object(v___x_418_);
lean_dec_ref(v_checked_413_);
v_a_411_ = v___x_444_;
goto _start;
}
v___jp_424_:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_431_; 
v___x_428_ = lean_box(0);
v___x_429_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0___redArg(v_checked_427_, v___x_423_, v___x_428_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v___x_429_);
lean_ctor_set(v___x_418_, 0, v_worklist_426_);
v___x_431_ = v___x_418_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_worklist_426_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v___x_429_);
v___x_431_ = v_reuseFailAlloc_433_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
v_a_410_ = v___y_425_;
v_a_411_ = v___x_431_;
goto _start;
}
}
v___jp_434_:
{
lean_object* v_worklist_437_; lean_object* v_checked_438_; 
v_worklist_437_ = lean_ctor_get(v___y_436_, 0);
lean_inc_ref(v_worklist_437_);
v_checked_438_ = lean_ctor_get(v___y_436_, 1);
lean_inc_ref(v_checked_438_);
lean_dec_ref(v___y_436_);
v___y_425_ = v___y_435_;
v_worklist_426_ = v_worklist_437_;
v_checked_427_ = v_checked_438_;
goto v___jp_424_;
}
v___jp_439_:
{
if (lean_obj_tag(v___y_440_) == 0)
{
lean_dec(v___x_423_);
lean_del_object(v___x_418_);
return v___y_440_;
}
else
{
lean_object* v_a_441_; lean_object* v_snd_442_; 
v_a_441_ = lean_ctor_get(v___y_440_, 0);
lean_inc(v_a_441_);
lean_dec_ref_known(v___y_440_, 1);
v_snd_442_ = lean_ctor_get(v_a_441_, 1);
lean_inc(v_snd_442_);
lean_dec(v_a_441_);
v___y_435_ = v_a_410_;
v___y_436_ = v_snd_442_;
goto v___jp_434_;
}
}
}
}
else
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_513_ = lean_box(0);
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
lean_ctor_set(v___x_514_, 1, v_a_411_);
v___x_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
return v___x_515_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___boxed(lean_object* v_a_516_, lean_object* v_a_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop(v_a_516_, v_a_517_);
lean_dec_ref(v_a_516_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0(lean_object* v_00_u03b2_519_, lean_object* v_m_520_, lean_object* v_a_521_, lean_object* v_b_522_){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0___redArg(v_m_520_, v_a_521_, v_b_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1(lean_object* v_00_u03b2_524_, lean_object* v_m_525_, lean_object* v_a_526_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg(v_m_525_, v_a_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___boxed(lean_object* v_00_u03b2_528_, lean_object* v_m_529_, lean_object* v_a_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1(v_00_u03b2_528_, v_m_529_, v_a_530_);
lean_dec(v_a_530_);
lean_dec_ref(v_m_529_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2(lean_object* v_as_532_, size_t v_i_533_, size_t v_stop_534_, lean_object* v_b_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2___redArg(v_as_532_, v_i_533_, v_stop_534_, v_b_535_, v___y_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2___boxed(lean_object* v_as_539_, lean_object* v_i_540_, lean_object* v_stop_541_, lean_object* v_b_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
size_t v_i_boxed_545_; size_t v_stop_boxed_546_; lean_object* v_res_547_; 
v_i_boxed_545_ = lean_unbox_usize(v_i_540_);
lean_dec(v_i_540_);
v_stop_boxed_546_ = lean_unbox_usize(v_stop_541_);
lean_dec(v_stop_541_);
v_res_547_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__2(v_as_539_, v_i_boxed_545_, v_stop_boxed_546_, v_b_542_, v___y_543_, v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec_ref(v_as_539_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0(lean_object* v_00_u03b2_548_, lean_object* v_data_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0___redArg(v_data_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2(lean_object* v_00_u03b2_551_, lean_object* v_a_552_, lean_object* v_x_553_){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2___redArg(v_a_552_, v_x_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2___boxed(lean_object* v_00_u03b2_555_, lean_object* v_a_556_, lean_object* v_x_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1_spec__2(v_00_u03b2_555_, v_a_556_, v_x_557_);
lean_dec(v_x_557_);
lean_dec(v_a_556_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_559_, lean_object* v_i_560_, lean_object* v_source_561_, lean_object* v_target_562_){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1___redArg(v_i_560_, v_source_561_, v_target_562_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_564_, lean_object* v_x_565_, lean_object* v_x_566_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0_spec__0_spec__1_spec__4___redArg(v_x_565_, v_x_566_);
return v___x_567_;
}
}
LEAN_EXPORT uint8_t l_Lake_Check_definitionHoleMatches(lean_object* v_challengeHole_568_, lean_object* v_solutionHole_569_){
_start:
{
lean_object* v_toConstantVal_570_; uint8_t v_safety_571_; lean_object* v_toConstantVal_572_; uint8_t v_safety_573_; uint8_t v___x_574_; 
v_toConstantVal_570_ = lean_ctor_get(v_challengeHole_568_, 0);
v_safety_571_ = lean_ctor_get_uint8(v_challengeHole_568_, sizeof(void*)*4);
v_toConstantVal_572_ = lean_ctor_get(v_solutionHole_569_, 0);
v_safety_573_ = lean_ctor_get_uint8(v_solutionHole_569_, sizeof(void*)*4);
v___x_574_ = l_Lean_instBEqConstantVal_beq(v_toConstantVal_570_, v_toConstantVal_572_);
if (v___x_574_ == 0)
{
return v___x_574_;
}
else
{
uint8_t v___x_575_; 
v___x_575_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_571_, v_safety_573_);
return v___x_575_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_definitionHoleMatches___boxed(lean_object* v_challengeHole_576_, lean_object* v_solutionHole_577_){
_start:
{
uint8_t v_res_578_; lean_object* v_r_579_; 
v_res_578_ = l_Lake_Check_definitionHoleMatches(v_challengeHole_576_, v_solutionHole_577_);
lean_dec_ref(v_solutionHole_577_);
lean_dec_ref(v_challengeHole_576_);
v_r_579_ = lean_box(v_res_578_);
return v_r_579_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2_spec__2(lean_object* v_as_580_, size_t v_sz_581_, size_t v_i_582_, lean_object* v_b_583_){
_start:
{
uint8_t v___x_584_; 
v___x_584_ = lean_usize_dec_lt(v_i_582_, v_sz_581_);
if (v___x_584_ == 0)
{
return v_b_583_;
}
else
{
lean_object* v_a_585_; lean_object* v___x_586_; lean_object* v_r_587_; size_t v___x_588_; size_t v___x_589_; 
v_a_585_ = lean_array_uget_borrowed(v_as_580_, v_i_582_);
v___x_586_ = lean_box(0);
lean_inc(v_a_585_);
v_r_587_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__0___redArg(v_b_583_, v_a_585_, v___x_586_);
v___x_588_ = ((size_t)1ULL);
v___x_589_ = lean_usize_add(v_i_582_, v___x_588_);
v_i_582_ = v___x_589_;
v_b_583_ = v_r_587_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2_spec__2___boxed(lean_object* v_as_591_, lean_object* v_sz_592_, lean_object* v_i_593_, lean_object* v_b_594_){
_start:
{
size_t v_sz_boxed_595_; size_t v_i_boxed_596_; lean_object* v_res_597_; 
v_sz_boxed_595_ = lean_unbox_usize(v_sz_592_);
lean_dec(v_sz_592_);
v_i_boxed_596_ = lean_unbox_usize(v_i_593_);
lean_dec(v_i_593_);
v_res_597_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2_spec__2(v_as_591_, v_sz_boxed_595_, v_i_boxed_596_, v_b_594_);
lean_dec_ref(v_as_591_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2(lean_object* v_m_598_, lean_object* v_l_599_){
_start:
{
size_t v_sz_600_; size_t v___x_601_; lean_object* v___x_602_; 
v_sz_600_ = lean_array_size(v_l_599_);
v___x_601_ = ((size_t)0ULL);
v___x_602_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2_spec__2(v_l_599_, v_sz_600_, v___x_601_, v_m_598_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2___boxed(lean_object* v_m_603_, lean_object* v_l_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2(v_m_603_, v_l_604_);
lean_dec_ref(v_l_604_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1(lean_object* v_challenge_610_, lean_object* v_solution_611_, lean_object* v_as_612_, size_t v_sz_613_, size_t v_i_614_, lean_object* v_b_615_){
_start:
{
uint8_t v___x_616_; 
v___x_616_ = lean_usize_dec_lt(v_i_614_, v_sz_613_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; 
v___x_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_617_, 0, v_b_615_);
return v___x_617_;
}
else
{
lean_object* v_constMap_618_; lean_object* v_a_619_; lean_object* v___x_620_; 
v_constMap_618_ = lean_ctor_get(v_challenge_610_, 0);
v_a_619_ = lean_array_uget_borrowed(v_as_612_, v_i_614_);
v___x_620_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg(v_constMap_618_, v_a_619_);
if (lean_obj_tag(v___x_620_) == 1)
{
lean_object* v_val_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_683_; 
v_val_621_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_683_ == 0)
{
v___x_623_ = v___x_620_;
v_isShared_624_ = v_isSharedCheck_683_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_val_621_);
lean_dec(v___x_620_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_683_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v_constMap_625_; lean_object* v___x_626_; 
v_constMap_625_ = lean_ctor_get(v_solution_611_, 0);
v___x_626_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg(v_constMap_625_, v_a_619_);
if (lean_obj_tag(v___x_626_) == 1)
{
lean_del_object(v___x_623_);
if (lean_obj_tag(v_val_621_) == 1)
{
lean_object* v_val_627_; 
v_val_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_val_627_);
lean_dec_ref_known(v___x_626_, 1);
if (lean_obj_tag(v_val_627_) == 1)
{
lean_object* v_val_628_; lean_object* v_val_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_648_; 
v_val_628_ = lean_ctor_get(v_val_621_, 0);
lean_inc_ref(v_val_628_);
lean_dec_ref_known(v_val_621_, 1);
v_val_629_ = lean_ctor_get(v_val_627_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v_val_627_);
if (v_isSharedCheck_648_ == 0)
{
v___x_631_ = v_val_627_;
v_isShared_632_ = v_isSharedCheck_648_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_val_629_);
lean_dec(v_val_627_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_648_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
uint8_t v___x_633_; 
v___x_633_ = l_Lake_Check_definitionHoleMatches(v_val_628_, v_val_629_);
lean_dec_ref(v_val_628_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_640_; 
lean_dec_ref(v_val_629_);
lean_dec_ref(v_b_615_);
v___x_634_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__0));
lean_inc(v_a_619_);
v___x_635_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_619_, v___x_616_);
v___x_636_ = lean_string_append(v___x_634_, v___x_635_);
lean_dec_ref(v___x_635_);
v___x_637_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_638_ = lean_string_append(v___x_636_, v___x_637_);
if (v_isShared_632_ == 0)
{
lean_ctor_set_tag(v___x_631_, 0);
lean_ctor_set(v___x_631_, 0, v___x_638_);
v___x_640_ = v___x_631_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_638_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
else
{
lean_object* v_toConstantVal_642_; lean_object* v_name_643_; lean_object* v___x_644_; size_t v___x_645_; size_t v___x_646_; 
lean_del_object(v___x_631_);
v_toConstantVal_642_ = lean_ctor_get(v_val_629_, 0);
lean_inc_ref(v_toConstantVal_642_);
lean_dec_ref(v_val_629_);
v_name_643_ = lean_ctor_get(v_toConstantVal_642_, 0);
lean_inc(v_name_643_);
lean_dec_ref(v_toConstantVal_642_);
v___x_644_ = lean_array_push(v_b_615_, v_name_643_);
v___x_645_ = ((size_t)1ULL);
v___x_646_ = lean_usize_add(v_i_614_, v___x_645_);
v_i_614_ = v___x_646_;
v_b_615_ = v___x_644_;
goto _start;
}
}
}
else
{
lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_660_; 
lean_dec(v_val_627_);
lean_dec_ref(v_b_615_);
v_isSharedCheck_660_ = !lean_is_exclusive(v_val_621_);
if (v_isSharedCheck_660_ == 0)
{
lean_object* v_unused_661_; 
v_unused_661_ = lean_ctor_get(v_val_621_, 0);
lean_dec(v_unused_661_);
v___x_650_ = v_val_621_;
v_isShared_651_ = v_isSharedCheck_660_;
goto v_resetjp_649_;
}
else
{
lean_dec(v_val_621_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_660_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_658_; 
v___x_652_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__0));
lean_inc(v_a_619_);
v___x_653_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_619_, v___x_616_);
v___x_654_ = lean_string_append(v___x_652_, v___x_653_);
lean_dec_ref(v___x_653_);
v___x_655_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_656_ = lean_string_append(v___x_654_, v___x_655_);
if (v_isShared_651_ == 0)
{
lean_ctor_set_tag(v___x_650_, 0);
lean_ctor_set(v___x_650_, 0, v___x_656_);
v___x_658_ = v___x_650_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
else
{
lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_673_; 
lean_dec(v_val_621_);
lean_dec_ref(v_b_615_);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_673_ == 0)
{
lean_object* v_unused_674_; 
v_unused_674_ = lean_ctor_get(v___x_626_, 0);
lean_dec(v_unused_674_);
v___x_663_ = v___x_626_;
v_isShared_664_ = v_isSharedCheck_673_;
goto v_resetjp_662_;
}
else
{
lean_dec(v___x_626_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_673_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_665_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__1));
lean_inc(v_a_619_);
v___x_666_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_619_, v___x_616_);
v___x_667_ = lean_string_append(v___x_665_, v___x_666_);
lean_dec_ref(v___x_666_);
v___x_668_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_669_ = lean_string_append(v___x_667_, v___x_668_);
if (v_isShared_664_ == 0)
{
lean_ctor_set_tag(v___x_663_, 0);
lean_ctor_set(v___x_663_, 0, v___x_669_);
v___x_671_ = v___x_663_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v___x_669_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
else
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_681_; 
lean_dec(v___x_626_);
lean_dec(v_val_621_);
lean_dec_ref(v_b_615_);
v___x_675_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__2));
lean_inc(v_a_619_);
v___x_676_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_619_, v___x_616_);
v___x_677_ = lean_string_append(v___x_675_, v___x_676_);
lean_dec_ref(v___x_676_);
v___x_678_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_679_ = lean_string_append(v___x_677_, v___x_678_);
if (v_isShared_624_ == 0)
{
lean_ctor_set_tag(v___x_623_, 0);
lean_ctor_set(v___x_623_, 0, v___x_679_);
v___x_681_ = v___x_623_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
else
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec(v___x_620_);
lean_dec_ref(v_b_615_);
v___x_684_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__3));
lean_inc(v_a_619_);
v___x_685_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_619_, v___x_616_);
v___x_686_ = lean_string_append(v___x_684_, v___x_685_);
lean_dec_ref(v___x_685_);
v___x_687_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_688_ = lean_string_append(v___x_686_, v___x_687_);
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
return v___x_689_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___boxed(lean_object* v_challenge_690_, lean_object* v_solution_691_, lean_object* v_as_692_, lean_object* v_sz_693_, lean_object* v_i_694_, lean_object* v_b_695_){
_start:
{
size_t v_sz_boxed_696_; size_t v_i_boxed_697_; lean_object* v_res_698_; 
v_sz_boxed_696_ = lean_unbox_usize(v_sz_693_);
lean_dec(v_sz_693_);
v_i_boxed_697_ = lean_unbox_usize(v_i_694_);
lean_dec(v_i_694_);
v_res_698_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1(v_challenge_690_, v_solution_691_, v_as_692_, v_sz_boxed_696_, v_i_boxed_697_, v_b_695_);
lean_dec_ref(v_as_692_);
lean_dec_ref(v_solution_691_);
lean_dec_ref(v_challenge_690_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0(lean_object* v_challenge_701_, lean_object* v_solution_702_, lean_object* v_as_703_, size_t v_sz_704_, size_t v_i_705_, lean_object* v_b_706_){
_start:
{
uint8_t v___x_707_; 
v___x_707_ = lean_usize_dec_lt(v_i_705_, v_sz_704_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; 
v___x_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_708_, 0, v_b_706_);
return v___x_708_;
}
else
{
lean_object* v_constMap_709_; lean_object* v_a_710_; lean_object* v_fst_719_; lean_object* v_snd_720_; lean_object* v___x_734_; 
v_constMap_709_ = lean_ctor_get(v_challenge_701_, 0);
v_a_710_ = lean_array_uget_borrowed(v_as_703_, v_i_705_);
v___x_734_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg(v_constMap_709_, v_a_710_);
if (lean_obj_tag(v___x_734_) == 1)
{
lean_object* v_val_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_759_; 
v_val_735_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_759_ == 0)
{
v___x_737_ = v___x_734_;
v_isShared_738_ = v_isSharedCheck_759_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_val_735_);
lean_dec(v___x_734_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_759_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v_constMap_739_; lean_object* v___x_740_; 
v_constMap_739_ = lean_ctor_get(v_solution_702_, 0);
v___x_740_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Compare_0__Lake_Check_Compare_loop_spec__1___redArg(v_constMap_739_, v_a_710_);
if (lean_obj_tag(v___x_740_) == 1)
{
lean_del_object(v___x_737_);
switch(lean_obj_tag(v_val_735_))
{
case 2:
{
lean_object* v_val_741_; 
v_val_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_val_741_);
lean_dec_ref_known(v___x_740_, 1);
if (lean_obj_tag(v_val_741_) == 2)
{
lean_object* v_val_742_; lean_object* v_val_743_; lean_object* v_toConstantVal_744_; lean_object* v_toConstantVal_745_; 
v_val_742_ = lean_ctor_get(v_val_735_, 0);
lean_inc_ref(v_val_742_);
lean_dec_ref_known(v_val_735_, 1);
v_val_743_ = lean_ctor_get(v_val_741_, 0);
lean_inc_ref(v_val_743_);
lean_dec_ref_known(v_val_741_, 1);
v_toConstantVal_744_ = lean_ctor_get(v_val_742_, 0);
lean_inc_ref(v_toConstantVal_744_);
lean_dec_ref(v_val_742_);
v_toConstantVal_745_ = lean_ctor_get(v_val_743_, 0);
lean_inc_ref(v_toConstantVal_745_);
lean_dec_ref(v_val_743_);
v_fst_719_ = v_toConstantVal_744_;
v_snd_720_ = v_toConstantVal_745_;
goto v___jp_718_;
}
else
{
lean_dec_ref_known(v_val_735_, 1);
lean_dec(v_val_741_);
lean_dec_ref(v_b_706_);
goto v___jp_711_;
}
}
case 0:
{
lean_object* v_val_746_; 
v_val_746_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_val_746_);
lean_dec_ref_known(v___x_740_, 1);
if (lean_obj_tag(v_val_746_) == 0)
{
lean_object* v_val_747_; lean_object* v_val_748_; lean_object* v_toConstantVal_749_; lean_object* v_toConstantVal_750_; 
v_val_747_ = lean_ctor_get(v_val_735_, 0);
lean_inc_ref(v_val_747_);
lean_dec_ref_known(v_val_735_, 1);
v_val_748_ = lean_ctor_get(v_val_746_, 0);
lean_inc_ref(v_val_748_);
lean_dec_ref_known(v_val_746_, 1);
v_toConstantVal_749_ = lean_ctor_get(v_val_747_, 0);
lean_inc_ref(v_toConstantVal_749_);
lean_dec_ref(v_val_747_);
v_toConstantVal_750_ = lean_ctor_get(v_val_748_, 0);
lean_inc_ref(v_toConstantVal_750_);
lean_dec_ref(v_val_748_);
v_fst_719_ = v_toConstantVal_749_;
v_snd_720_ = v_toConstantVal_750_;
goto v___jp_718_;
}
else
{
lean_dec(v_val_746_);
lean_dec_ref_known(v_val_735_, 1);
lean_dec_ref(v_b_706_);
goto v___jp_711_;
}
}
default: 
{
lean_dec_ref_known(v___x_740_, 1);
lean_dec(v_val_735_);
lean_dec_ref(v_b_706_);
goto v___jp_711_;
}
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; 
lean_dec(v___x_740_);
lean_dec(v_val_735_);
lean_dec_ref(v_b_706_);
v___x_751_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__2));
lean_inc(v_a_710_);
v___x_752_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_710_, v___x_707_);
v___x_753_ = lean_string_append(v___x_751_, v___x_752_);
lean_dec_ref(v___x_752_);
v___x_754_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_755_ = lean_string_append(v___x_753_, v___x_754_);
if (v_isShared_738_ == 0)
{
lean_ctor_set_tag(v___x_737_, 0);
lean_ctor_set(v___x_737_, 0, v___x_755_);
v___x_757_ = v___x_737_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_755_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
else
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
lean_dec(v___x_734_);
lean_dec_ref(v_b_706_);
v___x_760_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1___closed__3));
lean_inc(v_a_710_);
v___x_761_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_710_, v___x_707_);
v___x_762_ = lean_string_append(v___x_760_, v___x_761_);
lean_dec_ref(v___x_761_);
v___x_763_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_764_ = lean_string_append(v___x_762_, v___x_763_);
v___x_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
return v___x_765_;
}
v___jp_711_:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_712_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0___closed__0));
lean_inc(v_a_710_);
v___x_713_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_710_, v___x_707_);
v___x_714_ = lean_string_append(v___x_712_, v___x_713_);
lean_dec_ref(v___x_713_);
v___x_715_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_716_ = lean_string_append(v___x_714_, v___x_715_);
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
return v___x_717_;
}
v___jp_718_:
{
uint8_t v___x_721_; 
v___x_721_ = l_Lean_instBEqConstantVal_beq(v_fst_719_, v_snd_720_);
lean_dec_ref(v_snd_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
lean_dec_ref(v_fst_719_);
lean_dec_ref(v_b_706_);
v___x_722_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0___closed__1));
lean_inc(v_a_710_);
v___x_723_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_710_, v___x_707_);
v___x_724_ = lean_string_append(v___x_722_, v___x_723_);
lean_dec_ref(v___x_723_);
v___x_725_ = ((lean_object*)(l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop___closed__1));
v___x_726_ = lean_string_append(v___x_724_, v___x_725_);
v___x_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
return v___x_727_;
}
else
{
lean_object* v_type_728_; lean_object* v___x_729_; lean_object* v___x_730_; size_t v___x_731_; size_t v___x_732_; 
v_type_728_ = lean_ctor_get(v_fst_719_, 2);
lean_inc_ref(v_type_728_);
lean_dec_ref(v_fst_719_);
v___x_729_ = l_Lean_Expr_getUsedConstants(v_type_728_);
v___x_730_ = l_Array_append___redArg(v_b_706_, v___x_729_);
lean_dec_ref(v___x_729_);
v___x_731_ = ((size_t)1ULL);
v___x_732_ = lean_usize_add(v_i_705_, v___x_731_);
v_i_705_ = v___x_732_;
v_b_706_ = v___x_730_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0___boxed(lean_object* v_challenge_766_, lean_object* v_solution_767_, lean_object* v_as_768_, lean_object* v_sz_769_, lean_object* v_i_770_, lean_object* v_b_771_){
_start:
{
size_t v_sz_boxed_772_; size_t v_i_boxed_773_; lean_object* v_res_774_; 
v_sz_boxed_772_ = lean_unbox_usize(v_sz_769_);
lean_dec(v_sz_769_);
v_i_boxed_773_ = lean_unbox_usize(v_i_770_);
lean_dec(v_i_770_);
v_res_774_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0(v_challenge_766_, v_solution_767_, v_as_768_, v_sz_boxed_772_, v_i_boxed_773_, v_b_771_);
lean_dec_ref(v_as_768_);
lean_dec_ref(v_solution_767_);
lean_dec_ref(v_challenge_766_);
return v_res_774_;
}
}
static lean_object* _init_l_Lake_Check_compareAt___closed__0(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_775_ = lean_box(0);
v___x_776_ = lean_unsigned_to_nat(16u);
v___x_777_ = lean_mk_array(v___x_776_, v___x_775_);
return v___x_777_;
}
}
static lean_object* _init_l_Lake_Check_compareAt___closed__1(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_778_ = lean_obj_once(&l_Lake_Check_compareAt___closed__0, &l_Lake_Check_compareAt___closed__0_once, _init_l_Lake_Check_compareAt___closed__0);
v___x_779_ = lean_unsigned_to_nat(0u);
v___x_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
lean_ctor_set(v___x_780_, 1, v___x_778_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_compareAt(lean_object* v_challenge_781_, lean_object* v_solution_782_, lean_object* v_theoremTargets_783_, lean_object* v_definitionTargets_784_, lean_object* v_primitive_785_){
_start:
{
size_t v_sz_786_; size_t v___x_787_; lean_object* v___x_788_; 
v_sz_786_ = lean_array_size(v_theoremTargets_783_);
v___x_787_ = ((size_t)0ULL);
v___x_788_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__0(v_challenge_781_, v_solution_782_, v_theoremTargets_783_, v_sz_786_, v___x_787_, v_primitive_785_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_dec_ref(v_solution_782_);
lean_dec_ref(v_challenge_781_);
v_a_789_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_788_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_788_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
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
lean_object* v_a_797_; size_t v_sz_798_; lean_object* v___x_799_; 
v_a_797_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_788_, 1);
v_sz_798_ = lean_array_size(v_definitionTargets_784_);
v___x_799_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_compareAt_spec__1(v_challenge_781_, v_solution_782_, v_definitionTargets_784_, v_sz_798_, v___x_787_, v_a_797_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec_ref(v_solution_782_);
lean_dec_ref(v_challenge_781_);
v_a_800_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_799_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_799_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v_a_808_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_799_, 1);
v___x_809_ = lean_obj_once(&l_Lake_Check_compareAt___closed__1, &l_Lake_Check_compareAt___closed__1_once, _init_l_Lake_Check_compareAt___closed__1);
v___x_810_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2(v___x_809_, v_definitionTargets_784_);
v___x_811_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_compareAt_spec__2(v___x_809_, v_theoremTargets_783_);
v___x_812_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_812_, 0, v_challenge_781_);
lean_ctor_set(v___x_812_, 1, v_solution_782_);
lean_ctor_set(v___x_812_, 2, v___x_810_);
lean_ctor_set(v___x_812_, 3, v___x_811_);
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v_a_808_);
lean_ctor_set(v___x_813_, 1, v___x_809_);
v___x_814_ = l___private_Lake_Check_Compare_0__Lake_Check_Compare_loop(v___x_812_, v___x_813_);
lean_dec_ref_known(v___x_812_, 4);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_814_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_814_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_831_; 
v_a_823_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_831_ == 0)
{
v___x_825_ = v___x_814_;
v_isShared_826_ = v_isSharedCheck_831_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_814_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_831_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v_fst_827_; lean_object* v___x_829_; 
v_fst_827_ = lean_ctor_get(v_a_823_, 0);
lean_inc(v_fst_827_);
lean_dec(v_a_823_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 0, v_fst_827_);
v___x_829_ = v___x_825_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_fst_827_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_compareAt___boxed(lean_object* v_challenge_832_, lean_object* v_solution_833_, lean_object* v_theoremTargets_834_, lean_object* v_definitionTargets_835_, lean_object* v_primitive_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lake_Check_compareAt(v_challenge_832_, v_solution_833_, v_theoremTargets_834_, v_definitionTargets_835_, v_primitive_836_);
lean_dec_ref(v_definitionTargets_835_);
lean_dec_ref(v_theoremTargets_834_);
return v_res_837_;
}
}
lean_object* runtime_initialize_LeanExport_Parse(uint8_t builtin);
lean_object* runtime_initialize_Lake_Check_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashSet(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Check_Compare(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_LeanExport_Parse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Check_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Check_Compare(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_LeanExport_Parse(uint8_t builtin);
lean_object* initialize_Lake_Check_Util(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Std_Data_HashSet(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Check_Compare(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_LeanExport_Parse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Check_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Check_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Check_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Check_Compare(builtin);
}
#ifdef __cplusplus
}
#endif

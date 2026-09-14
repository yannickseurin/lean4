// Lean compiler output
// Module: Lake.Check.Axioms
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
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_ConstantInfo_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Illegal axiom detected: '"};
static const lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__0 = (const lean_object*)&l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__0_value;
static const lean_string_object l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__1 = (const lean_object*)&l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__1_value;
static const lean_string_object l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Constant not found in solution '"};
static const lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__2 = (const lean_object*)&l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___closed__0 = (const lean_object*)&l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___closed__0_value;
static const lean_ctor_object l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___boxed__const__1 = (const lean_object*)&l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop___closed__0 = (const lean_object*)&l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0___closed__0 = (const lean_object*)&l_Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Check_usedAxioms___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_usedAxioms___closed__0;
static lean_once_cell_t l_Lake_Check_usedAxioms___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_usedAxioms___closed__1;
static const lean_array_object l_Lake_Check_usedAxioms___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Check_usedAxioms___closed__2 = (const lean_object*)&l_Lake_Check_usedAxioms___closed__2_value;
static lean_once_cell_t l_Lake_Check_usedAxioms___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_usedAxioms___closed__3;
LEAN_EXPORT lean_object* l_Lake_Check_usedAxioms(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Solution constant is not a theorem: '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Const not found in solution: '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Solution constant is not a definition: '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_Check_checkAxioms___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Check_checkAxioms___closed__0 = (const lean_object*)&l_Lake_Check_checkAxioms___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Check_checkAxioms(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_checkAxioms___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2___redArg(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v___x_3_; 
v___x_3_ = lean_box(0);
return v___x_3_;
}
else
{
lean_object* v_key_4_; lean_object* v_value_5_; lean_object* v_tail_6_; uint8_t v___x_7_; 
v_key_4_ = lean_ctor_get(v_x_2_, 0);
v_value_5_ = lean_ctor_get(v_x_2_, 1);
v_tail_6_ = lean_ctor_get(v_x_2_, 2);
v___x_7_ = lean_name_eq(v_key_4_, v_a_1_);
if (v___x_7_ == 0)
{
v_x_2_ = v_tail_6_;
goto _start;
}
else
{
lean_object* v___x_9_; 
lean_inc(v_value_5_);
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v_value_5_);
return v___x_9_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2___redArg___boxed(lean_object* v_a_10_, lean_object* v_x_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2___redArg(v_a_10_, v_x_11_);
lean_dec(v_x_11_);
lean_dec(v_a_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg(lean_object* v_m_13_, lean_object* v_a_14_){
_start:
{
lean_object* v_buckets_15_; lean_object* v___x_16_; uint64_t v___y_18_; lean_object* v___x_32_; 
v_buckets_15_ = lean_ctor_get(v_m_13_, 1);
v___x_16_ = lean_array_get_size(v_buckets_15_);
v___x_32_ = l_unsafeCast___redArg(v_a_14_);
if (lean_obj_tag(v___x_32_) == 0)
{
uint64_t v___x_33_; 
v___x_33_ = 1723ULL;
v___y_18_ = v___x_33_;
goto v___jp_17_;
}
else
{
uint64_t v_hash_34_; 
v_hash_34_ = lean_ctor_get_uint64(v___x_32_, sizeof(void*)*2);
lean_dec(v___x_32_);
v___y_18_ = v_hash_34_;
goto v___jp_17_;
}
v___jp_17_:
{
uint64_t v___x_19_; uint64_t v___x_20_; uint64_t v_fold_21_; uint64_t v___x_22_; uint64_t v___x_23_; uint64_t v___x_24_; size_t v___x_25_; size_t v___x_26_; size_t v___x_27_; size_t v___x_28_; size_t v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_19_ = 32ULL;
v___x_20_ = lean_uint64_shift_right(v___y_18_, v___x_19_);
v_fold_21_ = lean_uint64_xor(v___y_18_, v___x_20_);
v___x_22_ = 16ULL;
v___x_23_ = lean_uint64_shift_right(v_fold_21_, v___x_22_);
v___x_24_ = lean_uint64_xor(v_fold_21_, v___x_23_);
v___x_25_ = lean_uint64_to_usize(v___x_24_);
v___x_26_ = lean_usize_of_nat(v___x_16_);
v___x_27_ = ((size_t)1ULL);
v___x_28_ = lean_usize_sub(v___x_26_, v___x_27_);
v___x_29_ = lean_usize_land(v___x_25_, v___x_28_);
v___x_30_ = lean_array_uget_borrowed(v_buckets_15_, v___x_29_);
v___x_31_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2___redArg(v_a_14_, v___x_30_);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg___boxed(lean_object* v_m_35_, lean_object* v_a_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg(v_m_35_, v_a_36_);
lean_dec(v_a_36_);
lean_dec_ref(v_m_35_);
return v_res_37_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0___redArg(lean_object* v_a_38_, lean_object* v_x_39_){
_start:
{
if (lean_obj_tag(v_x_39_) == 0)
{
uint8_t v___x_40_; 
v___x_40_ = 0;
return v___x_40_;
}
else
{
lean_object* v_key_41_; lean_object* v_tail_42_; uint8_t v___x_43_; 
v_key_41_ = lean_ctor_get(v_x_39_, 0);
v_tail_42_ = lean_ctor_get(v_x_39_, 2);
v___x_43_ = lean_name_eq(v_key_41_, v_a_38_);
if (v___x_43_ == 0)
{
v_x_39_ = v_tail_42_;
goto _start;
}
else
{
return v___x_43_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0___redArg___boxed(lean_object* v_a_45_, lean_object* v_x_46_){
_start:
{
uint8_t v_res_47_; lean_object* v_r_48_; 
v_res_47_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0___redArg(v_a_45_, v_x_46_);
lean_dec(v_x_46_);
lean_dec(v_a_45_);
v_r_48_ = lean_box(v_res_47_);
return v_r_48_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___redArg(lean_object* v_m_49_, lean_object* v_a_50_){
_start:
{
lean_object* v_buckets_51_; lean_object* v___x_52_; uint64_t v___y_54_; lean_object* v___x_68_; 
v_buckets_51_ = lean_ctor_get(v_m_49_, 1);
v___x_52_ = lean_array_get_size(v_buckets_51_);
v___x_68_ = l_unsafeCast___redArg(v_a_50_);
if (lean_obj_tag(v___x_68_) == 0)
{
uint64_t v___x_69_; 
v___x_69_ = 1723ULL;
v___y_54_ = v___x_69_;
goto v___jp_53_;
}
else
{
uint64_t v_hash_70_; 
v_hash_70_ = lean_ctor_get_uint64(v___x_68_, sizeof(void*)*2);
lean_dec(v___x_68_);
v___y_54_ = v_hash_70_;
goto v___jp_53_;
}
v___jp_53_:
{
uint64_t v___x_55_; uint64_t v___x_56_; uint64_t v_fold_57_; uint64_t v___x_58_; uint64_t v___x_59_; uint64_t v___x_60_; size_t v___x_61_; size_t v___x_62_; size_t v___x_63_; size_t v___x_64_; size_t v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_55_ = 32ULL;
v___x_56_ = lean_uint64_shift_right(v___y_54_, v___x_55_);
v_fold_57_ = lean_uint64_xor(v___y_54_, v___x_56_);
v___x_58_ = 16ULL;
v___x_59_ = lean_uint64_shift_right(v_fold_57_, v___x_58_);
v___x_60_ = lean_uint64_xor(v_fold_57_, v___x_59_);
v___x_61_ = lean_uint64_to_usize(v___x_60_);
v___x_62_ = lean_usize_of_nat(v___x_52_);
v___x_63_ = ((size_t)1ULL);
v___x_64_ = lean_usize_sub(v___x_62_, v___x_63_);
v___x_65_ = lean_usize_land(v___x_61_, v___x_64_);
v___x_66_ = lean_array_uget_borrowed(v_buckets_51_, v___x_65_);
v___x_67_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0___redArg(v_a_50_, v___x_66_);
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___redArg___boxed(lean_object* v_m_71_, lean_object* v_a_72_){
_start:
{
uint8_t v_res_73_; lean_object* v_r_74_; 
v_res_73_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___redArg(v_m_71_, v_a_72_);
lean_dec(v_a_72_);
lean_dec_ref(v_m_71_);
v_r_74_ = lean_box(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst(lean_object* v_n_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___y_82_; lean_object* v_solution_102_; lean_object* v_legalAxioms_103_; lean_object* v_constMap_104_; lean_object* v___x_105_; 
v_solution_102_ = lean_ctor_get(v_a_79_, 0);
v_legalAxioms_103_ = lean_ctor_get(v_a_79_, 1);
v_constMap_104_ = lean_ctor_get(v_solution_102_, 0);
v___x_105_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg(v_constMap_104_, v_n_78_);
if (lean_obj_tag(v___x_105_) == 1)
{
lean_object* v_val_106_; 
v_val_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_val_106_);
lean_dec_ref_known(v___x_105_, 1);
if (lean_obj_tag(v_val_106_) == 0)
{
lean_object* v_val_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_123_; 
v_val_107_ = lean_ctor_get(v_val_106_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v_val_106_);
if (v_isSharedCheck_123_ == 0)
{
v___x_109_ = v_val_106_;
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_val_107_);
lean_dec(v_val_106_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v_toConstantVal_111_; lean_object* v_name_112_; uint8_t v___x_113_; 
v_toConstantVal_111_ = lean_ctor_get(v_val_107_, 0);
lean_inc_ref(v_toConstantVal_111_);
lean_dec_ref(v_val_107_);
v_name_112_ = lean_ctor_get(v_toConstantVal_111_, 0);
lean_inc(v_name_112_);
lean_dec_ref(v_toConstantVal_111_);
v___x_113_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___redArg(v_legalAxioms_103_, v_name_112_);
lean_dec(v_name_112_);
if (v___x_113_ == 0)
{
uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
lean_dec_ref(v_a_80_);
v___x_114_ = 1;
v___x_115_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__0));
v___x_116_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_n_78_, v___x_114_);
v___x_117_ = lean_string_append(v___x_115_, v___x_116_);
lean_dec_ref(v___x_116_);
v___x_118_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__1));
v___x_119_ = lean_string_append(v___x_117_, v___x_118_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 0, v___x_119_);
v___x_121_ = v___x_109_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_119_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
else
{
lean_del_object(v___x_109_);
v___y_82_ = v_a_80_;
goto v___jp_81_;
}
}
}
else
{
lean_dec(v_val_106_);
v___y_82_ = v_a_80_;
goto v___jp_81_;
}
}
else
{
lean_object* v___x_124_; uint8_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
lean_dec(v___x_105_);
lean_dec_ref(v_a_80_);
v___x_124_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__2));
v___x_125_ = 1;
v___x_126_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_n_78_, v___x_125_);
v___x_127_ = lean_string_append(v___x_124_, v___x_126_);
lean_dec_ref(v___x_126_);
v___x_128_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__1));
v___x_129_ = lean_string_append(v___x_127_, v___x_128_);
v___x_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
v___jp_81_:
{
lean_object* v_worklist_83_; lean_object* v_checked_84_; uint8_t v___x_85_; 
v_worklist_83_ = lean_ctor_get(v___y_82_, 0);
v_checked_84_ = lean_ctor_get(v___y_82_, 1);
v___x_85_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___redArg(v_checked_84_, v_n_78_);
if (v___x_85_ == 0)
{
lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_96_; 
lean_inc_ref(v_checked_84_);
lean_inc_ref(v_worklist_83_);
v_isSharedCheck_96_ = !lean_is_exclusive(v___y_82_);
if (v_isSharedCheck_96_ == 0)
{
lean_object* v_unused_97_; lean_object* v_unused_98_; 
v_unused_97_ = lean_ctor_get(v___y_82_, 1);
lean_dec(v_unused_97_);
v_unused_98_ = lean_ctor_get(v___y_82_, 0);
lean_dec(v_unused_98_);
v___x_87_ = v___y_82_;
v_isShared_88_ = v_isSharedCheck_96_;
goto v_resetjp_86_;
}
else
{
lean_dec(v___y_82_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_96_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_92_; 
v___x_89_ = lean_box(0);
v___x_90_ = lean_array_push(v_worklist_83_, v_n_78_);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 0, v___x_90_);
v___x_92_ = v___x_87_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_90_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v_checked_84_);
v___x_92_ = v_reuseFailAlloc_95_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_89_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
}
else
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
lean_dec(v_n_78_);
v___x_99_ = lean_box(0);
v___x_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v___y_82_);
v___x_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___boxed(lean_object* v_n_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst(v_n_131_, v_a_132_, v_a_133_);
lean_dec_ref(v_a_132_);
return v_res_134_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0(lean_object* v_00_u03b2_135_, lean_object* v_m_136_, lean_object* v_a_137_){
_start:
{
uint8_t v___x_138_; 
v___x_138_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___redArg(v_m_136_, v_a_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___boxed(lean_object* v_00_u03b2_139_, lean_object* v_m_140_, lean_object* v_a_141_){
_start:
{
uint8_t v_res_142_; lean_object* v_r_143_; 
v_res_142_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0(v_00_u03b2_139_, v_m_140_, v_a_141_);
lean_dec(v_a_141_);
lean_dec_ref(v_m_140_);
v_r_143_ = lean_box(v_res_142_);
return v_r_143_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1(lean_object* v_00_u03b2_144_, lean_object* v_m_145_, lean_object* v_a_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg(v_m_145_, v_a_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___boxed(lean_object* v_00_u03b2_148_, lean_object* v_m_149_, lean_object* v_a_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1(v_00_u03b2_148_, v_m_149_, v_a_150_);
lean_dec(v_a_150_);
lean_dec_ref(v_m_149_);
return v_res_151_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0(lean_object* v_00_u03b2_152_, lean_object* v_a_153_, lean_object* v_x_154_){
_start:
{
uint8_t v___x_155_; 
v___x_155_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0___redArg(v_a_153_, v_x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0___boxed(lean_object* v_00_u03b2_156_, lean_object* v_a_157_, lean_object* v_x_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0(v_00_u03b2_156_, v_a_157_, v_x_158_);
lean_dec(v_x_158_);
lean_dec(v_a_157_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2(lean_object* v_00_u03b2_161_, lean_object* v_a_162_, lean_object* v_x_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2___redArg(v_a_162_, v_x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2___boxed(lean_object* v_00_u03b2_165_, lean_object* v_a_166_, lean_object* v_x_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1_spec__2(v_00_u03b2_165_, v_a_166_, v_x_167_);
lean_dec(v_x_167_);
lean_dec(v_a_166_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_x_169_, lean_object* v_x_170_){
_start:
{
if (lean_obj_tag(v_x_170_) == 0)
{
return v_x_169_;
}
else
{
lean_object* v_key_171_; lean_object* v_value_172_; lean_object* v_tail_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_200_; 
v_key_171_ = lean_ctor_get(v_x_170_, 0);
v_value_172_ = lean_ctor_get(v_x_170_, 1);
v_tail_173_ = lean_ctor_get(v_x_170_, 2);
v_isSharedCheck_200_ = !lean_is_exclusive(v_x_170_);
if (v_isSharedCheck_200_ == 0)
{
v___x_175_ = v_x_170_;
v_isShared_176_ = v_isSharedCheck_200_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_tail_173_);
lean_inc(v_value_172_);
lean_inc(v_key_171_);
lean_dec(v_x_170_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_200_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; uint64_t v___y_179_; lean_object* v___x_197_; 
v___x_177_ = lean_array_get_size(v_x_169_);
v___x_197_ = l_unsafeCast___redArg(v_key_171_);
if (lean_obj_tag(v___x_197_) == 0)
{
uint64_t v___x_198_; 
v___x_198_ = 1723ULL;
v___y_179_ = v___x_198_;
goto v___jp_178_;
}
else
{
uint64_t v_hash_199_; 
v_hash_199_ = lean_ctor_get_uint64(v___x_197_, sizeof(void*)*2);
lean_dec(v___x_197_);
v___y_179_ = v_hash_199_;
goto v___jp_178_;
}
v___jp_178_:
{
uint64_t v___x_180_; uint64_t v___x_181_; uint64_t v_fold_182_; uint64_t v___x_183_; uint64_t v___x_184_; uint64_t v___x_185_; size_t v___x_186_; size_t v___x_187_; size_t v___x_188_; size_t v___x_189_; size_t v___x_190_; lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_180_ = 32ULL;
v___x_181_ = lean_uint64_shift_right(v___y_179_, v___x_180_);
v_fold_182_ = lean_uint64_xor(v___y_179_, v___x_181_);
v___x_183_ = 16ULL;
v___x_184_ = lean_uint64_shift_right(v_fold_182_, v___x_183_);
v___x_185_ = lean_uint64_xor(v_fold_182_, v___x_184_);
v___x_186_ = lean_uint64_to_usize(v___x_185_);
v___x_187_ = lean_usize_of_nat(v___x_177_);
v___x_188_ = ((size_t)1ULL);
v___x_189_ = lean_usize_sub(v___x_187_, v___x_188_);
v___x_190_ = lean_usize_land(v___x_186_, v___x_189_);
v___x_191_ = lean_array_uget_borrowed(v_x_169_, v___x_190_);
lean_inc(v___x_191_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 2, v___x_191_);
v___x_193_ = v___x_175_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_key_171_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v_value_172_);
lean_ctor_set(v_reuseFailAlloc_196_, 2, v___x_191_);
v___x_193_ = v_reuseFailAlloc_196_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_194_; 
v___x_194_ = lean_array_uset(v_x_169_, v___x_190_, v___x_193_);
v_x_169_ = v___x_194_;
v_x_170_ = v_tail_173_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5___redArg(lean_object* v_i_201_, lean_object* v_source_202_, lean_object* v_target_203_){
_start:
{
lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_204_ = lean_array_get_size(v_source_202_);
v___x_205_ = lean_nat_dec_lt(v_i_201_, v___x_204_);
if (v___x_205_ == 0)
{
lean_dec_ref(v_source_202_);
lean_dec(v_i_201_);
return v_target_203_;
}
else
{
lean_object* v_es_206_; lean_object* v___x_207_; lean_object* v_source_208_; lean_object* v_target_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v_es_206_ = lean_array_fget(v_source_202_, v_i_201_);
v___x_207_ = lean_box(0);
v_source_208_ = lean_array_fset(v_source_202_, v_i_201_, v___x_207_);
v_target_209_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5_spec__6___redArg(v_target_203_, v_es_206_);
v___x_210_ = lean_unsigned_to_nat(1u);
v___x_211_ = lean_nat_add(v_i_201_, v___x_210_);
lean_dec(v_i_201_);
v_i_201_ = v___x_211_;
v_source_202_ = v_source_208_;
v_target_203_ = v_target_209_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4___redArg(lean_object* v_data_213_){
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
v___x_221_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5___redArg(v___x_217_, v_data_213_, v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1___redArg(lean_object* v_m_222_, lean_object* v_a_223_, lean_object* v_b_224_){
_start:
{
lean_object* v_size_225_; lean_object* v_buckets_226_; lean_object* v___x_227_; uint64_t v___y_229_; lean_object* v___x_266_; 
v_size_225_ = lean_ctor_get(v_m_222_, 0);
v_buckets_226_ = lean_ctor_get(v_m_222_, 1);
v___x_227_ = lean_array_get_size(v_buckets_226_);
v___x_266_ = l_unsafeCast___redArg(v_a_223_);
if (lean_obj_tag(v___x_266_) == 0)
{
uint64_t v___x_267_; 
v___x_267_ = 1723ULL;
v___y_229_ = v___x_267_;
goto v___jp_228_;
}
else
{
uint64_t v_hash_268_; 
v_hash_268_ = lean_ctor_get_uint64(v___x_266_, sizeof(void*)*2);
lean_dec(v___x_266_);
v___y_229_ = v_hash_268_;
goto v___jp_228_;
}
v___jp_228_:
{
uint64_t v___x_230_; uint64_t v___x_231_; uint64_t v_fold_232_; uint64_t v___x_233_; uint64_t v___x_234_; uint64_t v___x_235_; size_t v___x_236_; size_t v___x_237_; size_t v___x_238_; size_t v___x_239_; size_t v___x_240_; lean_object* v_bkt_241_; uint8_t v___x_242_; 
v___x_230_ = 32ULL;
v___x_231_ = lean_uint64_shift_right(v___y_229_, v___x_230_);
v_fold_232_ = lean_uint64_xor(v___y_229_, v___x_231_);
v___x_233_ = 16ULL;
v___x_234_ = lean_uint64_shift_right(v_fold_232_, v___x_233_);
v___x_235_ = lean_uint64_xor(v_fold_232_, v___x_234_);
v___x_236_ = lean_uint64_to_usize(v___x_235_);
v___x_237_ = lean_usize_of_nat(v___x_227_);
v___x_238_ = ((size_t)1ULL);
v___x_239_ = lean_usize_sub(v___x_237_, v___x_238_);
v___x_240_ = lean_usize_land(v___x_236_, v___x_239_);
v_bkt_241_ = lean_array_uget_borrowed(v_buckets_226_, v___x_240_);
v___x_242_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0_spec__0___redArg(v_a_223_, v_bkt_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_263_; 
lean_inc_ref(v_buckets_226_);
lean_inc(v_size_225_);
v_isSharedCheck_263_ = !lean_is_exclusive(v_m_222_);
if (v_isSharedCheck_263_ == 0)
{
lean_object* v_unused_264_; lean_object* v_unused_265_; 
v_unused_264_ = lean_ctor_get(v_m_222_, 1);
lean_dec(v_unused_264_);
v_unused_265_ = lean_ctor_get(v_m_222_, 0);
lean_dec(v_unused_265_);
v___x_244_ = v_m_222_;
v_isShared_245_ = v_isSharedCheck_263_;
goto v_resetjp_243_;
}
else
{
lean_dec(v_m_222_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_263_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_246_; lean_object* v_size_x27_247_; lean_object* v___x_248_; lean_object* v_buckets_x27_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_246_ = lean_unsigned_to_nat(1u);
v_size_x27_247_ = lean_nat_add(v_size_225_, v___x_246_);
lean_dec(v_size_225_);
lean_inc(v_bkt_241_);
v___x_248_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_248_, 0, v_a_223_);
lean_ctor_set(v___x_248_, 1, v_b_224_);
lean_ctor_set(v___x_248_, 2, v_bkt_241_);
v_buckets_x27_249_ = lean_array_uset(v_buckets_226_, v___x_240_, v___x_248_);
v___x_250_ = lean_unsigned_to_nat(4u);
v___x_251_ = lean_nat_mul(v_size_x27_247_, v___x_250_);
v___x_252_ = lean_unsigned_to_nat(3u);
v___x_253_ = lean_nat_div(v___x_251_, v___x_252_);
lean_dec(v___x_251_);
v___x_254_ = lean_array_get_size(v_buckets_x27_249_);
v___x_255_ = lean_nat_dec_le(v___x_253_, v___x_254_);
lean_dec(v___x_253_);
if (v___x_255_ == 0)
{
lean_object* v_val_256_; lean_object* v___x_258_; 
v_val_256_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4___redArg(v_buckets_x27_249_);
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 1, v_val_256_);
lean_ctor_set(v___x_244_, 0, v_size_x27_247_);
v___x_258_ = v___x_244_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_size_x27_247_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_val_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
else
{
lean_object* v___x_261_; 
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 1, v_buckets_x27_249_);
lean_ctor_set(v___x_244_, 0, v_size_x27_247_);
v___x_261_ = v___x_244_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_size_x27_247_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_buckets_x27_249_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
else
{
lean_dec(v_b_224_);
lean_dec(v_a_223_);
return v_m_222_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__0(lean_object* v_f_269_, lean_object* v_as_270_, size_t v_i_271_, size_t v_stop_272_, lean_object* v_b_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
uint8_t v___x_276_; 
v___x_276_ = lean_usize_dec_eq(v_i_271_, v_stop_272_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_array_uget_borrowed(v_as_270_, v_i_271_);
lean_inc_ref(v_f_269_);
lean_inc_ref(v___y_274_);
lean_inc(v___x_277_);
v___x_278_ = lean_apply_3(v_f_269_, v___x_277_, v___y_274_, v___y_275_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_dec_ref(v_f_269_);
return v___x_278_;
}
else
{
lean_object* v_a_279_; lean_object* v_fst_280_; lean_object* v_snd_281_; size_t v___x_282_; size_t v___x_283_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_a_279_);
lean_dec_ref_known(v___x_278_, 1);
v_fst_280_ = lean_ctor_get(v_a_279_, 0);
lean_inc(v_fst_280_);
v_snd_281_ = lean_ctor_get(v_a_279_, 1);
lean_inc(v_snd_281_);
lean_dec(v_a_279_);
v___x_282_ = ((size_t)1ULL);
v___x_283_ = lean_usize_add(v_i_271_, v___x_282_);
v_i_271_ = v___x_283_;
v_b_273_ = v_fst_280_;
v___y_275_ = v_snd_281_;
goto _start;
}
}
else
{
lean_object* v___x_285_; lean_object* v___x_286_; 
lean_dec_ref(v_f_269_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v_b_273_);
lean_ctor_set(v___x_285_, 1, v___y_275_);
v___x_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
return v___x_286_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__0___boxed(lean_object* v_f_287_, lean_object* v_as_288_, lean_object* v_i_289_, lean_object* v_stop_290_, lean_object* v_b_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
size_t v_i_boxed_294_; size_t v_stop_boxed_295_; lean_object* v_res_296_; 
v_i_boxed_294_ = lean_unbox_usize(v_i_289_);
lean_dec(v_i_289_);
v_stop_boxed_295_ = lean_unbox_usize(v_stop_290_);
lean_dec(v_stop_290_);
v_res_296_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__0(v_f_287_, v_as_288_, v_i_boxed_294_, v_stop_boxed_295_, v_b_291_, v___y_292_, v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec_ref(v_as_288_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__2(lean_object* v_f_297_, lean_object* v_as_298_, lean_object* v___y_299_, lean_object* v___y_300_){
_start:
{
if (lean_obj_tag(v_as_298_) == 0)
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
lean_dec_ref(v_f_297_);
v___x_301_ = lean_box(0);
v___x_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
lean_ctor_set(v___x_302_, 1, v___y_300_);
v___x_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
return v___x_303_;
}
else
{
lean_object* v_head_304_; lean_object* v_tail_305_; lean_object* v_ctor_306_; lean_object* v_rhs_307_; lean_object* v___x_308_; 
v_head_304_ = lean_ctor_get(v_as_298_, 0);
lean_inc(v_head_304_);
v_tail_305_ = lean_ctor_get(v_as_298_, 1);
lean_inc(v_tail_305_);
lean_dec_ref_known(v_as_298_, 2);
v_ctor_306_ = lean_ctor_get(v_head_304_, 0);
lean_inc(v_ctor_306_);
v_rhs_307_ = lean_ctor_get(v_head_304_, 2);
lean_inc_ref(v_rhs_307_);
lean_dec(v_head_304_);
lean_inc_ref(v_f_297_);
lean_inc_ref(v___y_299_);
v___x_308_ = lean_apply_3(v_f_297_, v_ctor_306_, v___y_299_, v___y_300_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_dec_ref(v_rhs_307_);
lean_dec(v_tail_305_);
lean_dec_ref(v_f_297_);
return v___x_308_;
}
else
{
lean_object* v_a_309_; lean_object* v_snd_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_309_);
lean_dec_ref_known(v___x_308_, 1);
v_snd_310_ = lean_ctor_get(v_a_309_, 1);
lean_inc(v_snd_310_);
lean_dec(v_a_309_);
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = l_Lean_Expr_getUsedConstants(v_rhs_307_);
v___x_313_ = lean_array_get_size(v___x_312_);
v___x_314_ = lean_nat_dec_lt(v___x_311_, v___x_313_);
if (v___x_314_ == 0)
{
lean_dec_ref(v___x_312_);
v_as_298_ = v_tail_305_;
v___y_300_ = v_snd_310_;
goto _start;
}
else
{
lean_object* v___x_316_; size_t v___x_317_; size_t v___x_318_; lean_object* v___x_319_; 
v___x_316_ = lean_box(0);
v___x_317_ = ((size_t)0ULL);
v___x_318_ = lean_usize_of_nat(v___x_313_);
lean_inc_ref(v_f_297_);
v___x_319_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__0(v_f_297_, v___x_312_, v___x_317_, v___x_318_, v___x_316_, v___y_299_, v_snd_310_);
lean_dec_ref(v___x_312_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_dec(v_tail_305_);
lean_dec_ref(v_f_297_);
return v___x_319_;
}
else
{
lean_object* v_a_320_; lean_object* v_snd_321_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_320_);
lean_dec_ref_known(v___x_319_, 1);
v_snd_321_ = lean_ctor_get(v_a_320_, 1);
lean_inc(v_snd_321_);
lean_dec(v_a_320_);
v_as_298_ = v_tail_305_;
v___y_300_ = v_snd_321_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__2___boxed(lean_object* v_f_323_, lean_object* v_as_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__2(v_f_323_, v_as_324_, v___y_325_, v___y_326_);
lean_dec_ref(v___y_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__1(lean_object* v_f_328_, lean_object* v_as_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
if (lean_obj_tag(v_as_329_) == 0)
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec_ref(v_f_328_);
v___x_332_ = lean_box(0);
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v___y_331_);
v___x_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
else
{
lean_object* v_head_335_; lean_object* v_tail_336_; lean_object* v___x_337_; 
v_head_335_ = lean_ctor_get(v_as_329_, 0);
lean_inc(v_head_335_);
v_tail_336_ = lean_ctor_get(v_as_329_, 1);
lean_inc(v_tail_336_);
lean_dec_ref_known(v_as_329_, 2);
lean_inc_ref(v_f_328_);
lean_inc_ref(v___y_330_);
v___x_337_ = lean_apply_3(v_f_328_, v_head_335_, v___y_330_, v___y_331_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_dec(v_tail_336_);
lean_dec_ref(v_f_328_);
return v___x_337_;
}
else
{
lean_object* v_a_338_; lean_object* v_snd_339_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_338_);
lean_dec_ref_known(v___x_337_, 1);
v_snd_339_ = lean_ctor_get(v_a_338_, 1);
lean_inc(v_snd_339_);
lean_dec(v_a_338_);
v_as_329_ = v_tail_336_;
v___y_331_ = v_snd_339_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__1___boxed(lean_object* v_f_341_, lean_object* v_as_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__1(v_f_341_, v_as_342_, v___y_343_, v___y_344_);
lean_dec_ref(v___y_343_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___lam__0(lean_object* v___x_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_346_);
lean_ctor_set(v___x_349_, 1, v___y_348_);
v___x_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___lam__0___boxed(lean_object* v___x_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___lam__0(v___x_351_, v___y_352_, v___y_353_);
lean_dec_ref(v___y_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0(lean_object* v_info_359_, lean_object* v_f_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v___y_364_; lean_object* v___y_365_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___y_386_; lean_object* v___x_406_; lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_382_ = l_Lean_ConstantInfo_type(v_info_359_);
v___x_383_ = l_Lean_Expr_getUsedConstants(v___x_382_);
v___x_384_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_array_get_size(v___x_383_);
v___x_407_ = lean_box(0);
v___x_408_ = lean_nat_dec_lt(v___x_384_, v___x_406_);
if (v___x_408_ == 0)
{
lean_object* v___f_409_; 
lean_dec_ref(v___x_383_);
v___f_409_ = ((lean_object*)(l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___closed__0));
v___y_386_ = v___f_409_;
goto v___jp_385_;
}
else
{
size_t v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_410_ = lean_usize_of_nat(v___x_406_);
v___x_411_ = ((lean_object*)(l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___boxed__const__1));
v___x_412_ = lean_box_usize(v___x_410_);
lean_inc_ref(v_f_360_);
v___x_413_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__0___boxed), 7, 5);
lean_closure_set(v___x_413_, 0, v_f_360_);
lean_closure_set(v___x_413_, 1, v___x_383_);
lean_closure_set(v___x_413_, 2, v___x_411_);
lean_closure_set(v___x_413_, 3, v___x_412_);
lean_closure_set(v___x_413_, 4, v___x_407_);
v___y_386_ = v___x_413_;
goto v___jp_385_;
}
v___jp_363_:
{
switch(lean_obj_tag(v_info_359_))
{
case 5:
{
lean_object* v_val_366_; lean_object* v_all_367_; lean_object* v_ctors_368_; lean_object* v___x_369_; 
v_val_366_ = lean_ctor_get(v_info_359_, 0);
lean_inc_ref(v_val_366_);
lean_dec_ref_known(v_info_359_, 1);
v_all_367_ = lean_ctor_get(v_val_366_, 3);
lean_inc(v_all_367_);
v_ctors_368_ = lean_ctor_get(v_val_366_, 4);
lean_inc(v_ctors_368_);
lean_dec_ref(v_val_366_);
lean_inc_ref(v_f_360_);
v___x_369_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__1(v_f_360_, v_ctors_368_, v___y_364_, v___y_365_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_dec(v_all_367_);
lean_dec_ref(v_f_360_);
return v___x_369_;
}
else
{
lean_object* v_a_370_; lean_object* v_snd_371_; lean_object* v___x_372_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_a_370_);
lean_dec_ref_known(v___x_369_, 1);
v_snd_371_ = lean_ctor_get(v_a_370_, 1);
lean_inc(v_snd_371_);
lean_dec(v_a_370_);
v___x_372_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__1(v_f_360_, v_all_367_, v___y_364_, v_snd_371_);
return v___x_372_;
}
}
case 6:
{
lean_object* v_val_373_; lean_object* v_induct_374_; lean_object* v___x_375_; 
v_val_373_ = lean_ctor_get(v_info_359_, 0);
lean_inc_ref(v_val_373_);
lean_dec_ref_known(v_info_359_, 1);
v_induct_374_ = lean_ctor_get(v_val_373_, 1);
lean_inc(v_induct_374_);
lean_dec_ref(v_val_373_);
lean_inc_ref(v___y_364_);
v___x_375_ = lean_apply_3(v_f_360_, v_induct_374_, v___y_364_, v___y_365_);
return v___x_375_;
}
case 7:
{
lean_object* v_val_376_; lean_object* v_rules_377_; lean_object* v___x_378_; 
v_val_376_ = lean_ctor_get(v_info_359_, 0);
lean_inc_ref(v_val_376_);
lean_dec_ref_known(v_info_359_, 1);
v_rules_377_ = lean_ctor_get(v_val_376_, 6);
lean_inc(v_rules_377_);
lean_dec_ref(v_val_376_);
v___x_378_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__2(v_f_360_, v_rules_377_, v___y_364_, v___y_365_);
return v___x_378_;
}
default: 
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
lean_dec_ref(v_f_360_);
lean_dec_ref(v_info_359_);
v___x_379_ = lean_box(0);
v___x_380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
lean_ctor_set(v___x_380_, 1, v___y_365_);
v___x_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
}
v___jp_385_:
{
lean_object* v___x_387_; 
lean_inc_ref(v___y_361_);
v___x_387_ = lean_apply_2(v___y_386_, v___y_361_, v___y_362_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_dec_ref(v_f_360_);
lean_dec_ref(v_info_359_);
return v___x_387_;
}
else
{
lean_object* v_a_388_; lean_object* v_snd_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_a_388_);
lean_dec_ref_known(v___x_387_, 1);
v_snd_389_ = lean_ctor_get(v_a_388_, 1);
lean_inc(v_snd_389_);
lean_dec(v_a_388_);
v___x_390_ = l_Lean_ConstantInfo_name(v_info_359_);
lean_inc_ref(v_f_360_);
lean_inc_ref(v___y_361_);
v___x_391_ = lean_apply_3(v_f_360_, v___x_390_, v___y_361_, v_snd_389_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_dec_ref(v_f_360_);
lean_dec_ref(v_info_359_);
return v___x_391_;
}
else
{
lean_object* v_a_392_; lean_object* v_snd_393_; uint8_t v___x_394_; lean_object* v___x_395_; 
v_a_392_ = lean_ctor_get(v___x_391_, 0);
lean_inc(v_a_392_);
lean_dec_ref_known(v___x_391_, 1);
v_snd_393_ = lean_ctor_get(v_a_392_, 1);
lean_inc(v_snd_393_);
lean_dec(v_a_392_);
v___x_394_ = 1;
lean_inc_ref(v_info_359_);
v___x_395_ = l_Lean_ConstantInfo_value_x3f(v_info_359_, v___x_394_);
if (lean_obj_tag(v___x_395_) == 1)
{
lean_object* v_val_396_; lean_object* v___x_397_; lean_object* v___x_398_; uint8_t v___x_399_; 
v_val_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_val_396_);
lean_dec_ref_known(v___x_395_, 1);
v___x_397_ = l_Lean_Expr_getUsedConstants(v_val_396_);
v___x_398_ = lean_array_get_size(v___x_397_);
v___x_399_ = lean_nat_dec_lt(v___x_384_, v___x_398_);
if (v___x_399_ == 0)
{
lean_dec_ref(v___x_397_);
v___y_364_ = v___y_361_;
v___y_365_ = v_snd_393_;
goto v___jp_363_;
}
else
{
lean_object* v___x_400_; size_t v___x_401_; size_t v___x_402_; lean_object* v___x_403_; 
v___x_400_ = lean_box(0);
v___x_401_ = ((size_t)0ULL);
v___x_402_ = lean_usize_of_nat(v___x_398_);
lean_inc_ref(v_f_360_);
v___x_403_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0_spec__0(v_f_360_, v___x_397_, v___x_401_, v___x_402_, v___x_400_, v___y_361_, v_snd_393_);
lean_dec_ref(v___x_397_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_dec_ref(v_f_360_);
lean_dec_ref(v_info_359_);
return v___x_403_;
}
else
{
lean_object* v_a_404_; lean_object* v_snd_405_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_404_);
lean_dec_ref_known(v___x_403_, 1);
v_snd_405_ = lean_ctor_get(v_a_404_, 1);
lean_inc(v_snd_405_);
lean_dec(v_a_404_);
v___y_364_ = v___y_361_;
v___y_365_ = v_snd_405_;
goto v___jp_363_;
}
}
}
else
{
lean_dec(v___x_395_);
v___y_364_ = v___y_361_;
v___y_365_ = v_snd_393_;
goto v___jp_363_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___boxed(lean_object* v_info_414_, lean_object* v_f_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0(v_info_414_, v_f_415_, v___y_416_, v___y_417_);
lean_dec_ref(v___y_416_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop(lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
lean_object* v_worklist_422_; lean_object* v_checked_423_; lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v_worklist_422_ = lean_ctor_get(v_a_421_, 0);
v_checked_423_ = lean_ctor_get(v_a_421_, 1);
v___x_424_ = lean_array_get_size(v_worklist_422_);
v___x_425_ = lean_unsigned_to_nat(0u);
v___x_426_ = lean_nat_dec_eq(v___x_424_, v___x_425_);
if (v___x_426_ == 0)
{
lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_467_; 
lean_inc_ref(v_checked_423_);
lean_inc_ref(v_worklist_422_);
v_isSharedCheck_467_ = !lean_is_exclusive(v_a_421_);
if (v_isSharedCheck_467_ == 0)
{
lean_object* v_unused_468_; lean_object* v_unused_469_; 
v_unused_468_ = lean_ctor_get(v_a_421_, 1);
lean_dec(v_unused_468_);
v_unused_469_ = lean_ctor_get(v_a_421_, 0);
lean_dec(v_unused_469_);
v___x_428_ = v_a_421_;
v_isShared_429_ = v_isSharedCheck_467_;
goto v_resetjp_427_;
}
else
{
lean_dec(v_a_421_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_467_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_430_ = l_Lean_instInhabitedName;
v___x_431_ = lean_unsigned_to_nat(1u);
v___x_432_ = lean_nat_sub(v___x_424_, v___x_431_);
v___x_433_ = lean_array_get(v___x_430_, v_worklist_422_, v___x_432_);
lean_dec(v___x_432_);
v___x_434_ = lean_array_pop(v_worklist_422_);
lean_inc_ref(v_checked_423_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v___x_434_);
v___x_436_ = v___x_428_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_checked_423_);
v___x_436_ = v_reuseFailAlloc_466_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
uint8_t v___x_437_; 
v___x_437_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___redArg(v_checked_423_, v___x_433_);
lean_dec_ref(v_checked_423_);
if (v___x_437_ == 0)
{
lean_object* v_solution_438_; lean_object* v_constMap_439_; lean_object* v___x_440_; 
v_solution_438_ = lean_ctor_get(v_a_420_, 0);
v_constMap_439_ = lean_ctor_get(v_solution_438_, 0);
v___x_440_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg(v_constMap_439_, v___x_433_);
if (lean_obj_tag(v___x_440_) == 1)
{
lean_object* v_val_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v_val_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_val_441_);
lean_dec_ref_known(v___x_440_, 1);
v___x_442_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop___closed__0));
v___x_443_ = l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0(v_val_441_, v___x_442_, v_a_420_, v___x_436_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_dec(v___x_433_);
return v___x_443_;
}
else
{
lean_object* v_a_444_; lean_object* v_snd_445_; lean_object* v_worklist_446_; lean_object* v_checked_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_457_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref_known(v___x_443_, 1);
v_snd_445_ = lean_ctor_get(v_a_444_, 1);
lean_inc(v_snd_445_);
lean_dec(v_a_444_);
v_worklist_446_ = lean_ctor_get(v_snd_445_, 0);
v_checked_447_ = lean_ctor_get(v_snd_445_, 1);
v_isSharedCheck_457_ = !lean_is_exclusive(v_snd_445_);
if (v_isSharedCheck_457_ == 0)
{
v___x_449_ = v_snd_445_;
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_checked_447_);
lean_inc(v_worklist_446_);
lean_dec(v_snd_445_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_451_ = lean_box(0);
v___x_452_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1___redArg(v_checked_447_, v___x_433_, v___x_451_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 1, v___x_452_);
v___x_454_ = v___x_449_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_worklist_446_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___x_452_);
v___x_454_ = v_reuseFailAlloc_456_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
v_a_421_ = v___x_454_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_458_; uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
lean_dec(v___x_440_);
lean_dec_ref(v___x_436_);
v___x_458_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__2));
v___x_459_ = 1;
v___x_460_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_433_, v___x_459_);
v___x_461_ = lean_string_append(v___x_458_, v___x_460_);
lean_dec_ref(v___x_460_);
v___x_462_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__1));
v___x_463_ = lean_string_append(v___x_461_, v___x_462_);
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
return v___x_464_;
}
}
else
{
lean_dec(v___x_433_);
v_a_421_ = v___x_436_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = lean_box(0);
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
lean_ctor_set(v___x_471_, 1, v_a_421_);
v___x_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
return v___x_472_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop___boxed(lean_object* v_a_473_, lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop(v_a_473_, v_a_474_);
lean_dec_ref(v_a_473_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1(lean_object* v_00_u03b2_476_, lean_object* v_m_477_, lean_object* v_a_478_, lean_object* v_b_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1___redArg(v_m_477_, v_a_478_, v_b_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4(lean_object* v_00_u03b2_481_, lean_object* v_data_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4___redArg(v_data_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_484_, lean_object* v_i_485_, lean_object* v_source_486_, lean_object* v_target_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5___redArg(v_i_485_, v_source_486_, v_target_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_489_, lean_object* v_x_490_, lean_object* v_x_491_){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1_spec__4_spec__5_spec__6___redArg(v_x_490_, v_x_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__0(lean_object* v_f_493_, lean_object* v_as_494_, size_t v_i_495_, size_t v_stop_496_, lean_object* v_b_497_, lean_object* v___y_498_){
_start:
{
uint8_t v___x_499_; 
v___x_499_ = lean_usize_dec_eq(v_i_495_, v_stop_496_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v_fst_502_; lean_object* v_snd_503_; size_t v___x_504_; size_t v___x_505_; 
v___x_500_ = lean_array_uget_borrowed(v_as_494_, v_i_495_);
lean_inc_ref(v_f_493_);
lean_inc(v___x_500_);
v___x_501_ = lean_apply_2(v_f_493_, v___x_500_, v___y_498_);
v_fst_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_fst_502_);
v_snd_503_ = lean_ctor_get(v___x_501_, 1);
lean_inc(v_snd_503_);
lean_dec_ref(v___x_501_);
v___x_504_ = ((size_t)1ULL);
v___x_505_ = lean_usize_add(v_i_495_, v___x_504_);
v_i_495_ = v___x_505_;
v_b_497_ = v_fst_502_;
v___y_498_ = v_snd_503_;
goto _start;
}
else
{
lean_object* v___x_507_; 
lean_dec_ref(v_f_493_);
v___x_507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_507_, 0, v_b_497_);
lean_ctor_set(v___x_507_, 1, v___y_498_);
return v___x_507_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__0___boxed(lean_object* v_f_508_, lean_object* v_as_509_, lean_object* v_i_510_, lean_object* v_stop_511_, lean_object* v_b_512_, lean_object* v___y_513_){
_start:
{
size_t v_i_boxed_514_; size_t v_stop_boxed_515_; lean_object* v_res_516_; 
v_i_boxed_514_ = lean_unbox_usize(v_i_510_);
lean_dec(v_i_510_);
v_stop_boxed_515_ = lean_unbox_usize(v_stop_511_);
lean_dec(v_stop_511_);
v_res_516_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__0(v_f_508_, v_as_509_, v_i_boxed_514_, v_stop_boxed_515_, v_b_512_, v___y_513_);
lean_dec_ref(v_as_509_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__2(lean_object* v_f_517_, lean_object* v_as_518_, lean_object* v___y_519_){
_start:
{
if (lean_obj_tag(v_as_518_) == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; 
lean_dec_ref(v_f_517_);
v___x_520_ = lean_box(0);
v___x_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
lean_ctor_set(v___x_521_, 1, v___y_519_);
return v___x_521_;
}
else
{
lean_object* v_head_522_; lean_object* v_tail_523_; lean_object* v_ctor_524_; lean_object* v_rhs_525_; lean_object* v___x_526_; lean_object* v_snd_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; uint8_t v___x_531_; 
v_head_522_ = lean_ctor_get(v_as_518_, 0);
lean_inc(v_head_522_);
v_tail_523_ = lean_ctor_get(v_as_518_, 1);
lean_inc(v_tail_523_);
lean_dec_ref_known(v_as_518_, 2);
v_ctor_524_ = lean_ctor_get(v_head_522_, 0);
lean_inc(v_ctor_524_);
v_rhs_525_ = lean_ctor_get(v_head_522_, 2);
lean_inc_ref(v_rhs_525_);
lean_dec(v_head_522_);
lean_inc_ref(v_f_517_);
v___x_526_ = lean_apply_2(v_f_517_, v_ctor_524_, v___y_519_);
v_snd_527_ = lean_ctor_get(v___x_526_, 1);
lean_inc(v_snd_527_);
lean_dec_ref(v___x_526_);
v___x_528_ = lean_unsigned_to_nat(0u);
v___x_529_ = l_Lean_Expr_getUsedConstants(v_rhs_525_);
v___x_530_ = lean_array_get_size(v___x_529_);
v___x_531_ = lean_nat_dec_lt(v___x_528_, v___x_530_);
if (v___x_531_ == 0)
{
lean_dec_ref(v___x_529_);
v_as_518_ = v_tail_523_;
v___y_519_ = v_snd_527_;
goto _start;
}
else
{
lean_object* v___x_533_; size_t v___x_534_; size_t v___x_535_; lean_object* v___x_536_; lean_object* v_snd_537_; 
v___x_533_ = lean_box(0);
v___x_534_ = ((size_t)0ULL);
v___x_535_ = lean_usize_of_nat(v___x_530_);
lean_inc_ref(v_f_517_);
v___x_536_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__0(v_f_517_, v___x_529_, v___x_534_, v___x_535_, v___x_533_, v_snd_527_);
lean_dec_ref(v___x_529_);
v_snd_537_ = lean_ctor_get(v___x_536_, 1);
lean_inc(v_snd_537_);
lean_dec_ref(v___x_536_);
v_as_518_ = v_tail_523_;
v___y_519_ = v_snd_537_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__1(lean_object* v_f_539_, lean_object* v_as_540_, lean_object* v___y_541_){
_start:
{
if (lean_obj_tag(v_as_540_) == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; 
lean_dec_ref(v_f_539_);
v___x_542_ = lean_box(0);
v___x_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
lean_ctor_set(v___x_543_, 1, v___y_541_);
return v___x_543_;
}
else
{
lean_object* v_head_544_; lean_object* v_tail_545_; lean_object* v___x_546_; lean_object* v_snd_547_; 
v_head_544_ = lean_ctor_get(v_as_540_, 0);
lean_inc(v_head_544_);
v_tail_545_ = lean_ctor_get(v_as_540_, 1);
lean_inc(v_tail_545_);
lean_dec_ref_known(v_as_540_, 2);
lean_inc_ref(v_f_539_);
v___x_546_ = lean_apply_2(v_f_539_, v_head_544_, v___y_541_);
v_snd_547_ = lean_ctor_get(v___x_546_, 1);
lean_inc(v_snd_547_);
lean_dec_ref(v___x_546_);
v_as_540_ = v_tail_545_;
v___y_541_ = v_snd_547_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0___lam__0(lean_object* v___x_549_, lean_object* v___y_550_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_549_);
lean_ctor_set(v___x_551_, 1, v___y_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0(lean_object* v_info_554_, lean_object* v_f_555_, lean_object* v___y_556_){
_start:
{
lean_object* v___y_558_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___y_577_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v___x_573_ = l_Lean_ConstantInfo_type(v_info_554_);
v___x_574_ = l_Lean_Expr_getUsedConstants(v___x_573_);
v___x_575_ = lean_unsigned_to_nat(0u);
v___x_594_ = lean_array_get_size(v___x_574_);
v___x_595_ = lean_box(0);
v___x_596_ = lean_nat_dec_lt(v___x_575_, v___x_594_);
if (v___x_596_ == 0)
{
lean_object* v___f_597_; 
lean_dec_ref(v___x_574_);
v___f_597_ = ((lean_object*)(l_Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0___closed__0));
v___y_577_ = v___f_597_;
goto v___jp_576_;
}
else
{
size_t v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_598_ = lean_usize_of_nat(v___x_594_);
v___x_599_ = ((lean_object*)(l_Lake_Check_runForUsedConsts___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__0___boxed__const__1));
v___x_600_ = lean_box_usize(v___x_598_);
lean_inc_ref(v_f_555_);
v___x_601_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__0___boxed), 6, 5);
lean_closure_set(v___x_601_, 0, v_f_555_);
lean_closure_set(v___x_601_, 1, v___x_574_);
lean_closure_set(v___x_601_, 2, v___x_599_);
lean_closure_set(v___x_601_, 3, v___x_600_);
lean_closure_set(v___x_601_, 4, v___x_595_);
v___y_577_ = v___x_601_;
goto v___jp_576_;
}
v___jp_557_:
{
switch(lean_obj_tag(v_info_554_))
{
case 5:
{
lean_object* v_val_559_; lean_object* v_all_560_; lean_object* v_ctors_561_; lean_object* v___x_562_; lean_object* v_snd_563_; lean_object* v___x_564_; 
v_val_559_ = lean_ctor_get(v_info_554_, 0);
lean_inc_ref(v_val_559_);
lean_dec_ref_known(v_info_554_, 1);
v_all_560_ = lean_ctor_get(v_val_559_, 3);
lean_inc(v_all_560_);
v_ctors_561_ = lean_ctor_get(v_val_559_, 4);
lean_inc(v_ctors_561_);
lean_dec_ref(v_val_559_);
lean_inc_ref(v_f_555_);
v___x_562_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__1(v_f_555_, v_ctors_561_, v___y_558_);
v_snd_563_ = lean_ctor_get(v___x_562_, 1);
lean_inc(v_snd_563_);
lean_dec_ref(v___x_562_);
v___x_564_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__1(v_f_555_, v_all_560_, v_snd_563_);
return v___x_564_;
}
case 6:
{
lean_object* v_val_565_; lean_object* v_induct_566_; lean_object* v___x_567_; 
v_val_565_ = lean_ctor_get(v_info_554_, 0);
lean_inc_ref(v_val_565_);
lean_dec_ref_known(v_info_554_, 1);
v_induct_566_ = lean_ctor_get(v_val_565_, 1);
lean_inc(v_induct_566_);
lean_dec_ref(v_val_565_);
v___x_567_ = lean_apply_2(v_f_555_, v_induct_566_, v___y_558_);
return v___x_567_;
}
case 7:
{
lean_object* v_val_568_; lean_object* v_rules_569_; lean_object* v___x_570_; 
v_val_568_ = lean_ctor_get(v_info_554_, 0);
lean_inc_ref(v_val_568_);
lean_dec_ref_known(v_info_554_, 1);
v_rules_569_ = lean_ctor_get(v_val_568_, 6);
lean_inc(v_rules_569_);
lean_dec_ref(v_val_568_);
v___x_570_ = l_List_forM___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__2(v_f_555_, v_rules_569_, v___y_558_);
return v___x_570_;
}
default: 
{
lean_object* v___x_571_; lean_object* v___x_572_; 
lean_dec_ref(v_f_555_);
lean_dec_ref(v_info_554_);
v___x_571_ = lean_box(0);
v___x_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
lean_ctor_set(v___x_572_, 1, v___y_558_);
return v___x_572_;
}
}
}
v___jp_576_:
{
lean_object* v___x_578_; lean_object* v_snd_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v_snd_582_; uint8_t v___x_583_; lean_object* v___x_584_; 
v___x_578_ = lean_apply_1(v___y_577_, v___y_556_);
v_snd_579_ = lean_ctor_get(v___x_578_, 1);
lean_inc(v_snd_579_);
lean_dec_ref(v___x_578_);
v___x_580_ = l_Lean_ConstantInfo_name(v_info_554_);
lean_inc_ref(v_f_555_);
v___x_581_ = lean_apply_2(v_f_555_, v___x_580_, v_snd_579_);
v_snd_582_ = lean_ctor_get(v___x_581_, 1);
lean_inc(v_snd_582_);
lean_dec_ref(v___x_581_);
v___x_583_ = 1;
lean_inc_ref(v_info_554_);
v___x_584_ = l_Lean_ConstantInfo_value_x3f(v_info_554_, v___x_583_);
if (lean_obj_tag(v___x_584_) == 1)
{
lean_object* v_val_585_; lean_object* v___x_586_; lean_object* v___x_587_; uint8_t v___x_588_; 
v_val_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_val_585_);
lean_dec_ref_known(v___x_584_, 1);
v___x_586_ = l_Lean_Expr_getUsedConstants(v_val_585_);
v___x_587_ = lean_array_get_size(v___x_586_);
v___x_588_ = lean_nat_dec_lt(v___x_575_, v___x_587_);
if (v___x_588_ == 0)
{
lean_dec_ref(v___x_586_);
v___y_558_ = v_snd_582_;
goto v___jp_557_;
}
else
{
lean_object* v___x_589_; size_t v___x_590_; size_t v___x_591_; lean_object* v___x_592_; lean_object* v_snd_593_; 
v___x_589_ = lean_box(0);
v___x_590_ = ((size_t)0ULL);
v___x_591_ = lean_usize_of_nat(v___x_587_);
lean_inc_ref(v_f_555_);
v___x_592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0_spec__0(v_f_555_, v___x_586_, v___x_590_, v___x_591_, v___x_589_, v_snd_582_);
lean_dec_ref(v___x_586_);
v_snd_593_ = lean_ctor_get(v___x_592_, 1);
lean_inc(v_snd_593_);
lean_dec_ref(v___x_592_);
v___y_558_ = v_snd_593_;
goto v___jp_557_;
}
}
else
{
lean_dec(v___x_584_);
v___y_558_ = v_snd_582_;
goto v___jp_557_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1___lam__0(lean_object* v_a_602_, lean_object* v_constMap_603_, lean_object* v___x_604_, lean_object* v_ref_605_, lean_object* v___y_606_){
_start:
{
uint8_t v___x_607_; 
v___x_607_ = lean_name_eq(v_ref_605_, v_a_602_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; 
v___x_608_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg(v_constMap_603_, v_ref_605_);
if (lean_obj_tag(v___x_608_) == 1)
{
lean_object* v_val_609_; 
v_val_609_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_val_609_);
lean_dec_ref_known(v___x_608_, 1);
if (lean_obj_tag(v_val_609_) == 0)
{
lean_object* v_fst_610_; lean_object* v_snd_611_; uint8_t v___x_612_; 
lean_dec_ref_known(v_val_609_, 1);
v_fst_610_ = lean_ctor_get(v___y_606_, 0);
v_snd_611_ = lean_ctor_get(v___y_606_, 1);
v___x_612_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__0___redArg(v_fst_610_, v_ref_605_);
if (v___x_612_ == 0)
{
lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_623_; 
lean_inc(v_snd_611_);
lean_inc(v_fst_610_);
v_isSharedCheck_623_ = !lean_is_exclusive(v___y_606_);
if (v_isSharedCheck_623_ == 0)
{
lean_object* v_unused_624_; lean_object* v_unused_625_; 
v_unused_624_ = lean_ctor_get(v___y_606_, 1);
lean_dec(v_unused_624_);
v_unused_625_ = lean_ctor_get(v___y_606_, 0);
lean_dec(v_unused_625_);
v___x_614_ = v___y_606_;
v_isShared_615_ = v_isSharedCheck_623_;
goto v_resetjp_613_;
}
else
{
lean_dec(v___y_606_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_623_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_616_; lean_object* v___x_618_; 
lean_inc(v_ref_605_);
v___x_616_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1___redArg(v_fst_610_, v_ref_605_, v___x_604_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 1, v_a_602_);
lean_ctor_set(v___x_614_, 0, v_ref_605_);
v___x_618_ = v___x_614_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_ref_605_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v_a_602_);
v___x_618_ = v_reuseFailAlloc_622_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_array_push(v_snd_611_, v___x_618_);
v___x_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_616_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_604_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
return v___x_621_;
}
}
}
else
{
lean_object* v___x_626_; 
lean_dec(v_ref_605_);
lean_dec(v_a_602_);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_604_);
lean_ctor_set(v___x_626_, 1, v___y_606_);
return v___x_626_;
}
}
else
{
lean_object* v___x_627_; 
lean_dec(v_val_609_);
lean_dec(v_ref_605_);
lean_dec(v_a_602_);
v___x_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_627_, 0, v___x_604_);
lean_ctor_set(v___x_627_, 1, v___y_606_);
return v___x_627_;
}
}
else
{
lean_object* v___x_628_; 
lean_dec(v___x_608_);
lean_dec(v_ref_605_);
lean_dec(v_a_602_);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_604_);
lean_ctor_set(v___x_628_, 1, v___y_606_);
return v___x_628_;
}
}
else
{
lean_object* v___x_629_; 
lean_dec(v_ref_605_);
lean_dec(v_a_602_);
v___x_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_604_);
lean_ctor_set(v___x_629_, 1, v___y_606_);
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1___lam__0___boxed(lean_object* v_a_630_, lean_object* v_constMap_631_, lean_object* v___x_632_, lean_object* v_ref_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1___lam__0(v_a_630_, v_constMap_631_, v___x_632_, v_ref_633_, v___y_634_);
lean_dec_ref(v_constMap_631_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1(lean_object* v_env_636_, lean_object* v_as_637_, size_t v_sz_638_, size_t v_i_639_, lean_object* v_b_640_, lean_object* v___y_641_){
_start:
{
lean_object* v_a_643_; lean_object* v_snd_644_; uint8_t v___x_648_; 
v___x_648_ = lean_usize_dec_lt(v_i_639_, v_sz_638_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; 
lean_dec_ref(v_env_636_);
v___x_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_649_, 0, v_b_640_);
lean_ctor_set(v___x_649_, 1, v___y_641_);
return v___x_649_;
}
else
{
lean_object* v_constMap_650_; lean_object* v___x_651_; lean_object* v_a_652_; lean_object* v___x_653_; 
v_constMap_650_ = lean_ctor_get(v_env_636_, 0);
v___x_651_ = lean_box(0);
v_a_652_ = lean_array_uget_borrowed(v_as_637_, v_i_639_);
v___x_653_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg(v_constMap_650_, v_a_652_);
if (lean_obj_tag(v___x_653_) == 1)
{
lean_object* v_val_654_; lean_object* v___f_655_; lean_object* v___x_656_; lean_object* v_snd_657_; 
v_val_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_val_654_);
lean_dec_ref_known(v___x_653_, 1);
lean_inc_ref(v_constMap_650_);
lean_inc(v_a_652_);
v___f_655_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1___lam__0___boxed), 5, 3);
lean_closure_set(v___f_655_, 0, v_a_652_);
lean_closure_set(v___f_655_, 1, v_constMap_650_);
lean_closure_set(v___f_655_, 2, v___x_651_);
v___x_656_ = l_Lake_Check_runForUsedConsts___at___00Lake_Check_usedAxioms_spec__0(v_val_654_, v___f_655_, v___y_641_);
v_snd_657_ = lean_ctor_get(v___x_656_, 1);
lean_inc(v_snd_657_);
lean_dec_ref(v___x_656_);
v_a_643_ = v___x_651_;
v_snd_644_ = v_snd_657_;
goto v___jp_642_;
}
else
{
lean_dec(v___x_653_);
v_a_643_ = v___x_651_;
v_snd_644_ = v___y_641_;
goto v___jp_642_;
}
}
v___jp_642_:
{
size_t v___x_645_; size_t v___x_646_; 
v___x_645_ = ((size_t)1ULL);
v___x_646_ = lean_usize_add(v_i_639_, v___x_645_);
v_i_639_ = v___x_646_;
v_b_640_ = v_a_643_;
v___y_641_ = v_snd_644_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1___boxed(lean_object* v_env_658_, lean_object* v_as_659_, lean_object* v_sz_660_, lean_object* v_i_661_, lean_object* v_b_662_, lean_object* v___y_663_){
_start:
{
size_t v_sz_boxed_664_; size_t v_i_boxed_665_; lean_object* v_res_666_; 
v_sz_boxed_664_ = lean_unbox_usize(v_sz_660_);
lean_dec(v_sz_660_);
v_i_boxed_665_ = lean_unbox_usize(v_i_661_);
lean_dec(v_i_661_);
v_res_666_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1(v_env_658_, v_as_659_, v_sz_boxed_664_, v_i_boxed_665_, v_b_662_, v___y_663_);
lean_dec_ref(v_as_659_);
return v_res_666_;
}
}
static lean_object* _init_l_Lake_Check_usedAxioms___closed__0(void){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_667_ = lean_box(0);
v___x_668_ = lean_unsigned_to_nat(16u);
v___x_669_ = lean_mk_array(v___x_668_, v___x_667_);
return v___x_669_;
}
}
static lean_object* _init_l_Lake_Check_usedAxioms___closed__1(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_obj_once(&l_Lake_Check_usedAxioms___closed__0, &l_Lake_Check_usedAxioms___closed__0_once, _init_l_Lake_Check_usedAxioms___closed__0);
v___x_671_ = lean_unsigned_to_nat(0u);
v___x_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
lean_ctor_set(v___x_672_, 1, v___x_670_);
return v___x_672_;
}
}
static lean_object* _init_l_Lake_Check_usedAxioms___closed__3(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = ((lean_object*)(l_Lake_Check_usedAxioms___closed__2));
v___x_676_ = lean_obj_once(&l_Lake_Check_usedAxioms___closed__1, &l_Lake_Check_usedAxioms___closed__1_once, _init_l_Lake_Check_usedAxioms___closed__1);
v___x_677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
lean_ctor_set(v___x_677_, 1, v___x_675_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_usedAxioms(lean_object* v_env_678_){
_start:
{
lean_object* v_constOrder_679_; lean_object* v___x_680_; size_t v_sz_681_; size_t v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v_snd_685_; lean_object* v_snd_686_; 
v_constOrder_679_ = lean_ctor_get(v_env_678_, 1);
lean_inc_ref(v_constOrder_679_);
v___x_680_ = lean_box(0);
v_sz_681_ = lean_array_size(v_constOrder_679_);
v___x_682_ = ((size_t)0ULL);
v___x_683_ = lean_obj_once(&l_Lake_Check_usedAxioms___closed__3, &l_Lake_Check_usedAxioms___closed__3_once, _init_l_Lake_Check_usedAxioms___closed__3);
v___x_684_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_usedAxioms_spec__1(v_env_678_, v_constOrder_679_, v_sz_681_, v___x_682_, v___x_680_, v___x_683_);
lean_dec_ref(v_constOrder_679_);
v_snd_685_ = lean_ctor_get(v___x_684_, 1);
lean_inc(v_snd_685_);
lean_dec_ref(v___x_684_);
v_snd_686_ = lean_ctor_get(v_snd_685_, 1);
lean_inc(v_snd_686_);
lean_dec(v_snd_685_);
return v_snd_686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2_spec__2(lean_object* v_as_687_, size_t v_sz_688_, size_t v_i_689_, lean_object* v_b_690_){
_start:
{
uint8_t v___x_691_; 
v___x_691_ = lean_usize_dec_lt(v_i_689_, v_sz_688_);
if (v___x_691_ == 0)
{
return v_b_690_;
}
else
{
lean_object* v_a_692_; lean_object* v___x_693_; lean_object* v_r_694_; size_t v___x_695_; size_t v___x_696_; 
v_a_692_ = lean_array_uget_borrowed(v_as_687_, v_i_689_);
v___x_693_ = lean_box(0);
lean_inc(v_a_692_);
v_r_694_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_spec__1___redArg(v_b_690_, v_a_692_, v___x_693_);
v___x_695_ = ((size_t)1ULL);
v___x_696_ = lean_usize_add(v_i_689_, v___x_695_);
v_i_689_ = v___x_696_;
v_b_690_ = v_r_694_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2_spec__2___boxed(lean_object* v_as_698_, lean_object* v_sz_699_, lean_object* v_i_700_, lean_object* v_b_701_){
_start:
{
size_t v_sz_boxed_702_; size_t v_i_boxed_703_; lean_object* v_res_704_; 
v_sz_boxed_702_ = lean_unbox_usize(v_sz_699_);
lean_dec(v_sz_699_);
v_i_boxed_703_ = lean_unbox_usize(v_i_700_);
lean_dec(v_i_700_);
v_res_704_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2_spec__2(v_as_698_, v_sz_boxed_702_, v_i_boxed_703_, v_b_701_);
lean_dec_ref(v_as_698_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2(lean_object* v_m_705_, lean_object* v_l_706_){
_start:
{
size_t v_sz_707_; size_t v___x_708_; lean_object* v___x_709_; 
v_sz_707_ = lean_array_size(v_l_706_);
v___x_708_ = ((size_t)0ULL);
v___x_709_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2_spec__2(v_l_706_, v_sz_707_, v___x_708_, v_m_705_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2___boxed(lean_object* v_m_710_, lean_object* v_l_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2(v_m_710_, v_l_711_);
lean_dec_ref(v_l_711_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0(lean_object* v_solution_715_, lean_object* v_as_716_, size_t v_sz_717_, size_t v_i_718_, lean_object* v_b_719_){
_start:
{
uint8_t v___x_720_; 
v___x_720_ = lean_usize_dec_lt(v_i_718_, v_sz_717_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; 
v___x_721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_721_, 0, v_b_719_);
return v___x_721_;
}
else
{
lean_object* v_constMap_722_; lean_object* v_a_723_; lean_object* v___x_724_; 
v_constMap_722_ = lean_ctor_get(v_solution_715_, 0);
v_a_723_ = lean_array_uget_borrowed(v_as_716_, v_i_718_);
v___x_724_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg(v_constMap_722_, v_a_723_);
if (lean_obj_tag(v___x_724_) == 1)
{
lean_object* v_val_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_744_; 
v_val_725_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_744_ == 0)
{
v___x_727_ = v___x_724_;
v_isShared_728_ = v_isSharedCheck_744_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_val_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_744_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
if (lean_obj_tag(v_val_725_) == 2)
{
lean_object* v_val_729_; lean_object* v_toConstantVal_730_; lean_object* v_name_731_; lean_object* v___x_732_; size_t v___x_733_; size_t v___x_734_; 
lean_del_object(v___x_727_);
v_val_729_ = lean_ctor_get(v_val_725_, 0);
lean_inc_ref(v_val_729_);
lean_dec_ref_known(v_val_725_, 1);
v_toConstantVal_730_ = lean_ctor_get(v_val_729_, 0);
lean_inc_ref(v_toConstantVal_730_);
lean_dec_ref(v_val_729_);
v_name_731_ = lean_ctor_get(v_toConstantVal_730_, 0);
lean_inc(v_name_731_);
lean_dec_ref(v_toConstantVal_730_);
v___x_732_ = lean_array_push(v_b_719_, v_name_731_);
v___x_733_ = ((size_t)1ULL);
v___x_734_ = lean_usize_add(v_i_718_, v___x_733_);
v_i_718_ = v___x_734_;
v_b_719_ = v___x_732_;
goto _start;
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_742_; 
lean_dec(v_val_725_);
lean_dec_ref(v_b_719_);
v___x_736_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___closed__0));
lean_inc(v_a_723_);
v___x_737_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_723_, v___x_720_);
v___x_738_ = lean_string_append(v___x_736_, v___x_737_);
lean_dec_ref(v___x_737_);
v___x_739_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__1));
v___x_740_ = lean_string_append(v___x_738_, v___x_739_);
if (v_isShared_728_ == 0)
{
lean_ctor_set_tag(v___x_727_, 0);
lean_ctor_set(v___x_727_, 0, v___x_740_);
v___x_742_ = v___x_727_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v___x_740_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
}
else
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
lean_dec(v___x_724_);
lean_dec_ref(v_b_719_);
v___x_745_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___closed__1));
lean_inc(v_a_723_);
v___x_746_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_723_, v___x_720_);
v___x_747_ = lean_string_append(v___x_745_, v___x_746_);
lean_dec_ref(v___x_746_);
v___x_748_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__1));
v___x_749_ = lean_string_append(v___x_747_, v___x_748_);
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___boxed(lean_object* v_solution_751_, lean_object* v_as_752_, lean_object* v_sz_753_, lean_object* v_i_754_, lean_object* v_b_755_){
_start:
{
size_t v_sz_boxed_756_; size_t v_i_boxed_757_; lean_object* v_res_758_; 
v_sz_boxed_756_ = lean_unbox_usize(v_sz_753_);
lean_dec(v_sz_753_);
v_i_boxed_757_ = lean_unbox_usize(v_i_754_);
lean_dec(v_i_754_);
v_res_758_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0(v_solution_751_, v_as_752_, v_sz_boxed_756_, v_i_boxed_757_, v_b_755_);
lean_dec_ref(v_as_752_);
lean_dec_ref(v_solution_751_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__1(lean_object* v_solution_760_, lean_object* v_as_761_, size_t v_sz_762_, size_t v_i_763_, lean_object* v_b_764_){
_start:
{
uint8_t v___x_765_; 
v___x_765_ = lean_usize_dec_lt(v_i_763_, v_sz_762_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; 
v___x_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_766_, 0, v_b_764_);
return v___x_766_;
}
else
{
lean_object* v_constMap_767_; lean_object* v_a_768_; lean_object* v___x_769_; 
v_constMap_767_ = lean_ctor_get(v_solution_760_, 0);
v_a_768_ = lean_array_uget_borrowed(v_as_761_, v_i_763_);
v___x_769_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst_spec__1___redArg(v_constMap_767_, v_a_768_);
if (lean_obj_tag(v___x_769_) == 1)
{
lean_object* v_val_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_789_; 
v_val_770_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_789_ == 0)
{
v___x_772_ = v___x_769_;
v_isShared_773_ = v_isSharedCheck_789_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_val_770_);
lean_dec(v___x_769_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_789_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
if (lean_obj_tag(v_val_770_) == 1)
{
lean_object* v_val_774_; lean_object* v_toConstantVal_775_; lean_object* v_name_776_; lean_object* v___x_777_; size_t v___x_778_; size_t v___x_779_; 
lean_del_object(v___x_772_);
v_val_774_ = lean_ctor_get(v_val_770_, 0);
lean_inc_ref(v_val_774_);
lean_dec_ref_known(v_val_770_, 1);
v_toConstantVal_775_ = lean_ctor_get(v_val_774_, 0);
lean_inc_ref(v_toConstantVal_775_);
lean_dec_ref(v_val_774_);
v_name_776_ = lean_ctor_get(v_toConstantVal_775_, 0);
lean_inc(v_name_776_);
lean_dec_ref(v_toConstantVal_775_);
v___x_777_ = lean_array_push(v_b_764_, v_name_776_);
v___x_778_ = ((size_t)1ULL);
v___x_779_ = lean_usize_add(v_i_763_, v___x_778_);
v_i_763_ = v___x_779_;
v_b_764_ = v___x_777_;
goto _start;
}
else
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_787_; 
lean_dec(v_val_770_);
lean_dec_ref(v_b_764_);
v___x_781_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__1___closed__0));
lean_inc(v_a_768_);
v___x_782_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_768_, v___x_765_);
v___x_783_ = lean_string_append(v___x_781_, v___x_782_);
lean_dec_ref(v___x_782_);
v___x_784_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__1));
v___x_785_ = lean_string_append(v___x_783_, v___x_784_);
if (v_isShared_773_ == 0)
{
lean_ctor_set_tag(v___x_772_, 0);
lean_ctor_set(v___x_772_, 0, v___x_785_);
v___x_787_ = v___x_772_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
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
else
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
lean_dec(v___x_769_);
lean_dec_ref(v_b_764_);
v___x_790_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0___closed__1));
lean_inc(v_a_768_);
v___x_791_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_768_, v___x_765_);
v___x_792_ = lean_string_append(v___x_790_, v___x_791_);
lean_dec_ref(v___x_791_);
v___x_793_ = ((lean_object*)(l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop_validateConst___closed__1));
v___x_794_ = lean_string_append(v___x_792_, v___x_793_);
v___x_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_795_, 0, v___x_794_);
return v___x_795_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__1___boxed(lean_object* v_solution_796_, lean_object* v_as_797_, lean_object* v_sz_798_, lean_object* v_i_799_, lean_object* v_b_800_){
_start:
{
size_t v_sz_boxed_801_; size_t v_i_boxed_802_; lean_object* v_res_803_; 
v_sz_boxed_801_ = lean_unbox_usize(v_sz_798_);
lean_dec(v_sz_798_);
v_i_boxed_802_ = lean_unbox_usize(v_i_799_);
lean_dec(v_i_799_);
v_res_803_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__1(v_solution_796_, v_as_797_, v_sz_boxed_801_, v_i_boxed_802_, v_b_800_);
lean_dec_ref(v_as_797_);
lean_dec_ref(v_solution_796_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_checkAxioms(lean_object* v_solution_806_, lean_object* v_theoremTargets_807_, lean_object* v_definitionTargets_808_, lean_object* v_legalAxioms_809_){
_start:
{
lean_object* v_worklist_810_; size_t v_sz_811_; size_t v___x_812_; lean_object* v___x_813_; 
v_worklist_810_ = ((lean_object*)(l_Lake_Check_checkAxioms___closed__0));
v_sz_811_ = lean_array_size(v_theoremTargets_807_);
v___x_812_ = ((size_t)0ULL);
v___x_813_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__0(v_solution_806_, v_theoremTargets_807_, v_sz_811_, v___x_812_, v_worklist_810_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_dec_ref(v_solution_806_);
v_a_814_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_813_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_813_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
else
{
lean_object* v_a_822_; size_t v_sz_823_; lean_object* v___x_824_; 
v_a_822_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_822_);
lean_dec_ref_known(v___x_813_, 1);
v_sz_823_ = lean_array_size(v_definitionTargets_808_);
v___x_824_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Check_checkAxioms_spec__1(v_solution_806_, v_definitionTargets_808_, v_sz_823_, v___x_812_, v_a_822_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_832_; 
lean_dec_ref(v_solution_806_);
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_832_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_828_ == 0)
{
v___x_830_ = v___x_827_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_a_825_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v_a_833_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_833_);
lean_dec_ref_known(v___x_824_, 1);
v___x_834_ = lean_obj_once(&l_Lake_Check_usedAxioms___closed__1, &l_Lake_Check_usedAxioms___closed__1_once, _init_l_Lake_Check_usedAxioms___closed__1);
v___x_835_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lake_Check_checkAxioms_spec__2(v___x_834_, v_legalAxioms_809_);
v___x_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_836_, 0, v_solution_806_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v_a_833_);
lean_ctor_set(v___x_837_, 1, v___x_834_);
v___x_838_ = l___private_Lake_Check_Axioms_0__Lake_Check_Axioms_loop(v___x_836_, v___x_837_);
lean_dec_ref_known(v___x_836_, 2);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_838_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_838_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_855_; 
v_a_847_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_855_ == 0)
{
v___x_849_ = v___x_838_;
v_isShared_850_ = v_isSharedCheck_855_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_838_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_855_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v_fst_851_; lean_object* v___x_853_; 
v_fst_851_ = lean_ctor_get(v_a_847_, 0);
lean_inc(v_fst_851_);
lean_dec(v_a_847_);
if (v_isShared_850_ == 0)
{
lean_ctor_set(v___x_849_, 0, v_fst_851_);
v___x_853_ = v___x_849_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_fst_851_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_checkAxioms___boxed(lean_object* v_solution_856_, lean_object* v_theoremTargets_857_, lean_object* v_definitionTargets_858_, lean_object* v_legalAxioms_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Lake_Check_checkAxioms(v_solution_856_, v_theoremTargets_857_, v_definitionTargets_858_, v_legalAxioms_859_);
lean_dec_ref(v_legalAxioms_859_);
lean_dec_ref(v_definitionTargets_858_);
lean_dec_ref(v_theoremTargets_857_);
return v_res_860_;
}
}
lean_object* runtime_initialize_LeanExport_Parse(uint8_t builtin);
lean_object* runtime_initialize_Lake_Check_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashSet(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Check_Axioms(uint8_t builtin) {
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
LEAN_EXPORT lean_object* meta_initialize_Lake_Check_Axioms(uint8_t builtin) {
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
LEAN_EXPORT lean_object* initialize_Lake_Check_Axioms(uint8_t builtin) {
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
res = runtime_initialize_Lake_Check_Axioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Check_Axioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Check_Axioms(builtin);
}
#ifdef __cplusplus
}
#endif

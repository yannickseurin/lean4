// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Cutsat.ReorderVars
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Cutsat.Types import Lean.Meta.Tactic.Grind.Arith.Cutsat.EqCnstr import Lean.Meta.Tactic.Grind.Arith.Cutsat.DvdCnstr import Lean.Meta.Tactic.Grind.Arith.Cutsat.LeCnstr import Lean.Meta.Tactic.Grind.Arith.Cutsat.Inv
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
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(lean_object*, lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_checkInvariants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArray_default___redArg();
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_range(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Ordering_ctorIdx(uint8_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_norm(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_norm(lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_le(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Int_Internal_Linear_instBEqPoly_beq(lean_object*, lean_object*);
uint64_t l_Lean_Meta_Grind_Arith_Cutsat_instHashablePoly__lean_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedVarInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedVarInfo_default___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedVarInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedVarInfo_default = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedVarInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedVarInfo = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedVarInfo_default___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cost_u2081(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cost_u2081___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2081(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2081___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cost_u2082(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cost_u2082___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2082(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2082___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___closed__0;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_reorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_reorder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_reorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_reorder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_reorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_reorder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_reorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_reorder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_reorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_reorder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__1_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__2_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__3_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__4_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__5_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__0_value),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__7_value),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__2_value),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__3_value),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__4_value),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__8_value),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__6_value)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11_spec__16(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__8_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__8(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3(lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__5_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__5(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2(lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__15_spec__21(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__15(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__15_spec__21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__19(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18_spec__25(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__20___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__10(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__29(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__30(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28_spec__37(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__30___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__14(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17_spec__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__24(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23_spec__31(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__25___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lia"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "search"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "reorder"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__3_value),LEAN_SCALAR_PTR_LITERAL(87, 130, 109, 65, 232, 6, 169, 172)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__4_value),LEAN_SCALAR_PTR_LITERAL(116, 65, 210, 255, 142, 133, 148, 120)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__5_value),LEAN_SCALAR_PTR_LITERAL(236, 159, 191, 181, 87, 7, 198, 44)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__9;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "old2new: "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__11;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "new2old: "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_box(0);
v___x_6_ = l_unsafeCast___redArg(v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg(lean_object* v_a_7_, lean_object* v_x_8_, lean_object* v_a_9_){
_start:
{
lean_object* v___x_11_; lean_object* v___y_13_; lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_11_ = lean_box(0);
v___x_16_ = lean_array_get_size(v_a_9_);
v___x_17_ = lean_nat_dec_lt(v_x_8_, v___x_16_);
if (v___x_17_ == 0)
{
lean_dec(v_a_7_);
v___y_13_ = v_a_9_;
goto v___jp_12_;
}
else
{
lean_object* v_v_18_; lean_object* v_maxLowerCoeff_19_; lean_object* v___x_20_; lean_object* v_xs_x27_21_; lean_object* v___y_23_; uint8_t v___x_35_; 
v_v_18_ = lean_array_fget(v_a_9_, v_x_8_);
v_maxLowerCoeff_19_ = lean_ctor_get(v_v_18_, 0);
v___x_20_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0);
v_xs_x27_21_ = lean_array_fset(v_a_9_, v_x_8_, v___x_20_);
v___x_35_ = lean_nat_dec_le(v_a_7_, v_maxLowerCoeff_19_);
if (v___x_35_ == 0)
{
v___y_23_ = v_a_7_;
goto v___jp_22_;
}
else
{
lean_dec(v_a_7_);
lean_inc(v_maxLowerCoeff_19_);
v___y_23_ = v_maxLowerCoeff_19_;
goto v___jp_22_;
}
v___jp_22_:
{
lean_object* v_maxUpperCoeff_24_; lean_object* v_maxDvdCoeff_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_33_; 
v_maxUpperCoeff_24_ = lean_ctor_get(v_v_18_, 1);
v_maxDvdCoeff_25_ = lean_ctor_get(v_v_18_, 2);
v_isSharedCheck_33_ = !lean_is_exclusive(v_v_18_);
if (v_isSharedCheck_33_ == 0)
{
lean_object* v_unused_34_; 
v_unused_34_ = lean_ctor_get(v_v_18_, 0);
lean_dec(v_unused_34_);
v___x_27_ = v_v_18_;
v_isShared_28_ = v_isSharedCheck_33_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_maxDvdCoeff_25_);
lean_inc(v_maxUpperCoeff_24_);
lean_dec(v_v_18_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_33_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v___x_30_; 
if (v_isShared_28_ == 0)
{
lean_ctor_set(v___x_27_, 0, v___y_23_);
v___x_30_ = v___x_27_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___y_23_);
lean_ctor_set(v_reuseFailAlloc_32_, 1, v_maxUpperCoeff_24_);
lean_ctor_set(v_reuseFailAlloc_32_, 2, v_maxDvdCoeff_25_);
v___x_30_ = v_reuseFailAlloc_32_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
lean_object* v___x_31_; 
v___x_31_ = lean_array_fset(v_xs_x27_21_, v_x_8_, v___x_30_);
v___y_13_ = v___x_31_;
goto v___jp_12_;
}
}
}
}
v___jp_12_:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_11_);
lean_ctor_set(v___x_14_, 1, v___y_13_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___boxed(lean_object* v_a_36_, lean_object* v_x_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg(v_a_36_, v_x_37_, v_a_38_);
lean_dec(v_x_37_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower(lean_object* v_a_41_, lean_object* v_x_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg(v_a_41_, v_x_42_, v_a_43_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___boxed(lean_object* v_a_56_, lean_object* v_x_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower(v_a_56_, v_x_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
lean_dec(v_a_60_);
lean_dec(v_a_59_);
lean_dec(v_x_57_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper___redArg(lean_object* v_a_71_, lean_object* v_x_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_75_; lean_object* v___y_77_; lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_75_ = lean_box(0);
v___x_80_ = lean_array_get_size(v_a_73_);
v___x_81_ = lean_nat_dec_lt(v_x_72_, v___x_80_);
if (v___x_81_ == 0)
{
lean_dec(v_a_71_);
v___y_77_ = v_a_73_;
goto v___jp_76_;
}
else
{
lean_object* v_v_82_; lean_object* v_maxLowerCoeff_83_; lean_object* v_maxUpperCoeff_84_; lean_object* v_maxDvdCoeff_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_98_; 
v_v_82_ = lean_array_fget(v_a_73_, v_x_72_);
v_maxLowerCoeff_83_ = lean_ctor_get(v_v_82_, 0);
v_maxUpperCoeff_84_ = lean_ctor_get(v_v_82_, 1);
v_maxDvdCoeff_85_ = lean_ctor_get(v_v_82_, 2);
v_isSharedCheck_98_ = !lean_is_exclusive(v_v_82_);
if (v_isSharedCheck_98_ == 0)
{
v___x_87_ = v_v_82_;
v_isShared_88_ = v_isSharedCheck_98_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_maxDvdCoeff_85_);
lean_inc(v_maxUpperCoeff_84_);
lean_inc(v_maxLowerCoeff_83_);
lean_dec(v_v_82_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_98_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_89_; lean_object* v_xs_x27_90_; lean_object* v___y_92_; uint8_t v___x_97_; 
v___x_89_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0);
v_xs_x27_90_ = lean_array_fset(v_a_73_, v_x_72_, v___x_89_);
v___x_97_ = lean_nat_dec_le(v_a_71_, v_maxUpperCoeff_84_);
if (v___x_97_ == 0)
{
lean_dec(v_maxUpperCoeff_84_);
v___y_92_ = v_a_71_;
goto v___jp_91_;
}
else
{
lean_dec(v_a_71_);
v___y_92_ = v_maxUpperCoeff_84_;
goto v___jp_91_;
}
v___jp_91_:
{
lean_object* v___x_94_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 1, v___y_92_);
v___x_94_ = v___x_87_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_maxLowerCoeff_83_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v___y_92_);
lean_ctor_set(v_reuseFailAlloc_96_, 2, v_maxDvdCoeff_85_);
v___x_94_ = v_reuseFailAlloc_96_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
lean_object* v___x_95_; 
v___x_95_ = lean_array_fset(v_xs_x27_90_, v_x_72_, v___x_94_);
v___y_77_ = v___x_95_;
goto v___jp_76_;
}
}
}
}
v___jp_76_:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_75_);
lean_ctor_set(v___x_78_, 1, v___y_77_);
v___x_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper___redArg___boxed(lean_object* v_a_99_, lean_object* v_x_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper___redArg(v_a_99_, v_x_100_, v_a_101_);
lean_dec(v_x_100_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper(lean_object* v_a_104_, lean_object* v_x_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper___redArg(v_a_104_, v_x_105_, v_a_106_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper___boxed(lean_object* v_a_119_, lean_object* v_x_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper(v_a_119_, v_x_120_, v_a_121_, v_a_122_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
lean_dec(v_a_125_);
lean_dec_ref(v_a_124_);
lean_dec(v_a_123_);
lean_dec(v_a_122_);
lean_dec(v_x_120_);
return v_res_133_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg___closed__0(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_unsigned_to_nat(0u);
v___x_135_ = lean_nat_to_int(v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg(lean_object* v_a_136_, lean_object* v_x_137_, lean_object* v_a_138_){
_start:
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg___closed__0);
v___x_141_ = lean_int_dec_lt(v_a_136_, v___x_140_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = lean_nat_abs(v_a_136_);
v___x_143_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateUpper___redArg(v___x_142_, v_x_137_, v_a_138_);
return v___x_143_;
}
else
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = lean_nat_abs(v_a_136_);
v___x_145_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg(v___x_144_, v_x_137_, v_a_138_);
return v___x_145_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg___boxed(lean_object* v_a_146_, lean_object* v_x_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg(v_a_146_, v_x_147_, v_a_148_);
lean_dec(v_x_147_);
lean_dec(v_a_146_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff(lean_object* v_a_151_, lean_object* v_x_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg(v_a_151_, v_x_152_, v_a_153_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___boxed(lean_object* v_a_166_, lean_object* v_x_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff(v_a_166_, v_x_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
lean_dec(v_a_172_);
lean_dec_ref(v_a_171_);
lean_dec(v_a_170_);
lean_dec(v_a_169_);
lean_dec(v_x_167_);
lean_dec(v_a_166_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd___redArg(lean_object* v_a_181_, lean_object* v_x_182_, lean_object* v_a_183_){
_start:
{
lean_object* v___x_185_; lean_object* v___y_187_; lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_185_ = lean_box(0);
v___x_190_ = lean_array_get_size(v_a_183_);
v___x_191_ = lean_nat_dec_lt(v_x_182_, v___x_190_);
if (v___x_191_ == 0)
{
lean_dec(v_a_181_);
v___y_187_ = v_a_183_;
goto v___jp_186_;
}
else
{
lean_object* v_v_192_; lean_object* v_maxLowerCoeff_193_; lean_object* v_maxUpperCoeff_194_; lean_object* v_maxDvdCoeff_195_; lean_object* v___x_196_; lean_object* v_xs_x27_197_; uint8_t v___x_198_; 
v_v_192_ = lean_array_fget(v_a_183_, v_x_182_);
v_maxLowerCoeff_193_ = lean_ctor_get(v_v_192_, 0);
v_maxUpperCoeff_194_ = lean_ctor_get(v_v_192_, 1);
v_maxDvdCoeff_195_ = lean_ctor_get(v_v_192_, 2);
v___x_196_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0);
v_xs_x27_197_ = lean_array_fset(v_a_183_, v_x_182_, v___x_196_);
v___x_198_ = lean_nat_dec_le(v_a_181_, v_maxDvdCoeff_195_);
if (v___x_198_ == 0)
{
lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_206_; 
lean_inc(v_maxUpperCoeff_194_);
lean_inc(v_maxLowerCoeff_193_);
v_isSharedCheck_206_ = !lean_is_exclusive(v_v_192_);
if (v_isSharedCheck_206_ == 0)
{
lean_object* v_unused_207_; lean_object* v_unused_208_; lean_object* v_unused_209_; 
v_unused_207_ = lean_ctor_get(v_v_192_, 2);
lean_dec(v_unused_207_);
v_unused_208_ = lean_ctor_get(v_v_192_, 1);
lean_dec(v_unused_208_);
v_unused_209_ = lean_ctor_get(v_v_192_, 0);
lean_dec(v_unused_209_);
v___x_200_ = v_v_192_;
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
else
{
lean_dec(v_v_192_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_203_; 
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 2, v_a_181_);
v___x_203_ = v___x_200_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_maxLowerCoeff_193_);
lean_ctor_set(v_reuseFailAlloc_205_, 1, v_maxUpperCoeff_194_);
lean_ctor_set(v_reuseFailAlloc_205_, 2, v_a_181_);
v___x_203_ = v_reuseFailAlloc_205_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
lean_object* v___x_204_; 
v___x_204_ = lean_array_fset(v_xs_x27_197_, v_x_182_, v___x_203_);
v___y_187_ = v___x_204_;
goto v___jp_186_;
}
}
}
else
{
lean_object* v___x_210_; 
lean_dec(v_a_181_);
v___x_210_ = lean_array_fset(v_xs_x27_197_, v_x_182_, v_v_192_);
v___y_187_ = v___x_210_;
goto v___jp_186_;
}
}
v___jp_186_:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_185_);
lean_ctor_set(v___x_188_, 1, v___y_187_);
v___x_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd___redArg___boxed(lean_object* v_a_211_, lean_object* v_x_212_, lean_object* v_a_213_, lean_object* v_a_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd___redArg(v_a_211_, v_x_212_, v_a_213_);
lean_dec(v_x_212_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd(lean_object* v_a_216_, lean_object* v_x_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd___redArg(v_a_216_, v_x_217_, v_a_218_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd___boxed(lean_object* v_a_231_, lean_object* v_x_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd(v_a_231_, v_x_232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
lean_dec(v_a_234_);
lean_dec(v_x_232_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___redArg(lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
if (lean_obj_tag(v_a_246_) == 0)
{
lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_257_; 
v_isSharedCheck_257_ = !lean_is_exclusive(v_a_246_);
if (v_isSharedCheck_257_ == 0)
{
lean_object* v_unused_258_; 
v_unused_258_ = lean_ctor_get(v_a_246_, 0);
lean_dec(v_unused_258_);
v___x_250_ = v_a_246_;
v_isShared_251_ = v_isSharedCheck_257_;
goto v_resetjp_249_;
}
else
{
lean_dec(v_a_246_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_257_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_252_ = lean_box(0);
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v_a_247_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v___x_253_);
v___x_255_ = v___x_250_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
else
{
lean_object* v_k_259_; lean_object* v_v_260_; lean_object* v_p_261_; lean_object* v___x_262_; lean_object* v_a_263_; lean_object* v_snd_264_; 
v_k_259_ = lean_ctor_get(v_a_246_, 0);
lean_inc(v_k_259_);
v_v_260_ = lean_ctor_get(v_a_246_, 1);
lean_inc(v_v_260_);
v_p_261_ = lean_ctor_get(v_a_246_, 2);
lean_inc_ref(v_p_261_);
lean_dec_ref_known(v_a_246_, 3);
v___x_262_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateVarCoeff___redArg(v_k_259_, v_v_260_, v_a_247_);
lean_dec(v_v_260_);
lean_dec(v_k_259_);
v_a_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_a_263_);
lean_dec_ref(v___x_262_);
v_snd_264_ = lean_ctor_get(v_a_263_, 1);
lean_inc(v_snd_264_);
lean_dec(v_a_263_);
v_a_246_ = v_p_261_;
v_a_247_ = v_snd_264_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___redArg___boxed(lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___redArg(v_a_266_, v_a_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly(lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___redArg(v_a_270_, v_a_271_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___boxed(lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly(v_a_284_, v_a_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_);
lean_dec(v_a_295_);
lean_dec_ref(v_a_294_);
lean_dec(v_a_293_);
lean_dec_ref(v_a_292_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_290_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec(v_a_286_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg(lean_object* v_as_301_, size_t v_sz_302_, size_t v_i_303_, lean_object* v_b_304_, lean_object* v___y_305_){
_start:
{
uint8_t v___x_307_; 
v___x_307_ = lean_usize_dec_lt(v_i_303_, v_sz_302_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v_b_304_);
lean_ctor_set(v___x_308_, 1, v___y_305_);
v___x_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
return v___x_309_;
}
else
{
lean_object* v_a_310_; lean_object* v_p_311_; lean_object* v___x_312_; 
lean_dec_ref(v_b_304_);
v_a_310_ = lean_array_uget_borrowed(v_as_301_, v_i_303_);
v_p_311_ = lean_ctor_get(v_a_310_, 0);
lean_inc_ref(v_p_311_);
v___x_312_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___redArg(v_p_311_, v___y_305_);
if (lean_obj_tag(v___x_312_) == 0)
{
lean_object* v_a_313_; lean_object* v_snd_314_; lean_object* v___x_315_; size_t v___x_316_; size_t v___x_317_; 
v_a_313_ = lean_ctor_get(v___x_312_, 0);
lean_inc(v_a_313_);
lean_dec_ref_known(v___x_312_, 1);
v_snd_314_ = lean_ctor_get(v_a_313_, 1);
lean_inc(v_snd_314_);
lean_dec(v_a_313_);
v___x_315_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg___closed__0));
v___x_316_ = ((size_t)1ULL);
v___x_317_ = lean_usize_add(v_i_303_, v___x_316_);
v_i_303_ = v___x_317_;
v_b_304_ = v___x_315_;
v___y_305_ = v_snd_314_;
goto _start;
}
else
{
lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
v_a_319_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v___x_312_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_dec(v___x_312_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_as_327_, lean_object* v_sz_328_, lean_object* v_i_329_, lean_object* v_b_330_, lean_object* v___y_331_, lean_object* v___y_332_){
_start:
{
size_t v_sz_boxed_333_; size_t v_i_boxed_334_; lean_object* v_res_335_; 
v_sz_boxed_333_ = lean_unbox_usize(v_sz_328_);
lean_dec(v_sz_328_);
v_i_boxed_334_ = lean_unbox_usize(v_i_329_);
lean_dec(v_i_329_);
v_res_335_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg(v_as_327_, v_sz_boxed_333_, v_i_boxed_334_, v_b_330_, v___y_331_);
lean_dec_ref(v_as_327_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1(lean_object* v_as_336_, size_t v_sz_337_, size_t v_i_338_, lean_object* v_b_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
uint8_t v___x_352_; 
v___x_352_ = lean_usize_dec_lt(v_i_338_, v_sz_337_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_353_, 0, v_b_339_);
lean_ctor_set(v___x_353_, 1, v___y_340_);
v___x_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
return v___x_354_;
}
else
{
lean_object* v_a_355_; lean_object* v_p_356_; lean_object* v___x_357_; 
lean_dec_ref(v_b_339_);
v_a_355_ = lean_array_uget_borrowed(v_as_336_, v_i_338_);
v_p_356_ = lean_ctor_get(v_a_355_, 0);
lean_inc_ref(v_p_356_);
v___x_357_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___redArg(v_p_356_, v___y_340_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v_snd_359_; lean_object* v___x_360_; size_t v___x_361_; size_t v___x_362_; lean_object* v___x_363_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
v_snd_359_ = lean_ctor_get(v_a_358_, 1);
lean_inc(v_snd_359_);
lean_dec(v_a_358_);
v___x_360_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg___closed__0));
v___x_361_ = ((size_t)1ULL);
v___x_362_ = lean_usize_add(v_i_338_, v___x_361_);
v___x_363_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg(v_as_336_, v_sz_337_, v___x_362_, v___x_360_, v_snd_359_);
return v___x_363_;
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
v_a_364_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_357_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_357_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1___boxed(lean_object* v_as_372_, lean_object* v_sz_373_, lean_object* v_i_374_, lean_object* v_b_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
size_t v_sz_boxed_388_; size_t v_i_boxed_389_; lean_object* v_res_390_; 
v_sz_boxed_388_ = lean_unbox_usize(v_sz_373_);
lean_dec(v_sz_373_);
v_i_boxed_389_ = lean_unbox_usize(v_i_374_);
lean_dec(v_i_374_);
v_res_390_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1(v_as_372_, v_sz_boxed_388_, v_i_boxed_389_, v_b_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v_as_372_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_as_394_, size_t v_sz_395_, size_t v_i_396_, lean_object* v_b_397_, lean_object* v___y_398_){
_start:
{
uint8_t v___x_400_; 
v___x_400_ = lean_usize_dec_lt(v_i_396_, v_sz_395_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v_b_397_);
lean_ctor_set(v___x_401_, 1, v___y_398_);
v___x_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
return v___x_402_;
}
else
{
lean_object* v_a_403_; lean_object* v_p_404_; lean_object* v___x_405_; 
lean_dec_ref(v_b_397_);
v_a_403_ = lean_array_uget_borrowed(v_as_394_, v_i_396_);
v_p_404_ = lean_ctor_get(v_a_403_, 0);
lean_inc_ref(v_p_404_);
v___x_405_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___redArg(v_p_404_, v___y_398_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; lean_object* v_snd_407_; lean_object* v___x_408_; size_t v___x_409_; size_t v___x_410_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_406_);
lean_dec_ref_known(v___x_405_, 1);
v_snd_407_ = lean_ctor_get(v_a_406_, 1);
lean_inc(v_snd_407_);
lean_dec(v_a_406_);
v___x_408_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg___closed__0));
v___x_409_ = ((size_t)1ULL);
v___x_410_ = lean_usize_add(v_i_396_, v___x_409_);
v_i_396_ = v___x_410_;
v_b_397_ = v___x_408_;
v___y_398_ = v_snd_407_;
goto _start;
}
else
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
v_a_412_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_405_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_405_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_as_420_, lean_object* v_sz_421_, lean_object* v_i_422_, lean_object* v_b_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
size_t v_sz_boxed_426_; size_t v_i_boxed_427_; lean_object* v_res_428_; 
v_sz_boxed_426_ = lean_unbox_usize(v_sz_421_);
lean_dec(v_sz_421_);
v_i_boxed_427_ = lean_unbox_usize(v_i_422_);
lean_dec(v_i_422_);
v_res_428_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg(v_as_420_, v_sz_boxed_426_, v_i_boxed_427_, v_b_423_, v___y_424_);
lean_dec_ref(v_as_420_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2(lean_object* v_as_429_, size_t v_sz_430_, size_t v_i_431_, lean_object* v_b_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
uint8_t v___x_445_; 
v___x_445_ = lean_usize_dec_lt(v_i_431_, v_sz_430_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v_b_432_);
lean_ctor_set(v___x_446_, 1, v___y_433_);
v___x_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
return v___x_447_;
}
else
{
lean_object* v_a_448_; lean_object* v_p_449_; lean_object* v___x_450_; 
lean_dec_ref(v_b_432_);
v_a_448_ = lean_array_uget_borrowed(v_as_429_, v_i_431_);
v_p_449_ = lean_ctor_get(v_a_448_, 0);
lean_inc_ref(v_p_449_);
v___x_450_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_visitPoly___redArg(v_p_449_, v___y_433_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v_snd_452_; lean_object* v___x_453_; size_t v___x_454_; size_t v___x_455_; lean_object* v___x_456_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_a_451_);
lean_dec_ref_known(v___x_450_, 1);
v_snd_452_ = lean_ctor_get(v_a_451_, 1);
lean_inc(v_snd_452_);
lean_dec(v_a_451_);
v___x_453_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg___closed__0));
v___x_454_ = ((size_t)1ULL);
v___x_455_ = lean_usize_add(v_i_431_, v___x_454_);
v___x_456_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg(v_as_429_, v_sz_430_, v___x_455_, v___x_453_, v_snd_452_);
return v___x_456_;
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
v_a_457_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_450_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_450_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2___boxed(lean_object* v_as_465_, lean_object* v_sz_466_, lean_object* v_i_467_, lean_object* v_b_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
size_t v_sz_boxed_481_; size_t v_i_boxed_482_; lean_object* v_res_483_; 
v_sz_boxed_481_ = lean_unbox_usize(v_sz_466_);
lean_dec(v_sz_466_);
v_i_boxed_482_ = lean_unbox_usize(v_i_467_);
lean_dec(v_i_467_);
v_res_483_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2(v_as_465_, v_sz_boxed_481_, v_i_boxed_482_, v_b_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec(v___y_470_);
lean_dec_ref(v_as_465_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0(lean_object* v_init_484_, lean_object* v_n_485_, lean_object* v_b_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
if (lean_obj_tag(v_n_485_) == 0)
{
lean_object* v_cs_499_; lean_object* v___x_500_; lean_object* v___x_501_; size_t v_sz_502_; size_t v___x_503_; lean_object* v___x_504_; 
v_cs_499_ = lean_ctor_get(v_n_485_, 0);
v___x_500_ = lean_box(0);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v_b_486_);
v_sz_502_ = lean_array_size(v_cs_499_);
v___x_503_ = ((size_t)0ULL);
v___x_504_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__1(v_init_484_, v_cs_499_, v_sz_502_, v___x_503_, v___x_501_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_539_; 
v_a_505_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_539_ == 0)
{
v___x_507_ = v___x_504_;
v_isShared_508_ = v_isSharedCheck_539_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_dec(v___x_504_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_539_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v_fst_509_; lean_object* v_fst_510_; 
v_fst_509_ = lean_ctor_get(v_a_505_, 0);
lean_inc(v_fst_509_);
v_fst_510_ = lean_ctor_get(v_fst_509_, 0);
if (lean_obj_tag(v_fst_510_) == 0)
{
lean_object* v_snd_511_; lean_object* v_snd_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_523_; 
v_snd_511_ = lean_ctor_get(v_a_505_, 1);
lean_inc(v_snd_511_);
lean_dec(v_a_505_);
v_snd_512_ = lean_ctor_get(v_fst_509_, 1);
v_isSharedCheck_523_ = !lean_is_exclusive(v_fst_509_);
if (v_isSharedCheck_523_ == 0)
{
lean_object* v_unused_524_; 
v_unused_524_ = lean_ctor_get(v_fst_509_, 0);
lean_dec(v_unused_524_);
v___x_514_ = v_fst_509_;
v_isShared_515_ = v_isSharedCheck_523_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_snd_512_);
lean_dec(v_fst_509_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_523_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_516_; lean_object* v___x_518_; 
v___x_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_516_, 0, v_snd_512_);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 1, v_snd_511_);
lean_ctor_set(v___x_514_, 0, v___x_516_);
v___x_518_ = v___x_514_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_516_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v_snd_511_);
v___x_518_ = v_reuseFailAlloc_522_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
lean_object* v___x_520_; 
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v___x_518_);
v___x_520_ = v___x_507_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
else
{
lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_536_; 
lean_inc_ref(v_fst_510_);
v_isSharedCheck_536_ = !lean_is_exclusive(v_fst_509_);
if (v_isSharedCheck_536_ == 0)
{
lean_object* v_unused_537_; lean_object* v_unused_538_; 
v_unused_537_ = lean_ctor_get(v_fst_509_, 1);
lean_dec(v_unused_537_);
v_unused_538_ = lean_ctor_get(v_fst_509_, 0);
lean_dec(v_unused_538_);
v___x_526_ = v_fst_509_;
v_isShared_527_ = v_isSharedCheck_536_;
goto v_resetjp_525_;
}
else
{
lean_dec(v_fst_509_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_536_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v_snd_528_; lean_object* v_val_529_; lean_object* v___x_531_; 
v_snd_528_ = lean_ctor_get(v_a_505_, 1);
lean_inc(v_snd_528_);
lean_dec(v_a_505_);
v_val_529_ = lean_ctor_get(v_fst_510_, 0);
lean_inc(v_val_529_);
lean_dec_ref_known(v_fst_510_, 1);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 1, v_snd_528_);
lean_ctor_set(v___x_526_, 0, v_val_529_);
v___x_531_ = v___x_526_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_val_529_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_snd_528_);
v___x_531_ = v_reuseFailAlloc_535_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
lean_object* v___x_533_; 
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v___x_531_);
v___x_533_ = v___x_507_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_531_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
}
}
else
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
v_a_540_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_504_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_504_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
else
{
lean_object* v_vs_548_; lean_object* v___x_549_; lean_object* v___x_550_; size_t v_sz_551_; size_t v___x_552_; lean_object* v___x_553_; 
v_vs_548_ = lean_ctor_get(v_n_485_, 0);
v___x_549_ = lean_box(0);
v___x_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v_b_486_);
v_sz_551_ = lean_array_size(v_vs_548_);
v___x_552_ = ((size_t)0ULL);
v___x_553_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2(v_vs_548_, v_sz_551_, v___x_552_, v___x_550_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_588_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_588_ == 0)
{
v___x_556_ = v___x_553_;
v_isShared_557_ = v_isSharedCheck_588_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_553_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_588_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v_fst_558_; lean_object* v_fst_559_; 
v_fst_558_ = lean_ctor_get(v_a_554_, 0);
lean_inc(v_fst_558_);
v_fst_559_ = lean_ctor_get(v_fst_558_, 0);
if (lean_obj_tag(v_fst_559_) == 0)
{
lean_object* v_snd_560_; lean_object* v_snd_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_572_; 
v_snd_560_ = lean_ctor_get(v_a_554_, 1);
lean_inc(v_snd_560_);
lean_dec(v_a_554_);
v_snd_561_ = lean_ctor_get(v_fst_558_, 1);
v_isSharedCheck_572_ = !lean_is_exclusive(v_fst_558_);
if (v_isSharedCheck_572_ == 0)
{
lean_object* v_unused_573_; 
v_unused_573_ = lean_ctor_get(v_fst_558_, 0);
lean_dec(v_unused_573_);
v___x_563_ = v_fst_558_;
v_isShared_564_ = v_isSharedCheck_572_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_snd_561_);
lean_dec(v_fst_558_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_572_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_565_; lean_object* v___x_567_; 
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v_snd_561_);
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 1, v_snd_560_);
lean_ctor_set(v___x_563_, 0, v___x_565_);
v___x_567_ = v___x_563_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v_snd_560_);
v___x_567_ = v_reuseFailAlloc_571_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_569_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v___x_567_);
v___x_569_ = v___x_556_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
else
{
lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_585_; 
lean_inc_ref(v_fst_559_);
v_isSharedCheck_585_ = !lean_is_exclusive(v_fst_558_);
if (v_isSharedCheck_585_ == 0)
{
lean_object* v_unused_586_; lean_object* v_unused_587_; 
v_unused_586_ = lean_ctor_get(v_fst_558_, 1);
lean_dec(v_unused_586_);
v_unused_587_ = lean_ctor_get(v_fst_558_, 0);
lean_dec(v_unused_587_);
v___x_575_ = v_fst_558_;
v_isShared_576_ = v_isSharedCheck_585_;
goto v_resetjp_574_;
}
else
{
lean_dec(v_fst_558_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_585_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v_snd_577_; lean_object* v_val_578_; lean_object* v___x_580_; 
v_snd_577_ = lean_ctor_get(v_a_554_, 1);
lean_inc(v_snd_577_);
lean_dec(v_a_554_);
v_val_578_ = lean_ctor_get(v_fst_559_, 0);
lean_inc(v_val_578_);
lean_dec_ref_known(v_fst_559_, 1);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v_snd_577_);
lean_ctor_set(v___x_575_, 0, v_val_578_);
v___x_580_ = v___x_575_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_val_578_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v_snd_577_);
v___x_580_ = v_reuseFailAlloc_584_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_582_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v___x_580_);
v___x_582_ = v___x_556_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_580_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
v_a_589_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_553_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_553_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__1(lean_object* v_init_597_, lean_object* v_as_598_, size_t v_sz_599_, size_t v_i_600_, lean_object* v_b_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_){
_start:
{
uint8_t v___x_614_; 
v___x_614_ = lean_usize_dec_lt(v_i_600_, v_sz_599_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_615_, 0, v_b_601_);
lean_ctor_set(v___x_615_, 1, v___y_602_);
v___x_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
return v___x_616_;
}
else
{
lean_object* v_snd_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_667_; 
v_snd_617_ = lean_ctor_get(v_b_601_, 1);
v_isSharedCheck_667_ = !lean_is_exclusive(v_b_601_);
if (v_isSharedCheck_667_ == 0)
{
lean_object* v_unused_668_; 
v_unused_668_ = lean_ctor_get(v_b_601_, 0);
lean_dec(v_unused_668_);
v___x_619_ = v_b_601_;
v_isShared_620_ = v_isSharedCheck_667_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_snd_617_);
lean_dec(v_b_601_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_667_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v_a_622_; lean_object* v___x_623_; 
v___x_621_ = lean_box(0);
v_a_622_ = lean_array_uget_borrowed(v_as_598_, v_i_600_);
lean_inc(v_snd_617_);
v___x_623_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0(v_init_597_, v_a_622_, v_snd_617_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_658_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_658_ == 0)
{
v___x_626_ = v___x_623_;
v_isShared_627_ = v_isSharedCheck_658_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_623_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_658_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v_fst_628_; 
v_fst_628_ = lean_ctor_get(v_a_624_, 0);
lean_inc(v_fst_628_);
if (lean_obj_tag(v_fst_628_) == 0)
{
lean_object* v_snd_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_643_; 
v_snd_629_ = lean_ctor_get(v_a_624_, 1);
v_isSharedCheck_643_ = !lean_is_exclusive(v_a_624_);
if (v_isSharedCheck_643_ == 0)
{
lean_object* v_unused_644_; 
v_unused_644_ = lean_ctor_get(v_a_624_, 0);
lean_dec(v_unused_644_);
v___x_631_ = v_a_624_;
v_isShared_632_ = v_isSharedCheck_643_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_snd_629_);
lean_dec(v_a_624_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_643_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_633_; lean_object* v___x_635_; 
v___x_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_633_, 0, v_fst_628_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 1, v_snd_617_);
lean_ctor_set(v___x_631_, 0, v___x_633_);
v___x_635_ = v___x_631_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_633_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_snd_617_);
v___x_635_ = v_reuseFailAlloc_642_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_637_; 
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 1, v_snd_629_);
lean_ctor_set(v___x_619_, 0, v___x_635_);
v___x_637_ = v___x_619_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_snd_629_);
v___x_637_ = v_reuseFailAlloc_641_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_639_; 
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v___x_637_);
v___x_639_ = v___x_626_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_637_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
}
else
{
lean_object* v_snd_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_656_; 
lean_del_object(v___x_626_);
lean_del_object(v___x_619_);
lean_dec(v_snd_617_);
v_snd_645_ = lean_ctor_get(v_a_624_, 1);
v_isSharedCheck_656_ = !lean_is_exclusive(v_a_624_);
if (v_isSharedCheck_656_ == 0)
{
lean_object* v_unused_657_; 
v_unused_657_ = lean_ctor_get(v_a_624_, 0);
lean_dec(v_unused_657_);
v___x_647_ = v_a_624_;
v_isShared_648_ = v_isSharedCheck_656_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_snd_645_);
lean_dec(v_a_624_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_656_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_a_649_; lean_object* v___x_651_; 
v_a_649_ = lean_ctor_get(v_fst_628_, 0);
lean_inc(v_a_649_);
lean_dec_ref_known(v_fst_628_, 1);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v_a_649_);
lean_ctor_set(v___x_647_, 0, v___x_621_);
v___x_651_ = v___x_647_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v_a_649_);
v___x_651_ = v_reuseFailAlloc_655_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
size_t v___x_652_; size_t v___x_653_; 
v___x_652_ = ((size_t)1ULL);
v___x_653_ = lean_usize_add(v_i_600_, v___x_652_);
v_i_600_ = v___x_653_;
v_b_601_ = v___x_651_;
v___y_602_ = v_snd_645_;
goto _start;
}
}
}
}
}
else
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
lean_del_object(v___x_619_);
lean_dec(v_snd_617_);
v_a_659_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_666_ == 0)
{
v___x_661_ = v___x_623_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_623_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_a_659_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__1___boxed(lean_object** _args){
lean_object* v_init_669_ = _args[0];
lean_object* v_as_670_ = _args[1];
lean_object* v_sz_671_ = _args[2];
lean_object* v_i_672_ = _args[3];
lean_object* v_b_673_ = _args[4];
lean_object* v___y_674_ = _args[5];
lean_object* v___y_675_ = _args[6];
lean_object* v___y_676_ = _args[7];
lean_object* v___y_677_ = _args[8];
lean_object* v___y_678_ = _args[9];
lean_object* v___y_679_ = _args[10];
lean_object* v___y_680_ = _args[11];
lean_object* v___y_681_ = _args[12];
lean_object* v___y_682_ = _args[13];
lean_object* v___y_683_ = _args[14];
lean_object* v___y_684_ = _args[15];
lean_object* v___y_685_ = _args[16];
_start:
{
size_t v_sz_boxed_686_; size_t v_i_boxed_687_; lean_object* v_res_688_; 
v_sz_boxed_686_ = lean_unbox_usize(v_sz_671_);
lean_dec(v_sz_671_);
v_i_boxed_687_ = lean_unbox_usize(v_i_672_);
lean_dec(v_i_672_);
v_res_688_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__1(v_init_669_, v_as_670_, v_sz_boxed_686_, v_i_boxed_687_, v_b_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v_as_670_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0___boxed(lean_object* v_init_689_, lean_object* v_n_690_, lean_object* v_b_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0(v_init_689_, v_n_690_, v_b_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
lean_dec(v___y_700_);
lean_dec_ref(v___y_699_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec(v___y_693_);
lean_dec_ref(v_n_690_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0(lean_object* v_t_705_, lean_object* v_init_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
lean_object* v_b_720_; lean_object* v___y_721_; lean_object* v_root_724_; lean_object* v_tail_725_; lean_object* v___x_726_; 
v_root_724_ = lean_ctor_get(v_t_705_, 0);
v_tail_725_ = lean_ctor_get(v_t_705_, 1);
v___x_726_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0(v_init_706_, v_root_724_, v_init_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v_fst_728_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
v_fst_728_ = lean_ctor_get(v_a_727_, 0);
lean_inc(v_fst_728_);
if (lean_obj_tag(v_fst_728_) == 0)
{
lean_object* v_snd_729_; lean_object* v_a_730_; 
v_snd_729_ = lean_ctor_get(v_a_727_, 1);
lean_inc(v_snd_729_);
lean_dec(v_a_727_);
v_a_730_ = lean_ctor_get(v_fst_728_, 0);
lean_inc(v_a_730_);
lean_dec_ref_known(v_fst_728_, 1);
v_b_720_ = v_a_730_;
v___y_721_ = v_snd_729_;
goto v___jp_719_;
}
else
{
lean_object* v_snd_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_773_; 
v_snd_731_ = lean_ctor_get(v_a_727_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v_a_727_);
if (v_isSharedCheck_773_ == 0)
{
lean_object* v_unused_774_; 
v_unused_774_ = lean_ctor_get(v_a_727_, 0);
lean_dec(v_unused_774_);
v___x_733_ = v_a_727_;
v_isShared_734_ = v_isSharedCheck_773_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_snd_731_);
lean_dec(v_a_727_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_773_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v_a_735_; lean_object* v___x_736_; lean_object* v___x_738_; 
v_a_735_ = lean_ctor_get(v_fst_728_, 0);
lean_inc(v_a_735_);
lean_dec_ref_known(v_fst_728_, 1);
v___x_736_ = lean_box(0);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 1, v_a_735_);
lean_ctor_set(v___x_733_, 0, v___x_736_);
v___x_738_ = v___x_733_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_736_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_a_735_);
v___x_738_ = v_reuseFailAlloc_772_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
size_t v_sz_739_; size_t v___x_740_; lean_object* v___x_741_; 
v_sz_739_ = lean_array_size(v_tail_725_);
v___x_740_ = ((size_t)0ULL);
v___x_741_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1(v_tail_725_, v_sz_739_, v___x_740_, v___x_738_, v_snd_731_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_763_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_763_ == 0)
{
v___x_744_ = v___x_741_;
v_isShared_745_ = v_isSharedCheck_763_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_741_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_763_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v_fst_746_; lean_object* v_fst_747_; 
v_fst_746_ = lean_ctor_get(v_a_742_, 0);
lean_inc(v_fst_746_);
v_fst_747_ = lean_ctor_get(v_fst_746_, 0);
if (lean_obj_tag(v_fst_747_) == 0)
{
lean_object* v_snd_748_; lean_object* v_snd_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_759_; 
v_snd_748_ = lean_ctor_get(v_a_742_, 1);
lean_inc(v_snd_748_);
lean_dec(v_a_742_);
v_snd_749_ = lean_ctor_get(v_fst_746_, 1);
v_isSharedCheck_759_ = !lean_is_exclusive(v_fst_746_);
if (v_isSharedCheck_759_ == 0)
{
lean_object* v_unused_760_; 
v_unused_760_ = lean_ctor_get(v_fst_746_, 0);
lean_dec(v_unused_760_);
v___x_751_ = v_fst_746_;
v_isShared_752_ = v_isSharedCheck_759_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_snd_749_);
lean_dec(v_fst_746_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_759_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
lean_ctor_set(v___x_751_, 1, v_snd_748_);
lean_ctor_set(v___x_751_, 0, v_snd_749_);
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_snd_749_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_snd_748_);
v___x_754_ = v_reuseFailAlloc_758_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
lean_object* v___x_756_; 
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v___x_754_);
v___x_756_ = v___x_744_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_754_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
else
{
lean_object* v_snd_761_; lean_object* v_val_762_; 
lean_inc_ref(v_fst_747_);
lean_dec(v_fst_746_);
lean_del_object(v___x_744_);
v_snd_761_ = lean_ctor_get(v_a_742_, 1);
lean_inc(v_snd_761_);
lean_dec(v_a_742_);
v_val_762_ = lean_ctor_get(v_fst_747_, 0);
lean_inc(v_val_762_);
lean_dec_ref_known(v_fst_747_, 1);
v_b_720_ = v_val_762_;
v___y_721_ = v_snd_761_;
goto v___jp_719_;
}
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
v_a_764_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_741_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_741_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_a_775_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_726_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_726_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
v___jp_719_:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_722_, 0, v_b_720_);
lean_ctor_set(v___x_722_, 1, v___y_721_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0___boxed(lean_object* v_t_783_, lean_object* v_init_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0(v_t_783_, v_init_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec(v___y_786_);
lean_dec_ref(v_t_783_);
return v_res_797_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___lam__0(lean_object* v_xs_798_, lean_object* v_i_799_){
_start:
{
lean_object* v_size_800_; uint8_t v___x_801_; 
v_size_800_ = lean_ctor_get(v_xs_798_, 2);
v___x_801_ = lean_nat_dec_lt(v_i_799_, v_size_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___lam__0___boxed(lean_object* v_xs_802_, lean_object* v_i_803_){
_start:
{
uint8_t v_res_804_; lean_object* v_r_805_; 
v_res_804_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___lam__0(v_xs_802_, v_i_803_);
lean_dec(v_i_803_);
lean_dec_ref(v_xs_802_);
v_r_805_ = lean_box(v_res_804_);
return v_r_805_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg(lean_object* v_a_807_, lean_object* v_range_808_, lean_object* v_b_809_, lean_object* v_i_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v_stop_823_; lean_object* v_step_824_; uint8_t v___x_825_; 
v_stop_823_ = lean_ctor_get(v_range_808_, 1);
v_step_824_ = lean_ctor_get(v_range_808_, 2);
v___x_825_ = lean_nat_dec_lt(v_i_810_, v_stop_823_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; lean_object* v___x_827_; 
lean_dec(v_i_810_);
v___x_826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_826_, 0, v_b_809_);
lean_ctor_set(v___x_826_, 1, v___y_811_);
v___x_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
return v___x_827_;
}
else
{
lean_object* v___x_828_; lean_object* v_snd_830_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___x_842_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_828_ = lean_box(0);
v___x_842_ = lean_box(0);
v___x_854_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___closed__0, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___closed__0_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___closed__0);
v___x_855_ = l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg(v_i_810_, v___y_812_, v___y_820_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; uint8_t v___x_857_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_856_);
lean_dec_ref_known(v___x_855_, 1);
v___x_857_ = lean_unbox(v_a_856_);
lean_dec(v_a_856_);
if (v___x_857_ == 0)
{
lean_object* v_lowers_858_; lean_object* v_uppers_859_; lean_object* v___y_861_; uint8_t v___x_868_; 
v_lowers_858_ = lean_ctor_get(v_a_807_, 7);
v_uppers_859_ = lean_ctor_get(v_a_807_, 8);
v___x_868_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___lam__0(v_lowers_858_, v_i_810_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; 
v___x_869_ = l_outOfBounds___redArg(v___x_854_);
v___y_861_ = v___x_869_;
goto v___jp_860_;
}
else
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_PersistentArray_get_x21___redArg(v___x_854_, v_lowers_858_, v_i_810_);
v___y_861_ = v___x_870_;
goto v___jp_860_;
}
v___jp_860_:
{
lean_object* v___x_862_; 
v___x_862_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0(v___y_861_, v___x_828_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_);
lean_dec_ref(v___y_861_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v_snd_864_; uint8_t v___x_865_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_863_);
lean_dec_ref_known(v___x_862_, 1);
v_snd_864_ = lean_ctor_get(v_a_863_, 1);
lean_inc(v_snd_864_);
lean_dec(v_a_863_);
v___x_865_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___lam__0(v_uppers_859_, v_i_810_);
if (v___x_865_ == 0)
{
lean_object* v___x_866_; 
v___x_866_ = l_outOfBounds___redArg(v___x_854_);
v___y_844_ = v_snd_864_;
v___y_845_ = v___x_866_;
goto v___jp_843_;
}
else
{
lean_object* v___x_867_; 
v___x_867_ = l_Lean_PersistentArray_get_x21___redArg(v___x_854_, v_uppers_859_, v_i_810_);
v___y_844_ = v_snd_864_;
v___y_845_ = v___x_867_;
goto v___jp_843_;
}
}
else
{
lean_dec(v_i_810_);
return v___x_862_;
}
}
}
else
{
v_snd_830_ = v___y_811_;
goto v___jp_829_;
}
}
else
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec_ref(v___y_811_);
lean_dec(v_i_810_);
v_a_871_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_855_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_855_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
v___jp_829_:
{
lean_object* v___x_831_; 
v___x_831_ = lean_nat_add(v_i_810_, v_step_824_);
lean_dec(v_i_810_);
v_b_809_ = v___x_828_;
v_i_810_ = v___x_831_;
v___y_811_ = v_snd_830_;
goto _start;
}
v___jp_833_:
{
if (lean_obj_tag(v___y_835_) == 1)
{
lean_object* v_val_836_; lean_object* v_d_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v_a_840_; lean_object* v_snd_841_; 
v_val_836_ = lean_ctor_get(v___y_835_, 0);
lean_inc(v_val_836_);
lean_dec_ref_known(v___y_835_, 1);
v_d_837_ = lean_ctor_get(v_val_836_, 0);
lean_inc(v_d_837_);
lean_dec(v_val_836_);
v___x_838_ = lean_nat_abs(v_d_837_);
lean_dec(v_d_837_);
v___x_839_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateDvd___redArg(v___x_838_, v_i_810_, v___y_834_);
v_a_840_ = lean_ctor_get(v___x_839_, 0);
lean_inc(v_a_840_);
lean_dec_ref(v___x_839_);
v_snd_841_ = lean_ctor_get(v_a_840_, 1);
lean_inc(v_snd_841_);
lean_dec(v_a_840_);
v_snd_830_ = v_snd_841_;
goto v___jp_829_;
}
else
{
lean_dec(v___y_835_);
v_snd_830_ = v___y_834_;
goto v___jp_829_;
}
}
v___jp_843_:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0(v___y_845_, v___x_828_, v___y_844_, v___y_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_);
lean_dec_ref(v___y_845_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; lean_object* v_dvds_848_; lean_object* v_snd_849_; lean_object* v_size_850_; uint8_t v___x_851_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_a_847_);
lean_dec_ref_known(v___x_846_, 1);
v_dvds_848_ = lean_ctor_get(v_a_807_, 6);
v_snd_849_ = lean_ctor_get(v_a_847_, 1);
lean_inc(v_snd_849_);
lean_dec(v_a_847_);
v_size_850_ = lean_ctor_get(v_dvds_848_, 2);
v___x_851_ = lean_nat_dec_lt(v_i_810_, v_size_850_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; 
v___x_852_ = l_outOfBounds___redArg(v___x_842_);
v___y_834_ = v_snd_849_;
v___y_835_ = v___x_852_;
goto v___jp_833_;
}
else
{
lean_object* v___x_853_; 
v___x_853_ = l_Lean_PersistentArray_get_x21___redArg(v___x_842_, v_dvds_848_, v_i_810_);
v___y_834_ = v_snd_849_;
v___y_835_ = v___x_853_;
goto v___jp_833_;
}
}
else
{
lean_dec(v_i_810_);
return v___x_846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg___boxed(lean_object* v_a_879_, lean_object* v_range_880_, lean_object* v_b_881_, lean_object* v_i_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg(v_a_879_, v_range_880_, v_b_881_, v_i_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec(v___y_884_);
lean_dec_ref(v_range_880_);
lean_dec_ref(v_a_879_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go(lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_897_, v_a_905_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v_vars_910_; lean_object* v_size_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
lean_inc(v_a_909_);
lean_dec_ref_known(v___x_908_, 1);
v_vars_910_ = lean_ctor_get(v_a_909_, 0);
v_size_911_ = lean_ctor_get(v_vars_910_, 2);
v___x_912_ = lean_unsigned_to_nat(0u);
v___x_913_ = lean_unsigned_to_nat(1u);
lean_inc(v_size_911_);
v___x_914_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v_size_911_);
lean_ctor_set(v___x_914_, 2, v___x_913_);
v___x_915_ = lean_box(0);
v___x_916_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg(v_a_909_, v___x_914_, v___x_915_, v___x_912_, v_a_896_, v_a_897_, v_a_898_, v_a_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_);
lean_dec_ref_known(v___x_914_, 3);
lean_dec(v_a_909_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_933_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_933_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_933_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_933_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v_snd_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_931_; 
v_snd_921_ = lean_ctor_get(v_a_917_, 1);
v_isSharedCheck_931_ = !lean_is_exclusive(v_a_917_);
if (v_isSharedCheck_931_ == 0)
{
lean_object* v_unused_932_; 
v_unused_932_ = lean_ctor_get(v_a_917_, 0);
lean_dec(v_unused_932_);
v___x_923_ = v_a_917_;
v_isShared_924_ = v_isSharedCheck_931_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_snd_921_);
lean_dec(v_a_917_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_931_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_915_);
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v___x_915_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v_snd_921_);
v___x_926_ = v_reuseFailAlloc_930_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v___x_928_; 
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_926_);
v___x_928_ = v___x_919_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_926_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
}
else
{
return v___x_916_;
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec_ref(v_a_896_);
v_a_934_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_908_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_908_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go___boxed(lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go(v_a_942_, v_a_943_, v_a_944_, v_a_945_, v_a_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
lean_dec(v_a_948_);
lean_dec_ref(v_a_947_);
lean_dec(v_a_946_);
lean_dec_ref(v_a_945_);
lean_dec(v_a_944_);
lean_dec(v_a_943_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1(lean_object* v_a_955_, lean_object* v_range_956_, lean_object* v_b_957_, lean_object* v_i_958_, lean_object* v_hs_959_, lean_object* v_hl_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___redArg(v_a_955_, v_range_956_, v_b_957_, v_i_958_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1___boxed(lean_object** _args){
lean_object* v_a_974_ = _args[0];
lean_object* v_range_975_ = _args[1];
lean_object* v_b_976_ = _args[2];
lean_object* v_i_977_ = _args[3];
lean_object* v_hs_978_ = _args[4];
lean_object* v_hl_979_ = _args[5];
lean_object* v___y_980_ = _args[6];
lean_object* v___y_981_ = _args[7];
lean_object* v___y_982_ = _args[8];
lean_object* v___y_983_ = _args[9];
lean_object* v___y_984_ = _args[10];
lean_object* v___y_985_ = _args[11];
lean_object* v___y_986_ = _args[12];
lean_object* v___y_987_ = _args[13];
lean_object* v___y_988_ = _args[14];
lean_object* v___y_989_ = _args[15];
lean_object* v___y_990_ = _args[16];
lean_object* v___y_991_ = _args[17];
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__1(v_a_974_, v_range_975_, v_b_976_, v_i_977_, v_hs_978_, v_hl_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec(v___y_981_);
lean_dec_ref(v_range_975_);
lean_dec_ref(v_a_974_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4(lean_object* v_as_993_, size_t v_sz_994_, size_t v_i_995_, lean_object* v_b_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___redArg(v_as_993_, v_sz_994_, v_i_995_, v_b_996_, v___y_997_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4___boxed(lean_object* v_as_1010_, lean_object* v_sz_1011_, lean_object* v_i_1012_, lean_object* v_b_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
size_t v_sz_boxed_1026_; size_t v_i_boxed_1027_; lean_object* v_res_1028_; 
v_sz_boxed_1026_ = lean_unbox_usize(v_sz_1011_);
lean_dec(v_sz_1011_);
v_i_boxed_1027_ = lean_unbox_usize(v_i_1012_);
lean_dec(v_i_1012_);
v_res_1028_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__1_spec__4(v_as_1010_, v_sz_boxed_1026_, v_i_boxed_1027_, v_b_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
lean_dec(v___y_1016_);
lean_dec(v___y_1015_);
lean_dec_ref(v_as_1010_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4(lean_object* v_as_1029_, size_t v_sz_1030_, size_t v_i_1031_, lean_object* v_b_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___redArg(v_as_1029_, v_sz_1030_, v_i_1031_, v_b_1032_, v___y_1033_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_as_1046_, lean_object* v_sz_1047_, lean_object* v_i_1048_, lean_object* v_b_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
size_t v_sz_boxed_1062_; size_t v_i_boxed_1063_; lean_object* v_res_1064_; 
v_sz_boxed_1062_ = lean_unbox_usize(v_sz_1047_);
lean_dec(v_sz_1047_);
v_i_boxed_1063_ = lean_unbox_usize(v_i_1048_);
lean_dec(v_i_1048_);
v_res_1064_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go_spec__0_spec__0_spec__2_spec__4(v_as_1046_, v_sz_boxed_1062_, v_i_boxed_1063_, v_b_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v_as_1046_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo(lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_1065_, v_a_1073_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v_vars_1078_; lean_object* v_size_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1077_);
lean_dec_ref_known(v___x_1076_, 1);
v_vars_1078_ = lean_ctor_get(v_a_1077_, 0);
lean_inc_ref(v_vars_1078_);
lean_dec(v_a_1077_);
v_size_1079_ = lean_ctor_get(v_vars_1078_, 2);
lean_inc(v_size_1079_);
lean_dec_ref(v_vars_1078_);
v___x_1080_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedVarInfo_default___closed__0));
v___x_1081_ = lean_mk_array(v_size_1079_, v___x_1080_);
v___x_1082_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo_go(v___x_1081_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1091_; 
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1085_ = v___x_1082_;
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1082_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v_snd_1087_; lean_object* v___x_1089_; 
v_snd_1087_ = lean_ctor_get(v_a_1083_, 1);
lean_inc(v_snd_1087_);
lean_dec(v_a_1083_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 0, v_snd_1087_);
v___x_1089_ = v___x_1085_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_snd_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
else
{
lean_object* v_a_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1099_; 
v_a_1092_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1094_ = v___x_1082_;
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_a_1092_);
lean_dec(v___x_1082_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1097_; 
if (v_isShared_1095_ == 0)
{
v___x_1097_ = v___x_1094_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_a_1092_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
v_a_1100_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1076_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1076_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo___boxed(lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo(v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
lean_dec(v_a_1117_);
lean_dec_ref(v_a_1116_);
lean_dec(v_a_1115_);
lean_dec_ref(v_a_1114_);
lean_dec(v_a_1113_);
lean_dec_ref(v_a_1112_);
lean_dec(v_a_1111_);
lean_dec_ref(v_a_1110_);
lean_dec(v_a_1109_);
lean_dec(v_a_1108_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cost_u2081(lean_object* v_info_1120_){
_start:
{
lean_object* v_maxLowerCoeff_1121_; lean_object* v_maxUpperCoeff_1122_; lean_object* v_maxDvdCoeff_1123_; lean_object* v___y_1125_; uint8_t v___x_1127_; 
v_maxLowerCoeff_1121_ = lean_ctor_get(v_info_1120_, 0);
v_maxUpperCoeff_1122_ = lean_ctor_get(v_info_1120_, 1);
v_maxDvdCoeff_1123_ = lean_ctor_get(v_info_1120_, 2);
v___x_1127_ = lean_nat_dec_le(v_maxLowerCoeff_1121_, v_maxUpperCoeff_1122_);
if (v___x_1127_ == 0)
{
v___y_1125_ = v_maxUpperCoeff_1122_;
goto v___jp_1124_;
}
else
{
v___y_1125_ = v_maxLowerCoeff_1121_;
goto v___jp_1124_;
}
v___jp_1124_:
{
uint8_t v___x_1126_; 
v___x_1126_ = lean_nat_dec_le(v_maxDvdCoeff_1123_, v___y_1125_);
if (v___x_1126_ == 0)
{
lean_inc(v_maxDvdCoeff_1123_);
return v_maxDvdCoeff_1123_;
}
else
{
lean_inc(v___y_1125_);
return v___y_1125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cost_u2081___boxed(lean_object* v_info_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_Meta_Grind_Arith_Cutsat_cost_u2081(v_info_1128_);
lean_dec_ref(v_info_1128_);
return v_res_1129_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2081(lean_object* v_infos_1130_, lean_object* v_x_1131_, lean_object* v_y_1132_){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; uint8_t v___x_1138_; 
v___x_1133_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedVarInfo_default));
v___x_1134_ = lean_array_get_borrowed(v___x_1133_, v_infos_1130_, v_x_1131_);
v___x_1135_ = l_Lean_Meta_Grind_Arith_Cutsat_cost_u2081(v___x_1134_);
v___x_1136_ = lean_array_get_borrowed(v___x_1133_, v_infos_1130_, v_y_1132_);
v___x_1137_ = l_Lean_Meta_Grind_Arith_Cutsat_cost_u2081(v___x_1136_);
v___x_1138_ = lean_nat_dec_lt(v___x_1135_, v___x_1137_);
if (v___x_1138_ == 0)
{
uint8_t v___x_1139_; 
v___x_1139_ = lean_nat_dec_eq(v___x_1135_, v___x_1137_);
lean_dec(v___x_1137_);
lean_dec(v___x_1135_);
if (v___x_1139_ == 0)
{
uint8_t v___x_1140_; 
v___x_1140_ = 0;
return v___x_1140_;
}
else
{
uint8_t v___x_1141_; 
v___x_1141_ = 1;
return v___x_1141_;
}
}
else
{
uint8_t v___x_1142_; 
lean_dec(v___x_1137_);
lean_dec(v___x_1135_);
v___x_1142_ = 2;
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2081___boxed(lean_object* v_infos_1143_, lean_object* v_x_1144_, lean_object* v_y_1145_){
_start:
{
uint8_t v_res_1146_; lean_object* v_r_1147_; 
v_res_1146_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2081(v_infos_1143_, v_x_1144_, v_y_1145_);
lean_dec(v_y_1145_);
lean_dec(v_x_1144_);
lean_dec_ref(v_infos_1143_);
v_r_1147_ = lean_box(v_res_1146_);
return v_r_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cost_u2082(lean_object* v_info_1148_){
_start:
{
lean_object* v_maxLowerCoeff_1149_; lean_object* v_maxUpperCoeff_1150_; lean_object* v_maxDvdCoeff_1151_; lean_object* v___y_1153_; uint8_t v___x_1155_; 
v_maxLowerCoeff_1149_ = lean_ctor_get(v_info_1148_, 0);
v_maxUpperCoeff_1150_ = lean_ctor_get(v_info_1148_, 1);
v_maxDvdCoeff_1151_ = lean_ctor_get(v_info_1148_, 2);
v___x_1155_ = lean_nat_dec_le(v_maxLowerCoeff_1149_, v_maxUpperCoeff_1150_);
if (v___x_1155_ == 0)
{
v___y_1153_ = v_maxLowerCoeff_1149_;
goto v___jp_1152_;
}
else
{
v___y_1153_ = v_maxUpperCoeff_1150_;
goto v___jp_1152_;
}
v___jp_1152_:
{
uint8_t v___x_1154_; 
v___x_1154_ = lean_nat_dec_le(v_maxDvdCoeff_1151_, v___y_1153_);
if (v___x_1154_ == 0)
{
lean_inc(v_maxDvdCoeff_1151_);
return v_maxDvdCoeff_1151_;
}
else
{
lean_inc(v___y_1153_);
return v___y_1153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cost_u2082___boxed(lean_object* v_info_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lean_Meta_Grind_Arith_Cutsat_cost_u2082(v_info_1156_);
lean_dec_ref(v_info_1156_);
return v_res_1157_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2082(lean_object* v_infos_1158_, lean_object* v_x_1159_, lean_object* v_y_1160_){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; uint8_t v___x_1166_; 
v___x_1161_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedVarInfo_default));
v___x_1162_ = lean_array_get_borrowed(v___x_1161_, v_infos_1158_, v_x_1159_);
v___x_1163_ = l_Lean_Meta_Grind_Arith_Cutsat_cost_u2082(v___x_1162_);
v___x_1164_ = lean_array_get_borrowed(v___x_1161_, v_infos_1158_, v_y_1160_);
v___x_1165_ = l_Lean_Meta_Grind_Arith_Cutsat_cost_u2082(v___x_1164_);
v___x_1166_ = lean_nat_dec_lt(v___x_1163_, v___x_1165_);
if (v___x_1166_ == 0)
{
uint8_t v___x_1167_; 
v___x_1167_ = lean_nat_dec_eq(v___x_1163_, v___x_1165_);
lean_dec(v___x_1165_);
lean_dec(v___x_1163_);
if (v___x_1167_ == 0)
{
uint8_t v___x_1168_; 
v___x_1168_ = 0;
return v___x_1168_;
}
else
{
uint8_t v___x_1169_; 
v___x_1169_ = 1;
return v___x_1169_;
}
}
else
{
uint8_t v___x_1170_; 
lean_dec(v___x_1165_);
lean_dec(v___x_1163_);
v___x_1170_ = 2;
return v___x_1170_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2082___boxed(lean_object* v_infos_1171_, lean_object* v_x_1172_, lean_object* v_y_1173_){
_start:
{
uint8_t v_res_1174_; lean_object* v_r_1175_; 
v_res_1174_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2082(v_infos_1171_, v_x_1172_, v_y_1173_);
lean_dec(v_y_1173_);
lean_dec(v_x_1172_);
lean_dec_ref(v_infos_1171_);
v_r_1175_ = lean_box(v_res_1174_);
return v_r_1175_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp(lean_object* v_infos_1176_, lean_object* v_x_1177_, lean_object* v_y_1178_){
_start:
{
uint8_t v___y_1180_; uint8_t v___x_1185_; 
v___x_1185_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2081(v_infos_1176_, v_x_1177_, v_y_1178_);
if (v___x_1185_ == 1)
{
uint8_t v___x_1186_; 
v___x_1186_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp_u2082(v_infos_1176_, v_x_1177_, v_y_1178_);
v___y_1180_ = v___x_1186_;
goto v___jp_1179_;
}
else
{
v___y_1180_ = v___x_1185_;
goto v___jp_1179_;
}
v___jp_1179_:
{
if (v___y_1180_ == 1)
{
uint8_t v___x_1181_; 
v___x_1181_ = lean_nat_dec_lt(v_x_1177_, v_y_1178_);
if (v___x_1181_ == 0)
{
uint8_t v___x_1182_; 
v___x_1182_ = lean_nat_dec_eq(v_x_1177_, v_y_1178_);
if (v___x_1182_ == 0)
{
uint8_t v___x_1183_; 
v___x_1183_ = 2;
return v___x_1183_;
}
else
{
return v___y_1180_;
}
}
else
{
uint8_t v___x_1184_; 
v___x_1184_ = 0;
return v___x_1184_;
}
}
else
{
return v___y_1180_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp___boxed(lean_object* v_infos_1187_, lean_object* v_x_1188_, lean_object* v_y_1189_){
_start:
{
uint8_t v_res_1190_; lean_object* v_r_1191_; 
v_res_1190_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp(v_infos_1187_, v_x_1188_, v_y_1189_);
lean_dec(v_y_1189_);
lean_dec(v_x_1188_);
lean_dec_ref(v_infos_1187_);
v_r_1191_ = lean_box(v_res_1190_);
return v_r_1191_;
}
}
static lean_object* _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = 0;
v___x_1193_ = l_Ordering_ctorIdx(v___x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0(lean_object* v_a_1194_, lean_object* v_x_1195_, lean_object* v_y_1196_){
_start:
{
uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; uint8_t v___x_1200_; 
v___x_1197_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp(v_a_1194_, v_x_1195_, v_y_1196_);
v___x_1198_ = l_Ordering_ctorIdx(v___x_1197_);
v___x_1199_ = lean_obj_once(&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___closed__0, &l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___closed__0_once, _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___closed__0);
v___x_1200_ = lean_nat_dec_eq(v___x_1198_, v___x_1199_);
lean_dec(v___x_1198_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___boxed(lean_object* v_a_1201_, lean_object* v_x_1202_, lean_object* v_y_1203_){
_start:
{
uint8_t v_res_1204_; lean_object* v_r_1205_; 
v_res_1204_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0(v_a_1201_, v_x_1202_, v_y_1203_);
lean_dec(v_y_1203_);
lean_dec(v_x_1202_);
lean_dec_ref(v_a_1201_);
v_r_1205_ = lean_box(v_res_1204_);
return v_r_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0___redArg(lean_object* v_a_1206_, lean_object* v_hi_1207_, lean_object* v_pivot_1208_, lean_object* v_as_1209_, lean_object* v_i_1210_, lean_object* v_k_1211_){
_start:
{
uint8_t v___x_1212_; 
v___x_1212_ = lean_nat_dec_lt(v_k_1211_, v_hi_1207_);
if (v___x_1212_ == 0)
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
lean_dec(v_k_1211_);
v___x_1213_ = lean_array_fswap(v_as_1209_, v_i_1210_, v_hi_1207_);
v___x_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1214_, 0, v_i_1210_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
return v___x_1214_;
}
else
{
lean_object* v___x_1215_; uint8_t v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; uint8_t v___x_1219_; 
v___x_1215_ = lean_array_fget_borrowed(v_as_1209_, v_k_1211_);
v___x_1216_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_cmp(v_a_1206_, v___x_1215_, v_pivot_1208_);
v___x_1217_ = l_Ordering_ctorIdx(v___x_1216_);
v___x_1218_ = lean_obj_once(&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___closed__0, &l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___closed__0_once, _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0___closed__0);
v___x_1219_ = lean_nat_dec_eq(v___x_1217_, v___x_1218_);
lean_dec(v___x_1217_);
if (v___x_1219_ == 0)
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1220_ = lean_unsigned_to_nat(1u);
v___x_1221_ = lean_nat_add(v_k_1211_, v___x_1220_);
lean_dec(v_k_1211_);
v_k_1211_ = v___x_1221_;
goto _start;
}
else
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1223_ = lean_array_fswap(v_as_1209_, v_i_1210_, v_k_1211_);
v___x_1224_ = lean_unsigned_to_nat(1u);
v___x_1225_ = lean_nat_add(v_i_1210_, v___x_1224_);
lean_dec(v_i_1210_);
v___x_1226_ = lean_nat_add(v_k_1211_, v___x_1224_);
lean_dec(v_k_1211_);
v_as_1209_ = v___x_1223_;
v_i_1210_ = v___x_1225_;
v_k_1211_ = v___x_1226_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0___redArg___boxed(lean_object* v_a_1228_, lean_object* v_hi_1229_, lean_object* v_pivot_1230_, lean_object* v_as_1231_, lean_object* v_i_1232_, lean_object* v_k_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0___redArg(v_a_1228_, v_hi_1229_, v_pivot_1230_, v_as_1231_, v_i_1232_, v_k_1233_);
lean_dec(v_pivot_1230_);
lean_dec(v_hi_1229_);
lean_dec_ref(v_a_1228_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg(lean_object* v_a_1235_, lean_object* v_n_1236_, lean_object* v_as_1237_, lean_object* v_lo_1238_, lean_object* v_hi_1239_){
_start:
{
lean_object* v___y_1241_; uint8_t v___x_1251_; 
v___x_1251_ = lean_nat_dec_lt(v_lo_1238_, v_hi_1239_);
if (v___x_1251_ == 0)
{
lean_dec(v_lo_1238_);
return v_as_1237_;
}
else
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v_mid_1254_; lean_object* v___y_1256_; lean_object* v___y_1262_; lean_object* v___x_1267_; lean_object* v___x_1268_; uint8_t v___x_1269_; 
v___x_1252_ = lean_nat_add(v_lo_1238_, v_hi_1239_);
v___x_1253_ = lean_unsigned_to_nat(1u);
v_mid_1254_ = lean_nat_shiftr(v___x_1252_, v___x_1253_);
lean_dec(v___x_1252_);
v___x_1267_ = lean_array_fget_borrowed(v_as_1237_, v_mid_1254_);
v___x_1268_ = lean_array_fget_borrowed(v_as_1237_, v_lo_1238_);
v___x_1269_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0(v_a_1235_, v___x_1267_, v___x_1268_);
if (v___x_1269_ == 0)
{
v___y_1262_ = v_as_1237_;
goto v___jp_1261_;
}
else
{
lean_object* v___x_1270_; 
v___x_1270_ = lean_array_fswap(v_as_1237_, v_lo_1238_, v_mid_1254_);
v___y_1262_ = v___x_1270_;
goto v___jp_1261_;
}
v___jp_1255_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
v___x_1257_ = lean_array_fget_borrowed(v___y_1256_, v_mid_1254_);
v___x_1258_ = lean_array_fget_borrowed(v___y_1256_, v_hi_1239_);
v___x_1259_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0(v_a_1235_, v___x_1257_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_dec(v_mid_1254_);
v___y_1241_ = v___y_1256_;
goto v___jp_1240_;
}
else
{
lean_object* v___x_1260_; 
v___x_1260_ = lean_array_fswap(v___y_1256_, v_mid_1254_, v_hi_1239_);
lean_dec(v_mid_1254_);
v___y_1241_ = v___x_1260_;
goto v___jp_1240_;
}
}
v___jp_1261_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; uint8_t v___x_1265_; 
v___x_1263_ = lean_array_fget_borrowed(v___y_1262_, v_hi_1239_);
v___x_1264_ = lean_array_fget_borrowed(v___y_1262_, v_lo_1238_);
v___x_1265_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___lam__0(v_a_1235_, v___x_1263_, v___x_1264_);
if (v___x_1265_ == 0)
{
v___y_1256_ = v___y_1262_;
goto v___jp_1255_;
}
else
{
lean_object* v___x_1266_; 
v___x_1266_ = lean_array_fswap(v___y_1262_, v_lo_1238_, v_hi_1239_);
v___y_1256_ = v___x_1266_;
goto v___jp_1255_;
}
}
}
v___jp_1240_:
{
lean_object* v_pivot_1242_; lean_object* v___x_1243_; lean_object* v_fst_1244_; lean_object* v_snd_1245_; uint8_t v___x_1246_; 
v_pivot_1242_ = lean_array_fget(v___y_1241_, v_hi_1239_);
lean_inc_n(v_lo_1238_, 2);
v___x_1243_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0___redArg(v_a_1235_, v_hi_1239_, v_pivot_1242_, v___y_1241_, v_lo_1238_, v_lo_1238_);
lean_dec(v_pivot_1242_);
v_fst_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_fst_1244_);
v_snd_1245_ = lean_ctor_get(v___x_1243_, 1);
lean_inc(v_snd_1245_);
lean_dec_ref(v___x_1243_);
v___x_1246_ = lean_nat_dec_le(v_hi_1239_, v_fst_1244_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1247_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg(v_a_1235_, v_n_1236_, v_snd_1245_, v_lo_1238_, v_fst_1244_);
v___x_1248_ = lean_unsigned_to_nat(1u);
v___x_1249_ = lean_nat_add(v_fst_1244_, v___x_1248_);
lean_dec(v_fst_1244_);
v_as_1237_ = v___x_1247_;
v_lo_1238_ = v___x_1249_;
goto _start;
}
else
{
lean_dec(v_fst_1244_);
lean_dec(v_lo_1238_);
return v_snd_1245_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg___boxed(lean_object* v_a_1271_, lean_object* v_n_1272_, lean_object* v_as_1273_, lean_object* v_lo_1274_, lean_object* v_hi_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg(v_a_1271_, v_n_1272_, v_as_1273_, v_lo_1274_, v_hi_1275_);
lean_dec(v_hi_1275_);
lean_dec(v_n_1272_);
lean_dec_ref(v_a_1271_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars(lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_collectVarInfo(v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_, v_a_1286_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1329_; 
v_a_1289_ = lean_ctor_get(v___x_1288_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1291_ = v___x_1288_;
v_isShared_1292_ = v_isSharedCheck_1329_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1288_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1329_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1293_; 
v___x_1293_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_1277_, v_a_1285_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1320_; 
v_a_1294_ = lean_ctor_get(v___x_1293_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1293_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1296_ = v___x_1293_;
v_isShared_1297_ = v_isSharedCheck_1320_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1293_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1320_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v_vars_1298_; lean_object* v_size_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___y_1303_; lean_object* v___y_1304_; lean_object* v___x_1309_; uint8_t v___x_1310_; 
v_vars_1298_ = lean_ctor_get(v_a_1294_, 0);
lean_inc_ref(v_vars_1298_);
lean_dec(v_a_1294_);
v_size_1299_ = lean_ctor_get(v_vars_1298_, 2);
lean_inc(v_size_1299_);
lean_dec_ref(v_vars_1298_);
v___x_1300_ = l_Array_range(v_size_1299_);
v___x_1301_ = lean_array_get_size(v___x_1300_);
v___x_1309_ = lean_unsigned_to_nat(0u);
v___x_1310_ = lean_nat_dec_eq(v___x_1301_, v___x_1309_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___y_1314_; uint8_t v___x_1316_; 
lean_del_object(v___x_1291_);
v___x_1311_ = lean_unsigned_to_nat(1u);
v___x_1312_ = lean_nat_sub(v___x_1301_, v___x_1311_);
v___x_1316_ = lean_nat_dec_le(v___x_1309_, v___x_1312_);
if (v___x_1316_ == 0)
{
lean_inc(v___x_1312_);
v___y_1314_ = v___x_1312_;
goto v___jp_1313_;
}
else
{
v___y_1314_ = v___x_1309_;
goto v___jp_1313_;
}
v___jp_1313_:
{
uint8_t v___x_1315_; 
v___x_1315_ = lean_nat_dec_le(v___y_1314_, v___x_1312_);
if (v___x_1315_ == 0)
{
lean_dec(v___x_1312_);
lean_inc(v___y_1314_);
v___y_1303_ = v___y_1314_;
v___y_1304_ = v___y_1314_;
goto v___jp_1302_;
}
else
{
v___y_1303_ = v___y_1314_;
v___y_1304_ = v___x_1312_;
goto v___jp_1302_;
}
}
}
else
{
lean_object* v___x_1318_; 
lean_del_object(v___x_1296_);
lean_dec(v_a_1289_);
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 0, v___x_1300_);
v___x_1318_ = v___x_1291_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___x_1300_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
v___jp_1302_:
{
lean_object* v___x_1305_; lean_object* v___x_1307_; 
v___x_1305_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg(v_a_1289_, v___x_1301_, v___x_1300_, v___y_1303_, v___y_1304_);
lean_dec(v___y_1304_);
lean_dec(v_a_1289_);
if (v_isShared_1297_ == 0)
{
lean_ctor_set(v___x_1296_, 0, v___x_1305_);
v___x_1307_ = v___x_1296_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1305_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
else
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1328_; 
lean_del_object(v___x_1291_);
lean_dec(v_a_1289_);
v_a_1321_ = lean_ctor_get(v___x_1293_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1293_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1323_ = v___x_1293_;
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v___x_1293_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1326_; 
if (v_isShared_1324_ == 0)
{
v___x_1326_ = v___x_1323_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_a_1321_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1337_; 
v_a_1330_ = lean_ctor_get(v___x_1288_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1332_ = v___x_1288_;
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1288_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1330_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars___boxed(lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars(v_a_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_, v_a_1347_);
lean_dec(v_a_1347_);
lean_dec_ref(v_a_1346_);
lean_dec(v_a_1345_);
lean_dec_ref(v_a_1344_);
lean_dec(v_a_1343_);
lean_dec_ref(v_a_1342_);
lean_dec(v_a_1341_);
lean_dec_ref(v_a_1340_);
lean_dec(v_a_1339_);
lean_dec(v_a_1338_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0(lean_object* v_a_1350_, lean_object* v_n_1351_, lean_object* v_as_1352_, lean_object* v_lo_1353_, lean_object* v_hi_1354_, lean_object* v_w_1355_, lean_object* v_hlo_1356_, lean_object* v_hhi_1357_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___redArg(v_a_1350_, v_n_1351_, v_as_1352_, v_lo_1353_, v_hi_1354_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0___boxed(lean_object* v_a_1359_, lean_object* v_n_1360_, lean_object* v_as_1361_, lean_object* v_lo_1362_, lean_object* v_hi_1363_, lean_object* v_w_1364_, lean_object* v_hlo_1365_, lean_object* v_hhi_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0(v_a_1359_, v_n_1360_, v_as_1361_, v_lo_1362_, v_hi_1363_, v_w_1364_, v_hlo_1365_, v_hhi_1366_);
lean_dec(v_hi_1363_);
lean_dec(v_n_1360_);
lean_dec_ref(v_a_1359_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0(lean_object* v_a_1368_, lean_object* v_n_1369_, lean_object* v_lo_1370_, lean_object* v_hi_1371_, lean_object* v_hhi_1372_, lean_object* v_pivot_1373_, lean_object* v_as_1374_, lean_object* v_i_1375_, lean_object* v_k_1376_, lean_object* v_ilo_1377_, lean_object* v_ik_1378_, lean_object* v_w_1379_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0___redArg(v_a_1368_, v_hi_1371_, v_pivot_1373_, v_as_1374_, v_i_1375_, v_k_1376_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0___boxed(lean_object* v_a_1381_, lean_object* v_n_1382_, lean_object* v_lo_1383_, lean_object* v_hi_1384_, lean_object* v_hhi_1385_, lean_object* v_pivot_1386_, lean_object* v_as_1387_, lean_object* v_i_1388_, lean_object* v_k_1389_, lean_object* v_ilo_1390_, lean_object* v_ik_1391_, lean_object* v_w_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars_spec__0_spec__0(v_a_1381_, v_n_1382_, v_lo_1383_, v_hi_1384_, v_hhi_1385_, v_pivot_1386_, v_as_1387_, v_i_1388_, v_k_1389_, v_ilo_1390_, v_ik_1391_, v_w_1392_);
lean_dec(v_pivot_1386_);
lean_dec(v_hi_1384_);
lean_dec(v_lo_1383_);
lean_dec(v_n_1382_);
lean_dec_ref(v_a_1381_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0___redArg(lean_object* v_perm_1394_, lean_object* v_range_1395_, lean_object* v_b_1396_, lean_object* v_i_1397_){
_start:
{
lean_object* v_stop_1398_; lean_object* v_step_1399_; uint8_t v___x_1400_; 
v_stop_1398_ = lean_ctor_get(v_range_1395_, 1);
v_step_1399_ = lean_ctor_get(v_range_1395_, 2);
v___x_1400_ = lean_nat_dec_lt(v_i_1397_, v_stop_1398_);
if (v___x_1400_ == 0)
{
lean_dec(v_i_1397_);
return v_b_1396_;
}
else
{
lean_object* v___x_1401_; lean_object* v_inv_1402_; lean_object* v___x_1403_; 
v___x_1401_ = lean_array_fget_borrowed(v_perm_1394_, v_i_1397_);
lean_inc(v_i_1397_);
v_inv_1402_ = lean_array_set(v_b_1396_, v___x_1401_, v_i_1397_);
v___x_1403_ = lean_nat_add(v_i_1397_, v_step_1399_);
lean_dec(v_i_1397_);
v_b_1396_ = v_inv_1402_;
v_i_1397_ = v___x_1403_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0___redArg___boxed(lean_object* v_perm_1405_, lean_object* v_range_1406_, lean_object* v_b_1407_, lean_object* v_i_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0___redArg(v_perm_1405_, v_range_1406_, v_b_1407_, v_i_1408_);
lean_dec_ref(v_range_1406_);
lean_dec_ref(v_perm_1405_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv(lean_object* v_perm_1410_){
_start:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v_inv_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1411_ = lean_array_get_size(v_perm_1410_);
v___x_1412_ = lean_unsigned_to_nat(0u);
v_inv_1413_ = lean_mk_array(v___x_1411_, v___x_1412_);
v___x_1414_ = lean_unsigned_to_nat(1u);
v___x_1415_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1412_);
lean_ctor_set(v___x_1415_, 1, v___x_1411_);
lean_ctor_set(v___x_1415_, 2, v___x_1414_);
v___x_1416_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0___redArg(v_perm_1410_, v___x_1415_, v_inv_1413_, v___x_1412_);
lean_dec_ref_known(v___x_1415_, 3);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv___boxed(lean_object* v_perm_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv(v_perm_1417_);
lean_dec_ref(v_perm_1417_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0(lean_object* v_perm_1419_, lean_object* v_range_1420_, lean_object* v_b_1421_, lean_object* v_i_1422_, lean_object* v_hs_1423_, lean_object* v_hl_1424_){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0___redArg(v_perm_1419_, v_range_1420_, v_b_1421_, v_i_1422_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0___boxed(lean_object* v_perm_1426_, lean_object* v_range_1427_, lean_object* v_b_1428_, lean_object* v_i_1429_, lean_object* v_hs_1430_, lean_object* v_hl_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv_spec__0(v_perm_1426_, v_range_1427_, v_b_1428_, v_i_1429_, v_hs_1430_, v_hl_1431_);
lean_dec_ref(v_range_1427_);
lean_dec_ref(v_perm_1426_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_reorder(lean_object* v_p_1433_, lean_object* v_old2new_1434_){
_start:
{
if (lean_obj_tag(v_p_1433_) == 0)
{
return v_p_1433_;
}
else
{
lean_object* v_k_1435_; lean_object* v_v_1436_; lean_object* v_p_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1447_; 
v_k_1435_ = lean_ctor_get(v_p_1433_, 0);
v_v_1436_ = lean_ctor_get(v_p_1433_, 1);
v_p_1437_ = lean_ctor_get(v_p_1433_, 2);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_p_1433_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1439_ = v_p_1433_;
v_isShared_1440_ = v_isSharedCheck_1447_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_p_1437_);
lean_inc(v_v_1436_);
lean_inc(v_k_1435_);
lean_dec(v_p_1433_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1447_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1441_ = lean_unsigned_to_nat(0u);
v___x_1442_ = lean_array_get_borrowed(v___x_1441_, v_old2new_1434_, v_v_1436_);
lean_dec(v_v_1436_);
v___x_1443_ = l_Int_Internal_Linear_Poly_reorder(v_p_1437_, v_old2new_1434_);
lean_inc(v___x_1442_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 2, v___x_1443_);
lean_ctor_set(v___x_1439_, 1, v___x_1442_);
v___x_1445_ = v___x_1439_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_k_1435_);
lean_ctor_set(v_reuseFailAlloc_1446_, 1, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1446_, 2, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_reorder___boxed(lean_object* v_p_1448_, lean_object* v_old2new_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Int_Internal_Linear_Poly_reorder(v_p_1448_, v_old2new_1449_);
lean_dec_ref(v_old2new_1449_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_reorder(lean_object* v_c_1451_, lean_object* v_old2new_1452_){
_start:
{
lean_object* v_d_1453_; lean_object* v_p_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
v_d_1453_ = lean_ctor_get(v_c_1451_, 0);
lean_inc(v_d_1453_);
v_p_1454_ = lean_ctor_get(v_c_1451_, 1);
lean_inc_ref(v_p_1454_);
v___x_1455_ = l_Int_Internal_Linear_Poly_reorder(v_p_1454_, v_old2new_1452_);
v___x_1456_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v___x_1456_, 0, v_c_1451_);
v___x_1457_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1457_, 0, v_d_1453_);
lean_ctor_set(v___x_1457_, 1, v___x_1455_);
lean_ctor_set(v___x_1457_, 2, v___x_1456_);
v___x_1458_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_norm(v___x_1457_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_reorder___boxed(lean_object* v_c_1459_, lean_object* v_old2new_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_reorder(v_c_1459_, v_old2new_1460_);
lean_dec_ref(v_old2new_1460_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_reorder(lean_object* v_c_1462_, lean_object* v_old2new_1463_){
_start:
{
lean_object* v_p_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v_p_1464_ = lean_ctor_get(v_c_1462_, 0);
lean_inc_ref(v_p_1464_);
v___x_1465_ = l_Int_Internal_Linear_Poly_reorder(v_p_1464_, v_old2new_1463_);
v___x_1466_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v___x_1466_, 0, v_c_1462_);
v___x_1467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1465_);
lean_ctor_set(v___x_1467_, 1, v___x_1466_);
v___x_1468_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_norm(v___x_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_reorder___boxed(lean_object* v_c_1469_, lean_object* v_old2new_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_reorder(v_c_1469_, v_old2new_1470_);
lean_dec_ref(v_old2new_1470_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_reorder(lean_object* v_c_1472_, lean_object* v_old2new_1473_){
_start:
{
lean_object* v_p_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v_p_1474_ = lean_ctor_get(v_c_1472_, 0);
lean_inc_ref(v_p_1474_);
v___x_1475_ = l_Int_Internal_Linear_Poly_reorder(v_p_1474_, v_old2new_1473_);
v___x_1476_ = lean_alloc_ctor(16, 1, 0);
lean_ctor_set(v___x_1476_, 0, v_c_1472_);
v___x_1477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1475_);
lean_ctor_set(v___x_1477_, 1, v___x_1476_);
v___x_1478_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(v___x_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_reorder___boxed(lean_object* v_c_1479_, lean_object* v_old2new_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_reorder(v_c_1479_, v_old2new_1480_);
lean_dec_ref(v_old2new_1480_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_reorder(lean_object* v_c_1482_, lean_object* v_old2new_1483_){
_start:
{
lean_object* v_p_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v_p_1484_ = lean_ctor_get(v_c_1482_, 0);
lean_inc_ref(v_p_1484_);
v___x_1485_ = l_Int_Internal_Linear_Poly_reorder(v_p_1484_, v_old2new_1483_);
v___x_1486_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1486_, 0, v_c_1482_);
v___x_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1485_);
lean_ctor_set(v___x_1487_, 1, v___x_1486_);
v___x_1488_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_norm(v___x_1487_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_reorder___boxed(lean_object* v_c_1489_, lean_object* v_old2new_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_reorder(v_c_1489_, v_old2new_1490_);
lean_dec_ref(v_old2new_1490_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___lam__0(lean_object* v_new2old_1492_, lean_object* v_inst_1493_, lean_object* v_m_1494_, lean_object* v_i_1495_, lean_object* v_h_1496_, lean_object* v_____s_1497_){
_start:
{
lean_object* v_j_1498_; lean_object* v___x_1499_; lean_object* v_r_1500_; lean_object* v___x_1501_; 
v_j_1498_ = lean_array_fget_borrowed(v_new2old_1492_, v_i_1495_);
v___x_1499_ = l_Lean_PersistentArray_get_x21___redArg(v_inst_1493_, v_m_1494_, v_j_1498_);
v_r_1500_ = l_Lean_PersistentArray_push___redArg(v_____s_1497_, v___x_1499_);
v___x_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1501_, 0, v_r_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___lam__0___boxed(lean_object* v_new2old_1502_, lean_object* v_inst_1503_, lean_object* v_m_1504_, lean_object* v_i_1505_, lean_object* v_h_1506_, lean_object* v_____s_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___lam__0(v_new2old_1502_, v_inst_1503_, v_m_1504_, v_i_1505_, v_h_1506_, v_____s_1507_);
lean_dec(v_i_1505_);
lean_dec_ref(v_m_1504_);
lean_dec(v_inst_1503_);
lean_dec_ref(v_new2old_1502_);
return v_res_1508_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__10(void){
_start:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1528_ = lean_unsigned_to_nat(32u);
v___x_1529_ = lean_mk_empty_array_with_capacity(v___x_1528_);
v___x_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
return v___x_1530_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__11(void){
_start:
{
size_t v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v_r_1536_; 
v___x_1531_ = ((size_t)5ULL);
v___x_1532_ = lean_unsigned_to_nat(0u);
v___x_1533_ = lean_unsigned_to_nat(32u);
v___x_1534_ = lean_mk_empty_array_with_capacity(v___x_1533_);
v___x_1535_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__10, &l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__10_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__10);
v_r_1536_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_r_1536_, 0, v___x_1535_);
lean_ctor_set(v_r_1536_, 1, v___x_1534_);
lean_ctor_set(v_r_1536_, 2, v___x_1532_);
lean_ctor_set(v_r_1536_, 3, v___x_1532_);
lean_ctor_set_usize(v_r_1536_, 4, v___x_1531_);
return v_r_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg(lean_object* v_inst_1537_, lean_object* v_m_1538_, lean_object* v_new2old_1539_){
_start:
{
lean_object* v___f_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v_r_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
lean_inc_ref(v_new2old_1539_);
v___f_1540_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_1540_, 0, v_new2old_1539_);
lean_closure_set(v___f_1540_, 1, v_inst_1537_);
lean_closure_set(v___f_1540_, 2, v_m_1538_);
v___x_1541_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__9));
v___x_1542_ = lean_unsigned_to_nat(0u);
v_r_1543_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__11, &l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__11_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg___closed__11);
v___x_1544_ = lean_array_get_size(v_new2old_1539_);
lean_dec_ref(v_new2old_1539_);
v___x_1545_ = lean_unsigned_to_nat(1u);
v___x_1546_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1542_);
lean_ctor_set(v___x_1546_, 1, v___x_1544_);
lean_ctor_set(v___x_1546_, 2, v___x_1545_);
v___x_1547_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop(lean_box(0), lean_box(0), v___x_1541_, v___x_1546_, v___f_1540_, v_r_1543_, v___x_1542_, lean_box(0), lean_box(0));
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap(lean_object* v_00_u03b1_1548_, lean_object* v_inst_1549_, lean_object* v_m_1550_, lean_object* v_new2old_1551_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg(v_inst_1549_, v_m_1550_, v_new2old_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_1553_, lean_object* v_x_1554_, lean_object* v_x_1555_, lean_object* v_x_1556_){
_start:
{
lean_object* v_ks_1557_; lean_object* v_vs_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1582_; 
v_ks_1557_ = lean_ctor_get(v_x_1553_, 0);
v_vs_1558_ = lean_ctor_get(v_x_1553_, 1);
v_isSharedCheck_1582_ = !lean_is_exclusive(v_x_1553_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1560_ = v_x_1553_;
v_isShared_1561_ = v_isSharedCheck_1582_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_vs_1558_);
lean_inc(v_ks_1557_);
lean_dec(v_x_1553_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1582_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1562_; uint8_t v___x_1563_; 
v___x_1562_ = lean_array_get_size(v_ks_1557_);
v___x_1563_ = lean_nat_dec_lt(v_x_1554_, v___x_1562_);
if (v___x_1563_ == 0)
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1567_; 
lean_dec(v_x_1554_);
v___x_1564_ = lean_array_push(v_ks_1557_, v_x_1555_);
v___x_1565_ = lean_array_push(v_vs_1558_, v_x_1556_);
if (v_isShared_1561_ == 0)
{
lean_ctor_set(v___x_1560_, 1, v___x_1565_);
lean_ctor_set(v___x_1560_, 0, v___x_1564_);
v___x_1567_ = v___x_1560_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v___x_1564_);
lean_ctor_set(v_reuseFailAlloc_1568_, 1, v___x_1565_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
else
{
lean_object* v_k_x27_1569_; uint8_t v___x_1570_; 
v_k_x27_1569_ = lean_array_fget_borrowed(v_ks_1557_, v_x_1554_);
v___x_1570_ = l_Int_Internal_Linear_instBEqPoly_beq(v_x_1555_, v_k_x27_1569_);
if (v___x_1570_ == 0)
{
lean_object* v___x_1572_; 
if (v_isShared_1561_ == 0)
{
v___x_1572_ = v___x_1560_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_ks_1557_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v_vs_1558_);
v___x_1572_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1573_ = lean_unsigned_to_nat(1u);
v___x_1574_ = lean_nat_add(v_x_1554_, v___x_1573_);
lean_dec(v_x_1554_);
v_x_1553_ = v___x_1572_;
v_x_1554_ = v___x_1574_;
goto _start;
}
}
else
{
lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1580_; 
v___x_1577_ = lean_array_fset(v_ks_1557_, v_x_1554_, v_x_1555_);
v___x_1578_ = lean_array_fset(v_vs_1558_, v_x_1554_, v_x_1556_);
lean_dec(v_x_1554_);
if (v_isShared_1561_ == 0)
{
lean_ctor_set(v___x_1560_, 1, v___x_1578_);
lean_ctor_set(v___x_1560_, 0, v___x_1577_);
v___x_1580_ = v___x_1560_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v___x_1577_);
lean_ctor_set(v_reuseFailAlloc_1581_, 1, v___x_1578_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1___redArg(lean_object* v_n_1583_, lean_object* v_k_1584_, lean_object* v_v_1585_){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = lean_unsigned_to_nat(0u);
v___x_1587_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1_spec__3___redArg(v_n_1583_, v___x_1586_, v_k_1584_, v_v_1585_);
return v___x_1587_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1588_; 
v___x_1588_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1588_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg(lean_object* v_x_1589_, size_t v_x_1590_, size_t v_x_1591_, lean_object* v_x_1592_, lean_object* v_x_1593_){
_start:
{
if (lean_obj_tag(v_x_1589_) == 0)
{
lean_object* v_es_1594_; size_t v___x_1595_; size_t v___x_1596_; lean_object* v_j_1597_; lean_object* v___x_1598_; uint8_t v___x_1599_; 
v_es_1594_ = lean_ctor_get(v_x_1589_, 0);
v___x_1595_ = ((size_t)31ULL);
v___x_1596_ = lean_usize_land(v_x_1590_, v___x_1595_);
v_j_1597_ = lean_usize_to_nat(v___x_1596_);
v___x_1598_ = lean_array_get_size(v_es_1594_);
v___x_1599_ = lean_nat_dec_lt(v_j_1597_, v___x_1598_);
if (v___x_1599_ == 0)
{
lean_dec(v_j_1597_);
lean_dec(v_x_1593_);
lean_dec_ref(v_x_1592_);
return v_x_1589_;
}
else
{
lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1638_; 
lean_inc_ref(v_es_1594_);
v_isSharedCheck_1638_ = !lean_is_exclusive(v_x_1589_);
if (v_isSharedCheck_1638_ == 0)
{
lean_object* v_unused_1639_; 
v_unused_1639_ = lean_ctor_get(v_x_1589_, 0);
lean_dec(v_unused_1639_);
v___x_1601_ = v_x_1589_;
v_isShared_1602_ = v_isSharedCheck_1638_;
goto v_resetjp_1600_;
}
else
{
lean_dec(v_x_1589_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1638_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v_v_1603_; lean_object* v___x_1604_; lean_object* v_xs_x27_1605_; lean_object* v___y_1607_; 
v_v_1603_ = lean_array_fget(v_es_1594_, v_j_1597_);
v___x_1604_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_updateLower___redArg___closed__0);
v_xs_x27_1605_ = lean_array_fset(v_es_1594_, v_j_1597_, v___x_1604_);
switch(lean_obj_tag(v_v_1603_))
{
case 0:
{
lean_object* v_key_1612_; lean_object* v_val_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1623_; 
v_key_1612_ = lean_ctor_get(v_v_1603_, 0);
v_val_1613_ = lean_ctor_get(v_v_1603_, 1);
v_isSharedCheck_1623_ = !lean_is_exclusive(v_v_1603_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1615_ = v_v_1603_;
v_isShared_1616_ = v_isSharedCheck_1623_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_val_1613_);
lean_inc(v_key_1612_);
lean_dec(v_v_1603_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1623_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
uint8_t v___x_1617_; 
v___x_1617_ = l_Int_Internal_Linear_instBEqPoly_beq(v_x_1592_, v_key_1612_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
lean_del_object(v___x_1615_);
v___x_1618_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1612_, v_val_1613_, v_x_1592_, v_x_1593_);
v___x_1619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1618_);
v___y_1607_ = v___x_1619_;
goto v___jp_1606_;
}
else
{
lean_object* v___x_1621_; 
lean_dec(v_val_1613_);
lean_dec(v_key_1612_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 1, v_x_1593_);
lean_ctor_set(v___x_1615_, 0, v_x_1592_);
v___x_1621_ = v___x_1615_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_x_1592_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v_x_1593_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
v___y_1607_ = v___x_1621_;
goto v___jp_1606_;
}
}
}
}
case 1:
{
lean_object* v_node_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1636_; 
v_node_1624_ = lean_ctor_get(v_v_1603_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_v_1603_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1626_ = v_v_1603_;
v_isShared_1627_ = v_isSharedCheck_1636_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_node_1624_);
lean_dec(v_v_1603_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1636_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
size_t v___x_1628_; size_t v___x_1629_; size_t v___x_1630_; size_t v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1634_; 
v___x_1628_ = ((size_t)5ULL);
v___x_1629_ = lean_usize_shift_right(v_x_1590_, v___x_1628_);
v___x_1630_ = ((size_t)1ULL);
v___x_1631_ = lean_usize_add(v_x_1591_, v___x_1630_);
v___x_1632_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg(v_node_1624_, v___x_1629_, v___x_1631_, v_x_1592_, v_x_1593_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v___x_1632_);
v___x_1634_ = v___x_1626_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1632_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
v___y_1607_ = v___x_1634_;
goto v___jp_1606_;
}
}
}
default: 
{
lean_object* v___x_1637_; 
v___x_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1637_, 0, v_x_1592_);
lean_ctor_set(v___x_1637_, 1, v_x_1593_);
v___y_1607_ = v___x_1637_;
goto v___jp_1606_;
}
}
v___jp_1606_:
{
lean_object* v___x_1608_; lean_object* v___x_1610_; 
v___x_1608_ = lean_array_fset(v_xs_x27_1605_, v_j_1597_, v___y_1607_);
lean_dec(v_j_1597_);
if (v_isShared_1602_ == 0)
{
lean_ctor_set(v___x_1601_, 0, v___x_1608_);
v___x_1610_ = v___x_1601_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1608_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
}
}
}
else
{
lean_object* v_ks_1640_; lean_object* v_vs_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1659_; 
v_ks_1640_ = lean_ctor_get(v_x_1589_, 0);
v_vs_1641_ = lean_ctor_get(v_x_1589_, 1);
v_isSharedCheck_1659_ = !lean_is_exclusive(v_x_1589_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1643_ = v_x_1589_;
v_isShared_1644_ = v_isSharedCheck_1659_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_vs_1641_);
lean_inc(v_ks_1640_);
lean_dec(v_x_1589_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1659_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1646_; 
if (v_isShared_1644_ == 0)
{
v___x_1646_ = v___x_1643_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_ks_1640_);
lean_ctor_set(v_reuseFailAlloc_1658_, 1, v_vs_1641_);
v___x_1646_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
lean_object* v_newNode_1647_; size_t v___x_1648_; uint8_t v___x_1649_; 
v_newNode_1647_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1___redArg(v___x_1646_, v_x_1592_, v_x_1593_);
v___x_1648_ = ((size_t)7ULL);
v___x_1649_ = lean_usize_dec_le(v___x_1648_, v_x_1591_);
if (v___x_1649_ == 0)
{
lean_object* v___x_1650_; lean_object* v___x_1651_; uint8_t v___x_1652_; 
v___x_1650_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1647_);
v___x_1651_ = lean_unsigned_to_nat(4u);
v___x_1652_ = lean_nat_dec_lt(v___x_1650_, v___x_1651_);
lean_dec(v___x_1650_);
if (v___x_1652_ == 0)
{
lean_object* v_ks_1653_; lean_object* v_vs_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_ks_1653_ = lean_ctor_get(v_newNode_1647_, 0);
lean_inc_ref(v_ks_1653_);
v_vs_1654_ = lean_ctor_get(v_newNode_1647_, 1);
lean_inc_ref(v_vs_1654_);
lean_dec_ref(v_newNode_1647_);
v___x_1655_ = lean_unsigned_to_nat(0u);
v___x_1656_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg___closed__0);
v___x_1657_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2___redArg(v_x_1591_, v_ks_1653_, v_vs_1654_, v___x_1655_, v___x_1656_);
lean_dec_ref(v_vs_1654_);
lean_dec_ref(v_ks_1653_);
return v___x_1657_;
}
else
{
return v_newNode_1647_;
}
}
else
{
return v_newNode_1647_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2___redArg(size_t v_depth_1660_, lean_object* v_keys_1661_, lean_object* v_vals_1662_, lean_object* v_i_1663_, lean_object* v_entries_1664_){
_start:
{
lean_object* v___x_1665_; uint8_t v___x_1666_; 
v___x_1665_ = lean_array_get_size(v_keys_1661_);
v___x_1666_ = lean_nat_dec_lt(v_i_1663_, v___x_1665_);
if (v___x_1666_ == 0)
{
lean_dec(v_i_1663_);
return v_entries_1664_;
}
else
{
lean_object* v_k_1667_; lean_object* v_v_1668_; uint64_t v___x_1669_; size_t v_h_1670_; size_t v___x_1671_; lean_object* v___x_1672_; size_t v___x_1673_; size_t v___x_1674_; size_t v___x_1675_; size_t v_h_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v_k_1667_ = lean_array_fget_borrowed(v_keys_1661_, v_i_1663_);
v_v_1668_ = lean_array_fget_borrowed(v_vals_1662_, v_i_1663_);
v___x_1669_ = l_Lean_Meta_Grind_Arith_Cutsat_instHashablePoly__lean_hash(v_k_1667_);
v_h_1670_ = lean_uint64_to_usize(v___x_1669_);
v___x_1671_ = ((size_t)5ULL);
v___x_1672_ = lean_unsigned_to_nat(1u);
v___x_1673_ = ((size_t)1ULL);
v___x_1674_ = lean_usize_sub(v_depth_1660_, v___x_1673_);
v___x_1675_ = lean_usize_mul(v___x_1671_, v___x_1674_);
v_h_1676_ = lean_usize_shift_right(v_h_1670_, v___x_1675_);
v___x_1677_ = lean_nat_add(v_i_1663_, v___x_1672_);
lean_dec(v_i_1663_);
lean_inc(v_v_1668_);
lean_inc(v_k_1667_);
v___x_1678_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg(v_entries_1664_, v_h_1676_, v_depth_1660_, v_k_1667_, v_v_1668_);
v_i_1663_ = v___x_1677_;
v_entries_1664_ = v___x_1678_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_1680_, lean_object* v_keys_1681_, lean_object* v_vals_1682_, lean_object* v_i_1683_, lean_object* v_entries_1684_){
_start:
{
size_t v_depth_boxed_1685_; lean_object* v_res_1686_; 
v_depth_boxed_1685_ = lean_unbox_usize(v_depth_1680_);
lean_dec(v_depth_1680_);
v_res_1686_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2___redArg(v_depth_boxed_1685_, v_keys_1681_, v_vals_1682_, v_i_1683_, v_entries_1684_);
lean_dec_ref(v_vals_1682_);
lean_dec_ref(v_keys_1681_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg___boxed(lean_object* v_x_1687_, lean_object* v_x_1688_, lean_object* v_x_1689_, lean_object* v_x_1690_, lean_object* v_x_1691_){
_start:
{
size_t v_x_1765__boxed_1692_; size_t v_x_1766__boxed_1693_; lean_object* v_res_1694_; 
v_x_1765__boxed_1692_ = lean_unbox_usize(v_x_1688_);
lean_dec(v_x_1688_);
v_x_1766__boxed_1693_ = lean_unbox_usize(v_x_1689_);
lean_dec(v_x_1689_);
v_res_1694_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg(v_x_1687_, v_x_1765__boxed_1692_, v_x_1766__boxed_1693_, v_x_1690_, v_x_1691_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0___redArg(lean_object* v_x_1695_, lean_object* v_x_1696_, lean_object* v_x_1697_){
_start:
{
uint64_t v___x_1698_; size_t v___x_1699_; size_t v___x_1700_; lean_object* v___x_1701_; 
v___x_1698_ = l_Lean_Meta_Grind_Arith_Cutsat_instHashablePoly__lean_hash(v_x_1696_);
v___x_1699_ = lean_uint64_to_usize(v___x_1698_);
v___x_1700_ = ((size_t)1ULL);
v___x_1701_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg(v_x_1695_, v___x_1699_, v___x_1700_, v_x_1696_, v_x_1697_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___lam__0(lean_object* v_old2new_1702_, lean_object* v_x_1703_, lean_object* v_____s_1704_){
_start:
{
lean_object* v_fst_1705_; lean_object* v_snd_1706_; lean_object* v___x_1707_; lean_object* v_m_x27_1708_; lean_object* v___x_1709_; 
v_fst_1705_ = lean_ctor_get(v_x_1703_, 0);
lean_inc(v_fst_1705_);
v_snd_1706_ = lean_ctor_get(v_x_1703_, 1);
lean_inc(v_snd_1706_);
lean_dec_ref(v_x_1703_);
v___x_1707_ = l_Int_Internal_Linear_Poly_reorder(v_fst_1705_, v_old2new_1702_);
v_m_x27_1708_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0___redArg(v_____s_1704_, v___x_1707_, v_snd_1706_);
v___x_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1709_, 0, v_m_x27_1708_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___lam__0___boxed(lean_object* v_old2new_1710_, lean_object* v_x_1711_, lean_object* v_____s_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___lam__0(v_old2new_1710_, v_x_1711_, v_____s_1712_);
lean_dec_ref(v_old2new_1710_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8___redArg(lean_object* v_f_1714_, lean_object* v_keys_1715_, lean_object* v_vals_1716_, lean_object* v_i_1717_, lean_object* v_acc_1718_){
_start:
{
lean_object* v___x_1719_; uint8_t v___x_1720_; 
v___x_1719_ = lean_array_get_size(v_keys_1715_);
v___x_1720_ = lean_nat_dec_lt(v_i_1717_, v___x_1719_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; 
lean_dec(v_i_1717_);
lean_dec_ref(v_f_1714_);
v___x_1721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1721_, 0, v_acc_1718_);
return v___x_1721_;
}
else
{
lean_object* v_k_1722_; lean_object* v_v_1723_; lean_object* v___x_1724_; 
v_k_1722_ = lean_array_fget_borrowed(v_keys_1715_, v_i_1717_);
v_v_1723_ = lean_array_fget_borrowed(v_vals_1716_, v_i_1717_);
lean_inc_ref(v_f_1714_);
lean_inc(v_v_1723_);
lean_inc(v_k_1722_);
v___x_1724_ = lean_apply_3(v_f_1714_, v_acc_1718_, v_k_1722_, v_v_1723_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_dec(v_i_1717_);
lean_dec_ref(v_f_1714_);
return v___x_1724_;
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_a_1725_);
lean_dec_ref_known(v___x_1724_, 1);
v___x_1726_ = lean_unsigned_to_nat(1u);
v___x_1727_ = lean_nat_add(v_i_1717_, v___x_1726_);
lean_dec(v_i_1717_);
v_i_1717_ = v___x_1727_;
v_acc_1718_ = v_a_1725_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_f_1729_, lean_object* v_keys_1730_, lean_object* v_vals_1731_, lean_object* v_i_1732_, lean_object* v_acc_1733_){
_start:
{
lean_object* v_res_1734_; 
v_res_1734_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8___redArg(v_f_1729_, v_keys_1730_, v_vals_1731_, v_i_1732_, v_acc_1733_);
lean_dec_ref(v_vals_1731_);
lean_dec_ref(v_keys_1730_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7___redArg(lean_object* v_f_1735_, lean_object* v_as_1736_, size_t v_i_1737_, size_t v_stop_1738_, lean_object* v_b_1739_){
_start:
{
lean_object* v_a_1741_; lean_object* v___y_1746_; uint8_t v___x_1748_; 
v___x_1748_ = lean_usize_dec_eq(v_i_1737_, v_stop_1738_);
if (v___x_1748_ == 0)
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_array_uget_borrowed(v_as_1736_, v_i_1737_);
switch(lean_obj_tag(v___x_1749_))
{
case 0:
{
lean_object* v_key_1750_; lean_object* v_val_1751_; lean_object* v___x_1752_; 
v_key_1750_ = lean_ctor_get(v___x_1749_, 0);
v_val_1751_ = lean_ctor_get(v___x_1749_, 1);
lean_inc_ref(v_f_1735_);
lean_inc(v_val_1751_);
lean_inc(v_key_1750_);
v___x_1752_ = lean_apply_3(v_f_1735_, v_b_1739_, v_key_1750_, v_val_1751_);
v___y_1746_ = v___x_1752_;
goto v___jp_1745_;
}
case 1:
{
lean_object* v_node_1753_; lean_object* v___x_1754_; 
v_node_1753_ = lean_ctor_get(v___x_1749_, 0);
lean_inc(v_node_1753_);
lean_inc_ref(v_f_1735_);
v___x_1754_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5___redArg(v_f_1735_, v_node_1753_, v_b_1739_);
v___y_1746_ = v___x_1754_;
goto v___jp_1745_;
}
default: 
{
v_a_1741_ = v_b_1739_;
goto v___jp_1740_;
}
}
}
else
{
lean_object* v___x_1755_; 
lean_dec_ref(v_f_1735_);
v___x_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1755_, 0, v_b_1739_);
return v___x_1755_;
}
v___jp_1740_:
{
size_t v___x_1742_; size_t v___x_1743_; 
v___x_1742_ = ((size_t)1ULL);
v___x_1743_ = lean_usize_add(v_i_1737_, v___x_1742_);
v_i_1737_ = v___x_1743_;
v_b_1739_ = v_a_1741_;
goto _start;
}
v___jp_1745_:
{
if (lean_obj_tag(v___y_1746_) == 0)
{
lean_dec_ref(v_f_1735_);
return v___y_1746_;
}
else
{
lean_object* v_a_1747_; 
v_a_1747_ = lean_ctor_get(v___y_1746_, 0);
lean_inc(v_a_1747_);
lean_dec_ref_known(v___y_1746_, 1);
v_a_1741_ = v_a_1747_;
goto v___jp_1740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5___redArg(lean_object* v_f_1756_, lean_object* v_x_1757_, lean_object* v_x_1758_){
_start:
{
if (lean_obj_tag(v_x_1757_) == 0)
{
lean_object* v_es_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1772_; 
v_es_1759_ = lean_ctor_get(v_x_1757_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v_x_1757_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1761_ = v_x_1757_;
v_isShared_1762_ = v_isSharedCheck_1772_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_es_1759_);
lean_dec(v_x_1757_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1772_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
v___x_1763_ = lean_unsigned_to_nat(0u);
v___x_1764_ = lean_array_get_size(v_es_1759_);
v___x_1765_ = lean_nat_dec_lt(v___x_1763_, v___x_1764_);
if (v___x_1765_ == 0)
{
lean_object* v___x_1767_; 
lean_dec_ref(v_es_1759_);
lean_dec_ref(v_f_1756_);
if (v_isShared_1762_ == 0)
{
lean_ctor_set_tag(v___x_1761_, 1);
lean_ctor_set(v___x_1761_, 0, v_x_1758_);
v___x_1767_ = v___x_1761_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_x_1758_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
else
{
size_t v___x_1769_; size_t v___x_1770_; lean_object* v___x_1771_; 
lean_del_object(v___x_1761_);
v___x_1769_ = ((size_t)0ULL);
v___x_1770_ = lean_usize_of_nat(v___x_1764_);
v___x_1771_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7___redArg(v_f_1756_, v_es_1759_, v___x_1769_, v___x_1770_, v_x_1758_);
lean_dec_ref(v_es_1759_);
return v___x_1771_;
}
}
}
else
{
lean_object* v_ks_1773_; lean_object* v_vs_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v_ks_1773_ = lean_ctor_get(v_x_1757_, 0);
lean_inc_ref(v_ks_1773_);
v_vs_1774_ = lean_ctor_get(v_x_1757_, 1);
lean_inc_ref(v_vs_1774_);
lean_dec_ref_known(v_x_1757_, 2);
v___x_1775_ = lean_unsigned_to_nat(0u);
v___x_1776_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8___redArg(v_f_1756_, v_ks_1773_, v_vs_1774_, v___x_1775_, v_x_1758_);
lean_dec_ref(v_vs_1774_);
lean_dec_ref(v_ks_1773_);
return v___x_1776_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7___redArg___boxed(lean_object* v_f_1777_, lean_object* v_as_1778_, lean_object* v_i_1779_, lean_object* v_stop_1780_, lean_object* v_b_1781_){
_start:
{
size_t v_i_boxed_1782_; size_t v_stop_boxed_1783_; lean_object* v_res_1784_; 
v_i_boxed_1782_ = lean_unbox_usize(v_i_1779_);
lean_dec(v_i_1779_);
v_stop_boxed_1783_ = lean_unbox_usize(v_stop_1780_);
lean_dec(v_stop_1780_);
v_res_1784_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7___redArg(v_f_1777_, v_as_1778_, v_i_boxed_1782_, v_stop_boxed_1783_, v_b_1781_);
lean_dec_ref(v_as_1778_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___redArg___lam__0(lean_object* v_f_1785_, lean_object* v_s_1786_, lean_object* v_a_1787_, lean_object* v_b_1788_){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1789_, 0, v_a_1787_);
lean_ctor_set(v___x_1789_, 1, v_b_1788_);
v___x_1790_ = lean_apply_2(v_f_1785_, v___x_1789_, v_s_1786_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v_a_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1798_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1798_ == 0)
{
v___x_1793_ = v___x_1790_;
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_a_1791_);
lean_dec(v___x_1790_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1796_; 
if (v_isShared_1794_ == 0)
{
v___x_1796_ = v___x_1793_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_a_1791_);
v___x_1796_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
return v___x_1796_;
}
}
}
else
{
lean_object* v_a_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1806_; 
v_a_1799_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1801_ = v___x_1790_;
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_a_1799_);
lean_dec(v___x_1790_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1804_; 
if (v_isShared_1802_ == 0)
{
v___x_1804_ = v___x_1801_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_a_1799_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___redArg(lean_object* v_map_1807_, lean_object* v_init_1808_, lean_object* v_f_1809_){
_start:
{
lean_object* v___f_1810_; lean_object* v___x_1811_; lean_object* v_a_1812_; 
v___f_1810_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1810_, 0, v_f_1809_);
lean_inc_ref(v_map_1807_);
v___x_1811_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5___redArg(v___f_1810_, v_map_1807_, v_init_1808_);
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1812_);
lean_dec_ref(v___x_1811_);
return v_a_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___redArg___boxed(lean_object* v_map_1813_, lean_object* v_init_1814_, lean_object* v_f_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___redArg(v_map_1813_, v_init_1814_, v_f_1815_);
lean_dec_ref(v_map_1813_);
return v_res_1816_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__0(void){
_start:
{
lean_object* v___x_1817_; 
v___x_1817_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1817_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__1(void){
_start:
{
lean_object* v___x_1818_; lean_object* v_m_x27_1819_; 
v___x_1818_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__0);
v_m_x27_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_m_x27_1819_, 0, v___x_1818_);
return v_m_x27_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits(lean_object* v_m_1820_, lean_object* v_old2new_1821_){
_start:
{
lean_object* v___f_1822_; lean_object* v_m_x27_1823_; lean_object* v___x_1824_; 
v___f_1822_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1822_, 0, v_old2new_1821_);
v_m_x27_1823_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__1);
v___x_1824_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___redArg(v_m_1820_, v_m_x27_1823_, v___f_1822_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___boxed(lean_object* v_m_1825_, lean_object* v_old2new_1826_){
_start:
{
lean_object* v_res_1827_; 
v_res_1827_ = l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits(v_m_1825_, v_old2new_1826_);
lean_dec_ref(v_m_1825_);
return v_res_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0(lean_object* v_00_u03b2_1828_, lean_object* v_x_1829_, lean_object* v_x_1830_, lean_object* v_x_1831_){
_start:
{
lean_object* v___x_1832_; 
v___x_1832_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0___redArg(v_x_1829_, v_x_1830_, v_x_1831_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1(lean_object* v_00_u03c3_1833_, lean_object* v_00_u03b2_1834_, lean_object* v_map_1835_, lean_object* v_init_1836_, lean_object* v_f_1837_){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___redArg(v_map_1835_, v_init_1836_, v_f_1837_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1___boxed(lean_object* v_00_u03c3_1839_, lean_object* v_00_u03b2_1840_, lean_object* v_map_1841_, lean_object* v_init_1842_, lean_object* v_f_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1(v_00_u03c3_1839_, v_00_u03b2_1840_, v_map_1841_, v_init_1842_, v_f_1843_);
lean_dec_ref(v_map_1841_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0(lean_object* v_00_u03b2_1845_, lean_object* v_x_1846_, size_t v_x_1847_, size_t v_x_1848_, lean_object* v_x_1849_, lean_object* v_x_1850_){
_start:
{
lean_object* v___x_1851_; 
v___x_1851_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___redArg(v_x_1846_, v_x_1847_, v_x_1848_, v_x_1849_, v_x_1850_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1852_, lean_object* v_x_1853_, lean_object* v_x_1854_, lean_object* v_x_1855_, lean_object* v_x_1856_, lean_object* v_x_1857_){
_start:
{
size_t v_x_2098__boxed_1858_; size_t v_x_2099__boxed_1859_; lean_object* v_res_1860_; 
v_x_2098__boxed_1858_ = lean_unbox_usize(v_x_1854_);
lean_dec(v_x_1854_);
v_x_2099__boxed_1859_ = lean_unbox_usize(v_x_1855_);
lean_dec(v_x_1855_);
v_res_1860_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0(v_00_u03b2_1852_, v_x_1853_, v_x_2098__boxed_1858_, v_x_2099__boxed_1859_, v_x_1856_, v_x_1857_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2___redArg(lean_object* v_map_1861_, lean_object* v_f_1862_, lean_object* v_init_1863_){
_start:
{
lean_object* v___x_1864_; 
v___x_1864_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5___redArg(v_f_1862_, v_map_1861_, v_init_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2(lean_object* v_00_u03c3_1865_, lean_object* v_00_u03c3_1866_, lean_object* v_00_u03b2_1867_, lean_object* v_map_1868_, lean_object* v_f_1869_, lean_object* v_init_1870_){
_start:
{
lean_object* v___x_1871_; 
v___x_1871_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5___redArg(v_f_1869_, v_map_1868_, v_init_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1872_, lean_object* v_n_1873_, lean_object* v_k_1874_, lean_object* v_v_1875_){
_start:
{
lean_object* v___x_1876_; 
v___x_1876_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1___redArg(v_n_1873_, v_k_1874_, v_v_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1877_, size_t v_depth_1878_, lean_object* v_keys_1879_, lean_object* v_vals_1880_, lean_object* v_heq_1881_, lean_object* v_i_1882_, lean_object* v_entries_1883_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2___redArg(v_depth_1878_, v_keys_1879_, v_vals_1880_, v_i_1882_, v_entries_1883_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1885_, lean_object* v_depth_1886_, lean_object* v_keys_1887_, lean_object* v_vals_1888_, lean_object* v_heq_1889_, lean_object* v_i_1890_, lean_object* v_entries_1891_){
_start:
{
size_t v_depth_boxed_1892_; lean_object* v_res_1893_; 
v_depth_boxed_1892_ = lean_unbox_usize(v_depth_1886_);
lean_dec(v_depth_1886_);
v_res_1893_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__2(v_00_u03b2_1885_, v_depth_boxed_1892_, v_keys_1887_, v_vals_1888_, v_heq_1889_, v_i_1890_, v_entries_1891_);
lean_dec_ref(v_vals_1888_);
lean_dec_ref(v_keys_1887_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5(lean_object* v_00_u03c3_1894_, lean_object* v_00_u03c3_1895_, lean_object* v_00_u03b1_1896_, lean_object* v_00_u03b2_1897_, lean_object* v_f_1898_, lean_object* v_x_1899_, lean_object* v_x_1900_){
_start:
{
lean_object* v___x_1901_; 
v___x_1901_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5___redArg(v_f_1898_, v_x_1899_, v_x_1900_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1902_, lean_object* v_x_1903_, lean_object* v_x_1904_, lean_object* v_x_1905_, lean_object* v_x_1906_){
_start:
{
lean_object* v___x_1907_; 
v___x_1907_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1903_, v_x_1904_, v_x_1905_, v_x_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7(lean_object* v_00_u03b1_1908_, lean_object* v_00_u03b2_1909_, lean_object* v_00_u03c3_1910_, lean_object* v_00_u03c3_1911_, lean_object* v_f_1912_, lean_object* v_as_1913_, size_t v_i_1914_, size_t v_stop_1915_, lean_object* v_b_1916_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7___redArg(v_f_1912_, v_as_1913_, v_i_1914_, v_stop_1915_, v_b_1916_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1918_, lean_object* v_00_u03b2_1919_, lean_object* v_00_u03c3_1920_, lean_object* v_00_u03c3_1921_, lean_object* v_f_1922_, lean_object* v_as_1923_, lean_object* v_i_1924_, lean_object* v_stop_1925_, lean_object* v_b_1926_){
_start:
{
size_t v_i_boxed_1927_; size_t v_stop_boxed_1928_; lean_object* v_res_1929_; 
v_i_boxed_1927_ = lean_unbox_usize(v_i_1924_);
lean_dec(v_i_1924_);
v_stop_boxed_1928_ = lean_unbox_usize(v_stop_1925_);
lean_dec(v_stop_1925_);
v_res_1929_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__7(v_00_u03b1_1918_, v_00_u03b2_1919_, v_00_u03c3_1920_, v_00_u03c3_1921_, v_f_1922_, v_as_1923_, v_i_boxed_1927_, v_stop_boxed_1928_, v_b_1926_);
lean_dec_ref(v_as_1923_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8(lean_object* v_00_u03c3_1930_, lean_object* v_00_u03c3_1931_, lean_object* v_00_u03b1_1932_, lean_object* v_00_u03b2_1933_, lean_object* v_f_1934_, lean_object* v_keys_1935_, lean_object* v_vals_1936_, lean_object* v_heq_1937_, lean_object* v_i_1938_, lean_object* v_acc_1939_){
_start:
{
lean_object* v___x_1940_; 
v___x_1940_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8___redArg(v_f_1934_, v_keys_1935_, v_vals_1936_, v_i_1938_, v_acc_1939_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03c3_1941_, lean_object* v_00_u03c3_1942_, lean_object* v_00_u03b1_1943_, lean_object* v_00_u03b2_1944_, lean_object* v_f_1945_, lean_object* v_keys_1946_, lean_object* v_vals_1947_, lean_object* v_heq_1948_, lean_object* v_i_1949_, lean_object* v_acc_1950_){
_start:
{
lean_object* v_res_1951_; 
v_res_1951_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits_spec__1_spec__2_spec__5_spec__8(v_00_u03c3_1941_, v_00_u03c3_1942_, v_00_u03b1_1943_, v_00_u03b2_1944_, v_f_1945_, v_keys_1946_, v_vals_1947_, v_heq_1948_, v_i_1949_, v_acc_1950_);
lean_dec_ref(v_vals_1947_);
lean_dec_ref(v_keys_1946_);
return v_res_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__0(lean_object* v___x_1952_, lean_object* v___x_1953_, lean_object* v_x_1954_){
_start:
{
lean_object* v___x_1955_; 
v___x_1955_ = lean_array_get_borrowed(v___x_1952_, v___x_1953_, v_x_1954_);
lean_inc(v___x_1955_);
return v___x_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__0___boxed(lean_object* v___x_1956_, lean_object* v___x_1957_, lean_object* v_x_1958_){
_start:
{
lean_object* v_res_1959_; 
v_res_1959_ = l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__0(v___x_1956_, v___x_1957_, v_x_1958_);
lean_dec(v_x_1958_);
lean_dec_ref(v___x_1957_);
lean_dec(v___x_1956_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0___redArg___lam__0(lean_object* v_f_1960_, lean_object* v_x_1961_){
_start:
{
lean_object* v___x_1962_; 
v___x_1962_ = lean_apply_1(v_f_1960_, v_x_1961_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41___redArg(lean_object* v_f_1963_, lean_object* v_as_1964_, lean_object* v_i_1965_, lean_object* v_acc_1966_){
_start:
{
lean_object* v___x_1967_; uint8_t v___x_1968_; 
v___x_1967_ = lean_array_get_size(v_as_1964_);
v___x_1968_ = lean_nat_dec_eq(v_i_1965_, v___x_1967_);
if (v___x_1968_ == 0)
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1969_ = lean_array_fget_borrowed(v_as_1964_, v_i_1965_);
lean_inc(v_f_1963_);
lean_inc(v___x_1969_);
v___x_1970_ = lean_apply_1(v_f_1963_, v___x_1969_);
v___x_1971_ = lean_unsigned_to_nat(1u);
v___x_1972_ = lean_nat_add(v_i_1965_, v___x_1971_);
lean_dec(v_i_1965_);
v___x_1973_ = lean_array_push(v_acc_1966_, v___x_1970_);
v_i_1965_ = v___x_1972_;
v_acc_1966_ = v___x_1973_;
goto _start;
}
else
{
lean_dec(v_i_1965_);
lean_dec(v_f_1963_);
return v_acc_1966_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41___redArg___boxed(lean_object* v_f_1975_, lean_object* v_as_1976_, lean_object* v_i_1977_, lean_object* v_acc_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41___redArg(v_f_1975_, v_as_1976_, v_i_1977_, v_acc_1978_);
lean_dec_ref(v_as_1976_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21___redArg(lean_object* v_f_1980_, lean_object* v_as_1981_){
_start:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1982_ = lean_unsigned_to_nat(0u);
v___x_1983_ = lean_array_get_size(v_as_1981_);
v___x_1984_ = lean_mk_empty_array_with_capacity(v___x_1983_);
v___x_1985_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41___redArg(v_f_1980_, v_as_1981_, v___x_1982_, v___x_1984_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21___redArg___boxed(lean_object* v_f_1986_, lean_object* v_as_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21___redArg(v_f_1986_, v_as_1987_);
lean_dec_ref(v_as_1987_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20___redArg(lean_object* v_f_1989_, size_t v_sz_1990_, size_t v_i_1991_, lean_object* v_bs_1992_){
_start:
{
uint8_t v___x_1993_; 
v___x_1993_ = lean_usize_dec_lt(v_i_1991_, v_sz_1990_);
if (v___x_1993_ == 0)
{
lean_object* v___x_1994_; 
lean_dec(v_f_1989_);
v___x_1994_ = l_unsafeCast___redArg(v_bs_1992_);
lean_dec_ref(v_bs_1992_);
return v___x_1994_;
}
else
{
lean_object* v_v_1995_; lean_object* v___x_1996_; lean_object* v_bs_x27_1997_; lean_object* v___y_1999_; lean_object* v___x_2005_; 
v_v_1995_ = lean_array_uget(v_bs_1992_, v_i_1991_);
v___x_1996_ = lean_unsigned_to_nat(0u);
v_bs_x27_1997_ = lean_array_uset(v_bs_1992_, v_i_1991_, v___x_1996_);
v___x_2005_ = l_unsafeCast___redArg(v_v_1995_);
lean_dec(v_v_1995_);
switch(lean_obj_tag(v___x_2005_))
{
case 0:
{
lean_object* v_key_2006_; lean_object* v_val_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2015_; 
v_key_2006_ = lean_ctor_get(v___x_2005_, 0);
v_val_2007_ = lean_ctor_get(v___x_2005_, 1);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2009_ = v___x_2005_;
v_isShared_2010_ = v_isSharedCheck_2015_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_val_2007_);
lean_inc(v_key_2006_);
lean_dec(v___x_2005_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2015_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2011_; lean_object* v___x_2013_; 
lean_inc(v_f_1989_);
v___x_2011_ = lean_apply_1(v_f_1989_, v_val_2007_);
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 1, v___x_2011_);
v___x_2013_ = v___x_2009_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_key_2006_);
lean_ctor_set(v_reuseFailAlloc_2014_, 1, v___x_2011_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
v___y_1999_ = v___x_2013_;
goto v___jp_1998_;
}
}
}
case 1:
{
lean_object* v_node_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2024_; 
v_node_2016_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2018_ = v___x_2005_;
v_isShared_2019_ = v_isSharedCheck_2024_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_node_2016_);
lean_dec(v___x_2005_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2024_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2020_; lean_object* v___x_2022_; 
lean_inc(v_f_1989_);
v___x_2020_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1___redArg(v_f_1989_, v_node_2016_);
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 0, v___x_2020_);
v___x_2022_ = v___x_2018_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v___x_2020_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
v___y_1999_ = v___x_2022_;
goto v___jp_1998_;
}
}
}
default: 
{
lean_object* v___x_2025_; 
v___x_2025_ = lean_box(2);
v___y_1999_ = v___x_2025_;
goto v___jp_1998_;
}
}
v___jp_1998_:
{
size_t v___x_2000_; size_t v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2000_ = ((size_t)1ULL);
v___x_2001_ = lean_usize_add(v_i_1991_, v___x_2000_);
v___x_2002_ = l_unsafeCast___redArg(v___y_1999_);
lean_dec(v___y_1999_);
v___x_2003_ = lean_array_uset(v_bs_x27_1997_, v_i_1991_, v___x_2002_);
v_i_1991_ = v___x_2001_;
v_bs_1992_ = v___x_2003_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1___redArg(lean_object* v_f_2026_, lean_object* v_n_2027_){
_start:
{
if (lean_obj_tag(v_n_2027_) == 0)
{
lean_object* v_es_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2040_; 
v_es_2028_ = lean_ctor_get(v_n_2027_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v_n_2027_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2030_ = v_n_2027_;
v_isShared_2031_ = v_isSharedCheck_2040_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_es_2028_);
lean_dec(v_n_2027_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2040_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
size_t v_sz_2032_; size_t v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2038_; 
v_sz_2032_ = lean_array_size(v_es_2028_);
v___x_2033_ = ((size_t)0ULL);
v___x_2034_ = l_unsafeCast___redArg(v_es_2028_);
lean_dec_ref(v_es_2028_);
v___x_2035_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20___redArg(v_f_2026_, v_sz_2032_, v___x_2033_, v___x_2034_);
v___x_2036_ = l_unsafeCast___redArg(v___x_2035_);
lean_dec_ref(v___x_2035_);
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v___x_2036_);
v___x_2038_ = v___x_2030_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v___x_2036_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
else
{
lean_object* v_ks_2041_; lean_object* v_vs_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2050_; 
v_ks_2041_ = lean_ctor_get(v_n_2027_, 0);
v_vs_2042_ = lean_ctor_get(v_n_2027_, 1);
v_isSharedCheck_2050_ = !lean_is_exclusive(v_n_2027_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2044_ = v_n_2027_;
v_isShared_2045_ = v_isSharedCheck_2050_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_vs_2042_);
lean_inc(v_ks_2041_);
lean_dec(v_n_2027_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2050_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v_val_2046_; lean_object* v___x_2048_; 
v_val_2046_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21___redArg(v_f_2026_, v_vs_2042_);
lean_dec_ref(v_vs_2042_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 1, v_val_2046_);
v___x_2048_ = v___x_2044_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_ks_2041_);
lean_ctor_set(v_reuseFailAlloc_2049_, 1, v_val_2046_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20___redArg___boxed(lean_object* v_f_2051_, lean_object* v_sz_2052_, lean_object* v_i_2053_, lean_object* v_bs_2054_){
_start:
{
size_t v_sz_boxed_2055_; size_t v_i_boxed_2056_; lean_object* v_res_2057_; 
v_sz_boxed_2055_ = lean_unbox_usize(v_sz_2052_);
lean_dec(v_sz_2052_);
v_i_boxed_2056_ = lean_unbox_usize(v_i_2053_);
lean_dec(v_i_2053_);
v_res_2057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20___redArg(v_f_2051_, v_sz_boxed_2055_, v_i_boxed_2056_, v_bs_2054_);
return v_res_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0___redArg(lean_object* v_pm_2058_, lean_object* v_f_2059_){
_start:
{
lean_object* v___f_2060_; lean_object* v___x_2061_; 
v___f_2060_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2060_, 0, v_f_2059_);
v___x_2061_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1___redArg(v___f_2060_, v_pm_2058_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__12(lean_object* v___x_2062_, size_t v_sz_2063_, size_t v_i_2064_, lean_object* v_bs_2065_){
_start:
{
uint8_t v___x_2066_; 
v___x_2066_ = lean_usize_dec_lt(v_i_2064_, v_sz_2063_);
if (v___x_2066_ == 0)
{
lean_object* v___x_2067_; 
v___x_2067_ = l_unsafeCast___redArg(v_bs_2065_);
lean_dec_ref(v_bs_2065_);
return v___x_2067_;
}
else
{
lean_object* v_v_2068_; lean_object* v___x_2069_; lean_object* v_bs_x27_2070_; lean_object* v___y_2072_; lean_object* v___x_2078_; 
v_v_2068_ = lean_array_uget(v_bs_2065_, v_i_2064_);
v___x_2069_ = lean_unsigned_to_nat(0u);
v_bs_x27_2070_ = lean_array_uset(v_bs_2065_, v_i_2064_, v___x_2069_);
v___x_2078_ = l_unsafeCast___redArg(v_v_2068_);
lean_dec(v_v_2068_);
if (lean_obj_tag(v___x_2078_) == 0)
{
v___y_2072_ = v___x_2078_;
goto v___jp_2071_;
}
else
{
lean_object* v_val_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2087_; 
v_val_2079_ = lean_ctor_get(v___x_2078_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2081_ = v___x_2078_;
v_isShared_2082_ = v_isSharedCheck_2087_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_val_2079_);
lean_dec(v___x_2078_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2087_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2083_; lean_object* v___x_2085_; 
v___x_2083_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_reorder(v_val_2079_, v___x_2062_);
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 0, v___x_2083_);
v___x_2085_ = v___x_2081_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v___x_2083_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
v___y_2072_ = v___x_2085_;
goto v___jp_2071_;
}
}
}
v___jp_2071_:
{
size_t v___x_2073_; size_t v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___x_2073_ = ((size_t)1ULL);
v___x_2074_ = lean_usize_add(v_i_2064_, v___x_2073_);
v___x_2075_ = l_unsafeCast___redArg(v___y_2072_);
lean_dec(v___y_2072_);
v___x_2076_ = lean_array_uset(v_bs_x27_2070_, v_i_2064_, v___x_2075_);
v_i_2064_ = v___x_2074_;
v_bs_2065_ = v___x_2076_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__12___boxed(lean_object* v___x_2088_, lean_object* v_sz_2089_, lean_object* v_i_2090_, lean_object* v_bs_2091_){
_start:
{
size_t v_sz_boxed_2092_; size_t v_i_boxed_2093_; lean_object* v_res_2094_; 
v_sz_boxed_2092_ = lean_unbox_usize(v_sz_2089_);
lean_dec(v_sz_2089_);
v_i_boxed_2093_ = lean_unbox_usize(v_i_2090_);
lean_dec(v_i_2090_);
v_res_2094_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__12(v___x_2088_, v_sz_boxed_2092_, v_i_boxed_2093_, v_bs_2091_);
lean_dec_ref(v___x_2088_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11_spec__16(lean_object* v___x_2095_, size_t v_sz_2096_, size_t v_i_2097_, lean_object* v_bs_2098_){
_start:
{
uint8_t v___x_2099_; 
v___x_2099_ = lean_usize_dec_lt(v_i_2097_, v_sz_2096_);
if (v___x_2099_ == 0)
{
lean_object* v___x_2100_; 
v___x_2100_ = l_unsafeCast___redArg(v_bs_2098_);
lean_dec_ref(v_bs_2098_);
return v___x_2100_;
}
else
{
lean_object* v_v_2101_; lean_object* v___x_2102_; lean_object* v_bs_x27_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; size_t v___x_2106_; size_t v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v_v_2101_ = lean_array_uget(v_bs_2098_, v_i_2097_);
v___x_2102_ = lean_unsigned_to_nat(0u);
v_bs_x27_2103_ = lean_array_uset(v_bs_2098_, v_i_2097_, v___x_2102_);
v___x_2104_ = l_unsafeCast___redArg(v_v_2101_);
lean_dec(v_v_2101_);
v___x_2105_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11(v___x_2095_, v___x_2104_);
v___x_2106_ = ((size_t)1ULL);
v___x_2107_ = lean_usize_add(v_i_2097_, v___x_2106_);
v___x_2108_ = l_unsafeCast___redArg(v___x_2105_);
lean_dec_ref(v___x_2105_);
v___x_2109_ = lean_array_uset(v_bs_x27_2103_, v_i_2097_, v___x_2108_);
v_i_2097_ = v___x_2107_;
v_bs_2098_ = v___x_2109_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11(lean_object* v___x_2111_, lean_object* v_x_2112_){
_start:
{
if (lean_obj_tag(v_x_2112_) == 0)
{
lean_object* v_cs_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2125_; 
v_cs_2113_ = lean_ctor_get(v_x_2112_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v_x_2112_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2115_ = v_x_2112_;
v_isShared_2116_ = v_isSharedCheck_2125_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_cs_2113_);
lean_dec(v_x_2112_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2125_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
size_t v_sz_2117_; size_t v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2123_; 
v_sz_2117_ = lean_array_size(v_cs_2113_);
v___x_2118_ = ((size_t)0ULL);
v___x_2119_ = l_unsafeCast___redArg(v_cs_2113_);
lean_dec_ref(v_cs_2113_);
v___x_2120_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11_spec__16(v___x_2111_, v_sz_2117_, v___x_2118_, v___x_2119_);
v___x_2121_ = l_unsafeCast___redArg(v___x_2120_);
lean_dec_ref(v___x_2120_);
if (v_isShared_2116_ == 0)
{
lean_ctor_set(v___x_2115_, 0, v___x_2121_);
v___x_2123_ = v___x_2115_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v___x_2121_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
else
{
lean_object* v_vs_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2138_; 
v_vs_2126_ = lean_ctor_get(v_x_2112_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v_x_2112_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2128_ = v_x_2112_;
v_isShared_2129_ = v_isSharedCheck_2138_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_vs_2126_);
lean_dec(v_x_2112_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2138_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
size_t v_sz_2130_; size_t v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2136_; 
v_sz_2130_ = lean_array_size(v_vs_2126_);
v___x_2131_ = ((size_t)0ULL);
v___x_2132_ = l_unsafeCast___redArg(v_vs_2126_);
lean_dec_ref(v_vs_2126_);
v___x_2133_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__12(v___x_2111_, v_sz_2130_, v___x_2131_, v___x_2132_);
v___x_2134_ = l_unsafeCast___redArg(v___x_2133_);
lean_dec_ref(v___x_2133_);
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 0, v___x_2134_);
v___x_2136_ = v___x_2128_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2134_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11___boxed(lean_object* v___x_2139_, lean_object* v_x_2140_){
_start:
{
lean_object* v_res_2141_; 
v_res_2141_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11(v___x_2139_, v_x_2140_);
lean_dec_ref(v___x_2139_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11_spec__16___boxed(lean_object* v___x_2142_, lean_object* v_sz_2143_, lean_object* v_i_2144_, lean_object* v_bs_2145_){
_start:
{
size_t v_sz_boxed_2146_; size_t v_i_boxed_2147_; lean_object* v_res_2148_; 
v_sz_boxed_2146_ = lean_unbox_usize(v_sz_2143_);
lean_dec(v_sz_2143_);
v_i_boxed_2147_ = lean_unbox_usize(v_i_2144_);
lean_dec(v_i_2144_);
v_res_2148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11_spec__16(v___x_2142_, v_sz_boxed_2146_, v_i_boxed_2147_, v_bs_2145_);
lean_dec_ref(v___x_2142_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4(lean_object* v___x_2149_, lean_object* v_t_2150_){
_start:
{
lean_object* v_root_2151_; lean_object* v_tail_2152_; lean_object* v_size_2153_; size_t v_shift_2154_; lean_object* v_tailOff_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2168_; 
v_root_2151_ = lean_ctor_get(v_t_2150_, 0);
v_tail_2152_ = lean_ctor_get(v_t_2150_, 1);
v_size_2153_ = lean_ctor_get(v_t_2150_, 2);
v_shift_2154_ = lean_ctor_get_usize(v_t_2150_, 4);
v_tailOff_2155_ = lean_ctor_get(v_t_2150_, 3);
v_isSharedCheck_2168_ = !lean_is_exclusive(v_t_2150_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2157_ = v_t_2150_;
v_isShared_2158_ = v_isSharedCheck_2168_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_tailOff_2155_);
lean_inc(v_size_2153_);
lean_inc(v_tail_2152_);
lean_inc(v_root_2151_);
lean_dec(v_t_2150_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2168_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2159_; size_t v_sz_2160_; size_t v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2166_; 
v___x_2159_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__11(v___x_2149_, v_root_2151_);
v_sz_2160_ = lean_array_size(v_tail_2152_);
v___x_2161_ = ((size_t)0ULL);
v___x_2162_ = l_unsafeCast___redArg(v_tail_2152_);
lean_dec_ref(v_tail_2152_);
v___x_2163_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4_spec__12(v___x_2149_, v_sz_2160_, v___x_2161_, v___x_2162_);
v___x_2164_ = l_unsafeCast___redArg(v___x_2163_);
lean_dec_ref(v___x_2163_);
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 1, v___x_2164_);
lean_ctor_set(v___x_2157_, 0, v___x_2159_);
v___x_2166_ = v___x_2157_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2159_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v___x_2164_);
lean_ctor_set(v_reuseFailAlloc_2167_, 2, v_size_2153_);
lean_ctor_set(v_reuseFailAlloc_2167_, 3, v_tailOff_2155_);
lean_ctor_set_usize(v_reuseFailAlloc_2167_, 4, v_shift_2154_);
v___x_2166_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
return v___x_2166_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4___boxed(lean_object* v___x_2169_, lean_object* v_t_2170_){
_start:
{
lean_object* v_res_2171_; 
v_res_2171_ = l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4(v___x_2169_, v_t_2170_);
lean_dec_ref(v___x_2169_);
return v_res_2171_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2172_ = lean_unsigned_to_nat(32u);
v___x_2173_ = lean_mk_empty_array_with_capacity(v___x_2172_);
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
return v___x_2174_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__1(void){
_start:
{
size_t v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2175_ = ((size_t)5ULL);
v___x_2176_ = lean_unsigned_to_nat(0u);
v___x_2177_ = lean_unsigned_to_nat(32u);
v___x_2178_ = lean_mk_empty_array_with_capacity(v___x_2177_);
v___x_2179_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__0);
v___x_2180_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2180_, 0, v___x_2179_);
lean_ctor_set(v___x_2180_, 1, v___x_2178_);
lean_ctor_set(v___x_2180_, 2, v___x_2176_);
lean_ctor_set(v___x_2180_, 3, v___x_2176_);
lean_ctor_set_usize(v___x_2180_, 4, v___x_2175_);
return v___x_2180_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__2(void){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2181_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__1);
v___x_2182_ = l_unsafeCast___redArg(v___x_2181_);
return v___x_2182_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9(size_t v_sz_2183_, size_t v_i_2184_, lean_object* v_bs_2185_){
_start:
{
uint8_t v___x_2186_; 
v___x_2186_ = lean_usize_dec_lt(v_i_2184_, v_sz_2183_);
if (v___x_2186_ == 0)
{
lean_object* v___x_2187_; 
v___x_2187_ = l_unsafeCast___redArg(v_bs_2185_);
lean_dec_ref(v_bs_2185_);
return v___x_2187_;
}
else
{
lean_object* v___x_2188_; lean_object* v_bs_x27_2189_; size_t v___x_2190_; size_t v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2188_ = lean_unsigned_to_nat(0u);
v_bs_x27_2189_ = lean_array_uset(v_bs_2185_, v_i_2184_, v___x_2188_);
v___x_2190_ = ((size_t)1ULL);
v___x_2191_ = lean_usize_add(v_i_2184_, v___x_2190_);
v___x_2192_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___closed__2);
v___x_2193_ = lean_array_uset(v_bs_x27_2189_, v_i_2184_, v___x_2192_);
v_i_2184_ = v___x_2191_;
v_bs_2185_ = v___x_2193_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9___boxed(lean_object* v_sz_2195_, lean_object* v_i_2196_, lean_object* v_bs_2197_){
_start:
{
size_t v_sz_boxed_2198_; size_t v_i_boxed_2199_; lean_object* v_res_2200_; 
v_sz_boxed_2198_ = lean_unbox_usize(v_sz_2195_);
lean_dec(v_sz_2195_);
v_i_boxed_2199_ = lean_unbox_usize(v_i_2196_);
lean_dec(v_i_2196_);
v_res_2200_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9(v_sz_boxed_2198_, v_i_boxed_2199_, v_bs_2197_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__8_spec__12(size_t v_sz_2201_, size_t v_i_2202_, lean_object* v_bs_2203_){
_start:
{
uint8_t v___x_2204_; 
v___x_2204_ = lean_usize_dec_lt(v_i_2202_, v_sz_2201_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; 
v___x_2205_ = l_unsafeCast___redArg(v_bs_2203_);
lean_dec_ref(v_bs_2203_);
return v___x_2205_;
}
else
{
lean_object* v_v_2206_; lean_object* v___x_2207_; lean_object* v_bs_x27_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; size_t v___x_2211_; size_t v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v_v_2206_ = lean_array_uget(v_bs_2203_, v_i_2202_);
v___x_2207_ = lean_unsigned_to_nat(0u);
v_bs_x27_2208_ = lean_array_uset(v_bs_2203_, v_i_2202_, v___x_2207_);
v___x_2209_ = l_unsafeCast___redArg(v_v_2206_);
lean_dec(v_v_2206_);
v___x_2210_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__8(v___x_2209_);
v___x_2211_ = ((size_t)1ULL);
v___x_2212_ = lean_usize_add(v_i_2202_, v___x_2211_);
v___x_2213_ = l_unsafeCast___redArg(v___x_2210_);
lean_dec_ref(v___x_2210_);
v___x_2214_ = lean_array_uset(v_bs_x27_2208_, v_i_2202_, v___x_2213_);
v_i_2202_ = v___x_2212_;
v_bs_2203_ = v___x_2214_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__8(lean_object* v_x_2216_){
_start:
{
if (lean_obj_tag(v_x_2216_) == 0)
{
lean_object* v_cs_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2229_; 
v_cs_2217_ = lean_ctor_get(v_x_2216_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v_x_2216_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2219_ = v_x_2216_;
v_isShared_2220_ = v_isSharedCheck_2229_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_cs_2217_);
lean_dec(v_x_2216_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2229_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
size_t v_sz_2221_; size_t v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2227_; 
v_sz_2221_ = lean_array_size(v_cs_2217_);
v___x_2222_ = ((size_t)0ULL);
v___x_2223_ = l_unsafeCast___redArg(v_cs_2217_);
lean_dec_ref(v_cs_2217_);
v___x_2224_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__8_spec__12(v_sz_2221_, v___x_2222_, v___x_2223_);
v___x_2225_ = l_unsafeCast___redArg(v___x_2224_);
lean_dec_ref(v___x_2224_);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v___x_2225_);
v___x_2227_ = v___x_2219_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v___x_2225_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
else
{
lean_object* v_vs_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2242_; 
v_vs_2230_ = lean_ctor_get(v_x_2216_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v_x_2216_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2232_ = v_x_2216_;
v_isShared_2233_ = v_isSharedCheck_2242_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_vs_2230_);
lean_dec(v_x_2216_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2242_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
size_t v_sz_2234_; size_t v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2240_; 
v_sz_2234_ = lean_array_size(v_vs_2230_);
v___x_2235_ = ((size_t)0ULL);
v___x_2236_ = l_unsafeCast___redArg(v_vs_2230_);
lean_dec_ref(v_vs_2230_);
v___x_2237_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9(v_sz_2234_, v___x_2235_, v___x_2236_);
v___x_2238_ = l_unsafeCast___redArg(v___x_2237_);
lean_dec_ref(v___x_2237_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2238_);
v___x_2240_ = v___x_2232_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v___x_2238_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__8_spec__12___boxed(lean_object* v_sz_2243_, lean_object* v_i_2244_, lean_object* v_bs_2245_){
_start:
{
size_t v_sz_boxed_2246_; size_t v_i_boxed_2247_; lean_object* v_res_2248_; 
v_sz_boxed_2246_ = lean_unbox_usize(v_sz_2243_);
lean_dec(v_sz_2243_);
v_i_boxed_2247_ = lean_unbox_usize(v_i_2244_);
lean_dec(v_i_2244_);
v_res_2248_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__8_spec__12(v_sz_boxed_2246_, v_i_boxed_2247_, v_bs_2245_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3(lean_object* v_t_2249_){
_start:
{
lean_object* v_root_2250_; lean_object* v_tail_2251_; lean_object* v_size_2252_; size_t v_shift_2253_; lean_object* v_tailOff_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2267_; 
v_root_2250_ = lean_ctor_get(v_t_2249_, 0);
v_tail_2251_ = lean_ctor_get(v_t_2249_, 1);
v_size_2252_ = lean_ctor_get(v_t_2249_, 2);
v_shift_2253_ = lean_ctor_get_usize(v_t_2249_, 4);
v_tailOff_2254_ = lean_ctor_get(v_t_2249_, 3);
v_isSharedCheck_2267_ = !lean_is_exclusive(v_t_2249_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2256_ = v_t_2249_;
v_isShared_2257_ = v_isSharedCheck_2267_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_tailOff_2254_);
lean_inc(v_size_2252_);
lean_inc(v_tail_2251_);
lean_inc(v_root_2250_);
lean_dec(v_t_2249_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2267_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2258_; size_t v_sz_2259_; size_t v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2265_; 
v___x_2258_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__8(v_root_2250_);
v_sz_2259_ = lean_array_size(v_tail_2251_);
v___x_2260_ = ((size_t)0ULL);
v___x_2261_ = l_unsafeCast___redArg(v_tail_2251_);
lean_dec_ref(v_tail_2251_);
v___x_2262_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3_spec__9(v_sz_2259_, v___x_2260_, v___x_2261_);
v___x_2263_ = l_unsafeCast___redArg(v___x_2262_);
lean_dec_ref(v___x_2262_);
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 1, v___x_2263_);
lean_ctor_set(v___x_2256_, 0, v___x_2258_);
v___x_2265_ = v___x_2256_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v___x_2258_);
lean_ctor_set(v_reuseFailAlloc_2266_, 1, v___x_2263_);
lean_ctor_set(v_reuseFailAlloc_2266_, 2, v_size_2252_);
lean_ctor_set(v_reuseFailAlloc_2266_, 3, v_tailOff_2254_);
lean_ctor_set_usize(v_reuseFailAlloc_2266_, 4, v_shift_2253_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2268_ = lean_unsigned_to_nat(32u);
v___x_2269_ = lean_mk_empty_array_with_capacity(v___x_2268_);
v___x_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
return v___x_2270_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__1(void){
_start:
{
size_t v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2271_ = ((size_t)5ULL);
v___x_2272_ = lean_unsigned_to_nat(0u);
v___x_2273_ = lean_unsigned_to_nat(32u);
v___x_2274_ = lean_mk_empty_array_with_capacity(v___x_2273_);
v___x_2275_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__0);
v___x_2276_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
lean_ctor_set(v___x_2276_, 1, v___x_2274_);
lean_ctor_set(v___x_2276_, 2, v___x_2272_);
lean_ctor_set(v___x_2276_, 3, v___x_2272_);
lean_ctor_set_usize(v___x_2276_, 4, v___x_2271_);
return v___x_2276_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__2(void){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2277_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__1);
v___x_2278_ = l_unsafeCast___redArg(v___x_2277_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6(size_t v_sz_2279_, size_t v_i_2280_, lean_object* v_bs_2281_){
_start:
{
uint8_t v___x_2282_; 
v___x_2282_ = lean_usize_dec_lt(v_i_2280_, v_sz_2279_);
if (v___x_2282_ == 0)
{
lean_object* v___x_2283_; 
v___x_2283_ = l_unsafeCast___redArg(v_bs_2281_);
lean_dec_ref(v_bs_2281_);
return v___x_2283_;
}
else
{
lean_object* v___x_2284_; lean_object* v_bs_x27_2285_; size_t v___x_2286_; size_t v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2284_ = lean_unsigned_to_nat(0u);
v_bs_x27_2285_ = lean_array_uset(v_bs_2281_, v_i_2280_, v___x_2284_);
v___x_2286_ = ((size_t)1ULL);
v___x_2287_ = lean_usize_add(v_i_2280_, v___x_2286_);
v___x_2288_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___closed__2);
v___x_2289_ = lean_array_uset(v_bs_x27_2285_, v_i_2280_, v___x_2288_);
v_i_2280_ = v___x_2287_;
v_bs_2281_ = v___x_2289_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6___boxed(lean_object* v_sz_2291_, lean_object* v_i_2292_, lean_object* v_bs_2293_){
_start:
{
size_t v_sz_boxed_2294_; size_t v_i_boxed_2295_; lean_object* v_res_2296_; 
v_sz_boxed_2294_ = lean_unbox_usize(v_sz_2291_);
lean_dec(v_sz_2291_);
v_i_boxed_2295_ = lean_unbox_usize(v_i_2292_);
lean_dec(v_i_2292_);
v_res_2296_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6(v_sz_boxed_2294_, v_i_boxed_2295_, v_bs_2293_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__5_spec__8(size_t v_sz_2297_, size_t v_i_2298_, lean_object* v_bs_2299_){
_start:
{
uint8_t v___x_2300_; 
v___x_2300_ = lean_usize_dec_lt(v_i_2298_, v_sz_2297_);
if (v___x_2300_ == 0)
{
lean_object* v___x_2301_; 
v___x_2301_ = l_unsafeCast___redArg(v_bs_2299_);
lean_dec_ref(v_bs_2299_);
return v___x_2301_;
}
else
{
lean_object* v_v_2302_; lean_object* v___x_2303_; lean_object* v_bs_x27_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; size_t v___x_2307_; size_t v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v_v_2302_ = lean_array_uget(v_bs_2299_, v_i_2298_);
v___x_2303_ = lean_unsigned_to_nat(0u);
v_bs_x27_2304_ = lean_array_uset(v_bs_2299_, v_i_2298_, v___x_2303_);
v___x_2305_ = l_unsafeCast___redArg(v_v_2302_);
lean_dec(v_v_2302_);
v___x_2306_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__5(v___x_2305_);
v___x_2307_ = ((size_t)1ULL);
v___x_2308_ = lean_usize_add(v_i_2298_, v___x_2307_);
v___x_2309_ = l_unsafeCast___redArg(v___x_2306_);
lean_dec_ref(v___x_2306_);
v___x_2310_ = lean_array_uset(v_bs_x27_2304_, v_i_2298_, v___x_2309_);
v_i_2298_ = v___x_2308_;
v_bs_2299_ = v___x_2310_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__5(lean_object* v_x_2312_){
_start:
{
if (lean_obj_tag(v_x_2312_) == 0)
{
lean_object* v_cs_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2325_; 
v_cs_2313_ = lean_ctor_get(v_x_2312_, 0);
v_isSharedCheck_2325_ = !lean_is_exclusive(v_x_2312_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2315_ = v_x_2312_;
v_isShared_2316_ = v_isSharedCheck_2325_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_cs_2313_);
lean_dec(v_x_2312_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2325_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
size_t v_sz_2317_; size_t v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2323_; 
v_sz_2317_ = lean_array_size(v_cs_2313_);
v___x_2318_ = ((size_t)0ULL);
v___x_2319_ = l_unsafeCast___redArg(v_cs_2313_);
lean_dec_ref(v_cs_2313_);
v___x_2320_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__5_spec__8(v_sz_2317_, v___x_2318_, v___x_2319_);
v___x_2321_ = l_unsafeCast___redArg(v___x_2320_);
lean_dec_ref(v___x_2320_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 0, v___x_2321_);
v___x_2323_ = v___x_2315_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v___x_2321_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
else
{
lean_object* v_vs_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2338_; 
v_vs_2326_ = lean_ctor_get(v_x_2312_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_x_2312_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2328_ = v_x_2312_;
v_isShared_2329_ = v_isSharedCheck_2338_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_vs_2326_);
lean_dec(v_x_2312_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2338_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
size_t v_sz_2330_; size_t v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2336_; 
v_sz_2330_ = lean_array_size(v_vs_2326_);
v___x_2331_ = ((size_t)0ULL);
v___x_2332_ = l_unsafeCast___redArg(v_vs_2326_);
lean_dec_ref(v_vs_2326_);
v___x_2333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6(v_sz_2330_, v___x_2331_, v___x_2332_);
v___x_2334_ = l_unsafeCast___redArg(v___x_2333_);
lean_dec_ref(v___x_2333_);
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 0, v___x_2334_);
v___x_2336_ = v___x_2328_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v___x_2334_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__5_spec__8___boxed(lean_object* v_sz_2339_, lean_object* v_i_2340_, lean_object* v_bs_2341_){
_start:
{
size_t v_sz_boxed_2342_; size_t v_i_boxed_2343_; lean_object* v_res_2344_; 
v_sz_boxed_2342_ = lean_unbox_usize(v_sz_2339_);
lean_dec(v_sz_2339_);
v_i_boxed_2343_ = lean_unbox_usize(v_i_2340_);
lean_dec(v_i_2340_);
v_res_2344_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__5_spec__8(v_sz_boxed_2342_, v_i_boxed_2343_, v_bs_2341_);
return v_res_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2(lean_object* v_t_2345_){
_start:
{
lean_object* v_root_2346_; lean_object* v_tail_2347_; lean_object* v_size_2348_; size_t v_shift_2349_; lean_object* v_tailOff_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2363_; 
v_root_2346_ = lean_ctor_get(v_t_2345_, 0);
v_tail_2347_ = lean_ctor_get(v_t_2345_, 1);
v_size_2348_ = lean_ctor_get(v_t_2345_, 2);
v_shift_2349_ = lean_ctor_get_usize(v_t_2345_, 4);
v_tailOff_2350_ = lean_ctor_get(v_t_2345_, 3);
v_isSharedCheck_2363_ = !lean_is_exclusive(v_t_2345_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2352_ = v_t_2345_;
v_isShared_2353_ = v_isSharedCheck_2363_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_tailOff_2350_);
lean_inc(v_size_2348_);
lean_inc(v_tail_2347_);
lean_inc(v_root_2346_);
lean_dec(v_t_2345_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2363_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2354_; size_t v_sz_2355_; size_t v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2361_; 
v___x_2354_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__5(v_root_2346_);
v_sz_2355_ = lean_array_size(v_tail_2347_);
v___x_2356_ = ((size_t)0ULL);
v___x_2357_ = l_unsafeCast___redArg(v_tail_2347_);
lean_dec_ref(v_tail_2347_);
v___x_2358_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2_spec__6(v_sz_2355_, v___x_2356_, v___x_2357_);
v___x_2359_ = l_unsafeCast___redArg(v___x_2358_);
lean_dec_ref(v___x_2358_);
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 1, v___x_2359_);
lean_ctor_set(v___x_2352_, 0, v___x_2354_);
v___x_2361_ = v___x_2352_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v___x_2354_);
lean_ctor_set(v_reuseFailAlloc_2362_, 1, v___x_2359_);
lean_ctor_set(v_reuseFailAlloc_2362_, 2, v_size_2348_);
lean_ctor_set(v_reuseFailAlloc_2362_, 3, v_tailOff_2350_);
lean_ctor_set_usize(v_reuseFailAlloc_2362_, 4, v_shift_2349_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16___closed__0(void){
_start:
{
lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2364_ = lean_box(1);
v___x_2365_ = l_unsafeCast___redArg(v___x_2364_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16(size_t v_sz_2366_, size_t v_i_2367_, lean_object* v_bs_2368_){
_start:
{
uint8_t v___x_2369_; 
v___x_2369_ = lean_usize_dec_lt(v_i_2367_, v_sz_2366_);
if (v___x_2369_ == 0)
{
lean_object* v___x_2370_; 
v___x_2370_ = l_unsafeCast___redArg(v_bs_2368_);
lean_dec_ref(v_bs_2368_);
return v___x_2370_;
}
else
{
lean_object* v___x_2371_; lean_object* v_bs_x27_2372_; size_t v___x_2373_; size_t v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2371_ = lean_unsigned_to_nat(0u);
v_bs_x27_2372_ = lean_array_uset(v_bs_2368_, v_i_2367_, v___x_2371_);
v___x_2373_ = ((size_t)1ULL);
v___x_2374_ = lean_usize_add(v_i_2367_, v___x_2373_);
v___x_2375_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16___closed__0);
v___x_2376_ = lean_array_uset(v_bs_x27_2372_, v_i_2367_, v___x_2375_);
v_i_2367_ = v___x_2374_;
v_bs_2368_ = v___x_2376_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16___boxed(lean_object* v_sz_2378_, lean_object* v_i_2379_, lean_object* v_bs_2380_){
_start:
{
size_t v_sz_boxed_2381_; size_t v_i_boxed_2382_; lean_object* v_res_2383_; 
v_sz_boxed_2381_ = lean_unbox_usize(v_sz_2378_);
lean_dec(v_sz_2378_);
v_i_boxed_2382_ = lean_unbox_usize(v_i_2379_);
lean_dec(v_i_2379_);
v_res_2383_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16(v_sz_boxed_2381_, v_i_boxed_2382_, v_bs_2380_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__15_spec__21(size_t v_sz_2384_, size_t v_i_2385_, lean_object* v_bs_2386_){
_start:
{
uint8_t v___x_2387_; 
v___x_2387_ = lean_usize_dec_lt(v_i_2385_, v_sz_2384_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; 
v___x_2388_ = l_unsafeCast___redArg(v_bs_2386_);
lean_dec_ref(v_bs_2386_);
return v___x_2388_;
}
else
{
lean_object* v_v_2389_; lean_object* v___x_2390_; lean_object* v_bs_x27_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; size_t v___x_2394_; size_t v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_v_2389_ = lean_array_uget(v_bs_2386_, v_i_2385_);
v___x_2390_ = lean_unsigned_to_nat(0u);
v_bs_x27_2391_ = lean_array_uset(v_bs_2386_, v_i_2385_, v___x_2390_);
v___x_2392_ = l_unsafeCast___redArg(v_v_2389_);
lean_dec(v_v_2389_);
v___x_2393_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__15(v___x_2392_);
v___x_2394_ = ((size_t)1ULL);
v___x_2395_ = lean_usize_add(v_i_2385_, v___x_2394_);
v___x_2396_ = l_unsafeCast___redArg(v___x_2393_);
lean_dec_ref(v___x_2393_);
v___x_2397_ = lean_array_uset(v_bs_x27_2391_, v_i_2385_, v___x_2396_);
v_i_2385_ = v___x_2395_;
v_bs_2386_ = v___x_2397_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__15(lean_object* v_x_2399_){
_start:
{
if (lean_obj_tag(v_x_2399_) == 0)
{
lean_object* v_cs_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2412_; 
v_cs_2400_ = lean_ctor_get(v_x_2399_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v_x_2399_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2402_ = v_x_2399_;
v_isShared_2403_ = v_isSharedCheck_2412_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_cs_2400_);
lean_dec(v_x_2399_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2412_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
size_t v_sz_2404_; size_t v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2410_; 
v_sz_2404_ = lean_array_size(v_cs_2400_);
v___x_2405_ = ((size_t)0ULL);
v___x_2406_ = l_unsafeCast___redArg(v_cs_2400_);
lean_dec_ref(v_cs_2400_);
v___x_2407_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__15_spec__21(v_sz_2404_, v___x_2405_, v___x_2406_);
v___x_2408_ = l_unsafeCast___redArg(v___x_2407_);
lean_dec_ref(v___x_2407_);
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v___x_2408_);
v___x_2410_ = v___x_2402_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v___x_2408_);
v___x_2410_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
return v___x_2410_;
}
}
}
else
{
lean_object* v_vs_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2425_; 
v_vs_2413_ = lean_ctor_get(v_x_2399_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v_x_2399_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2415_ = v_x_2399_;
v_isShared_2416_ = v_isSharedCheck_2425_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_vs_2413_);
lean_dec(v_x_2399_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2425_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
size_t v_sz_2417_; size_t v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2423_; 
v_sz_2417_ = lean_array_size(v_vs_2413_);
v___x_2418_ = ((size_t)0ULL);
v___x_2419_ = l_unsafeCast___redArg(v_vs_2413_);
lean_dec_ref(v_vs_2413_);
v___x_2420_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16(v_sz_2417_, v___x_2418_, v___x_2419_);
v___x_2421_ = l_unsafeCast___redArg(v___x_2420_);
lean_dec_ref(v___x_2420_);
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 0, v___x_2421_);
v___x_2423_ = v___x_2415_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v___x_2421_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__15_spec__21___boxed(lean_object* v_sz_2426_, lean_object* v_i_2427_, lean_object* v_bs_2428_){
_start:
{
size_t v_sz_boxed_2429_; size_t v_i_boxed_2430_; lean_object* v_res_2431_; 
v_sz_boxed_2429_ = lean_unbox_usize(v_sz_2426_);
lean_dec(v_sz_2426_);
v_i_boxed_2430_ = lean_unbox_usize(v_i_2427_);
lean_dec(v_i_2427_);
v_res_2431_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__15_spec__21(v_sz_boxed_2429_, v_i_boxed_2430_, v_bs_2428_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6(lean_object* v_t_2432_){
_start:
{
lean_object* v_root_2433_; lean_object* v_tail_2434_; lean_object* v_size_2435_; size_t v_shift_2436_; lean_object* v_tailOff_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2450_; 
v_root_2433_ = lean_ctor_get(v_t_2432_, 0);
v_tail_2434_ = lean_ctor_get(v_t_2432_, 1);
v_size_2435_ = lean_ctor_get(v_t_2432_, 2);
v_shift_2436_ = lean_ctor_get_usize(v_t_2432_, 4);
v_tailOff_2437_ = lean_ctor_get(v_t_2432_, 3);
v_isSharedCheck_2450_ = !lean_is_exclusive(v_t_2432_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2439_ = v_t_2432_;
v_isShared_2440_ = v_isSharedCheck_2450_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_tailOff_2437_);
lean_inc(v_size_2435_);
lean_inc(v_tail_2434_);
lean_inc(v_root_2433_);
lean_dec(v_t_2432_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2450_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2441_; size_t v_sz_2442_; size_t v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2448_; 
v___x_2441_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__15(v_root_2433_);
v_sz_2442_ = lean_array_size(v_tail_2434_);
v___x_2443_ = ((size_t)0ULL);
v___x_2444_ = l_unsafeCast___redArg(v_tail_2434_);
lean_dec_ref(v_tail_2434_);
v___x_2445_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6_spec__16(v_sz_2442_, v___x_2443_, v___x_2444_);
v___x_2446_ = l_unsafeCast___redArg(v___x_2445_);
lean_dec_ref(v___x_2445_);
if (v_isShared_2440_ == 0)
{
lean_ctor_set(v___x_2439_, 1, v___x_2446_);
lean_ctor_set(v___x_2439_, 0, v___x_2441_);
v___x_2448_ = v___x_2439_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v___x_2441_);
lean_ctor_set(v_reuseFailAlloc_2449_, 1, v___x_2446_);
lean_ctor_set(v_reuseFailAlloc_2449_, 2, v_size_2435_);
lean_ctor_set(v_reuseFailAlloc_2449_, 3, v_tailOff_2437_);
lean_ctor_set_usize(v_reuseFailAlloc_2449_, 4, v_shift_2436_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__5(lean_object* v___x_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_){
_start:
{
if (lean_obj_tag(v_a_2452_) == 0)
{
lean_object* v___x_2454_; 
v___x_2454_ = l_List_reverse___redArg(v_a_2453_);
return v___x_2454_;
}
else
{
lean_object* v_head_2455_; lean_object* v_tail_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2466_; 
v_head_2455_ = lean_ctor_get(v_a_2452_, 0);
v_tail_2456_ = lean_ctor_get(v_a_2452_, 1);
v_isSharedCheck_2466_ = !lean_is_exclusive(v_a_2452_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2458_ = v_a_2452_;
v_isShared_2459_ = v_isSharedCheck_2466_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_tail_2456_);
lean_inc(v_head_2455_);
lean_dec(v_a_2452_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2466_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2463_; 
v___x_2460_ = lean_unsigned_to_nat(0u);
v___x_2461_ = lean_array_get_borrowed(v___x_2460_, v___x_2451_, v_head_2455_);
lean_dec(v_head_2455_);
lean_inc(v___x_2461_);
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 1, v_a_2453_);
lean_ctor_set(v___x_2458_, 0, v___x_2461_);
v___x_2463_ = v___x_2458_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2461_);
lean_ctor_set(v_reuseFailAlloc_2465_, 1, v_a_2453_);
v___x_2463_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
v_a_2452_ = v_tail_2456_;
v_a_2453_ = v___x_2463_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__5___boxed(lean_object* v___x_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__5(v___x_2467_, v_a_2468_, v_a_2469_);
lean_dec_ref(v___x_2467_);
return v_res_2470_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; 
v___x_2471_ = lean_box(0);
v___x_2472_ = l_unsafeCast___redArg(v___x_2471_);
return v___x_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3(size_t v_sz_2473_, size_t v_i_2474_, lean_object* v_bs_2475_){
_start:
{
uint8_t v___x_2476_; 
v___x_2476_ = lean_usize_dec_lt(v_i_2474_, v_sz_2473_);
if (v___x_2476_ == 0)
{
lean_object* v___x_2477_; 
v___x_2477_ = l_unsafeCast___redArg(v_bs_2475_);
lean_dec_ref(v_bs_2475_);
return v___x_2477_;
}
else
{
lean_object* v___x_2478_; lean_object* v_bs_x27_2479_; size_t v___x_2480_; size_t v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2478_ = lean_unsigned_to_nat(0u);
v_bs_x27_2479_ = lean_array_uset(v_bs_2475_, v_i_2474_, v___x_2478_);
v___x_2480_ = ((size_t)1ULL);
v___x_2481_ = lean_usize_add(v_i_2474_, v___x_2480_);
v___x_2482_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3___closed__0);
v___x_2483_ = lean_array_uset(v_bs_x27_2479_, v_i_2474_, v___x_2482_);
v_i_2474_ = v___x_2481_;
v_bs_2475_ = v___x_2483_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3___boxed(lean_object* v_sz_2485_, lean_object* v_i_2486_, lean_object* v_bs_2487_){
_start:
{
size_t v_sz_boxed_2488_; size_t v_i_boxed_2489_; lean_object* v_res_2490_; 
v_sz_boxed_2488_ = lean_unbox_usize(v_sz_2485_);
lean_dec(v_sz_2485_);
v_i_boxed_2489_ = lean_unbox_usize(v_i_2486_);
lean_dec(v_i_2486_);
v_res_2490_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3(v_sz_boxed_2488_, v_i_boxed_2489_, v_bs_2487_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__2_spec__4(size_t v_sz_2491_, size_t v_i_2492_, lean_object* v_bs_2493_){
_start:
{
uint8_t v___x_2494_; 
v___x_2494_ = lean_usize_dec_lt(v_i_2492_, v_sz_2491_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; 
v___x_2495_ = l_unsafeCast___redArg(v_bs_2493_);
lean_dec_ref(v_bs_2493_);
return v___x_2495_;
}
else
{
lean_object* v_v_2496_; lean_object* v___x_2497_; lean_object* v_bs_x27_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; size_t v___x_2501_; size_t v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
v_v_2496_ = lean_array_uget(v_bs_2493_, v_i_2492_);
v___x_2497_ = lean_unsigned_to_nat(0u);
v_bs_x27_2498_ = lean_array_uset(v_bs_2493_, v_i_2492_, v___x_2497_);
v___x_2499_ = l_unsafeCast___redArg(v_v_2496_);
lean_dec(v_v_2496_);
v___x_2500_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__2(v___x_2499_);
v___x_2501_ = ((size_t)1ULL);
v___x_2502_ = lean_usize_add(v_i_2492_, v___x_2501_);
v___x_2503_ = l_unsafeCast___redArg(v___x_2500_);
lean_dec_ref(v___x_2500_);
v___x_2504_ = lean_array_uset(v_bs_x27_2498_, v_i_2492_, v___x_2503_);
v_i_2492_ = v___x_2502_;
v_bs_2493_ = v___x_2504_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__2(lean_object* v_x_2506_){
_start:
{
if (lean_obj_tag(v_x_2506_) == 0)
{
lean_object* v_cs_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2519_; 
v_cs_2507_ = lean_ctor_get(v_x_2506_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v_x_2506_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2509_ = v_x_2506_;
v_isShared_2510_ = v_isSharedCheck_2519_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_cs_2507_);
lean_dec(v_x_2506_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2519_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
size_t v_sz_2511_; size_t v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2517_; 
v_sz_2511_ = lean_array_size(v_cs_2507_);
v___x_2512_ = ((size_t)0ULL);
v___x_2513_ = l_unsafeCast___redArg(v_cs_2507_);
lean_dec_ref(v_cs_2507_);
v___x_2514_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__2_spec__4(v_sz_2511_, v___x_2512_, v___x_2513_);
v___x_2515_ = l_unsafeCast___redArg(v___x_2514_);
lean_dec_ref(v___x_2514_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 0, v___x_2515_);
v___x_2517_ = v___x_2509_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v___x_2515_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
else
{
lean_object* v_vs_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2532_; 
v_vs_2520_ = lean_ctor_get(v_x_2506_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v_x_2506_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2522_ = v_x_2506_;
v_isShared_2523_ = v_isSharedCheck_2532_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_vs_2520_);
lean_dec(v_x_2506_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2532_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
size_t v_sz_2524_; size_t v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2530_; 
v_sz_2524_ = lean_array_size(v_vs_2520_);
v___x_2525_ = ((size_t)0ULL);
v___x_2526_ = l_unsafeCast___redArg(v_vs_2520_);
lean_dec_ref(v_vs_2520_);
v___x_2527_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3(v_sz_2524_, v___x_2525_, v___x_2526_);
v___x_2528_ = l_unsafeCast___redArg(v___x_2527_);
lean_dec_ref(v___x_2527_);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v___x_2528_);
v___x_2530_ = v___x_2522_;
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
return v___x_2530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__2_spec__4___boxed(lean_object* v_sz_2533_, lean_object* v_i_2534_, lean_object* v_bs_2535_){
_start:
{
size_t v_sz_boxed_2536_; size_t v_i_boxed_2537_; lean_object* v_res_2538_; 
v_sz_boxed_2536_ = lean_unbox_usize(v_sz_2533_);
lean_dec(v_sz_2533_);
v_i_boxed_2537_ = lean_unbox_usize(v_i_2534_);
lean_dec(v_i_2534_);
v_res_2538_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__2_spec__4(v_sz_boxed_2536_, v_i_boxed_2537_, v_bs_2535_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1(lean_object* v_t_2539_){
_start:
{
lean_object* v_root_2540_; lean_object* v_tail_2541_; lean_object* v_size_2542_; size_t v_shift_2543_; lean_object* v_tailOff_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2557_; 
v_root_2540_ = lean_ctor_get(v_t_2539_, 0);
v_tail_2541_ = lean_ctor_get(v_t_2539_, 1);
v_size_2542_ = lean_ctor_get(v_t_2539_, 2);
v_shift_2543_ = lean_ctor_get_usize(v_t_2539_, 4);
v_tailOff_2544_ = lean_ctor_get(v_t_2539_, 3);
v_isSharedCheck_2557_ = !lean_is_exclusive(v_t_2539_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2546_ = v_t_2539_;
v_isShared_2547_ = v_isSharedCheck_2557_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_tailOff_2544_);
lean_inc(v_size_2542_);
lean_inc(v_tail_2541_);
lean_inc(v_root_2540_);
lean_dec(v_t_2539_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2557_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2548_; size_t v_sz_2549_; size_t v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2555_; 
v___x_2548_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__2(v_root_2540_);
v_sz_2549_ = lean_array_size(v_tail_2541_);
v___x_2550_ = ((size_t)0ULL);
v___x_2551_ = l_unsafeCast___redArg(v_tail_2541_);
lean_dec_ref(v_tail_2541_);
v___x_2552_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1_spec__3(v_sz_2549_, v___x_2550_, v___x_2551_);
v___x_2553_ = l_unsafeCast___redArg(v___x_2552_);
lean_dec_ref(v___x_2552_);
if (v_isShared_2547_ == 0)
{
lean_ctor_set(v___x_2546_, 1, v___x_2553_);
lean_ctor_set(v___x_2546_, 0, v___x_2548_);
v___x_2555_ = v___x_2546_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v___x_2548_);
lean_ctor_set(v_reuseFailAlloc_2556_, 1, v___x_2553_);
lean_ctor_set(v_reuseFailAlloc_2556_, 2, v_size_2542_);
lean_ctor_set(v_reuseFailAlloc_2556_, 3, v_tailOff_2544_);
lean_ctor_set_usize(v_reuseFailAlloc_2556_, 4, v_shift_2543_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__1(lean_object* v___x_2558_, lean_object* v_a_2559_, lean_object* v___f_2560_, lean_object* v___x_2561_, lean_object* v___x_2562_, lean_object* v_s_2563_){
_start:
{
lean_object* v_vars_2564_; lean_object* v_varMap_2565_; lean_object* v_natToIntMap_2566_; lean_object* v_natDef_2567_; lean_object* v_dvds_2568_; lean_object* v_lowers_2569_; lean_object* v_uppers_2570_; lean_object* v_diseqs_2571_; lean_object* v_elimEqs_2572_; lean_object* v_elimStack_2573_; lean_object* v_occurs_2574_; lean_object* v_assignment_2575_; lean_object* v_nextCnstrId_2576_; uint8_t v_caseSplits_2577_; lean_object* v_steps_2578_; lean_object* v_conflict_x3f_2579_; lean_object* v_divMod_2580_; uint8_t v_usedCommRing_2581_; lean_object* v_nonlinearOccs_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2602_; 
v_vars_2564_ = lean_ctor_get(v_s_2563_, 0);
v_varMap_2565_ = lean_ctor_get(v_s_2563_, 1);
v_natToIntMap_2566_ = lean_ctor_get(v_s_2563_, 4);
v_natDef_2567_ = lean_ctor_get(v_s_2563_, 5);
v_dvds_2568_ = lean_ctor_get(v_s_2563_, 6);
v_lowers_2569_ = lean_ctor_get(v_s_2563_, 7);
v_uppers_2570_ = lean_ctor_get(v_s_2563_, 8);
v_diseqs_2571_ = lean_ctor_get(v_s_2563_, 9);
v_elimEqs_2572_ = lean_ctor_get(v_s_2563_, 10);
v_elimStack_2573_ = lean_ctor_get(v_s_2563_, 11);
v_occurs_2574_ = lean_ctor_get(v_s_2563_, 12);
v_assignment_2575_ = lean_ctor_get(v_s_2563_, 13);
v_nextCnstrId_2576_ = lean_ctor_get(v_s_2563_, 14);
v_caseSplits_2577_ = lean_ctor_get_uint8(v_s_2563_, sizeof(void*)*20);
v_steps_2578_ = lean_ctor_get(v_s_2563_, 15);
v_conflict_x3f_2579_ = lean_ctor_get(v_s_2563_, 16);
v_divMod_2580_ = lean_ctor_get(v_s_2563_, 18);
v_usedCommRing_2581_ = lean_ctor_get_uint8(v_s_2563_, sizeof(void*)*20 + 1);
v_nonlinearOccs_2582_ = lean_ctor_get(v_s_2563_, 19);
v_isSharedCheck_2602_ = !lean_is_exclusive(v_s_2563_);
if (v_isSharedCheck_2602_ == 0)
{
lean_object* v_unused_2603_; lean_object* v_unused_2604_; lean_object* v_unused_2605_; 
v_unused_2603_ = lean_ctor_get(v_s_2563_, 17);
lean_dec(v_unused_2603_);
v_unused_2604_ = lean_ctor_get(v_s_2563_, 3);
lean_dec(v_unused_2604_);
v_unused_2605_ = lean_ctor_get(v_s_2563_, 2);
lean_dec(v_unused_2605_);
v___x_2584_ = v_s_2563_;
v_isShared_2585_ = v_isSharedCheck_2602_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_nonlinearOccs_2582_);
lean_inc(v_divMod_2580_);
lean_inc(v_conflict_x3f_2579_);
lean_inc(v_steps_2578_);
lean_inc(v_nextCnstrId_2576_);
lean_inc(v_assignment_2575_);
lean_inc(v_occurs_2574_);
lean_inc(v_elimStack_2573_);
lean_inc(v_elimEqs_2572_);
lean_inc(v_diseqs_2571_);
lean_inc(v_uppers_2570_);
lean_inc(v_lowers_2569_);
lean_inc(v_dvds_2568_);
lean_inc(v_natDef_2567_);
lean_inc(v_natToIntMap_2566_);
lean_inc(v_varMap_2565_);
lean_inc(v_vars_2564_);
lean_dec(v_s_2563_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2602_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2600_; 
lean_inc_ref(v_a_2559_);
lean_inc_ref(v_vars_2564_);
v___x_2586_ = l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg(v___x_2558_, v_vars_2564_, v_a_2559_);
lean_inc_ref(v___f_2560_);
lean_inc_ref(v_varMap_2565_);
v___x_2587_ = l_Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0___redArg(v_varMap_2565_, v___f_2560_);
v___x_2588_ = l_Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0___redArg(v_natDef_2567_, v___f_2560_);
v___x_2589_ = l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__1(v_dvds_2568_);
v___x_2590_ = l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2(v_lowers_2569_);
v___x_2591_ = l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__2(v_uppers_2570_);
v___x_2592_ = l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__3(v_diseqs_2571_);
v___x_2593_ = l_Lean_Meta_Grind_Arith_Cutsat_reorderVarMap___redArg(v___x_2561_, v_elimEqs_2572_, v_a_2559_);
v___x_2594_ = l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__4(v___x_2562_, v___x_2593_);
v___x_2595_ = lean_box(0);
v___x_2596_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__5(v___x_2562_, v_elimStack_2573_, v___x_2595_);
v___x_2597_ = l_Lean_PersistentArray_mapM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__6(v_occurs_2574_);
v___x_2598_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderDiseqSplits___closed__1);
if (v_isShared_2585_ == 0)
{
lean_ctor_set(v___x_2584_, 17, v___x_2598_);
lean_ctor_set(v___x_2584_, 12, v___x_2597_);
lean_ctor_set(v___x_2584_, 11, v___x_2596_);
lean_ctor_set(v___x_2584_, 10, v___x_2594_);
lean_ctor_set(v___x_2584_, 9, v___x_2592_);
lean_ctor_set(v___x_2584_, 8, v___x_2591_);
lean_ctor_set(v___x_2584_, 7, v___x_2590_);
lean_ctor_set(v___x_2584_, 6, v___x_2589_);
lean_ctor_set(v___x_2584_, 5, v___x_2588_);
lean_ctor_set(v___x_2584_, 3, v_varMap_2565_);
lean_ctor_set(v___x_2584_, 2, v_vars_2564_);
lean_ctor_set(v___x_2584_, 1, v___x_2587_);
lean_ctor_set(v___x_2584_, 0, v___x_2586_);
v___x_2600_ = v___x_2584_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v___x_2586_);
lean_ctor_set(v_reuseFailAlloc_2601_, 1, v___x_2587_);
lean_ctor_set(v_reuseFailAlloc_2601_, 2, v_vars_2564_);
lean_ctor_set(v_reuseFailAlloc_2601_, 3, v_varMap_2565_);
lean_ctor_set(v_reuseFailAlloc_2601_, 4, v_natToIntMap_2566_);
lean_ctor_set(v_reuseFailAlloc_2601_, 5, v___x_2588_);
lean_ctor_set(v_reuseFailAlloc_2601_, 6, v___x_2589_);
lean_ctor_set(v_reuseFailAlloc_2601_, 7, v___x_2590_);
lean_ctor_set(v_reuseFailAlloc_2601_, 8, v___x_2591_);
lean_ctor_set(v_reuseFailAlloc_2601_, 9, v___x_2592_);
lean_ctor_set(v_reuseFailAlloc_2601_, 10, v___x_2594_);
lean_ctor_set(v_reuseFailAlloc_2601_, 11, v___x_2596_);
lean_ctor_set(v_reuseFailAlloc_2601_, 12, v___x_2597_);
lean_ctor_set(v_reuseFailAlloc_2601_, 13, v_assignment_2575_);
lean_ctor_set(v_reuseFailAlloc_2601_, 14, v_nextCnstrId_2576_);
lean_ctor_set(v_reuseFailAlloc_2601_, 15, v_steps_2578_);
lean_ctor_set(v_reuseFailAlloc_2601_, 16, v_conflict_x3f_2579_);
lean_ctor_set(v_reuseFailAlloc_2601_, 17, v___x_2598_);
lean_ctor_set(v_reuseFailAlloc_2601_, 18, v_divMod_2580_);
lean_ctor_set(v_reuseFailAlloc_2601_, 19, v_nonlinearOccs_2582_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*20, v_caseSplits_2577_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*20 + 1, v_usedCommRing_2581_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__1___boxed(lean_object* v___x_2606_, lean_object* v_a_2607_, lean_object* v___f_2608_, lean_object* v___x_2609_, lean_object* v___x_2610_, lean_object* v_s_2611_){
_start:
{
lean_object* v_res_2612_; 
v_res_2612_ = l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__1(v___x_2606_, v_a_2607_, v___f_2608_, v___x_2609_, v___x_2610_, v_s_2611_);
lean_dec_ref(v___x_2610_);
return v_res_2612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__8(lean_object* v___x_2613_, size_t v_sz_2614_, size_t v_i_2615_, lean_object* v_bs_2616_){
_start:
{
uint8_t v___x_2617_; 
v___x_2617_ = lean_usize_dec_lt(v_i_2615_, v_sz_2614_);
if (v___x_2617_ == 0)
{
lean_object* v___x_2618_; 
v___x_2618_ = l_unsafeCast___redArg(v_bs_2616_);
lean_dec_ref(v_bs_2616_);
return v___x_2618_;
}
else
{
lean_object* v_v_2619_; lean_object* v___x_2620_; lean_object* v_bs_x27_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; size_t v___x_2624_; size_t v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v_v_2619_ = lean_array_uget(v_bs_2616_, v_i_2615_);
v___x_2620_ = lean_unsigned_to_nat(0u);
v_bs_x27_2621_ = lean_array_uset(v_bs_2616_, v_i_2615_, v___x_2620_);
v___x_2622_ = l_unsafeCast___redArg(v_v_2619_);
lean_dec(v_v_2619_);
v___x_2623_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_reorder(v___x_2622_, v___x_2613_);
v___x_2624_ = ((size_t)1ULL);
v___x_2625_ = lean_usize_add(v_i_2615_, v___x_2624_);
v___x_2626_ = l_unsafeCast___redArg(v___x_2623_);
lean_dec_ref(v___x_2623_);
v___x_2627_ = lean_array_uset(v_bs_x27_2621_, v_i_2615_, v___x_2626_);
v_i_2615_ = v___x_2625_;
v_bs_2616_ = v___x_2627_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__8___boxed(lean_object* v___x_2629_, lean_object* v_sz_2630_, lean_object* v_i_2631_, lean_object* v_bs_2632_){
_start:
{
size_t v_sz_boxed_2633_; size_t v_i_boxed_2634_; lean_object* v_res_2635_; 
v_sz_boxed_2633_ = lean_unbox_usize(v_sz_2630_);
lean_dec(v_sz_2630_);
v_i_boxed_2634_ = lean_unbox_usize(v_i_2631_);
lean_dec(v_i_2631_);
v_res_2635_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__8(v___x_2629_, v_sz_boxed_2633_, v_i_boxed_2634_, v_bs_2632_);
lean_dec_ref(v___x_2629_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__19(lean_object* v_as_2636_, size_t v_i_2637_, size_t v_stop_2638_, lean_object* v_b_2639_){
_start:
{
lean_object* v___y_2641_; uint8_t v___x_2645_; 
v___x_2645_ = lean_usize_dec_eq(v_i_2637_, v_stop_2638_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2646_; 
v___x_2646_ = lean_array_uget_borrowed(v_as_2636_, v_i_2637_);
if (lean_obj_tag(v___x_2646_) == 0)
{
v___y_2641_ = v_b_2639_;
goto v___jp_2640_;
}
else
{
lean_object* v_val_2647_; lean_object* v___x_2648_; 
v_val_2647_ = lean_ctor_get(v___x_2646_, 0);
lean_inc(v_val_2647_);
v___x_2648_ = lean_array_push(v_b_2639_, v_val_2647_);
v___y_2641_ = v___x_2648_;
goto v___jp_2640_;
}
}
else
{
return v_b_2639_;
}
v___jp_2640_:
{
size_t v___x_2642_; size_t v___x_2643_; 
v___x_2642_ = ((size_t)1ULL);
v___x_2643_ = lean_usize_add(v_i_2637_, v___x_2642_);
v_i_2637_ = v___x_2643_;
v_b_2639_ = v___y_2641_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__19___boxed(lean_object* v_as_2649_, lean_object* v_i_2650_, lean_object* v_stop_2651_, lean_object* v_b_2652_){
_start:
{
size_t v_i_boxed_2653_; size_t v_stop_boxed_2654_; lean_object* v_res_2655_; 
v_i_boxed_2653_ = lean_unbox_usize(v_i_2650_);
lean_dec(v_i_2650_);
v_stop_boxed_2654_ = lean_unbox_usize(v_stop_2651_);
lean_dec(v_stop_2651_);
v_res_2655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__19(v_as_2649_, v_i_boxed_2653_, v_stop_boxed_2654_, v_b_2652_);
lean_dec_ref(v_as_2649_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__20(lean_object* v_x_2656_, lean_object* v_x_2657_){
_start:
{
if (lean_obj_tag(v_x_2656_) == 0)
{
lean_object* v_cs_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; uint8_t v___x_2661_; 
v_cs_2658_ = lean_ctor_get(v_x_2656_, 0);
v___x_2659_ = lean_unsigned_to_nat(0u);
v___x_2660_ = lean_array_get_size(v_cs_2658_);
v___x_2661_ = lean_nat_dec_lt(v___x_2659_, v___x_2660_);
if (v___x_2661_ == 0)
{
return v_x_2657_;
}
else
{
size_t v___x_2662_; size_t v___x_2663_; lean_object* v___x_2664_; 
v___x_2662_ = ((size_t)0ULL);
v___x_2663_ = lean_usize_of_nat(v___x_2660_);
v___x_2664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18_spec__25(v_cs_2658_, v___x_2662_, v___x_2663_, v_x_2657_);
return v___x_2664_;
}
}
else
{
lean_object* v_vs_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; uint8_t v___x_2668_; 
v_vs_2665_ = lean_ctor_get(v_x_2656_, 0);
v___x_2666_ = lean_unsigned_to_nat(0u);
v___x_2667_ = lean_array_get_size(v_vs_2665_);
v___x_2668_ = lean_nat_dec_lt(v___x_2666_, v___x_2667_);
if (v___x_2668_ == 0)
{
return v_x_2657_;
}
else
{
size_t v___x_2669_; size_t v___x_2670_; lean_object* v___x_2671_; 
v___x_2669_ = ((size_t)0ULL);
v___x_2670_ = lean_usize_of_nat(v___x_2667_);
v___x_2671_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__19(v_vs_2665_, v___x_2669_, v___x_2670_, v_x_2657_);
return v___x_2671_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18_spec__25(lean_object* v_as_2672_, size_t v_i_2673_, size_t v_stop_2674_, lean_object* v_b_2675_){
_start:
{
uint8_t v___x_2676_; 
v___x_2676_ = lean_usize_dec_eq(v_i_2673_, v_stop_2674_);
if (v___x_2676_ == 0)
{
lean_object* v___x_2677_; lean_object* v___x_2678_; size_t v___x_2679_; size_t v___x_2680_; 
v___x_2677_ = lean_array_uget_borrowed(v_as_2672_, v_i_2673_);
v___x_2678_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__20(v___x_2677_, v_b_2675_);
v___x_2679_ = ((size_t)1ULL);
v___x_2680_ = lean_usize_add(v_i_2673_, v___x_2679_);
v_i_2673_ = v___x_2680_;
v_b_2675_ = v___x_2678_;
goto _start;
}
else
{
return v_b_2675_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18_spec__25___boxed(lean_object* v_as_2682_, lean_object* v_i_2683_, lean_object* v_stop_2684_, lean_object* v_b_2685_){
_start:
{
size_t v_i_boxed_2686_; size_t v_stop_boxed_2687_; lean_object* v_res_2688_; 
v_i_boxed_2686_ = lean_unbox_usize(v_i_2683_);
lean_dec(v_i_2683_);
v_stop_boxed_2687_ = lean_unbox_usize(v_stop_2684_);
lean_dec(v_stop_2684_);
v_res_2688_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18_spec__25(v_as_2682_, v_i_boxed_2686_, v_stop_boxed_2687_, v_b_2685_);
lean_dec_ref(v_as_2682_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__20___boxed(lean_object* v_x_2689_, lean_object* v_x_2690_){
_start:
{
lean_object* v_res_2691_; 
v_res_2691_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__20(v_x_2689_, v_x_2690_);
lean_dec_ref(v_x_2689_);
return v_res_2691_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0(void){
_start:
{
lean_object* v___x_2692_; 
v___x_2692_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_2692_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18(lean_object* v_x_2693_, size_t v_x_2694_, size_t v_x_2695_, lean_object* v_x_2696_){
_start:
{
if (lean_obj_tag(v_x_2693_) == 0)
{
lean_object* v_cs_2697_; lean_object* v___x_2698_; size_t v___x_2699_; lean_object* v_j_2700_; lean_object* v___x_2701_; size_t v___x_2702_; size_t v___x_2703_; size_t v___x_2704_; size_t v___x_2705_; size_t v___x_2706_; size_t v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; uint8_t v___x_2712_; 
v_cs_2697_ = lean_ctor_get(v_x_2693_, 0);
v___x_2698_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0);
v___x_2699_ = lean_usize_shift_right(v_x_2694_, v_x_2695_);
v_j_2700_ = lean_usize_to_nat(v___x_2699_);
v___x_2701_ = lean_array_get_borrowed(v___x_2698_, v_cs_2697_, v_j_2700_);
v___x_2702_ = ((size_t)1ULL);
v___x_2703_ = lean_usize_shift_left(v___x_2702_, v_x_2695_);
v___x_2704_ = lean_usize_sub(v___x_2703_, v___x_2702_);
v___x_2705_ = lean_usize_land(v_x_2694_, v___x_2704_);
v___x_2706_ = ((size_t)5ULL);
v___x_2707_ = lean_usize_sub(v_x_2695_, v___x_2706_);
v___x_2708_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18(v___x_2701_, v___x_2705_, v___x_2707_, v_x_2696_);
v___x_2709_ = lean_unsigned_to_nat(1u);
v___x_2710_ = lean_nat_add(v_j_2700_, v___x_2709_);
lean_dec(v_j_2700_);
v___x_2711_ = lean_array_get_size(v_cs_2697_);
v___x_2712_ = lean_nat_dec_lt(v___x_2710_, v___x_2711_);
if (v___x_2712_ == 0)
{
lean_dec(v___x_2710_);
return v___x_2708_;
}
else
{
size_t v___x_2713_; size_t v___x_2714_; lean_object* v___x_2715_; 
v___x_2713_ = lean_usize_of_nat(v___x_2710_);
lean_dec(v___x_2710_);
v___x_2714_ = lean_usize_of_nat(v___x_2711_);
v___x_2715_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18_spec__25(v_cs_2697_, v___x_2713_, v___x_2714_, v___x_2708_);
return v___x_2715_;
}
}
else
{
lean_object* v_vs_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; uint8_t v___x_2719_; 
v_vs_2716_ = lean_ctor_get(v_x_2693_, 0);
v___x_2717_ = lean_usize_to_nat(v_x_2694_);
v___x_2718_ = lean_array_get_size(v_vs_2716_);
v___x_2719_ = lean_nat_dec_lt(v___x_2717_, v___x_2718_);
if (v___x_2719_ == 0)
{
lean_dec(v___x_2717_);
return v_x_2696_;
}
else
{
size_t v___x_2720_; size_t v___x_2721_; lean_object* v___x_2722_; 
v___x_2720_ = lean_usize_of_nat(v___x_2717_);
lean_dec(v___x_2717_);
v___x_2721_ = lean_usize_of_nat(v___x_2718_);
v___x_2722_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__19(v_vs_2716_, v___x_2720_, v___x_2721_, v_x_2696_);
return v___x_2722_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___boxed(lean_object* v_x_2723_, lean_object* v_x_2724_, lean_object* v_x_2725_, lean_object* v_x_2726_){
_start:
{
size_t v_x_68615__boxed_2727_; size_t v_x_68616__boxed_2728_; lean_object* v_res_2729_; 
v_x_68615__boxed_2727_ = lean_unbox_usize(v_x_2724_);
lean_dec(v_x_2724_);
v_x_68616__boxed_2728_ = lean_unbox_usize(v_x_2725_);
lean_dec(v_x_2725_);
v_res_2729_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18(v_x_2723_, v_x_68615__boxed_2727_, v_x_68616__boxed_2728_, v_x_2726_);
lean_dec_ref(v_x_2723_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7(lean_object* v_t_2730_, lean_object* v_init_2731_, lean_object* v_start_2732_){
_start:
{
lean_object* v___x_2733_; uint8_t v___x_2734_; 
v___x_2733_ = lean_unsigned_to_nat(0u);
v___x_2734_ = lean_nat_dec_eq(v_start_2732_, v___x_2733_);
if (v___x_2734_ == 0)
{
lean_object* v_root_2735_; lean_object* v_tail_2736_; size_t v_shift_2737_; lean_object* v_tailOff_2738_; uint8_t v___x_2739_; 
v_root_2735_ = lean_ctor_get(v_t_2730_, 0);
v_tail_2736_ = lean_ctor_get(v_t_2730_, 1);
v_shift_2737_ = lean_ctor_get_usize(v_t_2730_, 4);
v_tailOff_2738_ = lean_ctor_get(v_t_2730_, 3);
v___x_2739_ = lean_nat_dec_le(v_tailOff_2738_, v_start_2732_);
if (v___x_2739_ == 0)
{
size_t v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; uint8_t v___x_2743_; 
v___x_2740_ = lean_usize_of_nat(v_start_2732_);
v___x_2741_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18(v_root_2735_, v___x_2740_, v_shift_2737_, v_init_2731_);
v___x_2742_ = lean_array_get_size(v_tail_2736_);
v___x_2743_ = lean_nat_dec_lt(v___x_2733_, v___x_2742_);
if (v___x_2743_ == 0)
{
return v___x_2741_;
}
else
{
size_t v___x_2744_; size_t v___x_2745_; lean_object* v___x_2746_; 
v___x_2744_ = ((size_t)0ULL);
v___x_2745_ = lean_usize_of_nat(v___x_2742_);
v___x_2746_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__19(v_tail_2736_, v___x_2744_, v___x_2745_, v___x_2741_);
return v___x_2746_;
}
}
else
{
lean_object* v___x_2747_; lean_object* v___x_2748_; uint8_t v___x_2749_; 
v___x_2747_ = lean_nat_sub(v_start_2732_, v_tailOff_2738_);
v___x_2748_ = lean_array_get_size(v_tail_2736_);
v___x_2749_ = lean_nat_dec_lt(v___x_2747_, v___x_2748_);
if (v___x_2749_ == 0)
{
lean_dec(v___x_2747_);
return v_init_2731_;
}
else
{
size_t v___x_2750_; size_t v___x_2751_; lean_object* v___x_2752_; 
v___x_2750_ = lean_usize_of_nat(v___x_2747_);
lean_dec(v___x_2747_);
v___x_2751_ = lean_usize_of_nat(v___x_2748_);
v___x_2752_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__19(v_tail_2736_, v___x_2750_, v___x_2751_, v_init_2731_);
return v___x_2752_;
}
}
}
else
{
lean_object* v_root_2753_; lean_object* v_tail_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; uint8_t v___x_2757_; 
v_root_2753_ = lean_ctor_get(v_t_2730_, 0);
v_tail_2754_ = lean_ctor_get(v_t_2730_, 1);
v___x_2755_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__20(v_root_2753_, v_init_2731_);
v___x_2756_ = lean_array_get_size(v_tail_2754_);
v___x_2757_ = lean_nat_dec_lt(v___x_2733_, v___x_2756_);
if (v___x_2757_ == 0)
{
return v___x_2755_;
}
else
{
size_t v___x_2758_; size_t v___x_2759_; lean_object* v___x_2760_; 
v___x_2758_ = ((size_t)0ULL);
v___x_2759_ = lean_usize_of_nat(v___x_2756_);
v___x_2760_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__19(v_tail_2754_, v___x_2758_, v___x_2759_, v___x_2755_);
return v___x_2760_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7___boxed(lean_object* v_t_2761_, lean_object* v_init_2762_, lean_object* v_start_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7(v_t_2761_, v_init_2762_, v_start_2763_);
lean_dec(v_start_2763_);
lean_dec_ref(v_t_2761_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__10(lean_object* v___x_2765_, size_t v_sz_2766_, size_t v_i_2767_, lean_object* v_bs_2768_){
_start:
{
uint8_t v___x_2769_; 
v___x_2769_ = lean_usize_dec_lt(v_i_2767_, v_sz_2766_);
if (v___x_2769_ == 0)
{
lean_object* v___x_2770_; 
v___x_2770_ = l_unsafeCast___redArg(v_bs_2768_);
lean_dec_ref(v_bs_2768_);
return v___x_2770_;
}
else
{
lean_object* v_v_2771_; lean_object* v___x_2772_; lean_object* v_bs_x27_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; size_t v___x_2776_; size_t v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v_v_2771_ = lean_array_uget(v_bs_2768_, v_i_2767_);
v___x_2772_ = lean_unsigned_to_nat(0u);
v_bs_x27_2773_ = lean_array_uset(v_bs_2768_, v_i_2767_, v___x_2772_);
v___x_2774_ = l_unsafeCast___redArg(v_v_2771_);
lean_dec(v_v_2771_);
v___x_2775_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_reorder(v___x_2774_, v___x_2765_);
v___x_2776_ = ((size_t)1ULL);
v___x_2777_ = lean_usize_add(v_i_2767_, v___x_2776_);
v___x_2778_ = l_unsafeCast___redArg(v___x_2775_);
lean_dec_ref(v___x_2775_);
v___x_2779_ = lean_array_uset(v_bs_x27_2773_, v_i_2767_, v___x_2778_);
v_i_2767_ = v___x_2777_;
v_bs_2768_ = v___x_2779_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__10___boxed(lean_object* v___x_2781_, lean_object* v_sz_2782_, lean_object* v_i_2783_, lean_object* v_bs_2784_){
_start:
{
size_t v_sz_boxed_2785_; size_t v_i_boxed_2786_; lean_object* v_res_2787_; 
v_sz_boxed_2785_ = lean_unbox_usize(v_sz_2782_);
lean_dec(v_sz_2782_);
v_i_boxed_2786_ = lean_unbox_usize(v_i_2783_);
lean_dec(v_i_2783_);
v_res_2787_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__10(v___x_2781_, v_sz_boxed_2785_, v_i_boxed_2786_, v_bs_2784_);
lean_dec_ref(v___x_2781_);
return v_res_2787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__29(lean_object* v_as_2788_, size_t v_i_2789_, size_t v_stop_2790_, lean_object* v_b_2791_){
_start:
{
uint8_t v___x_2792_; 
v___x_2792_ = lean_usize_dec_eq(v_i_2789_, v_stop_2790_);
if (v___x_2792_ == 0)
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; size_t v___x_2796_; size_t v___x_2797_; 
v___x_2793_ = lean_array_uget_borrowed(v_as_2788_, v_i_2789_);
v___x_2794_ = l_Lean_PersistentArray_toArray___redArg(v___x_2793_);
v___x_2795_ = l_Array_append___redArg(v_b_2791_, v___x_2794_);
lean_dec_ref(v___x_2794_);
v___x_2796_ = ((size_t)1ULL);
v___x_2797_ = lean_usize_add(v_i_2789_, v___x_2796_);
v_i_2789_ = v___x_2797_;
v_b_2791_ = v___x_2795_;
goto _start;
}
else
{
return v_b_2791_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__29___boxed(lean_object* v_as_2799_, lean_object* v_i_2800_, lean_object* v_stop_2801_, lean_object* v_b_2802_){
_start:
{
size_t v_i_boxed_2803_; size_t v_stop_boxed_2804_; lean_object* v_res_2805_; 
v_i_boxed_2803_ = lean_unbox_usize(v_i_2800_);
lean_dec(v_i_2800_);
v_stop_boxed_2804_ = lean_unbox_usize(v_stop_2801_);
lean_dec(v_stop_2801_);
v_res_2805_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__29(v_as_2799_, v_i_boxed_2803_, v_stop_boxed_2804_, v_b_2802_);
lean_dec_ref(v_as_2799_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__30(lean_object* v_x_2806_, lean_object* v_x_2807_){
_start:
{
if (lean_obj_tag(v_x_2806_) == 0)
{
lean_object* v_cs_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; uint8_t v___x_2811_; 
v_cs_2808_ = lean_ctor_get(v_x_2806_, 0);
v___x_2809_ = lean_unsigned_to_nat(0u);
v___x_2810_ = lean_array_get_size(v_cs_2808_);
v___x_2811_ = lean_nat_dec_lt(v___x_2809_, v___x_2810_);
if (v___x_2811_ == 0)
{
return v_x_2807_;
}
else
{
size_t v___x_2812_; size_t v___x_2813_; lean_object* v___x_2814_; 
v___x_2812_ = ((size_t)0ULL);
v___x_2813_ = lean_usize_of_nat(v___x_2810_);
v___x_2814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28_spec__37(v_cs_2808_, v___x_2812_, v___x_2813_, v_x_2807_);
return v___x_2814_;
}
}
else
{
lean_object* v_vs_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; uint8_t v___x_2818_; 
v_vs_2815_ = lean_ctor_get(v_x_2806_, 0);
v___x_2816_ = lean_unsigned_to_nat(0u);
v___x_2817_ = lean_array_get_size(v_vs_2815_);
v___x_2818_ = lean_nat_dec_lt(v___x_2816_, v___x_2817_);
if (v___x_2818_ == 0)
{
return v_x_2807_;
}
else
{
size_t v___x_2819_; size_t v___x_2820_; lean_object* v___x_2821_; 
v___x_2819_ = ((size_t)0ULL);
v___x_2820_ = lean_usize_of_nat(v___x_2817_);
v___x_2821_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__29(v_vs_2815_, v___x_2819_, v___x_2820_, v_x_2807_);
return v___x_2821_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28_spec__37(lean_object* v_as_2822_, size_t v_i_2823_, size_t v_stop_2824_, lean_object* v_b_2825_){
_start:
{
uint8_t v___x_2826_; 
v___x_2826_ = lean_usize_dec_eq(v_i_2823_, v_stop_2824_);
if (v___x_2826_ == 0)
{
lean_object* v___x_2827_; lean_object* v___x_2828_; size_t v___x_2829_; size_t v___x_2830_; 
v___x_2827_ = lean_array_uget_borrowed(v_as_2822_, v_i_2823_);
v___x_2828_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__30(v___x_2827_, v_b_2825_);
v___x_2829_ = ((size_t)1ULL);
v___x_2830_ = lean_usize_add(v_i_2823_, v___x_2829_);
v_i_2823_ = v___x_2830_;
v_b_2825_ = v___x_2828_;
goto _start;
}
else
{
return v_b_2825_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28_spec__37___boxed(lean_object* v_as_2832_, lean_object* v_i_2833_, lean_object* v_stop_2834_, lean_object* v_b_2835_){
_start:
{
size_t v_i_boxed_2836_; size_t v_stop_boxed_2837_; lean_object* v_res_2838_; 
v_i_boxed_2836_ = lean_unbox_usize(v_i_2833_);
lean_dec(v_i_2833_);
v_stop_boxed_2837_ = lean_unbox_usize(v_stop_2834_);
lean_dec(v_stop_2834_);
v_res_2838_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28_spec__37(v_as_2832_, v_i_boxed_2836_, v_stop_boxed_2837_, v_b_2835_);
lean_dec_ref(v_as_2832_);
return v_res_2838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__30___boxed(lean_object* v_x_2839_, lean_object* v_x_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__30(v_x_2839_, v_x_2840_);
lean_dec_ref(v_x_2839_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28(lean_object* v_x_2842_, size_t v_x_2843_, size_t v_x_2844_, lean_object* v_x_2845_){
_start:
{
if (lean_obj_tag(v_x_2842_) == 0)
{
lean_object* v_cs_2846_; lean_object* v___x_2847_; size_t v___x_2848_; lean_object* v_j_2849_; lean_object* v___x_2850_; size_t v___x_2851_; size_t v___x_2852_; size_t v___x_2853_; size_t v___x_2854_; size_t v___x_2855_; size_t v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; uint8_t v___x_2861_; 
v_cs_2846_ = lean_ctor_get(v_x_2842_, 0);
v___x_2847_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0);
v___x_2848_ = lean_usize_shift_right(v_x_2843_, v_x_2844_);
v_j_2849_ = lean_usize_to_nat(v___x_2848_);
v___x_2850_ = lean_array_get_borrowed(v___x_2847_, v_cs_2846_, v_j_2849_);
v___x_2851_ = ((size_t)1ULL);
v___x_2852_ = lean_usize_shift_left(v___x_2851_, v_x_2844_);
v___x_2853_ = lean_usize_sub(v___x_2852_, v___x_2851_);
v___x_2854_ = lean_usize_land(v_x_2843_, v___x_2853_);
v___x_2855_ = ((size_t)5ULL);
v___x_2856_ = lean_usize_sub(v_x_2844_, v___x_2855_);
v___x_2857_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28(v___x_2850_, v___x_2854_, v___x_2856_, v_x_2845_);
v___x_2858_ = lean_unsigned_to_nat(1u);
v___x_2859_ = lean_nat_add(v_j_2849_, v___x_2858_);
lean_dec(v_j_2849_);
v___x_2860_ = lean_array_get_size(v_cs_2846_);
v___x_2861_ = lean_nat_dec_lt(v___x_2859_, v___x_2860_);
if (v___x_2861_ == 0)
{
lean_dec(v___x_2859_);
return v___x_2857_;
}
else
{
size_t v___x_2862_; size_t v___x_2863_; lean_object* v___x_2864_; 
v___x_2862_ = lean_usize_of_nat(v___x_2859_);
lean_dec(v___x_2859_);
v___x_2863_ = lean_usize_of_nat(v___x_2860_);
v___x_2864_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28_spec__37(v_cs_2846_, v___x_2862_, v___x_2863_, v___x_2857_);
return v___x_2864_;
}
}
else
{
lean_object* v_vs_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; uint8_t v___x_2868_; 
v_vs_2865_ = lean_ctor_get(v_x_2842_, 0);
v___x_2866_ = lean_usize_to_nat(v_x_2843_);
v___x_2867_ = lean_array_get_size(v_vs_2865_);
v___x_2868_ = lean_nat_dec_lt(v___x_2866_, v___x_2867_);
if (v___x_2868_ == 0)
{
lean_dec(v___x_2866_);
return v_x_2845_;
}
else
{
size_t v___x_2869_; size_t v___x_2870_; lean_object* v___x_2871_; 
v___x_2869_ = lean_usize_of_nat(v___x_2866_);
lean_dec(v___x_2866_);
v___x_2870_ = lean_usize_of_nat(v___x_2867_);
v___x_2871_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__29(v_vs_2865_, v___x_2869_, v___x_2870_, v_x_2845_);
return v___x_2871_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28___boxed(lean_object* v_x_2872_, lean_object* v_x_2873_, lean_object* v_x_2874_, lean_object* v_x_2875_){
_start:
{
size_t v_x_68806__boxed_2876_; size_t v_x_68807__boxed_2877_; lean_object* v_res_2878_; 
v_x_68806__boxed_2876_ = lean_unbox_usize(v_x_2873_);
lean_dec(v_x_2873_);
v_x_68807__boxed_2877_ = lean_unbox_usize(v_x_2874_);
lean_dec(v_x_2874_);
v_res_2878_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28(v_x_2872_, v_x_68806__boxed_2876_, v_x_68807__boxed_2877_, v_x_2875_);
lean_dec_ref(v_x_2872_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11(lean_object* v_t_2879_, lean_object* v_init_2880_, lean_object* v_start_2881_){
_start:
{
lean_object* v___x_2882_; uint8_t v___x_2883_; 
v___x_2882_ = lean_unsigned_to_nat(0u);
v___x_2883_ = lean_nat_dec_eq(v_start_2881_, v___x_2882_);
if (v___x_2883_ == 0)
{
lean_object* v_root_2884_; lean_object* v_tail_2885_; size_t v_shift_2886_; lean_object* v_tailOff_2887_; uint8_t v___x_2888_; 
v_root_2884_ = lean_ctor_get(v_t_2879_, 0);
v_tail_2885_ = lean_ctor_get(v_t_2879_, 1);
v_shift_2886_ = lean_ctor_get_usize(v_t_2879_, 4);
v_tailOff_2887_ = lean_ctor_get(v_t_2879_, 3);
v___x_2888_ = lean_nat_dec_le(v_tailOff_2887_, v_start_2881_);
if (v___x_2888_ == 0)
{
size_t v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; uint8_t v___x_2892_; 
v___x_2889_ = lean_usize_of_nat(v_start_2881_);
v___x_2890_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__28(v_root_2884_, v___x_2889_, v_shift_2886_, v_init_2880_);
v___x_2891_ = lean_array_get_size(v_tail_2885_);
v___x_2892_ = lean_nat_dec_lt(v___x_2882_, v___x_2891_);
if (v___x_2892_ == 0)
{
return v___x_2890_;
}
else
{
size_t v___x_2893_; size_t v___x_2894_; lean_object* v___x_2895_; 
v___x_2893_ = ((size_t)0ULL);
v___x_2894_ = lean_usize_of_nat(v___x_2891_);
v___x_2895_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__29(v_tail_2885_, v___x_2893_, v___x_2894_, v___x_2890_);
return v___x_2895_;
}
}
else
{
lean_object* v___x_2896_; lean_object* v___x_2897_; uint8_t v___x_2898_; 
v___x_2896_ = lean_nat_sub(v_start_2881_, v_tailOff_2887_);
v___x_2897_ = lean_array_get_size(v_tail_2885_);
v___x_2898_ = lean_nat_dec_lt(v___x_2896_, v___x_2897_);
if (v___x_2898_ == 0)
{
lean_dec(v___x_2896_);
return v_init_2880_;
}
else
{
size_t v___x_2899_; size_t v___x_2900_; lean_object* v___x_2901_; 
v___x_2899_ = lean_usize_of_nat(v___x_2896_);
lean_dec(v___x_2896_);
v___x_2900_ = lean_usize_of_nat(v___x_2897_);
v___x_2901_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__29(v_tail_2885_, v___x_2899_, v___x_2900_, v_init_2880_);
return v___x_2901_;
}
}
}
else
{
lean_object* v_root_2902_; lean_object* v_tail_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; uint8_t v___x_2906_; 
v_root_2902_ = lean_ctor_get(v_t_2879_, 0);
v_tail_2903_ = lean_ctor_get(v_t_2879_, 1);
v___x_2904_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__30(v_root_2902_, v_init_2880_);
v___x_2905_ = lean_array_get_size(v_tail_2903_);
v___x_2906_ = lean_nat_dec_lt(v___x_2882_, v___x_2905_);
if (v___x_2906_ == 0)
{
return v___x_2904_;
}
else
{
size_t v___x_2907_; size_t v___x_2908_; lean_object* v___x_2909_; 
v___x_2907_ = ((size_t)0ULL);
v___x_2908_ = lean_usize_of_nat(v___x_2905_);
v___x_2909_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11_spec__29(v_tail_2903_, v___x_2907_, v___x_2908_, v___x_2904_);
return v___x_2909_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11___boxed(lean_object* v_t_2910_, lean_object* v_init_2911_, lean_object* v_start_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11(v_t_2910_, v_init_2911_, v_start_2912_);
lean_dec(v_start_2912_);
lean_dec_ref(v_t_2910_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__14(lean_object* v_as_2914_, size_t v_sz_2915_, size_t v_i_2916_, lean_object* v_b_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
uint8_t v___x_2929_; 
v___x_2929_ = lean_usize_dec_lt(v_i_2916_, v_sz_2915_);
if (v___x_2929_ == 0)
{
lean_object* v___x_2930_; 
v___x_2930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2930_, 0, v_b_2917_);
return v___x_2930_;
}
else
{
lean_object* v___x_2931_; lean_object* v_a_2932_; lean_object* v___x_2933_; 
v___x_2931_ = lean_box(0);
v_a_2932_ = lean_array_uget_borrowed(v_as_2914_, v_i_2916_);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v___y_2923_);
lean_inc_ref(v___y_2922_);
lean_inc(v___y_2921_);
lean_inc_ref(v___y_2920_);
lean_inc(v___y_2919_);
lean_inc(v___y_2918_);
lean_inc(v_a_2932_);
v___x_2933_ = lean_grind_cutsat_assert_le(v_a_2932_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2933_) == 0)
{
size_t v___x_2934_; size_t v___x_2935_; 
lean_dec_ref_known(v___x_2933_, 1);
v___x_2934_ = ((size_t)1ULL);
v___x_2935_ = lean_usize_add(v_i_2916_, v___x_2934_);
v_i_2916_ = v___x_2935_;
v_b_2917_ = v___x_2931_;
goto _start;
}
else
{
return v___x_2933_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__14___boxed(lean_object* v_as_2937_, lean_object* v_sz_2938_, lean_object* v_i_2939_, lean_object* v_b_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_){
_start:
{
size_t v_sz_boxed_2952_; size_t v_i_boxed_2953_; lean_object* v_res_2954_; 
v_sz_boxed_2952_ = lean_unbox_usize(v_sz_2938_);
lean_dec(v_sz_2938_);
v_i_boxed_2953_ = lean_unbox_usize(v_i_2939_);
lean_dec(v_i_2939_);
v_res_2954_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__14(v_as_2937_, v_sz_boxed_2952_, v_i_boxed_2953_, v_b_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
lean_dec(v___y_2950_);
lean_dec_ref(v___y_2949_);
lean_dec(v___y_2948_);
lean_dec_ref(v___y_2947_);
lean_dec(v___y_2946_);
lean_dec_ref(v___y_2945_);
lean_dec(v___y_2944_);
lean_dec_ref(v___y_2943_);
lean_dec(v___y_2942_);
lean_dec(v___y_2941_);
lean_dec_ref(v_as_2937_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17_spec__37(lean_object* v_msgData_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_){
_start:
{
lean_object* v___x_2961_; lean_object* v_env_2962_; lean_object* v___x_2963_; lean_object* v_toCold_2964_; lean_object* v_mctx_2965_; lean_object* v_lctx_2966_; lean_object* v_options_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2961_ = lean_st_ref_get(v___y_2959_);
v_env_2962_ = lean_ctor_get(v___x_2961_, 0);
lean_inc_ref(v_env_2962_);
lean_dec(v___x_2961_);
v___x_2963_ = lean_st_ref_get(v___y_2957_);
v_toCold_2964_ = lean_ctor_get(v___y_2958_, 0);
v_mctx_2965_ = lean_ctor_get(v___x_2963_, 0);
lean_inc_ref(v_mctx_2965_);
lean_dec(v___x_2963_);
v_lctx_2966_ = lean_ctor_get(v___y_2956_, 2);
v_options_2967_ = lean_ctor_get(v_toCold_2964_, 2);
lean_inc_ref(v_options_2967_);
lean_inc_ref(v_lctx_2966_);
v___x_2968_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2968_, 0, v_env_2962_);
lean_ctor_set(v___x_2968_, 1, v_mctx_2965_);
lean_ctor_set(v___x_2968_, 2, v_lctx_2966_);
lean_ctor_set(v___x_2968_, 3, v_options_2967_);
v___x_2969_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2969_, 0, v___x_2968_);
lean_ctor_set(v___x_2969_, 1, v_msgData_2955_);
v___x_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2969_);
return v___x_2970_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17_spec__37___boxed(lean_object* v_msgData_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_){
_start:
{
lean_object* v_res_2977_; 
v_res_2977_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17_spec__37(v_msgData_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec(v___y_2973_);
lean_dec_ref(v___y_2972_);
return v_res_2977_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__0(void){
_start:
{
lean_object* v___x_2978_; double v___x_2979_; 
v___x_2978_ = lean_unsigned_to_nat(0u);
v___x_2979_ = lean_float_of_nat(v___x_2978_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg(lean_object* v_cls_2983_, lean_object* v_msg_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_){
_start:
{
lean_object* v_ref_2990_; lean_object* v___x_2991_; lean_object* v_a_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3036_; 
v_ref_2990_ = lean_ctor_get(v___y_2987_, 2);
v___x_2991_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17_spec__37(v_msg_2984_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_);
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3036_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3036_ == 0)
{
v___x_2994_ = v___x_2991_;
v_isShared_2995_ = v_isSharedCheck_3036_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_a_2992_);
lean_dec(v___x_2991_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3036_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_2996_; lean_object* v_traceState_2997_; lean_object* v_env_2998_; lean_object* v_nextMacroScope_2999_; lean_object* v_ngen_3000_; lean_object* v_auxDeclNGen_3001_; lean_object* v_cache_3002_; lean_object* v_messages_3003_; lean_object* v_infoState_3004_; lean_object* v_snapshotTasks_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3035_; 
v___x_2996_ = lean_st_ref_take(v___y_2988_);
v_traceState_2997_ = lean_ctor_get(v___x_2996_, 4);
v_env_2998_ = lean_ctor_get(v___x_2996_, 0);
v_nextMacroScope_2999_ = lean_ctor_get(v___x_2996_, 1);
v_ngen_3000_ = lean_ctor_get(v___x_2996_, 2);
v_auxDeclNGen_3001_ = lean_ctor_get(v___x_2996_, 3);
v_cache_3002_ = lean_ctor_get(v___x_2996_, 5);
v_messages_3003_ = lean_ctor_get(v___x_2996_, 6);
v_infoState_3004_ = lean_ctor_get(v___x_2996_, 7);
v_snapshotTasks_3005_ = lean_ctor_get(v___x_2996_, 8);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3007_ = v___x_2996_;
v_isShared_3008_ = v_isSharedCheck_3035_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_snapshotTasks_3005_);
lean_inc(v_infoState_3004_);
lean_inc(v_messages_3003_);
lean_inc(v_cache_3002_);
lean_inc(v_traceState_2997_);
lean_inc(v_auxDeclNGen_3001_);
lean_inc(v_ngen_3000_);
lean_inc(v_nextMacroScope_2999_);
lean_inc(v_env_2998_);
lean_dec(v___x_2996_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3035_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
uint64_t v_tid_3009_; lean_object* v_traces_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3034_; 
v_tid_3009_ = lean_ctor_get_uint64(v_traceState_2997_, sizeof(void*)*1);
v_traces_3010_ = lean_ctor_get(v_traceState_2997_, 0);
v_isSharedCheck_3034_ = !lean_is_exclusive(v_traceState_2997_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_3012_ = v_traceState_2997_;
v_isShared_3013_ = v_isSharedCheck_3034_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_traces_3010_);
lean_dec(v_traceState_2997_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3034_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; double v___x_3016_; uint8_t v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3025_; 
v___x_3014_ = lean_box(0);
v___x_3015_ = lean_box(0);
v___x_3016_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__0);
v___x_3017_ = 0;
v___x_3018_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__1));
v___x_3019_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3019_, 0, v_cls_2983_);
lean_ctor_set(v___x_3019_, 1, v___x_3015_);
lean_ctor_set(v___x_3019_, 2, v___x_3018_);
lean_ctor_set_float(v___x_3019_, sizeof(void*)*3, v___x_3016_);
lean_ctor_set_float(v___x_3019_, sizeof(void*)*3 + 8, v___x_3016_);
lean_ctor_set_uint8(v___x_3019_, sizeof(void*)*3 + 16, v___x_3017_);
v___x_3020_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___closed__2));
v___x_3021_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3019_);
lean_ctor_set(v___x_3021_, 1, v_a_2992_);
lean_ctor_set(v___x_3021_, 2, v___x_3020_);
lean_inc(v_ref_2990_);
v___x_3022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3022_, 0, v_ref_2990_);
lean_ctor_set(v___x_3022_, 1, v___x_3021_);
v___x_3023_ = l_Lean_PersistentArray_push___redArg(v_traces_3010_, v___x_3022_);
if (v_isShared_3013_ == 0)
{
lean_ctor_set(v___x_3012_, 0, v___x_3023_);
v___x_3025_ = v___x_3012_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v___x_3023_);
lean_ctor_set_uint64(v_reuseFailAlloc_3033_, sizeof(void*)*1, v_tid_3009_);
v___x_3025_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
lean_object* v___x_3027_; 
if (v_isShared_3008_ == 0)
{
lean_ctor_set(v___x_3007_, 4, v___x_3025_);
v___x_3027_ = v___x_3007_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_env_2998_);
lean_ctor_set(v_reuseFailAlloc_3032_, 1, v_nextMacroScope_2999_);
lean_ctor_set(v_reuseFailAlloc_3032_, 2, v_ngen_3000_);
lean_ctor_set(v_reuseFailAlloc_3032_, 3, v_auxDeclNGen_3001_);
lean_ctor_set(v_reuseFailAlloc_3032_, 4, v___x_3025_);
lean_ctor_set(v_reuseFailAlloc_3032_, 5, v_cache_3002_);
lean_ctor_set(v_reuseFailAlloc_3032_, 6, v_messages_3003_);
lean_ctor_set(v_reuseFailAlloc_3032_, 7, v_infoState_3004_);
lean_ctor_set(v_reuseFailAlloc_3032_, 8, v_snapshotTasks_3005_);
v___x_3027_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
lean_object* v___x_3028_; lean_object* v___x_3030_; 
v___x_3028_ = lean_st_ref_put(v___y_2988_, v___x_3027_);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v___x_3014_);
v___x_3030_ = v___x_2994_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v___x_3014_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg___boxed(lean_object* v_cls_3037_, lean_object* v_msg_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_){
_start:
{
lean_object* v_res_3044_; 
v_res_3044_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg(v_cls_3037_, v_msg_3038_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_);
lean_dec(v___y_3042_);
lean_dec_ref(v___y_3041_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3039_);
return v_res_3044_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__12(lean_object* v___x_3045_, size_t v_sz_3046_, size_t v_i_3047_, lean_object* v_bs_3048_){
_start:
{
uint8_t v___x_3049_; 
v___x_3049_ = lean_usize_dec_lt(v_i_3047_, v_sz_3046_);
if (v___x_3049_ == 0)
{
lean_object* v___x_3050_; 
v___x_3050_ = l_unsafeCast___redArg(v_bs_3048_);
lean_dec_ref(v_bs_3048_);
return v___x_3050_;
}
else
{
lean_object* v_v_3051_; lean_object* v___x_3052_; lean_object* v_bs_x27_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; size_t v___x_3056_; size_t v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v_v_3051_ = lean_array_uget(v_bs_3048_, v_i_3047_);
v___x_3052_ = lean_unsigned_to_nat(0u);
v_bs_x27_3053_ = lean_array_uset(v_bs_3048_, v_i_3047_, v___x_3052_);
v___x_3054_ = l_unsafeCast___redArg(v_v_3051_);
lean_dec(v_v_3051_);
v___x_3055_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_reorder(v___x_3054_, v___x_3045_);
v___x_3056_ = ((size_t)1ULL);
v___x_3057_ = lean_usize_add(v_i_3047_, v___x_3056_);
v___x_3058_ = l_unsafeCast___redArg(v___x_3055_);
lean_dec_ref(v___x_3055_);
v___x_3059_ = lean_array_uset(v_bs_x27_3053_, v_i_3047_, v___x_3058_);
v_i_3047_ = v___x_3057_;
v_bs_3048_ = v___x_3059_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__12___boxed(lean_object* v___x_3061_, lean_object* v_sz_3062_, lean_object* v_i_3063_, lean_object* v_bs_3064_){
_start:
{
size_t v_sz_boxed_3065_; size_t v_i_boxed_3066_; lean_object* v_res_3067_; 
v_sz_boxed_3065_ = lean_unbox_usize(v_sz_3062_);
lean_dec(v_sz_3062_);
v_i_boxed_3066_ = lean_unbox_usize(v_i_3063_);
lean_dec(v_i_3063_);
v_res_3067_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__12(v___x_3061_, v_sz_boxed_3065_, v_i_boxed_3066_, v_bs_3064_);
lean_dec_ref(v___x_3061_);
return v_res_3067_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__15(lean_object* v_as_3068_, size_t v_sz_3069_, size_t v_i_3070_, lean_object* v_b_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_){
_start:
{
uint8_t v___x_3083_; 
v___x_3083_ = lean_usize_dec_lt(v_i_3070_, v_sz_3069_);
if (v___x_3083_ == 0)
{
lean_object* v___x_3084_; 
v___x_3084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3084_, 0, v_b_3071_);
return v___x_3084_;
}
else
{
lean_object* v___x_3085_; lean_object* v_a_3086_; lean_object* v___x_3087_; 
v___x_3085_ = lean_box(0);
v_a_3086_ = lean_array_uget_borrowed(v_as_3068_, v_i_3070_);
lean_inc(v_a_3086_);
v___x_3087_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_assert(v_a_3086_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_);
if (lean_obj_tag(v___x_3087_) == 0)
{
size_t v___x_3088_; size_t v___x_3089_; 
lean_dec_ref_known(v___x_3087_, 1);
v___x_3088_ = ((size_t)1ULL);
v___x_3089_ = lean_usize_add(v_i_3070_, v___x_3088_);
v_i_3070_ = v___x_3089_;
v_b_3071_ = v___x_3085_;
goto _start;
}
else
{
return v___x_3087_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__15___boxed(lean_object* v_as_3091_, lean_object* v_sz_3092_, lean_object* v_i_3093_, lean_object* v_b_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_){
_start:
{
size_t v_sz_boxed_3106_; size_t v_i_boxed_3107_; lean_object* v_res_3108_; 
v_sz_boxed_3106_ = lean_unbox_usize(v_sz_3092_);
lean_dec(v_sz_3092_);
v_i_boxed_3107_ = lean_unbox_usize(v_i_3093_);
lean_dec(v_i_3093_);
v_res_3108_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__15(v_as_3091_, v_sz_boxed_3106_, v_i_boxed_3107_, v_b_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_);
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3103_);
lean_dec(v___y_3102_);
lean_dec_ref(v___y_3101_);
lean_dec(v___y_3100_);
lean_dec_ref(v___y_3099_);
lean_dec(v___y_3098_);
lean_dec_ref(v___y_3097_);
lean_dec(v___y_3096_);
lean_dec(v___y_3095_);
lean_dec_ref(v_as_3091_);
return v_res_3108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__13(lean_object* v_as_3109_, size_t v_sz_3110_, size_t v_i_3111_, lean_object* v_b_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_){
_start:
{
uint8_t v___x_3124_; 
v___x_3124_ = lean_usize_dec_lt(v_i_3111_, v_sz_3110_);
if (v___x_3124_ == 0)
{
lean_object* v___x_3125_; 
v___x_3125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3125_, 0, v_b_3112_);
return v___x_3125_;
}
else
{
lean_object* v___x_3126_; lean_object* v_a_3127_; lean_object* v___x_3128_; 
v___x_3126_ = lean_box(0);
v_a_3127_ = lean_array_uget_borrowed(v_as_3109_, v_i_3111_);
lean_inc_ref(v___y_3121_);
lean_inc(v_a_3127_);
v___x_3128_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_assert(v_a_3127_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
if (lean_obj_tag(v___x_3128_) == 0)
{
size_t v___x_3129_; size_t v___x_3130_; 
lean_dec_ref_known(v___x_3128_, 1);
v___x_3129_ = ((size_t)1ULL);
v___x_3130_ = lean_usize_add(v_i_3111_, v___x_3129_);
v_i_3111_ = v___x_3130_;
v_b_3112_ = v___x_3126_;
goto _start;
}
else
{
return v___x_3128_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__13___boxed(lean_object* v_as_3132_, lean_object* v_sz_3133_, lean_object* v_i_3134_, lean_object* v_b_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_){
_start:
{
size_t v_sz_boxed_3147_; size_t v_i_boxed_3148_; lean_object* v_res_3149_; 
v_sz_boxed_3147_ = lean_unbox_usize(v_sz_3133_);
lean_dec(v_sz_3133_);
v_i_boxed_3148_ = lean_unbox_usize(v_i_3134_);
lean_dec(v_i_3134_);
v_res_3149_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__13(v_as_3132_, v_sz_boxed_3147_, v_i_boxed_3148_, v_b_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_);
lean_dec(v___y_3145_);
lean_dec_ref(v___y_3144_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
lean_dec(v___y_3137_);
lean_dec(v___y_3136_);
lean_dec_ref(v_as_3132_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__16(lean_object* v_a_3150_, lean_object* v_a_3151_){
_start:
{
if (lean_obj_tag(v_a_3150_) == 0)
{
lean_object* v___x_3152_; 
v___x_3152_ = l_List_reverse___redArg(v_a_3151_);
return v___x_3152_;
}
else
{
lean_object* v_head_3153_; lean_object* v_tail_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3165_; 
v_head_3153_ = lean_ctor_get(v_a_3150_, 0);
v_tail_3154_ = lean_ctor_get(v_a_3150_, 1);
v_isSharedCheck_3165_ = !lean_is_exclusive(v_a_3150_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3156_ = v_a_3150_;
v_isShared_3157_ = v_isSharedCheck_3165_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_tail_3154_);
lean_inc(v_head_3153_);
lean_dec(v_a_3150_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3165_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3162_; 
v___x_3158_ = l_Nat_reprFast(v_head_3153_);
v___x_3159_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3158_);
v___x_3160_ = l_Lean_MessageData_ofFormat(v___x_3159_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 1, v_a_3151_);
lean_ctor_set(v___x_3156_, 0, v___x_3160_);
v___x_3162_ = v___x_3156_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v___x_3160_);
lean_ctor_set(v_reuseFailAlloc_3164_, 1, v_a_3151_);
v___x_3162_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
v_a_3150_ = v_tail_3154_;
v_a_3151_ = v___x_3162_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__24(lean_object* v_as_3166_, size_t v_i_3167_, size_t v_stop_3168_, lean_object* v_b_3169_){
_start:
{
uint8_t v___x_3170_; 
v___x_3170_ = lean_usize_dec_eq(v_i_3167_, v_stop_3168_);
if (v___x_3170_ == 0)
{
lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; size_t v___x_3174_; size_t v___x_3175_; 
v___x_3171_ = lean_array_uget_borrowed(v_as_3166_, v_i_3167_);
v___x_3172_ = l_Lean_PersistentArray_toArray___redArg(v___x_3171_);
v___x_3173_ = l_Array_append___redArg(v_b_3169_, v___x_3172_);
lean_dec_ref(v___x_3172_);
v___x_3174_ = ((size_t)1ULL);
v___x_3175_ = lean_usize_add(v_i_3167_, v___x_3174_);
v_i_3167_ = v___x_3175_;
v_b_3169_ = v___x_3173_;
goto _start;
}
else
{
return v_b_3169_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__24___boxed(lean_object* v_as_3177_, lean_object* v_i_3178_, lean_object* v_stop_3179_, lean_object* v_b_3180_){
_start:
{
size_t v_i_boxed_3181_; size_t v_stop_boxed_3182_; lean_object* v_res_3183_; 
v_i_boxed_3181_ = lean_unbox_usize(v_i_3178_);
lean_dec(v_i_3178_);
v_stop_boxed_3182_ = lean_unbox_usize(v_stop_3179_);
lean_dec(v_stop_3179_);
v_res_3183_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__24(v_as_3177_, v_i_boxed_3181_, v_stop_boxed_3182_, v_b_3180_);
lean_dec_ref(v_as_3177_);
return v_res_3183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__25(lean_object* v_x_3184_, lean_object* v_x_3185_){
_start:
{
if (lean_obj_tag(v_x_3184_) == 0)
{
lean_object* v_cs_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; uint8_t v___x_3189_; 
v_cs_3186_ = lean_ctor_get(v_x_3184_, 0);
v___x_3187_ = lean_unsigned_to_nat(0u);
v___x_3188_ = lean_array_get_size(v_cs_3186_);
v___x_3189_ = lean_nat_dec_lt(v___x_3187_, v___x_3188_);
if (v___x_3189_ == 0)
{
return v_x_3185_;
}
else
{
size_t v___x_3190_; size_t v___x_3191_; lean_object* v___x_3192_; 
v___x_3190_ = ((size_t)0ULL);
v___x_3191_ = lean_usize_of_nat(v___x_3188_);
v___x_3192_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23_spec__31(v_cs_3186_, v___x_3190_, v___x_3191_, v_x_3185_);
return v___x_3192_;
}
}
else
{
lean_object* v_vs_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; uint8_t v___x_3196_; 
v_vs_3193_ = lean_ctor_get(v_x_3184_, 0);
v___x_3194_ = lean_unsigned_to_nat(0u);
v___x_3195_ = lean_array_get_size(v_vs_3193_);
v___x_3196_ = lean_nat_dec_lt(v___x_3194_, v___x_3195_);
if (v___x_3196_ == 0)
{
return v_x_3185_;
}
else
{
size_t v___x_3197_; size_t v___x_3198_; lean_object* v___x_3199_; 
v___x_3197_ = ((size_t)0ULL);
v___x_3198_ = lean_usize_of_nat(v___x_3195_);
v___x_3199_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__24(v_vs_3193_, v___x_3197_, v___x_3198_, v_x_3185_);
return v___x_3199_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23_spec__31(lean_object* v_as_3200_, size_t v_i_3201_, size_t v_stop_3202_, lean_object* v_b_3203_){
_start:
{
uint8_t v___x_3204_; 
v___x_3204_ = lean_usize_dec_eq(v_i_3201_, v_stop_3202_);
if (v___x_3204_ == 0)
{
lean_object* v___x_3205_; lean_object* v___x_3206_; size_t v___x_3207_; size_t v___x_3208_; 
v___x_3205_ = lean_array_uget_borrowed(v_as_3200_, v_i_3201_);
v___x_3206_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__25(v___x_3205_, v_b_3203_);
v___x_3207_ = ((size_t)1ULL);
v___x_3208_ = lean_usize_add(v_i_3201_, v___x_3207_);
v_i_3201_ = v___x_3208_;
v_b_3203_ = v___x_3206_;
goto _start;
}
else
{
return v_b_3203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23_spec__31___boxed(lean_object* v_as_3210_, lean_object* v_i_3211_, lean_object* v_stop_3212_, lean_object* v_b_3213_){
_start:
{
size_t v_i_boxed_3214_; size_t v_stop_boxed_3215_; lean_object* v_res_3216_; 
v_i_boxed_3214_ = lean_unbox_usize(v_i_3211_);
lean_dec(v_i_3211_);
v_stop_boxed_3215_ = lean_unbox_usize(v_stop_3212_);
lean_dec(v_stop_3212_);
v_res_3216_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23_spec__31(v_as_3210_, v_i_boxed_3214_, v_stop_boxed_3215_, v_b_3213_);
lean_dec_ref(v_as_3210_);
return v_res_3216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__25___boxed(lean_object* v_x_3217_, lean_object* v_x_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__25(v_x_3217_, v_x_3218_);
lean_dec_ref(v_x_3217_);
return v_res_3219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23(lean_object* v_x_3220_, size_t v_x_3221_, size_t v_x_3222_, lean_object* v_x_3223_){
_start:
{
if (lean_obj_tag(v_x_3220_) == 0)
{
lean_object* v_cs_3224_; lean_object* v___x_3225_; size_t v___x_3226_; lean_object* v_j_3227_; lean_object* v___x_3228_; size_t v___x_3229_; size_t v___x_3230_; size_t v___x_3231_; size_t v___x_3232_; size_t v___x_3233_; size_t v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; uint8_t v___x_3239_; 
v_cs_3224_ = lean_ctor_get(v_x_3220_, 0);
v___x_3225_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7_spec__18___closed__0);
v___x_3226_ = lean_usize_shift_right(v_x_3221_, v_x_3222_);
v_j_3227_ = lean_usize_to_nat(v___x_3226_);
v___x_3228_ = lean_array_get_borrowed(v___x_3225_, v_cs_3224_, v_j_3227_);
v___x_3229_ = ((size_t)1ULL);
v___x_3230_ = lean_usize_shift_left(v___x_3229_, v_x_3222_);
v___x_3231_ = lean_usize_sub(v___x_3230_, v___x_3229_);
v___x_3232_ = lean_usize_land(v_x_3221_, v___x_3231_);
v___x_3233_ = ((size_t)5ULL);
v___x_3234_ = lean_usize_sub(v_x_3222_, v___x_3233_);
v___x_3235_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23(v___x_3228_, v___x_3232_, v___x_3234_, v_x_3223_);
v___x_3236_ = lean_unsigned_to_nat(1u);
v___x_3237_ = lean_nat_add(v_j_3227_, v___x_3236_);
lean_dec(v_j_3227_);
v___x_3238_ = lean_array_get_size(v_cs_3224_);
v___x_3239_ = lean_nat_dec_lt(v___x_3237_, v___x_3238_);
if (v___x_3239_ == 0)
{
lean_dec(v___x_3237_);
return v___x_3235_;
}
else
{
size_t v___x_3240_; size_t v___x_3241_; lean_object* v___x_3242_; 
v___x_3240_ = lean_usize_of_nat(v___x_3237_);
lean_dec(v___x_3237_);
v___x_3241_ = lean_usize_of_nat(v___x_3238_);
v___x_3242_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23_spec__31(v_cs_3224_, v___x_3240_, v___x_3241_, v___x_3235_);
return v___x_3242_;
}
}
else
{
lean_object* v_vs_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; uint8_t v___x_3246_; 
v_vs_3243_ = lean_ctor_get(v_x_3220_, 0);
v___x_3244_ = lean_usize_to_nat(v_x_3221_);
v___x_3245_ = lean_array_get_size(v_vs_3243_);
v___x_3246_ = lean_nat_dec_lt(v___x_3244_, v___x_3245_);
if (v___x_3246_ == 0)
{
lean_dec(v___x_3244_);
return v_x_3223_;
}
else
{
size_t v___x_3247_; size_t v___x_3248_; lean_object* v___x_3249_; 
v___x_3247_ = lean_usize_of_nat(v___x_3244_);
lean_dec(v___x_3244_);
v___x_3248_ = lean_usize_of_nat(v___x_3245_);
v___x_3249_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__24(v_vs_3243_, v___x_3247_, v___x_3248_, v_x_3223_);
return v___x_3249_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23___boxed(lean_object* v_x_3250_, lean_object* v_x_3251_, lean_object* v_x_3252_, lean_object* v_x_3253_){
_start:
{
size_t v_x_69301__boxed_3254_; size_t v_x_69302__boxed_3255_; lean_object* v_res_3256_; 
v_x_69301__boxed_3254_ = lean_unbox_usize(v_x_3251_);
lean_dec(v_x_3251_);
v_x_69302__boxed_3255_ = lean_unbox_usize(v_x_3252_);
lean_dec(v_x_3252_);
v_res_3256_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23(v_x_3250_, v_x_69301__boxed_3254_, v_x_69302__boxed_3255_, v_x_3253_);
lean_dec_ref(v_x_3250_);
return v_res_3256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9(lean_object* v_t_3257_, lean_object* v_init_3258_, lean_object* v_start_3259_){
_start:
{
lean_object* v___x_3260_; uint8_t v___x_3261_; 
v___x_3260_ = lean_unsigned_to_nat(0u);
v___x_3261_ = lean_nat_dec_eq(v_start_3259_, v___x_3260_);
if (v___x_3261_ == 0)
{
lean_object* v_root_3262_; lean_object* v_tail_3263_; size_t v_shift_3264_; lean_object* v_tailOff_3265_; uint8_t v___x_3266_; 
v_root_3262_ = lean_ctor_get(v_t_3257_, 0);
v_tail_3263_ = lean_ctor_get(v_t_3257_, 1);
v_shift_3264_ = lean_ctor_get_usize(v_t_3257_, 4);
v_tailOff_3265_ = lean_ctor_get(v_t_3257_, 3);
v___x_3266_ = lean_nat_dec_le(v_tailOff_3265_, v_start_3259_);
if (v___x_3266_ == 0)
{
size_t v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; uint8_t v___x_3270_; 
v___x_3267_ = lean_usize_of_nat(v_start_3259_);
v___x_3268_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__23(v_root_3262_, v___x_3267_, v_shift_3264_, v_init_3258_);
v___x_3269_ = lean_array_get_size(v_tail_3263_);
v___x_3270_ = lean_nat_dec_lt(v___x_3260_, v___x_3269_);
if (v___x_3270_ == 0)
{
return v___x_3268_;
}
else
{
size_t v___x_3271_; size_t v___x_3272_; lean_object* v___x_3273_; 
v___x_3271_ = ((size_t)0ULL);
v___x_3272_ = lean_usize_of_nat(v___x_3269_);
v___x_3273_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__24(v_tail_3263_, v___x_3271_, v___x_3272_, v___x_3268_);
return v___x_3273_;
}
}
else
{
lean_object* v___x_3274_; lean_object* v___x_3275_; uint8_t v___x_3276_; 
v___x_3274_ = lean_nat_sub(v_start_3259_, v_tailOff_3265_);
v___x_3275_ = lean_array_get_size(v_tail_3263_);
v___x_3276_ = lean_nat_dec_lt(v___x_3274_, v___x_3275_);
if (v___x_3276_ == 0)
{
lean_dec(v___x_3274_);
return v_init_3258_;
}
else
{
size_t v___x_3277_; size_t v___x_3278_; lean_object* v___x_3279_; 
v___x_3277_ = lean_usize_of_nat(v___x_3274_);
lean_dec(v___x_3274_);
v___x_3278_ = lean_usize_of_nat(v___x_3275_);
v___x_3279_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__24(v_tail_3263_, v___x_3277_, v___x_3278_, v_init_3258_);
return v___x_3279_;
}
}
}
else
{
lean_object* v_root_3280_; lean_object* v_tail_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; uint8_t v___x_3284_; 
v_root_3280_ = lean_ctor_get(v_t_3257_, 0);
v_tail_3281_ = lean_ctor_get(v_t_3257_, 1);
v___x_3282_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__25(v_root_3280_, v_init_3258_);
v___x_3283_ = lean_array_get_size(v_tail_3281_);
v___x_3284_ = lean_nat_dec_lt(v___x_3260_, v___x_3283_);
if (v___x_3284_ == 0)
{
return v___x_3282_;
}
else
{
size_t v___x_3285_; size_t v___x_3286_; lean_object* v___x_3287_; 
v___x_3285_ = ((size_t)0ULL);
v___x_3286_ = lean_usize_of_nat(v___x_3283_);
v___x_3287_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9_spec__24(v_tail_3281_, v___x_3285_, v___x_3286_, v___x_3282_);
return v___x_3287_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9___boxed(lean_object* v_t_3288_, lean_object* v_init_3289_, lean_object* v_start_3290_){
_start:
{
lean_object* v_res_3291_; 
v_res_3291_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9(v_t_3288_, v_init_3289_, v_start_3290_);
lean_dec(v_start_3290_);
lean_dec_ref(v_t_3288_);
return v_res_3291_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__9(void){
_start:
{
lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3308_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6));
v___x_3309_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__8));
v___x_3310_ = l_Lean_Name_append(v___x_3309_, v___x_3308_);
return v___x_3310_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__11(void){
_start:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3312_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__10));
v___x_3313_ = l_Lean_stringToMessageData(v___x_3312_);
return v___x_3313_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__13(void){
_start:
{
lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3315_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__12));
v___x_3316_ = l_Lean_stringToMessageData(v___x_3315_);
return v___x_3316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars(lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_){
_start:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; 
v___x_3328_ = l_Lean_instInhabitedExpr;
v___x_3329_ = lean_unsigned_to_nat(0u);
v___x_3330_ = lean_box(0);
v___x_3331_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_3317_, v_a_3325_);
if (lean_obj_tag(v___x_3331_) == 0)
{
lean_object* v_a_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3432_; 
v_a_3332_ = lean_ctor_get(v___x_3331_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3331_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3334_ = v___x_3331_;
v_isShared_3335_ = v_isSharedCheck_3432_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_a_3332_);
lean_dec(v___x_3331_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3432_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v_vars_3336_; lean_object* v_vars_x27_3337_; lean_object* v_dvds_3338_; lean_object* v_lowers_3339_; lean_object* v_uppers_3340_; lean_object* v_diseqs_3341_; uint8_t v___x_3342_; 
v_vars_3336_ = lean_ctor_get(v_a_3332_, 0);
lean_inc_ref(v_vars_3336_);
v_vars_x27_3337_ = lean_ctor_get(v_a_3332_, 2);
lean_inc_ref(v_vars_x27_3337_);
v_dvds_3338_ = lean_ctor_get(v_a_3332_, 6);
lean_inc_ref(v_dvds_3338_);
v_lowers_3339_ = lean_ctor_get(v_a_3332_, 7);
lean_inc_ref(v_lowers_3339_);
v_uppers_3340_ = lean_ctor_get(v_a_3332_, 8);
lean_inc_ref(v_uppers_3340_);
v_diseqs_3341_ = lean_ctor_get(v_a_3332_, 9);
lean_inc_ref(v_diseqs_3341_);
lean_dec(v_a_3332_);
v___x_3342_ = l_Lean_PersistentArray_isEmpty___redArg(v_vars_3336_);
lean_dec_ref(v_vars_3336_);
if (v___x_3342_ == 0)
{
uint8_t v___x_3343_; 
v___x_3343_ = l_Lean_PersistentArray_isEmpty___redArg(v_vars_x27_3337_);
lean_dec_ref(v_vars_x27_3337_);
if (v___x_3343_ == 0)
{
lean_object* v___x_3344_; lean_object* v___x_3346_; 
lean_dec_ref(v_diseqs_3341_);
lean_dec_ref(v_uppers_3340_);
lean_dec_ref(v_lowers_3339_);
lean_dec_ref(v_dvds_3338_);
v___x_3344_ = lean_box(0);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 0, v___x_3344_);
v___x_3346_ = v___x_3334_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v___x_3344_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
else
{
lean_object* v___x_3348_; 
lean_del_object(v___x_3334_);
v___x_3348_ = l_Lean_Meta_Grind_Arith_Cutsat_checkInvariants(v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v___x_3349_; 
lean_dec_ref_known(v___x_3348_, 1);
v___x_3349_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_sortVars(v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
if (lean_obj_tag(v___x_3349_) == 0)
{
lean_object* v_a_3350_; lean_object* v___x_3351_; lean_object* v___f_3352_; lean_object* v___f_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; size_t v_sz_3356_; size_t v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; size_t v_sz_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; size_t v_sz_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
v_a_3350_ = lean_ctor_get(v___x_3349_, 0);
lean_inc_n(v_a_3350_, 2);
lean_dec_ref_known(v___x_3349_, 1);
v___x_3351_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars_0__Lean_Meta_Grind_Arith_Cutsat_mkPermInv(v_a_3350_);
lean_inc_ref_n(v___x_3351_, 2);
v___f_3352_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3352_, 0, v___x_3329_);
lean_closure_set(v___f_3352_, 1, v___x_3351_);
v___f_3353_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___lam__1___boxed), 6, 5);
lean_closure_set(v___f_3353_, 0, v___x_3328_);
lean_closure_set(v___f_3353_, 1, v_a_3350_);
lean_closure_set(v___f_3353_, 2, v___f_3352_);
lean_closure_set(v___f_3353_, 3, v___x_3330_);
lean_closure_set(v___f_3353_, 4, v___x_3351_);
v___x_3354_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__0));
v___x_3355_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__7(v_dvds_3338_, v___x_3354_, v___x_3329_);
lean_dec_ref(v_dvds_3338_);
v_sz_3356_ = lean_array_size(v___x_3355_);
v___x_3357_ = ((size_t)0ULL);
v___x_3358_ = l_unsafeCast___redArg(v___x_3355_);
lean_dec_ref(v___x_3355_);
v___x_3359_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__8(v___x_3351_, v_sz_3356_, v___x_3357_, v___x_3358_);
v___x_3360_ = l_unsafeCast___redArg(v___x_3359_);
lean_dec_ref(v___x_3359_);
v___x_3361_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9(v_lowers_3339_, v___x_3354_, v___x_3329_);
lean_dec_ref(v_lowers_3339_);
v___x_3362_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__9(v_uppers_3340_, v___x_3361_, v___x_3329_);
lean_dec_ref(v_uppers_3340_);
v_sz_3363_ = lean_array_size(v___x_3362_);
v___x_3364_ = l_unsafeCast___redArg(v___x_3362_);
lean_dec_ref(v___x_3362_);
v___x_3365_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__10(v___x_3351_, v_sz_3363_, v___x_3357_, v___x_3364_);
v___x_3366_ = l_unsafeCast___redArg(v___x_3365_);
lean_dec_ref(v___x_3365_);
v___x_3367_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__11(v_diseqs_3341_, v___x_3354_, v___x_3329_);
lean_dec_ref(v_diseqs_3341_);
v_sz_3368_ = lean_array_size(v___x_3367_);
v___x_3369_ = l_unsafeCast___redArg(v___x_3367_);
lean_dec_ref(v___x_3367_);
v___x_3370_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__12(v___x_3351_, v_sz_3368_, v___x_3357_, v___x_3369_);
v___x_3371_ = l_unsafeCast___redArg(v___x_3370_);
lean_dec_ref(v___x_3370_);
v___x_3372_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_3373_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3372_, v___f_3353_, v_a_3317_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v___x_3374_; size_t v_sz_3375_; lean_object* v___x_3376_; 
lean_dec_ref_known(v___x_3373_, 1);
v___x_3374_ = lean_box(0);
v_sz_3375_ = lean_array_size(v___x_3360_);
v___x_3376_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__13(v___x_3360_, v_sz_3375_, v___x_3357_, v___x_3374_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
lean_dec(v___x_3360_);
if (lean_obj_tag(v___x_3376_) == 0)
{
size_t v_sz_3377_; lean_object* v___x_3378_; 
lean_dec_ref_known(v___x_3376_, 1);
v_sz_3377_ = lean_array_size(v___x_3366_);
v___x_3378_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__14(v___x_3366_, v_sz_3377_, v___x_3357_, v___x_3374_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
lean_dec(v___x_3366_);
if (lean_obj_tag(v___x_3378_) == 0)
{
size_t v_sz_3379_; lean_object* v___x_3380_; 
lean_dec_ref_known(v___x_3378_, 1);
v_sz_3379_ = lean_array_size(v___x_3371_);
v___x_3380_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__15(v___x_3371_, v_sz_3379_, v___x_3357_, v___x_3374_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
lean_dec(v___x_3371_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_toCold_3381_; lean_object* v_options_3382_; uint8_t v_hasTrace_3383_; 
lean_dec_ref_known(v___x_3380_, 1);
v_toCold_3381_ = lean_ctor_get(v_a_3325_, 0);
v_options_3382_ = lean_ctor_get(v_toCold_3381_, 2);
v_hasTrace_3383_ = lean_ctor_get_uint8(v_options_3382_, sizeof(void*)*1);
if (v_hasTrace_3383_ == 0)
{
lean_object* v___x_3384_; 
lean_dec_ref(v___x_3351_);
lean_dec(v_a_3350_);
v___x_3384_ = l_Lean_Meta_Grind_Arith_Cutsat_checkInvariants(v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
return v___x_3384_;
}
else
{
lean_object* v_inheritedTraceOptions_3385_; lean_object* v___x_3386_; lean_object* v___y_3388_; lean_object* v___y_3389_; lean_object* v___y_3390_; lean_object* v___y_3391_; lean_object* v___y_3392_; lean_object* v___y_3393_; lean_object* v___y_3394_; lean_object* v___y_3395_; lean_object* v___y_3396_; lean_object* v_options_3397_; lean_object* v_inheritedTraceOptions_3398_; lean_object* v___y_3399_; lean_object* v___x_3411_; uint8_t v___x_3412_; 
v_inheritedTraceOptions_3385_ = lean_ctor_get(v_toCold_3381_, 11);
v___x_3386_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__6));
v___x_3411_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__9);
v___x_3412_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3385_, v_options_3382_, v___x_3411_);
if (v___x_3412_ == 0)
{
lean_dec(v_a_3350_);
v___y_3388_ = v_a_3317_;
v___y_3389_ = v_a_3318_;
v___y_3390_ = v_a_3319_;
v___y_3391_ = v_a_3320_;
v___y_3392_ = v_a_3321_;
v___y_3393_ = v_a_3322_;
v___y_3394_ = v_a_3323_;
v___y_3395_ = v_a_3324_;
v___y_3396_ = v_a_3325_;
v_options_3397_ = v_options_3382_;
v_inheritedTraceOptions_3398_ = v_inheritedTraceOptions_3385_;
v___y_3399_ = v_a_3326_;
goto v___jp_3387_;
}
else
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3413_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__13, &l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__13_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__13);
v___x_3414_ = lean_array_to_list(v_a_3350_);
v___x_3415_ = lean_box(0);
v___x_3416_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__16(v___x_3414_, v___x_3415_);
v___x_3417_ = l_Lean_MessageData_ofList(v___x_3416_);
v___x_3418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3413_);
lean_ctor_set(v___x_3418_, 1, v___x_3417_);
v___x_3419_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg(v___x_3386_, v___x_3418_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_dec_ref_known(v___x_3419_, 1);
v___y_3388_ = v_a_3317_;
v___y_3389_ = v_a_3318_;
v___y_3390_ = v_a_3319_;
v___y_3391_ = v_a_3320_;
v___y_3392_ = v_a_3321_;
v___y_3393_ = v_a_3322_;
v___y_3394_ = v_a_3323_;
v___y_3395_ = v_a_3324_;
v___y_3396_ = v_a_3325_;
v_options_3397_ = v_options_3382_;
v_inheritedTraceOptions_3398_ = v_inheritedTraceOptions_3385_;
v___y_3399_ = v_a_3326_;
goto v___jp_3387_;
}
else
{
lean_dec_ref(v___x_3351_);
return v___x_3419_;
}
}
v___jp_3387_:
{
lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___x_3400_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__9);
v___x_3401_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3398_, v_options_3397_, v___x_3400_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; 
lean_dec_ref(v___x_3351_);
v___x_3402_ = l_Lean_Meta_Grind_Arith_Cutsat_checkInvariants(v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3399_);
return v___x_3402_;
}
else
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3403_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__11, &l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__11_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___closed__11);
v___x_3404_ = lean_array_to_list(v___x_3351_);
v___x_3405_ = lean_box(0);
v___x_3406_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__16(v___x_3404_, v___x_3405_);
v___x_3407_ = l_Lean_MessageData_ofList(v___x_3406_);
v___x_3408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3403_);
lean_ctor_set(v___x_3408_, 1, v___x_3407_);
v___x_3409_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg(v___x_3386_, v___x_3408_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3399_);
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_object* v___x_3410_; 
lean_dec_ref_known(v___x_3409_, 1);
v___x_3410_ = l_Lean_Meta_Grind_Arith_Cutsat_checkInvariants(v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3399_);
return v___x_3410_;
}
else
{
return v___x_3409_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3351_);
lean_dec(v_a_3350_);
return v___x_3380_;
}
}
else
{
lean_dec(v___x_3371_);
lean_dec_ref(v___x_3351_);
lean_dec(v_a_3350_);
return v___x_3378_;
}
}
else
{
lean_dec(v___x_3371_);
lean_dec(v___x_3366_);
lean_dec_ref(v___x_3351_);
lean_dec(v_a_3350_);
return v___x_3376_;
}
}
else
{
lean_dec(v___x_3371_);
lean_dec(v___x_3366_);
lean_dec(v___x_3360_);
lean_dec_ref(v___x_3351_);
lean_dec(v_a_3350_);
return v___x_3373_;
}
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
lean_dec_ref(v_diseqs_3341_);
lean_dec_ref(v_uppers_3340_);
lean_dec_ref(v_lowers_3339_);
lean_dec_ref(v_dvds_3338_);
v_a_3420_ = lean_ctor_get(v___x_3349_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3349_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3349_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
else
{
lean_dec_ref(v_diseqs_3341_);
lean_dec_ref(v_uppers_3340_);
lean_dec_ref(v_lowers_3339_);
lean_dec_ref(v_dvds_3338_);
return v___x_3348_;
}
}
}
else
{
lean_object* v___x_3428_; lean_object* v___x_3430_; 
lean_dec_ref(v_diseqs_3341_);
lean_dec_ref(v_uppers_3340_);
lean_dec_ref(v_lowers_3339_);
lean_dec_ref(v_dvds_3338_);
lean_dec_ref(v_vars_x27_3337_);
v___x_3428_ = lean_box(0);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 0, v___x_3428_);
v___x_3430_ = v___x_3334_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v___x_3428_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
else
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
v_a_3433_ = lean_ctor_get(v___x_3331_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3331_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3331_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3331_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3438_; 
if (v_isShared_3436_ == 0)
{
v___x_3438_ = v___x_3435_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v_a_3433_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_reorderVars___boxed(lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_, lean_object* v_a_3446_, lean_object* v_a_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_){
_start:
{
lean_object* v_res_3452_; 
v_res_3452_ = l_Lean_Meta_Grind_Arith_Cutsat_reorderVars(v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_, v_a_3445_, v_a_3446_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_);
lean_dec(v_a_3450_);
lean_dec_ref(v_a_3449_);
lean_dec(v_a_3448_);
lean_dec_ref(v_a_3447_);
lean_dec(v_a_3446_);
lean_dec_ref(v_a_3445_);
lean_dec(v_a_3444_);
lean_dec_ref(v_a_3443_);
lean_dec(v_a_3442_);
lean_dec(v_a_3441_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0(lean_object* v_00_u03b2_3453_, lean_object* v_00_u03c3_3454_, lean_object* v_pm_3455_, lean_object* v_f_3456_){
_start:
{
lean_object* v___x_3457_; 
v___x_3457_ = l_Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0___redArg(v_pm_3455_, v_f_3456_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17(lean_object* v_cls_3458_, lean_object* v_msg_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_){
_start:
{
lean_object* v___x_3471_; 
v___x_3471_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___redArg(v_cls_3458_, v_msg_3459_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
return v___x_3471_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17___boxed(lean_object* v_cls_3472_, lean_object* v_msg_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_){
_start:
{
lean_object* v_res_3485_; 
v_res_3485_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__17(v_cls_3472_, v_msg_3473_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_);
lean_dec(v___y_3483_);
lean_dec_ref(v___y_3482_);
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec(v___y_3477_);
lean_dec_ref(v___y_3476_);
lean_dec(v___y_3475_);
lean_dec(v___y_3474_);
return v_res_3485_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0___redArg(lean_object* v_pm_3486_, lean_object* v_f_3487_){
_start:
{
lean_object* v___x_3488_; 
v___x_3488_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1___redArg(v_f_3487_, v_pm_3486_);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0(lean_object* v_00_u03b2_3489_, lean_object* v_00_u03c3_3490_, lean_object* v_pm_3491_, lean_object* v_f_3492_){
_start:
{
lean_object* v___x_3493_; 
v___x_3493_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1___redArg(v_f_3492_, v_pm_3491_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3494_, lean_object* v_00_u03b2_3495_, lean_object* v_00_u03c3_3496_, lean_object* v_f_3497_, lean_object* v_n_3498_){
_start:
{
lean_object* v___x_3499_; 
v___x_3499_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1___redArg(v_f_3497_, v_n_3498_);
return v___x_3499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20(lean_object* v_00_u03b1_3500_, lean_object* v_00_u03b2_3501_, lean_object* v_00_u03c3_3502_, lean_object* v_f_3503_, size_t v_sz_3504_, size_t v_i_3505_, lean_object* v_bs_3506_){
_start:
{
lean_object* v___x_3507_; 
v___x_3507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20___redArg(v_f_3503_, v_sz_3504_, v_i_3505_, v_bs_3506_);
return v___x_3507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20___boxed(lean_object* v_00_u03b1_3508_, lean_object* v_00_u03b2_3509_, lean_object* v_00_u03c3_3510_, lean_object* v_f_3511_, lean_object* v_sz_3512_, lean_object* v_i_3513_, lean_object* v_bs_3514_){
_start:
{
size_t v_sz_boxed_3515_; size_t v_i_boxed_3516_; lean_object* v_res_3517_; 
v_sz_boxed_3515_ = lean_unbox_usize(v_sz_3512_);
lean_dec(v_sz_3512_);
v_i_boxed_3516_ = lean_unbox_usize(v_i_3513_);
lean_dec(v_i_3513_);
v_res_3517_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__20(v_00_u03b1_3508_, v_00_u03b2_3509_, v_00_u03c3_3510_, v_f_3511_, v_sz_boxed_3515_, v_i_boxed_3516_, v_bs_3514_);
return v_res_3517_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21(lean_object* v_00_u03b1_3518_, lean_object* v_00_u03b2_3519_, lean_object* v_f_3520_, lean_object* v_as_3521_){
_start:
{
lean_object* v___x_3522_; 
v___x_3522_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21___redArg(v_f_3520_, v_as_3521_);
return v___x_3522_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21___boxed(lean_object* v_00_u03b1_3523_, lean_object* v_00_u03b2_3524_, lean_object* v_f_3525_, lean_object* v_as_3526_){
_start:
{
lean_object* v_res_3527_; 
v_res_3527_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21(v_00_u03b1_3523_, v_00_u03b2_3524_, v_f_3525_, v_as_3526_);
lean_dec_ref(v_as_3526_);
return v_res_3527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41(lean_object* v_00_u03b1_3528_, lean_object* v_00_u03b2_3529_, lean_object* v_f_3530_, lean_object* v_as_3531_, lean_object* v_i_3532_, lean_object* v_acc_3533_, lean_object* v_hle_3534_){
_start:
{
lean_object* v___x_3535_; 
v___x_3535_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41___redArg(v_f_3530_, v_as_3531_, v_i_3532_, v_acc_3533_);
return v___x_3535_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41___boxed(lean_object* v_00_u03b1_3536_, lean_object* v_00_u03b2_3537_, lean_object* v_f_3538_, lean_object* v_as_3539_, lean_object* v_i_3540_, lean_object* v_acc_3541_, lean_object* v_hle_3542_){
_start:
{
lean_object* v_res_3543_; 
v_res_3543_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_Meta_Grind_Arith_Cutsat_reorderVars_spec__0_spec__0_spec__1_spec__21_spec__41(v_00_u03b1_3536_, v_00_u03b2_3537_, v_f_3538_, v_as_3539_, v_i_3540_, v_acc_3541_, v_hle_3542_);
lean_dec_ref(v_as_3539_);
return v_res_3543_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_EqCnstr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Inv(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_EqCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Inv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_EqCnstr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Inv(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_EqCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_DvdCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Inv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ReorderVars(builtin);
}
#ifdef __cplusplus
}
#endif

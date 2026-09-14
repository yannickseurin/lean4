// Lean compiler output
// Module: Lean.Meta.Tactic.Cbv.TheoremsLookup
// Imports: public import Lean.Meta.Sym.Simp.Theorems import Lean.Meta.Match.MatchEqsExt import Lean.Meta.Eqns
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
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_cbvTheoremsLookup;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__3;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_getEqnTheorems___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems___boxed__const__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getMatchTheorems___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getMatchTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getMatchTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany_spec__0(lean_object* v_as_1_, size_t v_i_2_, size_t v_stop_3_, lean_object* v_b_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_eq(v_i_2_, v_stop_3_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; lean_object* v___x_7_; size_t v___x_8_; size_t v___x_9_; 
v___x_6_ = lean_array_uget_borrowed(v_as_1_, v_i_2_);
lean_inc(v___x_6_);
v___x_7_ = l_Lean_Meta_Sym_Simp_Theorems_insert(v_b_4_, v___x_6_);
v___x_8_ = ((size_t)1ULL);
v___x_9_ = lean_usize_add(v_i_2_, v___x_8_);
v_i_2_ = v___x_9_;
v_b_4_ = v___x_7_;
goto _start;
}
else
{
return v_b_4_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany_spec__0___boxed(lean_object* v_as_11_, lean_object* v_i_12_, lean_object* v_stop_13_, lean_object* v_b_14_){
_start:
{
size_t v_i_boxed_15_; size_t v_stop_boxed_16_; lean_object* v_res_17_; 
v_i_boxed_15_ = lean_unbox_usize(v_i_12_);
lean_dec(v_i_12_);
v_stop_boxed_16_ = lean_unbox_usize(v_stop_13_);
lean_dec(v_stop_13_);
v_res_17_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany_spec__0(v_as_11_, v_i_boxed_15_, v_stop_boxed_16_, v_b_14_);
lean_dec_ref(v_as_11_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany(lean_object* v_thms_18_, lean_object* v_toInsert_19_){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; uint8_t v___x_22_; 
v___x_20_ = lean_unsigned_to_nat(0u);
v___x_21_ = lean_array_get_size(v_toInsert_19_);
v___x_22_ = lean_nat_dec_lt(v___x_20_, v___x_21_);
if (v___x_22_ == 0)
{
return v_thms_18_;
}
else
{
uint8_t v___x_23_; 
v___x_23_ = lean_nat_dec_le(v___x_21_, v___x_21_);
if (v___x_23_ == 0)
{
if (v___x_22_ == 0)
{
return v_thms_18_;
}
else
{
size_t v___x_24_; size_t v___x_25_; lean_object* v___x_26_; 
v___x_24_ = ((size_t)0ULL);
v___x_25_ = lean_usize_of_nat(v___x_21_);
v___x_26_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany_spec__0(v_toInsert_19_, v___x_24_, v___x_25_, v_thms_18_);
return v___x_26_;
}
}
else
{
size_t v___x_27_; size_t v___x_28_; lean_object* v___x_29_; 
v___x_27_ = ((size_t)0ULL);
v___x_28_ = lean_usize_of_nat(v___x_21_);
v___x_29_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany_spec__0(v_toInsert_19_, v___x_27_, v___x_28_, v_thms_18_);
return v___x_29_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany___boxed(lean_object* v_thms_30_, lean_object* v_toInsert_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany(v_thms_30_, v_toInsert_31_);
lean_dec_ref(v_toInsert_31_);
return v_res_32_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__1(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0);
v___x_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__2(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__1, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__1);
v___x_37_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
lean_ctor_set(v___x_37_, 2, v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__2, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__2);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default;
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_(lean_object* v___x_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_40_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2____boxed(lean_object* v___x_43_, lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_(v___x_43_);
return v_res_45_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_46_; lean_object* v___f_47_; 
v___x_46_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__2, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__2);
v___f_47_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_47_, 0, v___x_46_);
return v___f_47_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___f_49_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_);
v___x_50_ = lean_box(0);
v___x_51_ = lean_box(1);
v___x_52_ = l_Lean_registerEnvExtension___redArg(v___f_49_, v___x_50_, v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2____boxed(lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_();
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5_spec__6___redArg(lean_object* v_x_55_, lean_object* v_x_56_, lean_object* v_x_57_, lean_object* v_x_58_){
_start:
{
lean_object* v_ks_59_; lean_object* v_vs_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_84_; 
v_ks_59_ = lean_ctor_get(v_x_55_, 0);
v_vs_60_ = lean_ctor_get(v_x_55_, 1);
v_isSharedCheck_84_ = !lean_is_exclusive(v_x_55_);
if (v_isSharedCheck_84_ == 0)
{
v___x_62_ = v_x_55_;
v_isShared_63_ = v_isSharedCheck_84_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_vs_60_);
lean_inc(v_ks_59_);
lean_dec(v_x_55_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_84_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_64_ = lean_array_get_size(v_ks_59_);
v___x_65_ = lean_nat_dec_lt(v_x_56_, v___x_64_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_69_; 
lean_dec(v_x_56_);
v___x_66_ = lean_array_push(v_ks_59_, v_x_57_);
v___x_67_ = lean_array_push(v_vs_60_, v_x_58_);
if (v_isShared_63_ == 0)
{
lean_ctor_set(v___x_62_, 1, v___x_67_);
lean_ctor_set(v___x_62_, 0, v___x_66_);
v___x_69_ = v___x_62_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_66_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v___x_67_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
else
{
lean_object* v_k_x27_71_; uint8_t v___x_72_; 
v_k_x27_71_ = lean_array_fget_borrowed(v_ks_59_, v_x_56_);
v___x_72_ = lean_name_eq(v_x_57_, v_k_x27_71_);
if (v___x_72_ == 0)
{
lean_object* v___x_74_; 
if (v_isShared_63_ == 0)
{
v___x_74_ = v___x_62_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_ks_59_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v_vs_60_);
v___x_74_ = v_reuseFailAlloc_78_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_unsigned_to_nat(1u);
v___x_76_ = lean_nat_add(v_x_56_, v___x_75_);
lean_dec(v_x_56_);
v_x_55_ = v___x_74_;
v_x_56_ = v___x_76_;
goto _start;
}
}
else
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_82_; 
v___x_79_ = lean_array_fset(v_ks_59_, v_x_56_, v_x_57_);
v___x_80_ = lean_array_fset(v_vs_60_, v_x_56_, v_x_58_);
lean_dec(v_x_56_);
if (v_isShared_63_ == 0)
{
lean_ctor_set(v___x_62_, 1, v___x_80_);
lean_ctor_set(v___x_62_, 0, v___x_79_);
v___x_82_ = v___x_62_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_79_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v___x_80_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5___redArg(lean_object* v_n_85_, lean_object* v_k_86_, lean_object* v_v_87_){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5_spec__6___redArg(v_n_85_, v___x_88_, v_k_86_, v_v_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_box(0);
v___x_91_ = l_unsafeCast___redArg(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg(lean_object* v_x_93_, size_t v_x_94_, size_t v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_object* v_es_98_; size_t v___x_99_; size_t v___x_100_; lean_object* v_j_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v_es_98_ = lean_ctor_get(v_x_93_, 0);
v___x_99_ = ((size_t)31ULL);
v___x_100_ = lean_usize_land(v_x_94_, v___x_99_);
v_j_101_ = lean_usize_to_nat(v___x_100_);
v___x_102_ = lean_array_get_size(v_es_98_);
v___x_103_ = lean_nat_dec_lt(v_j_101_, v___x_102_);
if (v___x_103_ == 0)
{
lean_dec(v_j_101_);
lean_dec(v_x_97_);
lean_dec(v_x_96_);
return v_x_93_;
}
else
{
lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_142_; 
lean_inc_ref(v_es_98_);
v_isSharedCheck_142_ = !lean_is_exclusive(v_x_93_);
if (v_isSharedCheck_142_ == 0)
{
lean_object* v_unused_143_; 
v_unused_143_ = lean_ctor_get(v_x_93_, 0);
lean_dec(v_unused_143_);
v___x_105_ = v_x_93_;
v_isShared_106_ = v_isSharedCheck_142_;
goto v_resetjp_104_;
}
else
{
lean_dec(v_x_93_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_142_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v_v_107_; lean_object* v___x_108_; lean_object* v_xs_x27_109_; lean_object* v___y_111_; 
v_v_107_ = lean_array_fget(v_es_98_, v_j_101_);
v___x_108_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__0);
v_xs_x27_109_ = lean_array_fset(v_es_98_, v_j_101_, v___x_108_);
switch(lean_obj_tag(v_v_107_))
{
case 0:
{
lean_object* v_key_116_; lean_object* v_val_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_127_; 
v_key_116_ = lean_ctor_get(v_v_107_, 0);
v_val_117_ = lean_ctor_get(v_v_107_, 1);
v_isSharedCheck_127_ = !lean_is_exclusive(v_v_107_);
if (v_isSharedCheck_127_ == 0)
{
v___x_119_ = v_v_107_;
v_isShared_120_ = v_isSharedCheck_127_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_val_117_);
lean_inc(v_key_116_);
lean_dec(v_v_107_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_127_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
uint8_t v___x_121_; 
v___x_121_ = lean_name_eq(v_x_96_, v_key_116_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; lean_object* v___x_123_; 
lean_del_object(v___x_119_);
v___x_122_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_116_, v_val_117_, v_x_96_, v_x_97_);
v___x_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
v___y_111_ = v___x_123_;
goto v___jp_110_;
}
else
{
lean_object* v___x_125_; 
lean_dec(v_val_117_);
lean_dec(v_key_116_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 1, v_x_97_);
lean_ctor_set(v___x_119_, 0, v_x_96_);
v___x_125_ = v___x_119_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_x_96_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_x_97_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
v___y_111_ = v___x_125_;
goto v___jp_110_;
}
}
}
}
case 1:
{
lean_object* v_node_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_140_; 
v_node_128_ = lean_ctor_get(v_v_107_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v_v_107_);
if (v_isSharedCheck_140_ == 0)
{
v___x_130_ = v_v_107_;
v_isShared_131_ = v_isSharedCheck_140_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_node_128_);
lean_dec(v_v_107_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_140_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
size_t v___x_132_; size_t v___x_133_; size_t v___x_134_; size_t v___x_135_; lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_132_ = ((size_t)5ULL);
v___x_133_ = lean_usize_shift_right(v_x_94_, v___x_132_);
v___x_134_ = ((size_t)1ULL);
v___x_135_ = lean_usize_add(v_x_95_, v___x_134_);
v___x_136_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg(v_node_128_, v___x_133_, v___x_135_, v_x_96_, v_x_97_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 0, v___x_136_);
v___x_138_ = v___x_130_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v___x_136_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
v___y_111_ = v___x_138_;
goto v___jp_110_;
}
}
}
default: 
{
lean_object* v___x_141_; 
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v_x_96_);
lean_ctor_set(v___x_141_, 1, v_x_97_);
v___y_111_ = v___x_141_;
goto v___jp_110_;
}
}
v___jp_110_:
{
lean_object* v___x_112_; lean_object* v___x_114_; 
v___x_112_ = lean_array_fset(v_xs_x27_109_, v_j_101_, v___y_111_);
lean_dec(v_j_101_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 0, v___x_112_);
v___x_114_ = v___x_105_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_112_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
}
else
{
lean_object* v_ks_144_; lean_object* v_vs_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_163_; 
v_ks_144_ = lean_ctor_get(v_x_93_, 0);
v_vs_145_ = lean_ctor_get(v_x_93_, 1);
v_isSharedCheck_163_ = !lean_is_exclusive(v_x_93_);
if (v_isSharedCheck_163_ == 0)
{
v___x_147_ = v_x_93_;
v_isShared_148_ = v_isSharedCheck_163_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_vs_145_);
lean_inc(v_ks_144_);
lean_dec(v_x_93_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_163_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_ks_144_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_vs_145_);
v___x_150_ = v_reuseFailAlloc_162_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v_newNode_151_; size_t v___x_152_; uint8_t v___x_153_; 
v_newNode_151_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5___redArg(v___x_150_, v_x_96_, v_x_97_);
v___x_152_ = ((size_t)7ULL);
v___x_153_ = lean_usize_dec_le(v___x_152_, v_x_95_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_154_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_151_);
v___x_155_ = lean_unsigned_to_nat(4u);
v___x_156_ = lean_nat_dec_lt(v___x_154_, v___x_155_);
lean_dec(v___x_154_);
if (v___x_156_ == 0)
{
lean_object* v_ks_157_; lean_object* v_vs_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_ks_157_ = lean_ctor_get(v_newNode_151_, 0);
lean_inc_ref(v_ks_157_);
v_vs_158_ = lean_ctor_get(v_newNode_151_, 1);
lean_inc_ref(v_vs_158_);
lean_dec_ref(v_newNode_151_);
v___x_159_ = lean_unsigned_to_nat(0u);
v___x_160_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___closed__1);
v___x_161_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6___redArg(v_x_95_, v_ks_157_, v_vs_158_, v___x_159_, v___x_160_);
lean_dec_ref(v_vs_158_);
lean_dec_ref(v_ks_157_);
return v___x_161_;
}
else
{
return v_newNode_151_;
}
}
else
{
return v_newNode_151_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6___redArg(size_t v_depth_164_, lean_object* v_keys_165_, lean_object* v_vals_166_, lean_object* v_i_167_, lean_object* v_entries_168_){
_start:
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = lean_array_get_size(v_keys_165_);
v___x_170_ = lean_nat_dec_lt(v_i_167_, v___x_169_);
if (v___x_170_ == 0)
{
lean_dec(v_i_167_);
return v_entries_168_;
}
else
{
lean_object* v_k_171_; lean_object* v_v_172_; uint64_t v___y_174_; lean_object* v___x_185_; 
v_k_171_ = lean_array_fget_borrowed(v_keys_165_, v_i_167_);
v_v_172_ = lean_array_fget_borrowed(v_vals_166_, v_i_167_);
v___x_185_ = l_unsafeCast___redArg(v_k_171_);
if (lean_obj_tag(v___x_185_) == 0)
{
uint64_t v___x_186_; 
v___x_186_ = 1723ULL;
v___y_174_ = v___x_186_;
goto v___jp_173_;
}
else
{
uint64_t v_hash_187_; 
v_hash_187_ = lean_ctor_get_uint64(v___x_185_, sizeof(void*)*2);
lean_dec(v___x_185_);
v___y_174_ = v_hash_187_;
goto v___jp_173_;
}
v___jp_173_:
{
size_t v_h_175_; size_t v___x_176_; lean_object* v___x_177_; size_t v___x_178_; size_t v___x_179_; size_t v___x_180_; size_t v_h_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_h_175_ = lean_uint64_to_usize(v___y_174_);
v___x_176_ = ((size_t)5ULL);
v___x_177_ = lean_unsigned_to_nat(1u);
v___x_178_ = ((size_t)1ULL);
v___x_179_ = lean_usize_sub(v_depth_164_, v___x_178_);
v___x_180_ = lean_usize_mul(v___x_176_, v___x_179_);
v_h_181_ = lean_usize_shift_right(v_h_175_, v___x_180_);
v___x_182_ = lean_nat_add(v_i_167_, v___x_177_);
lean_dec(v_i_167_);
lean_inc(v_v_172_);
lean_inc(v_k_171_);
v___x_183_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg(v_entries_168_, v_h_181_, v_depth_164_, v_k_171_, v_v_172_);
v_i_167_ = v___x_182_;
v_entries_168_ = v___x_183_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_depth_188_, lean_object* v_keys_189_, lean_object* v_vals_190_, lean_object* v_i_191_, lean_object* v_entries_192_){
_start:
{
size_t v_depth_boxed_193_; lean_object* v_res_194_; 
v_depth_boxed_193_ = lean_unbox_usize(v_depth_188_);
lean_dec(v_depth_188_);
v_res_194_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6___redArg(v_depth_boxed_193_, v_keys_189_, v_vals_190_, v_i_191_, v_entries_192_);
lean_dec_ref(v_vals_190_);
lean_dec_ref(v_keys_189_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg___boxed(lean_object* v_x_195_, lean_object* v_x_196_, lean_object* v_x_197_, lean_object* v_x_198_, lean_object* v_x_199_){
_start:
{
size_t v_x_2207__boxed_200_; size_t v_x_2208__boxed_201_; lean_object* v_res_202_; 
v_x_2207__boxed_200_ = lean_unbox_usize(v_x_196_);
lean_dec(v_x_196_);
v_x_2208__boxed_201_ = lean_unbox_usize(v_x_197_);
lean_dec(v_x_197_);
v_res_202_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg(v_x_195_, v_x_2207__boxed_200_, v_x_2208__boxed_201_, v_x_198_, v_x_199_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2___redArg(lean_object* v_x_203_, lean_object* v_x_204_, lean_object* v_x_205_){
_start:
{
uint64_t v___y_207_; lean_object* v___x_211_; 
v___x_211_ = l_unsafeCast___redArg(v_x_204_);
if (lean_obj_tag(v___x_211_) == 0)
{
uint64_t v___x_212_; 
v___x_212_ = 1723ULL;
v___y_207_ = v___x_212_;
goto v___jp_206_;
}
else
{
uint64_t v_hash_213_; 
v_hash_213_ = lean_ctor_get_uint64(v___x_211_, sizeof(void*)*2);
lean_dec(v___x_211_);
v___y_207_ = v_hash_213_;
goto v___jp_206_;
}
v___jp_206_:
{
size_t v___x_208_; size_t v___x_209_; lean_object* v___x_210_; 
v___x_208_ = lean_uint64_to_usize(v___y_207_);
v___x_209_ = ((size_t)1ULL);
v___x_210_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg(v_x_203_, v___x_208_, v___x_209_, v_x_204_, v_x_205_);
return v___x_210_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems___lam__0(lean_object* v_fnName_214_, lean_object* v___x_215_, lean_object* v_cache_216_){
_start:
{
lean_object* v_eqnTheorems_217_; lean_object* v_unfoldTheorems_218_; lean_object* v_matchTheorems_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_227_; 
v_eqnTheorems_217_ = lean_ctor_get(v_cache_216_, 0);
v_unfoldTheorems_218_ = lean_ctor_get(v_cache_216_, 1);
v_matchTheorems_219_ = lean_ctor_get(v_cache_216_, 2);
v_isSharedCheck_227_ = !lean_is_exclusive(v_cache_216_);
if (v_isSharedCheck_227_ == 0)
{
v___x_221_ = v_cache_216_;
v_isShared_222_ = v_isSharedCheck_227_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_matchTheorems_219_);
lean_inc(v_unfoldTheorems_218_);
lean_inc(v_eqnTheorems_217_);
lean_dec(v_cache_216_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_227_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_223_; lean_object* v___x_225_; 
v___x_223_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2___redArg(v_eqnTheorems_217_, v_fnName_214_, v___x_215_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v___x_223_);
v___x_225_ = v___x_221_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v_unfoldTheorems_218_);
lean_ctor_set(v_reuseFailAlloc_226_, 2, v_matchTheorems_219_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__1(size_t v_sz_228_, size_t v_i_229_, lean_object* v_bs_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
uint8_t v___x_236_; 
v___x_236_ = lean_usize_dec_lt(v_i_229_, v_sz_228_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = l_unsafeCast___redArg(v_bs_230_);
lean_dec_ref(v_bs_230_);
v___x_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
return v___x_238_;
}
else
{
lean_object* v_v_239_; lean_object* v___x_240_; lean_object* v_bs_x27_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_v_239_ = lean_array_uget(v_bs_230_, v_i_229_);
v___x_240_ = lean_unsigned_to_nat(0u);
v_bs_x27_241_ = lean_array_uset(v_bs_230_, v_i_229_, v___x_240_);
v___x_242_ = l_unsafeCast___redArg(v_v_239_);
lean_dec(v_v_239_);
v___x_243_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v___x_242_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; size_t v___x_245_; size_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
lean_inc(v_a_244_);
lean_dec_ref_known(v___x_243_, 1);
v___x_245_ = ((size_t)1ULL);
v___x_246_ = lean_usize_add(v_i_229_, v___x_245_);
v___x_247_ = l_unsafeCast___redArg(v_a_244_);
lean_dec(v_a_244_);
v___x_248_ = lean_array_uset(v_bs_x27_241_, v_i_229_, v___x_247_);
v_i_229_ = v___x_246_;
v_bs_230_ = v___x_248_;
goto _start;
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_dec_ref(v_bs_x27_241_);
v_a_250_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_243_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_243_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__1___boxed(lean_object* v_sz_258_, lean_object* v_i_259_, lean_object* v_bs_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
size_t v_sz_boxed_266_; size_t v_i_boxed_267_; lean_object* v_res_268_; 
v_sz_boxed_266_ = lean_unbox_usize(v_sz_258_);
lean_dec(v_sz_258_);
v_i_boxed_267_ = lean_unbox_usize(v_i_259_);
lean_dec(v_i_259_);
v_res_268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__1(v_sz_boxed_266_, v_i_boxed_267_, v_bs_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_269_, lean_object* v_vals_270_, lean_object* v_i_271_, lean_object* v_k_272_){
_start:
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = lean_array_get_size(v_keys_269_);
v___x_274_ = lean_nat_dec_lt(v_i_271_, v___x_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; 
lean_dec(v_i_271_);
v___x_275_ = lean_box(0);
return v___x_275_;
}
else
{
lean_object* v_k_x27_276_; uint8_t v___x_277_; 
v_k_x27_276_ = lean_array_fget_borrowed(v_keys_269_, v_i_271_);
v___x_277_ = lean_name_eq(v_k_272_, v_k_x27_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_unsigned_to_nat(1u);
v___x_279_ = lean_nat_add(v_i_271_, v___x_278_);
lean_dec(v_i_271_);
v_i_271_ = v___x_279_;
goto _start;
}
else
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_array_fget_borrowed(v_vals_270_, v_i_271_);
lean_dec(v_i_271_);
lean_inc(v___x_281_);
v___x_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
return v___x_282_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_283_, lean_object* v_vals_284_, lean_object* v_i_285_, lean_object* v_k_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1___redArg(v_keys_283_, v_vals_284_, v_i_285_, v_k_286_);
lean_dec(v_k_286_);
lean_dec_ref(v_vals_284_);
lean_dec_ref(v_keys_283_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0___redArg(lean_object* v_x_288_, size_t v_x_289_, lean_object* v_x_290_){
_start:
{
if (lean_obj_tag(v_x_288_) == 0)
{
lean_object* v_es_291_; lean_object* v___x_292_; size_t v___x_293_; size_t v___x_294_; lean_object* v_j_295_; lean_object* v___x_296_; 
v_es_291_ = lean_ctor_get(v_x_288_, 0);
v___x_292_ = lean_box(2);
v___x_293_ = ((size_t)31ULL);
v___x_294_ = lean_usize_land(v_x_289_, v___x_293_);
v_j_295_ = lean_usize_to_nat(v___x_294_);
v___x_296_ = lean_array_get_borrowed(v___x_292_, v_es_291_, v_j_295_);
lean_dec(v_j_295_);
switch(lean_obj_tag(v___x_296_))
{
case 0:
{
lean_object* v_key_297_; lean_object* v_val_298_; uint8_t v___x_299_; 
v_key_297_ = lean_ctor_get(v___x_296_, 0);
v_val_298_ = lean_ctor_get(v___x_296_, 1);
v___x_299_ = lean_name_eq(v_x_290_, v_key_297_);
if (v___x_299_ == 0)
{
lean_object* v___x_300_; 
v___x_300_ = lean_box(0);
return v___x_300_;
}
else
{
lean_object* v___x_301_; 
lean_inc(v_val_298_);
v___x_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_301_, 0, v_val_298_);
return v___x_301_;
}
}
case 1:
{
lean_object* v_node_302_; size_t v___x_303_; size_t v___x_304_; 
v_node_302_ = lean_ctor_get(v___x_296_, 0);
v___x_303_ = ((size_t)5ULL);
v___x_304_ = lean_usize_shift_right(v_x_289_, v___x_303_);
v_x_288_ = v_node_302_;
v_x_289_ = v___x_304_;
goto _start;
}
default: 
{
lean_object* v___x_306_; 
v___x_306_ = lean_box(0);
return v___x_306_;
}
}
}
else
{
lean_object* v_ks_307_; lean_object* v_vs_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_ks_307_ = lean_ctor_get(v_x_288_, 0);
v_vs_308_ = lean_ctor_get(v_x_288_, 1);
v___x_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1___redArg(v_ks_307_, v_vs_308_, v___x_309_, v_x_290_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0___redArg___boxed(lean_object* v_x_311_, lean_object* v_x_312_, lean_object* v_x_313_){
_start:
{
size_t v_x_2475__boxed_314_; lean_object* v_res_315_; 
v_x_2475__boxed_314_ = lean_unbox_usize(v_x_312_);
lean_dec(v_x_312_);
v_res_315_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0___redArg(v_x_311_, v_x_2475__boxed_314_, v_x_313_);
lean_dec(v_x_313_);
lean_dec_ref(v_x_311_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___redArg(lean_object* v_x_316_, lean_object* v_x_317_){
_start:
{
uint64_t v___y_319_; lean_object* v___x_322_; 
v___x_322_ = l_unsafeCast___redArg(v_x_317_);
if (lean_obj_tag(v___x_322_) == 0)
{
uint64_t v___x_323_; 
v___x_323_ = 1723ULL;
v___y_319_ = v___x_323_;
goto v___jp_318_;
}
else
{
uint64_t v_hash_324_; 
v_hash_324_ = lean_ctor_get_uint64(v___x_322_, sizeof(void*)*2);
lean_dec(v___x_322_);
v___y_319_ = v_hash_324_;
goto v___jp_318_;
}
v___jp_318_:
{
size_t v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_uint64_to_usize(v___y_319_);
v___x_321_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0___redArg(v_x_316_, v___x_320_, v_x_317_);
return v___x_321_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___redArg___boxed(lean_object* v_x_325_, lean_object* v_x_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___redArg(v_x_325_, v_x_326_);
lean_dec(v_x_326_);
lean_dec_ref(v_x_325_);
return v_res_327_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = lean_box(0);
v___x_329_ = l_unsafeCast___redArg(v___x_328_);
return v___x_329_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0);
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__2(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1);
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
return v___x_333_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__3(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1);
v___x_335_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
lean_ctor_set(v___x_335_, 2, v___x_334_);
lean_ctor_set(v___x_335_, 3, v___x_334_);
lean_ctor_set(v___x_335_, 4, v___x_334_);
lean_ctor_set(v___x_335_, 5, v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems(lean_object* v_fnName_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v_env_346_; lean_object* v___x_347_; lean_object* v_asyncMode_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v_eqnTheorems_351_; lean_object* v___x_352_; 
v___x_344_ = l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default;
v___x_345_ = lean_st_ref_get(v_a_342_);
v_env_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc_ref(v_env_346_);
lean_dec(v___x_345_);
v___x_347_ = l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_cbvTheoremsLookup;
v_asyncMode_348_ = lean_ctor_get(v___x_347_, 2);
v___x_349_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0);
v___x_350_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_344_, v___x_347_, v_env_346_, v_asyncMode_348_, v___x_349_);
v_eqnTheorems_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc_ref(v_eqnTheorems_351_);
lean_dec(v___x_350_);
v___x_352_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___redArg(v_eqnTheorems_351_, v_fnName_338_);
lean_dec_ref(v_eqnTheorems_351_);
if (lean_obj_tag(v___x_352_) == 1)
{
lean_object* v_val_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
lean_dec(v_fnName_338_);
v_val_353_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_352_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_val_353_);
lean_dec(v___x_352_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
lean_ctor_set_tag(v___x_355_, 0);
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_val_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
else
{
lean_object* v___x_361_; 
lean_dec(v___x_352_);
lean_inc(v_fnName_338_);
v___x_361_ = l_Lean_Meta_getEqnsFor_x3f(v_fnName_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_);
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_432_; 
v_a_362_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_432_ == 0)
{
v___x_364_ = v___x_361_;
v_isShared_365_ = v_isSharedCheck_432_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_361_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_432_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
if (lean_obj_tag(v_a_362_) == 1)
{
lean_object* v_val_366_; size_t v_sz_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_2044__overap_372_; lean_object* v___x_373_; 
lean_del_object(v___x_364_);
v_val_366_ = lean_ctor_get(v_a_362_, 0);
lean_inc(v_val_366_);
lean_dec_ref_known(v_a_362_, 1);
v_sz_367_ = lean_array_size(v_val_366_);
v___x_368_ = l_unsafeCast___redArg(v_val_366_);
lean_dec(v_val_366_);
v___x_369_ = lean_box_usize(v_sz_367_);
v___x_370_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getEqnTheorems___boxed__const__1));
v___x_371_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__1___boxed), 8, 3);
lean_closure_set(v___x_371_, 0, v___x_369_);
lean_closure_set(v___x_371_, 1, v___x_370_);
lean_closure_set(v___x_371_, 2, v___x_368_);
v___x_2044__overap_372_ = l_unsafeCast___redArg(v___x_371_);
lean_dec_ref(v___x_371_);
lean_inc(v_a_342_);
lean_inc_ref(v_a_341_);
lean_inc(v_a_340_);
lean_inc_ref(v_a_339_);
v___x_373_ = lean_apply_5(v___x_2044__overap_372_, v_a_339_, v_a_340_, v_a_341_, v_a_342_, lean_box(0));
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_419_; 
v_a_374_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_419_ == 0)
{
v___x_376_ = v___x_373_;
v_isShared_377_ = v_isSharedCheck_419_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_373_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_419_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___f_380_; lean_object* v___x_381_; lean_object* v_env_382_; lean_object* v_nextMacroScope_383_; lean_object* v_ngen_384_; lean_object* v_auxDeclNGen_385_; lean_object* v_traceState_386_; lean_object* v_messages_387_; lean_object* v_infoState_388_; lean_object* v_snapshotTasks_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_417_; 
v___x_378_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1);
v___x_379_ = l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany(v___x_378_, v_a_374_);
lean_dec(v_a_374_);
lean_inc_ref(v___x_379_);
v___f_380_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_getEqnTheorems___lam__0), 3, 2);
lean_closure_set(v___f_380_, 0, v_fnName_338_);
lean_closure_set(v___f_380_, 1, v___x_379_);
v___x_381_ = lean_st_ref_take(v_a_342_);
v_env_382_ = lean_ctor_get(v___x_381_, 0);
v_nextMacroScope_383_ = lean_ctor_get(v___x_381_, 1);
v_ngen_384_ = lean_ctor_get(v___x_381_, 2);
v_auxDeclNGen_385_ = lean_ctor_get(v___x_381_, 3);
v_traceState_386_ = lean_ctor_get(v___x_381_, 4);
v_messages_387_ = lean_ctor_get(v___x_381_, 6);
v_infoState_388_ = lean_ctor_get(v___x_381_, 7);
v_snapshotTasks_389_ = lean_ctor_get(v___x_381_, 8);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_417_ == 0)
{
lean_object* v_unused_418_; 
v_unused_418_ = lean_ctor_get(v___x_381_, 5);
lean_dec(v_unused_418_);
v___x_391_ = v___x_381_;
v_isShared_392_ = v_isSharedCheck_417_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_snapshotTasks_389_);
lean_inc(v_infoState_388_);
lean_inc(v_messages_387_);
lean_inc(v_traceState_386_);
lean_inc(v_auxDeclNGen_385_);
lean_inc(v_ngen_384_);
lean_inc(v_nextMacroScope_383_);
lean_inc(v_env_382_);
lean_dec(v___x_381_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_417_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_396_; 
v___x_393_ = l_Lean_EnvExtension_modifyState___redArg(v___x_347_, v_env_382_, v___f_380_, v_asyncMode_348_, v___x_349_);
v___x_394_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__2, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__2);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 5, v___x_394_);
lean_ctor_set(v___x_391_, 0, v___x_393_);
v___x_396_ = v___x_391_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_393_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_nextMacroScope_383_);
lean_ctor_set(v_reuseFailAlloc_416_, 2, v_ngen_384_);
lean_ctor_set(v_reuseFailAlloc_416_, 3, v_auxDeclNGen_385_);
lean_ctor_set(v_reuseFailAlloc_416_, 4, v_traceState_386_);
lean_ctor_set(v_reuseFailAlloc_416_, 5, v___x_394_);
lean_ctor_set(v_reuseFailAlloc_416_, 6, v_messages_387_);
lean_ctor_set(v_reuseFailAlloc_416_, 7, v_infoState_388_);
lean_ctor_set(v_reuseFailAlloc_416_, 8, v_snapshotTasks_389_);
v___x_396_ = v_reuseFailAlloc_416_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v_mctx_399_; lean_object* v_zetaDeltaFVarIds_400_; lean_object* v_postponed_401_; lean_object* v_diag_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_414_; 
v___x_397_ = lean_st_ref_put(v_a_342_, v___x_396_);
v___x_398_ = lean_st_ref_take(v_a_340_);
v_mctx_399_ = lean_ctor_get(v___x_398_, 0);
v_zetaDeltaFVarIds_400_ = lean_ctor_get(v___x_398_, 2);
v_postponed_401_ = lean_ctor_get(v___x_398_, 3);
v_diag_402_ = lean_ctor_get(v___x_398_, 4);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_414_ == 0)
{
lean_object* v_unused_415_; 
v_unused_415_ = lean_ctor_get(v___x_398_, 1);
lean_dec(v_unused_415_);
v___x_404_ = v___x_398_;
v_isShared_405_ = v_isSharedCheck_414_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_diag_402_);
lean_inc(v_postponed_401_);
lean_inc(v_zetaDeltaFVarIds_400_);
lean_inc(v_mctx_399_);
lean_dec(v___x_398_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_414_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_408_; 
v___x_406_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__3, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__3_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__3);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 1, v___x_406_);
v___x_408_ = v___x_404_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_mctx_399_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v___x_406_);
lean_ctor_set(v_reuseFailAlloc_413_, 2, v_zetaDeltaFVarIds_400_);
lean_ctor_set(v_reuseFailAlloc_413_, 3, v_postponed_401_);
lean_ctor_set(v_reuseFailAlloc_413_, 4, v_diag_402_);
v___x_408_ = v_reuseFailAlloc_413_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = lean_st_ref_put(v_a_340_, v___x_408_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 0, v___x_379_);
v___x_411_ = v___x_376_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_379_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_427_; 
lean_dec(v_fnName_338_);
v_a_420_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_427_ == 0)
{
v___x_422_ = v___x_373_;
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_373_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_420_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
else
{
lean_object* v___x_428_; lean_object* v___x_430_; 
lean_dec(v_a_362_);
lean_dec(v_fnName_338_);
v___x_428_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_428_);
v___x_430_ = v___x_364_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_428_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
lean_dec(v_fnName_338_);
v_a_433_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_361_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_361_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getEqnTheorems___boxed(lean_object* v_fnName_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_Meta_Tactic_Cbv_getEqnTheorems(v_fnName_441_, v_a_442_, v_a_443_, v_a_444_, v_a_445_);
lean_dec(v_a_445_);
lean_dec_ref(v_a_444_);
lean_dec(v_a_443_);
lean_dec_ref(v_a_442_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0(lean_object* v_00_u03b2_448_, lean_object* v_x_449_, lean_object* v_x_450_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___redArg(v_x_449_, v_x_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___boxed(lean_object* v_00_u03b2_452_, lean_object* v_x_453_, lean_object* v_x_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0(v_00_u03b2_452_, v_x_453_, v_x_454_);
lean_dec(v_x_454_);
lean_dec_ref(v_x_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2(lean_object* v_00_u03b2_456_, lean_object* v_x_457_, lean_object* v_x_458_, lean_object* v_x_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2___redArg(v_x_457_, v_x_458_, v_x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0(lean_object* v_00_u03b2_461_, lean_object* v_x_462_, size_t v_x_463_, lean_object* v_x_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0___redArg(v_x_462_, v_x_463_, v_x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0___boxed(lean_object* v_00_u03b2_466_, lean_object* v_x_467_, lean_object* v_x_468_, lean_object* v_x_469_){
_start:
{
size_t v_x_2764__boxed_470_; lean_object* v_res_471_; 
v_x_2764__boxed_470_ = lean_unbox_usize(v_x_468_);
lean_dec(v_x_468_);
v_res_471_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0(v_00_u03b2_466_, v_x_467_, v_x_2764__boxed_470_, v_x_469_);
lean_dec(v_x_469_);
lean_dec_ref(v_x_467_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3(lean_object* v_00_u03b2_472_, lean_object* v_x_473_, size_t v_x_474_, size_t v_x_475_, lean_object* v_x_476_, lean_object* v_x_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___redArg(v_x_473_, v_x_474_, v_x_475_, v_x_476_, v_x_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3___boxed(lean_object* v_00_u03b2_479_, lean_object* v_x_480_, lean_object* v_x_481_, lean_object* v_x_482_, lean_object* v_x_483_, lean_object* v_x_484_){
_start:
{
size_t v_x_2775__boxed_485_; size_t v_x_2776__boxed_486_; lean_object* v_res_487_; 
v_x_2775__boxed_485_ = lean_unbox_usize(v_x_481_);
lean_dec(v_x_481_);
v_x_2776__boxed_486_ = lean_unbox_usize(v_x_482_);
lean_dec(v_x_482_);
v_res_487_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3(v_00_u03b2_479_, v_x_480_, v_x_2775__boxed_485_, v_x_2776__boxed_486_, v_x_483_, v_x_484_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_488_, lean_object* v_keys_489_, lean_object* v_vals_490_, lean_object* v_heq_491_, lean_object* v_i_492_, lean_object* v_k_493_){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1___redArg(v_keys_489_, v_vals_490_, v_i_492_, v_k_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_495_, lean_object* v_keys_496_, lean_object* v_vals_497_, lean_object* v_heq_498_, lean_object* v_i_499_, lean_object* v_k_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0_spec__0_spec__1(v_00_u03b2_495_, v_keys_496_, v_vals_497_, v_heq_498_, v_i_499_, v_k_500_);
lean_dec(v_k_500_);
lean_dec_ref(v_vals_497_);
lean_dec_ref(v_keys_496_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_502_, lean_object* v_n_503_, lean_object* v_k_504_, lean_object* v_v_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5___redArg(v_n_503_, v_k_504_, v_v_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_507_, size_t v_depth_508_, lean_object* v_keys_509_, lean_object* v_vals_510_, lean_object* v_heq_511_, lean_object* v_i_512_, lean_object* v_entries_513_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6___redArg(v_depth_508_, v_keys_509_, v_vals_510_, v_i_512_, v_entries_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_515_, lean_object* v_depth_516_, lean_object* v_keys_517_, lean_object* v_vals_518_, lean_object* v_heq_519_, lean_object* v_i_520_, lean_object* v_entries_521_){
_start:
{
size_t v_depth_boxed_522_; lean_object* v_res_523_; 
v_depth_boxed_522_ = lean_unbox_usize(v_depth_516_);
lean_dec(v_depth_516_);
v_res_523_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__6(v_00_u03b2_515_, v_depth_boxed_522_, v_keys_517_, v_vals_518_, v_heq_519_, v_i_520_, v_entries_521_);
lean_dec_ref(v_vals_518_);
lean_dec_ref(v_keys_517_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_524_, lean_object* v_x_525_, lean_object* v_x_526_, lean_object* v_x_527_, lean_object* v_x_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2_spec__3_spec__5_spec__6___redArg(v_x_525_, v_x_526_, v_x_527_, v_x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___lam__0(lean_object* v_fnName_530_, lean_object* v_a_531_, lean_object* v_cache_532_){
_start:
{
lean_object* v_eqnTheorems_533_; lean_object* v_unfoldTheorems_534_; lean_object* v_matchTheorems_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_543_; 
v_eqnTheorems_533_ = lean_ctor_get(v_cache_532_, 0);
v_unfoldTheorems_534_ = lean_ctor_get(v_cache_532_, 1);
v_matchTheorems_535_ = lean_ctor_get(v_cache_532_, 2);
v_isSharedCheck_543_ = !lean_is_exclusive(v_cache_532_);
if (v_isSharedCheck_543_ == 0)
{
v___x_537_ = v_cache_532_;
v_isShared_538_ = v_isSharedCheck_543_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_matchTheorems_535_);
lean_inc(v_unfoldTheorems_534_);
lean_inc(v_eqnTheorems_533_);
lean_dec(v_cache_532_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_543_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_539_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2___redArg(v_unfoldTheorems_534_, v_fnName_530_, v_a_531_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 1, v___x_539_);
v___x_541_ = v___x_537_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_eqnTheorems_533_);
lean_ctor_set(v_reuseFailAlloc_542_, 1, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_542_, 2, v_matchTheorems_535_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__0(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default___closed__0);
v___x_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
return v___x_545_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__1(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__0, &l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__0);
v___x_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v___x_546_);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__2(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__0, &l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__0);
v___x_549_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
lean_ctor_set(v___x_549_, 2, v___x_548_);
lean_ctor_set(v___x_549_, 3, v___x_548_);
lean_ctor_set(v___x_549_, 4, v___x_548_);
lean_ctor_set(v___x_549_, 5, v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem(lean_object* v_fnName_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v_env_558_; lean_object* v___x_559_; lean_object* v_asyncMode_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v_unfoldTheorems_563_; lean_object* v___x_564_; 
v___x_556_ = l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default;
v___x_557_ = lean_st_ref_get(v_a_554_);
v_env_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc_ref(v_env_558_);
lean_dec(v___x_557_);
v___x_559_ = l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_cbvTheoremsLookup;
v_asyncMode_560_ = lean_ctor_get(v___x_559_, 2);
v___x_561_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0);
v___x_562_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_556_, v___x_559_, v_env_558_, v_asyncMode_560_, v___x_561_);
v_unfoldTheorems_563_ = lean_ctor_get(v___x_562_, 1);
lean_inc_ref(v_unfoldTheorems_563_);
lean_dec(v___x_562_);
v___x_564_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___redArg(v_unfoldTheorems_563_, v_fnName_550_);
lean_dec_ref(v_unfoldTheorems_563_);
if (lean_obj_tag(v___x_564_) == 1)
{
lean_object* v___x_565_; 
lean_dec(v_fnName_550_);
v___x_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
return v___x_565_;
}
else
{
uint8_t v___x_566_; lean_object* v___x_567_; 
lean_dec(v___x_564_);
v___x_566_ = 1;
lean_inc(v_fnName_550_);
v___x_567_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fnName_550_, v___x_566_, v_a_551_, v_a_552_, v_a_553_, v_a_554_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_637_; 
v_a_568_ = lean_ctor_get(v___x_567_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_637_ == 0)
{
v___x_570_ = v___x_567_;
v_isShared_571_ = v_isSharedCheck_637_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_567_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_637_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
if (lean_obj_tag(v_a_568_) == 1)
{
lean_object* v_val_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_632_; 
lean_del_object(v___x_570_);
v_val_572_ = lean_ctor_get(v_a_568_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v_a_568_);
if (v_isSharedCheck_632_ == 0)
{
v___x_574_ = v_a_568_;
v_isShared_575_ = v_isSharedCheck_632_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_val_572_);
lean_dec(v_a_568_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_632_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; 
v___x_576_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v_val_572_, v_a_551_, v_a_552_, v_a_553_, v_a_554_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_623_; 
v_a_577_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_623_ == 0)
{
v___x_579_ = v___x_576_;
v_isShared_580_ = v_isSharedCheck_623_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_576_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_623_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___f_581_; lean_object* v___x_582_; lean_object* v_env_583_; lean_object* v_nextMacroScope_584_; lean_object* v_ngen_585_; lean_object* v_auxDeclNGen_586_; lean_object* v_traceState_587_; lean_object* v_messages_588_; lean_object* v_infoState_589_; lean_object* v_snapshotTasks_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_621_; 
lean_inc(v_a_577_);
v___f_581_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___lam__0), 3, 2);
lean_closure_set(v___f_581_, 0, v_fnName_550_);
lean_closure_set(v___f_581_, 1, v_a_577_);
v___x_582_ = lean_st_ref_take(v_a_554_);
v_env_583_ = lean_ctor_get(v___x_582_, 0);
v_nextMacroScope_584_ = lean_ctor_get(v___x_582_, 1);
v_ngen_585_ = lean_ctor_get(v___x_582_, 2);
v_auxDeclNGen_586_ = lean_ctor_get(v___x_582_, 3);
v_traceState_587_ = lean_ctor_get(v___x_582_, 4);
v_messages_588_ = lean_ctor_get(v___x_582_, 6);
v_infoState_589_ = lean_ctor_get(v___x_582_, 7);
v_snapshotTasks_590_ = lean_ctor_get(v___x_582_, 8);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_621_ == 0)
{
lean_object* v_unused_622_; 
v_unused_622_ = lean_ctor_get(v___x_582_, 5);
lean_dec(v_unused_622_);
v___x_592_ = v___x_582_;
v_isShared_593_ = v_isSharedCheck_621_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_snapshotTasks_590_);
lean_inc(v_infoState_589_);
lean_inc(v_messages_588_);
lean_inc(v_traceState_587_);
lean_inc(v_auxDeclNGen_586_);
lean_inc(v_ngen_585_);
lean_inc(v_nextMacroScope_584_);
lean_inc(v_env_583_);
lean_dec(v___x_582_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_621_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_594_ = l_Lean_EnvExtension_modifyState___redArg(v___x_559_, v_env_583_, v___f_581_, v_asyncMode_560_, v___x_561_);
v___x_595_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__1, &l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__1);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 5, v___x_595_);
lean_ctor_set(v___x_592_, 0, v___x_594_);
v___x_597_ = v___x_592_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v___x_594_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_nextMacroScope_584_);
lean_ctor_set(v_reuseFailAlloc_620_, 2, v_ngen_585_);
lean_ctor_set(v_reuseFailAlloc_620_, 3, v_auxDeclNGen_586_);
lean_ctor_set(v_reuseFailAlloc_620_, 4, v_traceState_587_);
lean_ctor_set(v_reuseFailAlloc_620_, 5, v___x_595_);
lean_ctor_set(v_reuseFailAlloc_620_, 6, v_messages_588_);
lean_ctor_set(v_reuseFailAlloc_620_, 7, v_infoState_589_);
lean_ctor_set(v_reuseFailAlloc_620_, 8, v_snapshotTasks_590_);
v___x_597_ = v_reuseFailAlloc_620_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v_mctx_600_; lean_object* v_zetaDeltaFVarIds_601_; lean_object* v_postponed_602_; lean_object* v_diag_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_618_; 
v___x_598_ = lean_st_ref_put(v_a_554_, v___x_597_);
v___x_599_ = lean_st_ref_take(v_a_552_);
v_mctx_600_ = lean_ctor_get(v___x_599_, 0);
v_zetaDeltaFVarIds_601_ = lean_ctor_get(v___x_599_, 2);
v_postponed_602_ = lean_ctor_get(v___x_599_, 3);
v_diag_603_ = lean_ctor_get(v___x_599_, 4);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_618_ == 0)
{
lean_object* v_unused_619_; 
v_unused_619_ = lean_ctor_get(v___x_599_, 1);
lean_dec(v_unused_619_);
v___x_605_ = v___x_599_;
v_isShared_606_ = v_isSharedCheck_618_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_diag_603_);
lean_inc(v_postponed_602_);
lean_inc(v_zetaDeltaFVarIds_601_);
lean_inc(v_mctx_600_);
lean_dec(v___x_599_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_618_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_607_; lean_object* v___x_609_; 
v___x_607_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__2, &l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___closed__2);
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 1, v___x_607_);
v___x_609_ = v___x_605_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_mctx_600_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v___x_607_);
lean_ctor_set(v_reuseFailAlloc_617_, 2, v_zetaDeltaFVarIds_601_);
lean_ctor_set(v_reuseFailAlloc_617_, 3, v_postponed_602_);
lean_ctor_set(v_reuseFailAlloc_617_, 4, v_diag_603_);
v___x_609_ = v_reuseFailAlloc_617_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
lean_object* v___x_610_; lean_object* v___x_612_; 
v___x_610_ = lean_st_ref_put(v_a_552_, v___x_609_);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v_a_577_);
v___x_612_ = v___x_574_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_577_);
v___x_612_ = v_reuseFailAlloc_616_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_614_; 
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 0, v___x_612_);
v___x_614_ = v___x_579_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_612_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
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
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
lean_del_object(v___x_574_);
lean_dec(v_fnName_550_);
v_a_624_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_576_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_576_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_a_624_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
else
{
lean_object* v___x_633_; lean_object* v___x_635_; 
lean_dec(v_a_568_);
lean_dec(v_fnName_550_);
v___x_633_ = lean_box(0);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 0, v___x_633_);
v___x_635_ = v___x_570_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_633_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
else
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_645_; 
lean_dec(v_fnName_550_);
v_a_638_ = lean_ctor_get(v___x_567_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_645_ == 0)
{
v___x_640_ = v___x_567_;
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_567_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_643_; 
if (v_isShared_641_ == 0)
{
v___x_643_ = v___x_640_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_a_638_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem___boxed(lean_object* v_fnName_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_Meta_Tactic_Cbv_getUnfoldTheorem(v_fnName_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_);
lean_dec(v_a_650_);
lean_dec_ref(v_a_649_);
lean_dec(v_a_648_);
lean_dec_ref(v_a_647_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getMatchTheorems___lam__0(lean_object* v_matcherName_653_, lean_object* v___x_654_, lean_object* v_cache_655_){
_start:
{
lean_object* v_eqnTheorems_656_; lean_object* v_unfoldTheorems_657_; lean_object* v_matchTheorems_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_666_; 
v_eqnTheorems_656_ = lean_ctor_get(v_cache_655_, 0);
v_unfoldTheorems_657_ = lean_ctor_get(v_cache_655_, 1);
v_matchTheorems_658_ = lean_ctor_get(v_cache_655_, 2);
v_isSharedCheck_666_ = !lean_is_exclusive(v_cache_655_);
if (v_isSharedCheck_666_ == 0)
{
v___x_660_ = v_cache_655_;
v_isShared_661_ = v_isSharedCheck_666_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_matchTheorems_658_);
lean_inc(v_unfoldTheorems_657_);
lean_inc(v_eqnTheorems_656_);
lean_dec(v_cache_655_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_666_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_662_; lean_object* v___x_664_; 
v___x_662_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__2___redArg(v_matchTheorems_658_, v_matcherName_653_, v___x_654_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 2, v___x_662_);
v___x_664_ = v___x_660_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_eqnTheorems_656_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_unfoldTheorems_657_);
lean_ctor_set(v_reuseFailAlloc_665_, 2, v___x_662_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getMatchTheorems(lean_object* v_matcherName_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v_env_675_; lean_object* v___x_676_; lean_object* v_asyncMode_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v_matchTheorems_680_; lean_object* v___x_681_; 
v___x_673_ = l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default;
v___x_674_ = lean_st_ref_get(v_a_671_);
v_env_675_ = lean_ctor_get(v___x_674_, 0);
lean_inc_ref(v_env_675_);
lean_dec(v___x_674_);
v___x_676_ = l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_cbvTheoremsLookup;
v_asyncMode_677_ = lean_ctor_get(v___x_676_, 2);
v___x_678_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__0);
v___x_679_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_673_, v___x_676_, v_env_675_, v_asyncMode_677_, v___x_678_);
v_matchTheorems_680_ = lean_ctor_get(v___x_679_, 2);
lean_inc_ref(v_matchTheorems_680_);
lean_dec(v___x_679_);
v___x_681_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__0___redArg(v_matchTheorems_680_, v_matcherName_667_);
lean_dec_ref(v_matchTheorems_680_);
if (lean_obj_tag(v___x_681_) == 1)
{
lean_object* v_val_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec(v_matcherName_667_);
v_val_682_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_681_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_val_682_);
lean_dec(v___x_681_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
lean_ctor_set_tag(v___x_684_, 0);
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_val_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
else
{
lean_object* v___x_690_; 
lean_dec(v___x_681_);
lean_inc(v_a_671_);
lean_inc_ref(v_a_670_);
lean_inc(v_a_669_);
lean_inc_ref(v_a_668_);
lean_inc(v_matcherName_667_);
v___x_690_ = lean_get_match_equations_for(v_matcherName_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v_eqnNames_692_; size_t v_sz_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_1264__overap_698_; lean_object* v___x_699_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_691_);
lean_dec_ref_known(v___x_690_, 1);
v_eqnNames_692_ = lean_ctor_get(v_a_691_, 0);
lean_inc_ref(v_eqnNames_692_);
lean_dec(v_a_691_);
v_sz_693_ = lean_array_size(v_eqnNames_692_);
v___x_694_ = l_unsafeCast___redArg(v_eqnNames_692_);
lean_dec_ref(v_eqnNames_692_);
v___x_695_ = lean_box_usize(v_sz_693_);
v___x_696_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getEqnTheorems___boxed__const__1));
v___x_697_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_Cbv_getEqnTheorems_spec__1___boxed), 8, 3);
lean_closure_set(v___x_697_, 0, v___x_695_);
lean_closure_set(v___x_697_, 1, v___x_696_);
lean_closure_set(v___x_697_, 2, v___x_694_);
v___x_1264__overap_698_ = l_unsafeCast___redArg(v___x_697_);
lean_dec_ref(v___x_697_);
lean_inc(v_a_671_);
lean_inc_ref(v_a_670_);
lean_inc(v_a_669_);
lean_inc_ref(v_a_668_);
v___x_699_ = lean_apply_5(v___x_1264__overap_698_, v_a_668_, v_a_669_, v_a_670_, v_a_671_, lean_box(0));
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_745_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_745_ == 0)
{
v___x_702_ = v___x_699_;
v_isShared_703_ = v_isSharedCheck_745_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_699_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_745_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___f_706_; lean_object* v___x_707_; lean_object* v_env_708_; lean_object* v_nextMacroScope_709_; lean_object* v_ngen_710_; lean_object* v_auxDeclNGen_711_; lean_object* v_traceState_712_; lean_object* v_messages_713_; lean_object* v_infoState_714_; lean_object* v_snapshotTasks_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_743_; 
v___x_704_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__1);
v___x_705_ = l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Sym_Simp_Theorems_insertMany(v___x_704_, v_a_700_);
lean_dec(v_a_700_);
lean_inc_ref(v___x_705_);
v___f_706_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_getMatchTheorems___lam__0), 3, 2);
lean_closure_set(v___f_706_, 0, v_matcherName_667_);
lean_closure_set(v___f_706_, 1, v___x_705_);
v___x_707_ = lean_st_ref_take(v_a_671_);
v_env_708_ = lean_ctor_get(v___x_707_, 0);
v_nextMacroScope_709_ = lean_ctor_get(v___x_707_, 1);
v_ngen_710_ = lean_ctor_get(v___x_707_, 2);
v_auxDeclNGen_711_ = lean_ctor_get(v___x_707_, 3);
v_traceState_712_ = lean_ctor_get(v___x_707_, 4);
v_messages_713_ = lean_ctor_get(v___x_707_, 6);
v_infoState_714_ = lean_ctor_get(v___x_707_, 7);
v_snapshotTasks_715_ = lean_ctor_get(v___x_707_, 8);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_743_ == 0)
{
lean_object* v_unused_744_; 
v_unused_744_ = lean_ctor_get(v___x_707_, 5);
lean_dec(v_unused_744_);
v___x_717_ = v___x_707_;
v_isShared_718_ = v_isSharedCheck_743_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_snapshotTasks_715_);
lean_inc(v_infoState_714_);
lean_inc(v_messages_713_);
lean_inc(v_traceState_712_);
lean_inc(v_auxDeclNGen_711_);
lean_inc(v_ngen_710_);
lean_inc(v_nextMacroScope_709_);
lean_inc(v_env_708_);
lean_dec(v___x_707_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_743_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_722_; 
v___x_719_ = l_Lean_EnvExtension_modifyState___redArg(v___x_676_, v_env_708_, v___f_706_, v_asyncMode_677_, v___x_678_);
v___x_720_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__2, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__2);
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 5, v___x_720_);
lean_ctor_set(v___x_717_, 0, v___x_719_);
v___x_722_ = v___x_717_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v___x_719_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v_nextMacroScope_709_);
lean_ctor_set(v_reuseFailAlloc_742_, 2, v_ngen_710_);
lean_ctor_set(v_reuseFailAlloc_742_, 3, v_auxDeclNGen_711_);
lean_ctor_set(v_reuseFailAlloc_742_, 4, v_traceState_712_);
lean_ctor_set(v_reuseFailAlloc_742_, 5, v___x_720_);
lean_ctor_set(v_reuseFailAlloc_742_, 6, v_messages_713_);
lean_ctor_set(v_reuseFailAlloc_742_, 7, v_infoState_714_);
lean_ctor_set(v_reuseFailAlloc_742_, 8, v_snapshotTasks_715_);
v___x_722_ = v_reuseFailAlloc_742_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v_mctx_725_; lean_object* v_zetaDeltaFVarIds_726_; lean_object* v_postponed_727_; lean_object* v_diag_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_740_; 
v___x_723_ = lean_st_ref_put(v_a_671_, v___x_722_);
v___x_724_ = lean_st_ref_take(v_a_669_);
v_mctx_725_ = lean_ctor_get(v___x_724_, 0);
v_zetaDeltaFVarIds_726_ = lean_ctor_get(v___x_724_, 2);
v_postponed_727_ = lean_ctor_get(v___x_724_, 3);
v_diag_728_ = lean_ctor_get(v___x_724_, 4);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_740_ == 0)
{
lean_object* v_unused_741_; 
v_unused_741_ = lean_ctor_get(v___x_724_, 1);
lean_dec(v_unused_741_);
v___x_730_ = v___x_724_;
v_isShared_731_ = v_isSharedCheck_740_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_diag_728_);
lean_inc(v_postponed_727_);
lean_inc(v_zetaDeltaFVarIds_726_);
lean_inc(v_mctx_725_);
lean_dec(v___x_724_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_740_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; lean_object* v___x_734_; 
v___x_732_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__3, &l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__3_once, _init_l_Lean_Meta_Tactic_Cbv_getEqnTheorems___closed__3);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 1, v___x_732_);
v___x_734_ = v___x_730_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_mctx_725_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v___x_732_);
lean_ctor_set(v_reuseFailAlloc_739_, 2, v_zetaDeltaFVarIds_726_);
lean_ctor_set(v_reuseFailAlloc_739_, 3, v_postponed_727_);
lean_ctor_set(v_reuseFailAlloc_739_, 4, v_diag_728_);
v___x_734_ = v_reuseFailAlloc_739_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_735_ = lean_st_ref_put(v_a_669_, v___x_734_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v___x_705_);
v___x_737_ = v___x_702_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_705_);
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
}
}
else
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
lean_dec(v_matcherName_667_);
v_a_746_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_699_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_699_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec(v_matcherName_667_);
v_a_754_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_690_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_690_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getMatchTheorems___boxed(lean_object* v_matcherName_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lean_Meta_Tactic_Cbv_getMatchTheorems(v_matcherName_762_, v_a_763_, v_a_764_, v_a_765_, v_a_766_);
lean_dec(v_a_766_);
lean_dec_ref(v_a_765_);
lean_dec(v_a_764_);
lean_dec_ref(v_a_763_);
return v_res_768_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Eqns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_TheoremsLookup(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default = _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default();
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState_default);
l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState = _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState();
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_instInhabitedCbvTheoremsLookupState);
res = l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_TheoremsLookup_3695032707____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_cbvTheoremsLookup = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Tactic_Cbv_TheoremsLookup_0__Lean_Meta_Tactic_Cbv_cbvTheoremsLookup);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Cbv_TheoremsLookup(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Eqns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Cbv_TheoremsLookup(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_TheoremsLookup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Cbv_TheoremsLookup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Cbv_TheoremsLookup(builtin);
}
#ifdef __cplusplus
}
#endif

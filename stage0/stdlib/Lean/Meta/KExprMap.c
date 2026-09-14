// Lean compiler output
// Module: Lean.Meta.KExprMap
// Imports: public import Lean.Data.AssocList public import Lean.HeadIndex public import Lean.Meta.Basic
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint64_t l_Lean_HeadIndex_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqHeadIndex_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Expr_toHeadIndex(lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedKExprMap_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedKExprMap_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_find_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_find_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_insert___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__0, &l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__0_once, _init_l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap_default___redArg(){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_obj_once(&l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__1, &l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__1_once, _init_l_Lean_Meta_instInhabitedKExprMap_default___redArg___closed__1);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap_default___redArg___boxed(lean_object* v___dummy_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Meta_instInhabitedKExprMap_default___redArg();
return v_res_7_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedKExprMap_default___closed__0(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_Meta_instInhabitedKExprMap_default___redArg();
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap_default(lean_object* v_00_u03b1_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&l_Lean_Meta_instInhabitedKExprMap_default___closed__0, &l_Lean_Meta_instInhabitedKExprMap_default___closed__0_once, _init_l_Lean_Meta_instInhabitedKExprMap_default___closed__0);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap___redArg(){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_obj_once(&l_Lean_Meta_instInhabitedKExprMap_default___closed__0, &l_Lean_Meta_instInhabitedKExprMap_default___closed__0_once, _init_l_Lean_Meta_instInhabitedKExprMap_default___closed__0);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap___redArg___boxed(lean_object* v___dummy_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lean_Meta_instInhabitedKExprMap___redArg();
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedKExprMap(lean_object* v_a_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_obj_once(&l_Lean_Meta_instInhabitedKExprMap_default___closed__0, &l_Lean_Meta_instInhabitedKExprMap_default___closed__0_once, _init_l_Lean_Meta_instInhabitedKExprMap_default___closed__0);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_17_, lean_object* v_vals_18_, lean_object* v_i_19_, lean_object* v_k_20_){
_start:
{
lean_object* v___x_21_; uint8_t v___x_22_; 
v___x_21_ = lean_array_get_size(v_keys_17_);
v___x_22_ = lean_nat_dec_lt(v_i_19_, v___x_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; 
lean_dec(v_i_19_);
v___x_23_ = lean_box(0);
return v___x_23_;
}
else
{
lean_object* v_k_x27_24_; uint8_t v___x_25_; 
v_k_x27_24_ = lean_array_fget_borrowed(v_keys_17_, v_i_19_);
v___x_25_ = l_Lean_instBEqHeadIndex_beq(v_k_20_, v_k_x27_24_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_unsigned_to_nat(1u);
v___x_27_ = lean_nat_add(v_i_19_, v___x_26_);
lean_dec(v_i_19_);
v_i_19_ = v___x_27_;
goto _start;
}
else
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_array_fget_borrowed(v_vals_18_, v_i_19_);
lean_dec(v_i_19_);
lean_inc(v___x_29_);
v___x_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_31_, lean_object* v_vals_32_, lean_object* v_i_33_, lean_object* v_k_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_31_, v_vals_32_, v_i_33_, v_k_34_);
lean_dec(v_k_34_);
lean_dec_ref(v_vals_32_);
lean_dec_ref(v_keys_31_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0___redArg(lean_object* v_x_36_, size_t v_x_37_, lean_object* v_x_38_){
_start:
{
if (lean_obj_tag(v_x_36_) == 0)
{
lean_object* v_es_39_; lean_object* v___x_40_; size_t v___x_41_; size_t v___x_42_; lean_object* v_j_43_; lean_object* v___x_44_; 
v_es_39_ = lean_ctor_get(v_x_36_, 0);
v___x_40_ = lean_box(2);
v___x_41_ = ((size_t)31ULL);
v___x_42_ = lean_usize_land(v_x_37_, v___x_41_);
v_j_43_ = lean_usize_to_nat(v___x_42_);
v___x_44_ = lean_array_get_borrowed(v___x_40_, v_es_39_, v_j_43_);
lean_dec(v_j_43_);
switch(lean_obj_tag(v___x_44_))
{
case 0:
{
lean_object* v_key_45_; lean_object* v_val_46_; uint8_t v___x_47_; 
v_key_45_ = lean_ctor_get(v___x_44_, 0);
v_val_46_ = lean_ctor_get(v___x_44_, 1);
v___x_47_ = l_Lean_instBEqHeadIndex_beq(v_x_38_, v_key_45_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; 
v___x_48_ = lean_box(0);
return v___x_48_;
}
else
{
lean_object* v___x_49_; 
lean_inc(v_val_46_);
v___x_49_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_49_, 0, v_val_46_);
return v___x_49_;
}
}
case 1:
{
lean_object* v_node_50_; size_t v___x_51_; size_t v___x_52_; 
v_node_50_ = lean_ctor_get(v___x_44_, 0);
v___x_51_ = ((size_t)5ULL);
v___x_52_ = lean_usize_shift_right(v_x_37_, v___x_51_);
v_x_36_ = v_node_50_;
v_x_37_ = v___x_52_;
goto _start;
}
default: 
{
lean_object* v___x_54_; 
v___x_54_ = lean_box(0);
return v___x_54_;
}
}
}
else
{
lean_object* v_ks_55_; lean_object* v_vs_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_ks_55_ = lean_ctor_get(v_x_36_, 0);
v_vs_56_ = lean_ctor_get(v_x_36_, 1);
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_ks_55_, v_vs_56_, v___x_57_, v_x_38_);
return v___x_58_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_59_, lean_object* v_x_60_, lean_object* v_x_61_){
_start:
{
size_t v_x_1396__boxed_62_; lean_object* v_res_63_; 
v_x_1396__boxed_62_ = lean_unbox_usize(v_x_60_);
lean_dec(v_x_60_);
v_res_63_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0___redArg(v_x_59_, v_x_1396__boxed_62_, v_x_61_);
lean_dec(v_x_61_);
lean_dec_ref(v_x_59_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0___redArg(lean_object* v_x_64_, lean_object* v_x_65_){
_start:
{
uint64_t v___x_66_; size_t v___x_67_; lean_object* v___x_68_; 
v___x_66_ = l_Lean_HeadIndex_hash(v_x_65_);
v___x_67_ = lean_uint64_to_usize(v___x_66_);
v___x_68_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0___redArg(v_x_64_, v___x_67_, v_x_65_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0___redArg___boxed(lean_object* v_x_69_, lean_object* v_x_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0___redArg(v_x_69_, v_x_70_);
lean_dec(v_x_70_);
lean_dec_ref(v_x_69_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg(lean_object* v_e_75_, lean_object* v_x_76_, lean_object* v_x_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
if (lean_obj_tag(v_x_77_) == 0)
{
lean_object* v___x_83_; 
lean_dec_ref(v_e_75_);
v___x_83_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_83_, 0, v_x_76_);
return v___x_83_;
}
else
{
lean_object* v_key_84_; lean_object* v_value_85_; lean_object* v_tail_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
lean_dec_ref(v_x_76_);
v_key_84_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_key_84_);
v_value_85_ = lean_ctor_get(v_x_77_, 1);
lean_inc(v_value_85_);
v_tail_86_ = lean_ctor_get(v_x_77_, 2);
lean_inc(v_tail_86_);
lean_dec_ref_known(v_x_77_, 3);
v___x_87_ = lean_box(0);
v___x_88_ = ((lean_object*)(l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg___closed__0));
lean_inc_ref(v_e_75_);
v___x_89_ = l_Lean_Meta_isExprDefEq(v_e_75_, v_key_84_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_89_) == 0)
{
lean_object* v_a_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_102_; 
v_a_90_ = lean_ctor_get(v___x_89_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_102_ == 0)
{
v___x_92_ = v___x_89_;
v_isShared_93_ = v_isSharedCheck_102_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_a_90_);
lean_dec(v___x_89_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_102_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
uint8_t v___x_94_; 
v___x_94_ = lean_unbox(v_a_90_);
lean_dec(v_a_90_);
if (v___x_94_ == 0)
{
lean_del_object(v___x_92_);
lean_dec(v_value_85_);
v_x_76_ = v___x_88_;
v_x_77_ = v_tail_86_;
goto _start;
}
else
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
lean_dec(v_tail_86_);
lean_dec_ref(v_e_75_);
v___x_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_96_, 0, v_value_85_);
v___x_97_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
v___x_98_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_87_);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 0, v___x_98_);
v___x_100_ = v___x_92_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_98_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
}
else
{
lean_object* v_a_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_110_; 
lean_dec(v_tail_86_);
lean_dec(v_value_85_);
lean_dec_ref(v_e_75_);
v_a_103_ = lean_ctor_get(v___x_89_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_110_ == 0)
{
v___x_105_ = v___x_89_;
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_a_103_);
lean_dec(v___x_89_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_108_; 
if (v_isShared_106_ == 0)
{
v___x_108_ = v___x_105_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_a_103_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg___boxed(lean_object* v_e_111_, lean_object* v_x_112_, lean_object* v_x_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg(v_e_111_, v_x_112_, v_x_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
lean_dec(v___y_117_);
lean_dec_ref(v___y_116_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_find_x3f___redArg(lean_object* v_m_120_, lean_object* v_e_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
lean_inc_ref(v_e_121_);
v___x_127_ = l_Lean_Expr_toHeadIndex(v_e_121_);
v___x_128_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0___redArg(v_m_120_, v___x_127_);
lean_dec(v___x_127_);
if (lean_obj_tag(v___x_128_) == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; 
lean_dec_ref(v_e_121_);
v___x_129_ = lean_box(0);
v___x_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
else
{
lean_object* v_val_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_val_131_ = lean_ctor_get(v___x_128_, 0);
lean_inc(v_val_131_);
lean_dec_ref_known(v___x_128_, 1);
v___x_132_ = lean_box(0);
v___x_133_ = ((lean_object*)(l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg___closed__0));
v___x_134_ = l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg(v_e_121_, v___x_133_, v_val_131_, v_a_122_, v_a_123_, v_a_124_, v_a_125_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_147_; 
v_a_135_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_147_ == 0)
{
v___x_137_ = v___x_134_;
v_isShared_138_ = v_isSharedCheck_147_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_a_135_);
lean_dec(v___x_134_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_147_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v_fst_139_; 
v_fst_139_ = lean_ctor_get(v_a_135_, 0);
lean_inc(v_fst_139_);
lean_dec(v_a_135_);
if (lean_obj_tag(v_fst_139_) == 0)
{
lean_object* v___x_141_; 
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 0, v___x_132_);
v___x_141_ = v___x_137_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_132_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
else
{
lean_object* v_val_143_; lean_object* v___x_145_; 
v_val_143_ = lean_ctor_get(v_fst_139_, 0);
lean_inc(v_val_143_);
lean_dec_ref_known(v_fst_139_, 1);
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 0, v_val_143_);
v___x_145_ = v___x_137_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_val_143_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
v_a_148_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_134_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_134_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_find_x3f___redArg___boxed(lean_object* v_m_156_, lean_object* v_e_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lean_Meta_KExprMap_find_x3f___redArg(v_m_156_, v_e_157_, v_a_158_, v_a_159_, v_a_160_, v_a_161_);
lean_dec(v_a_161_);
lean_dec_ref(v_a_160_);
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec_ref(v_m_156_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_find_x3f(lean_object* v_00_u03b1_164_, lean_object* v_m_165_, lean_object* v_e_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Lean_Meta_KExprMap_find_x3f___redArg(v_m_165_, v_e_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_find_x3f___boxed(lean_object* v_00_u03b1_173_, lean_object* v_m_174_, lean_object* v_e_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_Meta_KExprMap_find_x3f(v_00_u03b1_173_, v_m_174_, v_e_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
lean_dec(v_a_179_);
lean_dec_ref(v_a_178_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
lean_dec_ref(v_m_174_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0(lean_object* v_00_u03b2_182_, lean_object* v_x_183_, lean_object* v_x_184_){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0___redArg(v_x_183_, v_x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_186_, lean_object* v_x_187_, lean_object* v_x_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0(v_00_u03b2_186_, v_x_187_, v_x_188_);
lean_dec(v_x_188_);
lean_dec_ref(v_x_187_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1(lean_object* v_00_u03b1_190_, lean_object* v_e_191_, lean_object* v_x_192_, lean_object* v_x_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___redArg(v_e_191_, v_x_192_, v_x_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1___boxed(lean_object* v_00_u03b1_200_, lean_object* v_e_201_, lean_object* v_x_202_, lean_object* v_x_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Lean_Data_AssocList_0__Lean_AssocList_forIn_loop___at___00Lean_Meta_KExprMap_find_x3f_spec__1(v_00_u03b1_200_, v_e_201_, v_x_202_, v_x_203_, v___y_204_, v___y_205_, v___y_206_, v___y_207_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0(lean_object* v_00_u03b2_210_, lean_object* v_x_211_, size_t v_x_212_, lean_object* v_x_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0___redArg(v_x_211_, v_x_212_, v_x_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_215_, lean_object* v_x_216_, lean_object* v_x_217_, lean_object* v_x_218_){
_start:
{
size_t v_x_1640__boxed_219_; lean_object* v_res_220_; 
v_x_1640__boxed_219_ = lean_unbox_usize(v_x_217_);
lean_dec(v_x_217_);
v_res_220_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0(v_00_u03b2_215_, v_x_216_, v_x_1640__boxed_219_, v_x_218_);
lean_dec(v_x_218_);
lean_dec_ref(v_x_216_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_221_, lean_object* v_keys_222_, lean_object* v_vals_223_, lean_object* v_heq_224_, lean_object* v_i_225_, lean_object* v_k_226_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_222_, v_vals_223_, v_i_225_, v_k_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_228_, lean_object* v_keys_229_, lean_object* v_vals_230_, lean_object* v_heq_231_, lean_object* v_i_232_, lean_object* v_k_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0_spec__0_spec__1(v_00_u03b2_228_, v_keys_229_, v_vals_230_, v_heq_231_, v_i_232_, v_k_233_);
lean_dec(v_k_233_);
lean_dec_ref(v_vals_230_);
lean_dec_ref(v_keys_229_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList___redArg(lean_object* v_ps_235_, lean_object* v_e_236_, lean_object* v_v_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_){
_start:
{
if (lean_obj_tag(v_ps_235_) == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_243_, 0, v_e_236_);
lean_ctor_set(v___x_243_, 1, v_v_237_);
lean_ctor_set(v___x_243_, 2, v_ps_235_);
v___x_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
return v___x_244_;
}
else
{
lean_object* v_key_245_; lean_object* v_value_246_; lean_object* v_tail_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_284_; 
v_key_245_ = lean_ctor_get(v_ps_235_, 0);
v_value_246_ = lean_ctor_get(v_ps_235_, 1);
v_tail_247_ = lean_ctor_get(v_ps_235_, 2);
v_isSharedCheck_284_ = !lean_is_exclusive(v_ps_235_);
if (v_isSharedCheck_284_ == 0)
{
v___x_249_ = v_ps_235_;
v_isShared_250_ = v_isSharedCheck_284_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_tail_247_);
lean_inc(v_value_246_);
lean_inc(v_key_245_);
lean_dec(v_ps_235_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_284_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; 
lean_inc(v_key_245_);
lean_inc_ref(v_e_236_);
v___x_251_ = l_Lean_Meta_isExprDefEq(v_e_236_, v_key_245_, v_a_238_, v_a_239_, v_a_240_, v_a_241_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_275_; 
v_a_252_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_275_ == 0)
{
v___x_254_ = v___x_251_;
v_isShared_255_ = v_isSharedCheck_275_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_251_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_275_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
uint8_t v___x_256_; 
v___x_256_ = lean_unbox(v_a_252_);
lean_dec(v_a_252_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; 
lean_del_object(v___x_254_);
v___x_257_ = l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList___redArg(v_tail_247_, v_e_236_, v_v_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_268_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_268_ == 0)
{
v___x_260_ = v___x_257_;
v_isShared_261_ = v_isSharedCheck_268_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_257_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_268_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 2, v_a_258_);
v___x_263_ = v___x_249_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_key_245_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v_value_246_);
lean_ctor_set(v_reuseFailAlloc_267_, 2, v_a_258_);
v___x_263_ = v_reuseFailAlloc_267_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
lean_object* v___x_265_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_263_);
v___x_265_ = v___x_260_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
}
else
{
lean_del_object(v___x_249_);
lean_dec(v_value_246_);
lean_dec(v_key_245_);
return v___x_257_;
}
}
else
{
lean_object* v___x_270_; 
lean_dec(v_value_246_);
lean_dec(v_key_245_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 1, v_v_237_);
lean_ctor_set(v___x_249_, 0, v_e_236_);
v___x_270_ = v___x_249_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_e_236_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v_v_237_);
lean_ctor_set(v_reuseFailAlloc_274_, 2, v_tail_247_);
v___x_270_ = v_reuseFailAlloc_274_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
lean_object* v___x_272_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 0, v___x_270_);
v___x_272_ = v___x_254_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_270_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
}
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
lean_del_object(v___x_249_);
lean_dec(v_tail_247_);
lean_dec(v_value_246_);
lean_dec(v_key_245_);
lean_dec(v_v_237_);
lean_dec_ref(v_e_236_);
v_a_276_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_251_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_251_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList___redArg___boxed(lean_object* v_ps_285_, lean_object* v_e_286_, lean_object* v_v_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList___redArg(v_ps_285_, v_e_286_, v_v_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_290_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList(lean_object* v_00_u03b1_294_, lean_object* v_ps_295_, lean_object* v_e_296_, lean_object* v_v_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList___redArg(v_ps_295_, v_e_296_, v_v_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList___boxed(lean_object* v_00_u03b1_304_, lean_object* v_ps_305_, lean_object* v_e_306_, lean_object* v_v_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList(v_00_u03b1_304_, v_ps_305_, v_e_306_, v_v_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_);
lean_dec(v_a_311_);
lean_dec_ref(v_a_310_);
lean_dec(v_a_309_);
lean_dec_ref(v_a_308_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_314_, lean_object* v_x_315_, lean_object* v_x_316_, lean_object* v_x_317_){
_start:
{
lean_object* v_ks_318_; lean_object* v_vs_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_343_; 
v_ks_318_ = lean_ctor_get(v_x_314_, 0);
v_vs_319_ = lean_ctor_get(v_x_314_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v_x_314_);
if (v_isSharedCheck_343_ == 0)
{
v___x_321_ = v_x_314_;
v_isShared_322_ = v_isSharedCheck_343_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_vs_319_);
lean_inc(v_ks_318_);
lean_dec(v_x_314_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_343_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = lean_array_get_size(v_ks_318_);
v___x_324_ = lean_nat_dec_lt(v_x_315_, v___x_323_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
lean_dec(v_x_315_);
v___x_325_ = lean_array_push(v_ks_318_, v_x_316_);
v___x_326_ = lean_array_push(v_vs_319_, v_x_317_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 1, v___x_326_);
lean_ctor_set(v___x_321_, 0, v___x_325_);
v___x_328_ = v___x_321_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_325_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v___x_326_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
else
{
lean_object* v_k_x27_330_; uint8_t v___x_331_; 
v_k_x27_330_ = lean_array_fget_borrowed(v_ks_318_, v_x_315_);
v___x_331_ = l_Lean_instBEqHeadIndex_beq(v_x_316_, v_k_x27_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_333_; 
if (v_isShared_322_ == 0)
{
v___x_333_ = v___x_321_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_ks_318_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_vs_319_);
v___x_333_ = v_reuseFailAlloc_337_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_unsigned_to_nat(1u);
v___x_335_ = lean_nat_add(v_x_315_, v___x_334_);
lean_dec(v_x_315_);
v_x_314_ = v___x_333_;
v_x_315_ = v___x_335_;
goto _start;
}
}
else
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_338_ = lean_array_fset(v_ks_318_, v_x_315_, v_x_316_);
v___x_339_ = lean_array_fset(v_vs_319_, v_x_315_, v_x_317_);
lean_dec(v_x_315_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 1, v___x_339_);
lean_ctor_set(v___x_321_, 0, v___x_338_);
v___x_341_ = v___x_321_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v___x_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_n_344_, lean_object* v_k_345_, lean_object* v_v_346_){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(0u);
v___x_348_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_n_344_, v___x_347_, v_k_345_, v_v_346_);
return v___x_348_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_box(0);
v___x_350_ = l_unsafeCast___redArg(v___x_349_);
return v___x_350_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg(lean_object* v_x_352_, size_t v_x_353_, size_t v_x_354_, lean_object* v_x_355_, lean_object* v_x_356_){
_start:
{
if (lean_obj_tag(v_x_352_) == 0)
{
lean_object* v_es_357_; size_t v___x_358_; size_t v___x_359_; lean_object* v_j_360_; lean_object* v___x_361_; uint8_t v___x_362_; 
v_es_357_ = lean_ctor_get(v_x_352_, 0);
v___x_358_ = ((size_t)31ULL);
v___x_359_ = lean_usize_land(v_x_353_, v___x_358_);
v_j_360_ = lean_usize_to_nat(v___x_359_);
v___x_361_ = lean_array_get_size(v_es_357_);
v___x_362_ = lean_nat_dec_lt(v_j_360_, v___x_361_);
if (v___x_362_ == 0)
{
lean_dec(v_j_360_);
lean_dec(v_x_356_);
lean_dec(v_x_355_);
return v_x_352_;
}
else
{
lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_401_; 
lean_inc_ref(v_es_357_);
v_isSharedCheck_401_ = !lean_is_exclusive(v_x_352_);
if (v_isSharedCheck_401_ == 0)
{
lean_object* v_unused_402_; 
v_unused_402_ = lean_ctor_get(v_x_352_, 0);
lean_dec(v_unused_402_);
v___x_364_ = v_x_352_;
v_isShared_365_ = v_isSharedCheck_401_;
goto v_resetjp_363_;
}
else
{
lean_dec(v_x_352_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_401_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v_v_366_; lean_object* v___x_367_; lean_object* v_xs_x27_368_; lean_object* v___y_370_; 
v_v_366_ = lean_array_fget(v_es_357_, v_j_360_);
v___x_367_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__0);
v_xs_x27_368_ = lean_array_fset(v_es_357_, v_j_360_, v___x_367_);
switch(lean_obj_tag(v_v_366_))
{
case 0:
{
lean_object* v_key_375_; lean_object* v_val_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_386_; 
v_key_375_ = lean_ctor_get(v_v_366_, 0);
v_val_376_ = lean_ctor_get(v_v_366_, 1);
v_isSharedCheck_386_ = !lean_is_exclusive(v_v_366_);
if (v_isSharedCheck_386_ == 0)
{
v___x_378_ = v_v_366_;
v_isShared_379_ = v_isSharedCheck_386_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_val_376_);
lean_inc(v_key_375_);
lean_dec(v_v_366_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_386_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
uint8_t v___x_380_; 
v___x_380_ = l_Lean_instBEqHeadIndex_beq(v_x_355_, v_key_375_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; lean_object* v___x_382_; 
lean_del_object(v___x_378_);
v___x_381_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_375_, v_val_376_, v_x_355_, v_x_356_);
v___x_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
v___y_370_ = v___x_382_;
goto v___jp_369_;
}
else
{
lean_object* v___x_384_; 
lean_dec(v_val_376_);
lean_dec(v_key_375_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 1, v_x_356_);
lean_ctor_set(v___x_378_, 0, v_x_355_);
v___x_384_ = v___x_378_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_x_355_);
lean_ctor_set(v_reuseFailAlloc_385_, 1, v_x_356_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
v___y_370_ = v___x_384_;
goto v___jp_369_;
}
}
}
}
case 1:
{
lean_object* v_node_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_399_; 
v_node_387_ = lean_ctor_get(v_v_366_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v_v_366_);
if (v_isSharedCheck_399_ == 0)
{
v___x_389_ = v_v_366_;
v_isShared_390_ = v_isSharedCheck_399_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_node_387_);
lean_dec(v_v_366_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_399_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
size_t v___x_391_; size_t v___x_392_; size_t v___x_393_; size_t v___x_394_; lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_391_ = ((size_t)5ULL);
v___x_392_ = lean_usize_shift_right(v_x_353_, v___x_391_);
v___x_393_ = ((size_t)1ULL);
v___x_394_ = lean_usize_add(v_x_354_, v___x_393_);
v___x_395_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg(v_node_387_, v___x_392_, v___x_394_, v_x_355_, v_x_356_);
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 0, v___x_395_);
v___x_397_ = v___x_389_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
v___y_370_ = v___x_397_;
goto v___jp_369_;
}
}
}
default: 
{
lean_object* v___x_400_; 
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v_x_355_);
lean_ctor_set(v___x_400_, 1, v_x_356_);
v___y_370_ = v___x_400_;
goto v___jp_369_;
}
}
v___jp_369_:
{
lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_371_ = lean_array_fset(v_xs_x27_368_, v_j_360_, v___y_370_);
lean_dec(v_j_360_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_371_);
v___x_373_ = v___x_364_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_371_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
}
else
{
lean_object* v_ks_403_; lean_object* v_vs_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_422_; 
v_ks_403_ = lean_ctor_get(v_x_352_, 0);
v_vs_404_ = lean_ctor_get(v_x_352_, 1);
v_isSharedCheck_422_ = !lean_is_exclusive(v_x_352_);
if (v_isSharedCheck_422_ == 0)
{
v___x_406_ = v_x_352_;
v_isShared_407_ = v_isSharedCheck_422_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_vs_404_);
lean_inc(v_ks_403_);
lean_dec(v_x_352_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_422_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_ks_403_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v_vs_404_);
v___x_409_ = v_reuseFailAlloc_421_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
lean_object* v_newNode_410_; size_t v___x_411_; uint8_t v___x_412_; 
v_newNode_410_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1___redArg(v___x_409_, v_x_355_, v_x_356_);
v___x_411_ = ((size_t)7ULL);
v___x_412_ = lean_usize_dec_le(v___x_411_, v_x_354_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_413_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_410_);
v___x_414_ = lean_unsigned_to_nat(4u);
v___x_415_ = lean_nat_dec_lt(v___x_413_, v___x_414_);
lean_dec(v___x_413_);
if (v___x_415_ == 0)
{
lean_object* v_ks_416_; lean_object* v_vs_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v_ks_416_ = lean_ctor_get(v_newNode_410_, 0);
lean_inc_ref(v_ks_416_);
v_vs_417_ = lean_ctor_get(v_newNode_410_, 1);
lean_inc_ref(v_vs_417_);
lean_dec_ref(v_newNode_410_);
v___x_418_ = lean_unsigned_to_nat(0u);
v___x_419_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___closed__1);
v___x_420_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2___redArg(v_x_354_, v_ks_416_, v_vs_417_, v___x_418_, v___x_419_);
lean_dec_ref(v_vs_417_);
lean_dec_ref(v_ks_416_);
return v___x_420_;
}
else
{
return v_newNode_410_;
}
}
else
{
return v_newNode_410_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2___redArg(size_t v_depth_423_, lean_object* v_keys_424_, lean_object* v_vals_425_, lean_object* v_i_426_, lean_object* v_entries_427_){
_start:
{
lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_428_ = lean_array_get_size(v_keys_424_);
v___x_429_ = lean_nat_dec_lt(v_i_426_, v___x_428_);
if (v___x_429_ == 0)
{
lean_dec(v_i_426_);
return v_entries_427_;
}
else
{
lean_object* v_k_430_; lean_object* v_v_431_; uint64_t v___x_432_; size_t v_h_433_; size_t v___x_434_; lean_object* v___x_435_; size_t v___x_436_; size_t v___x_437_; size_t v___x_438_; size_t v_h_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v_k_430_ = lean_array_fget_borrowed(v_keys_424_, v_i_426_);
v_v_431_ = lean_array_fget_borrowed(v_vals_425_, v_i_426_);
v___x_432_ = l_Lean_HeadIndex_hash(v_k_430_);
v_h_433_ = lean_uint64_to_usize(v___x_432_);
v___x_434_ = ((size_t)5ULL);
v___x_435_ = lean_unsigned_to_nat(1u);
v___x_436_ = ((size_t)1ULL);
v___x_437_ = lean_usize_sub(v_depth_423_, v___x_436_);
v___x_438_ = lean_usize_mul(v___x_434_, v___x_437_);
v_h_439_ = lean_usize_shift_right(v_h_433_, v___x_438_);
v___x_440_ = lean_nat_add(v_i_426_, v___x_435_);
lean_dec(v_i_426_);
lean_inc(v_v_431_);
lean_inc(v_k_430_);
v___x_441_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg(v_entries_427_, v_h_439_, v_depth_423_, v_k_430_, v_v_431_);
v_i_426_ = v___x_440_;
v_entries_427_ = v___x_441_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_443_, lean_object* v_keys_444_, lean_object* v_vals_445_, lean_object* v_i_446_, lean_object* v_entries_447_){
_start:
{
size_t v_depth_boxed_448_; lean_object* v_res_449_; 
v_depth_boxed_448_ = lean_unbox_usize(v_depth_443_);
lean_dec(v_depth_443_);
v_res_449_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_boxed_448_, v_keys_444_, v_vals_445_, v_i_446_, v_entries_447_);
lean_dec_ref(v_vals_445_);
lean_dec_ref(v_keys_444_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_450_, lean_object* v_x_451_, lean_object* v_x_452_, lean_object* v_x_453_, lean_object* v_x_454_){
_start:
{
size_t v_x_745__boxed_455_; size_t v_x_746__boxed_456_; lean_object* v_res_457_; 
v_x_745__boxed_455_ = lean_unbox_usize(v_x_451_);
lean_dec(v_x_451_);
v_x_746__boxed_456_ = lean_unbox_usize(v_x_452_);
lean_dec(v_x_452_);
v_res_457_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg(v_x_450_, v_x_745__boxed_455_, v_x_746__boxed_456_, v_x_453_, v_x_454_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0___redArg(lean_object* v_x_458_, lean_object* v_x_459_, lean_object* v_x_460_){
_start:
{
uint64_t v___x_461_; size_t v___x_462_; size_t v___x_463_; lean_object* v___x_464_; 
v___x_461_ = l_Lean_HeadIndex_hash(v_x_459_);
v___x_462_ = lean_uint64_to_usize(v___x_461_);
v___x_463_ = ((size_t)1ULL);
v___x_464_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg(v_x_458_, v___x_462_, v___x_463_, v_x_459_, v_x_460_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_insert___redArg(lean_object* v_m_465_, lean_object* v_e_466_, lean_object* v_v_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_){
_start:
{
lean_object* v_k_473_; lean_object* v___x_474_; 
lean_inc_ref(v_e_466_);
v_k_473_ = l_Lean_Expr_toHeadIndex(v_e_466_);
v___x_474_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_KExprMap_find_x3f_spec__0___redArg(v_m_465_, v_k_473_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_475_ = lean_box(0);
v___x_476_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_476_, 0, v_e_466_);
lean_ctor_set(v___x_476_, 1, v_v_467_);
lean_ctor_set(v___x_476_, 2, v___x_475_);
v___x_477_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0___redArg(v_m_465_, v_k_473_, v___x_476_);
v___x_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
return v___x_478_;
}
else
{
lean_object* v_val_479_; lean_object* v___x_480_; 
v_val_479_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_val_479_);
lean_dec_ref_known(v___x_474_, 1);
v___x_480_ = l___private_Lean_Meta_KExprMap_0__Lean_Meta_updateList___redArg(v_val_479_, v_e_466_, v_v_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_489_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_489_ == 0)
{
v___x_483_ = v___x_480_;
v_isShared_484_ = v_isSharedCheck_489_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_480_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_489_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_485_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0___redArg(v_m_465_, v_k_473_, v_a_481_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v___x_485_);
v___x_487_ = v___x_483_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
else
{
lean_object* v_a_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_497_; 
lean_dec(v_k_473_);
lean_dec_ref(v_m_465_);
v_a_490_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_497_ == 0)
{
v___x_492_ = v___x_480_;
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_a_490_);
lean_dec(v___x_480_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_495_; 
if (v_isShared_493_ == 0)
{
v___x_495_ = v___x_492_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_a_490_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_insert___redArg___boxed(lean_object* v_m_498_, lean_object* v_e_499_, lean_object* v_v_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lean_Meta_KExprMap_insert___redArg(v_m_498_, v_e_499_, v_v_500_, v_a_501_, v_a_502_, v_a_503_, v_a_504_);
lean_dec(v_a_504_);
lean_dec_ref(v_a_503_);
lean_dec(v_a_502_);
lean_dec_ref(v_a_501_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_insert(lean_object* v_00_u03b1_507_, lean_object* v_m_508_, lean_object* v_e_509_, lean_object* v_v_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = l_Lean_Meta_KExprMap_insert___redArg(v_m_508_, v_e_509_, v_v_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_KExprMap_insert___boxed(lean_object* v_00_u03b1_517_, lean_object* v_m_518_, lean_object* v_e_519_, lean_object* v_v_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_Meta_KExprMap_insert(v_00_u03b1_517_, v_m_518_, v_e_519_, v_v_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
lean_dec(v_a_522_);
lean_dec_ref(v_a_521_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0(lean_object* v_00_u03b2_527_, lean_object* v_x_528_, lean_object* v_x_529_, lean_object* v_x_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0___redArg(v_x_528_, v_x_529_, v_x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0(lean_object* v_00_u03b2_532_, lean_object* v_x_533_, size_t v_x_534_, size_t v_x_535_, lean_object* v_x_536_, lean_object* v_x_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___redArg(v_x_533_, v_x_534_, v_x_535_, v_x_536_, v_x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_539_, lean_object* v_x_540_, lean_object* v_x_541_, lean_object* v_x_542_, lean_object* v_x_543_, lean_object* v_x_544_){
_start:
{
size_t v_x_977__boxed_545_; size_t v_x_978__boxed_546_; lean_object* v_res_547_; 
v_x_977__boxed_545_ = lean_unbox_usize(v_x_541_);
lean_dec(v_x_541_);
v_x_978__boxed_546_ = lean_unbox_usize(v_x_542_);
lean_dec(v_x_542_);
v_res_547_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0(v_00_u03b2_539_, v_x_540_, v_x_977__boxed_545_, v_x_978__boxed_546_, v_x_543_, v_x_544_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_548_, lean_object* v_n_549_, lean_object* v_k_550_, lean_object* v_v_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1___redArg(v_n_549_, v_k_550_, v_v_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_553_, size_t v_depth_554_, lean_object* v_keys_555_, lean_object* v_vals_556_, lean_object* v_heq_557_, lean_object* v_i_558_, lean_object* v_entries_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_554_, v_keys_555_, v_vals_556_, v_i_558_, v_entries_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_561_, lean_object* v_depth_562_, lean_object* v_keys_563_, lean_object* v_vals_564_, lean_object* v_heq_565_, lean_object* v_i_566_, lean_object* v_entries_567_){
_start:
{
size_t v_depth_boxed_568_; lean_object* v_res_569_; 
v_depth_boxed_568_ = lean_unbox_usize(v_depth_562_);
lean_dec(v_depth_562_);
v_res_569_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__2(v_00_u03b2_561_, v_depth_boxed_568_, v_keys_563_, v_vals_564_, v_heq_565_, v_i_566_, v_entries_567_);
lean_dec_ref(v_vals_564_);
lean_dec_ref(v_keys_563_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_570_, lean_object* v_x_571_, lean_object* v_x_572_, lean_object* v_x_573_, lean_object* v_x_574_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_KExprMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_571_, v_x_572_, v_x_573_, v_x_574_);
return v___x_575_;
}
}
lean_object* runtime_initialize_Lean_Data_AssocList(uint8_t builtin);
lean_object* runtime_initialize_Lean_HeadIndex(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_KExprMap(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_AssocList(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_HeadIndex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_KExprMap(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_AssocList(uint8_t builtin);
lean_object* initialize_Lean_HeadIndex(uint8_t builtin);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_KExprMap(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_AssocList(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_HeadIndex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_KExprMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_KExprMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_KExprMap(builtin);
}
#ifdef __cplusplus
}
#endif

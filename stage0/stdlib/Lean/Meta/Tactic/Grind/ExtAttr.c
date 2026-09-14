// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.ExtAttr
// Imports: public import Lean.Meta.Tactic.Ext public import Lean.Meta.Tactic.Grind.Extension
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_uint64_to_usize(uint64_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Ext_isExtTheorem___redArg(lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_validateExtAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "invalid `[grind ext]`, `"};
static const lean_object* l_Lean_Meta_Grind_validateExtAttr___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_validateExtAttr___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_validateExtAttr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_validateExtAttr___closed__1;
static const lean_string_object l_Lean_Meta_Grind_validateExtAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "` is neither tagged with `[ext]` nor is a structure"};
static const lean_object* l_Lean_Meta_Grind_validateExtAttr___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_validateExtAttr___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_validateExtAttr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_validateExtAttr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateExtAttr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateExtAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__1;
static const lean_string_object l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "` is not marked with the `[grind ext]` attribute"};
static const lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__1);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_5_);
lean_ctor_set(v___x_6_, 2, v___x_5_);
lean_ctor_set(v___x_6_, 3, v___x_5_);
lean_ctor_set(v___x_6_, 4, v___x_4_);
lean_ctor_set(v___x_6_, 5, v___x_4_);
lean_ctor_set(v___x_6_, 6, v___x_4_);
lean_ctor_set(v___x_6_, 7, v___x_4_);
lean_ctor_set(v___x_6_, 8, v___x_4_);
lean_ctor_set(v___x_6_, 9, v___x_4_);
lean_ctor_set(v___x_6_, 10, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_unsigned_to_nat(32u);
v___x_8_ = lean_mk_empty_array_with_capacity(v___x_7_);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_10_ = ((size_t)5ULL);
v___x_11_ = lean_unsigned_to_nat(0u);
v___x_12_ = lean_unsigned_to_nat(32u);
v___x_13_ = lean_mk_empty_array_with_capacity(v___x_12_);
v___x_14_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__3);
v___x_15_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set(v___x_15_, 2, v___x_11_);
lean_ctor_set(v___x_15_, 3, v___x_11_);
lean_ctor_set_usize(v___x_15_, 4, v___x_10_);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_16_ = lean_box(1);
v___x_17_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__4);
v___x_18_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__1);
v___x_19_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
lean_ctor_set(v___x_19_, 2, v___x_16_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0(lean_object* v_msgData_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v___x_24_; lean_object* v_toCold_25_; lean_object* v_env_26_; lean_object* v_options_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_24_ = lean_st_ref_get(v___y_22_);
v_toCold_25_ = lean_ctor_get(v___y_21_, 0);
v_env_26_ = lean_ctor_get(v___x_24_, 0);
lean_inc_ref(v_env_26_);
lean_dec(v___x_24_);
v_options_27_ = lean_ctor_get(v_toCold_25_, 2);
v___x_28_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__2);
v___x_29_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_27_);
v___x_30_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_30_, 0, v_env_26_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set(v___x_30_, 2, v___x_29_);
lean_ctor_set(v___x_30_, 3, v_options_27_);
v___x_31_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
lean_ctor_set(v___x_31_, 1, v_msgData_20_);
v___x_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0___boxed(lean_object* v_msgData_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0(v_msgData_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0___redArg(lean_object* v_msg_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v_ref_42_; lean_object* v___x_43_; lean_object* v_a_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_52_; 
v_ref_42_ = lean_ctor_get(v___y_39_, 2);
v___x_43_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0_spec__0(v_msg_38_, v___y_39_, v___y_40_);
v_a_44_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_52_ == 0)
{
v___x_46_ = v___x_43_;
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_a_44_);
lean_dec(v___x_43_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; lean_object* v___x_50_; 
lean_inc(v_ref_42_);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v_ref_42_);
lean_ctor_set(v___x_48_, 1, v_a_44_);
if (v_isShared_47_ == 0)
{
lean_ctor_set_tag(v___x_46_, 1);
lean_ctor_set(v___x_46_, 0, v___x_48_);
v___x_50_ = v___x_46_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v___x_48_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0___redArg___boxed(lean_object* v_msg_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0___redArg(v_msg_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
return v_res_57_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateExtAttr___closed__1(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = ((lean_object*)(l_Lean_Meta_Grind_validateExtAttr___closed__0));
v___x_60_ = l_Lean_stringToMessageData(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateExtAttr___closed__3(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = ((lean_object*)(l_Lean_Meta_Grind_validateExtAttr___closed__2));
v___x_63_ = l_Lean_stringToMessageData(v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateExtAttr(lean_object* v_declName_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v___x_68_; 
lean_inc(v_declName_64_);
v___x_68_ = l_Lean_Meta_Ext_isExtTheorem___redArg(v_declName_64_, v_a_66_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_91_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_91_ == 0)
{
v___x_71_ = v___x_68_;
v_isShared_72_ = v_isSharedCheck_91_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_a_69_);
lean_dec(v___x_68_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_91_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
uint8_t v___x_73_; 
v___x_73_ = lean_unbox(v_a_69_);
lean_dec(v_a_69_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; lean_object* v_env_75_; uint8_t v___x_76_; 
v___x_74_ = lean_st_ref_get(v_a_66_);
v_env_75_ = lean_ctor_get(v___x_74_, 0);
lean_inc_ref(v_env_75_);
lean_dec(v___x_74_);
lean_inc(v_declName_64_);
v___x_76_ = l_Lean_isStructure(v_env_75_, v_declName_64_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
lean_del_object(v___x_71_);
v___x_77_ = lean_obj_once(&l_Lean_Meta_Grind_validateExtAttr___closed__1, &l_Lean_Meta_Grind_validateExtAttr___closed__1_once, _init_l_Lean_Meta_Grind_validateExtAttr___closed__1);
v___x_78_ = l_Lean_MessageData_ofConstName(v_declName_64_, v___x_76_);
v___x_79_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_77_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_obj_once(&l_Lean_Meta_Grind_validateExtAttr___closed__3, &l_Lean_Meta_Grind_validateExtAttr___closed__3_once, _init_l_Lean_Meta_Grind_validateExtAttr___closed__3);
v___x_81_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_79_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0___redArg(v___x_81_, v_a_65_, v_a_66_);
return v___x_82_;
}
else
{
lean_object* v___x_83_; lean_object* v___x_85_; 
lean_dec(v_declName_64_);
v___x_83_ = lean_box(0);
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 0, v___x_83_);
v___x_85_ = v___x_71_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
else
{
lean_object* v___x_87_; lean_object* v___x_89_; 
lean_dec(v_declName_64_);
v___x_87_ = lean_box(0);
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 0, v___x_87_);
v___x_89_ = v___x_71_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_87_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec(v_declName_64_);
v_a_92_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_68_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_68_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateExtAttr___boxed(lean_object* v_declName_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Meta_Grind_validateExtAttr(v_declName_100_, v_a_101_, v_a_102_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0(lean_object* v_00_u03b1_105_, lean_object* v_msg_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0___redArg(v_msg_106_, v___y_107_, v___y_108_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0___boxed(lean_object* v_00_u03b1_111_, lean_object* v_msg_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0(v_00_u03b1_111_, v_msg_112_, v___y_113_, v___y_114_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
return v_res_116_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_117_, lean_object* v_i_118_, lean_object* v_k_119_){
_start:
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_array_get_size(v_keys_117_);
v___x_121_ = lean_nat_dec_lt(v_i_118_, v___x_120_);
if (v___x_121_ == 0)
{
lean_dec(v_i_118_);
return v___x_121_;
}
else
{
lean_object* v_k_x27_122_; uint8_t v___x_123_; 
v_k_x27_122_ = lean_array_fget_borrowed(v_keys_117_, v_i_118_);
v___x_123_ = lean_name_eq(v_k_119_, v_k_x27_122_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_unsigned_to_nat(1u);
v___x_125_ = lean_nat_add(v_i_118_, v___x_124_);
lean_dec(v_i_118_);
v_i_118_ = v___x_125_;
goto _start;
}
else
{
lean_dec(v_i_118_);
return v___x_121_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_127_, lean_object* v_i_128_, lean_object* v_k_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1___redArg(v_keys_127_, v_i_128_, v_k_129_);
lean_dec(v_k_129_);
lean_dec_ref(v_keys_127_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0___redArg(lean_object* v_x_132_, size_t v_x_133_, lean_object* v_x_134_){
_start:
{
if (lean_obj_tag(v_x_132_) == 0)
{
lean_object* v_es_135_; lean_object* v___x_136_; size_t v___x_137_; size_t v___x_138_; lean_object* v_j_139_; lean_object* v___x_140_; 
v_es_135_ = lean_ctor_get(v_x_132_, 0);
v___x_136_ = lean_box(2);
v___x_137_ = ((size_t)31ULL);
v___x_138_ = lean_usize_land(v_x_133_, v___x_137_);
v_j_139_ = lean_usize_to_nat(v___x_138_);
v___x_140_ = lean_array_get_borrowed(v___x_136_, v_es_135_, v_j_139_);
lean_dec(v_j_139_);
switch(lean_obj_tag(v___x_140_))
{
case 0:
{
lean_object* v_key_141_; uint8_t v___x_142_; 
v_key_141_ = lean_ctor_get(v___x_140_, 0);
v___x_142_ = lean_name_eq(v_x_134_, v_key_141_);
return v___x_142_;
}
case 1:
{
lean_object* v_node_143_; size_t v___x_144_; size_t v___x_145_; 
v_node_143_ = lean_ctor_get(v___x_140_, 0);
v___x_144_ = ((size_t)5ULL);
v___x_145_ = lean_usize_shift_right(v_x_133_, v___x_144_);
v_x_132_ = v_node_143_;
v_x_133_ = v___x_145_;
goto _start;
}
default: 
{
uint8_t v___x_147_; 
v___x_147_ = 0;
return v___x_147_;
}
}
}
else
{
lean_object* v_ks_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
v_ks_148_ = lean_ctor_get(v_x_132_, 0);
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1___redArg(v_ks_148_, v___x_149_, v_x_134_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0___redArg___boxed(lean_object* v_x_151_, lean_object* v_x_152_, lean_object* v_x_153_){
_start:
{
size_t v_x_448__boxed_154_; uint8_t v_res_155_; lean_object* v_r_156_; 
v_x_448__boxed_154_ = lean_unbox_usize(v_x_152_);
lean_dec(v_x_152_);
v_res_155_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0___redArg(v_x_151_, v_x_448__boxed_154_, v_x_153_);
lean_dec(v_x_153_);
lean_dec_ref(v_x_151_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0___redArg(lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
uint64_t v___y_160_; lean_object* v___x_163_; 
v___x_163_ = l_unsafeCast___redArg(v_x_158_);
if (lean_obj_tag(v___x_163_) == 0)
{
uint64_t v___x_164_; 
v___x_164_ = 1723ULL;
v___y_160_ = v___x_164_;
goto v___jp_159_;
}
else
{
uint64_t v_hash_165_; 
v_hash_165_ = lean_ctor_get_uint64(v___x_163_, sizeof(void*)*2);
lean_dec(v___x_163_);
v___y_160_ = v_hash_165_;
goto v___jp_159_;
}
v___jp_159_:
{
size_t v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_uint64_to_usize(v___y_160_);
v___x_162_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0___redArg(v_x_157_, v___x_161_, v_x_158_);
return v___x_162_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0___redArg___boxed(lean_object* v_x_166_, lean_object* v_x_167_){
_start:
{
uint8_t v_res_168_; lean_object* v_r_169_; 
v_res_168_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0___redArg(v_x_166_, v_x_167_);
lean_dec(v_x_167_);
lean_dec_ref(v_x_166_);
v_r_169_ = lean_box(v_res_168_);
return v_r_169_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4_spec__5(lean_object* v_xs_170_, lean_object* v_v_171_, lean_object* v_i_172_){
_start:
{
lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = lean_array_get_size(v_xs_170_);
v___x_174_ = lean_nat_dec_lt(v_i_172_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; 
lean_dec(v_i_172_);
v___x_175_ = lean_box(0);
return v___x_175_;
}
else
{
lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_176_ = lean_array_fget_borrowed(v_xs_170_, v_i_172_);
v___x_177_ = lean_name_eq(v___x_176_, v_v_171_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = lean_nat_add(v_i_172_, v___x_178_);
lean_dec(v_i_172_);
v_i_172_ = v___x_179_;
goto _start;
}
else
{
lean_object* v___x_181_; 
v___x_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_181_, 0, v_i_172_);
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4_spec__5___boxed(lean_object* v_xs_182_, lean_object* v_v_183_, lean_object* v_i_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4_spec__5(v_xs_182_, v_v_183_, v_i_184_);
lean_dec(v_v_183_);
lean_dec_ref(v_xs_182_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4(lean_object* v_xs_186_, lean_object* v_v_187_){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4_spec__5(v_xs_186_, v_v_187_, v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4___boxed(lean_object* v_xs_190_, lean_object* v_v_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4(v_xs_190_, v_v_191_);
lean_dec(v_v_191_);
lean_dec_ref(v_xs_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2___redArg(lean_object* v_x_193_, size_t v_x_194_, lean_object* v_x_195_){
_start:
{
if (lean_obj_tag(v_x_193_) == 0)
{
lean_object* v_es_196_; lean_object* v___x_197_; size_t v___x_198_; size_t v___x_199_; lean_object* v_j_200_; lean_object* v_entry_201_; 
v_es_196_ = lean_ctor_get(v_x_193_, 0);
v___x_197_ = lean_box(2);
v___x_198_ = ((size_t)31ULL);
v___x_199_ = lean_usize_land(v_x_194_, v___x_198_);
v_j_200_ = lean_usize_to_nat(v___x_199_);
v_entry_201_ = lean_array_get(v___x_197_, v_es_196_, v_j_200_);
switch(lean_obj_tag(v_entry_201_))
{
case 0:
{
lean_object* v_key_202_; uint8_t v___x_203_; 
v_key_202_ = lean_ctor_get(v_entry_201_, 0);
lean_inc(v_key_202_);
lean_dec_ref_known(v_entry_201_, 2);
v___x_203_ = lean_name_eq(v_x_195_, v_key_202_);
lean_dec(v_key_202_);
if (v___x_203_ == 0)
{
lean_dec(v_j_200_);
return v_x_193_;
}
else
{
lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_211_; 
lean_inc_ref(v_es_196_);
v_isSharedCheck_211_ = !lean_is_exclusive(v_x_193_);
if (v_isSharedCheck_211_ == 0)
{
lean_object* v_unused_212_; 
v_unused_212_ = lean_ctor_get(v_x_193_, 0);
lean_dec(v_unused_212_);
v___x_205_ = v_x_193_;
v_isShared_206_ = v_isSharedCheck_211_;
goto v_resetjp_204_;
}
else
{
lean_dec(v_x_193_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_211_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_207_; lean_object* v___x_209_; 
v___x_207_ = lean_array_set(v_es_196_, v_j_200_, v___x_197_);
lean_dec(v_j_200_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 0, v___x_207_);
v___x_209_ = v___x_205_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_207_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
}
case 1:
{
lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_247_; 
lean_inc_ref(v_es_196_);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_193_);
if (v_isSharedCheck_247_ == 0)
{
lean_object* v_unused_248_; 
v_unused_248_ = lean_ctor_get(v_x_193_, 0);
lean_dec(v_unused_248_);
v___x_214_ = v_x_193_;
v_isShared_215_ = v_isSharedCheck_247_;
goto v_resetjp_213_;
}
else
{
lean_dec(v_x_193_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_247_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v_node_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_246_; 
v_node_216_ = lean_ctor_get(v_entry_201_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v_entry_201_);
if (v_isSharedCheck_246_ == 0)
{
v___x_218_ = v_entry_201_;
v_isShared_219_ = v_isSharedCheck_246_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_node_216_);
lean_dec(v_entry_201_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_246_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
size_t v___x_220_; lean_object* v_entries_221_; size_t v___x_222_; lean_object* v_newNode_223_; lean_object* v___x_224_; 
v___x_220_ = ((size_t)5ULL);
v_entries_221_ = lean_array_set(v_es_196_, v_j_200_, v___x_197_);
v___x_222_ = lean_usize_shift_right(v_x_194_, v___x_220_);
v_newNode_223_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2___redArg(v_node_216_, v___x_222_, v_x_195_);
lean_inc_ref(v_newNode_223_);
v___x_224_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_223_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v___x_226_; 
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v_newNode_223_);
v___x_226_ = v___x_218_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_newNode_223_);
v___x_226_ = v_reuseFailAlloc_231_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
lean_object* v___x_227_; lean_object* v___x_229_; 
v___x_227_ = lean_array_set(v_entries_221_, v_j_200_, v___x_226_);
lean_dec(v_j_200_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_227_);
v___x_229_ = v___x_214_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_227_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
else
{
lean_object* v_val_232_; lean_object* v_fst_233_; lean_object* v_snd_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_245_; 
lean_dec_ref(v_newNode_223_);
lean_del_object(v___x_218_);
v_val_232_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_val_232_);
lean_dec_ref_known(v___x_224_, 1);
v_fst_233_ = lean_ctor_get(v_val_232_, 0);
v_snd_234_ = lean_ctor_get(v_val_232_, 1);
v_isSharedCheck_245_ = !lean_is_exclusive(v_val_232_);
if (v_isSharedCheck_245_ == 0)
{
v___x_236_ = v_val_232_;
v_isShared_237_ = v_isSharedCheck_245_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_snd_234_);
lean_inc(v_fst_233_);
lean_dec(v_val_232_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_245_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_fst_233_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_snd_234_);
v___x_239_ = v_reuseFailAlloc_244_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_240_ = lean_array_set(v_entries_221_, v_j_200_, v___x_239_);
lean_dec(v_j_200_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_240_);
v___x_242_ = v___x_214_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_200_);
return v_x_193_;
}
}
}
else
{
lean_object* v_ks_249_; lean_object* v_vs_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_264_; 
v_ks_249_ = lean_ctor_get(v_x_193_, 0);
v_vs_250_ = lean_ctor_get(v_x_193_, 1);
v_isSharedCheck_264_ = !lean_is_exclusive(v_x_193_);
if (v_isSharedCheck_264_ == 0)
{
v___x_252_ = v_x_193_;
v_isShared_253_ = v_isSharedCheck_264_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_vs_250_);
lean_inc(v_ks_249_);
lean_dec(v_x_193_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_264_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_254_; 
v___x_254_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2_spec__4(v_ks_249_, v_x_195_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v___x_256_; 
if (v_isShared_253_ == 0)
{
v___x_256_ = v___x_252_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_ks_249_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v_vs_250_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
else
{
lean_object* v_val_258_; lean_object* v_keys_x27_259_; lean_object* v_vals_x27_260_; lean_object* v___x_262_; 
v_val_258_ = lean_ctor_get(v___x_254_, 0);
lean_inc_n(v_val_258_, 2);
lean_dec_ref_known(v___x_254_, 1);
v_keys_x27_259_ = l_Array_eraseIdx___redArg(v_ks_249_, v_val_258_);
v_vals_x27_260_ = l_Array_eraseIdx___redArg(v_vs_250_, v_val_258_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 1, v_vals_x27_260_);
lean_ctor_set(v___x_252_, 0, v_keys_x27_259_);
v___x_262_ = v___x_252_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_keys_x27_259_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v_vals_x27_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2___redArg___boxed(lean_object* v_x_265_, lean_object* v_x_266_, lean_object* v_x_267_){
_start:
{
size_t v_x_529__boxed_268_; lean_object* v_res_269_; 
v_x_529__boxed_268_ = lean_unbox_usize(v_x_266_);
lean_dec(v_x_266_);
v_res_269_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2___redArg(v_x_265_, v_x_529__boxed_268_, v_x_267_);
lean_dec(v_x_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1___redArg(lean_object* v_x_270_, lean_object* v_x_271_){
_start:
{
uint64_t v___y_273_; lean_object* v___x_276_; 
v___x_276_ = l_unsafeCast___redArg(v_x_271_);
if (lean_obj_tag(v___x_276_) == 0)
{
uint64_t v___x_277_; 
v___x_277_ = 1723ULL;
v___y_273_ = v___x_277_;
goto v___jp_272_;
}
else
{
uint64_t v_hash_278_; 
v_hash_278_ = lean_ctor_get_uint64(v___x_276_, sizeof(void*)*2);
lean_dec(v___x_276_);
v___y_273_ = v_hash_278_;
goto v___jp_272_;
}
v___jp_272_:
{
size_t v_h_274_; lean_object* v___x_275_; 
v_h_274_ = lean_uint64_to_usize(v___y_273_);
v___x_275_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2___redArg(v_x_270_, v_h_274_, v_x_271_);
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1___redArg___boxed(lean_object* v_x_279_, lean_object* v_x_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1___redArg(v_x_279_, v_x_280_);
lean_dec(v_x_280_);
return v_res_281_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__1(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = ((lean_object*)(l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__0));
v___x_284_ = l_Lean_stringToMessageData(v___x_283_);
return v___x_284_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__3(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = ((lean_object*)(l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__2));
v___x_287_ = l_Lean_stringToMessageData(v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl(lean_object* v_s_288_, lean_object* v_declName_289_, lean_object* v_a_290_, lean_object* v_a_291_){
_start:
{
uint8_t v___x_293_; 
v___x_293_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0___redArg(v_s_288_, v_declName_289_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
lean_dec_ref(v_s_288_);
v___x_294_ = lean_obj_once(&l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__1, &l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__1_once, _init_l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__1);
v___x_295_ = l_Lean_MessageData_ofConstName(v_declName_289_, v___x_293_);
v___x_296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_294_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_obj_once(&l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__3, &l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__3_once, _init_l_Lean_Meta_Grind_ExtTheorems_eraseDecl___closed__3);
v___x_298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_296_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = l_Lean_throwError___at___00Lean_Meta_Grind_validateExtAttr_spec__0___redArg(v___x_298_, v_a_290_, v_a_291_);
return v___x_299_;
}
else
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1___redArg(v_s_288_, v_declName_289_);
lean_dec(v_declName_289_);
v___x_301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
return v___x_301_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl___boxed(lean_object* v_s_302_, lean_object* v_declName_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Meta_Grind_ExtTheorems_eraseDecl(v_s_302_, v_declName_303_, v_a_304_, v_a_305_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
return v_res_307_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0(lean_object* v_00_u03b2_308_, lean_object* v_x_309_, lean_object* v_x_310_){
_start:
{
uint8_t v___x_311_; 
v___x_311_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0___redArg(v_x_309_, v_x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0___boxed(lean_object* v_00_u03b2_312_, lean_object* v_x_313_, lean_object* v_x_314_){
_start:
{
uint8_t v_res_315_; lean_object* v_r_316_; 
v_res_315_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0(v_00_u03b2_312_, v_x_313_, v_x_314_);
lean_dec(v_x_314_);
lean_dec_ref(v_x_313_);
v_r_316_ = lean_box(v_res_315_);
return v_r_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1(lean_object* v_00_u03b2_317_, lean_object* v_x_318_, lean_object* v_x_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1___redArg(v_x_318_, v_x_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1___boxed(lean_object* v_00_u03b2_321_, lean_object* v_x_322_, lean_object* v_x_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1(v_00_u03b2_321_, v_x_322_, v_x_323_);
lean_dec(v_x_323_);
return v_res_324_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0(lean_object* v_00_u03b2_325_, lean_object* v_x_326_, size_t v_x_327_, lean_object* v_x_328_){
_start:
{
uint8_t v___x_329_; 
v___x_329_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0___redArg(v_x_326_, v_x_327_, v_x_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_330_, lean_object* v_x_331_, lean_object* v_x_332_, lean_object* v_x_333_){
_start:
{
size_t v_x_736__boxed_334_; uint8_t v_res_335_; lean_object* v_r_336_; 
v_x_736__boxed_334_ = lean_unbox_usize(v_x_332_);
lean_dec(v_x_332_);
v_res_335_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0(v_00_u03b2_330_, v_x_331_, v_x_736__boxed_334_, v_x_333_);
lean_dec(v_x_333_);
lean_dec_ref(v_x_331_);
v_r_336_ = lean_box(v_res_335_);
return v_r_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2(lean_object* v_00_u03b2_337_, lean_object* v_x_338_, size_t v_x_339_, lean_object* v_x_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2___redArg(v_x_338_, v_x_339_, v_x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2___boxed(lean_object* v_00_u03b2_342_, lean_object* v_x_343_, lean_object* v_x_344_, lean_object* v_x_345_){
_start:
{
size_t v_x_747__boxed_346_; lean_object* v_res_347_; 
v_x_747__boxed_346_ = lean_unbox_usize(v_x_344_);
lean_dec(v_x_344_);
v_res_347_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__1_spec__2(v_00_u03b2_342_, v_x_343_, v_x_747__boxed_346_, v_x_345_);
lean_dec(v_x_345_);
return v_res_347_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_348_, lean_object* v_keys_349_, lean_object* v_vals_350_, lean_object* v_heq_351_, lean_object* v_i_352_, lean_object* v_k_353_){
_start:
{
uint8_t v___x_354_; 
v___x_354_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1___redArg(v_keys_349_, v_i_352_, v_k_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_355_, lean_object* v_keys_356_, lean_object* v_vals_357_, lean_object* v_heq_358_, lean_object* v_i_359_, lean_object* v_k_360_){
_start:
{
uint8_t v_res_361_; lean_object* v_r_362_; 
v_res_361_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_ExtTheorems_eraseDecl_spec__0_spec__0_spec__1(v_00_u03b2_355_, v_keys_356_, v_vals_357_, v_heq_358_, v_i_359_, v_k_360_);
lean_dec(v_k_360_);
lean_dec_ref(v_vals_357_);
lean_dec_ref(v_keys_356_);
v_r_362_ = lean_box(v_res_361_);
return v_r_362_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Ext(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Extension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Ext(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Extension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
}
#ifdef __cplusplus
}
#endif

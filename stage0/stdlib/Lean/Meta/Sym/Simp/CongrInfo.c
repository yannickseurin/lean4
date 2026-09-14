// Lean compiler output
// Module: Lean.Meta.Sym.Simp.CongrInfo
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.FunInfo import Init.Omega
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Meta_instBEqCongrArgKind_beq(uint8_t, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getCongrSimpKinds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrSimpCore_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(uint8_t, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "fixedPrefix "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "interlaced "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "congrTheorem "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(lean_object* v_argKinds_1_, lean_object* v_pre_2_, lean_object* v_i_3_){
_start:
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_array_get_size(v_argKinds_1_);
v___x_5_ = lean_nat_dec_lt(v_i_3_, v___x_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
lean_dec(v_i_3_);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v_pre_2_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_7_ = lean_array_fget_borrowed(v_argKinds_1_, v_i_3_);
v___x_8_ = lean_unbox(v___x_7_);
switch(v___x_8_)
{
case 0:
{
lean_object* v___x_9_; 
lean_dec(v_i_3_);
lean_dec(v_pre_2_);
v___x_9_ = lean_box(0);
return v___x_9_;
}
case 2:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(1u);
v___x_11_ = lean_nat_add(v_i_3_, v___x_10_);
lean_dec(v_i_3_);
v_i_3_ = v___x_11_;
goto _start;
}
default: 
{
lean_object* v___x_13_; 
lean_dec(v_i_3_);
lean_dec(v_pre_2_);
v___x_13_ = lean_box(0);
return v___x_13_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq___boxed(lean_object* v_argKinds_14_, lean_object* v_pre_15_, lean_object* v_i_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(v_argKinds_14_, v_pre_15_, v_i_16_);
lean_dec_ref(v_argKinds_14_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg(uint8_t v_x_18_, lean_object* v_h__1_19_, lean_object* v_h__2_20_, lean_object* v_h__3_21_){
_start:
{
switch(v_x_18_)
{
case 0:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
lean_dec(v_h__3_21_);
lean_dec(v_h__2_20_);
v___x_22_ = lean_box(0);
v___x_23_ = lean_apply_1(v_h__1_19_, v___x_22_);
return v___x_23_;
}
case 2:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
lean_dec(v_h__3_21_);
lean_dec(v_h__1_19_);
v___x_24_ = lean_box(0);
v___x_25_ = lean_apply_1(v_h__2_20_, v___x_24_);
return v___x_25_;
}
default: 
{
lean_object* v___x_26_; lean_object* v___x_27_; 
lean_dec(v_h__2_20_);
lean_dec(v_h__1_19_);
v___x_26_ = lean_box(v_x_18_);
v___x_27_ = lean_apply_3(v_h__3_21_, v___x_26_, lean_box(0), lean_box(0));
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg___boxed(lean_object* v_x_28_, lean_object* v_h__1_29_, lean_object* v_h__2_30_, lean_object* v_h__3_31_){
_start:
{
uint8_t v_x_18__boxed_32_; lean_object* v_res_33_; 
v_x_18__boxed_32_ = lean_unbox(v_x_28_);
v_res_33_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg(v_x_18__boxed_32_, v_h__1_29_, v_h__2_30_, v_h__3_31_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter(lean_object* v_motive_34_, uint8_t v_x_35_, lean_object* v_h__1_36_, lean_object* v_h__2_37_, lean_object* v_h__3_38_){
_start:
{
switch(v_x_35_)
{
case 0:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
lean_dec(v_h__3_38_);
lean_dec(v_h__2_37_);
v___x_39_ = lean_box(0);
v___x_40_ = lean_apply_1(v_h__1_36_, v___x_39_);
return v___x_40_;
}
case 2:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
lean_dec(v_h__3_38_);
lean_dec(v_h__1_36_);
v___x_41_ = lean_box(0);
v___x_42_ = lean_apply_1(v_h__2_37_, v___x_41_);
return v___x_42_;
}
default: 
{
lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec(v_h__2_37_);
lean_dec(v_h__1_36_);
v___x_43_ = lean_box(v_x_35_);
v___x_44_ = lean_apply_3(v_h__3_38_, v___x_43_, lean_box(0), lean_box(0));
return v___x_44_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___boxed(lean_object* v_motive_45_, lean_object* v_x_46_, lean_object* v_h__1_47_, lean_object* v_h__2_48_, lean_object* v_h__3_49_){
_start:
{
uint8_t v_x_33__boxed_50_; lean_object* v_res_51_; 
v_x_33__boxed_50_ = lean_unbox(v_x_46_);
v_res_51_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter(v_motive_45_, v_x_33__boxed_50_, v_h__1_47_, v_h__2_48_, v_h__3_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(lean_object* v_argKinds_52_, lean_object* v_i_53_){
_start:
{
lean_object* v___x_54_; uint8_t v___x_55_; 
v___x_54_ = lean_array_get_size(v_argKinds_52_);
v___x_55_ = lean_nat_dec_lt(v_i_53_, v___x_54_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; 
lean_dec(v_i_53_);
v___x_56_ = lean_box(0);
return v___x_56_;
}
else
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_array_fget_borrowed(v_argKinds_52_, v_i_53_);
v___x_58_ = lean_unbox(v___x_57_);
switch(v___x_58_)
{
case 0:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_unsigned_to_nat(1u);
v___x_60_ = lean_nat_add(v_i_53_, v___x_59_);
lean_dec(v_i_53_);
v_i_53_ = v___x_60_;
goto _start;
}
case 2:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = lean_unsigned_to_nat(1u);
v___x_63_ = lean_nat_add(v_i_53_, v___x_62_);
v___x_64_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(v_argKinds_52_, v_i_53_, v___x_63_);
return v___x_64_;
}
default: 
{
lean_object* v___x_65_; 
lean_dec(v_i_53_);
v___x_65_ = lean_box(0);
return v___x_65_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go___boxed(lean_object* v_argKinds_66_, lean_object* v_i_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(v_argKinds_66_, v_i_67_);
lean_dec_ref(v_argKinds_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(lean_object* v_argKinds_69_){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_unsigned_to_nat(0u);
v___x_71_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(v_argKinds_69_, v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f___boxed(lean_object* v_argKinds_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(v_argKinds_72_);
lean_dec_ref(v_argKinds_72_);
return v_res_73_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(lean_object* v_xs_74_, lean_object* v_ys_75_, lean_object* v_x_76_){
_start:
{
lean_object* v_zero_77_; uint8_t v_isZero_78_; 
v_zero_77_ = lean_unsigned_to_nat(0u);
v_isZero_78_ = lean_nat_dec_eq(v_x_76_, v_zero_77_);
if (v_isZero_78_ == 1)
{
lean_dec(v_x_76_);
return v_isZero_78_;
}
else
{
lean_object* v_one_79_; lean_object* v_n_80_; lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; uint8_t v___x_84_; uint8_t v___x_85_; 
v_one_79_ = lean_unsigned_to_nat(1u);
v_n_80_ = lean_nat_sub(v_x_76_, v_one_79_);
lean_dec(v_x_76_);
v___x_81_ = lean_array_fget_borrowed(v_xs_74_, v_n_80_);
v___x_82_ = lean_array_fget_borrowed(v_ys_75_, v_n_80_);
v___x_83_ = lean_unbox(v___x_81_);
v___x_84_ = lean_unbox(v___x_82_);
v___x_85_ = l_Lean_Meta_instBEqCongrArgKind_beq(v___x_83_, v___x_84_);
if (v___x_85_ == 0)
{
lean_dec(v_n_80_);
return v___x_85_;
}
else
{
v_x_76_ = v_n_80_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg___boxed(lean_object* v_xs_87_, lean_object* v_ys_88_, lean_object* v_x_89_){
_start:
{
uint8_t v_res_90_; lean_object* v_r_91_; 
v_res_90_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(v_xs_87_, v_ys_88_, v_x_89_);
lean_dec_ref(v_ys_88_);
lean_dec_ref(v_xs_87_);
v_r_91_ = lean_box(v_res_90_);
return v_r_91_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(uint8_t v___y_92_, uint8_t v_a_93_, lean_object* v_as_94_, size_t v_i_95_, size_t v_stop_96_){
_start:
{
uint8_t v___x_97_; 
v___x_97_ = lean_usize_dec_eq(v_i_95_, v_stop_96_);
if (v___x_97_ == 0)
{
uint8_t v___x_98_; uint8_t v___y_100_; lean_object* v___x_104_; uint8_t v___x_105_; uint8_t v___x_106_; uint8_t v___x_107_; 
v___x_98_ = 1;
v___x_104_ = lean_array_uget_borrowed(v_as_94_, v_i_95_);
v___x_105_ = 0;
v___x_106_ = lean_unbox(v___x_104_);
v___x_107_ = l_Lean_Meta_instBEqCongrArgKind_beq(v___x_106_, v___x_105_);
if (v___x_107_ == 0)
{
v___y_100_ = v___y_92_;
goto v___jp_99_;
}
else
{
v___y_100_ = v_a_93_;
goto v___jp_99_;
}
v___jp_99_:
{
if (v___y_100_ == 0)
{
size_t v___x_101_; size_t v___x_102_; 
v___x_101_ = ((size_t)1ULL);
v___x_102_ = lean_usize_add(v_i_95_, v___x_101_);
v_i_95_ = v___x_102_;
goto _start;
}
else
{
return v___x_98_;
}
}
}
else
{
uint8_t v___x_108_; 
v___x_108_ = 0;
return v___x_108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0___boxed(lean_object* v___y_109_, lean_object* v_a_110_, lean_object* v_as_111_, lean_object* v_i_112_, lean_object* v_stop_113_){
_start:
{
uint8_t v___y_6157__boxed_114_; uint8_t v_a_6158__boxed_115_; size_t v_i_boxed_116_; size_t v_stop_boxed_117_; uint8_t v_res_118_; lean_object* v_r_119_; 
v___y_6157__boxed_114_ = lean_unbox(v___y_109_);
v_a_6158__boxed_115_ = lean_unbox(v_a_110_);
v_i_boxed_116_ = lean_unbox_usize(v_i_112_);
lean_dec(v_i_112_);
v_stop_boxed_117_ = lean_unbox_usize(v_stop_113_);
lean_dec(v_stop_113_);
v_res_118_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(v___y_6157__boxed_114_, v_a_6158__boxed_115_, v_as_111_, v_i_boxed_116_, v_stop_boxed_117_);
lean_dec_ref(v_as_111_);
v_r_119_ = lean_box(v_res_118_);
return v_r_119_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(size_t v_sz_120_, size_t v_i_121_, lean_object* v_bs_122_){
_start:
{
uint8_t v___x_123_; 
v___x_123_ = lean_usize_dec_lt(v_i_121_, v_sz_120_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; 
v___x_124_ = l_unsafeCast___redArg(v_bs_122_);
lean_dec_ref(v_bs_122_);
return v___x_124_;
}
else
{
lean_object* v_v_125_; lean_object* v___x_126_; lean_object* v_bs_x27_127_; lean_object* v___x_128_; uint8_t v___x_129_; uint8_t v___x_130_; uint8_t v___x_131_; size_t v___x_132_; size_t v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v_v_125_ = lean_array_uget(v_bs_122_, v_i_121_);
v___x_126_ = lean_unsigned_to_nat(0u);
v_bs_x27_127_ = lean_array_uset(v_bs_122_, v_i_121_, v___x_126_);
v___x_128_ = l_unsafeCast___redArg(v_v_125_);
lean_dec(v_v_125_);
v___x_129_ = 2;
v___x_130_ = lean_unbox(v___x_128_);
lean_dec(v___x_128_);
v___x_131_ = l_Lean_Meta_instBEqCongrArgKind_beq(v___x_130_, v___x_129_);
v___x_132_ = ((size_t)1ULL);
v___x_133_ = lean_usize_add(v_i_121_, v___x_132_);
v___x_134_ = lean_box(v___x_131_);
v___x_135_ = l_unsafeCast___redArg(v___x_134_);
lean_dec(v___x_134_);
v___x_136_ = lean_array_uset(v_bs_x27_127_, v_i_121_, v___x_135_);
v_i_121_ = v___x_133_;
v_bs_122_ = v___x_136_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1___boxed(lean_object* v_sz_138_, lean_object* v_i_139_, lean_object* v_bs_140_){
_start:
{
size_t v_sz_boxed_141_; size_t v_i_boxed_142_; lean_object* v_res_143_; 
v_sz_boxed_141_ = lean_unbox_usize(v_sz_138_);
lean_dec(v_sz_138_);
v_i_boxed_142_ = lean_unbox_usize(v_i_139_);
lean_dec(v_i_139_);
v_res_143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(v_sz_boxed_141_, v_i_boxed_142_, v_bs_140_);
return v_res_143_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(uint8_t v_a_144_, lean_object* v_as_145_, size_t v_i_146_, size_t v_stop_147_){
_start:
{
uint8_t v___x_148_; 
v___x_148_ = lean_usize_dec_eq(v_i_146_, v_stop_147_);
if (v___x_148_ == 0)
{
uint8_t v___x_149_; uint8_t v___y_151_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_149_ = 1;
v___x_155_ = lean_array_uget_borrowed(v_as_145_, v_i_146_);
v___x_156_ = lean_unbox(v___x_155_);
switch(v___x_156_)
{
case 0:
{
v___y_151_ = v_a_144_;
goto v___jp_150_;
}
case 2:
{
v___y_151_ = v_a_144_;
goto v___jp_150_;
}
default: 
{
return v___x_149_;
}
}
v___jp_150_:
{
if (v___y_151_ == 0)
{
size_t v___x_152_; size_t v___x_153_; 
v___x_152_ = ((size_t)1ULL);
v___x_153_ = lean_usize_add(v_i_146_, v___x_152_);
v_i_146_ = v___x_153_;
goto _start;
}
else
{
return v___x_149_;
}
}
}
else
{
uint8_t v___x_157_; 
v___x_157_ = 0;
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2___boxed(lean_object* v_a_158_, lean_object* v_as_159_, lean_object* v_i_160_, lean_object* v_stop_161_){
_start:
{
uint8_t v_a_6213__boxed_162_; size_t v_i_boxed_163_; size_t v_stop_boxed_164_; uint8_t v_res_165_; lean_object* v_r_166_; 
v_a_6213__boxed_162_ = lean_unbox(v_a_158_);
v_i_boxed_163_ = lean_unbox_usize(v_i_160_);
lean_dec(v_i_160_);
v_stop_boxed_164_ = lean_unbox_usize(v_stop_161_);
lean_dec(v_stop_161_);
v_res_165_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(v_a_6213__boxed_162_, v_as_159_, v_i_boxed_163_, v_stop_boxed_164_);
lean_dec_ref(v_as_159_);
v_r_166_ = lean_box(v_res_165_);
return v_r_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(lean_object* v_f_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___x_173_; 
lean_inc_ref(v_f_167_);
v___x_173_ = l_Lean_Meta_isProof(v_f_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_312_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_312_ == 0)
{
v___x_176_ = v___x_173_;
v_isShared_177_ = v_isSharedCheck_312_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_173_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_312_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
uint8_t v___x_178_; 
v___x_178_ = lean_unbox(v_a_174_);
if (v___x_178_ == 0)
{
uint8_t v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
lean_del_object(v___x_176_);
v___x_179_ = 1;
v___x_180_ = lean_box(0);
lean_inc_ref(v_f_167_);
v___x_181_ = l_Lean_Meta_getFunInfo(v_f_167_, v___x_180_, v_a_168_, v_a_169_, v_a_170_, v_a_171_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_299_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_299_ == 0)
{
v___x_184_ = v___x_181_;
v_isShared_185_ = v_isSharedCheck_299_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___x_181_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_299_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_186_; 
lean_inc_ref(v_f_167_);
v___x_186_ = l_Lean_Meta_getCongrSimpKinds(v_f_167_, v_a_182_, v_a_168_, v_a_169_, v_a_170_, v_a_171_);
if (lean_obj_tag(v___x_186_) == 0)
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_290_; 
v_a_187_ = lean_ctor_get(v___x_186_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v___x_186_);
if (v_isSharedCheck_290_ == 0)
{
v___x_189_ = v___x_186_;
v_isShared_190_ = v_isSharedCheck_290_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_186_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_290_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___y_197_; lean_object* v___y_198_; lean_object* v___y_199_; lean_object* v___y_200_; lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___y_233_; uint8_t v___x_254_; 
v___x_230_ = lean_unsigned_to_nat(0u);
v___x_231_ = lean_array_get_size(v_a_187_);
v___x_254_ = lean_nat_dec_lt(v___x_230_, v___x_231_);
if (v___x_254_ == 0)
{
lean_dec(v_a_182_);
lean_dec_ref(v_f_167_);
v___y_233_ = v___x_179_;
goto v___jp_232_;
}
else
{
if (v___x_254_ == 0)
{
lean_dec(v_a_182_);
lean_dec_ref(v_f_167_);
v___y_233_ = v___x_179_;
goto v___jp_232_;
}
else
{
size_t v___x_255_; size_t v___x_256_; uint8_t v___x_257_; uint8_t v___x_258_; 
v___x_255_ = ((size_t)0ULL);
v___x_256_ = lean_usize_of_nat(v___x_231_);
v___x_257_ = lean_unbox(v_a_174_);
v___x_258_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(v___x_257_, v_a_187_, v___x_255_, v___x_256_);
if (v___x_258_ == 0)
{
lean_dec(v_a_182_);
lean_dec_ref(v_f_167_);
v___y_233_ = v___x_254_;
goto v___jp_232_;
}
else
{
lean_del_object(v___x_189_);
lean_del_object(v___x_184_);
lean_dec(v_a_174_);
if (lean_obj_tag(v_f_167_) == 4)
{
lean_object* v_declName_259_; lean_object* v_us_260_; lean_object* v___x_261_; 
v_declName_259_ = lean_ctor_get(v_f_167_, 0);
v_us_260_ = lean_ctor_get(v_f_167_, 1);
lean_inc(v_us_260_);
lean_inc(v_declName_259_);
v___x_261_ = l_Lean_Meta_mkCongrSimpForConst_x3f(v_declName_259_, v_us_260_, v_a_168_, v_a_169_, v_a_170_, v_a_171_);
if (lean_obj_tag(v___x_261_) == 0)
{
lean_object* v_a_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_281_; 
v_a_262_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_281_ == 0)
{
v___x_264_ = v___x_261_;
v_isShared_265_ = v_isSharedCheck_281_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_a_262_);
lean_dec(v___x_261_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_281_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
if (lean_obj_tag(v_a_262_) == 1)
{
lean_object* v_val_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_280_; 
v_val_266_ = lean_ctor_get(v_a_262_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v_a_262_);
if (v_isSharedCheck_280_ == 0)
{
v___x_268_ = v_a_262_;
v_isShared_269_ = v_isSharedCheck_280_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_val_266_);
lean_dec(v_a_262_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_280_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v_argKinds_270_; lean_object* v___x_271_; uint8_t v___x_272_; 
v_argKinds_270_ = lean_ctor_get(v_val_266_, 2);
v___x_271_ = lean_array_get_size(v_argKinds_270_);
v___x_272_ = lean_nat_dec_eq(v___x_271_, v___x_231_);
if (v___x_272_ == 0)
{
lean_del_object(v___x_268_);
lean_dec(v_val_266_);
lean_del_object(v___x_264_);
v___y_197_ = v_a_168_;
v___y_198_ = v_a_169_;
v___y_199_ = v_a_170_;
v___y_200_ = v_a_171_;
goto v___jp_196_;
}
else
{
uint8_t v___x_273_; 
v___x_273_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(v_argKinds_270_, v_a_187_, v___x_271_);
if (v___x_273_ == 0)
{
lean_del_object(v___x_268_);
lean_dec(v_val_266_);
lean_del_object(v___x_264_);
v___y_197_ = v_a_168_;
v___y_198_ = v_a_169_;
v___y_199_ = v_a_170_;
v___y_200_ = v_a_171_;
goto v___jp_196_;
}
else
{
lean_object* v___x_275_; 
lean_dec_ref_known(v_f_167_, 2);
lean_dec(v_a_187_);
lean_dec(v_a_182_);
if (v_isShared_269_ == 0)
{
lean_ctor_set_tag(v___x_268_, 3);
v___x_275_ = v___x_268_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_val_266_);
v___x_275_ = v_reuseFailAlloc_279_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_277_; 
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 0, v___x_275_);
v___x_277_ = v___x_264_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_275_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_264_);
lean_dec(v_a_262_);
v___y_197_ = v_a_168_;
v___y_198_ = v_a_169_;
v___y_199_ = v_a_170_;
v___y_200_ = v_a_171_;
goto v___jp_196_;
}
}
}
else
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
lean_dec_ref_known(v_f_167_, 2);
lean_dec(v_a_187_);
lean_dec(v_a_182_);
v_a_282_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_261_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_261_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
else
{
v___y_197_ = v_a_168_;
v___y_198_ = v_a_169_;
v___y_199_ = v_a_170_;
v___y_200_ = v_a_171_;
goto v___jp_196_;
}
}
}
}
v___jp_191_:
{
lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_192_ = lean_box(0);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_192_);
v___x_194_ = v___x_189_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
v___jp_196_:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Meta_mkCongrSimpCore_x3f(v_f_167_, v_a_182_, v_a_187_, v___x_179_, v___y_197_, v___y_198_, v___y_199_, v___y_200_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_221_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_221_ == 0)
{
v___x_204_ = v___x_201_;
v_isShared_205_ = v_isSharedCheck_221_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_201_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_221_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
if (lean_obj_tag(v_a_202_) == 1)
{
lean_object* v_val_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_216_; 
v_val_206_ = lean_ctor_get(v_a_202_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v_a_202_);
if (v_isSharedCheck_216_ == 0)
{
v___x_208_ = v_a_202_;
v_isShared_209_ = v_isSharedCheck_216_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_val_206_);
lean_dec(v_a_202_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_216_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_211_; 
if (v_isShared_209_ == 0)
{
lean_ctor_set_tag(v___x_208_, 3);
v___x_211_ = v___x_208_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_val_206_);
v___x_211_ = v_reuseFailAlloc_215_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
lean_object* v___x_213_; 
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_211_);
v___x_213_ = v___x_204_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
else
{
lean_object* v___x_217_; lean_object* v___x_219_; 
lean_dec(v_a_202_);
v___x_217_ = lean_box(0);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_217_);
v___x_219_ = v___x_204_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_217_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
else
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
v_a_222_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_229_ == 0)
{
v___x_224_ = v___x_201_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_201_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_222_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
v___jp_232_:
{
uint8_t v___x_234_; 
v___x_234_ = lean_nat_dec_lt(v___x_230_, v___x_231_);
if (v___x_234_ == 0)
{
lean_dec(v_a_187_);
lean_del_object(v___x_184_);
lean_dec(v_a_174_);
goto v___jp_191_;
}
else
{
if (v___x_234_ == 0)
{
lean_dec(v_a_187_);
lean_del_object(v___x_184_);
lean_dec(v_a_174_);
goto v___jp_191_;
}
else
{
size_t v___x_235_; size_t v___x_236_; uint8_t v___x_237_; uint8_t v___x_238_; 
v___x_235_ = ((size_t)0ULL);
v___x_236_ = lean_usize_of_nat(v___x_231_);
v___x_237_ = lean_unbox(v_a_174_);
lean_dec(v_a_174_);
v___x_238_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(v___y_233_, v___x_237_, v_a_187_, v___x_235_, v___x_236_);
if (v___x_238_ == 0)
{
lean_dec(v_a_187_);
lean_del_object(v___x_184_);
goto v___jp_191_;
}
else
{
lean_object* v___x_239_; 
lean_del_object(v___x_189_);
v___x_239_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(v_a_187_);
if (lean_obj_tag(v___x_239_) == 1)
{
lean_object* v_val_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_244_; 
lean_dec(v_a_187_);
v_val_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_val_240_);
lean_dec_ref_known(v___x_239_, 1);
v___x_241_ = lean_nat_sub(v___x_231_, v_val_240_);
v___x_242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_242_, 0, v_val_240_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_242_);
v___x_244_ = v___x_184_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_242_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
else
{
size_t v_sz_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
lean_dec(v___x_239_);
v_sz_246_ = lean_array_size(v_a_187_);
v___x_247_ = l_unsafeCast___redArg(v_a_187_);
lean_dec(v_a_187_);
v___x_248_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(v_sz_246_, v___x_235_, v___x_247_);
v___x_249_ = l_unsafeCast___redArg(v___x_248_);
lean_dec_ref(v___x_248_);
v___x_250_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_250_);
v___x_252_ = v___x_184_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_250_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
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
lean_object* v_a_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_298_; 
lean_del_object(v___x_184_);
lean_dec(v_a_182_);
lean_dec(v_a_174_);
lean_dec_ref(v_f_167_);
v_a_291_ = lean_ctor_get(v___x_186_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_186_);
if (v_isSharedCheck_298_ == 0)
{
v___x_293_ = v___x_186_;
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_a_291_);
lean_dec(v___x_186_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_296_; 
if (v_isShared_294_ == 0)
{
v___x_296_ = v___x_293_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_a_291_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
}
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec(v_a_174_);
lean_dec_ref(v_f_167_);
v_a_300_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_181_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_181_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
lean_object* v___x_308_; lean_object* v___x_310_; 
lean_dec(v_a_174_);
lean_dec_ref(v_f_167_);
v___x_308_ = lean_box(0);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 0, v___x_308_);
v___x_310_ = v___x_176_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec_ref(v_f_167_);
v_a_313_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_173_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_173_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg___boxed(lean_object* v_f_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(v_f_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
lean_dec(v_a_325_);
lean_dec_ref(v_a_324_);
lean_dec(v_a_323_);
lean_dec_ref(v_a_322_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo(lean_object* v_f_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(v_f_328_, v_a_331_, v_a_332_, v_a_333_, v_a_334_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___boxed(lean_object* v_f_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo(v_f_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_);
lean_dec(v_a_343_);
lean_dec_ref(v_a_342_);
lean_dec(v_a_341_);
lean_dec_ref(v_a_340_);
lean_dec(v_a_339_);
lean_dec_ref(v_a_338_);
return v_res_345_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3(lean_object* v_xs_346_, lean_object* v_ys_347_, lean_object* v_hsz_348_, lean_object* v_x_349_, lean_object* v_x_350_){
_start:
{
uint8_t v___x_351_; 
v___x_351_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(v_xs_346_, v_ys_347_, v_x_349_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___boxed(lean_object* v_xs_352_, lean_object* v_ys_353_, lean_object* v_hsz_354_, lean_object* v_x_355_, lean_object* v_x_356_){
_start:
{
uint8_t v_res_357_; lean_object* v_r_358_; 
v_res_357_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3(v_xs_352_, v_ys_353_, v_hsz_354_, v_x_355_, v_x_356_);
lean_dec_ref(v_ys_353_);
lean_dec_ref(v_xs_352_);
v_r_358_ = lean_box(v_res_357_);
return v_r_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_359_, lean_object* v_x_360_, lean_object* v_x_361_, lean_object* v_x_362_){
_start:
{
lean_object* v_ks_363_; lean_object* v_vs_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_390_; 
v_ks_363_ = lean_ctor_get(v_x_359_, 0);
v_vs_364_ = lean_ctor_get(v_x_359_, 1);
v_isSharedCheck_390_ = !lean_is_exclusive(v_x_359_);
if (v_isSharedCheck_390_ == 0)
{
v___x_366_ = v_x_359_;
v_isShared_367_ = v_isSharedCheck_390_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_vs_364_);
lean_inc(v_ks_363_);
lean_dec(v_x_359_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_390_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_368_ = lean_array_get_size(v_ks_363_);
v___x_369_ = lean_nat_dec_lt(v_x_360_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_373_; 
lean_dec(v_x_360_);
v___x_370_ = lean_array_push(v_ks_363_, v_x_361_);
v___x_371_ = lean_array_push(v_vs_364_, v_x_362_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 1, v___x_371_);
lean_ctor_set(v___x_366_, 0, v___x_370_);
v___x_373_ = v___x_366_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_374_, 1, v___x_371_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
else
{
lean_object* v_k_x27_375_; size_t v___x_376_; size_t v___x_377_; uint8_t v___x_378_; 
v_k_x27_375_ = lean_array_fget_borrowed(v_ks_363_, v_x_360_);
v___x_376_ = lean_ptr_addr(v_x_361_);
v___x_377_ = lean_ptr_addr(v_k_x27_375_);
v___x_378_ = lean_usize_dec_eq(v___x_376_, v___x_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_380_; 
if (v_isShared_367_ == 0)
{
v___x_380_ = v___x_366_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_ks_363_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_vs_364_);
v___x_380_ = v_reuseFailAlloc_384_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = lean_unsigned_to_nat(1u);
v___x_382_ = lean_nat_add(v_x_360_, v___x_381_);
lean_dec(v_x_360_);
v_x_359_ = v___x_380_;
v_x_360_ = v___x_382_;
goto _start;
}
}
else
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_385_ = lean_array_fset(v_ks_363_, v_x_360_, v_x_361_);
v___x_386_ = lean_array_fset(v_vs_364_, v_x_360_, v_x_362_);
lean_dec(v_x_360_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 1, v___x_386_);
lean_ctor_set(v___x_366_, 0, v___x_385_);
v___x_388_ = v___x_366_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(lean_object* v_n_391_, lean_object* v_k_392_, lean_object* v_v_393_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(v_n_391_, v___x_394_, v_k_392_, v_v_393_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_box(0);
v___x_397_ = l_unsafeCast___redArg(v___x_396_);
return v___x_397_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(lean_object* v_x_399_, size_t v_x_400_, size_t v_x_401_, lean_object* v_x_402_, lean_object* v_x_403_){
_start:
{
if (lean_obj_tag(v_x_399_) == 0)
{
lean_object* v_es_404_; size_t v___x_405_; size_t v___x_406_; lean_object* v_j_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v_es_404_ = lean_ctor_get(v_x_399_, 0);
v___x_405_ = ((size_t)31ULL);
v___x_406_ = lean_usize_land(v_x_400_, v___x_405_);
v_j_407_ = lean_usize_to_nat(v___x_406_);
v___x_408_ = lean_array_get_size(v_es_404_);
v___x_409_ = lean_nat_dec_lt(v_j_407_, v___x_408_);
if (v___x_409_ == 0)
{
lean_dec(v_j_407_);
lean_dec(v_x_403_);
lean_dec_ref(v_x_402_);
return v_x_399_;
}
else
{
lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_450_; 
lean_inc_ref(v_es_404_);
v_isSharedCheck_450_ = !lean_is_exclusive(v_x_399_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v_x_399_, 0);
lean_dec(v_unused_451_);
v___x_411_ = v_x_399_;
v_isShared_412_ = v_isSharedCheck_450_;
goto v_resetjp_410_;
}
else
{
lean_dec(v_x_399_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_450_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v_v_413_; lean_object* v___x_414_; lean_object* v_xs_x27_415_; lean_object* v___y_417_; 
v_v_413_ = lean_array_fget(v_es_404_, v_j_407_);
v___x_414_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0);
v_xs_x27_415_ = lean_array_fset(v_es_404_, v_j_407_, v___x_414_);
switch(lean_obj_tag(v_v_413_))
{
case 0:
{
lean_object* v_key_422_; lean_object* v_val_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_435_; 
v_key_422_ = lean_ctor_get(v_v_413_, 0);
v_val_423_ = lean_ctor_get(v_v_413_, 1);
v_isSharedCheck_435_ = !lean_is_exclusive(v_v_413_);
if (v_isSharedCheck_435_ == 0)
{
v___x_425_ = v_v_413_;
v_isShared_426_ = v_isSharedCheck_435_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_val_423_);
lean_inc(v_key_422_);
lean_dec(v_v_413_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_435_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
size_t v___x_427_; size_t v___x_428_; uint8_t v___x_429_; 
v___x_427_ = lean_ptr_addr(v_x_402_);
v___x_428_ = lean_ptr_addr(v_key_422_);
v___x_429_ = lean_usize_dec_eq(v___x_427_, v___x_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; lean_object* v___x_431_; 
lean_del_object(v___x_425_);
v___x_430_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_422_, v_val_423_, v_x_402_, v_x_403_);
v___x_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
v___y_417_ = v___x_431_;
goto v___jp_416_;
}
else
{
lean_object* v___x_433_; 
lean_dec(v_val_423_);
lean_dec(v_key_422_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 1, v_x_403_);
lean_ctor_set(v___x_425_, 0, v_x_402_);
v___x_433_ = v___x_425_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_x_402_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_x_403_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
v___y_417_ = v___x_433_;
goto v___jp_416_;
}
}
}
}
case 1:
{
lean_object* v_node_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_448_; 
v_node_436_ = lean_ctor_get(v_v_413_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v_v_413_);
if (v_isSharedCheck_448_ == 0)
{
v___x_438_ = v_v_413_;
v_isShared_439_ = v_isSharedCheck_448_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_node_436_);
lean_dec(v_v_413_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_448_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
size_t v___x_440_; size_t v___x_441_; size_t v___x_442_; size_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_446_; 
v___x_440_ = ((size_t)5ULL);
v___x_441_ = lean_usize_shift_right(v_x_400_, v___x_440_);
v___x_442_ = ((size_t)1ULL);
v___x_443_ = lean_usize_add(v_x_401_, v___x_442_);
v___x_444_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_node_436_, v___x_441_, v___x_443_, v_x_402_, v_x_403_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_444_);
v___x_446_ = v___x_438_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
v___y_417_ = v___x_446_;
goto v___jp_416_;
}
}
}
default: 
{
lean_object* v___x_449_; 
v___x_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_449_, 0, v_x_402_);
lean_ctor_set(v___x_449_, 1, v_x_403_);
v___y_417_ = v___x_449_;
goto v___jp_416_;
}
}
v___jp_416_:
{
lean_object* v___x_418_; lean_object* v___x_420_; 
v___x_418_ = lean_array_fset(v_xs_x27_415_, v_j_407_, v___y_417_);
lean_dec(v_j_407_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v___x_418_);
v___x_420_ = v___x_411_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v___x_418_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
}
}
else
{
lean_object* v_ks_452_; lean_object* v_vs_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_471_; 
v_ks_452_ = lean_ctor_get(v_x_399_, 0);
v_vs_453_ = lean_ctor_get(v_x_399_, 1);
v_isSharedCheck_471_ = !lean_is_exclusive(v_x_399_);
if (v_isSharedCheck_471_ == 0)
{
v___x_455_ = v_x_399_;
v_isShared_456_ = v_isSharedCheck_471_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_vs_453_);
lean_inc(v_ks_452_);
lean_dec(v_x_399_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_471_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_ks_452_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_vs_453_);
v___x_458_ = v_reuseFailAlloc_470_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
lean_object* v_newNode_459_; size_t v___x_460_; uint8_t v___x_461_; 
v_newNode_459_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(v___x_458_, v_x_402_, v_x_403_);
v___x_460_ = ((size_t)7ULL);
v___x_461_ = lean_usize_dec_le(v___x_460_, v_x_401_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_462_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_459_);
v___x_463_ = lean_unsigned_to_nat(4u);
v___x_464_ = lean_nat_dec_lt(v___x_462_, v___x_463_);
lean_dec(v___x_462_);
if (v___x_464_ == 0)
{
lean_object* v_ks_465_; lean_object* v_vs_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_ks_465_ = lean_ctor_get(v_newNode_459_, 0);
lean_inc_ref(v_ks_465_);
v_vs_466_ = lean_ctor_get(v_newNode_459_, 1);
lean_inc_ref(v_vs_466_);
lean_dec_ref(v_newNode_459_);
v___x_467_ = lean_unsigned_to_nat(0u);
v___x_468_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__1);
v___x_469_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(v_x_401_, v_ks_465_, v_vs_466_, v___x_467_, v___x_468_);
lean_dec_ref(v_vs_466_);
lean_dec_ref(v_ks_465_);
return v___x_469_;
}
else
{
return v_newNode_459_;
}
}
else
{
return v_newNode_459_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(size_t v_depth_472_, lean_object* v_keys_473_, lean_object* v_vals_474_, lean_object* v_i_475_, lean_object* v_entries_476_){
_start:
{
lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_477_ = lean_array_get_size(v_keys_473_);
v___x_478_ = lean_nat_dec_lt(v_i_475_, v___x_477_);
if (v___x_478_ == 0)
{
lean_dec(v_i_475_);
return v_entries_476_;
}
else
{
lean_object* v_k_479_; lean_object* v_v_480_; size_t v___x_481_; size_t v___x_482_; size_t v___x_483_; uint64_t v___x_484_; size_t v_h_485_; size_t v___x_486_; lean_object* v___x_487_; size_t v___x_488_; size_t v___x_489_; size_t v___x_490_; size_t v_h_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v_k_479_ = lean_array_fget_borrowed(v_keys_473_, v_i_475_);
v_v_480_ = lean_array_fget_borrowed(v_vals_474_, v_i_475_);
v___x_481_ = lean_ptr_addr(v_k_479_);
v___x_482_ = ((size_t)3ULL);
v___x_483_ = lean_usize_shift_right(v___x_481_, v___x_482_);
v___x_484_ = lean_usize_to_uint64(v___x_483_);
v_h_485_ = lean_uint64_to_usize(v___x_484_);
v___x_486_ = ((size_t)5ULL);
v___x_487_ = lean_unsigned_to_nat(1u);
v___x_488_ = ((size_t)1ULL);
v___x_489_ = lean_usize_sub(v_depth_472_, v___x_488_);
v___x_490_ = lean_usize_mul(v___x_486_, v___x_489_);
v_h_491_ = lean_usize_shift_right(v_h_485_, v___x_490_);
v___x_492_ = lean_nat_add(v_i_475_, v___x_487_);
lean_dec(v_i_475_);
lean_inc(v_v_480_);
lean_inc(v_k_479_);
v___x_493_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_entries_476_, v_h_491_, v_depth_472_, v_k_479_, v_v_480_);
v_i_475_ = v___x_492_;
v_entries_476_ = v___x_493_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_495_, lean_object* v_keys_496_, lean_object* v_vals_497_, lean_object* v_i_498_, lean_object* v_entries_499_){
_start:
{
size_t v_depth_boxed_500_; lean_object* v_res_501_; 
v_depth_boxed_500_ = lean_unbox_usize(v_depth_495_);
lean_dec(v_depth_495_);
v_res_501_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(v_depth_boxed_500_, v_keys_496_, v_vals_497_, v_i_498_, v_entries_499_);
lean_dec_ref(v_vals_497_);
lean_dec_ref(v_keys_496_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___boxed(lean_object* v_x_502_, lean_object* v_x_503_, lean_object* v_x_504_, lean_object* v_x_505_, lean_object* v_x_506_){
_start:
{
size_t v_x_2531__boxed_507_; size_t v_x_2532__boxed_508_; lean_object* v_res_509_; 
v_x_2531__boxed_507_ = lean_unbox_usize(v_x_503_);
lean_dec(v_x_503_);
v_x_2532__boxed_508_ = lean_unbox_usize(v_x_504_);
lean_dec(v_x_504_);
v_res_509_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_x_502_, v_x_2531__boxed_507_, v_x_2532__boxed_508_, v_x_505_, v_x_506_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(lean_object* v_x_510_, lean_object* v_x_511_, lean_object* v_x_512_){
_start:
{
size_t v___x_513_; size_t v___x_514_; size_t v___x_515_; uint64_t v___x_516_; size_t v___x_517_; size_t v___x_518_; lean_object* v___x_519_; 
v___x_513_ = lean_ptr_addr(v_x_511_);
v___x_514_ = ((size_t)3ULL);
v___x_515_ = lean_usize_shift_right(v___x_513_, v___x_514_);
v___x_516_ = lean_usize_to_uint64(v___x_515_);
v___x_517_ = lean_uint64_to_usize(v___x_516_);
v___x_518_ = ((size_t)1ULL);
v___x_519_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_x_510_, v___x_517_, v___x_518_, v_x_511_, v_x_512_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_520_, lean_object* v_vals_521_, lean_object* v_i_522_, lean_object* v_k_523_){
_start:
{
lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_524_ = lean_array_get_size(v_keys_520_);
v___x_525_ = lean_nat_dec_lt(v_i_522_, v___x_524_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; 
lean_dec(v_i_522_);
v___x_526_ = lean_box(0);
return v___x_526_;
}
else
{
lean_object* v_k_x27_527_; size_t v___x_528_; size_t v___x_529_; uint8_t v___x_530_; 
v_k_x27_527_ = lean_array_fget_borrowed(v_keys_520_, v_i_522_);
v___x_528_ = lean_ptr_addr(v_k_523_);
v___x_529_ = lean_ptr_addr(v_k_x27_527_);
v___x_530_ = lean_usize_dec_eq(v___x_528_, v___x_529_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = lean_unsigned_to_nat(1u);
v___x_532_ = lean_nat_add(v_i_522_, v___x_531_);
lean_dec(v_i_522_);
v_i_522_ = v___x_532_;
goto _start;
}
else
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_array_fget_borrowed(v_vals_521_, v_i_522_);
lean_dec(v_i_522_);
lean_inc(v___x_534_);
v___x_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
return v___x_535_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_536_, lean_object* v_vals_537_, lean_object* v_i_538_, lean_object* v_k_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(v_keys_536_, v_vals_537_, v_i_538_, v_k_539_);
lean_dec_ref(v_k_539_);
lean_dec_ref(v_vals_537_);
lean_dec_ref(v_keys_536_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(lean_object* v_x_541_, size_t v_x_542_, lean_object* v_x_543_){
_start:
{
if (lean_obj_tag(v_x_541_) == 0)
{
lean_object* v_es_544_; lean_object* v___x_545_; size_t v___x_546_; size_t v___x_547_; lean_object* v_j_548_; lean_object* v___x_549_; 
v_es_544_ = lean_ctor_get(v_x_541_, 0);
v___x_545_ = lean_box(2);
v___x_546_ = ((size_t)31ULL);
v___x_547_ = lean_usize_land(v_x_542_, v___x_546_);
v_j_548_ = lean_usize_to_nat(v___x_547_);
v___x_549_ = lean_array_get_borrowed(v___x_545_, v_es_544_, v_j_548_);
lean_dec(v_j_548_);
switch(lean_obj_tag(v___x_549_))
{
case 0:
{
lean_object* v_key_550_; lean_object* v_val_551_; size_t v___x_552_; size_t v___x_553_; uint8_t v___x_554_; 
v_key_550_ = lean_ctor_get(v___x_549_, 0);
v_val_551_ = lean_ctor_get(v___x_549_, 1);
v___x_552_ = lean_ptr_addr(v_x_543_);
v___x_553_ = lean_ptr_addr(v_key_550_);
v___x_554_ = lean_usize_dec_eq(v___x_552_, v___x_553_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; 
v___x_555_ = lean_box(0);
return v___x_555_;
}
else
{
lean_object* v___x_556_; 
lean_inc(v_val_551_);
v___x_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_556_, 0, v_val_551_);
return v___x_556_;
}
}
case 1:
{
lean_object* v_node_557_; size_t v___x_558_; size_t v___x_559_; 
v_node_557_ = lean_ctor_get(v___x_549_, 0);
v___x_558_ = ((size_t)5ULL);
v___x_559_ = lean_usize_shift_right(v_x_542_, v___x_558_);
v_x_541_ = v_node_557_;
v_x_542_ = v___x_559_;
goto _start;
}
default: 
{
lean_object* v___x_561_; 
v___x_561_ = lean_box(0);
return v___x_561_;
}
}
}
else
{
lean_object* v_ks_562_; lean_object* v_vs_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v_ks_562_ = lean_ctor_get(v_x_541_, 0);
v_vs_563_ = lean_ctor_get(v_x_541_, 1);
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(v_ks_562_, v_vs_563_, v___x_564_, v_x_543_);
return v___x_565_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg___boxed(lean_object* v_x_566_, lean_object* v_x_567_, lean_object* v_x_568_){
_start:
{
size_t v_x_2734__boxed_569_; lean_object* v_res_570_; 
v_x_2734__boxed_569_ = lean_unbox_usize(v_x_567_);
lean_dec(v_x_567_);
v_res_570_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(v_x_566_, v_x_2734__boxed_569_, v_x_568_);
lean_dec_ref(v_x_568_);
lean_dec_ref(v_x_566_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(lean_object* v_x_571_, lean_object* v_x_572_){
_start:
{
size_t v___x_573_; size_t v___x_574_; size_t v___x_575_; uint64_t v___x_576_; size_t v___x_577_; lean_object* v___x_578_; 
v___x_573_ = lean_ptr_addr(v_x_572_);
v___x_574_ = ((size_t)3ULL);
v___x_575_ = lean_usize_shift_right(v___x_573_, v___x_574_);
v___x_576_ = lean_usize_to_uint64(v___x_575_);
v___x_577_ = lean_uint64_to_usize(v___x_576_);
v___x_578_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(v_x_571_, v___x_577_, v_x_572_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg___boxed(lean_object* v_x_579_, lean_object* v_x_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(v_x_579_, v_x_580_);
lean_dec_ref(v_x_580_);
lean_dec_ref(v_x_579_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg(lean_object* v_f_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_){
_start:
{
lean_object* v___x_589_; lean_object* v_congrInfo_590_; lean_object* v___x_591_; 
v___x_589_ = lean_st_ref_get(v_a_583_);
v_congrInfo_590_ = lean_ctor_get(v___x_589_, 5);
lean_inc_ref(v_congrInfo_590_);
lean_dec(v___x_589_);
v___x_591_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(v_congrInfo_590_, v_f_582_);
lean_dec_ref(v_congrInfo_590_);
if (lean_obj_tag(v___x_591_) == 1)
{
lean_object* v_val_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_dec_ref(v_f_582_);
v_val_592_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_591_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_val_592_);
lean_dec(v___x_591_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
lean_ctor_set_tag(v___x_594_, 0);
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_val_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
else
{
lean_object* v___x_600_; 
lean_dec(v___x_591_);
lean_inc_ref(v_f_582_);
v___x_600_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(v_f_582_, v_a_584_, v_a_585_, v_a_586_, v_a_587_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_630_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_630_ == 0)
{
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_630_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_630_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; lean_object* v_share_606_; lean_object* v_maxFVar_607_; lean_object* v_proofInstInfo_608_; lean_object* v_inferType_609_; lean_object* v_getLevel_610_; lean_object* v_congrInfo_611_; lean_object* v_defEqI_612_; lean_object* v_extensions_613_; lean_object* v_issues_614_; lean_object* v_canon_615_; lean_object* v_instanceOverrides_616_; uint8_t v_debug_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_629_; 
v___x_605_ = lean_st_ref_take(v_a_583_);
v_share_606_ = lean_ctor_get(v___x_605_, 0);
v_maxFVar_607_ = lean_ctor_get(v___x_605_, 1);
v_proofInstInfo_608_ = lean_ctor_get(v___x_605_, 2);
v_inferType_609_ = lean_ctor_get(v___x_605_, 3);
v_getLevel_610_ = lean_ctor_get(v___x_605_, 4);
v_congrInfo_611_ = lean_ctor_get(v___x_605_, 5);
v_defEqI_612_ = lean_ctor_get(v___x_605_, 6);
v_extensions_613_ = lean_ctor_get(v___x_605_, 7);
v_issues_614_ = lean_ctor_get(v___x_605_, 8);
v_canon_615_ = lean_ctor_get(v___x_605_, 9);
v_instanceOverrides_616_ = lean_ctor_get(v___x_605_, 10);
v_debug_617_ = lean_ctor_get_uint8(v___x_605_, sizeof(void*)*11);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_629_ == 0)
{
v___x_619_ = v___x_605_;
v_isShared_620_ = v_isSharedCheck_629_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_instanceOverrides_616_);
lean_inc(v_canon_615_);
lean_inc(v_issues_614_);
lean_inc(v_extensions_613_);
lean_inc(v_defEqI_612_);
lean_inc(v_congrInfo_611_);
lean_inc(v_getLevel_610_);
lean_inc(v_inferType_609_);
lean_inc(v_proofInstInfo_608_);
lean_inc(v_maxFVar_607_);
lean_inc(v_share_606_);
lean_dec(v___x_605_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_629_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v___x_623_; 
lean_inc(v_a_601_);
v___x_621_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(v_congrInfo_611_, v_f_582_, v_a_601_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 5, v___x_621_);
v___x_623_ = v___x_619_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_share_606_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_maxFVar_607_);
lean_ctor_set(v_reuseFailAlloc_628_, 2, v_proofInstInfo_608_);
lean_ctor_set(v_reuseFailAlloc_628_, 3, v_inferType_609_);
lean_ctor_set(v_reuseFailAlloc_628_, 4, v_getLevel_610_);
lean_ctor_set(v_reuseFailAlloc_628_, 5, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_628_, 6, v_defEqI_612_);
lean_ctor_set(v_reuseFailAlloc_628_, 7, v_extensions_613_);
lean_ctor_set(v_reuseFailAlloc_628_, 8, v_issues_614_);
lean_ctor_set(v_reuseFailAlloc_628_, 9, v_canon_615_);
lean_ctor_set(v_reuseFailAlloc_628_, 10, v_instanceOverrides_616_);
lean_ctor_set_uint8(v_reuseFailAlloc_628_, sizeof(void*)*11, v_debug_617_);
v___x_623_ = v_reuseFailAlloc_628_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_624_; lean_object* v___x_626_; 
v___x_624_ = lean_st_ref_put(v_a_583_, v___x_623_);
if (v_isShared_604_ == 0)
{
v___x_626_ = v___x_603_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_601_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
}
else
{
lean_dec_ref(v_f_582_);
return v___x_600_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg___boxed(lean_object* v_f_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lean_Meta_Sym_getCongrInfo___redArg(v_f_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
lean_dec(v_a_636_);
lean_dec_ref(v_a_635_);
lean_dec(v_a_634_);
lean_dec_ref(v_a_633_);
lean_dec(v_a_632_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo(lean_object* v_f_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = l_Lean_Meta_Sym_getCongrInfo___redArg(v_f_639_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___boxed(lean_object* v_f_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Lean_Meta_Sym_getCongrInfo(v_f_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_, v_a_654_);
lean_dec(v_a_654_);
lean_dec_ref(v_a_653_);
lean_dec(v_a_652_);
lean_dec_ref(v_a_651_);
lean_dec(v_a_650_);
lean_dec_ref(v_a_649_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0(lean_object* v_00_u03b2_657_, lean_object* v_x_658_, lean_object* v_x_659_){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(v_x_658_, v_x_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___boxed(lean_object* v_00_u03b2_661_, lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0(v_00_u03b2_661_, v_x_662_, v_x_663_);
lean_dec_ref(v_x_663_);
lean_dec_ref(v_x_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1(lean_object* v_00_u03b2_665_, lean_object* v_x_666_, lean_object* v_x_667_, lean_object* v_x_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(v_x_666_, v_x_667_, v_x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0(lean_object* v_00_u03b2_670_, lean_object* v_x_671_, size_t v_x_672_, lean_object* v_x_673_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(v_x_671_, v_x_672_, v_x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___boxed(lean_object* v_00_u03b2_675_, lean_object* v_x_676_, lean_object* v_x_677_, lean_object* v_x_678_){
_start:
{
size_t v_x_2886__boxed_679_; lean_object* v_res_680_; 
v_x_2886__boxed_679_ = lean_unbox_usize(v_x_677_);
lean_dec(v_x_677_);
v_res_680_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0(v_00_u03b2_675_, v_x_676_, v_x_2886__boxed_679_, v_x_678_);
lean_dec_ref(v_x_678_);
lean_dec_ref(v_x_676_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2(lean_object* v_00_u03b2_681_, lean_object* v_x_682_, size_t v_x_683_, size_t v_x_684_, lean_object* v_x_685_, lean_object* v_x_686_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_x_682_, v_x_683_, v_x_684_, v_x_685_, v_x_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___boxed(lean_object* v_00_u03b2_688_, lean_object* v_x_689_, lean_object* v_x_690_, lean_object* v_x_691_, lean_object* v_x_692_, lean_object* v_x_693_){
_start:
{
size_t v_x_2897__boxed_694_; size_t v_x_2898__boxed_695_; lean_object* v_res_696_; 
v_x_2897__boxed_694_ = lean_unbox_usize(v_x_690_);
lean_dec(v_x_690_);
v_x_2898__boxed_695_ = lean_unbox_usize(v_x_691_);
lean_dec(v_x_691_);
v_res_696_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2(v_00_u03b2_688_, v_x_689_, v_x_2897__boxed_694_, v_x_2898__boxed_695_, v_x_692_, v_x_693_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_697_, lean_object* v_keys_698_, lean_object* v_vals_699_, lean_object* v_heq_700_, lean_object* v_i_701_, lean_object* v_k_702_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(v_keys_698_, v_vals_699_, v_i_701_, v_k_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_704_, lean_object* v_keys_705_, lean_object* v_vals_706_, lean_object* v_heq_707_, lean_object* v_i_708_, lean_object* v_k_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1(v_00_u03b2_704_, v_keys_705_, v_vals_706_, v_heq_707_, v_i_708_, v_k_709_);
lean_dec_ref(v_k_709_);
lean_dec_ref(v_vals_706_);
lean_dec_ref(v_keys_705_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_711_, lean_object* v_n_712_, lean_object* v_k_713_, lean_object* v_v_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(v_n_712_, v_k_713_, v_v_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_716_, size_t v_depth_717_, lean_object* v_keys_718_, lean_object* v_vals_719_, lean_object* v_heq_720_, lean_object* v_i_721_, lean_object* v_entries_722_){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(v_depth_717_, v_keys_718_, v_vals_719_, v_i_721_, v_entries_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_724_, lean_object* v_depth_725_, lean_object* v_keys_726_, lean_object* v_vals_727_, lean_object* v_heq_728_, lean_object* v_i_729_, lean_object* v_entries_730_){
_start:
{
size_t v_depth_boxed_731_; lean_object* v_res_732_; 
v_depth_boxed_731_ = lean_unbox_usize(v_depth_725_);
lean_dec(v_depth_725_);
v_res_732_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5(v_00_u03b2_724_, v_depth_boxed_731_, v_keys_726_, v_vals_727_, v_heq_728_, v_i_729_, v_entries_730_);
lean_dec_ref(v_vals_727_);
lean_dec_ref(v_keys_726_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_733_, lean_object* v_x_734_, lean_object* v_x_735_, lean_object* v_x_736_, lean_object* v_x_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(v_x_734_, v_x_735_, v_x_736_, v_x_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0(lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
if (lean_obj_tag(v_a_741_) == 0)
{
lean_object* v___x_743_; 
v___x_743_ = l_List_reverse___redArg(v_a_742_);
return v___x_743_;
}
else
{
lean_object* v_head_744_; lean_object* v_tail_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_760_; 
v_head_744_ = lean_ctor_get(v_a_741_, 0);
v_tail_745_ = lean_ctor_get(v_a_741_, 1);
v_isSharedCheck_760_ = !lean_is_exclusive(v_a_741_);
if (v_isSharedCheck_760_ == 0)
{
v___x_747_ = v_a_741_;
v_isShared_748_ = v_isSharedCheck_760_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_tail_745_);
lean_inc(v_head_744_);
lean_dec(v_a_741_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_760_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___y_750_; uint8_t v___x_757_; 
v___x_757_ = lean_unbox(v_head_744_);
lean_dec(v_head_744_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; 
v___x_758_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0));
v___y_750_ = v___x_758_;
goto v___jp_749_;
}
else
{
lean_object* v___x_759_; 
v___x_759_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1));
v___y_750_ = v___x_759_;
goto v___jp_749_;
}
v___jp_749_:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_754_; 
lean_inc_ref(v___y_750_);
v___x_751_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_751_, 0, v___y_750_);
v___x_752_ = l_Lean_MessageData_ofFormat(v___x_751_);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 1, v_a_742_);
lean_ctor_set(v___x_747_, 0, v___x_752_);
v___x_754_ = v___x_747_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v___x_752_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v_a_742_);
v___x_754_ = v_reuseFailAlloc_756_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
v_a_741_ = v_tail_745_;
v_a_742_ = v___x_754_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2(void){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1));
v___x_765_ = l_Lean_MessageData_ofFormat(v___x_764_);
return v___x_765_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4(void){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_767_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3));
v___x_768_ = l_Lean_stringToMessageData(v___x_767_);
return v___x_768_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5));
v___x_771_ = l_Lean_stringToMessageData(v___x_770_);
return v___x_771_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8(void){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7));
v___x_774_ = l_Lean_stringToMessageData(v___x_773_);
return v___x_774_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10(void){
_start:
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9));
v___x_777_ = l_Lean_stringToMessageData(v___x_776_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData(lean_object* v_x_778_){
_start:
{
switch(lean_obj_tag(v_x_778_))
{
case 0:
{
lean_object* v___x_779_; 
v___x_779_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2);
return v___x_779_;
}
case 1:
{
lean_object* v_prefixSize_780_; lean_object* v_suffixSize_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_798_; 
v_prefixSize_780_ = lean_ctor_get(v_x_778_, 0);
v_suffixSize_781_ = lean_ctor_get(v_x_778_, 1);
v_isSharedCheck_798_ = !lean_is_exclusive(v_x_778_);
if (v_isSharedCheck_798_ == 0)
{
v___x_783_ = v_x_778_;
v_isShared_784_ = v_isSharedCheck_798_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_suffixSize_781_);
lean_inc(v_prefixSize_780_);
lean_dec(v_x_778_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_798_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_785_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4);
v___x_786_ = l_Nat_reprFast(v_prefixSize_780_);
v___x_787_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
v___x_788_ = l_Lean_MessageData_ofFormat(v___x_787_);
if (v_isShared_784_ == 0)
{
lean_ctor_set_tag(v___x_783_, 7);
lean_ctor_set(v___x_783_, 1, v___x_788_);
lean_ctor_set(v___x_783_, 0, v___x_785_);
v___x_790_ = v___x_783_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_785_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v___x_788_);
v___x_790_ = v_reuseFailAlloc_797_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_791_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6);
v___x_792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_792_, 0, v___x_790_);
lean_ctor_set(v___x_792_, 1, v___x_791_);
v___x_793_ = l_Nat_reprFast(v_suffixSize_781_);
v___x_794_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
v___x_795_ = l_Lean_MessageData_ofFormat(v___x_794_);
v___x_796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_792_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
return v___x_796_;
}
}
}
case 2:
{
lean_object* v_rewritable_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v_rewritable_799_ = lean_ctor_get(v_x_778_, 0);
lean_inc_ref(v_rewritable_799_);
lean_dec_ref_known(v_x_778_, 1);
v___x_800_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8);
v___x_801_ = lean_array_to_list(v_rewritable_799_);
v___x_802_ = lean_box(0);
v___x_803_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0(v___x_801_, v___x_802_);
v___x_804_ = l_Lean_MessageData_ofList(v___x_803_);
v___x_805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_800_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
return v___x_805_;
}
default: 
{
lean_object* v_thm_806_; lean_object* v_proof_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_thm_806_ = lean_ctor_get(v_x_778_, 0);
lean_inc_ref(v_thm_806_);
lean_dec_ref_known(v_x_778_, 1);
v_proof_807_ = lean_ctor_get(v_thm_806_, 1);
lean_inc_ref(v_proof_807_);
lean_dec_ref(v_thm_806_);
v___x_808_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10);
v___x_809_ = l_Lean_MessageData_ofExpr(v_proof_807_);
v___x_810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_808_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
return v___x_810_;
}
}
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
}
#ifdef __cplusplus
}
#endif

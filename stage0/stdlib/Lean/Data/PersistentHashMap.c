// Lean compiler output
// Module: Lean.Data.PersistentHashMap
// Imports: public import Init.Data.Array.BasicAux public import Init.Data.UInt.Basic public import Init.Control.Except public import Init.Data.Array.Basic import Init.Data.String.Defs import Init.Data.ToString.Macro import Init.Data.Array.Lemmas
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
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_mapM_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_finIdxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_entry_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_entry_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ref_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ref_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_null_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_null_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_entries_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_entries_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_collision_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_collision_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_Node_isEmpty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_isEmpty___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__0_value;
static const lean_ctor_object l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__0_value)}};
static const lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_instInhabitedNode___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_instInhabitedNode___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentHashMap_shift;
LEAN_EXPORT size_t l_Lean_PersistentHashMap_branching;
LEAN_EXPORT size_t l_Lean_PersistentHashMap_maxDepth;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_maxCollisions;
static lean_once_cell_t l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_mkEmptyEntries___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentHashMap_mul2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mul2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentHashMap_div2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_div2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentHashMap_mod2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mod2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkCollisionNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PersistentHashMap_find_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Data.PersistentHashMap"};
static const lean_object* l_Lean_PersistentHashMap_find_x21___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_find_x21___redArg___closed__0_value;
static const lean_string_object l_Lean_PersistentHashMap_find_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.PersistentHashMap.find!"};
static const lean_object* l_Lean_PersistentHashMap_find_x21___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_find_x21___redArg___closed__1_value;
static const lean_string_object l_Lean_PersistentHashMap_find_x21___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "key is not in the map"};
static const lean_object* l_Lean_PersistentHashMap_find_x21___redArg___closed__2 = (const lean_object*)&l_Lean_PersistentHashMap_find_x21___redArg___closed__2_value;
static lean_once_cell_t l_Lean_PersistentHashMap_find_x21___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_find_x21___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__0_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__1_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__2 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__2_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__3 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__3_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__4 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__4_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__5 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__5_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__6 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__6_value;
static const lean_ctor_object l_Lean_PersistentHashMap_foldl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__0_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__1_value)}};
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__7 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__7_value;
static const lean_ctor_object l_Lean_PersistentHashMap_foldl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__7_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__2_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__3_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__4_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__5_value)}};
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__8 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__8_value;
static const lean_ctor_object l_Lean_PersistentHashMap_foldl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__8_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__6_value)}};
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__9 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_forIn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_forIn___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_forIn___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_forIn___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toList___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toList___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toList___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toArray___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toArray___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___redArg___closed__0_value;
static const lean_array_object l_Lean_PersistentHashMap_toArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_toArray___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PersistentHashMap_stats___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PersistentHashMap_stats___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_stats___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PersistentHashMap_Stats_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "{ nodes := "};
static const lean_object* l_Lean_PersistentHashMap_Stats_toString___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_Stats_toString___closed__0_value;
static const lean_string_object l_Lean_PersistentHashMap_Stats_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ", null := "};
static const lean_object* l_Lean_PersistentHashMap_Stats_toString___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_Stats_toString___closed__1_value;
static const lean_string_object l_Lean_PersistentHashMap_Stats_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ", collisions := "};
static const lean_object* l_Lean_PersistentHashMap_Stats_toString___closed__2 = (const lean_object*)&l_Lean_PersistentHashMap_Stats_toString___closed__2_value;
static const lean_string_object l_Lean_PersistentHashMap_Stats_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", depth := "};
static const lean_object* l_Lean_PersistentHashMap_Stats_toString___closed__3 = (const lean_object*)&l_Lean_PersistentHashMap_Stats_toString___closed__3_value;
static const lean_string_object l_Lean_PersistentHashMap_Stats_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_PersistentHashMap_Stats_toString___closed__4 = (const lean_object*)&l_Lean_PersistentHashMap_Stats_toString___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Stats_toString(lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_instToStringStats___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_Stats_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_instToStringStats___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_instToStringStats___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_PersistentHashMap_instToStringStats = (const lean_object*)&l_Lean_PersistentHashMap_instToStringStats___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___redArg(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___redArg___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_PersistentHashMap_Entry_ctorIdx___redArg(v_x_5_);
lean_dec(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx(lean_object* v_00_u03b1_7_, lean_object* v_00_u03b2_8_, lean_object* v_00_u03c3_9_, lean_object* v_x_10_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_PersistentHashMap_Entry_ctorIdx___redArg(v_x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___boxed(lean_object* v_00_u03b1_12_, lean_object* v_00_u03b2_13_, lean_object* v_00_u03c3_14_, lean_object* v_x_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_Lean_PersistentHashMap_Entry_ctorIdx(v_00_u03b1_12_, v_00_u03b2_13_, v_00_u03c3_14_, v_x_15_);
lean_dec(v_x_15_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim___redArg(lean_object* v_t_17_, lean_object* v_k_18_){
_start:
{
switch(lean_obj_tag(v_t_17_))
{
case 0:
{
lean_object* v_key_19_; lean_object* v_val_20_; lean_object* v___x_21_; 
v_key_19_ = lean_ctor_get(v_t_17_, 0);
lean_inc(v_key_19_);
v_val_20_ = lean_ctor_get(v_t_17_, 1);
lean_inc(v_val_20_);
lean_dec_ref_known(v_t_17_, 2);
v___x_21_ = lean_apply_2(v_k_18_, v_key_19_, v_val_20_);
return v___x_21_;
}
case 1:
{
lean_object* v_node_22_; lean_object* v___x_23_; 
v_node_22_ = lean_ctor_get(v_t_17_, 0);
lean_inc(v_node_22_);
lean_dec_ref_known(v_t_17_, 1);
v___x_23_ = lean_apply_1(v_k_18_, v_node_22_);
return v___x_23_;
}
default: 
{
return v_k_18_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim(lean_object* v_00_u03b1_24_, lean_object* v_00_u03b2_25_, lean_object* v_00_u03c3_26_, lean_object* v_motive_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_29_, v_k_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim___boxed(lean_object* v_00_u03b1_33_, lean_object* v_00_u03b2_34_, lean_object* v_00_u03c3_35_, lean_object* v_motive_36_, lean_object* v_ctorIdx_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_k_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l_Lean_PersistentHashMap_Entry_ctorElim(v_00_u03b1_33_, v_00_u03b2_34_, v_00_u03c3_35_, v_motive_36_, v_ctorIdx_37_, v_t_38_, v_h_39_, v_k_40_);
lean_dec(v_ctorIdx_37_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_entry_elim___redArg(lean_object* v_t_42_, lean_object* v_entry_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_42_, v_entry_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_entry_elim(lean_object* v_00_u03b1_45_, lean_object* v_00_u03b2_46_, lean_object* v_00_u03c3_47_, lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_entry_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_49_, v_entry_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ref_elim___redArg(lean_object* v_t_53_, lean_object* v_ref_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_53_, v_ref_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ref_elim(lean_object* v_00_u03b1_56_, lean_object* v_00_u03b2_57_, lean_object* v_00_u03c3_58_, lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_ref_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_60_, v_ref_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_null_elim___redArg(lean_object* v_t_64_, lean_object* v_null_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_64_, v_null_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_null_elim(lean_object* v_00_u03b1_67_, lean_object* v_00_u03b2_68_, lean_object* v_00_u03c3_69_, lean_object* v_motive_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_null_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_71_, v_null_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry___redArg(){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_box(2);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry___redArg___boxed(lean_object* v___dummy_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lean_PersistentHashMap_instInhabitedEntry___redArg();
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry(lean_object* v_00_u03b1_79_, lean_object* v_00_u03b2_80_, lean_object* v_00_u03c3_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_box(2);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___redArg(lean_object* v_x_83_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
lean_object* v___x_84_; 
v___x_84_ = lean_unsigned_to_nat(0u);
return v___x_84_;
}
else
{
lean_object* v___x_85_; 
v___x_85_ = lean_unsigned_to_nat(1u);
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___redArg___boxed(lean_object* v_x_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_PersistentHashMap_Node_ctorIdx___redArg(v_x_86_);
lean_dec_ref(v_x_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx(lean_object* v_00_u03b1_88_, lean_object* v_00_u03b2_89_, lean_object* v_x_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_PersistentHashMap_Node_ctorIdx___redArg(v_x_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___boxed(lean_object* v_00_u03b1_92_, lean_object* v_00_u03b2_93_, lean_object* v_x_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lean_PersistentHashMap_Node_ctorIdx(v_00_u03b1_92_, v_00_u03b2_93_, v_x_94_);
lean_dec_ref(v_x_94_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim___redArg(lean_object* v_t_96_, lean_object* v_k_97_){
_start:
{
if (lean_obj_tag(v_t_96_) == 0)
{
lean_object* v_es_98_; lean_object* v___x_99_; 
v_es_98_ = lean_ctor_get(v_t_96_, 0);
lean_inc_ref(v_es_98_);
lean_dec_ref_known(v_t_96_, 1);
v___x_99_ = lean_apply_1(v_k_97_, v_es_98_);
return v___x_99_;
}
else
{
lean_object* v_ks_100_; lean_object* v_vs_101_; lean_object* v___x_102_; 
v_ks_100_ = lean_ctor_get(v_t_96_, 0);
lean_inc_ref(v_ks_100_);
v_vs_101_ = lean_ctor_get(v_t_96_, 1);
lean_inc_ref(v_vs_101_);
lean_dec_ref_known(v_t_96_, 2);
v___x_102_ = lean_apply_3(v_k_97_, v_ks_100_, v_vs_101_, lean_box(0));
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim(lean_object* v_00_u03b1_103_, lean_object* v_00_u03b2_104_, lean_object* v_motive__1_105_, lean_object* v_ctorIdx_106_, lean_object* v_t_107_, lean_object* v_h_108_, lean_object* v_k_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_PersistentHashMap_Node_ctorElim___redArg(v_t_107_, v_k_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim___boxed(lean_object* v_00_u03b1_111_, lean_object* v_00_u03b2_112_, lean_object* v_motive__1_113_, lean_object* v_ctorIdx_114_, lean_object* v_t_115_, lean_object* v_h_116_, lean_object* v_k_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_PersistentHashMap_Node_ctorElim(v_00_u03b1_111_, v_00_u03b2_112_, v_motive__1_113_, v_ctorIdx_114_, v_t_115_, v_h_116_, v_k_117_);
lean_dec(v_ctorIdx_114_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_entries_elim___redArg(lean_object* v_t_119_, lean_object* v_entries_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Lean_PersistentHashMap_Node_ctorElim___redArg(v_t_119_, v_entries_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_entries_elim(lean_object* v_00_u03b1_122_, lean_object* v_00_u03b2_123_, lean_object* v_motive__1_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_entries_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lean_PersistentHashMap_Node_ctorElim___redArg(v_t_125_, v_entries_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_collision_elim___redArg(lean_object* v_t_129_, lean_object* v_collision_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_PersistentHashMap_Node_ctorElim___redArg(v_t_129_, v_collision_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_collision_elim(lean_object* v_00_u03b1_132_, lean_object* v_00_u03b2_133_, lean_object* v_motive__1_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_collision_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_PersistentHashMap_Node_ctorElim___redArg(v_t_135_, v_collision_137_);
return v___x_138_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object* v_x_139_){
_start:
{
if (lean_obj_tag(v_x_139_) == 0)
{
lean_object* v_es_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_es_140_ = lean_ctor_get(v_x_139_, 0);
v___x_141_ = lean_unsigned_to_nat(0u);
v___x_142_ = lean_array_get_size(v_es_140_);
v___x_143_ = lean_nat_dec_lt(v___x_141_, v___x_142_);
if (v___x_143_ == 0)
{
uint8_t v___x_144_; 
v___x_144_ = 1;
return v___x_144_;
}
else
{
if (v___x_143_ == 0)
{
return v___x_143_;
}
else
{
size_t v___x_145_; size_t v___x_146_; uint8_t v___x_147_; 
v___x_145_ = ((size_t)0ULL);
v___x_146_ = lean_usize_of_nat(v___x_142_);
v___x_147_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg(v_es_140_, v___x_145_, v___x_146_);
if (v___x_147_ == 0)
{
return v___x_143_;
}
else
{
uint8_t v___x_148_; 
v___x_148_ = 0;
return v___x_148_;
}
}
}
}
else
{
uint8_t v___x_149_; 
v___x_149_ = 0;
return v___x_149_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg(lean_object* v_as_150_, size_t v_i_151_, size_t v_stop_152_){
_start:
{
uint8_t v___x_157_; 
v___x_157_ = lean_usize_dec_eq(v_i_151_, v_stop_152_);
if (v___x_157_ == 0)
{
uint8_t v___x_158_; lean_object* v___x_159_; 
v___x_158_ = 1;
v___x_159_ = lean_array_uget_borrowed(v_as_150_, v_i_151_);
switch(lean_obj_tag(v___x_159_))
{
case 0:
{
return v___x_158_;
}
case 1:
{
lean_object* v_node_160_; uint8_t v___x_161_; 
v_node_160_ = lean_ctor_get(v___x_159_, 0);
v___x_161_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_node_160_);
if (v___x_161_ == 0)
{
return v___x_158_;
}
else
{
goto v___jp_153_;
}
}
default: 
{
goto v___jp_153_;
}
}
}
else
{
uint8_t v___x_162_; 
v___x_162_ = 0;
return v___x_162_;
}
v___jp_153_:
{
size_t v___x_154_; size_t v___x_155_; 
v___x_154_ = ((size_t)1ULL);
v___x_155_ = lean_usize_add(v_i_151_, v___x_154_);
v_i_151_ = v___x_155_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg___boxed(lean_object* v_as_163_, lean_object* v_i_164_, lean_object* v_stop_165_){
_start:
{
size_t v_i_boxed_166_; size_t v_stop_boxed_167_; uint8_t v_res_168_; lean_object* v_r_169_; 
v_i_boxed_166_ = lean_unbox_usize(v_i_164_);
lean_dec(v_i_164_);
v_stop_boxed_167_ = lean_unbox_usize(v_stop_165_);
lean_dec(v_stop_165_);
v_res_168_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg(v_as_163_, v_i_boxed_166_, v_stop_boxed_167_);
lean_dec_ref(v_as_163_);
v_r_169_ = lean_box(v_res_168_);
return v_r_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_isEmpty___redArg___boxed(lean_object* v_x_170_){
_start:
{
uint8_t v_res_171_; lean_object* v_r_172_; 
v_res_171_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_170_);
lean_dec_ref(v_x_170_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_Node_isEmpty(lean_object* v_00_u03b1_173_, lean_object* v_00_u03b2_174_, lean_object* v_x_175_){
_start:
{
uint8_t v___x_176_; 
v___x_176_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_isEmpty___boxed(lean_object* v_00_u03b1_177_, lean_object* v_00_u03b2_178_, lean_object* v_x_179_){
_start:
{
uint8_t v_res_180_; lean_object* v_r_181_; 
v_res_180_ = l_Lean_PersistentHashMap_Node_isEmpty(v_00_u03b1_177_, v_00_u03b2_178_, v_x_179_);
lean_dec_ref(v_x_179_);
v_r_181_ = lean_box(v_res_180_);
return v_r_181_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0(lean_object* v_00_u03b1_182_, lean_object* v_00_u03b2_183_, lean_object* v_as_184_, size_t v_i_185_, size_t v_stop_186_){
_start:
{
uint8_t v___x_187_; 
v___x_187_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg(v_as_184_, v_i_185_, v_stop_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___boxed(lean_object* v_00_u03b1_188_, lean_object* v_00_u03b2_189_, lean_object* v_as_190_, lean_object* v_i_191_, lean_object* v_stop_192_){
_start:
{
size_t v_i_boxed_193_; size_t v_stop_boxed_194_; uint8_t v_res_195_; lean_object* v_r_196_; 
v_i_boxed_193_ = lean_unbox_usize(v_i_191_);
lean_dec(v_i_191_);
v_stop_boxed_194_ = lean_unbox_usize(v_stop_192_);
lean_dec(v_stop_192_);
v_res_195_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0(v_00_u03b1_188_, v_00_u03b2_189_, v_as_190_, v_i_boxed_193_, v_stop_boxed_194_);
lean_dec_ref(v_as_190_);
v_r_196_ = lean_box(v_res_195_);
return v_r_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg(){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = ((lean_object*)(l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__1));
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg___boxed(lean_object* v___dummy_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_PersistentHashMap_instInhabitedNode___redArg();
return v_res_204_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_instInhabitedNode___closed__0(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_PersistentHashMap_instInhabitedNode___redArg();
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode(lean_object* v_00_u03b1_206_, lean_object* v_00_u03b2_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&l_Lean_PersistentHashMap_instInhabitedNode___closed__0, &l_Lean_PersistentHashMap_instInhabitedNode___closed__0_once, _init_l_Lean_PersistentHashMap_instInhabitedNode___closed__0);
return v___x_208_;
}
}
static size_t _init_l_Lean_PersistentHashMap_shift(void){
_start:
{
size_t v___x_209_; 
v___x_209_ = ((size_t)5ULL);
return v___x_209_;
}
}
static size_t _init_l_Lean_PersistentHashMap_branching(void){
_start:
{
size_t v___x_210_; 
v___x_210_ = ((size_t)32ULL);
return v___x_210_;
}
}
static size_t _init_l_Lean_PersistentHashMap_maxDepth(void){
_start:
{
size_t v___x_211_; 
v___x_211_ = ((size_t)7ULL);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_maxCollisions(void){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = lean_unsigned_to_nat(4u);
return v___x_212_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = lean_box(2);
v___x_214_ = lean_unsigned_to_nat(32u);
v___x_215_ = lean_mk_array(v___x_214_, v___x_213_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg(){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = lean_obj_once(&l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0, &l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___boxed(lean_object* v___dummy_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v_res_219_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0(void){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object* v_00_u03b1_221_, lean_object* v_00_u03b2_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_obj_once(&l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0, &l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0_once, _init_l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___redArg___closed__0(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_obj_once(&l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0, &l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0_once, _init_l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0);
v___x_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___redArg(){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___redArg___closed__0, &l_Lean_PersistentHashMap_empty___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___redArg___closed__0);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___redArg___boxed(lean_object* v___dummy_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_PersistentHashMap_empty___redArg();
return v_res_229_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___closed__0(void){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty(lean_object* v_00_u03b1_231_, lean_object* v_00_u03b2_232_, lean_object* v_inst_233_, lean_object* v_inst_234_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___closed__0, &l_Lean_PersistentHashMap_empty___closed__0_once, _init_l_Lean_PersistentHashMap_empty___closed__0);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___boxed(lean_object* v_00_u03b1_236_, lean_object* v_00_u03b2_237_, lean_object* v_inst_238_, lean_object* v_inst_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lean_PersistentHashMap_empty(v_00_u03b1_236_, v_00_u03b2_237_, v_inst_238_, v_inst_239_);
lean_dec_ref(v_inst_239_);
lean_dec_ref(v_inst_238_);
return v_res_240_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___redArg(lean_object* v_x_241_){
_start:
{
uint8_t v___x_242_; 
v___x_242_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___redArg___boxed(lean_object* v_x_243_){
_start:
{
uint8_t v_res_244_; lean_object* v_r_245_; 
v_res_244_ = l_Lean_PersistentHashMap_isEmpty___redArg(v_x_243_);
lean_dec_ref(v_x_243_);
v_r_245_ = lean_box(v_res_244_);
return v_r_245_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty(lean_object* v_00_u03b1_246_, lean_object* v_00_u03b2_247_, lean_object* v_x_248_, lean_object* v_x_249_, lean_object* v_x_250_){
_start:
{
uint8_t v___x_251_; 
v___x_251_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___boxed(lean_object* v_00_u03b1_252_, lean_object* v_00_u03b2_253_, lean_object* v_x_254_, lean_object* v_x_255_, lean_object* v_x_256_){
_start:
{
uint8_t v_res_257_; lean_object* v_r_258_; 
v_res_257_ = l_Lean_PersistentHashMap_isEmpty(v_00_u03b1_252_, v_00_u03b2_253_, v_x_254_, v_x_255_, v_x_256_);
lean_dec_ref(v_x_256_);
lean_dec_ref(v_x_255_);
lean_dec_ref(v_x_254_);
v_r_258_ = lean_box(v_res_257_);
return v_r_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___redArg(){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___redArg___closed__0, &l_Lean_PersistentHashMap_empty___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___redArg___closed__0);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___redArg___boxed(lean_object* v___dummy_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v_res_262_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited(lean_object* v_00_u03b1_264_, lean_object* v_00_u03b2_265_, lean_object* v_inst_266_, lean_object* v_inst_267_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = lean_obj_once(&l_Lean_PersistentHashMap_instInhabited___closed__0, &l_Lean_PersistentHashMap_instInhabited___closed__0_once, _init_l_Lean_PersistentHashMap_instInhabited___closed__0);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___boxed(lean_object* v_00_u03b1_269_, lean_object* v_00_u03b2_270_, lean_object* v_inst_271_, lean_object* v_inst_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Lean_PersistentHashMap_instInhabited(v_00_u03b1_269_, v_00_u03b2_270_, v_inst_271_, v_inst_272_);
lean_dec_ref(v_inst_272_);
lean_dec_ref(v_inst_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg(){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___redArg___closed__0, &l_Lean_PersistentHashMap_empty___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___redArg___closed__0);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg___boxed(lean_object* v___dummy_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v_res_277_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_mkEmptyEntries___closed__0(void){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object* v_00_u03b1_279_, lean_object* v_00_u03b2_280_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = lean_obj_once(&l_Lean_PersistentHashMap_mkEmptyEntries___closed__0, &l_Lean_PersistentHashMap_mkEmptyEntries___closed__0_once, _init_l_Lean_PersistentHashMap_mkEmptyEntries___closed__0);
return v___x_281_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentHashMap_mul2Shift(size_t v_i_282_, size_t v_shift_283_){
_start:
{
size_t v___x_284_; 
v___x_284_ = lean_usize_shift_left(v_i_282_, v_shift_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mul2Shift___boxed(lean_object* v_i_285_, lean_object* v_shift_286_){
_start:
{
size_t v_i_boxed_287_; size_t v_shift_boxed_288_; size_t v_res_289_; lean_object* v_r_290_; 
v_i_boxed_287_ = lean_unbox_usize(v_i_285_);
lean_dec(v_i_285_);
v_shift_boxed_288_ = lean_unbox_usize(v_shift_286_);
lean_dec(v_shift_286_);
v_res_289_ = l_Lean_PersistentHashMap_mul2Shift(v_i_boxed_287_, v_shift_boxed_288_);
v_r_290_ = lean_box_usize(v_res_289_);
return v_r_290_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentHashMap_div2Shift(size_t v_i_291_, size_t v_shift_292_){
_start:
{
size_t v___x_293_; 
v___x_293_ = lean_usize_shift_right(v_i_291_, v_shift_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_div2Shift___boxed(lean_object* v_i_294_, lean_object* v_shift_295_){
_start:
{
size_t v_i_boxed_296_; size_t v_shift_boxed_297_; size_t v_res_298_; lean_object* v_r_299_; 
v_i_boxed_296_ = lean_unbox_usize(v_i_294_);
lean_dec(v_i_294_);
v_shift_boxed_297_ = lean_unbox_usize(v_shift_295_);
lean_dec(v_shift_295_);
v_res_298_ = l_Lean_PersistentHashMap_div2Shift(v_i_boxed_296_, v_shift_boxed_297_);
v_r_299_ = lean_box_usize(v_res_298_);
return v_r_299_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentHashMap_mod2Shift(size_t v_i_300_, size_t v_shift_301_){
_start:
{
size_t v___x_302_; size_t v___x_303_; size_t v___x_304_; size_t v___x_305_; 
v___x_302_ = ((size_t)1ULL);
v___x_303_ = lean_usize_shift_left(v___x_302_, v_shift_301_);
v___x_304_ = lean_usize_sub(v___x_303_, v___x_302_);
v___x_305_ = lean_usize_land(v_i_300_, v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mod2Shift___boxed(lean_object* v_i_306_, lean_object* v_shift_307_){
_start:
{
size_t v_i_boxed_308_; size_t v_shift_boxed_309_; size_t v_res_310_; lean_object* v_r_311_; 
v_i_boxed_308_ = lean_unbox_usize(v_i_306_);
lean_dec(v_i_306_);
v_shift_boxed_309_ = lean_unbox_usize(v_shift_307_);
lean_dec(v_shift_307_);
v_res_310_ = l_Lean_PersistentHashMap_mod2Shift(v_i_boxed_308_, v_shift_boxed_309_);
v_r_311_ = lean_box_usize(v_res_310_);
return v_r_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___redArg(lean_object* v_inst_312_, lean_object* v_x_313_, lean_object* v_x_314_, lean_object* v_x_315_, lean_object* v_x_316_){
_start:
{
lean_object* v_ks_317_; lean_object* v_vs_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_343_; 
v_ks_317_ = lean_ctor_get(v_x_313_, 0);
v_vs_318_ = lean_ctor_get(v_x_313_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v_x_313_);
if (v_isSharedCheck_343_ == 0)
{
v___x_320_ = v_x_313_;
v_isShared_321_ = v_isSharedCheck_343_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_vs_318_);
lean_inc(v_ks_317_);
lean_dec(v_x_313_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_343_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_322_ = lean_array_get_size(v_ks_317_);
v___x_323_ = lean_nat_dec_lt(v_x_314_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_327_; 
lean_dec(v_x_314_);
lean_dec_ref(v_inst_312_);
v___x_324_ = lean_array_push(v_ks_317_, v_x_315_);
v___x_325_ = lean_array_push(v_vs_318_, v_x_316_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 1, v___x_325_);
lean_ctor_set(v___x_320_, 0, v___x_324_);
v___x_327_ = v___x_320_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_324_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v___x_325_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
else
{
lean_object* v_k_x27_329_; lean_object* v___x_330_; uint8_t v___x_331_; 
v_k_x27_329_ = lean_array_fget_borrowed(v_ks_317_, v_x_314_);
lean_inc_ref(v_inst_312_);
lean_inc(v_k_x27_329_);
lean_inc(v_x_315_);
v___x_330_ = lean_apply_2(v_inst_312_, v_x_315_, v_k_x27_329_);
v___x_331_ = lean_unbox(v___x_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_333_; 
if (v_isShared_321_ == 0)
{
v___x_333_ = v___x_320_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_ks_317_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_vs_318_);
v___x_333_ = v_reuseFailAlloc_337_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_unsigned_to_nat(1u);
v___x_335_ = lean_nat_add(v_x_314_, v___x_334_);
lean_dec(v_x_314_);
v_x_313_ = v___x_333_;
v_x_314_ = v___x_335_;
goto _start;
}
}
else
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
lean_dec_ref(v_inst_312_);
v___x_338_ = lean_array_fset(v_ks_317_, v_x_314_, v_x_315_);
v___x_339_ = lean_array_fset(v_vs_318_, v_x_314_, v_x_316_);
lean_dec(v_x_314_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 1, v___x_339_);
lean_ctor_set(v___x_320_, 0, v___x_338_);
v___x_341_ = v___x_320_;
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux(lean_object* v_00_u03b1_344_, lean_object* v_00_u03b2_345_, lean_object* v_inst_346_, lean_object* v_x_347_, lean_object* v_x_348_, lean_object* v_x_349_, lean_object* v_x_350_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___redArg(v_inst_346_, v_x_347_, v_x_348_, v_x_349_, v_x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___redArg(lean_object* v_inst_352_, lean_object* v_n_353_, lean_object* v_k_354_, lean_object* v_v_355_){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___redArg(v_inst_352_, v_n_353_, v___x_356_, v_k_354_, v_v_355_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode(lean_object* v_00_u03b1_358_, lean_object* v_00_u03b2_359_, lean_object* v_inst_360_, lean_object* v_n_361_, lean_object* v_k_362_, lean_object* v_v_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_PersistentHashMap_insertAtCollisionNode___redArg(v_inst_360_, v_n_361_, v_k_362_, v_v_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object* v_x_365_){
_start:
{
lean_object* v_ks_366_; lean_object* v___x_367_; 
v_ks_366_ = lean_ctor_get(v_x_365_, 0);
v___x_367_ = lean_array_get_size(v_ks_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg___boxed(lean_object* v_x_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_x_368_);
lean_dec_ref(v_x_368_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize(lean_object* v_00_u03b1_370_, lean_object* v_00_u03b2_371_, lean_object* v_x_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___boxed(lean_object* v_00_u03b1_374_, lean_object* v_00_u03b2_375_, lean_object* v_x_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_PersistentHashMap_getCollisionNodeSize(v_00_u03b1_374_, v_00_u03b2_375_, v_x_376_);
lean_dec_ref(v_x_376_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object* v_k_u2081_378_, lean_object* v_v_u2081_379_, lean_object* v_k_u2082_380_, lean_object* v_v_u2082_381_){
_start:
{
lean_object* v___x_382_; lean_object* v_ks_383_; lean_object* v___x_384_; lean_object* v_ks_385_; lean_object* v___x_386_; lean_object* v_vs_387_; lean_object* v___x_388_; 
v___x_382_ = lean_unsigned_to_nat(4u);
v_ks_383_ = lean_mk_empty_array_with_capacity(v___x_382_);
lean_inc_ref(v_ks_383_);
v___x_384_ = lean_array_push(v_ks_383_, v_k_u2081_378_);
v_ks_385_ = lean_array_push(v___x_384_, v_k_u2082_380_);
v___x_386_ = lean_array_push(v_ks_383_, v_v_u2081_379_);
v_vs_387_ = lean_array_push(v___x_386_, v_v_u2082_381_);
v___x_388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_388_, 0, v_ks_385_);
lean_ctor_set(v___x_388_, 1, v_vs_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkCollisionNode(lean_object* v_00_u03b1_389_, lean_object* v_00_u03b2_390_, lean_object* v_k_u2081_391_, lean_object* v_v_u2081_392_, lean_object* v_k_u2082_393_, lean_object* v_v_u2082_394_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_k_u2081_391_, v_v_u2081_392_, v_k_u2082_393_, v_v_u2082_394_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___redArg___closed__0(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_box(0);
v___x_397_ = l_unsafeCast___redArg(v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___redArg(lean_object* v_inst_398_, lean_object* v_inst_399_, lean_object* v_x_400_, size_t v_x_401_, size_t v_x_402_, lean_object* v_x_403_, lean_object* v_x_404_){
_start:
{
if (lean_obj_tag(v_x_400_) == 0)
{
lean_object* v_es_405_; size_t v___x_406_; size_t v___x_407_; lean_object* v_j_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v_es_405_ = lean_ctor_get(v_x_400_, 0);
v___x_406_ = ((size_t)31ULL);
v___x_407_ = lean_usize_land(v_x_401_, v___x_406_);
v_j_408_ = lean_usize_to_nat(v___x_407_);
v___x_409_ = lean_array_get_size(v_es_405_);
v___x_410_ = lean_nat_dec_lt(v_j_408_, v___x_409_);
if (v___x_410_ == 0)
{
lean_dec(v_j_408_);
lean_dec(v_x_404_);
lean_dec(v_x_403_);
lean_dec_ref(v_inst_399_);
lean_dec_ref(v_inst_398_);
return v_x_400_;
}
else
{
lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_450_; 
lean_inc_ref(v_es_405_);
v_isSharedCheck_450_ = !lean_is_exclusive(v_x_400_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v_x_400_, 0);
lean_dec(v_unused_451_);
v___x_412_ = v_x_400_;
v_isShared_413_ = v_isSharedCheck_450_;
goto v_resetjp_411_;
}
else
{
lean_dec(v_x_400_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_450_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v_v_414_; lean_object* v___x_415_; lean_object* v_xs_x27_416_; lean_object* v___y_418_; 
v_v_414_ = lean_array_fget(v_es_405_, v_j_408_);
v___x_415_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___redArg___closed__0);
v_xs_x27_416_ = lean_array_fset(v_es_405_, v_j_408_, v___x_415_);
switch(lean_obj_tag(v_v_414_))
{
case 0:
{
lean_object* v_key_423_; lean_object* v_val_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_435_; 
lean_dec_ref(v_inst_399_);
v_key_423_ = lean_ctor_get(v_v_414_, 0);
v_val_424_ = lean_ctor_get(v_v_414_, 1);
v_isSharedCheck_435_ = !lean_is_exclusive(v_v_414_);
if (v_isSharedCheck_435_ == 0)
{
v___x_426_ = v_v_414_;
v_isShared_427_ = v_isSharedCheck_435_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_val_424_);
lean_inc(v_key_423_);
lean_dec(v_v_414_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_435_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_428_; uint8_t v___x_429_; 
lean_inc(v_key_423_);
lean_inc(v_x_403_);
v___x_428_ = lean_apply_2(v_inst_398_, v_x_403_, v_key_423_);
v___x_429_ = lean_unbox(v___x_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; lean_object* v___x_431_; 
lean_del_object(v___x_426_);
v___x_430_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_423_, v_val_424_, v_x_403_, v_x_404_);
v___x_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
v___y_418_ = v___x_431_;
goto v___jp_417_;
}
else
{
lean_object* v___x_433_; 
lean_dec(v_val_424_);
lean_dec(v_key_423_);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 1, v_x_404_);
lean_ctor_set(v___x_426_, 0, v_x_403_);
v___x_433_ = v___x_426_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_x_403_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_x_404_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
v___y_418_ = v___x_433_;
goto v___jp_417_;
}
}
}
}
case 1:
{
lean_object* v_node_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_448_; 
v_node_436_ = lean_ctor_get(v_v_414_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v_v_414_);
if (v_isSharedCheck_448_ == 0)
{
v___x_438_ = v_v_414_;
v_isShared_439_ = v_isSharedCheck_448_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_node_436_);
lean_dec(v_v_414_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_448_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
size_t v___x_440_; size_t v___x_441_; size_t v___x_442_; size_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_446_; 
v___x_440_ = ((size_t)5ULL);
v___x_441_ = lean_usize_shift_right(v_x_401_, v___x_440_);
v___x_442_ = ((size_t)1ULL);
v___x_443_ = lean_usize_add(v_x_402_, v___x_442_);
v___x_444_ = l_Lean_PersistentHashMap_insertAux___redArg(v_inst_398_, v_inst_399_, v_node_436_, v___x_441_, v___x_443_, v_x_403_, v_x_404_);
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
v___y_418_ = v___x_446_;
goto v___jp_417_;
}
}
}
default: 
{
lean_object* v___x_449_; 
lean_dec_ref(v_inst_399_);
lean_dec_ref(v_inst_398_);
v___x_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_449_, 0, v_x_403_);
lean_ctor_set(v___x_449_, 1, v_x_404_);
v___y_418_ = v___x_449_;
goto v___jp_417_;
}
}
v___jp_417_:
{
lean_object* v___x_419_; lean_object* v___x_421_; 
v___x_419_ = lean_array_fset(v_xs_x27_416_, v_j_408_, v___y_418_);
lean_dec(v_j_408_);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v___x_419_);
v___x_421_ = v___x_412_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_419_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
}
else
{
lean_object* v_ks_452_; lean_object* v_vs_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_471_; 
v_ks_452_ = lean_ctor_get(v_x_400_, 0);
v_vs_453_ = lean_ctor_get(v_x_400_, 1);
v_isSharedCheck_471_ = !lean_is_exclusive(v_x_400_);
if (v_isSharedCheck_471_ == 0)
{
v___x_455_ = v_x_400_;
v_isShared_456_ = v_isSharedCheck_471_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_vs_453_);
lean_inc(v_ks_452_);
lean_dec(v_x_400_);
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
lean_object* v_val_459_; size_t v___x_460_; uint8_t v___x_461_; 
lean_inc_ref(v_inst_398_);
v_val_459_ = l_Lean_PersistentHashMap_insertAtCollisionNode___redArg(v_inst_398_, v___x_458_, v_x_403_, v_x_404_);
v___x_460_ = ((size_t)7ULL);
v___x_461_ = lean_usize_dec_le(v___x_460_, v_x_402_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_462_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_val_459_);
v___x_463_ = lean_unsigned_to_nat(4u);
v___x_464_ = lean_nat_dec_lt(v___x_462_, v___x_463_);
lean_dec(v___x_462_);
if (v___x_464_ == 0)
{
lean_object* v_ks_465_; lean_object* v_vs_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_ks_465_ = lean_ctor_get(v_val_459_, 0);
lean_inc_ref(v_ks_465_);
v_vs_466_ = lean_ctor_get(v_val_459_, 1);
lean_inc_ref(v_vs_466_);
lean_dec_ref(v_val_459_);
v___x_467_ = lean_unsigned_to_nat(0u);
v___x_468_ = lean_obj_once(&l_Lean_PersistentHashMap_mkEmptyEntries___closed__0, &l_Lean_PersistentHashMap_mkEmptyEntries___closed__0_once, _init_l_Lean_PersistentHashMap_mkEmptyEntries___closed__0);
v___x_469_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg(v_inst_398_, v_inst_399_, v_x_402_, v_ks_465_, v_vs_466_, v___x_467_, v___x_468_);
lean_dec_ref(v_vs_466_);
lean_dec_ref(v_ks_465_);
return v___x_469_;
}
else
{
lean_dec_ref(v_inst_399_);
lean_dec_ref(v_inst_398_);
return v_val_459_;
}
}
else
{
lean_dec_ref(v_inst_399_);
lean_dec_ref(v_inst_398_);
return v_val_459_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg(lean_object* v_inst_472_, lean_object* v_inst_473_, size_t v_depth_474_, lean_object* v_keys_475_, lean_object* v_vals_476_, lean_object* v_i_477_, lean_object* v_entries_478_){
_start:
{
lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_479_ = lean_array_get_size(v_keys_475_);
v___x_480_ = lean_nat_dec_lt(v_i_477_, v___x_479_);
if (v___x_480_ == 0)
{
lean_dec(v_i_477_);
lean_dec_ref(v_inst_473_);
lean_dec_ref(v_inst_472_);
return v_entries_478_;
}
else
{
lean_object* v_k_481_; lean_object* v_v_482_; lean_object* v___x_483_; uint64_t v___x_484_; size_t v_h_485_; size_t v___x_486_; lean_object* v___x_487_; size_t v___x_488_; size_t v___x_489_; size_t v___x_490_; size_t v_h_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v_k_481_ = lean_array_fget_borrowed(v_keys_475_, v_i_477_);
v_v_482_ = lean_array_fget_borrowed(v_vals_476_, v_i_477_);
lean_inc_ref_n(v_inst_473_, 2);
lean_inc_n(v_k_481_, 2);
v___x_483_ = lean_apply_1(v_inst_473_, v_k_481_);
v___x_484_ = lean_unbox_uint64(v___x_483_);
lean_dec_ref(v___x_483_);
v_h_485_ = lean_uint64_to_usize(v___x_484_);
v___x_486_ = ((size_t)5ULL);
v___x_487_ = lean_unsigned_to_nat(1u);
v___x_488_ = ((size_t)1ULL);
v___x_489_ = lean_usize_sub(v_depth_474_, v___x_488_);
v___x_490_ = lean_usize_mul(v___x_486_, v___x_489_);
v_h_491_ = lean_usize_shift_right(v_h_485_, v___x_490_);
v___x_492_ = lean_nat_add(v_i_477_, v___x_487_);
lean_dec(v_i_477_);
lean_inc(v_v_482_);
lean_inc_ref(v_inst_472_);
v___x_493_ = l_Lean_PersistentHashMap_insertAux___redArg(v_inst_472_, v_inst_473_, v_entries_478_, v_h_491_, v_depth_474_, v_k_481_, v_v_482_);
v_i_477_ = v___x_492_;
v_entries_478_ = v___x_493_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg___boxed(lean_object* v_inst_495_, lean_object* v_inst_496_, lean_object* v_depth_497_, lean_object* v_keys_498_, lean_object* v_vals_499_, lean_object* v_i_500_, lean_object* v_entries_501_){
_start:
{
size_t v_depth_boxed_502_; lean_object* v_res_503_; 
v_depth_boxed_502_ = lean_unbox_usize(v_depth_497_);
lean_dec(v_depth_497_);
v_res_503_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg(v_inst_495_, v_inst_496_, v_depth_boxed_502_, v_keys_498_, v_vals_499_, v_i_500_, v_entries_501_);
lean_dec_ref(v_vals_499_);
lean_dec_ref(v_keys_498_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___redArg___boxed(lean_object* v_inst_504_, lean_object* v_inst_505_, lean_object* v_x_506_, lean_object* v_x_507_, lean_object* v_x_508_, lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
size_t v_x_401__boxed_511_; size_t v_x_402__boxed_512_; lean_object* v_res_513_; 
v_x_401__boxed_511_ = lean_unbox_usize(v_x_507_);
lean_dec(v_x_507_);
v_x_402__boxed_512_ = lean_unbox_usize(v_x_508_);
lean_dec(v_x_508_);
v_res_513_ = l_Lean_PersistentHashMap_insertAux___redArg(v_inst_504_, v_inst_505_, v_x_506_, v_x_401__boxed_511_, v_x_402__boxed_512_, v_x_509_, v_x_510_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse(lean_object* v_00_u03b1_514_, lean_object* v_00_u03b2_515_, lean_object* v_inst_516_, lean_object* v_inst_517_, size_t v_depth_518_, lean_object* v_keys_519_, lean_object* v_vals_520_, lean_object* v_heq_521_, lean_object* v_i_522_, lean_object* v_entries_523_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg(v_inst_516_, v_inst_517_, v_depth_518_, v_keys_519_, v_vals_520_, v_i_522_, v_entries_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___boxed(lean_object* v_00_u03b1_525_, lean_object* v_00_u03b2_526_, lean_object* v_inst_527_, lean_object* v_inst_528_, lean_object* v_depth_529_, lean_object* v_keys_530_, lean_object* v_vals_531_, lean_object* v_heq_532_, lean_object* v_i_533_, lean_object* v_entries_534_){
_start:
{
size_t v_depth_boxed_535_; lean_object* v_res_536_; 
v_depth_boxed_535_ = lean_unbox_usize(v_depth_529_);
lean_dec(v_depth_529_);
v_res_536_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse(v_00_u03b1_525_, v_00_u03b2_526_, v_inst_527_, v_inst_528_, v_depth_boxed_535_, v_keys_530_, v_vals_531_, v_heq_532_, v_i_533_, v_entries_534_);
lean_dec_ref(v_vals_531_);
lean_dec_ref(v_keys_530_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux(lean_object* v_00_u03b1_537_, lean_object* v_00_u03b2_538_, lean_object* v_inst_539_, lean_object* v_inst_540_, lean_object* v_x_541_, size_t v_x_542_, size_t v_x_543_, lean_object* v_x_544_, lean_object* v_x_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l_Lean_PersistentHashMap_insertAux___redArg(v_inst_539_, v_inst_540_, v_x_541_, v_x_542_, v_x_543_, v_x_544_, v_x_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___boxed(lean_object* v_00_u03b1_547_, lean_object* v_00_u03b2_548_, lean_object* v_inst_549_, lean_object* v_inst_550_, lean_object* v_x_551_, lean_object* v_x_552_, lean_object* v_x_553_, lean_object* v_x_554_, lean_object* v_x_555_){
_start:
{
size_t v_x_578__boxed_556_; size_t v_x_579__boxed_557_; lean_object* v_res_558_; 
v_x_578__boxed_556_ = lean_unbox_usize(v_x_552_);
lean_dec(v_x_552_);
v_x_579__boxed_557_ = lean_unbox_usize(v_x_553_);
lean_dec(v_x_553_);
v_res_558_ = l_Lean_PersistentHashMap_insertAux(v_00_u03b1_547_, v_00_u03b2_548_, v_inst_549_, v_inst_550_, v_x_551_, v_x_578__boxed_556_, v_x_579__boxed_557_, v_x_554_, v_x_555_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object* v_x_559_, lean_object* v_x_560_, lean_object* v_x_561_, lean_object* v_x_562_, lean_object* v_x_563_){
_start:
{
lean_object* v___x_564_; uint64_t v___x_565_; size_t v___x_566_; size_t v___x_567_; lean_object* v___x_568_; 
lean_inc_ref(v_x_560_);
lean_inc(v_x_562_);
v___x_564_ = lean_apply_1(v_x_560_, v_x_562_);
v___x_565_ = lean_unbox_uint64(v___x_564_);
lean_dec_ref(v___x_564_);
v___x_566_ = lean_uint64_to_usize(v___x_565_);
v___x_567_ = ((size_t)1ULL);
v___x_568_ = l_Lean_PersistentHashMap_insertAux___redArg(v_x_559_, v_x_560_, v_x_561_, v___x_566_, v___x_567_, v_x_562_, v_x_563_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert(lean_object* v_00_u03b1_569_, lean_object* v_00_u03b2_570_, lean_object* v_x_571_, lean_object* v_x_572_, lean_object* v_x_573_, lean_object* v_x_574_, lean_object* v_x_575_){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = l_Lean_PersistentHashMap_insert___redArg(v_x_571_, v_x_572_, v_x_573_, v_x_574_, v_x_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___redArg(lean_object* v_inst_577_, lean_object* v_keys_578_, lean_object* v_vals_579_, lean_object* v_i_580_, lean_object* v_k_581_){
_start:
{
lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_582_ = lean_array_get_size(v_keys_578_);
v___x_583_ = lean_nat_dec_lt(v_i_580_, v___x_582_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; 
lean_dec(v_k_581_);
lean_dec(v_i_580_);
lean_dec_ref(v_inst_577_);
v___x_584_ = lean_box(0);
return v___x_584_;
}
else
{
lean_object* v_k_x27_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v_k_x27_585_ = lean_array_fget_borrowed(v_keys_578_, v_i_580_);
lean_inc_ref(v_inst_577_);
lean_inc(v_k_x27_585_);
lean_inc(v_k_581_);
v___x_586_ = lean_apply_2(v_inst_577_, v_k_581_, v_k_x27_585_);
v___x_587_ = lean_unbox(v___x_586_);
if (v___x_587_ == 0)
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = lean_unsigned_to_nat(1u);
v___x_589_ = lean_nat_add(v_i_580_, v___x_588_);
lean_dec(v_i_580_);
v_i_580_ = v___x_589_;
goto _start;
}
else
{
lean_object* v___x_591_; lean_object* v___x_592_; 
lean_dec(v_k_581_);
lean_dec_ref(v_inst_577_);
v___x_591_ = lean_array_fget_borrowed(v_vals_579_, v_i_580_);
lean_dec(v_i_580_);
lean_inc(v___x_591_);
v___x_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
return v___x_592_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___redArg___boxed(lean_object* v_inst_593_, lean_object* v_keys_594_, lean_object* v_vals_595_, lean_object* v_i_596_, lean_object* v_k_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lean_PersistentHashMap_findAtAux___redArg(v_inst_593_, v_keys_594_, v_vals_595_, v_i_596_, v_k_597_);
lean_dec_ref(v_vals_595_);
lean_dec_ref(v_keys_594_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux(lean_object* v_00_u03b1_599_, lean_object* v_00_u03b2_600_, lean_object* v_inst_601_, lean_object* v_keys_602_, lean_object* v_vals_603_, lean_object* v_heq_604_, lean_object* v_i_605_, lean_object* v_k_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lean_PersistentHashMap_findAtAux___redArg(v_inst_601_, v_keys_602_, v_vals_603_, v_i_605_, v_k_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___boxed(lean_object* v_00_u03b1_608_, lean_object* v_00_u03b2_609_, lean_object* v_inst_610_, lean_object* v_keys_611_, lean_object* v_vals_612_, lean_object* v_heq_613_, lean_object* v_i_614_, lean_object* v_k_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lean_PersistentHashMap_findAtAux(v_00_u03b1_608_, v_00_u03b2_609_, v_inst_610_, v_keys_611_, v_vals_612_, v_heq_613_, v_i_614_, v_k_615_);
lean_dec_ref(v_vals_612_);
lean_dec_ref(v_keys_611_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___redArg(lean_object* v_inst_617_, lean_object* v_x_618_, size_t v_x_619_, lean_object* v_x_620_){
_start:
{
if (lean_obj_tag(v_x_618_) == 0)
{
lean_object* v_es_621_; lean_object* v___x_622_; size_t v___x_623_; size_t v___x_624_; lean_object* v_j_625_; lean_object* v___x_626_; 
v_es_621_ = lean_ctor_get(v_x_618_, 0);
lean_inc_ref(v_es_621_);
lean_dec_ref_known(v_x_618_, 1);
v___x_622_ = lean_box(2);
v___x_623_ = ((size_t)31ULL);
v___x_624_ = lean_usize_land(v_x_619_, v___x_623_);
v_j_625_ = lean_usize_to_nat(v___x_624_);
v___x_626_ = lean_array_get(v___x_622_, v_es_621_, v_j_625_);
lean_dec(v_j_625_);
lean_dec_ref(v_es_621_);
switch(lean_obj_tag(v___x_626_))
{
case 0:
{
lean_object* v_key_627_; lean_object* v_val_628_; lean_object* v___x_629_; uint8_t v___x_630_; 
v_key_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_key_627_);
v_val_628_ = lean_ctor_get(v___x_626_, 1);
lean_inc(v_val_628_);
lean_dec_ref_known(v___x_626_, 2);
v___x_629_ = lean_apply_2(v_inst_617_, v_x_620_, v_key_627_);
v___x_630_ = lean_unbox(v___x_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; 
lean_dec(v_val_628_);
v___x_631_ = lean_box(0);
return v___x_631_;
}
else
{
lean_object* v___x_632_; 
v___x_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_632_, 0, v_val_628_);
return v___x_632_;
}
}
case 1:
{
lean_object* v_node_633_; size_t v___x_634_; size_t v___x_635_; 
v_node_633_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_node_633_);
lean_dec_ref_known(v___x_626_, 1);
v___x_634_ = ((size_t)5ULL);
v___x_635_ = lean_usize_shift_right(v_x_619_, v___x_634_);
v_x_618_ = v_node_633_;
v_x_619_ = v___x_635_;
goto _start;
}
default: 
{
lean_object* v___x_637_; 
lean_dec(v_x_620_);
lean_dec_ref(v_inst_617_);
v___x_637_ = lean_box(0);
return v___x_637_;
}
}
}
else
{
lean_object* v_ks_638_; lean_object* v_vs_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v_ks_638_ = lean_ctor_get(v_x_618_, 0);
lean_inc_ref(v_ks_638_);
v_vs_639_ = lean_ctor_get(v_x_618_, 1);
lean_inc_ref(v_vs_639_);
lean_dec_ref_known(v_x_618_, 2);
v___x_640_ = lean_unsigned_to_nat(0u);
v___x_641_ = l_Lean_PersistentHashMap_findAtAux___redArg(v_inst_617_, v_ks_638_, v_vs_639_, v___x_640_, v_x_620_);
lean_dec_ref(v_vs_639_);
lean_dec_ref(v_ks_638_);
return v___x_641_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___redArg___boxed(lean_object* v_inst_642_, lean_object* v_x_643_, lean_object* v_x_644_, lean_object* v_x_645_){
_start:
{
size_t v_x_118__boxed_646_; lean_object* v_res_647_; 
v_x_118__boxed_646_ = lean_unbox_usize(v_x_644_);
lean_dec(v_x_644_);
v_res_647_ = l_Lean_PersistentHashMap_findAux___redArg(v_inst_642_, v_x_643_, v_x_118__boxed_646_, v_x_645_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux(lean_object* v_00_u03b1_648_, lean_object* v_00_u03b2_649_, lean_object* v_inst_650_, lean_object* v_x_651_, size_t v_x_652_, lean_object* v_x_653_){
_start:
{
lean_object* v___x_654_; 
lean_inc_ref(v_x_651_);
v___x_654_ = l_Lean_PersistentHashMap_findAux___redArg(v_inst_650_, v_x_651_, v_x_652_, v_x_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___boxed(lean_object* v_00_u03b1_655_, lean_object* v_00_u03b2_656_, lean_object* v_inst_657_, lean_object* v_x_658_, lean_object* v_x_659_, lean_object* v_x_660_){
_start:
{
size_t v_x_170__boxed_661_; lean_object* v_res_662_; 
v_x_170__boxed_661_ = lean_unbox_usize(v_x_659_);
lean_dec(v_x_659_);
v_res_662_ = l_Lean_PersistentHashMap_findAux(v_00_u03b1_655_, v_00_u03b2_656_, v_inst_657_, v_x_658_, v_x_170__boxed_661_, v_x_660_);
lean_dec_ref(v_x_658_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object* v_x_663_, lean_object* v_x_664_, lean_object* v_x_665_, lean_object* v_x_666_){
_start:
{
lean_object* v___x_667_; uint64_t v___x_668_; size_t v___x_669_; lean_object* v___x_670_; 
lean_inc(v_x_666_);
v___x_667_ = lean_apply_1(v_x_664_, v_x_666_);
v___x_668_ = lean_unbox_uint64(v___x_667_);
lean_dec_ref(v___x_667_);
v___x_669_ = lean_uint64_to_usize(v___x_668_);
lean_inc_ref(v_x_665_);
v___x_670_ = l_Lean_PersistentHashMap_findAux___redArg(v_x_663_, v_x_665_, v___x_669_, v_x_666_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___redArg___boxed(lean_object* v_x_671_, lean_object* v_x_672_, lean_object* v_x_673_, lean_object* v_x_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_671_, v_x_672_, v_x_673_, v_x_674_);
lean_dec_ref(v_x_673_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f(lean_object* v_00_u03b1_676_, lean_object* v_00_u03b2_677_, lean_object* v_x_678_, lean_object* v_x_679_, lean_object* v_x_680_, lean_object* v_x_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_678_, v_x_679_, v_x_680_, v_x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___boxed(lean_object* v_00_u03b1_683_, lean_object* v_00_u03b2_684_, lean_object* v_x_685_, lean_object* v_x_686_, lean_object* v_x_687_, lean_object* v_x_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_PersistentHashMap_find_x3f(v_00_u03b1_683_, v_00_u03b2_684_, v_x_685_, v_x_686_, v_x_687_, v_x_688_);
lean_dec_ref(v_x_687_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0(lean_object* v_x_690_, lean_object* v_x_691_, lean_object* v_m_692_, lean_object* v_i_693_, lean_object* v_x_694_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_690_, v_x_691_, v_m_692_, v_i_693_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0___boxed(lean_object* v_x_696_, lean_object* v_x_697_, lean_object* v_m_698_, lean_object* v_i_699_, lean_object* v_x_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0(v_x_696_, v_x_697_, v_m_698_, v_i_699_, v_x_700_);
lean_dec_ref(v_m_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg(lean_object* v_x_702_, lean_object* v_x_703_){
_start:
{
lean_object* v___f_704_; 
v___f_704_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_704_, 0, v_x_702_);
lean_closure_set(v___f_704_, 1, v_x_703_);
return v___f_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue(lean_object* v_00_u03b1_705_, lean_object* v_00_u03b2_706_, lean_object* v_x_707_, lean_object* v_x_708_){
_start:
{
lean_object* v___f_709_; 
v___f_709_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_709_, 0, v_x_707_);
lean_closure_set(v___f_709_, 1, v_x_708_);
return v___f_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___redArg(lean_object* v_x_710_, lean_object* v_x_711_, lean_object* v_m_712_, lean_object* v_a_713_, lean_object* v_b_u2080_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_710_, v_x_711_, v_m_712_, v_a_713_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_inc(v_b_u2080_714_);
return v_b_u2080_714_;
}
else
{
lean_object* v_val_716_; 
v_val_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_val_716_);
lean_dec_ref_known(v___x_715_, 1);
return v_val_716_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___redArg___boxed(lean_object* v_x_717_, lean_object* v_x_718_, lean_object* v_m_719_, lean_object* v_a_720_, lean_object* v_b_u2080_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lean_PersistentHashMap_findD___redArg(v_x_717_, v_x_718_, v_m_719_, v_a_720_, v_b_u2080_721_);
lean_dec(v_b_u2080_721_);
lean_dec_ref(v_m_719_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD(lean_object* v_00_u03b1_723_, lean_object* v_00_u03b2_724_, lean_object* v_x_725_, lean_object* v_x_726_, lean_object* v_m_727_, lean_object* v_a_728_, lean_object* v_b_u2080_729_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_725_, v_x_726_, v_m_727_, v_a_728_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_inc(v_b_u2080_729_);
return v_b_u2080_729_;
}
else
{
lean_object* v_val_731_; 
v_val_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_val_731_);
lean_dec_ref_known(v___x_730_, 1);
return v_val_731_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___boxed(lean_object* v_00_u03b1_732_, lean_object* v_00_u03b2_733_, lean_object* v_x_734_, lean_object* v_x_735_, lean_object* v_m_736_, lean_object* v_a_737_, lean_object* v_b_u2080_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_PersistentHashMap_findD(v_00_u03b1_732_, v_00_u03b2_733_, v_x_734_, v_x_735_, v_m_736_, v_a_737_, v_b_u2080_738_);
lean_dec(v_b_u2080_738_);
lean_dec_ref(v_m_736_);
return v_res_739_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_find_x21___redArg___closed__3(void){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_743_ = ((lean_object*)(l_Lean_PersistentHashMap_find_x21___redArg___closed__2));
v___x_744_ = lean_unsigned_to_nat(14u);
v___x_745_ = lean_unsigned_to_nat(178u);
v___x_746_ = ((lean_object*)(l_Lean_PersistentHashMap_find_x21___redArg___closed__1));
v___x_747_ = ((lean_object*)(l_Lean_PersistentHashMap_find_x21___redArg___closed__0));
v___x_748_ = l_mkPanicMessageWithDecl(v___x_747_, v___x_746_, v___x_745_, v___x_744_, v___x_743_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___redArg(lean_object* v_x_749_, lean_object* v_x_750_, lean_object* v_inst_751_, lean_object* v_m_752_, lean_object* v_a_753_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_749_, v_x_750_, v_m_752_, v_a_753_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = lean_obj_once(&l_Lean_PersistentHashMap_find_x21___redArg___closed__3, &l_Lean_PersistentHashMap_find_x21___redArg___closed__3_once, _init_l_Lean_PersistentHashMap_find_x21___redArg___closed__3);
v___x_756_ = l_panic___redArg(v_inst_751_, v___x_755_);
return v___x_756_;
}
else
{
lean_object* v_val_757_; 
v_val_757_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_val_757_);
lean_dec_ref_known(v___x_754_, 1);
return v_val_757_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___redArg___boxed(lean_object* v_x_758_, lean_object* v_x_759_, lean_object* v_inst_760_, lean_object* v_m_761_, lean_object* v_a_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Lean_PersistentHashMap_find_x21___redArg(v_x_758_, v_x_759_, v_inst_760_, v_m_761_, v_a_762_);
lean_dec_ref(v_m_761_);
lean_dec(v_inst_760_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21(lean_object* v_00_u03b1_764_, lean_object* v_00_u03b2_765_, lean_object* v_x_766_, lean_object* v_x_767_, lean_object* v_inst_768_, lean_object* v_m_769_, lean_object* v_a_770_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_766_, v_x_767_, v_m_769_, v_a_770_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = lean_obj_once(&l_Lean_PersistentHashMap_find_x21___redArg___closed__3, &l_Lean_PersistentHashMap_find_x21___redArg___closed__3_once, _init_l_Lean_PersistentHashMap_find_x21___redArg___closed__3);
v___x_773_ = l_panic___redArg(v_inst_768_, v___x_772_);
return v___x_773_;
}
else
{
lean_object* v_val_774_; 
v_val_774_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_val_774_);
lean_dec_ref_known(v___x_771_, 1);
return v_val_774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___boxed(lean_object* v_00_u03b1_775_, lean_object* v_00_u03b2_776_, lean_object* v_x_777_, lean_object* v_x_778_, lean_object* v_inst_779_, lean_object* v_m_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lean_PersistentHashMap_find_x21(v_00_u03b1_775_, v_00_u03b2_776_, v_x_777_, v_x_778_, v_inst_779_, v_m_780_, v_a_781_);
lean_dec_ref(v_m_780_);
lean_dec(v_inst_779_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___redArg(lean_object* v_inst_783_, lean_object* v_keys_784_, lean_object* v_vals_785_, lean_object* v_i_786_, lean_object* v_k_787_){
_start:
{
lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_788_ = lean_array_get_size(v_keys_784_);
v___x_789_ = lean_nat_dec_lt(v_i_786_, v___x_788_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; 
lean_dec(v_k_787_);
lean_dec(v_i_786_);
lean_dec_ref(v_inst_783_);
v___x_790_ = lean_box(0);
return v___x_790_;
}
else
{
lean_object* v_k_x27_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
v_k_x27_791_ = lean_array_fget_borrowed(v_keys_784_, v_i_786_);
lean_inc_ref(v_inst_783_);
lean_inc(v_k_x27_791_);
lean_inc(v_k_787_);
v___x_792_ = lean_apply_2(v_inst_783_, v_k_787_, v_k_x27_791_);
v___x_793_ = lean_unbox(v___x_792_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = lean_unsigned_to_nat(1u);
v___x_795_ = lean_nat_add(v_i_786_, v___x_794_);
lean_dec(v_i_786_);
v_i_786_ = v___x_795_;
goto _start;
}
else
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
lean_dec(v_k_787_);
lean_dec_ref(v_inst_783_);
v___x_797_ = lean_array_fget_borrowed(v_vals_785_, v_i_786_);
lean_dec(v_i_786_);
lean_inc(v___x_797_);
lean_inc(v_k_x27_791_);
v___x_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_798_, 0, v_k_x27_791_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
return v___x_799_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___redArg___boxed(lean_object* v_inst_800_, lean_object* v_keys_801_, lean_object* v_vals_802_, lean_object* v_i_803_, lean_object* v_k_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Lean_PersistentHashMap_findEntryAtAux___redArg(v_inst_800_, v_keys_801_, v_vals_802_, v_i_803_, v_k_804_);
lean_dec_ref(v_vals_802_);
lean_dec_ref(v_keys_801_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux(lean_object* v_00_u03b1_806_, lean_object* v_00_u03b2_807_, lean_object* v_inst_808_, lean_object* v_keys_809_, lean_object* v_vals_810_, lean_object* v_heq_811_, lean_object* v_i_812_, lean_object* v_k_813_){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = l_Lean_PersistentHashMap_findEntryAtAux___redArg(v_inst_808_, v_keys_809_, v_vals_810_, v_i_812_, v_k_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___boxed(lean_object* v_00_u03b1_815_, lean_object* v_00_u03b2_816_, lean_object* v_inst_817_, lean_object* v_keys_818_, lean_object* v_vals_819_, lean_object* v_heq_820_, lean_object* v_i_821_, lean_object* v_k_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lean_PersistentHashMap_findEntryAtAux(v_00_u03b1_815_, v_00_u03b2_816_, v_inst_817_, v_keys_818_, v_vals_819_, v_heq_820_, v_i_821_, v_k_822_);
lean_dec_ref(v_vals_819_);
lean_dec_ref(v_keys_818_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___redArg(lean_object* v_inst_824_, lean_object* v_x_825_, size_t v_x_826_, lean_object* v_x_827_){
_start:
{
if (lean_obj_tag(v_x_825_) == 0)
{
lean_object* v_es_828_; lean_object* v___x_829_; size_t v___x_830_; size_t v___x_831_; lean_object* v_j_832_; lean_object* v___x_833_; 
v_es_828_ = lean_ctor_get(v_x_825_, 0);
lean_inc_ref(v_es_828_);
lean_dec_ref_known(v_x_825_, 1);
v___x_829_ = lean_box(2);
v___x_830_ = ((size_t)31ULL);
v___x_831_ = lean_usize_land(v_x_826_, v___x_830_);
v_j_832_ = lean_usize_to_nat(v___x_831_);
v___x_833_ = lean_array_get(v___x_829_, v_es_828_, v_j_832_);
lean_dec(v_j_832_);
lean_dec_ref(v_es_828_);
switch(lean_obj_tag(v___x_833_))
{
case 0:
{
lean_object* v_key_834_; lean_object* v_val_835_; lean_object* v___x_836_; uint8_t v___x_837_; 
v_key_834_ = lean_ctor_get(v___x_833_, 0);
lean_inc_n(v_key_834_, 2);
v_val_835_ = lean_ctor_get(v___x_833_, 1);
lean_inc(v_val_835_);
lean_dec_ref_known(v___x_833_, 2);
v___x_836_ = lean_apply_2(v_inst_824_, v_x_827_, v_key_834_);
v___x_837_ = lean_unbox(v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; 
lean_dec(v_val_835_);
lean_dec(v_key_834_);
v___x_838_ = lean_box(0);
return v___x_838_;
}
else
{
lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_839_, 0, v_key_834_);
lean_ctor_set(v___x_839_, 1, v_val_835_);
v___x_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
return v___x_840_;
}
}
case 1:
{
lean_object* v_node_841_; size_t v___x_842_; size_t v___x_843_; 
v_node_841_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_node_841_);
lean_dec_ref_known(v___x_833_, 1);
v___x_842_ = ((size_t)5ULL);
v___x_843_ = lean_usize_shift_right(v_x_826_, v___x_842_);
v_x_825_ = v_node_841_;
v_x_826_ = v___x_843_;
goto _start;
}
default: 
{
lean_object* v___x_845_; 
lean_dec(v_x_827_);
lean_dec_ref(v_inst_824_);
v___x_845_ = lean_box(0);
return v___x_845_;
}
}
}
else
{
lean_object* v_ks_846_; lean_object* v_vs_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v_ks_846_ = lean_ctor_get(v_x_825_, 0);
lean_inc_ref(v_ks_846_);
v_vs_847_ = lean_ctor_get(v_x_825_, 1);
lean_inc_ref(v_vs_847_);
lean_dec_ref_known(v_x_825_, 2);
v___x_848_ = lean_unsigned_to_nat(0u);
v___x_849_ = l_Lean_PersistentHashMap_findEntryAtAux___redArg(v_inst_824_, v_ks_846_, v_vs_847_, v___x_848_, v_x_827_);
lean_dec_ref(v_vs_847_);
lean_dec_ref(v_ks_846_);
return v___x_849_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___redArg___boxed(lean_object* v_inst_850_, lean_object* v_x_851_, lean_object* v_x_852_, lean_object* v_x_853_){
_start:
{
size_t v_x_121__boxed_854_; lean_object* v_res_855_; 
v_x_121__boxed_854_ = lean_unbox_usize(v_x_852_);
lean_dec(v_x_852_);
v_res_855_ = l_Lean_PersistentHashMap_findEntryAux___redArg(v_inst_850_, v_x_851_, v_x_121__boxed_854_, v_x_853_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux(lean_object* v_00_u03b1_856_, lean_object* v_00_u03b2_857_, lean_object* v_inst_858_, lean_object* v_x_859_, size_t v_x_860_, lean_object* v_x_861_){
_start:
{
lean_object* v___x_862_; 
lean_inc_ref(v_x_859_);
v___x_862_ = l_Lean_PersistentHashMap_findEntryAux___redArg(v_inst_858_, v_x_859_, v_x_860_, v_x_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___boxed(lean_object* v_00_u03b1_863_, lean_object* v_00_u03b2_864_, lean_object* v_inst_865_, lean_object* v_x_866_, lean_object* v_x_867_, lean_object* v_x_868_){
_start:
{
size_t v_x_175__boxed_869_; lean_object* v_res_870_; 
v_x_175__boxed_869_ = lean_unbox_usize(v_x_867_);
lean_dec(v_x_867_);
v_res_870_ = l_Lean_PersistentHashMap_findEntryAux(v_00_u03b1_863_, v_00_u03b2_864_, v_inst_865_, v_x_866_, v_x_175__boxed_869_, v_x_868_);
lean_dec_ref(v_x_866_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg(lean_object* v_x_871_, lean_object* v_x_872_, lean_object* v_x_873_, lean_object* v_x_874_){
_start:
{
lean_object* v___x_875_; uint64_t v___x_876_; size_t v___x_877_; lean_object* v___x_878_; 
lean_inc(v_x_874_);
v___x_875_ = lean_apply_1(v_x_872_, v_x_874_);
v___x_876_ = lean_unbox_uint64(v___x_875_);
lean_dec_ref(v___x_875_);
v___x_877_ = lean_uint64_to_usize(v___x_876_);
lean_inc_ref(v_x_873_);
v___x_878_ = l_Lean_PersistentHashMap_findEntryAux___redArg(v_x_871_, v_x_873_, v___x_877_, v_x_874_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg___boxed(lean_object* v_x_879_, lean_object* v_x_880_, lean_object* v_x_881_, lean_object* v_x_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lean_PersistentHashMap_findEntry_x3f___redArg(v_x_879_, v_x_880_, v_x_881_, v_x_882_);
lean_dec_ref(v_x_881_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f(lean_object* v_00_u03b1_884_, lean_object* v_00_u03b2_885_, lean_object* v_x_886_, lean_object* v_x_887_, lean_object* v_x_888_, lean_object* v_x_889_){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = l_Lean_PersistentHashMap_findEntry_x3f___redArg(v_x_886_, v_x_887_, v_x_888_, v_x_889_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___boxed(lean_object* v_00_u03b1_891_, lean_object* v_00_u03b2_892_, lean_object* v_x_893_, lean_object* v_x_894_, lean_object* v_x_895_, lean_object* v_x_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lean_PersistentHashMap_findEntry_x3f(v_00_u03b1_891_, v_00_u03b2_892_, v_x_893_, v_x_894_, v_x_895_, v_x_896_);
lean_dec_ref(v_x_895_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___redArg(lean_object* v_inst_898_, lean_object* v_keys_899_, lean_object* v_i_900_, lean_object* v_k_901_, lean_object* v_k_u2080_902_){
_start:
{
lean_object* v___x_903_; uint8_t v___x_904_; 
v___x_903_ = lean_array_get_size(v_keys_899_);
v___x_904_ = lean_nat_dec_lt(v_i_900_, v___x_903_);
if (v___x_904_ == 0)
{
lean_dec(v_k_901_);
lean_dec(v_i_900_);
lean_dec_ref(v_inst_898_);
lean_inc(v_k_u2080_902_);
return v_k_u2080_902_;
}
else
{
lean_object* v_k_x27_905_; lean_object* v___x_906_; uint8_t v___x_907_; 
v_k_x27_905_ = lean_array_fget_borrowed(v_keys_899_, v_i_900_);
lean_inc_ref(v_inst_898_);
lean_inc(v_k_x27_905_);
lean_inc(v_k_901_);
v___x_906_ = lean_apply_2(v_inst_898_, v_k_901_, v_k_x27_905_);
v___x_907_ = lean_unbox(v___x_906_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = lean_unsigned_to_nat(1u);
v___x_909_ = lean_nat_add(v_i_900_, v___x_908_);
lean_dec(v_i_900_);
v_i_900_ = v___x_909_;
goto _start;
}
else
{
lean_dec(v_k_901_);
lean_dec(v_i_900_);
lean_dec_ref(v_inst_898_);
lean_inc(v_k_x27_905_);
return v_k_x27_905_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___redArg___boxed(lean_object* v_inst_911_, lean_object* v_keys_912_, lean_object* v_i_913_, lean_object* v_k_914_, lean_object* v_k_u2080_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l_Lean_PersistentHashMap_findKeyDAtAux___redArg(v_inst_911_, v_keys_912_, v_i_913_, v_k_914_, v_k_u2080_915_);
lean_dec(v_k_u2080_915_);
lean_dec_ref(v_keys_912_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux(lean_object* v_00_u03b1_917_, lean_object* v_00_u03b2_918_, lean_object* v_inst_919_, lean_object* v_keys_920_, lean_object* v_vals_921_, lean_object* v_heq_922_, lean_object* v_i_923_, lean_object* v_k_924_, lean_object* v_k_u2080_925_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l_Lean_PersistentHashMap_findKeyDAtAux___redArg(v_inst_919_, v_keys_920_, v_i_923_, v_k_924_, v_k_u2080_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___boxed(lean_object* v_00_u03b1_927_, lean_object* v_00_u03b2_928_, lean_object* v_inst_929_, lean_object* v_keys_930_, lean_object* v_vals_931_, lean_object* v_heq_932_, lean_object* v_i_933_, lean_object* v_k_934_, lean_object* v_k_u2080_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lean_PersistentHashMap_findKeyDAtAux(v_00_u03b1_927_, v_00_u03b2_928_, v_inst_929_, v_keys_930_, v_vals_931_, v_heq_932_, v_i_933_, v_k_934_, v_k_u2080_935_);
lean_dec(v_k_u2080_935_);
lean_dec_ref(v_vals_931_);
lean_dec_ref(v_keys_930_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg(lean_object* v_inst_937_, lean_object* v_x_938_, size_t v_x_939_, lean_object* v_x_940_, lean_object* v_x_941_){
_start:
{
if (lean_obj_tag(v_x_938_) == 0)
{
lean_object* v_es_942_; lean_object* v___x_943_; size_t v___x_944_; size_t v___x_945_; lean_object* v_j_946_; lean_object* v___x_947_; 
v_es_942_ = lean_ctor_get(v_x_938_, 0);
lean_inc_ref(v_es_942_);
lean_dec_ref_known(v_x_938_, 1);
v___x_943_ = lean_box(2);
v___x_944_ = ((size_t)31ULL);
v___x_945_ = lean_usize_land(v_x_939_, v___x_944_);
v_j_946_ = lean_usize_to_nat(v___x_945_);
v___x_947_ = lean_array_get(v___x_943_, v_es_942_, v_j_946_);
lean_dec(v_j_946_);
lean_dec_ref(v_es_942_);
switch(lean_obj_tag(v___x_947_))
{
case 0:
{
lean_object* v_key_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v_key_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc_n(v_key_948_, 2);
lean_dec_ref_known(v___x_947_, 2);
v___x_949_ = lean_apply_2(v_inst_937_, v_x_940_, v_key_948_);
v___x_950_ = lean_unbox(v___x_949_);
if (v___x_950_ == 0)
{
lean_dec(v_key_948_);
lean_inc(v_x_941_);
return v_x_941_;
}
else
{
return v_key_948_;
}
}
case 1:
{
lean_object* v_node_951_; size_t v___x_952_; size_t v___x_953_; 
v_node_951_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_node_951_);
lean_dec_ref_known(v___x_947_, 1);
v___x_952_ = ((size_t)5ULL);
v___x_953_ = lean_usize_shift_right(v_x_939_, v___x_952_);
v_x_938_ = v_node_951_;
v_x_939_ = v___x_953_;
goto _start;
}
default: 
{
lean_dec(v_x_940_);
lean_dec_ref(v_inst_937_);
lean_inc(v_x_941_);
return v_x_941_;
}
}
}
else
{
lean_object* v_ks_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v_ks_955_ = lean_ctor_get(v_x_938_, 0);
lean_inc_ref(v_ks_955_);
lean_dec_ref_known(v_x_938_, 2);
v___x_956_ = lean_unsigned_to_nat(0u);
v___x_957_ = l_Lean_PersistentHashMap_findKeyDAtAux___redArg(v_inst_937_, v_ks_955_, v___x_956_, v_x_940_, v_x_941_);
lean_dec_ref(v_ks_955_);
return v___x_957_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg___boxed(lean_object* v_inst_958_, lean_object* v_x_959_, lean_object* v_x_960_, lean_object* v_x_961_, lean_object* v_x_962_){
_start:
{
size_t v_x_113__boxed_963_; lean_object* v_res_964_; 
v_x_113__boxed_963_ = lean_unbox_usize(v_x_960_);
lean_dec(v_x_960_);
v_res_964_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v_inst_958_, v_x_959_, v_x_113__boxed_963_, v_x_961_, v_x_962_);
lean_dec(v_x_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux(lean_object* v_00_u03b1_965_, lean_object* v_00_u03b2_966_, lean_object* v_inst_967_, lean_object* v_x_968_, size_t v_x_969_, lean_object* v_x_970_, lean_object* v_x_971_){
_start:
{
lean_object* v___x_972_; 
v___x_972_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v_inst_967_, v_x_968_, v_x_969_, v_x_970_, v_x_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___boxed(lean_object* v_00_u03b1_973_, lean_object* v_00_u03b2_974_, lean_object* v_inst_975_, lean_object* v_x_976_, lean_object* v_x_977_, lean_object* v_x_978_, lean_object* v_x_979_){
_start:
{
size_t v_x_160__boxed_980_; lean_object* v_res_981_; 
v_x_160__boxed_980_ = lean_unbox_usize(v_x_977_);
lean_dec(v_x_977_);
v_res_981_ = l_Lean_PersistentHashMap_findKeyDAux(v_00_u03b1_973_, v_00_u03b2_974_, v_inst_975_, v_x_976_, v_x_160__boxed_980_, v_x_978_, v_x_979_);
lean_dec(v_x_979_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___redArg(lean_object* v_x_982_, lean_object* v_x_983_, lean_object* v_m_984_, lean_object* v_a_985_, lean_object* v_a_u2080_986_){
_start:
{
lean_object* v___x_987_; uint64_t v___x_988_; size_t v___x_989_; lean_object* v___x_990_; 
lean_inc(v_a_985_);
v___x_987_ = lean_apply_1(v_x_983_, v_a_985_);
v___x_988_ = lean_unbox_uint64(v___x_987_);
lean_dec_ref(v___x_987_);
v___x_989_ = lean_uint64_to_usize(v___x_988_);
v___x_990_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v_x_982_, v_m_984_, v___x_989_, v_a_985_, v_a_u2080_986_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___redArg___boxed(lean_object* v_x_991_, lean_object* v_x_992_, lean_object* v_m_993_, lean_object* v_a_994_, lean_object* v_a_u2080_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Lean_PersistentHashMap_findKeyD___redArg(v_x_991_, v_x_992_, v_m_993_, v_a_994_, v_a_u2080_995_);
lean_dec(v_a_u2080_995_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD(lean_object* v_00_u03b1_997_, lean_object* v_00_u03b2_998_, lean_object* v_x_999_, lean_object* v_x_1000_, lean_object* v_m_1001_, lean_object* v_a_1002_, lean_object* v_a_u2080_1003_){
_start:
{
lean_object* v___x_1004_; uint64_t v___x_1005_; size_t v___x_1006_; lean_object* v___x_1007_; 
lean_inc(v_a_1002_);
v___x_1004_ = lean_apply_1(v_x_1000_, v_a_1002_);
v___x_1005_ = lean_unbox_uint64(v___x_1004_);
lean_dec_ref(v___x_1004_);
v___x_1006_ = lean_uint64_to_usize(v___x_1005_);
v___x_1007_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v_x_999_, v_m_1001_, v___x_1006_, v_a_1002_, v_a_u2080_1003_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___boxed(lean_object* v_00_u03b1_1008_, lean_object* v_00_u03b2_1009_, lean_object* v_x_1010_, lean_object* v_x_1011_, lean_object* v_m_1012_, lean_object* v_a_1013_, lean_object* v_a_u2080_1014_){
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l_Lean_PersistentHashMap_findKeyD(v_00_u03b1_1008_, v_00_u03b2_1009_, v_x_1010_, v_x_1011_, v_m_1012_, v_a_1013_, v_a_u2080_1014_);
lean_dec(v_a_u2080_1014_);
return v_res_1015_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___redArg(lean_object* v_inst_1016_, lean_object* v_keys_1017_, lean_object* v_i_1018_, lean_object* v_k_1019_){
_start:
{
lean_object* v___x_1020_; uint8_t v___x_1021_; 
v___x_1020_ = lean_array_get_size(v_keys_1017_);
v___x_1021_ = lean_nat_dec_lt(v_i_1018_, v___x_1020_);
if (v___x_1021_ == 0)
{
lean_dec(v_k_1019_);
lean_dec(v_i_1018_);
lean_dec_ref(v_inst_1016_);
return v___x_1021_;
}
else
{
lean_object* v_k_x27_1022_; lean_object* v___x_1023_; uint8_t v___x_1024_; 
v_k_x27_1022_ = lean_array_fget_borrowed(v_keys_1017_, v_i_1018_);
lean_inc_ref(v_inst_1016_);
lean_inc(v_k_x27_1022_);
lean_inc(v_k_1019_);
v___x_1023_ = lean_apply_2(v_inst_1016_, v_k_1019_, v_k_x27_1022_);
v___x_1024_ = lean_unbox(v___x_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = lean_unsigned_to_nat(1u);
v___x_1026_ = lean_nat_add(v_i_1018_, v___x_1025_);
lean_dec(v_i_1018_);
v_i_1018_ = v___x_1026_;
goto _start;
}
else
{
lean_dec(v_k_1019_);
lean_dec(v_i_1018_);
lean_dec_ref(v_inst_1016_);
return v___x_1021_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___redArg___boxed(lean_object* v_inst_1028_, lean_object* v_keys_1029_, lean_object* v_i_1030_, lean_object* v_k_1031_){
_start:
{
uint8_t v_res_1032_; lean_object* v_r_1033_; 
v_res_1032_ = l_Lean_PersistentHashMap_containsAtAux___redArg(v_inst_1028_, v_keys_1029_, v_i_1030_, v_k_1031_);
lean_dec_ref(v_keys_1029_);
v_r_1033_ = lean_box(v_res_1032_);
return v_r_1033_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux(lean_object* v_00_u03b1_1034_, lean_object* v_00_u03b2_1035_, lean_object* v_inst_1036_, lean_object* v_keys_1037_, lean_object* v_vals_1038_, lean_object* v_heq_1039_, lean_object* v_i_1040_, lean_object* v_k_1041_){
_start:
{
uint8_t v___x_1042_; 
v___x_1042_ = l_Lean_PersistentHashMap_containsAtAux___redArg(v_inst_1036_, v_keys_1037_, v_i_1040_, v_k_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___boxed(lean_object* v_00_u03b1_1043_, lean_object* v_00_u03b2_1044_, lean_object* v_inst_1045_, lean_object* v_keys_1046_, lean_object* v_vals_1047_, lean_object* v_heq_1048_, lean_object* v_i_1049_, lean_object* v_k_1050_){
_start:
{
uint8_t v_res_1051_; lean_object* v_r_1052_; 
v_res_1051_ = l_Lean_PersistentHashMap_containsAtAux(v_00_u03b1_1043_, v_00_u03b2_1044_, v_inst_1045_, v_keys_1046_, v_vals_1047_, v_heq_1048_, v_i_1049_, v_k_1050_);
lean_dec_ref(v_vals_1047_);
lean_dec_ref(v_keys_1046_);
v_r_1052_ = lean_box(v_res_1051_);
return v_r_1052_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___redArg(lean_object* v_inst_1053_, lean_object* v_x_1054_, size_t v_x_1055_, lean_object* v_x_1056_){
_start:
{
if (lean_obj_tag(v_x_1054_) == 0)
{
lean_object* v_es_1057_; lean_object* v___x_1058_; size_t v___x_1059_; size_t v___x_1060_; lean_object* v_j_1061_; lean_object* v___x_1062_; 
v_es_1057_ = lean_ctor_get(v_x_1054_, 0);
lean_inc_ref(v_es_1057_);
lean_dec_ref_known(v_x_1054_, 1);
v___x_1058_ = lean_box(2);
v___x_1059_ = ((size_t)31ULL);
v___x_1060_ = lean_usize_land(v_x_1055_, v___x_1059_);
v_j_1061_ = lean_usize_to_nat(v___x_1060_);
v___x_1062_ = lean_array_get(v___x_1058_, v_es_1057_, v_j_1061_);
lean_dec(v_j_1061_);
lean_dec_ref(v_es_1057_);
switch(lean_obj_tag(v___x_1062_))
{
case 0:
{
lean_object* v_key_1063_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v_key_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_key_1063_);
lean_dec_ref_known(v___x_1062_, 2);
v___x_1064_ = lean_apply_2(v_inst_1053_, v_x_1056_, v_key_1063_);
v___x_1065_ = lean_unbox(v___x_1064_);
return v___x_1065_;
}
case 1:
{
lean_object* v_node_1066_; size_t v___x_1067_; size_t v___x_1068_; 
v_node_1066_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_node_1066_);
lean_dec_ref_known(v___x_1062_, 1);
v___x_1067_ = ((size_t)5ULL);
v___x_1068_ = lean_usize_shift_right(v_x_1055_, v___x_1067_);
v_x_1054_ = v_node_1066_;
v_x_1055_ = v___x_1068_;
goto _start;
}
default: 
{
uint8_t v___x_1070_; 
lean_dec(v_x_1056_);
lean_dec_ref(v_inst_1053_);
v___x_1070_ = 0;
return v___x_1070_;
}
}
}
else
{
lean_object* v_ks_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v_ks_1071_ = lean_ctor_get(v_x_1054_, 0);
lean_inc_ref(v_ks_1071_);
lean_dec_ref_known(v_x_1054_, 2);
v___x_1072_ = lean_unsigned_to_nat(0u);
v___x_1073_ = l_Lean_PersistentHashMap_containsAtAux___redArg(v_inst_1053_, v_ks_1071_, v___x_1072_, v_x_1056_);
lean_dec_ref(v_ks_1071_);
return v___x_1073_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___redArg___boxed(lean_object* v_inst_1074_, lean_object* v_x_1075_, lean_object* v_x_1076_, lean_object* v_x_1077_){
_start:
{
size_t v_x_104__boxed_1078_; uint8_t v_res_1079_; lean_object* v_r_1080_; 
v_x_104__boxed_1078_ = lean_unbox_usize(v_x_1076_);
lean_dec(v_x_1076_);
v_res_1079_ = l_Lean_PersistentHashMap_containsAux___redArg(v_inst_1074_, v_x_1075_, v_x_104__boxed_1078_, v_x_1077_);
v_r_1080_ = lean_box(v_res_1079_);
return v_r_1080_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux(lean_object* v_00_u03b1_1081_, lean_object* v_00_u03b2_1082_, lean_object* v_inst_1083_, lean_object* v_x_1084_, size_t v_x_1085_, lean_object* v_x_1086_){
_start:
{
uint8_t v___x_1087_; 
v___x_1087_ = l_Lean_PersistentHashMap_containsAux___redArg(v_inst_1083_, v_x_1084_, v_x_1085_, v_x_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___boxed(lean_object* v_00_u03b1_1088_, lean_object* v_00_u03b2_1089_, lean_object* v_inst_1090_, lean_object* v_x_1091_, lean_object* v_x_1092_, lean_object* v_x_1093_){
_start:
{
size_t v_x_150__boxed_1094_; uint8_t v_res_1095_; lean_object* v_r_1096_; 
v_x_150__boxed_1094_ = lean_unbox_usize(v_x_1092_);
lean_dec(v_x_1092_);
v_res_1095_ = l_Lean_PersistentHashMap_containsAux(v_00_u03b1_1088_, v_00_u03b2_1089_, v_inst_1090_, v_x_1091_, v_x_150__boxed_1094_, v_x_1093_);
v_r_1096_ = lean_box(v_res_1095_);
return v_r_1096_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object* v_inst_1097_, lean_object* v_inst_1098_, lean_object* v_x_1099_, lean_object* v_x_1100_){
_start:
{
lean_object* v___x_1101_; uint64_t v___x_1102_; size_t v___x_1103_; uint8_t v___x_1104_; 
lean_inc(v_x_1100_);
v___x_1101_ = lean_apply_1(v_inst_1098_, v_x_1100_);
v___x_1102_ = lean_unbox_uint64(v___x_1101_);
lean_dec_ref(v___x_1101_);
v___x_1103_ = lean_uint64_to_usize(v___x_1102_);
v___x_1104_ = l_Lean_PersistentHashMap_containsAux___redArg(v_inst_1097_, v_x_1099_, v___x_1103_, v_x_1100_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___redArg___boxed(lean_object* v_inst_1105_, lean_object* v_inst_1106_, lean_object* v_x_1107_, lean_object* v_x_1108_){
_start:
{
uint8_t v_res_1109_; lean_object* v_r_1110_; 
v_res_1109_ = l_Lean_PersistentHashMap_contains___redArg(v_inst_1105_, v_inst_1106_, v_x_1107_, v_x_1108_);
v_r_1110_ = lean_box(v_res_1109_);
return v_r_1110_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains(lean_object* v_00_u03b1_1111_, lean_object* v_00_u03b2_1112_, lean_object* v_inst_1113_, lean_object* v_inst_1114_, lean_object* v_x_1115_, lean_object* v_x_1116_){
_start:
{
uint8_t v___x_1117_; 
v___x_1117_ = l_Lean_PersistentHashMap_contains___redArg(v_inst_1113_, v_inst_1114_, v_x_1115_, v_x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___boxed(lean_object* v_00_u03b1_1118_, lean_object* v_00_u03b2_1119_, lean_object* v_inst_1120_, lean_object* v_inst_1121_, lean_object* v_x_1122_, lean_object* v_x_1123_){
_start:
{
uint8_t v_res_1124_; lean_object* v_r_1125_; 
v_res_1124_ = l_Lean_PersistentHashMap_contains(v_00_u03b1_1118_, v_00_u03b2_1119_, v_inst_1120_, v_inst_1121_, v_x_1122_, v_x_1123_);
v_r_1125_ = lean_box(v_res_1124_);
return v_r_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___redArg(lean_object* v_a_1126_, lean_object* v_i_1127_, lean_object* v_acc_1128_){
_start:
{
lean_object* v___x_1129_; uint8_t v___x_1130_; 
v___x_1129_ = lean_array_get_size(v_a_1126_);
v___x_1130_ = lean_nat_dec_lt(v_i_1127_, v___x_1129_);
if (v___x_1130_ == 0)
{
lean_dec(v_i_1127_);
return v_acc_1128_;
}
else
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_array_fget(v_a_1126_, v_i_1127_);
switch(lean_obj_tag(v___x_1131_))
{
case 0:
{
if (lean_obj_tag(v_acc_1128_) == 0)
{
lean_object* v_key_1132_; lean_object* v_val_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1144_; 
v_key_1132_ = lean_ctor_get(v___x_1131_, 0);
v_val_1133_ = lean_ctor_get(v___x_1131_, 1);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1135_ = v___x_1131_;
v_isShared_1136_ = v_isSharedCheck_1144_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_val_1133_);
lean_inc(v_key_1132_);
lean_dec(v___x_1131_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1144_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1140_; 
v___x_1137_ = lean_unsigned_to_nat(1u);
v___x_1138_ = lean_nat_add(v_i_1127_, v___x_1137_);
lean_dec(v_i_1127_);
if (v_isShared_1136_ == 0)
{
v___x_1140_ = v___x_1135_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_key_1132_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v_val_1133_);
v___x_1140_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
lean_object* v___x_1141_; 
v___x_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
v_i_1127_ = v___x_1138_;
v_acc_1128_ = v___x_1141_;
goto _start;
}
}
}
else
{
lean_object* v___x_1145_; 
lean_dec_ref_known(v_acc_1128_, 1);
lean_dec_ref_known(v___x_1131_, 2);
lean_dec(v_i_1127_);
v___x_1145_ = lean_box(0);
return v___x_1145_;
}
}
case 1:
{
lean_object* v___x_1146_; 
lean_dec_ref_known(v___x_1131_, 1);
lean_dec(v_acc_1128_);
lean_dec(v_i_1127_);
v___x_1146_ = lean_box(0);
return v___x_1146_;
}
default: 
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = lean_unsigned_to_nat(1u);
v___x_1148_ = lean_nat_add(v_i_1127_, v___x_1147_);
lean_dec(v_i_1127_);
v_i_1127_ = v___x_1148_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___redArg___boxed(lean_object* v_a_1150_, lean_object* v_i_1151_, lean_object* v_acc_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Lean_PersistentHashMap_isUnaryEntries___redArg(v_a_1150_, v_i_1151_, v_acc_1152_);
lean_dec_ref(v_a_1150_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries(lean_object* v_00_u03b1_1154_, lean_object* v_00_u03b2_1155_, lean_object* v_a_1156_, lean_object* v_i_1157_, lean_object* v_acc_1158_){
_start:
{
lean_object* v___x_1159_; 
v___x_1159_ = l_Lean_PersistentHashMap_isUnaryEntries___redArg(v_a_1156_, v_i_1157_, v_acc_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___boxed(lean_object* v_00_u03b1_1160_, lean_object* v_00_u03b2_1161_, lean_object* v_a_1162_, lean_object* v_i_1163_, lean_object* v_acc_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lean_PersistentHashMap_isUnaryEntries(v_00_u03b1_1160_, v_00_u03b2_1161_, v_a_1162_, v_i_1163_, v_acc_1164_);
lean_dec_ref(v_a_1162_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object* v_x_1166_){
_start:
{
if (lean_obj_tag(v_x_1166_) == 0)
{
lean_object* v_es_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v_es_1167_ = lean_ctor_get(v_x_1166_, 0);
lean_inc_ref(v_es_1167_);
lean_dec_ref_known(v_x_1166_, 1);
v___x_1168_ = lean_unsigned_to_nat(0u);
v___x_1169_ = lean_box(0);
v___x_1170_ = l_Lean_PersistentHashMap_isUnaryEntries___redArg(v_es_1167_, v___x_1168_, v___x_1169_);
lean_dec_ref(v_es_1167_);
return v___x_1170_;
}
else
{
lean_object* v_ks_1171_; lean_object* v_vs_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1187_; 
v_ks_1171_ = lean_ctor_get(v_x_1166_, 0);
v_vs_1172_ = lean_ctor_get(v_x_1166_, 1);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_x_1166_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1174_ = v_x_1166_;
v_isShared_1175_ = v_isSharedCheck_1187_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_vs_1172_);
lean_inc(v_ks_1171_);
lean_dec(v_x_1166_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1187_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; uint8_t v___x_1178_; 
v___x_1176_ = lean_unsigned_to_nat(1u);
v___x_1177_ = lean_array_get_size(v_ks_1171_);
v___x_1178_ = lean_nat_dec_eq(v___x_1176_, v___x_1177_);
if (v___x_1178_ == 0)
{
lean_object* v___x_1179_; 
lean_del_object(v___x_1174_);
lean_dec_ref(v_vs_1172_);
lean_dec_ref(v_ks_1171_);
v___x_1179_ = lean_box(0);
return v___x_1179_;
}
else
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1180_ = lean_unsigned_to_nat(0u);
v___x_1181_ = lean_array_fget(v_ks_1171_, v___x_1180_);
lean_dec_ref(v_ks_1171_);
v___x_1182_ = lean_array_fget(v_vs_1172_, v___x_1180_);
lean_dec_ref(v_vs_1172_);
if (v_isShared_1175_ == 0)
{
lean_ctor_set_tag(v___x_1174_, 0);
lean_ctor_set(v___x_1174_, 1, v___x_1182_);
lean_ctor_set(v___x_1174_, 0, v___x_1181_);
v___x_1184_ = v___x_1174_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1181_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
lean_object* v___x_1185_; 
v___x_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
return v___x_1185_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryNode(lean_object* v_00_u03b1_1188_, lean_object* v_00_u03b2_1189_, lean_object* v_x_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_x_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___redArg(lean_object* v_inst_1192_, lean_object* v_x_1193_, size_t v_x_1194_, lean_object* v_x_1195_){
_start:
{
if (lean_obj_tag(v_x_1193_) == 0)
{
lean_object* v_es_1196_; lean_object* v___x_1197_; size_t v___x_1198_; size_t v___x_1199_; lean_object* v_j_1200_; lean_object* v_entry_1201_; 
v_es_1196_ = lean_ctor_get(v_x_1193_, 0);
v___x_1197_ = lean_box(2);
v___x_1198_ = ((size_t)31ULL);
v___x_1199_ = lean_usize_land(v_x_1194_, v___x_1198_);
v_j_1200_ = lean_usize_to_nat(v___x_1199_);
v_entry_1201_ = lean_array_get(v___x_1197_, v_es_1196_, v_j_1200_);
switch(lean_obj_tag(v_entry_1201_))
{
case 0:
{
lean_object* v_key_1202_; lean_object* v___x_1203_; uint8_t v___x_1204_; 
v_key_1202_ = lean_ctor_get(v_entry_1201_, 0);
lean_inc(v_key_1202_);
lean_dec_ref_known(v_entry_1201_, 2);
v___x_1203_ = lean_apply_2(v_inst_1192_, v_x_1195_, v_key_1202_);
v___x_1204_ = lean_unbox(v___x_1203_);
if (v___x_1204_ == 0)
{
lean_dec(v_j_1200_);
return v_x_1193_;
}
else
{
lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1212_; 
lean_inc_ref(v_es_1196_);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_x_1193_);
if (v_isSharedCheck_1212_ == 0)
{
lean_object* v_unused_1213_; 
v_unused_1213_ = lean_ctor_get(v_x_1193_, 0);
lean_dec(v_unused_1213_);
v___x_1206_ = v_x_1193_;
v_isShared_1207_ = v_isSharedCheck_1212_;
goto v_resetjp_1205_;
}
else
{
lean_dec(v_x_1193_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1212_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1208_; lean_object* v___x_1210_; 
v___x_1208_ = lean_array_set(v_es_1196_, v_j_1200_, v___x_1197_);
lean_dec(v_j_1200_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 0, v___x_1208_);
v___x_1210_ = v___x_1206_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
case 1:
{
lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1248_; 
lean_inc_ref(v_es_1196_);
v_isSharedCheck_1248_ = !lean_is_exclusive(v_x_1193_);
if (v_isSharedCheck_1248_ == 0)
{
lean_object* v_unused_1249_; 
v_unused_1249_ = lean_ctor_get(v_x_1193_, 0);
lean_dec(v_unused_1249_);
v___x_1215_ = v_x_1193_;
v_isShared_1216_ = v_isSharedCheck_1248_;
goto v_resetjp_1214_;
}
else
{
lean_dec(v_x_1193_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1248_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v_node_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1247_; 
v_node_1217_ = lean_ctor_get(v_entry_1201_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_entry_1201_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1219_ = v_entry_1201_;
v_isShared_1220_ = v_isSharedCheck_1247_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_node_1217_);
lean_dec(v_entry_1201_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1247_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
size_t v___x_1221_; lean_object* v_entries_1222_; size_t v___x_1223_; lean_object* v_newNode_1224_; lean_object* v___x_1225_; 
v___x_1221_ = ((size_t)5ULL);
v_entries_1222_ = lean_array_set(v_es_1196_, v_j_1200_, v___x_1197_);
v___x_1223_ = lean_usize_shift_right(v_x_1194_, v___x_1221_);
v_newNode_1224_ = l_Lean_PersistentHashMap_eraseAux___redArg(v_inst_1192_, v_node_1217_, v___x_1223_, v_x_1195_);
lean_inc_ref(v_newNode_1224_);
v___x_1225_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_1224_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v___x_1227_; 
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v_newNode_1224_);
v___x_1227_ = v___x_1219_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_newNode_1224_);
v___x_1227_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
lean_object* v___x_1228_; lean_object* v___x_1230_; 
v___x_1228_ = lean_array_set(v_entries_1222_, v_j_1200_, v___x_1227_);
lean_dec(v_j_1200_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 0, v___x_1228_);
v___x_1230_ = v___x_1215_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___x_1228_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
else
{
lean_object* v_val_1233_; lean_object* v_fst_1234_; lean_object* v_snd_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1246_; 
lean_dec_ref(v_newNode_1224_);
lean_del_object(v___x_1219_);
v_val_1233_ = lean_ctor_get(v___x_1225_, 0);
lean_inc(v_val_1233_);
lean_dec_ref_known(v___x_1225_, 1);
v_fst_1234_ = lean_ctor_get(v_val_1233_, 0);
v_snd_1235_ = lean_ctor_get(v_val_1233_, 1);
v_isSharedCheck_1246_ = !lean_is_exclusive(v_val_1233_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1237_ = v_val_1233_;
v_isShared_1238_ = v_isSharedCheck_1246_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_snd_1235_);
lean_inc(v_fst_1234_);
lean_dec(v_val_1233_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1246_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1240_; 
if (v_isShared_1238_ == 0)
{
v___x_1240_ = v___x_1237_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_fst_1234_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v_snd_1235_);
v___x_1240_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
lean_object* v___x_1241_; lean_object* v___x_1243_; 
v___x_1241_ = lean_array_set(v_entries_1222_, v_j_1200_, v___x_1240_);
lean_dec(v_j_1200_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 0, v___x_1241_);
v___x_1243_ = v___x_1215_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v___x_1241_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_1200_);
lean_dec(v_x_1195_);
lean_dec_ref(v_inst_1192_);
return v_x_1193_;
}
}
}
else
{
lean_object* v_ks_1250_; lean_object* v_vs_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1265_; 
v_ks_1250_ = lean_ctor_get(v_x_1193_, 0);
v_vs_1251_ = lean_ctor_get(v_x_1193_, 1);
v_isSharedCheck_1265_ = !lean_is_exclusive(v_x_1193_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1253_ = v_x_1193_;
v_isShared_1254_ = v_isSharedCheck_1265_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_vs_1251_);
lean_inc(v_ks_1250_);
lean_dec(v_x_1193_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1265_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Array_finIdxOf_x3f___redArg(v_inst_1192_, v_ks_1250_, v_x_1195_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v___x_1257_; 
if (v_isShared_1254_ == 0)
{
v___x_1257_ = v___x_1253_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_ks_1250_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_vs_1251_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
else
{
lean_object* v_val_1259_; lean_object* v_keys_x27_1260_; lean_object* v_vals_x27_1261_; lean_object* v___x_1263_; 
v_val_1259_ = lean_ctor_get(v___x_1255_, 0);
lean_inc_n(v_val_1259_, 2);
lean_dec_ref_known(v___x_1255_, 1);
v_keys_x27_1260_ = l_Array_eraseIdx___redArg(v_ks_1250_, v_val_1259_);
v_vals_x27_1261_ = l_Array_eraseIdx___redArg(v_vs_1251_, v_val_1259_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 1, v_vals_x27_1261_);
lean_ctor_set(v___x_1253_, 0, v_keys_x27_1260_);
v___x_1263_ = v___x_1253_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_keys_x27_1260_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v_vals_x27_1261_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___redArg___boxed(lean_object* v_inst_1266_, lean_object* v_x_1267_, lean_object* v_x_1268_, lean_object* v_x_1269_){
_start:
{
size_t v_x_202__boxed_1270_; lean_object* v_res_1271_; 
v_x_202__boxed_1270_ = lean_unbox_usize(v_x_1268_);
lean_dec(v_x_1268_);
v_res_1271_ = l_Lean_PersistentHashMap_eraseAux___redArg(v_inst_1266_, v_x_1267_, v_x_202__boxed_1270_, v_x_1269_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux(lean_object* v_00_u03b1_1272_, lean_object* v_00_u03b2_1273_, lean_object* v_inst_1274_, lean_object* v_x_1275_, size_t v_x_1276_, lean_object* v_x_1277_){
_start:
{
lean_object* v___x_1278_; 
v___x_1278_ = l_Lean_PersistentHashMap_eraseAux___redArg(v_inst_1274_, v_x_1275_, v_x_1276_, v_x_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___boxed(lean_object* v_00_u03b1_1279_, lean_object* v_00_u03b2_1280_, lean_object* v_inst_1281_, lean_object* v_x_1282_, lean_object* v_x_1283_, lean_object* v_x_1284_){
_start:
{
size_t v_x_343__boxed_1285_; lean_object* v_res_1286_; 
v_x_343__boxed_1285_ = lean_unbox_usize(v_x_1283_);
lean_dec(v_x_1283_);
v_res_1286_ = l_Lean_PersistentHashMap_eraseAux(v_00_u03b1_1279_, v_00_u03b2_1280_, v_inst_1281_, v_x_1282_, v_x_343__boxed_1285_, v_x_1284_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___redArg(lean_object* v_x_1287_, lean_object* v_x_1288_, lean_object* v_x_1289_, lean_object* v_x_1290_){
_start:
{
lean_object* v___x_1291_; uint64_t v___x_1292_; size_t v_h_1293_; lean_object* v___x_1294_; 
lean_inc(v_x_1290_);
v___x_1291_ = lean_apply_1(v_x_1288_, v_x_1290_);
v___x_1292_ = lean_unbox_uint64(v___x_1291_);
lean_dec_ref(v___x_1291_);
v_h_1293_ = lean_uint64_to_usize(v___x_1292_);
v___x_1294_ = l_Lean_PersistentHashMap_eraseAux___redArg(v_x_1287_, v_x_1289_, v_h_1293_, v_x_1290_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase(lean_object* v_00_u03b1_1295_, lean_object* v_00_u03b2_1296_, lean_object* v_x_1297_, lean_object* v_x_1298_, lean_object* v_x_1299_, lean_object* v_x_1300_){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = l_Lean_PersistentHashMap_erase___redArg(v_x_1297_, v_x_1298_, v_x_1299_, v_x_1300_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___redArg(lean_object* v_inst_1302_, lean_object* v_inst_1303_, lean_object* v_f_1304_, lean_object* v_x_1305_, size_t v_x_1306_, size_t v_x_1307_, lean_object* v_x_1308_){
_start:
{
if (lean_obj_tag(v_x_1305_) == 0)
{
lean_object* v_es_1309_; size_t v___x_1310_; size_t v___x_1311_; lean_object* v_j_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; 
v_es_1309_ = lean_ctor_get(v_x_1305_, 0);
v___x_1310_ = ((size_t)31ULL);
v___x_1311_ = lean_usize_land(v_x_1306_, v___x_1310_);
v_j_1312_ = lean_usize_to_nat(v___x_1311_);
v___x_1313_ = lean_array_get_size(v_es_1309_);
v___x_1314_ = lean_nat_dec_lt(v_j_1312_, v___x_1313_);
if (v___x_1314_ == 0)
{
lean_dec(v_j_1312_);
lean_dec(v_x_1308_);
lean_dec_ref(v_f_1304_);
lean_dec_ref(v_inst_1303_);
lean_dec_ref(v_inst_1302_);
return v_x_1305_;
}
else
{
lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1383_; 
lean_inc_ref(v_es_1309_);
v_isSharedCheck_1383_ = !lean_is_exclusive(v_x_1305_);
if (v_isSharedCheck_1383_ == 0)
{
lean_object* v_unused_1384_; 
v_unused_1384_ = lean_ctor_get(v_x_1305_, 0);
lean_dec(v_unused_1384_);
v___x_1316_ = v_x_1305_;
v_isShared_1317_ = v_isSharedCheck_1383_;
goto v_resetjp_1315_;
}
else
{
lean_dec(v_x_1305_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1383_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v_v_1318_; lean_object* v___x_1319_; lean_object* v_xs_x27_1320_; lean_object* v___y_1322_; 
v_v_1318_ = lean_array_fget(v_es_1309_, v_j_1312_);
v___x_1319_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___redArg___closed__0);
v_xs_x27_1320_ = lean_array_fset(v_es_1309_, v_j_1312_, v___x_1319_);
switch(lean_obj_tag(v_v_1318_))
{
case 0:
{
lean_object* v_key_1327_; lean_object* v_val_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; 
lean_dec_ref(v_inst_1303_);
v_key_1327_ = lean_ctor_get(v_v_1318_, 0);
v_val_1328_ = lean_ctor_get(v_v_1318_, 1);
lean_inc(v_key_1327_);
lean_inc(v_x_1308_);
v___x_1329_ = lean_apply_2(v_inst_1302_, v_x_1308_, v_key_1327_);
v___x_1330_ = lean_unbox(v___x_1329_);
if (v___x_1330_ == 0)
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = lean_box(0);
v___x_1332_ = lean_apply_1(v_f_1304_, v___x_1331_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_dec(v_x_1308_);
v___y_1322_ = v_v_1318_;
goto v___jp_1321_;
}
else
{
lean_object* v_val_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1341_; 
lean_inc(v_val_1328_);
lean_inc(v_key_1327_);
lean_dec_ref_known(v_v_1318_, 2);
v_val_1333_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1335_ = v___x_1332_;
v_isShared_1336_ = v_isSharedCheck_1341_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_val_1333_);
lean_dec(v___x_1332_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1341_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1337_; lean_object* v___x_1339_; 
v___x_1337_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1327_, v_val_1328_, v_x_1308_, v_val_1333_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 0, v___x_1337_);
v___x_1339_ = v___x_1335_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v___x_1337_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
v___y_1322_ = v___x_1339_;
goto v___jp_1321_;
}
}
}
}
else
{
lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1352_; 
lean_inc(v_val_1328_);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_v_1318_);
if (v_isSharedCheck_1352_ == 0)
{
lean_object* v_unused_1353_; lean_object* v_unused_1354_; 
v_unused_1353_ = lean_ctor_get(v_v_1318_, 1);
lean_dec(v_unused_1353_);
v_unused_1354_ = lean_ctor_get(v_v_1318_, 0);
lean_dec(v_unused_1354_);
v___x_1343_ = v_v_1318_;
v_isShared_1344_ = v_isSharedCheck_1352_;
goto v_resetjp_1342_;
}
else
{
lean_dec(v_v_1318_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1352_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1345_, 0, v_val_1328_);
v___x_1346_ = lean_apply_1(v_f_1304_, v___x_1345_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v___x_1347_; 
lean_del_object(v___x_1343_);
lean_dec(v_x_1308_);
v___x_1347_ = lean_box(2);
v___y_1322_ = v___x_1347_;
goto v___jp_1321_;
}
else
{
lean_object* v_val_1348_; lean_object* v___x_1350_; 
v_val_1348_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_val_1348_);
lean_dec_ref_known(v___x_1346_, 1);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 1, v_val_1348_);
lean_ctor_set(v___x_1343_, 0, v_x_1308_);
v___x_1350_ = v___x_1343_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_x_1308_);
lean_ctor_set(v_reuseFailAlloc_1351_, 1, v_val_1348_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
v___y_1322_ = v___x_1350_;
goto v___jp_1321_;
}
}
}
}
}
case 1:
{
lean_object* v_node_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1378_; 
v_node_1355_ = lean_ctor_get(v_v_1318_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_v_1318_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1357_ = v_v_1318_;
v_isShared_1358_ = v_isSharedCheck_1378_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_node_1355_);
lean_dec(v_v_1318_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1378_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
size_t v___x_1359_; size_t v___x_1360_; size_t v___x_1361_; size_t v___x_1362_; lean_object* v_newNode_1363_; lean_object* v___x_1364_; 
v___x_1359_ = ((size_t)5ULL);
v___x_1360_ = lean_usize_shift_right(v_x_1306_, v___x_1359_);
v___x_1361_ = ((size_t)1ULL);
v___x_1362_ = lean_usize_add(v_x_1307_, v___x_1361_);
v_newNode_1363_ = l_Lean_PersistentHashMap_alterAux___redArg(v_inst_1302_, v_inst_1303_, v_f_1304_, v_node_1355_, v___x_1360_, v___x_1362_, v_x_1308_);
lean_inc_ref(v_newNode_1363_);
v___x_1364_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_1363_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v___x_1366_; 
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 0, v_newNode_1363_);
v___x_1366_ = v___x_1357_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_newNode_1363_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
v___y_1322_ = v___x_1366_;
goto v___jp_1321_;
}
}
else
{
lean_object* v_val_1368_; lean_object* v_fst_1369_; lean_object* v_snd_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1377_; 
lean_dec_ref(v_newNode_1363_);
lean_del_object(v___x_1357_);
v_val_1368_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_val_1368_);
lean_dec_ref_known(v___x_1364_, 1);
v_fst_1369_ = lean_ctor_get(v_val_1368_, 0);
v_snd_1370_ = lean_ctor_get(v_val_1368_, 1);
v_isSharedCheck_1377_ = !lean_is_exclusive(v_val_1368_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1372_ = v_val_1368_;
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_snd_1370_);
lean_inc(v_fst_1369_);
lean_dec(v_val_1368_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_fst_1369_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v_snd_1370_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
v___y_1322_ = v___x_1375_;
goto v___jp_1321_;
}
}
}
}
}
default: 
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
lean_dec_ref(v_inst_1303_);
lean_dec_ref(v_inst_1302_);
v___x_1379_ = lean_box(0);
v___x_1380_ = lean_apply_1(v_f_1304_, v___x_1379_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_dec(v_x_1308_);
v___y_1322_ = v_v_1318_;
goto v___jp_1321_;
}
else
{
lean_object* v_val_1381_; lean_object* v___x_1382_; 
v_val_1381_ = lean_ctor_get(v___x_1380_, 0);
lean_inc(v_val_1381_);
lean_dec_ref_known(v___x_1380_, 1);
v___x_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1382_, 0, v_x_1308_);
lean_ctor_set(v___x_1382_, 1, v_val_1381_);
v___y_1322_ = v___x_1382_;
goto v___jp_1321_;
}
}
}
v___jp_1321_:
{
lean_object* v___x_1323_; lean_object* v___x_1325_; 
v___x_1323_ = lean_array_fset(v_xs_x27_1320_, v_j_1312_, v___y_1322_);
lean_dec(v_j_1312_);
if (v_isShared_1317_ == 0)
{
lean_ctor_set(v___x_1316_, 0, v___x_1323_);
v___x_1325_ = v___x_1316_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
}
else
{
lean_object* v_ks_1385_; lean_object* v_vs_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1419_; 
v_ks_1385_ = lean_ctor_get(v_x_1305_, 0);
v_vs_1386_ = lean_ctor_get(v_x_1305_, 1);
v_isSharedCheck_1419_ = !lean_is_exclusive(v_x_1305_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1388_ = v_x_1305_;
v_isShared_1389_ = v_isSharedCheck_1419_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_vs_1386_);
lean_inc(v_ks_1385_);
lean_dec(v_x_1305_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1419_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; 
lean_inc(v_x_1308_);
lean_inc_ref(v_inst_1302_);
v___x_1390_ = l_Array_finIdxOf_x3f___redArg(v_inst_1302_, v_ks_1385_, v_x_1308_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v___x_1392_; 
if (v_isShared_1389_ == 0)
{
v___x_1392_ = v___x_1388_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_ks_1385_);
lean_ctor_set(v_reuseFailAlloc_1397_, 1, v_vs_1386_);
v___x_1392_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = lean_box(0);
v___x_1394_ = lean_apply_1(v_f_1304_, v___x_1393_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_dec(v_x_1308_);
lean_dec_ref(v_inst_1303_);
lean_dec_ref(v_inst_1302_);
return v___x_1392_;
}
else
{
lean_object* v_val_1395_; lean_object* v___x_1396_; 
v_val_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_val_1395_);
lean_dec_ref_known(v___x_1394_, 1);
v___x_1396_ = l_Lean_PersistentHashMap_insertAux___redArg(v_inst_1302_, v_inst_1303_, v___x_1392_, v_x_1306_, v_x_1307_, v_x_1308_, v_val_1395_);
return v___x_1396_;
}
}
}
else
{
lean_object* v_val_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1418_; 
lean_dec_ref(v_inst_1303_);
lean_dec_ref(v_inst_1302_);
v_val_1398_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1400_ = v___x_1390_;
v_isShared_1401_ = v_isSharedCheck_1418_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_val_1398_);
lean_dec(v___x_1390_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1418_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v_v_x27_1402_; lean_object* v_keys_1403_; lean_object* v_vals_1404_; lean_object* v___x_1406_; 
v_v_x27_1402_ = lean_array_fget(v_vs_1386_, v_val_1398_);
lean_inc(v_val_1398_);
v_keys_1403_ = l_Array_eraseIdx___redArg(v_ks_1385_, v_val_1398_);
v_vals_1404_ = l_Array_eraseIdx___redArg(v_vs_1386_, v_val_1398_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v_v_x27_1402_);
v___x_1406_ = v___x_1400_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_v_x27_1402_);
v___x_1406_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
lean_object* v___x_1407_; 
v___x_1407_ = lean_apply_1(v_f_1304_, v___x_1406_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v___x_1409_; 
lean_dec(v_x_1308_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 1, v_vals_1404_);
lean_ctor_set(v___x_1388_, 0, v_keys_1403_);
v___x_1409_ = v___x_1388_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_keys_1403_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_vals_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
else
{
lean_object* v_val_1411_; lean_object* v_keys_1412_; lean_object* v_vals_1413_; lean_object* v___x_1415_; 
v_val_1411_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_val_1411_);
lean_dec_ref_known(v___x_1407_, 1);
v_keys_1412_ = lean_array_push(v_keys_1403_, v_x_1308_);
v_vals_1413_ = lean_array_push(v_vals_1404_, v_val_1411_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 1, v_vals_1413_);
lean_ctor_set(v___x_1388_, 0, v_keys_1412_);
v___x_1415_ = v___x_1388_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_keys_1412_);
lean_ctor_set(v_reuseFailAlloc_1416_, 1, v_vals_1413_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___redArg___boxed(lean_object* v_inst_1420_, lean_object* v_inst_1421_, lean_object* v_f_1422_, lean_object* v_x_1423_, lean_object* v_x_1424_, lean_object* v_x_1425_, lean_object* v_x_1426_){
_start:
{
size_t v_x_418__boxed_1427_; size_t v_x_419__boxed_1428_; lean_object* v_res_1429_; 
v_x_418__boxed_1427_ = lean_unbox_usize(v_x_1424_);
lean_dec(v_x_1424_);
v_x_419__boxed_1428_ = lean_unbox_usize(v_x_1425_);
lean_dec(v_x_1425_);
v_res_1429_ = l_Lean_PersistentHashMap_alterAux___redArg(v_inst_1420_, v_inst_1421_, v_f_1422_, v_x_1423_, v_x_418__boxed_1427_, v_x_419__boxed_1428_, v_x_1426_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux(lean_object* v_00_u03b1_1430_, lean_object* v_00_u03b2_1431_, lean_object* v_inst_1432_, lean_object* v_inst_1433_, lean_object* v_f_1434_, lean_object* v_x_1435_, size_t v_x_1436_, size_t v_x_1437_, lean_object* v_x_1438_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lean_PersistentHashMap_alterAux___redArg(v_inst_1432_, v_inst_1433_, v_f_1434_, v_x_1435_, v_x_1436_, v_x_1437_, v_x_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___boxed(lean_object* v_00_u03b1_1440_, lean_object* v_00_u03b2_1441_, lean_object* v_inst_1442_, lean_object* v_inst_1443_, lean_object* v_f_1444_, lean_object* v_x_1445_, lean_object* v_x_1446_, lean_object* v_x_1447_, lean_object* v_x_1448_){
_start:
{
size_t v_x_641__boxed_1449_; size_t v_x_642__boxed_1450_; lean_object* v_res_1451_; 
v_x_641__boxed_1449_ = lean_unbox_usize(v_x_1446_);
lean_dec(v_x_1446_);
v_x_642__boxed_1450_ = lean_unbox_usize(v_x_1447_);
lean_dec(v_x_1447_);
v_res_1451_ = l_Lean_PersistentHashMap_alterAux(v_00_u03b1_1440_, v_00_u03b2_1441_, v_inst_1442_, v_inst_1443_, v_f_1444_, v_x_1445_, v_x_641__boxed_1449_, v_x_642__boxed_1450_, v_x_1448_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alter___redArg(lean_object* v_x_1452_, lean_object* v_x_1453_, lean_object* v_x_1454_, lean_object* v_x_1455_, lean_object* v_x_1456_){
_start:
{
lean_object* v___x_1457_; uint64_t v___x_1458_; size_t v_h_1459_; size_t v___x_1460_; lean_object* v___x_1461_; 
lean_inc_ref(v_x_1453_);
lean_inc(v_x_1455_);
v___x_1457_ = lean_apply_1(v_x_1453_, v_x_1455_);
v___x_1458_ = lean_unbox_uint64(v___x_1457_);
lean_dec_ref(v___x_1457_);
v_h_1459_ = lean_uint64_to_usize(v___x_1458_);
v___x_1460_ = ((size_t)1ULL);
v___x_1461_ = l_Lean_PersistentHashMap_alterAux___redArg(v_x_1452_, v_x_1453_, v_x_1456_, v_x_1454_, v_h_1459_, v___x_1460_, v_x_1455_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alter(lean_object* v_00_u03b1_1462_, lean_object* v_00_u03b2_1463_, lean_object* v_x_1464_, lean_object* v_x_1465_, lean_object* v_x_1466_, lean_object* v_x_1467_, lean_object* v_x_1468_){
_start:
{
lean_object* v___x_1469_; uint64_t v___x_1470_; size_t v_h_1471_; size_t v___x_1472_; lean_object* v___x_1473_; 
lean_inc_ref(v_x_1465_);
lean_inc(v_x_1467_);
v___x_1469_ = lean_apply_1(v_x_1465_, v_x_1467_);
v___x_1470_ = lean_unbox_uint64(v___x_1469_);
lean_dec_ref(v___x_1469_);
v_h_1471_ = lean_uint64_to_usize(v___x_1470_);
v___x_1472_ = ((size_t)1ULL);
v___x_1473_ = l_Lean_PersistentHashMap_alterAux___redArg(v_x_1464_, v_x_1465_, v_x_1468_, v_x_1466_, v_h_1471_, v___x_1472_, v_x_1467_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0___boxed(lean_object* v_i_1474_, lean_object* v_inst_1475_, lean_object* v_f_1476_, lean_object* v_keys_1477_, lean_object* v_vals_1478_, lean_object* v_____do__lift_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0(v_i_1474_, v_inst_1475_, v_f_1476_, v_keys_1477_, v_vals_1478_, v_____do__lift_1479_);
lean_dec(v_i_1474_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg(lean_object* v_inst_1481_, lean_object* v_f_1482_, lean_object* v_keys_1483_, lean_object* v_vals_1484_, lean_object* v_i_1485_, lean_object* v_acc_1486_){
_start:
{
lean_object* v_toApplicative_1487_; lean_object* v_toBind_1488_; lean_object* v_toPure_1489_; lean_object* v___x_1490_; uint8_t v___x_1491_; 
v_toApplicative_1487_ = lean_ctor_get(v_inst_1481_, 0);
v_toBind_1488_ = lean_ctor_get(v_inst_1481_, 1);
lean_inc(v_toBind_1488_);
v_toPure_1489_ = lean_ctor_get(v_toApplicative_1487_, 1);
v___x_1490_ = lean_array_get_size(v_keys_1483_);
v___x_1491_ = lean_nat_dec_lt(v_i_1485_, v___x_1490_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; 
lean_inc(v_toPure_1489_);
lean_dec(v_toBind_1488_);
lean_dec(v_i_1485_);
lean_dec_ref(v_vals_1484_);
lean_dec_ref(v_keys_1483_);
lean_dec(v_f_1482_);
lean_dec_ref(v_inst_1481_);
v___x_1492_ = lean_apply_2(v_toPure_1489_, lean_box(0), v_acc_1486_);
return v___x_1492_;
}
else
{
lean_object* v___f_1493_; lean_object* v_k_1494_; lean_object* v_v_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
lean_inc_ref(v_vals_1484_);
lean_inc_ref(v_keys_1483_);
lean_inc(v_f_1482_);
lean_inc(v_i_1485_);
v___f_1493_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1493_, 0, v_i_1485_);
lean_closure_set(v___f_1493_, 1, v_inst_1481_);
lean_closure_set(v___f_1493_, 2, v_f_1482_);
lean_closure_set(v___f_1493_, 3, v_keys_1483_);
lean_closure_set(v___f_1493_, 4, v_vals_1484_);
v_k_1494_ = lean_array_fget(v_keys_1483_, v_i_1485_);
lean_dec_ref(v_keys_1483_);
v_v_1495_ = lean_array_fget(v_vals_1484_, v_i_1485_);
lean_dec(v_i_1485_);
lean_dec_ref(v_vals_1484_);
v___x_1496_ = lean_apply_3(v_f_1482_, v_acc_1486_, v_k_1494_, v_v_1495_);
v___x_1497_ = lean_apply_4(v_toBind_1488_, lean_box(0), lean_box(0), v___x_1496_, v___f_1493_);
return v___x_1497_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0(lean_object* v_i_1498_, lean_object* v_inst_1499_, lean_object* v_f_1500_, lean_object* v_keys_1501_, lean_object* v_vals_1502_, lean_object* v_____do__lift_1503_){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1504_ = lean_unsigned_to_nat(1u);
v___x_1505_ = lean_nat_add(v_i_1498_, v___x_1504_);
v___x_1506_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg(v_inst_1499_, v_f_1500_, v_keys_1501_, v_vals_1502_, v___x_1505_, v_____do__lift_1503_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse(lean_object* v_m_1507_, lean_object* v_inst_1508_, lean_object* v_00_u03c3_1509_, lean_object* v_00_u03b1_1510_, lean_object* v_00_u03b2_1511_, lean_object* v_f_1512_, lean_object* v_keys_1513_, lean_object* v_vals_1514_, lean_object* v_heq_1515_, lean_object* v_i_1516_, lean_object* v_acc_1517_){
_start:
{
lean_object* v___x_1518_; 
v___x_1518_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg(v_inst_1508_, v_f_1512_, v_keys_1513_, v_vals_1514_, v_i_1516_, v_acc_1517_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___redArg(lean_object* v_inst_1519_, lean_object* v_f_1520_, lean_object* v_x_1521_, lean_object* v_x_1522_){
_start:
{
if (lean_obj_tag(v_x_1521_) == 0)
{
lean_object* v_toApplicative_1523_; lean_object* v_toPure_1524_; lean_object* v_es_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; uint8_t v___x_1528_; 
v_toApplicative_1523_ = lean_ctor_get(v_inst_1519_, 0);
v_toPure_1524_ = lean_ctor_get(v_toApplicative_1523_, 1);
v_es_1525_ = lean_ctor_get(v_x_1521_, 0);
lean_inc_ref(v_es_1525_);
lean_dec_ref_known(v_x_1521_, 1);
v___x_1526_ = lean_unsigned_to_nat(0u);
v___x_1527_ = lean_array_get_size(v_es_1525_);
v___x_1528_ = lean_nat_dec_lt(v___x_1526_, v___x_1527_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; 
lean_inc(v_toPure_1524_);
lean_dec_ref(v_es_1525_);
lean_dec(v_f_1520_);
lean_dec_ref(v_inst_1519_);
v___x_1529_ = lean_apply_2(v_toPure_1524_, lean_box(0), v_x_1522_);
return v___x_1529_;
}
else
{
lean_object* v___f_1530_; uint8_t v___x_1531_; 
lean_inc(v_toPure_1524_);
lean_inc_ref(v_inst_1519_);
v___f_1530_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux___redArg___lam__0), 5, 3);
lean_closure_set(v___f_1530_, 0, v_f_1520_);
lean_closure_set(v___f_1530_, 1, v_inst_1519_);
lean_closure_set(v___f_1530_, 2, v_toPure_1524_);
v___x_1531_ = lean_nat_dec_le(v___x_1527_, v___x_1527_);
if (v___x_1531_ == 0)
{
if (v___x_1528_ == 0)
{
lean_object* v___x_1532_; 
lean_inc(v_toPure_1524_);
lean_dec_ref(v___f_1530_);
lean_dec_ref(v_es_1525_);
lean_dec_ref(v_inst_1519_);
v___x_1532_ = lean_apply_2(v_toPure_1524_, lean_box(0), v_x_1522_);
return v___x_1532_;
}
else
{
size_t v___x_1533_; size_t v___x_1534_; lean_object* v___x_1535_; 
v___x_1533_ = ((size_t)0ULL);
v___x_1534_ = lean_usize_of_nat(v___x_1527_);
v___x_1535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1519_, v___f_1530_, v_es_1525_, v___x_1533_, v___x_1534_, v_x_1522_);
return v___x_1535_;
}
}
else
{
size_t v___x_1536_; size_t v___x_1537_; lean_object* v___x_1538_; 
v___x_1536_ = ((size_t)0ULL);
v___x_1537_ = lean_usize_of_nat(v___x_1527_);
v___x_1538_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1519_, v___f_1530_, v_es_1525_, v___x_1536_, v___x_1537_, v_x_1522_);
return v___x_1538_;
}
}
}
else
{
lean_object* v_ks_1539_; lean_object* v_vs_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v_ks_1539_ = lean_ctor_get(v_x_1521_, 0);
lean_inc_ref(v_ks_1539_);
v_vs_1540_ = lean_ctor_get(v_x_1521_, 1);
lean_inc_ref(v_vs_1540_);
lean_dec_ref_known(v_x_1521_, 2);
v___x_1541_ = lean_unsigned_to_nat(0u);
v___x_1542_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg(v_inst_1519_, v_f_1520_, v_ks_1539_, v_vs_1540_, v___x_1541_, v_x_1522_);
return v___x_1542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___redArg___lam__0(lean_object* v_f_1543_, lean_object* v_inst_1544_, lean_object* v_toPure_1545_, lean_object* v_acc_1546_, lean_object* v_entry_1547_){
_start:
{
switch(lean_obj_tag(v_entry_1547_))
{
case 0:
{
lean_object* v_key_1548_; lean_object* v_val_1549_; lean_object* v___x_1550_; 
lean_dec(v_toPure_1545_);
lean_dec_ref(v_inst_1544_);
v_key_1548_ = lean_ctor_get(v_entry_1547_, 0);
lean_inc(v_key_1548_);
v_val_1549_ = lean_ctor_get(v_entry_1547_, 1);
lean_inc(v_val_1549_);
lean_dec_ref_known(v_entry_1547_, 2);
v___x_1550_ = lean_apply_3(v_f_1543_, v_acc_1546_, v_key_1548_, v_val_1549_);
return v___x_1550_;
}
case 1:
{
lean_object* v_node_1551_; lean_object* v___x_1552_; 
lean_dec(v_toPure_1545_);
v_node_1551_ = lean_ctor_get(v_entry_1547_, 0);
lean_inc(v_node_1551_);
lean_dec_ref_known(v_entry_1547_, 1);
v___x_1552_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_1544_, v_f_1543_, v_node_1551_, v_acc_1546_);
return v___x_1552_;
}
default: 
{
lean_object* v___x_1553_; 
lean_dec_ref(v_inst_1544_);
lean_dec(v_f_1543_);
v___x_1553_ = lean_apply_2(v_toPure_1545_, lean_box(0), v_acc_1546_);
return v___x_1553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux(lean_object* v_m_1554_, lean_object* v_inst_1555_, lean_object* v_00_u03c3_1556_, lean_object* v_00_u03b1_1557_, lean_object* v_00_u03b2_1558_, lean_object* v_f_1559_, lean_object* v_x_1560_, lean_object* v_x_1561_){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_1555_, v_f_1559_, v_x_1560_, v_x_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___redArg(lean_object* v_inst_1563_, lean_object* v_map_1564_, lean_object* v_f_1565_, lean_object* v_init_1566_){
_start:
{
lean_object* v___x_1567_; 
v___x_1567_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_1563_, v_f_1565_, v_map_1564_, v_init_1566_);
return v___x_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM(lean_object* v_m_1568_, lean_object* v_inst_1569_, lean_object* v_00_u03c3_1570_, lean_object* v_00_u03b1_1571_, lean_object* v_00_u03b2_1572_, lean_object* v_x_1573_, lean_object* v_x_1574_, lean_object* v_map_1575_, lean_object* v_f_1576_, lean_object* v_init_1577_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_1569_, v_f_1576_, v_map_1575_, v_init_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___boxed(lean_object* v_m_1579_, lean_object* v_inst_1580_, lean_object* v_00_u03c3_1581_, lean_object* v_00_u03b1_1582_, lean_object* v_00_u03b2_1583_, lean_object* v_x_1584_, lean_object* v_x_1585_, lean_object* v_map_1586_, lean_object* v_f_1587_, lean_object* v_init_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lean_PersistentHashMap_foldlM(v_m_1579_, v_inst_1580_, v_00_u03c3_1581_, v_00_u03b1_1582_, v_00_u03b2_1583_, v_x_1584_, v_x_1585_, v_map_1586_, v_f_1587_, v_init_1588_);
lean_dec_ref(v_x_1585_);
lean_dec_ref(v_x_1584_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___redArg___lam__0(lean_object* v_f_1590_, lean_object* v_x_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_apply_2(v_f_1590_, v___y_1592_, v___y_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___redArg(lean_object* v_inst_1595_, lean_object* v_map_1596_, lean_object* v_f_1597_){
_start:
{
lean_object* v___f_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___f_1598_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1598_, 0, v_f_1597_);
v___x_1599_ = lean_box(0);
v___x_1600_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_1595_, v___f_1598_, v_map_1596_, v___x_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM(lean_object* v_m_1601_, lean_object* v_inst_1602_, lean_object* v_00_u03b1_1603_, lean_object* v_00_u03b2_1604_, lean_object* v_x_1605_, lean_object* v_x_1606_, lean_object* v_map_1607_, lean_object* v_f_1608_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Lean_PersistentHashMap_forM___redArg(v_inst_1602_, v_map_1607_, v_f_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___boxed(lean_object* v_m_1610_, lean_object* v_inst_1611_, lean_object* v_00_u03b1_1612_, lean_object* v_00_u03b2_1613_, lean_object* v_x_1614_, lean_object* v_x_1615_, lean_object* v_map_1616_, lean_object* v_f_1617_){
_start:
{
lean_object* v_res_1618_; 
v_res_1618_ = l_Lean_PersistentHashMap_forM(v_m_1610_, v_inst_1611_, v_00_u03b1_1612_, v_00_u03b2_1613_, v_x_1614_, v_x_1615_, v_map_1616_, v_f_1617_);
lean_dec_ref(v_x_1615_);
lean_dec_ref(v_x_1614_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___redArg___lam__0(lean_object* v_f_1619_, lean_object* v_x1_1620_, lean_object* v_x2_1621_, lean_object* v_x3_1622_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = lean_apply_3(v_f_1619_, v_x1_1620_, v_x2_1621_, v_x3_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___redArg(lean_object* v_map_1643_, lean_object* v_f_1644_, lean_object* v_init_1645_){
_start:
{
lean_object* v___f_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___f_1646_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1646_, 0, v_f_1644_);
v___x_1647_ = ((lean_object*)(l_Lean_PersistentHashMap_foldl___redArg___closed__9));
v___x_1648_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v___x_1647_, v___f_1646_, v_map_1643_, v_init_1645_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl(lean_object* v_00_u03c3_1649_, lean_object* v_00_u03b1_1650_, lean_object* v_00_u03b2_1651_, lean_object* v_x_1652_, lean_object* v_x_1653_, lean_object* v_map_1654_, lean_object* v_f_1655_, lean_object* v_init_1656_){
_start:
{
lean_object* v___x_1657_; 
v___x_1657_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_1654_, v_f_1655_, v_init_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___boxed(lean_object* v_00_u03c3_1658_, lean_object* v_00_u03b1_1659_, lean_object* v_00_u03b2_1660_, lean_object* v_x_1661_, lean_object* v_x_1662_, lean_object* v_map_1663_, lean_object* v_f_1664_, lean_object* v_init_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Lean_PersistentHashMap_foldl(v_00_u03c3_1658_, v_00_u03b1_1659_, v_00_u03b2_1660_, v_x_1661_, v_x_1662_, v_map_1663_, v_f_1664_, v_init_1665_);
lean_dec_ref(v_x_1662_);
lean_dec_ref(v_x_1661_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__0(lean_object* v_x_1667_){
_start:
{
if (lean_obj_tag(v_x_1667_) == 0)
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
v_a_1668_ = lean_ctor_get(v_x_1667_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v_x_1667_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v_x_1667_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v_x_1667_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
v_a_1676_ = lean_ctor_get(v_x_1667_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v_x_1667_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v_x_1667_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v_x_1667_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__1(lean_object* v_toPure_1684_, lean_object* v_result_1685_){
_start:
{
lean_object* v_a_1686_; lean_object* v___x_1687_; 
v_a_1686_ = lean_ctor_get(v_result_1685_, 0);
lean_inc(v_a_1686_);
lean_dec_ref(v_result_1685_);
v___x_1687_ = lean_apply_2(v_toPure_1684_, lean_box(0), v_a_1686_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__2(lean_object* v_toFunctor_1688_, lean_object* v_f_1689_, lean_object* v_intoError_1690_, lean_object* v_s_1691_, lean_object* v_a_1692_, lean_object* v_b_1693_){
_start:
{
lean_object* v_map_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1703_; 
v_map_1694_ = lean_ctor_get(v_toFunctor_1688_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v_toFunctor_1688_);
if (v_isSharedCheck_1703_ == 0)
{
lean_object* v_unused_1704_; 
v_unused_1704_ = lean_ctor_get(v_toFunctor_1688_, 1);
lean_dec(v_unused_1704_);
v___x_1696_ = v_toFunctor_1688_;
v_isShared_1697_ = v_isSharedCheck_1703_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_map_1694_);
lean_dec(v_toFunctor_1688_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1703_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
lean_ctor_set(v___x_1696_, 1, v_b_1693_);
lean_ctor_set(v___x_1696_, 0, v_a_1692_);
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1692_);
lean_ctor_set(v_reuseFailAlloc_1702_, 1, v_b_1693_);
v___x_1699_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = lean_apply_2(v_f_1689_, v___x_1699_, v_s_1691_);
v___x_1701_ = lean_apply_4(v_map_1694_, lean_box(0), lean_box(0), v_intoError_1690_, v___x_1700_);
return v___x_1701_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg(lean_object* v_inst_1706_, lean_object* v_map_1707_, lean_object* v_init_1708_, lean_object* v_f_1709_){
_start:
{
lean_object* v_toApplicative_1710_; lean_object* v_toBind_1711_; lean_object* v___f_1712_; lean_object* v___f_1713_; lean_object* v___f_1714_; lean_object* v___f_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v_toFunctor_1722_; lean_object* v_toPure_1723_; lean_object* v_intoError_1724_; lean_object* v___f_1725_; lean_object* v___f_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v_toApplicative_1710_ = lean_ctor_get(v_inst_1706_, 0);
lean_inc_ref(v_toApplicative_1710_);
v_toBind_1711_ = lean_ctor_get(v_inst_1706_, 1);
lean_inc(v_toBind_1711_);
lean_inc_ref_n(v_inst_1706_, 6);
v___f_1712_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1712_, 0, v_inst_1706_);
v___f_1713_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_1713_, 0, v_inst_1706_);
v___f_1714_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_1714_, 0, v_inst_1706_);
v___f_1715_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_1715_, 0, v_inst_1706_);
v___x_1716_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_1716_, 0, lean_box(0));
lean_closure_set(v___x_1716_, 1, lean_box(0));
lean_closure_set(v___x_1716_, 2, v_inst_1706_);
v___x_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1716_);
lean_ctor_set(v___x_1717_, 1, v___f_1712_);
v___x_1718_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_1718_, 0, lean_box(0));
lean_closure_set(v___x_1718_, 1, lean_box(0));
lean_closure_set(v___x_1718_, 2, v_inst_1706_);
v___x_1719_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1717_);
lean_ctor_set(v___x_1719_, 1, v___x_1718_);
lean_ctor_set(v___x_1719_, 2, v___f_1713_);
lean_ctor_set(v___x_1719_, 3, v___f_1714_);
lean_ctor_set(v___x_1719_, 4, v___f_1715_);
v___x_1720_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_1720_, 0, lean_box(0));
lean_closure_set(v___x_1720_, 1, lean_box(0));
lean_closure_set(v___x_1720_, 2, v_inst_1706_);
v___x_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1719_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
v_toFunctor_1722_ = lean_ctor_get(v_toApplicative_1710_, 0);
lean_inc_ref(v_toFunctor_1722_);
v_toPure_1723_ = lean_ctor_get(v_toApplicative_1710_, 1);
lean_inc(v_toPure_1723_);
lean_dec_ref(v_toApplicative_1710_);
v_intoError_1724_ = ((lean_object*)(l_Lean_PersistentHashMap_forIn___redArg___closed__0));
v___f_1725_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1725_, 0, v_toPure_1723_);
v___f_1726_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___redArg___lam__2), 6, 3);
lean_closure_set(v___f_1726_, 0, v_toFunctor_1722_);
lean_closure_set(v___f_1726_, 1, v_f_1709_);
lean_closure_set(v___f_1726_, 2, v_intoError_1724_);
lean_inc_ref(v_map_1707_);
v___x_1727_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v___x_1721_, v___f_1726_, v_map_1707_, v_init_1708_);
v___x_1728_ = lean_apply_4(v_toBind_1711_, lean_box(0), lean_box(0), v___x_1727_, v___f_1725_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___boxed(lean_object* v_inst_1729_, lean_object* v_map_1730_, lean_object* v_init_1731_, lean_object* v_f_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l_Lean_PersistentHashMap_forIn___redArg(v_inst_1729_, v_map_1730_, v_init_1731_, v_f_1732_);
lean_dec_ref(v_map_1730_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn(lean_object* v_m_1734_, lean_object* v_00_u03c3_1735_, lean_object* v_00_u03b1_1736_, lean_object* v_00_u03b2_1737_, lean_object* v_x_1738_, lean_object* v_x_1739_, lean_object* v_inst_1740_, lean_object* v_map_1741_, lean_object* v_init_1742_, lean_object* v_f_1743_){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Lean_PersistentHashMap_forIn___redArg(v_inst_1740_, v_map_1741_, v_init_1742_, v_f_1743_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___boxed(lean_object* v_m_1745_, lean_object* v_00_u03c3_1746_, lean_object* v_00_u03b1_1747_, lean_object* v_00_u03b2_1748_, lean_object* v_x_1749_, lean_object* v_x_1750_, lean_object* v_inst_1751_, lean_object* v_map_1752_, lean_object* v_init_1753_, lean_object* v_f_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l_Lean_PersistentHashMap_forIn(v_m_1745_, v_00_u03c3_1746_, v_00_u03b1_1747_, v_00_u03b2_1748_, v_x_1749_, v_x_1750_, v_inst_1751_, v_map_1752_, v_init_1753_, v_f_1754_);
lean_dec_ref(v_map_1752_);
lean_dec_ref(v_x_1750_);
lean_dec_ref(v_x_1749_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0(lean_object* v_inst_1756_, lean_object* v_00_u03b2_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = l_Lean_PersistentHashMap_forIn___redArg(v_inst_1756_, v___y_1758_, v___y_1759_, v___y_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0___boxed(lean_object* v_inst_1762_, lean_object* v_00_u03b2_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0(v_inst_1762_, v_00_u03b2_1763_, v___y_1764_, v___y_1765_, v___y_1766_);
lean_dec_ref(v___y_1764_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg(lean_object* v_inst_1768_){
_start:
{
lean_object* v___f_1769_; 
v___f_1769_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_1769_, 0, v_inst_1768_);
return v___f_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad(lean_object* v_m_1770_, lean_object* v_00_u03b1_1771_, lean_object* v_00_u03b2_1772_, lean_object* v_x_1773_, lean_object* v_x_1774_, lean_object* v_inst_1775_){
_start:
{
lean_object* v___f_1776_; 
v___f_1776_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_1776_, 0, v_inst_1775_);
return v___f_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___boxed(lean_object* v_m_1777_, lean_object* v_00_u03b1_1778_, lean_object* v_00_u03b2_1779_, lean_object* v_x_1780_, lean_object* v_x_1781_, lean_object* v_inst_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l_Lean_PersistentHashMap_instForInProdOfMonad(v_m_1777_, v_00_u03b1_1778_, v_00_u03b2_1779_, v_x_1780_, v_x_1781_, v_inst_1782_);
lean_dec_ref(v_x_1781_);
lean_dec_ref(v_x_1780_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__0(lean_object* v_toPure_1784_, lean_object* v_entries_x27_1785_){
_start:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1786_, 0, v_entries_x27_1785_);
v___x_1787_ = lean_apply_2(v_toPure_1784_, lean_box(0), v___x_1786_);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__1(lean_object* v_toPure_1788_, lean_object* v_____do__lift_1789_){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1790_, 0, v_____do__lift_1789_);
v___x_1791_ = lean_apply_2(v_toPure_1788_, lean_box(0), v___x_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__2(lean_object* v_key_1792_, lean_object* v_toPure_1793_, lean_object* v_____do__lift_1794_){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1795_, 0, v_key_1792_);
lean_ctor_set(v___x_1795_, 1, v_____do__lift_1794_);
v___x_1796_ = lean_apply_2(v_toPure_1793_, lean_box(0), v___x_1795_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__4(lean_object* v_ks_1797_, lean_object* v_toPure_1798_, lean_object* v_____x_1799_){
_start:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1800_, 0, v_ks_1797_);
lean_ctor_set(v___x_1800_, 1, v_____x_1799_);
v___x_1801_ = lean_apply_2(v_toPure_1798_, lean_box(0), v___x_1800_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg(lean_object* v_inst_1802_, lean_object* v_f_1803_, lean_object* v_n_1804_){
_start:
{
if (lean_obj_tag(v_n_1804_) == 0)
{
lean_object* v_toApplicative_1805_; lean_object* v_toBind_1806_; lean_object* v_toPure_1807_; lean_object* v_es_1808_; lean_object* v___f_1809_; lean_object* v___f_1810_; lean_object* v___f_1811_; size_t v_sz_1812_; size_t v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v_toApplicative_1805_ = lean_ctor_get(v_inst_1802_, 0);
v_toBind_1806_ = lean_ctor_get(v_inst_1802_, 1);
lean_inc_n(v_toBind_1806_, 2);
v_toPure_1807_ = lean_ctor_get(v_toApplicative_1805_, 1);
v_es_1808_ = lean_ctor_get(v_n_1804_, 0);
lean_inc_ref(v_es_1808_);
lean_dec_ref_known(v_n_1804_, 1);
lean_inc_n(v_toPure_1807_, 3);
v___f_1809_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapMAux___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1809_, 0, v_toPure_1807_);
v___f_1810_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapMAux___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1810_, 0, v_toPure_1807_);
lean_inc_ref(v_inst_1802_);
v___f_1811_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapMAux___redArg___lam__3), 6, 5);
lean_closure_set(v___f_1811_, 0, v_toPure_1807_);
lean_closure_set(v___f_1811_, 1, v_f_1803_);
lean_closure_set(v___f_1811_, 2, v_toBind_1806_);
lean_closure_set(v___f_1811_, 3, v_inst_1802_);
lean_closure_set(v___f_1811_, 4, v___f_1810_);
v_sz_1812_ = lean_array_size(v_es_1808_);
v___x_1813_ = ((size_t)0ULL);
v___x_1814_ = l_unsafeCast___redArg(v_es_1808_);
lean_dec_ref(v_es_1808_);
v___x_1815_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1802_, v___f_1811_, v_sz_1812_, v___x_1813_, v___x_1814_);
v___x_1816_ = l_unsafeCast___redArg(v___x_1815_);
lean_dec(v___x_1815_);
v___x_1817_ = lean_apply_4(v_toBind_1806_, lean_box(0), lean_box(0), v___x_1816_, v___f_1809_);
return v___x_1817_;
}
else
{
lean_object* v_toApplicative_1818_; lean_object* v_toBind_1819_; lean_object* v_toPure_1820_; lean_object* v_ks_1821_; lean_object* v_vs_1822_; lean_object* v___f_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v_toApplicative_1818_ = lean_ctor_get(v_inst_1802_, 0);
v_toBind_1819_ = lean_ctor_get(v_inst_1802_, 1);
lean_inc(v_toBind_1819_);
v_toPure_1820_ = lean_ctor_get(v_toApplicative_1818_, 1);
v_ks_1821_ = lean_ctor_get(v_n_1804_, 0);
lean_inc_ref(v_ks_1821_);
v_vs_1822_ = lean_ctor_get(v_n_1804_, 1);
lean_inc_ref(v_vs_1822_);
lean_dec_ref_known(v_n_1804_, 2);
lean_inc(v_toPure_1820_);
v___f_1823_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapMAux___redArg___lam__4), 3, 2);
lean_closure_set(v___f_1823_, 0, v_ks_1821_);
lean_closure_set(v___f_1823_, 1, v_toPure_1820_);
v___x_1824_ = l_Array_mapM_x27___redArg(v_inst_1802_, v_f_1803_, v_vs_1822_);
v___x_1825_ = lean_apply_4(v_toBind_1819_, lean_box(0), lean_box(0), v___x_1824_, v___f_1823_);
return v___x_1825_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__3(lean_object* v_toPure_1826_, lean_object* v_f_1827_, lean_object* v_toBind_1828_, lean_object* v_inst_1829_, lean_object* v___f_1830_, lean_object* v_x_1831_){
_start:
{
switch(lean_obj_tag(v_x_1831_))
{
case 0:
{
lean_object* v_key_1832_; lean_object* v_val_1833_; lean_object* v___f_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
lean_dec(v___f_1830_);
lean_dec_ref(v_inst_1829_);
v_key_1832_ = lean_ctor_get(v_x_1831_, 0);
lean_inc(v_key_1832_);
v_val_1833_ = lean_ctor_get(v_x_1831_, 1);
lean_inc(v_val_1833_);
lean_dec_ref_known(v_x_1831_, 2);
v___f_1834_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapMAux___redArg___lam__2), 3, 2);
lean_closure_set(v___f_1834_, 0, v_key_1832_);
lean_closure_set(v___f_1834_, 1, v_toPure_1826_);
v___x_1835_ = lean_apply_1(v_f_1827_, v_val_1833_);
v___x_1836_ = lean_apply_4(v_toBind_1828_, lean_box(0), lean_box(0), v___x_1835_, v___f_1834_);
return v___x_1836_;
}
case 1:
{
lean_object* v_node_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
lean_dec(v_toPure_1826_);
v_node_1837_ = lean_ctor_get(v_x_1831_, 0);
lean_inc(v_node_1837_);
lean_dec_ref_known(v_x_1831_, 1);
v___x_1838_ = l_Lean_PersistentHashMap_mapMAux___redArg(v_inst_1829_, v_f_1827_, v_node_1837_);
v___x_1839_ = lean_apply_4(v_toBind_1828_, lean_box(0), lean_box(0), v___x_1838_, v___f_1830_);
return v___x_1839_;
}
default: 
{
lean_object* v___x_1840_; lean_object* v___x_1841_; 
lean_dec(v___f_1830_);
lean_dec_ref(v_inst_1829_);
lean_dec(v_toBind_1828_);
lean_dec(v_f_1827_);
v___x_1840_ = lean_box(2);
v___x_1841_ = lean_apply_2(v_toPure_1826_, lean_box(0), v___x_1840_);
return v___x_1841_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux(lean_object* v_00_u03b1_1842_, lean_object* v_00_u03b2_1843_, lean_object* v_00_u03c3_1844_, lean_object* v_m_1845_, lean_object* v_inst_1846_, lean_object* v_f_1847_, lean_object* v_n_1848_){
_start:
{
lean_object* v___x_1849_; 
v___x_1849_ = l_Lean_PersistentHashMap_mapMAux___redArg(v_inst_1846_, v_f_1847_, v_n_1848_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___redArg___lam__0(lean_object* v_toPure_1850_, lean_object* v_root_1851_){
_start:
{
lean_object* v___x_1852_; 
v___x_1852_ = lean_apply_2(v_toPure_1850_, lean_box(0), v_root_1851_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___redArg(lean_object* v_inst_1853_, lean_object* v_pm_1854_, lean_object* v_f_1855_){
_start:
{
lean_object* v_toApplicative_1856_; lean_object* v_toBind_1857_; lean_object* v_toPure_1858_; lean_object* v___x_1859_; lean_object* v___f_1860_; lean_object* v___x_1861_; 
v_toApplicative_1856_ = lean_ctor_get(v_inst_1853_, 0);
v_toBind_1857_ = lean_ctor_get(v_inst_1853_, 1);
lean_inc(v_toBind_1857_);
v_toPure_1858_ = lean_ctor_get(v_toApplicative_1856_, 1);
lean_inc(v_toPure_1858_);
v___x_1859_ = l_Lean_PersistentHashMap_mapMAux___redArg(v_inst_1853_, v_f_1855_, v_pm_1854_);
v___f_1860_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1860_, 0, v_toPure_1858_);
v___x_1861_ = lean_apply_4(v_toBind_1857_, lean_box(0), lean_box(0), v___x_1859_, v___f_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM(lean_object* v_00_u03b1_1862_, lean_object* v_00_u03b2_1863_, lean_object* v_00_u03c3_1864_, lean_object* v_m_1865_, lean_object* v_inst_1866_, lean_object* v_x_1867_, lean_object* v_x_1868_, lean_object* v_pm_1869_, lean_object* v_f_1870_){
_start:
{
lean_object* v___x_1871_; 
v___x_1871_ = l_Lean_PersistentHashMap_mapM___redArg(v_inst_1866_, v_pm_1869_, v_f_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___boxed(lean_object* v_00_u03b1_1872_, lean_object* v_00_u03b2_1873_, lean_object* v_00_u03c3_1874_, lean_object* v_m_1875_, lean_object* v_inst_1876_, lean_object* v_x_1877_, lean_object* v_x_1878_, lean_object* v_pm_1879_, lean_object* v_f_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lean_PersistentHashMap_mapM(v_00_u03b1_1872_, v_00_u03b2_1873_, v_00_u03c3_1874_, v_m_1875_, v_inst_1876_, v_x_1877_, v_x_1878_, v_pm_1879_, v_f_1880_);
lean_dec_ref(v_x_1878_);
lean_dec_ref(v_x_1877_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___redArg___lam__0(lean_object* v_f_1882_, lean_object* v_x_1883_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = lean_apply_1(v_f_1882_, v_x_1883_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___redArg(lean_object* v_pm_1885_, lean_object* v_f_1886_){
_start:
{
lean_object* v___f_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___f_1887_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1887_, 0, v_f_1886_);
v___x_1888_ = ((lean_object*)(l_Lean_PersistentHashMap_foldl___redArg___closed__9));
v___x_1889_ = l_Lean_PersistentHashMap_mapM___redArg(v___x_1888_, v_pm_1885_, v___f_1887_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map(lean_object* v_00_u03b1_1890_, lean_object* v_00_u03b2_1891_, lean_object* v_00_u03c3_1892_, lean_object* v_x_1893_, lean_object* v_x_1894_, lean_object* v_pm_1895_, lean_object* v_f_1896_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = l_Lean_PersistentHashMap_map___redArg(v_pm_1895_, v_f_1896_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___boxed(lean_object* v_00_u03b1_1898_, lean_object* v_00_u03b2_1899_, lean_object* v_00_u03c3_1900_, lean_object* v_x_1901_, lean_object* v_x_1902_, lean_object* v_pm_1903_, lean_object* v_f_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l_Lean_PersistentHashMap_map(v_00_u03b1_1898_, v_00_u03b2_1899_, v_00_u03c3_1900_, v_x_1901_, v_x_1902_, v_pm_1903_, v_f_1904_);
lean_dec_ref(v_x_1902_);
lean_dec_ref(v_x_1901_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___redArg___lam__0(lean_object* v_ps_1906_, lean_object* v_k_1907_, lean_object* v_v_1908_){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1909_, 0, v_k_1907_);
lean_ctor_set(v___x_1909_, 1, v_v_1908_);
v___x_1910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
lean_ctor_set(v___x_1910_, 1, v_ps_1906_);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___redArg(lean_object* v_m_1912_){
_start:
{
lean_object* v___f_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___f_1913_ = ((lean_object*)(l_Lean_PersistentHashMap_toList___redArg___closed__0));
v___x_1914_ = lean_box(0);
v___x_1915_ = l_Lean_PersistentHashMap_foldl___redArg(v_m_1912_, v___f_1913_, v___x_1914_);
return v___x_1915_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList(lean_object* v_00_u03b1_1916_, lean_object* v_00_u03b2_1917_, lean_object* v_x_1918_, lean_object* v_x_1919_, lean_object* v_m_1920_){
_start:
{
lean_object* v___x_1921_; 
v___x_1921_ = l_Lean_PersistentHashMap_toList___redArg(v_m_1920_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___boxed(lean_object* v_00_u03b1_1922_, lean_object* v_00_u03b2_1923_, lean_object* v_x_1924_, lean_object* v_x_1925_, lean_object* v_m_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l_Lean_PersistentHashMap_toList(v_00_u03b1_1922_, v_00_u03b2_1923_, v_x_1924_, v_x_1925_, v_m_1926_);
lean_dec_ref(v_x_1925_);
lean_dec_ref(v_x_1924_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___redArg___lam__0(lean_object* v_ps_1928_, lean_object* v_k_1929_, lean_object* v_v_1930_){
_start:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1931_, 0, v_k_1929_);
lean_ctor_set(v___x_1931_, 1, v_v_1930_);
v___x_1932_ = lean_array_push(v_ps_1928_, v___x_1931_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___redArg(lean_object* v_m_1936_){
_start:
{
lean_object* v___f_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___f_1937_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___redArg___closed__0));
v___x_1938_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___redArg___closed__1));
v___x_1939_ = l_Lean_PersistentHashMap_foldl___redArg(v_m_1936_, v___f_1937_, v___x_1938_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray(lean_object* v_00_u03b1_1940_, lean_object* v_00_u03b2_1941_, lean_object* v_x_1942_, lean_object* v_x_1943_, lean_object* v_m_1944_){
_start:
{
lean_object* v___x_1945_; 
v___x_1945_ = l_Lean_PersistentHashMap_toArray___redArg(v_m_1944_);
return v___x_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___boxed(lean_object* v_00_u03b1_1946_, lean_object* v_00_u03b2_1947_, lean_object* v_x_1948_, lean_object* v_x_1949_, lean_object* v_m_1950_){
_start:
{
lean_object* v_res_1951_; 
v_res_1951_ = l_Lean_PersistentHashMap_toArray(v_00_u03b1_1946_, v_00_u03b2_1947_, v_x_1948_, v_x_1949_, v_m_1950_);
lean_dec_ref(v_x_1949_);
lean_dec_ref(v_x_1948_);
return v_res_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___redArg(lean_object* v_x_1952_, lean_object* v_x_1953_, lean_object* v_x_1954_){
_start:
{
if (lean_obj_tag(v_x_1952_) == 0)
{
lean_object* v_es_1955_; lean_object* v_numNodes_1956_; lean_object* v_numNull_1957_; lean_object* v_numCollisions_1958_; lean_object* v_maxDepth_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1981_; 
v_es_1955_ = lean_ctor_get(v_x_1952_, 0);
v_numNodes_1956_ = lean_ctor_get(v_x_1953_, 0);
v_numNull_1957_ = lean_ctor_get(v_x_1953_, 1);
v_numCollisions_1958_ = lean_ctor_get(v_x_1953_, 2);
v_maxDepth_1959_ = lean_ctor_get(v_x_1953_, 3);
v_isSharedCheck_1981_ = !lean_is_exclusive(v_x_1953_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1961_ = v_x_1953_;
v_isShared_1962_ = v_isSharedCheck_1981_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_maxDepth_1959_);
lean_inc(v_numCollisions_1958_);
lean_inc(v_numNull_1957_);
lean_inc(v_numNodes_1956_);
lean_dec(v_x_1953_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1981_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___y_1966_; uint8_t v___x_1980_; 
v___x_1963_ = lean_unsigned_to_nat(1u);
v___x_1964_ = lean_nat_add(v_numNodes_1956_, v___x_1963_);
lean_dec(v_numNodes_1956_);
v___x_1980_ = lean_nat_dec_le(v_maxDepth_1959_, v_x_1954_);
if (v___x_1980_ == 0)
{
v___y_1966_ = v_maxDepth_1959_;
goto v___jp_1965_;
}
else
{
lean_dec(v_maxDepth_1959_);
lean_inc(v_x_1954_);
v___y_1966_ = v_x_1954_;
goto v___jp_1965_;
}
v___jp_1965_:
{
lean_object* v_stats_1968_; 
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 3, v___y_1966_);
lean_ctor_set(v___x_1961_, 0, v___x_1964_);
v_stats_1968_ = v___x_1961_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v___x_1964_);
lean_ctor_set(v_reuseFailAlloc_1979_, 1, v_numNull_1957_);
lean_ctor_set(v_reuseFailAlloc_1979_, 2, v_numCollisions_1958_);
lean_ctor_set(v_reuseFailAlloc_1979_, 3, v___y_1966_);
v_stats_1968_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v___x_1969_ = lean_unsigned_to_nat(0u);
v___x_1970_ = lean_array_get_size(v_es_1955_);
v___x_1971_ = lean_nat_dec_lt(v___x_1969_, v___x_1970_);
if (v___x_1971_ == 0)
{
lean_dec(v_x_1954_);
return v_stats_1968_;
}
else
{
uint8_t v___x_1972_; 
v___x_1972_ = lean_nat_dec_le(v___x_1970_, v___x_1970_);
if (v___x_1972_ == 0)
{
if (v___x_1971_ == 0)
{
lean_dec(v_x_1954_);
return v_stats_1968_;
}
else
{
size_t v___x_1973_; size_t v___x_1974_; lean_object* v___x_1975_; 
v___x_1973_ = ((size_t)0ULL);
v___x_1974_ = lean_usize_of_nat(v___x_1970_);
v___x_1975_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(v_x_1954_, v_es_1955_, v___x_1973_, v___x_1974_, v_stats_1968_);
lean_dec(v_x_1954_);
return v___x_1975_;
}
}
else
{
size_t v___x_1976_; size_t v___x_1977_; lean_object* v___x_1978_; 
v___x_1976_ = ((size_t)0ULL);
v___x_1977_ = lean_usize_of_nat(v___x_1970_);
v___x_1978_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(v_x_1954_, v_es_1955_, v___x_1976_, v___x_1977_, v_stats_1968_);
lean_dec(v_x_1954_);
return v___x_1978_;
}
}
}
}
}
}
else
{
lean_object* v_ks_1982_; lean_object* v_numNodes_1983_; lean_object* v_numNull_1984_; lean_object* v_numCollisions_1985_; lean_object* v_maxDepth_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2002_; 
v_ks_1982_ = lean_ctor_get(v_x_1952_, 0);
v_numNodes_1983_ = lean_ctor_get(v_x_1953_, 0);
v_numNull_1984_ = lean_ctor_get(v_x_1953_, 1);
v_numCollisions_1985_ = lean_ctor_get(v_x_1953_, 2);
v_maxDepth_1986_ = lean_ctor_get(v_x_1953_, 3);
v_isSharedCheck_2002_ = !lean_is_exclusive(v_x_1953_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1988_ = v_x_1953_;
v_isShared_1989_ = v_isSharedCheck_2002_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_maxDepth_1986_);
lean_inc(v_numCollisions_1985_);
lean_inc(v_numNull_1984_);
lean_inc(v_numNodes_1983_);
lean_dec(v_x_1953_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2002_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; uint8_t v___x_1995_; 
v___x_1990_ = lean_unsigned_to_nat(1u);
v___x_1991_ = lean_nat_add(v_numNodes_1983_, v___x_1990_);
lean_dec(v_numNodes_1983_);
v___x_1992_ = lean_array_get_size(v_ks_1982_);
v___x_1993_ = lean_nat_add(v_numCollisions_1985_, v___x_1992_);
lean_dec(v_numCollisions_1985_);
v___x_1994_ = lean_nat_sub(v___x_1993_, v___x_1990_);
lean_dec(v___x_1993_);
v___x_1995_ = lean_nat_dec_le(v_maxDepth_1986_, v_x_1954_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1997_; 
lean_dec(v_x_1954_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 2, v___x_1994_);
lean_ctor_set(v___x_1988_, 0, v___x_1991_);
v___x_1997_ = v___x_1988_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v___x_1991_);
lean_ctor_set(v_reuseFailAlloc_1998_, 1, v_numNull_1984_);
lean_ctor_set(v_reuseFailAlloc_1998_, 2, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_1998_, 3, v_maxDepth_1986_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
else
{
lean_object* v___x_2000_; 
lean_dec(v_maxDepth_1986_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 3, v_x_1954_);
lean_ctor_set(v___x_1988_, 2, v___x_1994_);
lean_ctor_set(v___x_1988_, 0, v___x_1991_);
v___x_2000_ = v___x_1988_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v___x_1991_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v_numNull_1984_);
lean_ctor_set(v_reuseFailAlloc_2001_, 2, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_2001_, 3, v_x_1954_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(lean_object* v_x_2003_, lean_object* v_as_2004_, size_t v_i_2005_, size_t v_stop_2006_, lean_object* v_b_2007_){
_start:
{
lean_object* v___y_2009_; uint8_t v___x_2013_; 
v___x_2013_ = lean_usize_dec_eq(v_i_2005_, v_stop_2006_);
if (v___x_2013_ == 0)
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2014_ = lean_unsigned_to_nat(1u);
v___x_2015_ = lean_array_uget_borrowed(v_as_2004_, v_i_2005_);
switch(lean_obj_tag(v___x_2015_))
{
case 0:
{
v___y_2009_ = v_b_2007_;
goto v___jp_2008_;
}
case 1:
{
lean_object* v_node_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v_node_2016_ = lean_ctor_get(v___x_2015_, 0);
v___x_2017_ = lean_nat_add(v_x_2003_, v___x_2014_);
v___x_2018_ = l_Lean_PersistentHashMap_collectStats___redArg(v_node_2016_, v_b_2007_, v___x_2017_);
v___y_2009_ = v___x_2018_;
goto v___jp_2008_;
}
default: 
{
lean_object* v_numNodes_2019_; lean_object* v_numNull_2020_; lean_object* v_numCollisions_2021_; lean_object* v_maxDepth_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2030_; 
v_numNodes_2019_ = lean_ctor_get(v_b_2007_, 0);
v_numNull_2020_ = lean_ctor_get(v_b_2007_, 1);
v_numCollisions_2021_ = lean_ctor_get(v_b_2007_, 2);
v_maxDepth_2022_ = lean_ctor_get(v_b_2007_, 3);
v_isSharedCheck_2030_ = !lean_is_exclusive(v_b_2007_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2024_ = v_b_2007_;
v_isShared_2025_ = v_isSharedCheck_2030_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_maxDepth_2022_);
lean_inc(v_numCollisions_2021_);
lean_inc(v_numNull_2020_);
lean_inc(v_numNodes_2019_);
lean_dec(v_b_2007_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2030_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2026_; lean_object* v___x_2028_; 
v___x_2026_ = lean_nat_add(v_numNull_2020_, v___x_2014_);
lean_dec(v_numNull_2020_);
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 1, v___x_2026_);
v___x_2028_ = v___x_2024_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_numNodes_2019_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v___x_2026_);
lean_ctor_set(v_reuseFailAlloc_2029_, 2, v_numCollisions_2021_);
lean_ctor_set(v_reuseFailAlloc_2029_, 3, v_maxDepth_2022_);
v___x_2028_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
v___y_2009_ = v___x_2028_;
goto v___jp_2008_;
}
}
}
}
}
else
{
return v_b_2007_;
}
v___jp_2008_:
{
size_t v___x_2010_; size_t v___x_2011_; 
v___x_2010_ = ((size_t)1ULL);
v___x_2011_ = lean_usize_add(v_i_2005_, v___x_2010_);
v_i_2005_ = v___x_2011_;
v_b_2007_ = v___y_2009_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg___boxed(lean_object* v_x_2031_, lean_object* v_as_2032_, lean_object* v_i_2033_, lean_object* v_stop_2034_, lean_object* v_b_2035_){
_start:
{
size_t v_i_boxed_2036_; size_t v_stop_boxed_2037_; lean_object* v_res_2038_; 
v_i_boxed_2036_ = lean_unbox_usize(v_i_2033_);
lean_dec(v_i_2033_);
v_stop_boxed_2037_ = lean_unbox_usize(v_stop_2034_);
lean_dec(v_stop_2034_);
v_res_2038_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(v_x_2031_, v_as_2032_, v_i_boxed_2036_, v_stop_boxed_2037_, v_b_2035_);
lean_dec_ref(v_as_2032_);
lean_dec(v_x_2031_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___redArg___boxed(lean_object* v_x_2039_, lean_object* v_x_2040_, lean_object* v_x_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Lean_PersistentHashMap_collectStats___redArg(v_x_2039_, v_x_2040_, v_x_2041_);
lean_dec_ref(v_x_2039_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats(lean_object* v_00_u03b1_2043_, lean_object* v_00_u03b2_2044_, lean_object* v_x_2045_, lean_object* v_x_2046_, lean_object* v_x_2047_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_Lean_PersistentHashMap_collectStats___redArg(v_x_2045_, v_x_2046_, v_x_2047_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___boxed(lean_object* v_00_u03b1_2049_, lean_object* v_00_u03b2_2050_, lean_object* v_x_2051_, lean_object* v_x_2052_, lean_object* v_x_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l_Lean_PersistentHashMap_collectStats(v_00_u03b1_2049_, v_00_u03b2_2050_, v_x_2051_, v_x_2052_, v_x_2053_);
lean_dec_ref(v_x_2051_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0(lean_object* v_00_u03b1_2055_, lean_object* v_00_u03b2_2056_, lean_object* v_x_2057_, lean_object* v_as_2058_, size_t v_i_2059_, size_t v_stop_2060_, lean_object* v_b_2061_){
_start:
{
lean_object* v___x_2062_; 
v___x_2062_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(v_x_2057_, v_as_2058_, v_i_2059_, v_stop_2060_, v_b_2061_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___boxed(lean_object* v_00_u03b1_2063_, lean_object* v_00_u03b2_2064_, lean_object* v_x_2065_, lean_object* v_as_2066_, lean_object* v_i_2067_, lean_object* v_stop_2068_, lean_object* v_b_2069_){
_start:
{
size_t v_i_boxed_2070_; size_t v_stop_boxed_2071_; lean_object* v_res_2072_; 
v_i_boxed_2070_ = lean_unbox_usize(v_i_2067_);
lean_dec(v_i_2067_);
v_stop_boxed_2071_ = lean_unbox_usize(v_stop_2068_);
lean_dec(v_stop_2068_);
v_res_2072_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0(v_00_u03b1_2063_, v_00_u03b2_2064_, v_x_2065_, v_as_2066_, v_i_boxed_2070_, v_stop_boxed_2071_, v_b_2069_);
lean_dec_ref(v_as_2066_);
lean_dec(v_x_2065_);
return v_res_2072_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___redArg(lean_object* v_m_2075_){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2076_ = ((lean_object*)(l_Lean_PersistentHashMap_stats___redArg___closed__0));
v___x_2077_ = lean_unsigned_to_nat(1u);
v___x_2078_ = l_Lean_PersistentHashMap_collectStats___redArg(v_m_2075_, v___x_2076_, v___x_2077_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___redArg___boxed(lean_object* v_m_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_Lean_PersistentHashMap_stats___redArg(v_m_2079_);
lean_dec_ref(v_m_2079_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats(lean_object* v_00_u03b1_2081_, lean_object* v_00_u03b2_2082_, lean_object* v_x_2083_, lean_object* v_x_2084_, lean_object* v_m_2085_){
_start:
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lean_PersistentHashMap_stats___redArg(v_m_2085_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___boxed(lean_object* v_00_u03b1_2087_, lean_object* v_00_u03b2_2088_, lean_object* v_x_2089_, lean_object* v_x_2090_, lean_object* v_m_2091_){
_start:
{
lean_object* v_res_2092_; 
v_res_2092_ = l_Lean_PersistentHashMap_stats(v_00_u03b1_2087_, v_00_u03b2_2088_, v_x_2089_, v_x_2090_, v_m_2091_);
lean_dec_ref(v_m_2091_);
lean_dec_ref(v_x_2090_);
lean_dec_ref(v_x_2089_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Stats_toString(lean_object* v_s_2098_){
_start:
{
lean_object* v_numNodes_2099_; lean_object* v_numNull_2100_; lean_object* v_numCollisions_2101_; lean_object* v_maxDepth_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v_numNodes_2099_ = lean_ctor_get(v_s_2098_, 0);
lean_inc(v_numNodes_2099_);
v_numNull_2100_ = lean_ctor_get(v_s_2098_, 1);
lean_inc(v_numNull_2100_);
v_numCollisions_2101_ = lean_ctor_get(v_s_2098_, 2);
lean_inc(v_numCollisions_2101_);
v_maxDepth_2102_ = lean_ctor_get(v_s_2098_, 3);
lean_inc(v_maxDepth_2102_);
lean_dec_ref(v_s_2098_);
v___x_2103_ = ((lean_object*)(l_Lean_PersistentHashMap_Stats_toString___closed__0));
v___x_2104_ = l_Nat_reprFast(v_numNodes_2099_);
v___x_2105_ = lean_string_append(v___x_2103_, v___x_2104_);
lean_dec_ref(v___x_2104_);
v___x_2106_ = ((lean_object*)(l_Lean_PersistentHashMap_Stats_toString___closed__1));
v___x_2107_ = lean_string_append(v___x_2105_, v___x_2106_);
v___x_2108_ = l_Nat_reprFast(v_numNull_2100_);
v___x_2109_ = lean_string_append(v___x_2107_, v___x_2108_);
lean_dec_ref(v___x_2108_);
v___x_2110_ = ((lean_object*)(l_Lean_PersistentHashMap_Stats_toString___closed__2));
v___x_2111_ = lean_string_append(v___x_2109_, v___x_2110_);
v___x_2112_ = l_Nat_reprFast(v_numCollisions_2101_);
v___x_2113_ = lean_string_append(v___x_2111_, v___x_2112_);
lean_dec_ref(v___x_2112_);
v___x_2114_ = ((lean_object*)(l_Lean_PersistentHashMap_Stats_toString___closed__3));
v___x_2115_ = lean_string_append(v___x_2113_, v___x_2114_);
v___x_2116_ = l_Nat_reprFast(v_maxDepth_2102_);
v___x_2117_ = lean_string_append(v___x_2115_, v___x_2116_);
lean_dec_ref(v___x_2116_);
v___x_2118_ = ((lean_object*)(l_Lean_PersistentHashMap_Stats_toString___closed__4));
v___x_2119_ = lean_string_append(v___x_2117_, v___x_2118_);
return v___x_2119_;
}
}
lean_object* runtime_initialize_Init_Data_Array_BasicAux(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Except(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_PersistentHashMap(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_PersistentHashMap_shift = _init_l_Lean_PersistentHashMap_shift();
l_Lean_PersistentHashMap_branching = _init_l_Lean_PersistentHashMap_branching();
l_Lean_PersistentHashMap_maxDepth = _init_l_Lean_PersistentHashMap_maxDepth();
l_Lean_PersistentHashMap_maxCollisions = _init_l_Lean_PersistentHashMap_maxCollisions();
lean_mark_persistent(l_Lean_PersistentHashMap_maxCollisions);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_PersistentHashMap(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_BasicAux(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Control_Except(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_PersistentHashMap(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentHashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_PersistentHashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_PersistentHashMap(builtin);
}
#ifdef __cplusplus
}
#endif

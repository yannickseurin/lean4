// Lean compiler output
// Module: Lean.Data.PersistentArray
// Imports: public import Init.Data.Nat.Fold public import Init.Data.UInt.Basic import Init.Data.String.Defs import Init.Data.ToString.Macro import Init.Omega
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
lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_System_Platform_numBits;
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_node_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_node_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_leaf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_leaf_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedPersistentArrayNode_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArrayNode_isNode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_isNode___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArrayNode_isNode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_isNode___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentArray_initShift;
LEAN_EXPORT size_t l_Lean_PersistentArray_branching;
static lean_once_cell_t l_Lean_instInhabitedPersistentArray_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedPersistentArray_default___redArg___closed__0;
static lean_once_cell_t l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedPersistentArray_default___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedPersistentArray_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedPersistentArray_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_isEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_isEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_mkEmptyArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_mkEmptyArray___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray(lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentArray_mul2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mul2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentArray_div2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_div2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentArray_mod2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mod2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___redArg(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_setAux___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_setAux___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___redArg(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___redArg(size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_PersistentArray_mkNewTail___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentArray_mkNewTail___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentArray_mkNewTail___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewTail___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewTail(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_tooBig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_tooBig___closed__0;
static lean_once_cell_t l_Lean_PersistentArray_tooBig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_tooBig___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_tooBig;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_push(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg();
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray(lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_popLeaf___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_popLeaf___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_popLeaf___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_popLeaf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_pop___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_pop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instForInOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instForInOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PersistentArray_findSomeMAux___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentArray_findSomeMAux___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__0_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__1_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__2 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__2_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__3 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__3_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__4 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__4_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__5 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__5_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__6 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__6_value;
static const lean_ctor_object l_Lean_PersistentArray_foldl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__0_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__1_value)}};
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__7 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__7_value;
static const lean_ctor_object l_Lean_PersistentArray_foldl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__7_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__2_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__3_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__4_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__5_value)}};
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__8 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__8_value;
static const lean_ctor_object l_Lean_PersistentArray_foldl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__8_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__6_value)}};
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__9 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentArray_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_append___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_PersistentArray_instAppend___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentArray_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRev_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_any___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_any(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__2(lean_object*);
static const lean_closure_object l_Lean_PersistentArray_mapMAux___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_mapMAux___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_mapMAux___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentArray_mapMAux___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentArray_mapMAux___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_mapMAux___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_mapMAux___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentArray_mapMAux___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__0(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__1(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_PersistentArray_Stats_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "{nodes := "};
static const lean_object* l_Lean_PersistentArray_Stats_toString___closed__0 = (const lean_object*)&l_Lean_PersistentArray_Stats_toString___closed__0_value;
static const lean_string_object l_Lean_PersistentArray_Stats_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", depth := "};
static const lean_object* l_Lean_PersistentArray_Stats_toString___closed__1 = (const lean_object*)&l_Lean_PersistentArray_Stats_toString___closed__1_value;
static const lean_string_object l_Lean_PersistentArray_Stats_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ", tail size := "};
static const lean_object* l_Lean_PersistentArray_Stats_toString___closed__2 = (const lean_object*)&l_Lean_PersistentArray_Stats_toString___closed__2_value;
static const lean_string_object l_Lean_PersistentArray_Stats_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_PersistentArray_Stats_toString___closed__3 = (const lean_object*)&l_Lean_PersistentArray_Stats_toString___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_Stats_toString(lean_object*);
static const lean_closure_object l_Lean_PersistentArray_instToStringStats___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_Stats_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_instToStringStats___closed__0 = (const lean_object*)&l_Lean_PersistentArray_instToStringStats___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_PersistentArray_instToStringStats = (const lean_object*)&l_Lean_PersistentArray_instToStringStats___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPersistentArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPersistentArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toPArray_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toPArray_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___redArg(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___redArg___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_PersistentArrayNode_ctorIdx___redArg(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx(lean_object* v_00_u03b1_6_, lean_object* v_x_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_PersistentArrayNode_ctorIdx___redArg(v_x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___boxed(lean_object* v_00_u03b1_9_, lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_PersistentArrayNode_ctorIdx(v_00_u03b1_9_, v_x_10_);
lean_dec_ref(v_x_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim___redArg(lean_object* v_t_12_, lean_object* v_k_13_){
_start:
{
lean_object* v_cs_14_; lean_object* v___x_15_; 
v_cs_14_ = lean_ctor_get(v_t_12_, 0);
lean_inc_ref(v_cs_14_);
lean_dec_ref(v_t_12_);
v___x_15_ = lean_apply_1(v_k_13_, v_cs_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim(lean_object* v_00_u03b1_16_, lean_object* v_motive__1_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = l_Lean_PersistentArrayNode_ctorElim___redArg(v_t_19_, v_k_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim___boxed(lean_object* v_00_u03b1_23_, lean_object* v_motive__1_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_PersistentArrayNode_ctorElim(v_00_u03b1_23_, v_motive__1_24_, v_ctorIdx_25_, v_t_26_, v_h_27_, v_k_28_);
lean_dec(v_ctorIdx_25_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_node_elim___redArg(lean_object* v_t_30_, lean_object* v_node_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_PersistentArrayNode_ctorElim___redArg(v_t_30_, v_node_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_node_elim(lean_object* v_00_u03b1_33_, lean_object* v_motive__1_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_node_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_PersistentArrayNode_ctorElim___redArg(v_t_35_, v_node_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_leaf_elim___redArg(lean_object* v_t_39_, lean_object* v_leaf_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_PersistentArrayNode_ctorElim___redArg(v_t_39_, v_leaf_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_leaf_elim(lean_object* v_00_u03b1_42_, lean_object* v_motive__1_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_leaf_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_PersistentArrayNode_ctorElim___redArg(v_t_44_, v_leaf_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg(){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = ((lean_object*)(l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__1));
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg___boxed(lean_object* v___dummy_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v_res_55_;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object* v_00_u03b1_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode___redArg(){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode___redArg___boxed(lean_object* v___dummy_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_instInhabitedPersistentArrayNode___redArg();
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode(lean_object* v_a_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
return v___x_64_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArrayNode_isNode___redArg(lean_object* v_x_65_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
uint8_t v___x_66_; 
v___x_66_ = 1;
return v___x_66_;
}
else
{
uint8_t v___x_67_; 
v___x_67_ = 0;
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_isNode___redArg___boxed(lean_object* v_x_68_){
_start:
{
uint8_t v_res_69_; lean_object* v_r_70_; 
v_res_69_ = l_Lean_PersistentArrayNode_isNode___redArg(v_x_68_);
lean_dec_ref(v_x_68_);
v_r_70_ = lean_box(v_res_69_);
return v_r_70_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArrayNode_isNode(lean_object* v_00_u03b1_71_, lean_object* v_x_72_){
_start:
{
uint8_t v___x_73_; 
v___x_73_ = l_Lean_PersistentArrayNode_isNode___redArg(v_x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_isNode___boxed(lean_object* v_00_u03b1_74_, lean_object* v_x_75_){
_start:
{
uint8_t v_res_76_; lean_object* v_r_77_; 
v_res_76_ = l_Lean_PersistentArrayNode_isNode(v_00_u03b1_74_, v_x_75_);
lean_dec_ref(v_x_75_);
v_r_77_ = lean_box(v_res_76_);
return v_r_77_;
}
}
static size_t _init_l_Lean_PersistentArray_initShift(void){
_start:
{
size_t v___x_78_; 
v___x_78_ = ((size_t)5ULL);
return v___x_78_;
}
}
static size_t _init_l_Lean_PersistentArray_branching(void){
_start:
{
size_t v___x_79_; 
v___x_79_ = ((size_t)32ULL);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = lean_unsigned_to_nat(32u);
v___x_81_ = lean_mk_empty_array_with_capacity(v___x_80_);
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1(void){
_start:
{
size_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_83_ = ((size_t)5ULL);
v___x_84_ = lean_unsigned_to_nat(0u);
v___x_85_ = lean_unsigned_to_nat(32u);
v___x_86_ = lean_mk_empty_array_with_capacity(v___x_85_);
v___x_87_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__0, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__0_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__0);
v___x_88_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_86_);
lean_ctor_set(v___x_88_, 2, v___x_84_);
lean_ctor_set(v___x_88_, 3, v___x_84_);
lean_ctor_set_usize(v___x_88_, 4, v___x_83_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default___redArg(){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__1, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default___redArg___boxed(lean_object* v___dummy_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v_res_92_;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentArray_default___closed__0(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default(lean_object* v_00_u03b1_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___closed__0, &l_Lean_instInhabitedPersistentArray_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArray_default___closed__0);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray___redArg(){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___closed__0, &l_Lean_instInhabitedPersistentArray_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArray_default___closed__0);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray___redArg___boxed(lean_object* v___dummy_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_instInhabitedPersistentArray___redArg();
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray(lean_object* v_a_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___closed__0, &l_Lean_instInhabitedPersistentArray_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArray_default___closed__0);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty___redArg(){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = lean_unsigned_to_nat(32u);
v___x_104_ = lean_mk_empty_array_with_capacity(v___x_103_);
lean_dec_ref(v___x_104_);
v___x_105_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__1, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty___redArg___boxed(lean_object* v___dummy_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_PersistentArray_empty___redArg();
return v_res_107_;
}
}
static lean_object* _init_l_Lean_PersistentArray_empty___closed__0(void){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lean_PersistentArray_empty___redArg();
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty(lean_object* v_00_u03b1_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lean_PersistentArray_empty___closed__0, &l_Lean_PersistentArray_empty___closed__0_once, _init_l_Lean_PersistentArray_empty___closed__0);
return v___x_110_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object* v_a_111_){
_start:
{
lean_object* v_size_112_; lean_object* v___x_113_; uint8_t v___x_114_; 
v_size_112_ = lean_ctor_get(v_a_111_, 2);
v___x_113_ = lean_unsigned_to_nat(0u);
v___x_114_ = lean_nat_dec_eq(v_size_112_, v___x_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_isEmpty___redArg___boxed(lean_object* v_a_115_){
_start:
{
uint8_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l_Lean_PersistentArray_isEmpty___redArg(v_a_115_);
lean_dec_ref(v_a_115_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_isEmpty(lean_object* v_00_u03b1_118_, lean_object* v_a_119_){
_start:
{
uint8_t v___x_120_; 
v___x_120_ = l_Lean_PersistentArray_isEmpty___redArg(v_a_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_isEmpty___boxed(lean_object* v_00_u03b1_121_, lean_object* v_a_122_){
_start:
{
uint8_t v_res_123_; lean_object* v_r_124_; 
v_res_123_ = l_Lean_PersistentArray_isEmpty(v_00_u03b1_121_, v_a_122_);
lean_dec_ref(v_a_122_);
v_r_124_ = lean_box(v_res_123_);
return v_r_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray___redArg(){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(32u);
v___x_127_ = lean_mk_empty_array_with_capacity(v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray___redArg___boxed(lean_object* v___dummy_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lean_PersistentArray_mkEmptyArray___redArg();
return v_res_129_;
}
}
static lean_object* _init_l_Lean_PersistentArray_mkEmptyArray___closed__0(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_PersistentArray_mkEmptyArray___redArg();
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray(lean_object* v_00_u03b1_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_obj_once(&l_Lean_PersistentArray_mkEmptyArray___closed__0, &l_Lean_PersistentArray_mkEmptyArray___closed__0_once, _init_l_Lean_PersistentArray_mkEmptyArray___closed__0);
return v___x_132_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentArray_mul2Shift(size_t v_i_133_, size_t v_shift_134_){
_start:
{
size_t v___x_135_; 
v___x_135_ = lean_usize_shift_left(v_i_133_, v_shift_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mul2Shift___boxed(lean_object* v_i_136_, lean_object* v_shift_137_){
_start:
{
size_t v_i_boxed_138_; size_t v_shift_boxed_139_; size_t v_res_140_; lean_object* v_r_141_; 
v_i_boxed_138_ = lean_unbox_usize(v_i_136_);
lean_dec(v_i_136_);
v_shift_boxed_139_ = lean_unbox_usize(v_shift_137_);
lean_dec(v_shift_137_);
v_res_140_ = l_Lean_PersistentArray_mul2Shift(v_i_boxed_138_, v_shift_boxed_139_);
v_r_141_ = lean_box_usize(v_res_140_);
return v_r_141_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentArray_div2Shift(size_t v_i_142_, size_t v_shift_143_){
_start:
{
size_t v___x_144_; 
v___x_144_ = lean_usize_shift_right(v_i_142_, v_shift_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_div2Shift___boxed(lean_object* v_i_145_, lean_object* v_shift_146_){
_start:
{
size_t v_i_boxed_147_; size_t v_shift_boxed_148_; size_t v_res_149_; lean_object* v_r_150_; 
v_i_boxed_147_ = lean_unbox_usize(v_i_145_);
lean_dec(v_i_145_);
v_shift_boxed_148_ = lean_unbox_usize(v_shift_146_);
lean_dec(v_shift_146_);
v_res_149_ = l_Lean_PersistentArray_div2Shift(v_i_boxed_147_, v_shift_boxed_148_);
v_r_150_ = lean_box_usize(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentArray_mod2Shift(size_t v_i_151_, size_t v_shift_152_){
_start:
{
size_t v___x_153_; size_t v___x_154_; size_t v___x_155_; size_t v___x_156_; 
v___x_153_ = ((size_t)1ULL);
v___x_154_ = lean_usize_shift_left(v___x_153_, v_shift_152_);
v___x_155_ = lean_usize_sub(v___x_154_, v___x_153_);
v___x_156_ = lean_usize_land(v_i_151_, v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mod2Shift___boxed(lean_object* v_i_157_, lean_object* v_shift_158_){
_start:
{
size_t v_i_boxed_159_; size_t v_shift_boxed_160_; size_t v_res_161_; lean_object* v_r_162_; 
v_i_boxed_159_ = lean_unbox_usize(v_i_157_);
lean_dec(v_i_157_);
v_shift_boxed_160_ = lean_unbox_usize(v_shift_158_);
lean_dec(v_shift_158_);
v_res_161_ = l_Lean_PersistentArray_mod2Shift(v_i_boxed_159_, v_shift_boxed_160_);
v_r_162_ = lean_box_usize(v_res_161_);
return v_r_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___redArg(lean_object* v_inst_163_, lean_object* v_x_164_, size_t v_x_165_, size_t v_x_166_){
_start:
{
if (lean_obj_tag(v_x_164_) == 0)
{
lean_object* v_cs_167_; lean_object* v___x_168_; size_t v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; size_t v___x_172_; size_t v___x_173_; size_t v___x_174_; size_t v___x_175_; size_t v___x_176_; size_t v___x_177_; 
v_cs_167_ = lean_ctor_get(v_x_164_, 0);
v___x_168_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_169_ = lean_usize_shift_right(v_x_165_, v_x_166_);
v___x_170_ = lean_usize_to_nat(v___x_169_);
v___x_171_ = lean_array_get_borrowed(v___x_168_, v_cs_167_, v___x_170_);
lean_dec(v___x_170_);
v___x_172_ = ((size_t)1ULL);
v___x_173_ = lean_usize_shift_left(v___x_172_, v_x_166_);
v___x_174_ = lean_usize_sub(v___x_173_, v___x_172_);
v___x_175_ = lean_usize_land(v_x_165_, v___x_174_);
v___x_176_ = ((size_t)5ULL);
v___x_177_ = lean_usize_sub(v_x_166_, v___x_176_);
v_x_164_ = v___x_171_;
v_x_165_ = v___x_175_;
v_x_166_ = v___x_177_;
goto _start;
}
else
{
lean_object* v_vs_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_vs_179_ = lean_ctor_get(v_x_164_, 0);
v___x_180_ = lean_usize_to_nat(v_x_165_);
v___x_181_ = lean_array_get_borrowed(v_inst_163_, v_vs_179_, v___x_180_);
lean_dec(v___x_180_);
lean_inc(v___x_181_);
return v___x_181_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___redArg___boxed(lean_object* v_inst_182_, lean_object* v_x_183_, lean_object* v_x_184_, lean_object* v_x_185_){
_start:
{
size_t v_x_94__boxed_186_; size_t v_x_95__boxed_187_; lean_object* v_res_188_; 
v_x_94__boxed_186_ = lean_unbox_usize(v_x_184_);
lean_dec(v_x_184_);
v_x_95__boxed_187_ = lean_unbox_usize(v_x_185_);
lean_dec(v_x_185_);
v_res_188_ = l_Lean_PersistentArray_getAux___redArg(v_inst_182_, v_x_183_, v_x_94__boxed_186_, v_x_95__boxed_187_);
lean_dec_ref(v_x_183_);
lean_dec(v_inst_182_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux(lean_object* v_00_u03b1_189_, lean_object* v_inst_190_, lean_object* v_x_191_, size_t v_x_192_, size_t v_x_193_){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = l_Lean_PersistentArray_getAux___redArg(v_inst_190_, v_x_191_, v_x_192_, v_x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___boxed(lean_object* v_00_u03b1_195_, lean_object* v_inst_196_, lean_object* v_x_197_, lean_object* v_x_198_, lean_object* v_x_199_){
_start:
{
size_t v_x_136__boxed_200_; size_t v_x_137__boxed_201_; lean_object* v_res_202_; 
v_x_136__boxed_200_ = lean_unbox_usize(v_x_198_);
lean_dec(v_x_198_);
v_x_137__boxed_201_ = lean_unbox_usize(v_x_199_);
lean_dec(v_x_199_);
v_res_202_ = l_Lean_PersistentArray_getAux(v_00_u03b1_195_, v_inst_196_, v_x_197_, v_x_136__boxed_200_, v_x_137__boxed_201_);
lean_dec_ref(v_x_197_);
lean_dec(v_inst_196_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object* v_inst_203_, lean_object* v_t_204_, lean_object* v_i_205_){
_start:
{
lean_object* v_root_206_; lean_object* v_tail_207_; size_t v_shift_208_; lean_object* v_tailOff_209_; uint8_t v___x_210_; 
v_root_206_ = lean_ctor_get(v_t_204_, 0);
v_tail_207_ = lean_ctor_get(v_t_204_, 1);
v_shift_208_ = lean_ctor_get_usize(v_t_204_, 4);
v_tailOff_209_ = lean_ctor_get(v_t_204_, 3);
v___x_210_ = lean_nat_dec_le(v_tailOff_209_, v_i_205_);
if (v___x_210_ == 0)
{
size_t v___x_211_; lean_object* v___x_212_; 
v___x_211_ = lean_usize_of_nat(v_i_205_);
v___x_212_ = l_Lean_PersistentArray_getAux___redArg(v_inst_203_, v_root_206_, v___x_211_, v_shift_208_);
return v___x_212_;
}
else
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = lean_nat_sub(v_i_205_, v_tailOff_209_);
v___x_214_ = lean_array_get_borrowed(v_inst_203_, v_tail_207_, v___x_213_);
lean_dec(v___x_213_);
lean_inc(v___x_214_);
return v___x_214_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___redArg___boxed(lean_object* v_inst_215_, lean_object* v_t_216_, lean_object* v_i_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lean_PersistentArray_get_x21___redArg(v_inst_215_, v_t_216_, v_i_217_);
lean_dec(v_i_217_);
lean_dec_ref(v_t_216_);
lean_dec(v_inst_215_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21(lean_object* v_00_u03b1_219_, lean_object* v_inst_220_, lean_object* v_t_221_, lean_object* v_i_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Lean_PersistentArray_get_x21___redArg(v_inst_220_, v_t_221_, v_i_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___boxed(lean_object* v_00_u03b1_224_, lean_object* v_inst_225_, lean_object* v_t_226_, lean_object* v_i_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Lean_PersistentArray_get_x21(v_00_u03b1_224_, v_inst_225_, v_t_226_, v_i_227_);
lean_dec(v_i_227_);
lean_dec_ref(v_t_226_);
lean_dec(v_inst_225_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0(lean_object* v_inst_229_, lean_object* v_xs_230_, lean_object* v_i_231_, lean_object* v_x_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l_Lean_PersistentArray_get_x21___redArg(v_inst_229_, v_xs_230_, v_i_231_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0___boxed(lean_object* v_inst_234_, lean_object* v_xs_235_, lean_object* v_i_236_, lean_object* v_x_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0(v_inst_234_, v_xs_235_, v_i_236_, v_x_237_);
lean_dec(v_i_236_);
lean_dec_ref(v_xs_235_);
lean_dec(v_inst_234_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg(lean_object* v_inst_239_){
_start:
{
lean_object* v___f_240_; 
v___f_240_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_240_, 0, v_inst_239_);
return v___f_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited(lean_object* v_00_u03b1_241_, lean_object* v_inst_242_){
_start:
{
lean_object* v___f_243_; 
v___f_243_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_243_, 0, v_inst_242_);
return v___f_243_;
}
}
static lean_object* _init_l_Lean_PersistentArray_setAux___redArg___closed__0(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_box(0);
v___x_245_ = l_unsafeCast___redArg(v___x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___redArg(lean_object* v_x_246_, size_t v_x_247_, size_t v_x_248_, lean_object* v_x_249_){
_start:
{
if (lean_obj_tag(v_x_246_) == 0)
{
lean_object* v_cs_250_; size_t v_j_251_; lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; 
v_cs_250_ = lean_ctor_get(v_x_246_, 0);
v_j_251_ = lean_usize_shift_right(v_x_247_, v_x_248_);
v___x_252_ = lean_usize_to_nat(v_j_251_);
v___x_253_ = lean_array_get_size(v_cs_250_);
v___x_254_ = lean_nat_dec_lt(v___x_252_, v___x_253_);
if (v___x_254_ == 0)
{
lean_dec(v___x_252_);
lean_dec(v_x_249_);
return v_x_246_;
}
else
{
lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_272_; 
lean_inc_ref(v_cs_250_);
v_isSharedCheck_272_ = !lean_is_exclusive(v_x_246_);
if (v_isSharedCheck_272_ == 0)
{
lean_object* v_unused_273_; 
v_unused_273_ = lean_ctor_get(v_x_246_, 0);
lean_dec(v_unused_273_);
v___x_256_ = v_x_246_;
v_isShared_257_ = v_isSharedCheck_272_;
goto v_resetjp_255_;
}
else
{
lean_dec(v_x_246_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_272_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
size_t v___x_258_; size_t v___x_259_; size_t v___x_260_; size_t v_i_261_; size_t v___x_262_; size_t v_shift_263_; lean_object* v_v_264_; lean_object* v___x_265_; lean_object* v_xs_x27_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_270_; 
v___x_258_ = ((size_t)1ULL);
v___x_259_ = lean_usize_shift_left(v___x_258_, v_x_248_);
v___x_260_ = lean_usize_sub(v___x_259_, v___x_258_);
v_i_261_ = lean_usize_land(v_x_247_, v___x_260_);
v___x_262_ = ((size_t)5ULL);
v_shift_263_ = lean_usize_sub(v_x_248_, v___x_262_);
v_v_264_ = lean_array_fget(v_cs_250_, v___x_252_);
v___x_265_ = lean_obj_once(&l_Lean_PersistentArray_setAux___redArg___closed__0, &l_Lean_PersistentArray_setAux___redArg___closed__0_once, _init_l_Lean_PersistentArray_setAux___redArg___closed__0);
v_xs_x27_266_ = lean_array_fset(v_cs_250_, v___x_252_, v___x_265_);
v___x_267_ = l_Lean_PersistentArray_setAux___redArg(v_v_264_, v_i_261_, v_shift_263_, v_x_249_);
v___x_268_ = lean_array_fset(v_xs_x27_266_, v___x_252_, v___x_267_);
lean_dec(v___x_252_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 0, v___x_268_);
v___x_270_ = v___x_256_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v___x_268_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
else
{
lean_object* v_vs_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_283_; 
v_vs_274_ = lean_ctor_get(v_x_246_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v_x_246_);
if (v_isSharedCheck_283_ == 0)
{
v___x_276_ = v_x_246_;
v_isShared_277_ = v_isSharedCheck_283_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_vs_274_);
lean_dec(v_x_246_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_283_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_278_ = lean_usize_to_nat(v_x_247_);
v___x_279_ = lean_array_set(v_vs_274_, v___x_278_, v_x_249_);
lean_dec(v___x_278_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 0, v___x_279_);
v___x_281_ = v___x_276_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_279_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___redArg___boxed(lean_object* v_x_284_, lean_object* v_x_285_, lean_object* v_x_286_, lean_object* v_x_287_){
_start:
{
size_t v_x_86__boxed_288_; size_t v_x_87__boxed_289_; lean_object* v_res_290_; 
v_x_86__boxed_288_ = lean_unbox_usize(v_x_285_);
lean_dec(v_x_285_);
v_x_87__boxed_289_ = lean_unbox_usize(v_x_286_);
lean_dec(v_x_286_);
v_res_290_ = l_Lean_PersistentArray_setAux___redArg(v_x_284_, v_x_86__boxed_288_, v_x_87__boxed_289_, v_x_287_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux(lean_object* v_00_u03b1_291_, lean_object* v_x_292_, size_t v_x_293_, size_t v_x_294_, lean_object* v_x_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lean_PersistentArray_setAux___redArg(v_x_292_, v_x_293_, v_x_294_, v_x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___boxed(lean_object* v_00_u03b1_297_, lean_object* v_x_298_, lean_object* v_x_299_, lean_object* v_x_300_, lean_object* v_x_301_){
_start:
{
size_t v_x_158__boxed_302_; size_t v_x_159__boxed_303_; lean_object* v_res_304_; 
v_x_158__boxed_302_ = lean_unbox_usize(v_x_299_);
lean_dec(v_x_299_);
v_x_159__boxed_303_ = lean_unbox_usize(v_x_300_);
lean_dec(v_x_300_);
v_res_304_ = l_Lean_PersistentArray_setAux(v_00_u03b1_297_, v_x_298_, v_x_158__boxed_302_, v_x_159__boxed_303_, v_x_301_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___redArg(lean_object* v_t_305_, lean_object* v_i_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_root_308_; lean_object* v_tail_309_; lean_object* v_size_310_; size_t v_shift_311_; lean_object* v_tailOff_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_327_; 
v_root_308_ = lean_ctor_get(v_t_305_, 0);
v_tail_309_ = lean_ctor_get(v_t_305_, 1);
v_size_310_ = lean_ctor_get(v_t_305_, 2);
v_shift_311_ = lean_ctor_get_usize(v_t_305_, 4);
v_tailOff_312_ = lean_ctor_get(v_t_305_, 3);
v_isSharedCheck_327_ = !lean_is_exclusive(v_t_305_);
if (v_isSharedCheck_327_ == 0)
{
v___x_314_ = v_t_305_;
v_isShared_315_ = v_isSharedCheck_327_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_tailOff_312_);
lean_inc(v_size_310_);
lean_inc(v_tail_309_);
lean_inc(v_root_308_);
lean_dec(v_t_305_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_327_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
uint8_t v___x_316_; 
v___x_316_ = lean_nat_dec_le(v_tailOff_312_, v_i_306_);
if (v___x_316_ == 0)
{
size_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_317_ = lean_usize_of_nat(v_i_306_);
v___x_318_ = l_Lean_PersistentArray_setAux___redArg(v_root_308_, v___x_317_, v_shift_311_, v_a_307_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_318_);
v___x_320_ = v___x_314_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_tail_309_);
lean_ctor_set(v_reuseFailAlloc_321_, 2, v_size_310_);
lean_ctor_set(v_reuseFailAlloc_321_, 3, v_tailOff_312_);
lean_ctor_set_usize(v_reuseFailAlloc_321_, 4, v_shift_311_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
else
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_322_ = lean_nat_sub(v_i_306_, v_tailOff_312_);
v___x_323_ = lean_array_set(v_tail_309_, v___x_322_, v_a_307_);
lean_dec(v___x_322_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v___x_323_);
v___x_325_ = v___x_314_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_root_308_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_323_);
lean_ctor_set(v_reuseFailAlloc_326_, 2, v_size_310_);
lean_ctor_set(v_reuseFailAlloc_326_, 3, v_tailOff_312_);
lean_ctor_set_usize(v_reuseFailAlloc_326_, 4, v_shift_311_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___redArg___boxed(lean_object* v_t_328_, lean_object* v_i_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_PersistentArray_set___redArg(v_t_328_, v_i_329_, v_a_330_);
lean_dec(v_i_329_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set(lean_object* v_00_u03b1_332_, lean_object* v_t_333_, lean_object* v_i_334_, lean_object* v_a_335_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l_Lean_PersistentArray_set___redArg(v_t_333_, v_i_334_, v_a_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___boxed(lean_object* v_00_u03b1_337_, lean_object* v_t_338_, lean_object* v_i_339_, lean_object* v_a_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_PersistentArray_set(v_00_u03b1_337_, v_t_338_, v_i_339_, v_a_340_);
lean_dec(v_i_339_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___redArg(lean_object* v_f_342_, lean_object* v_x_343_, size_t v_x_344_, size_t v_x_345_){
_start:
{
if (lean_obj_tag(v_x_343_) == 0)
{
lean_object* v_cs_346_; size_t v_j_347_; lean_object* v___x_348_; lean_object* v___x_349_; uint8_t v___x_350_; 
v_cs_346_ = lean_ctor_get(v_x_343_, 0);
v_j_347_ = lean_usize_shift_right(v_x_344_, v_x_345_);
v___x_348_ = lean_usize_to_nat(v_j_347_);
v___x_349_ = lean_array_get_size(v_cs_346_);
v___x_350_ = lean_nat_dec_lt(v___x_348_, v___x_349_);
if (v___x_350_ == 0)
{
lean_dec(v___x_348_);
lean_dec(v_f_342_);
return v_x_343_;
}
else
{
lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_368_; 
lean_inc_ref(v_cs_346_);
v_isSharedCheck_368_ = !lean_is_exclusive(v_x_343_);
if (v_isSharedCheck_368_ == 0)
{
lean_object* v_unused_369_; 
v_unused_369_ = lean_ctor_get(v_x_343_, 0);
lean_dec(v_unused_369_);
v___x_352_ = v_x_343_;
v_isShared_353_ = v_isSharedCheck_368_;
goto v_resetjp_351_;
}
else
{
lean_dec(v_x_343_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_368_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
size_t v___x_354_; size_t v___x_355_; size_t v___x_356_; size_t v_i_357_; size_t v___x_358_; size_t v_shift_359_; lean_object* v_v_360_; lean_object* v___x_361_; lean_object* v_xs_x27_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_354_ = ((size_t)1ULL);
v___x_355_ = lean_usize_shift_left(v___x_354_, v_x_345_);
v___x_356_ = lean_usize_sub(v___x_355_, v___x_354_);
v_i_357_ = lean_usize_land(v_x_344_, v___x_356_);
v___x_358_ = ((size_t)5ULL);
v_shift_359_ = lean_usize_sub(v_x_345_, v___x_358_);
v_v_360_ = lean_array_fget(v_cs_346_, v___x_348_);
v___x_361_ = lean_obj_once(&l_Lean_PersistentArray_setAux___redArg___closed__0, &l_Lean_PersistentArray_setAux___redArg___closed__0_once, _init_l_Lean_PersistentArray_setAux___redArg___closed__0);
v_xs_x27_362_ = lean_array_fset(v_cs_346_, v___x_348_, v___x_361_);
v___x_363_ = l_Lean_PersistentArray_modifyAux___redArg(v_f_342_, v_v_360_, v_i_357_, v_shift_359_);
v___x_364_ = lean_array_fset(v_xs_x27_362_, v___x_348_, v___x_363_);
lean_dec(v___x_348_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_364_);
v___x_366_ = v___x_352_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
else
{
lean_object* v_vs_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v_vs_370_ = lean_ctor_get(v_x_343_, 0);
v___x_371_ = lean_usize_to_nat(v_x_344_);
v___x_372_ = lean_array_get_size(v_vs_370_);
v___x_373_ = lean_nat_dec_lt(v___x_371_, v___x_372_);
if (v___x_373_ == 0)
{
lean_dec(v___x_371_);
lean_dec(v_f_342_);
return v_x_343_;
}
else
{
lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_385_; 
lean_inc_ref(v_vs_370_);
v_isSharedCheck_385_ = !lean_is_exclusive(v_x_343_);
if (v_isSharedCheck_385_ == 0)
{
lean_object* v_unused_386_; 
v_unused_386_ = lean_ctor_get(v_x_343_, 0);
lean_dec(v_unused_386_);
v___x_375_ = v_x_343_;
v_isShared_376_ = v_isSharedCheck_385_;
goto v_resetjp_374_;
}
else
{
lean_dec(v_x_343_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_385_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v_v_377_; lean_object* v___x_378_; lean_object* v_xs_x27_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_383_; 
v_v_377_ = lean_array_fget(v_vs_370_, v___x_371_);
v___x_378_ = lean_obj_once(&l_Lean_PersistentArray_setAux___redArg___closed__0, &l_Lean_PersistentArray_setAux___redArg___closed__0_once, _init_l_Lean_PersistentArray_setAux___redArg___closed__0);
v_xs_x27_379_ = lean_array_fset(v_vs_370_, v___x_371_, v___x_378_);
v___x_380_ = lean_apply_1(v_f_342_, v_v_377_);
v___x_381_ = lean_array_fset(v_xs_x27_379_, v___x_371_, v___x_380_);
lean_dec(v___x_371_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_381_);
v___x_383_ = v___x_375_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___redArg___boxed(lean_object* v_f_387_, lean_object* v_x_388_, lean_object* v_x_389_, lean_object* v_x_390_){
_start:
{
size_t v_x_106__boxed_391_; size_t v_x_107__boxed_392_; lean_object* v_res_393_; 
v_x_106__boxed_391_ = lean_unbox_usize(v_x_389_);
lean_dec(v_x_389_);
v_x_107__boxed_392_ = lean_unbox_usize(v_x_390_);
lean_dec(v_x_390_);
v_res_393_ = l_Lean_PersistentArray_modifyAux___redArg(v_f_387_, v_x_388_, v_x_106__boxed_391_, v_x_107__boxed_392_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux(lean_object* v_00_u03b1_394_, lean_object* v_inst_395_, lean_object* v_f_396_, lean_object* v_x_397_, size_t v_x_398_, size_t v_x_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Lean_PersistentArray_modifyAux___redArg(v_f_396_, v_x_397_, v_x_398_, v_x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___boxed(lean_object* v_00_u03b1_401_, lean_object* v_inst_402_, lean_object* v_f_403_, lean_object* v_x_404_, lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
size_t v_x_186__boxed_407_; size_t v_x_187__boxed_408_; lean_object* v_res_409_; 
v_x_186__boxed_407_ = lean_unbox_usize(v_x_405_);
lean_dec(v_x_405_);
v_x_187__boxed_408_ = lean_unbox_usize(v_x_406_);
lean_dec(v_x_406_);
v_res_409_ = l_Lean_PersistentArray_modifyAux(v_00_u03b1_401_, v_inst_402_, v_f_403_, v_x_404_, v_x_186__boxed_407_, v_x_187__boxed_408_);
lean_dec(v_inst_402_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___redArg(lean_object* v_t_410_, lean_object* v_i_411_, lean_object* v_f_412_){
_start:
{
lean_object* v_root_413_; lean_object* v_tail_414_; lean_object* v_size_415_; size_t v_shift_416_; lean_object* v_tailOff_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_441_; 
v_root_413_ = lean_ctor_get(v_t_410_, 0);
v_tail_414_ = lean_ctor_get(v_t_410_, 1);
v_size_415_ = lean_ctor_get(v_t_410_, 2);
v_shift_416_ = lean_ctor_get_usize(v_t_410_, 4);
v_tailOff_417_ = lean_ctor_get(v_t_410_, 3);
v_isSharedCheck_441_ = !lean_is_exclusive(v_t_410_);
if (v_isSharedCheck_441_ == 0)
{
v___x_419_ = v_t_410_;
v_isShared_420_ = v_isSharedCheck_441_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_tailOff_417_);
lean_inc(v_size_415_);
lean_inc(v_tail_414_);
lean_inc(v_root_413_);
lean_dec(v_t_410_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_441_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
uint8_t v___x_421_; 
v___x_421_ = lean_nat_dec_le(v_tailOff_417_, v_i_411_);
if (v___x_421_ == 0)
{
size_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_422_ = lean_usize_of_nat(v_i_411_);
v___x_423_ = l_Lean_PersistentArray_modifyAux___redArg(v_f_412_, v_root_413_, v___x_422_, v_shift_416_);
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 0, v___x_423_);
v___x_425_ = v___x_419_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_423_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v_tail_414_);
lean_ctor_set(v_reuseFailAlloc_426_, 2, v_size_415_);
lean_ctor_set(v_reuseFailAlloc_426_, 3, v_tailOff_417_);
lean_ctor_set_usize(v_reuseFailAlloc_426_, 4, v_shift_416_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
else
{
lean_object* v___x_427_; lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_427_ = lean_nat_sub(v_i_411_, v_tailOff_417_);
v___x_428_ = lean_array_get_size(v_tail_414_);
v___x_429_ = lean_nat_dec_lt(v___x_427_, v___x_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_431_; 
lean_dec(v___x_427_);
lean_dec(v_f_412_);
if (v_isShared_420_ == 0)
{
v___x_431_ = v___x_419_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_root_413_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_tail_414_);
lean_ctor_set(v_reuseFailAlloc_432_, 2, v_size_415_);
lean_ctor_set(v_reuseFailAlloc_432_, 3, v_tailOff_417_);
lean_ctor_set_usize(v_reuseFailAlloc_432_, 4, v_shift_416_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
else
{
lean_object* v_v_433_; lean_object* v___x_434_; lean_object* v_xs_x27_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_439_; 
v_v_433_ = lean_array_fget(v_tail_414_, v___x_427_);
v___x_434_ = lean_obj_once(&l_Lean_PersistentArray_setAux___redArg___closed__0, &l_Lean_PersistentArray_setAux___redArg___closed__0_once, _init_l_Lean_PersistentArray_setAux___redArg___closed__0);
v_xs_x27_435_ = lean_array_fset(v_tail_414_, v___x_427_, v___x_434_);
v___x_436_ = lean_apply_1(v_f_412_, v_v_433_);
v___x_437_ = lean_array_fset(v_xs_x27_435_, v___x_427_, v___x_436_);
lean_dec(v___x_427_);
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 1, v___x_437_);
v___x_439_ = v___x_419_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_root_413_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v___x_437_);
lean_ctor_set(v_reuseFailAlloc_440_, 2, v_size_415_);
lean_ctor_set(v_reuseFailAlloc_440_, 3, v_tailOff_417_);
lean_ctor_set_usize(v_reuseFailAlloc_440_, 4, v_shift_416_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___redArg___boxed(lean_object* v_t_442_, lean_object* v_i_443_, lean_object* v_f_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_PersistentArray_modify___redArg(v_t_442_, v_i_443_, v_f_444_);
lean_dec(v_i_443_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify(lean_object* v_00_u03b1_446_, lean_object* v_inst_447_, lean_object* v_t_448_, lean_object* v_i_449_, lean_object* v_f_450_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lean_PersistentArray_modify___redArg(v_t_448_, v_i_449_, v_f_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___boxed(lean_object* v_00_u03b1_452_, lean_object* v_inst_453_, lean_object* v_t_454_, lean_object* v_i_455_, lean_object* v_f_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_PersistentArray_modify(v_00_u03b1_452_, v_inst_453_, v_t_454_, v_i_455_, v_f_456_);
lean_dec(v_i_455_);
lean_dec(v_inst_453_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___redArg(size_t v_shift_458_, lean_object* v_a_459_){
_start:
{
size_t v___x_460_; uint8_t v___x_461_; 
v___x_460_ = ((size_t)0ULL);
v___x_461_ = lean_usize_dec_eq(v_shift_458_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; size_t v___x_463_; size_t v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_462_ = lean_obj_once(&l_Lean_PersistentArray_mkEmptyArray___closed__0, &l_Lean_PersistentArray_mkEmptyArray___closed__0_once, _init_l_Lean_PersistentArray_mkEmptyArray___closed__0);
v___x_463_ = ((size_t)5ULL);
v___x_464_ = lean_usize_sub(v_shift_458_, v___x_463_);
v___x_465_ = l_Lean_PersistentArray_mkNewPath___redArg(v___x_464_, v_a_459_);
v___x_466_ = lean_array_push(v___x_462_, v___x_465_);
v___x_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
return v___x_467_;
}
else
{
lean_object* v___x_468_; 
v___x_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_468_, 0, v_a_459_);
return v___x_468_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___redArg___boxed(lean_object* v_shift_469_, lean_object* v_a_470_){
_start:
{
size_t v_shift_boxed_471_; lean_object* v_res_472_; 
v_shift_boxed_471_ = lean_unbox_usize(v_shift_469_);
lean_dec(v_shift_469_);
v_res_472_ = l_Lean_PersistentArray_mkNewPath___redArg(v_shift_boxed_471_, v_a_470_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath(lean_object* v_00_u03b1_473_, size_t v_shift_474_, lean_object* v_a_475_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = l_Lean_PersistentArray_mkNewPath___redArg(v_shift_474_, v_a_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___boxed(lean_object* v_00_u03b1_477_, lean_object* v_shift_478_, lean_object* v_a_479_){
_start:
{
size_t v_shift_boxed_480_; lean_object* v_res_481_; 
v_shift_boxed_480_ = lean_unbox_usize(v_shift_478_);
lean_dec(v_shift_478_);
v_res_481_ = l_Lean_PersistentArray_mkNewPath(v_00_u03b1_477_, v_shift_boxed_480_, v_a_479_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___redArg(lean_object* v_x_482_, size_t v_x_483_, size_t v_x_484_, lean_object* v_x_485_){
_start:
{
if (lean_obj_tag(v_x_482_) == 0)
{
lean_object* v_cs_486_; size_t v___x_487_; uint8_t v___x_488_; 
v_cs_486_ = lean_ctor_get(v_x_482_, 0);
v___x_487_ = ((size_t)32ULL);
v___x_488_ = lean_usize_dec_lt(v_x_483_, v___x_487_);
if (v___x_488_ == 0)
{
size_t v_j_489_; size_t v___x_490_; size_t v___x_491_; size_t v___x_492_; size_t v_shift_493_; lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v_j_489_ = lean_usize_shift_right(v_x_483_, v_x_484_);
v___x_490_ = ((size_t)1ULL);
v___x_491_ = lean_usize_shift_left(v___x_490_, v_x_484_);
v___x_492_ = ((size_t)5ULL);
v_shift_493_ = lean_usize_sub(v_x_484_, v___x_492_);
v___x_494_ = lean_usize_to_nat(v_j_489_);
v___x_495_ = lean_array_get_size(v_cs_486_);
v___x_496_ = lean_nat_dec_lt(v___x_494_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_505_; 
lean_inc_ref(v_cs_486_);
lean_dec(v___x_494_);
v_isSharedCheck_505_ = !lean_is_exclusive(v_x_482_);
if (v_isSharedCheck_505_ == 0)
{
lean_object* v_unused_506_; 
v_unused_506_ = lean_ctor_get(v_x_482_, 0);
lean_dec(v_unused_506_);
v___x_498_ = v_x_482_;
v_isShared_499_ = v_isSharedCheck_505_;
goto v_resetjp_497_;
}
else
{
lean_dec(v_x_482_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_505_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_500_ = l_Lean_PersistentArray_mkNewPath___redArg(v_shift_493_, v_x_485_);
v___x_501_ = lean_array_push(v_cs_486_, v___x_500_);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_501_);
v___x_503_ = v___x_498_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
else
{
if (v___x_496_ == 0)
{
lean_dec(v___x_494_);
lean_dec_ref(v_x_485_);
return v_x_482_;
}
else
{
lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_520_; 
lean_inc_ref(v_cs_486_);
v_isSharedCheck_520_ = !lean_is_exclusive(v_x_482_);
if (v_isSharedCheck_520_ == 0)
{
lean_object* v_unused_521_; 
v_unused_521_ = lean_ctor_get(v_x_482_, 0);
lean_dec(v_unused_521_);
v___x_508_ = v_x_482_;
v_isShared_509_ = v_isSharedCheck_520_;
goto v_resetjp_507_;
}
else
{
lean_dec(v_x_482_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_520_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
size_t v___x_510_; size_t v_i_511_; lean_object* v_v_512_; lean_object* v___x_513_; lean_object* v_xs_x27_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_518_; 
v___x_510_ = lean_usize_sub(v___x_491_, v___x_490_);
v_i_511_ = lean_usize_land(v_x_483_, v___x_510_);
v_v_512_ = lean_array_fget(v_cs_486_, v___x_494_);
v___x_513_ = lean_obj_once(&l_Lean_PersistentArray_setAux___redArg___closed__0, &l_Lean_PersistentArray_setAux___redArg___closed__0_once, _init_l_Lean_PersistentArray_setAux___redArg___closed__0);
v_xs_x27_514_ = lean_array_fset(v_cs_486_, v___x_494_, v___x_513_);
v___x_515_ = l_Lean_PersistentArray_insertNewLeaf___redArg(v_v_512_, v_i_511_, v_shift_493_, v_x_485_);
v___x_516_ = lean_array_fset(v_xs_x27_514_, v___x_494_, v___x_515_);
lean_dec(v___x_494_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v___x_516_);
v___x_518_ = v___x_508_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v___x_516_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
}
}
else
{
lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_530_; 
lean_inc_ref(v_cs_486_);
v_isSharedCheck_530_ = !lean_is_exclusive(v_x_482_);
if (v_isSharedCheck_530_ == 0)
{
lean_object* v_unused_531_; 
v_unused_531_ = lean_ctor_get(v_x_482_, 0);
lean_dec(v_unused_531_);
v___x_523_ = v_x_482_;
v_isShared_524_ = v_isSharedCheck_530_;
goto v_resetjp_522_;
}
else
{
lean_dec(v_x_482_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_530_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set_tag(v___x_523_, 1);
lean_ctor_set(v___x_523_, 0, v_x_485_);
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_x_485_);
v___x_526_ = v_reuseFailAlloc_529_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = lean_array_push(v_cs_486_, v___x_526_);
v___x_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
return v___x_528_;
}
}
}
}
else
{
lean_dec_ref(v_x_485_);
return v_x_482_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___redArg___boxed(lean_object* v_x_532_, lean_object* v_x_533_, lean_object* v_x_534_, lean_object* v_x_535_){
_start:
{
size_t v_x_107__boxed_536_; size_t v_x_108__boxed_537_; lean_object* v_res_538_; 
v_x_107__boxed_536_ = lean_unbox_usize(v_x_533_);
lean_dec(v_x_533_);
v_x_108__boxed_537_ = lean_unbox_usize(v_x_534_);
lean_dec(v_x_534_);
v_res_538_ = l_Lean_PersistentArray_insertNewLeaf___redArg(v_x_532_, v_x_107__boxed_536_, v_x_108__boxed_537_, v_x_535_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf(lean_object* v_00_u03b1_539_, lean_object* v_x_540_, size_t v_x_541_, size_t v_x_542_, lean_object* v_x_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_PersistentArray_insertNewLeaf___redArg(v_x_540_, v_x_541_, v_x_542_, v_x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___boxed(lean_object* v_00_u03b1_545_, lean_object* v_x_546_, lean_object* v_x_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
size_t v_x_202__boxed_550_; size_t v_x_203__boxed_551_; lean_object* v_res_552_; 
v_x_202__boxed_550_ = lean_unbox_usize(v_x_547_);
lean_dec(v_x_547_);
v_x_203__boxed_551_ = lean_unbox_usize(v_x_548_);
lean_dec(v_x_548_);
v_res_552_ = l_Lean_PersistentArray_insertNewLeaf(v_00_u03b1_545_, v_x_546_, v_x_202__boxed_550_, v_x_203__boxed_551_, v_x_549_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewTail___redArg(lean_object* v_t_555_){
_start:
{
lean_object* v_root_556_; lean_object* v_tail_557_; lean_object* v_size_558_; size_t v_shift_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_586_; 
v_root_556_ = lean_ctor_get(v_t_555_, 0);
v_tail_557_ = lean_ctor_get(v_t_555_, 1);
v_size_558_ = lean_ctor_get(v_t_555_, 2);
v_shift_559_ = lean_ctor_get_usize(v_t_555_, 4);
v_isSharedCheck_586_ = !lean_is_exclusive(v_t_555_);
if (v_isSharedCheck_586_ == 0)
{
lean_object* v_unused_587_; 
v_unused_587_ = lean_ctor_get(v_t_555_, 3);
lean_dec(v_unused_587_);
v___x_561_ = v_t_555_;
v_isShared_562_ = v_isSharedCheck_586_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_size_558_);
lean_inc(v_tail_557_);
lean_inc(v_root_556_);
lean_dec(v_t_555_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_586_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
size_t v___x_563_; size_t v___x_564_; size_t v___x_565_; size_t v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_563_ = ((size_t)1ULL);
v___x_564_ = ((size_t)5ULL);
v___x_565_ = lean_usize_add(v_shift_559_, v___x_564_);
v___x_566_ = lean_usize_shift_left(v___x_563_, v___x_565_);
v___x_567_ = lean_usize_to_nat(v___x_566_);
v___x_568_ = lean_nat_dec_le(v_size_558_, v___x_567_);
lean_dec(v___x_567_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; lean_object* v_n_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_569_ = lean_obj_once(&l_Lean_PersistentArray_mkEmptyArray___closed__0, &l_Lean_PersistentArray_mkEmptyArray___closed__0_once, _init_l_Lean_PersistentArray_mkEmptyArray___closed__0);
v_n_570_ = lean_array_push(v___x_569_, v_root_556_);
v___x_571_ = l_Lean_PersistentArray_mkNewPath___redArg(v_shift_559_, v_tail_557_);
v___x_572_ = lean_array_push(v_n_570_, v___x_571_);
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
v___x_574_ = ((lean_object*)(l_Lean_PersistentArray_mkNewTail___redArg___closed__0));
lean_inc(v_size_558_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 3, v_size_558_);
lean_ctor_set(v___x_561_, 1, v___x_574_);
lean_ctor_set(v___x_561_, 0, v___x_573_);
v___x_576_ = v___x_561_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v___x_574_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_size_558_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v_size_558_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_ctor_set_usize(v___x_576_, 4, v___x_565_);
return v___x_576_;
}
}
else
{
lean_object* v___x_578_; lean_object* v___x_579_; size_t v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_578_ = lean_unsigned_to_nat(1u);
v___x_579_ = lean_nat_sub(v_size_558_, v___x_578_);
v___x_580_ = lean_usize_of_nat(v___x_579_);
lean_dec(v___x_579_);
v___x_581_ = l_Lean_PersistentArray_insertNewLeaf___redArg(v_root_556_, v___x_580_, v_shift_559_, v_tail_557_);
v___x_582_ = lean_obj_once(&l_Lean_PersistentArray_mkEmptyArray___closed__0, &l_Lean_PersistentArray_mkEmptyArray___closed__0_once, _init_l_Lean_PersistentArray_mkEmptyArray___closed__0);
lean_inc(v_size_558_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 3, v_size_558_);
lean_ctor_set(v___x_561_, 1, v___x_582_);
lean_ctor_set(v___x_561_, 0, v___x_581_);
v___x_584_ = v___x_561_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_581_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_585_, 2, v_size_558_);
lean_ctor_set(v_reuseFailAlloc_585_, 3, v_size_558_);
lean_ctor_set_usize(v_reuseFailAlloc_585_, 4, v_shift_559_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewTail(lean_object* v_00_u03b1_588_, lean_object* v_t_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_PersistentArray_mkNewTail___redArg(v_t_589_);
return v___x_590_;
}
}
static lean_object* _init_l_Lean_PersistentArray_tooBig___closed__0(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_591_ = l_System_Platform_numBits;
v___x_592_ = lean_unsigned_to_nat(2u);
v___x_593_ = lean_nat_pow(v___x_592_, v___x_591_);
return v___x_593_;
}
}
static lean_object* _init_l_Lean_PersistentArray_tooBig___closed__1(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_594_ = lean_unsigned_to_nat(3u);
v___x_595_ = lean_obj_once(&l_Lean_PersistentArray_tooBig___closed__0, &l_Lean_PersistentArray_tooBig___closed__0_once, _init_l_Lean_PersistentArray_tooBig___closed__0);
v___x_596_ = lean_nat_shiftr(v___x_595_, v___x_594_);
return v___x_596_;
}
}
static lean_object* _init_l_Lean_PersistentArray_tooBig(void){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lean_obj_once(&l_Lean_PersistentArray_tooBig___closed__1, &l_Lean_PersistentArray_tooBig___closed__1_once, _init_l_Lean_PersistentArray_tooBig___closed__1);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_push___redArg(lean_object* v_t_598_, lean_object* v_a_599_){
_start:
{
lean_object* v_root_600_; lean_object* v_tail_601_; lean_object* v_size_602_; size_t v_shift_603_; lean_object* v_tailOff_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_620_; 
v_root_600_ = lean_ctor_get(v_t_598_, 0);
v_tail_601_ = lean_ctor_get(v_t_598_, 1);
v_size_602_ = lean_ctor_get(v_t_598_, 2);
v_shift_603_ = lean_ctor_get_usize(v_t_598_, 4);
v_tailOff_604_ = lean_ctor_get(v_t_598_, 3);
v_isSharedCheck_620_ = !lean_is_exclusive(v_t_598_);
if (v_isSharedCheck_620_ == 0)
{
v___x_606_ = v_t_598_;
v_isShared_607_ = v_isSharedCheck_620_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_tailOff_604_);
lean_inc(v_size_602_);
lean_inc(v_tail_601_);
lean_inc(v_root_600_);
lean_dec(v_t_598_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_620_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v_r_612_; 
v___x_608_ = lean_array_push(v_tail_601_, v_a_599_);
v___x_609_ = lean_unsigned_to_nat(1u);
v___x_610_ = lean_nat_add(v_size_602_, v___x_609_);
lean_inc_ref(v___x_608_);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 2, v___x_610_);
lean_ctor_set(v___x_606_, 1, v___x_608_);
v_r_612_ = v___x_606_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_root_600_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v___x_608_);
lean_ctor_set(v_reuseFailAlloc_619_, 2, v___x_610_);
lean_ctor_set(v_reuseFailAlloc_619_, 3, v_tailOff_604_);
lean_ctor_set_usize(v_reuseFailAlloc_619_, 4, v_shift_603_);
v_r_612_ = v_reuseFailAlloc_619_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_613_; lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_613_ = lean_array_get_size(v___x_608_);
lean_dec_ref(v___x_608_);
v___x_614_ = lean_unsigned_to_nat(32u);
v___x_615_ = lean_nat_dec_lt(v___x_613_, v___x_614_);
if (v___x_615_ == 0)
{
lean_object* v___x_616_; uint8_t v___x_617_; 
v___x_616_ = l_Lean_PersistentArray_tooBig;
v___x_617_ = lean_nat_dec_le(v___x_616_, v_size_602_);
lean_dec(v_size_602_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; 
v___x_618_ = l_Lean_PersistentArray_mkNewTail___redArg(v_r_612_);
return v___x_618_;
}
else
{
return v_r_612_;
}
}
else
{
lean_dec(v_size_602_);
return v_r_612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_push(lean_object* v_00_u03b1_621_, lean_object* v_t_622_, lean_object* v_a_623_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Lean_PersistentArray_push___redArg(v_t_622_, v_a_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg(){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = lean_unsigned_to_nat(32u);
v___x_627_ = lean_mk_empty_array_with_capacity(v___x_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg___boxed(lean_object* v___dummy_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg();
return v_res_629_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0(void){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg();
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray(lean_object* v_00_u03b1_631_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0);
return v___x_632_;
}
}
static lean_object* _init_l_Lean_PersistentArray_popLeaf___redArg___closed__0(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_633_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0);
v___x_634_ = lean_box(0);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
lean_ctor_set(v___x_635_, 1, v___x_633_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_popLeaf___redArg(lean_object* v_x_636_){
_start:
{
if (lean_obj_tag(v_x_636_) == 0)
{
lean_object* v_cs_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_687_; 
v_cs_637_ = lean_ctor_get(v_x_636_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v_x_636_);
if (v_isSharedCheck_687_ == 0)
{
v___x_639_ = v_x_636_;
v_isShared_640_ = v_isSharedCheck_687_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_cs_637_);
lean_dec(v_x_636_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_687_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_641_; lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_641_ = lean_array_get_size(v_cs_637_);
v___x_642_ = lean_unsigned_to_nat(0u);
v___x_643_ = lean_nat_dec_eq(v___x_641_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; lean_object* v_idx_645_; lean_object* v_last_646_; lean_object* v___x_647_; lean_object* v_fst_648_; 
v___x_644_ = lean_unsigned_to_nat(1u);
v_idx_645_ = lean_nat_sub(v___x_641_, v___x_644_);
v_last_646_ = lean_array_fget_borrowed(v_cs_637_, v_idx_645_);
lean_inc(v_last_646_);
v___x_647_ = l_Lean_PersistentArray_popLeaf___redArg(v_last_646_);
v_fst_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_fst_648_);
if (lean_obj_tag(v_fst_648_) == 0)
{
lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_656_; 
lean_dec(v_idx_645_);
lean_del_object(v___x_639_);
lean_dec_ref(v_cs_637_);
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_656_ == 0)
{
lean_object* v_unused_657_; lean_object* v_unused_658_; 
v_unused_657_ = lean_ctor_get(v___x_647_, 1);
lean_dec(v_unused_657_);
v_unused_658_ = lean_ctor_get(v___x_647_, 0);
lean_dec(v_unused_658_);
v___x_650_ = v___x_647_;
v_isShared_651_ = v_isSharedCheck_656_;
goto v_resetjp_649_;
}
else
{
lean_dec(v___x_647_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_656_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_654_; 
v___x_652_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 1, v___x_652_);
v___x_654_ = v___x_650_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_fst_648_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v___x_652_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
else
{
lean_object* v_snd_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_684_; 
v_snd_659_ = lean_ctor_get(v___x_647_, 1);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_684_ == 0)
{
lean_object* v_unused_685_; 
v_unused_685_ = lean_ctor_get(v___x_647_, 0);
lean_dec(v_unused_685_);
v___x_661_ = v___x_647_;
v_isShared_662_ = v_isSharedCheck_684_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_snd_659_);
lean_dec(v___x_647_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_684_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v_cs_x27_664_; lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_663_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v_cs_x27_664_ = lean_array_fset(v_cs_637_, v_idx_645_, v___x_663_);
v___x_665_ = lean_array_get_size(v_snd_659_);
v___x_666_ = lean_nat_dec_eq(v___x_665_, v___x_642_);
if (v___x_666_ == 0)
{
lean_object* v___x_668_; 
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v_snd_659_);
v___x_668_ = v___x_639_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_snd_659_);
v___x_668_ = v_reuseFailAlloc_673_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_669_ = lean_array_fset(v_cs_x27_664_, v_idx_645_, v___x_668_);
lean_dec(v_idx_645_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v___x_669_);
v___x_671_ = v___x_661_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_fst_648_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___x_669_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
else
{
lean_object* v_cs_x27_674_; lean_object* v___x_675_; uint8_t v___x_676_; 
lean_dec(v_snd_659_);
lean_dec(v_idx_645_);
lean_del_object(v___x_639_);
v_cs_x27_674_ = lean_array_pop(v_cs_x27_664_);
v___x_675_ = lean_array_get_size(v_cs_x27_674_);
v___x_676_ = lean_nat_dec_eq(v___x_675_, v___x_642_);
if (v___x_676_ == 0)
{
lean_object* v___x_678_; 
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v_cs_x27_674_);
v___x_678_ = v___x_661_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_fst_648_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v_cs_x27_674_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
else
{
lean_object* v___x_680_; lean_object* v___x_682_; 
lean_dec_ref(v_cs_x27_674_);
v___x_680_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v___x_680_);
v___x_682_ = v___x_661_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_fst_648_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v___x_680_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
}
}
else
{
lean_object* v___x_686_; 
lean_del_object(v___x_639_);
lean_dec_ref(v_cs_637_);
v___x_686_ = lean_obj_once(&l_Lean_PersistentArray_popLeaf___redArg___closed__0, &l_Lean_PersistentArray_popLeaf___redArg___closed__0_once, _init_l_Lean_PersistentArray_popLeaf___redArg___closed__0);
return v___x_686_;
}
}
}
else
{
lean_object* v_vs_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v_vs_688_ = lean_ctor_get(v_x_636_, 0);
lean_inc_ref(v_vs_688_);
lean_dec_ref_known(v_x_636_, 1);
v___x_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_689_, 0, v_vs_688_);
v___x_690_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0);
v___x_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_689_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
return v___x_691_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_popLeaf(lean_object* v_00_u03b1_692_, lean_object* v_x_693_){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = l_Lean_PersistentArray_popLeaf___redArg(v_x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_pop___redArg(lean_object* v_t_695_){
_start:
{
lean_object* v_root_696_; lean_object* v_tail_697_; lean_object* v_size_698_; size_t v_shift_699_; lean_object* v_tailOff_700_; lean_object* v___x_701_; lean_object* v___x_702_; uint8_t v___x_703_; 
v_root_696_ = lean_ctor_get(v_t_695_, 0);
v_tail_697_ = lean_ctor_get(v_t_695_, 1);
v_size_698_ = lean_ctor_get(v_t_695_, 2);
v_shift_699_ = lean_ctor_get_usize(v_t_695_, 4);
v_tailOff_700_ = lean_ctor_get(v_t_695_, 3);
v___x_701_ = lean_unsigned_to_nat(0u);
v___x_702_ = lean_array_get_size(v_tail_697_);
v___x_703_ = lean_nat_dec_lt(v___x_701_, v___x_702_);
if (v___x_703_ == 0)
{
lean_object* v___x_704_; lean_object* v_fst_705_; 
lean_inc_ref(v_root_696_);
v___x_704_ = l_Lean_PersistentArray_popLeaf___redArg(v_root_696_);
v_fst_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_fst_705_);
if (lean_obj_tag(v_fst_705_) == 0)
{
lean_dec_ref(v___x_704_);
return v_t_695_;
}
else
{
lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_738_; 
lean_inc(v_size_698_);
v_isSharedCheck_738_ = !lean_is_exclusive(v_t_695_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; lean_object* v_unused_740_; lean_object* v_unused_741_; lean_object* v_unused_742_; 
v_unused_739_ = lean_ctor_get(v_t_695_, 3);
lean_dec(v_unused_739_);
v_unused_740_ = lean_ctor_get(v_t_695_, 2);
lean_dec(v_unused_740_);
v_unused_741_ = lean_ctor_get(v_t_695_, 1);
lean_dec(v_unused_741_);
v_unused_742_ = lean_ctor_get(v_t_695_, 0);
lean_dec(v_unused_742_);
v___x_707_ = v_t_695_;
v_isShared_708_ = v_isSharedCheck_738_;
goto v_resetjp_706_;
}
else
{
lean_dec(v_t_695_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_738_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v_snd_709_; lean_object* v_val_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_737_; 
v_snd_709_ = lean_ctor_get(v___x_704_, 1);
lean_inc(v_snd_709_);
lean_dec_ref(v___x_704_);
v_val_710_ = lean_ctor_get(v_fst_705_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v_fst_705_);
if (v_isSharedCheck_737_ == 0)
{
v___x_712_ = v_fst_705_;
v_isShared_713_ = v_isSharedCheck_737_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_val_710_);
lean_dec(v_fst_705_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_737_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v_last_714_; lean_object* v___x_715_; lean_object* v_newSize_716_; lean_object* v___x_717_; lean_object* v_newTailOff_718_; uint8_t v___y_720_; lean_object* v___x_733_; uint8_t v___x_734_; 
v_last_714_ = lean_array_pop(v_val_710_);
v___x_715_ = lean_unsigned_to_nat(1u);
v_newSize_716_ = lean_nat_sub(v_size_698_, v___x_715_);
lean_dec(v_size_698_);
v___x_717_ = lean_array_get_size(v_last_714_);
v_newTailOff_718_ = lean_nat_sub(v_newSize_716_, v___x_717_);
v___x_733_ = lean_array_get_size(v_snd_709_);
v___x_734_ = lean_nat_dec_eq(v___x_733_, v___x_715_);
if (v___x_734_ == 0)
{
v___y_720_ = v___x_734_;
goto v___jp_719_;
}
else
{
lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_735_ = lean_array_fget_borrowed(v_snd_709_, v___x_701_);
v___x_736_ = l_Lean_PersistentArrayNode_isNode___redArg(v___x_735_);
v___y_720_ = v___x_736_;
goto v___jp_719_;
}
v___jp_719_:
{
if (v___y_720_ == 0)
{
lean_object* v___x_722_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set_tag(v___x_712_, 0);
lean_ctor_set(v___x_712_, 0, v_snd_709_);
v___x_722_ = v___x_712_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_snd_709_);
v___x_722_ = v_reuseFailAlloc_726_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_724_; 
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 3, v_newTailOff_718_);
lean_ctor_set(v___x_707_, 2, v_newSize_716_);
lean_ctor_set(v___x_707_, 1, v_last_714_);
lean_ctor_set(v___x_707_, 0, v___x_722_);
v___x_724_ = v___x_707_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_722_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v_last_714_);
lean_ctor_set(v_reuseFailAlloc_725_, 2, v_newSize_716_);
lean_ctor_set(v_reuseFailAlloc_725_, 3, v_newTailOff_718_);
lean_ctor_set_usize(v_reuseFailAlloc_725_, 4, v_shift_699_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
else
{
lean_object* v___x_727_; size_t v___x_728_; size_t v___x_729_; lean_object* v___x_731_; 
lean_del_object(v___x_712_);
v___x_727_ = lean_array_fget(v_snd_709_, v___x_701_);
lean_dec(v_snd_709_);
v___x_728_ = ((size_t)5ULL);
v___x_729_ = lean_usize_sub(v_shift_699_, v___x_728_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 3, v_newTailOff_718_);
lean_ctor_set(v___x_707_, 2, v_newSize_716_);
lean_ctor_set(v___x_707_, 1, v_last_714_);
lean_ctor_set(v___x_707_, 0, v___x_727_);
v___x_731_ = v___x_707_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_727_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v_last_714_);
lean_ctor_set(v_reuseFailAlloc_732_, 2, v_newSize_716_);
lean_ctor_set(v_reuseFailAlloc_732_, 3, v_newTailOff_718_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
lean_ctor_set_usize(v___x_731_, 4, v___x_729_);
return v___x_731_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_752_; 
lean_inc(v_tailOff_700_);
lean_inc(v_size_698_);
lean_inc_ref(v_tail_697_);
lean_inc_ref(v_root_696_);
v_isSharedCheck_752_ = !lean_is_exclusive(v_t_695_);
if (v_isSharedCheck_752_ == 0)
{
lean_object* v_unused_753_; lean_object* v_unused_754_; lean_object* v_unused_755_; lean_object* v_unused_756_; 
v_unused_753_ = lean_ctor_get(v_t_695_, 3);
lean_dec(v_unused_753_);
v_unused_754_ = lean_ctor_get(v_t_695_, 2);
lean_dec(v_unused_754_);
v_unused_755_ = lean_ctor_get(v_t_695_, 1);
lean_dec(v_unused_755_);
v_unused_756_ = lean_ctor_get(v_t_695_, 0);
lean_dec(v_unused_756_);
v___x_744_ = v_t_695_;
v_isShared_745_ = v_isSharedCheck_752_;
goto v_resetjp_743_;
}
else
{
lean_dec(v_t_695_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_752_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_750_; 
v___x_746_ = lean_array_pop(v_tail_697_);
v___x_747_ = lean_unsigned_to_nat(1u);
v___x_748_ = lean_nat_sub(v_size_698_, v___x_747_);
lean_dec(v_size_698_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 2, v___x_748_);
lean_ctor_set(v___x_744_, 1, v___x_746_);
v___x_750_ = v___x_744_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_root_696_);
lean_ctor_set(v_reuseFailAlloc_751_, 1, v___x_746_);
lean_ctor_set(v_reuseFailAlloc_751_, 2, v___x_748_);
lean_ctor_set(v_reuseFailAlloc_751_, 3, v_tailOff_700_);
lean_ctor_set_usize(v_reuseFailAlloc_751_, 4, v_shift_699_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_pop(lean_object* v_00_u03b1_757_, lean_object* v_t_758_){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = l_Lean_PersistentArray_pop___redArg(v_t_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg(lean_object* v_inst_760_, lean_object* v_f_761_, lean_object* v_x_762_, lean_object* v_x_763_){
_start:
{
if (lean_obj_tag(v_x_762_) == 0)
{
lean_object* v_toApplicative_764_; lean_object* v_cs_765_; lean_object* v_toPure_766_; lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
v_toApplicative_764_ = lean_ctor_get(v_inst_760_, 0);
v_cs_765_ = lean_ctor_get(v_x_762_, 0);
lean_inc_ref(v_cs_765_);
lean_dec_ref_known(v_x_762_, 1);
v_toPure_766_ = lean_ctor_get(v_toApplicative_764_, 1);
v___x_767_ = lean_unsigned_to_nat(0u);
v___x_768_ = lean_array_get_size(v_cs_765_);
v___x_769_ = lean_nat_dec_lt(v___x_767_, v___x_768_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; 
lean_inc(v_toPure_766_);
lean_dec_ref(v_cs_765_);
lean_dec(v_f_761_);
lean_dec_ref(v_inst_760_);
v___x_770_ = lean_apply_2(v_toPure_766_, lean_box(0), v_x_763_);
return v___x_770_;
}
else
{
lean_object* v___f_771_; uint8_t v___x_772_; 
lean_inc_ref(v_inst_760_);
v___f_771_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_771_, 0, v_inst_760_);
lean_closure_set(v___f_771_, 1, v_f_761_);
v___x_772_ = lean_nat_dec_le(v___x_768_, v___x_768_);
if (v___x_772_ == 0)
{
if (v___x_769_ == 0)
{
lean_object* v___x_773_; 
lean_inc(v_toPure_766_);
lean_dec_ref(v___f_771_);
lean_dec_ref(v_cs_765_);
lean_dec_ref(v_inst_760_);
v___x_773_ = lean_apply_2(v_toPure_766_, lean_box(0), v_x_763_);
return v___x_773_;
}
else
{
size_t v___x_774_; size_t v___x_775_; lean_object* v___x_776_; 
v___x_774_ = ((size_t)0ULL);
v___x_775_ = lean_usize_of_nat(v___x_768_);
v___x_776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_760_, v___f_771_, v_cs_765_, v___x_774_, v___x_775_, v_x_763_);
return v___x_776_;
}
}
else
{
size_t v___x_777_; size_t v___x_778_; lean_object* v___x_779_; 
v___x_777_ = ((size_t)0ULL);
v___x_778_ = lean_usize_of_nat(v___x_768_);
v___x_779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_760_, v___f_771_, v_cs_765_, v___x_777_, v___x_778_, v_x_763_);
return v___x_779_;
}
}
}
else
{
lean_object* v_toApplicative_780_; lean_object* v_vs_781_; lean_object* v_toPure_782_; lean_object* v___x_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v_toApplicative_780_ = lean_ctor_get(v_inst_760_, 0);
v_vs_781_ = lean_ctor_get(v_x_762_, 0);
lean_inc_ref(v_vs_781_);
lean_dec_ref_known(v_x_762_, 1);
v_toPure_782_ = lean_ctor_get(v_toApplicative_780_, 1);
v___x_783_ = lean_unsigned_to_nat(0u);
v___x_784_ = lean_array_get_size(v_vs_781_);
v___x_785_ = lean_nat_dec_lt(v___x_783_, v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
lean_inc(v_toPure_782_);
lean_dec_ref(v_vs_781_);
lean_dec(v_f_761_);
lean_dec_ref(v_inst_760_);
v___x_786_ = lean_apply_2(v_toPure_782_, lean_box(0), v_x_763_);
return v___x_786_;
}
else
{
uint8_t v___x_787_; 
v___x_787_ = lean_nat_dec_le(v___x_784_, v___x_784_);
if (v___x_787_ == 0)
{
if (v___x_785_ == 0)
{
lean_object* v___x_788_; 
lean_inc(v_toPure_782_);
lean_dec_ref(v_vs_781_);
lean_dec(v_f_761_);
lean_dec_ref(v_inst_760_);
v___x_788_ = lean_apply_2(v_toPure_782_, lean_box(0), v_x_763_);
return v___x_788_;
}
else
{
size_t v___x_789_; size_t v___x_790_; lean_object* v___x_791_; 
v___x_789_ = ((size_t)0ULL);
v___x_790_ = lean_usize_of_nat(v___x_784_);
v___x_791_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_760_, v_f_761_, v_vs_781_, v___x_789_, v___x_790_, v_x_763_);
return v___x_791_;
}
}
else
{
size_t v___x_792_; size_t v___x_793_; lean_object* v___x_794_; 
v___x_792_ = ((size_t)0ULL);
v___x_793_ = lean_usize_of_nat(v___x_784_);
v___x_794_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_760_, v_f_761_, v_vs_781_, v___x_792_, v___x_793_, v_x_763_);
return v___x_794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg___lam__0(lean_object* v_inst_795_, lean_object* v_f_796_, lean_object* v_b_797_, lean_object* v_c_798_){
_start:
{
lean_object* v___x_799_; 
v___x_799_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg(v_inst_795_, v_f_796_, v_c_798_, v_b_797_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux(lean_object* v_00_u03b1_800_, lean_object* v_m_801_, lean_object* v_inst_802_, lean_object* v_00_u03b2_803_, lean_object* v_f_804_, lean_object* v_x_805_, lean_object* v_x_806_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg(v_inst_802_, v_f_804_, v_x_805_, v_x_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1(lean_object* v_toApplicative_808_, lean_object* v_j_809_, lean_object* v_cs_810_, lean_object* v_inst_811_, lean_object* v___f_812_, lean_object* v_b_813_){
_start:
{
lean_object* v_toPure_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; uint8_t v___x_818_; 
v_toPure_814_ = lean_ctor_get(v_toApplicative_808_, 1);
lean_inc(v_toPure_814_);
lean_dec_ref(v_toApplicative_808_);
v___x_815_ = lean_unsigned_to_nat(1u);
v___x_816_ = lean_nat_add(v_j_809_, v___x_815_);
v___x_817_ = lean_array_get_size(v_cs_810_);
v___x_818_ = lean_nat_dec_lt(v___x_816_, v___x_817_);
if (v___x_818_ == 0)
{
lean_object* v___x_819_; 
lean_dec(v___x_816_);
lean_dec(v___f_812_);
lean_dec_ref(v_inst_811_);
lean_dec_ref(v_cs_810_);
v___x_819_ = lean_apply_2(v_toPure_814_, lean_box(0), v_b_813_);
return v___x_819_;
}
else
{
uint8_t v___x_820_; 
v___x_820_ = lean_nat_dec_le(v___x_817_, v___x_817_);
if (v___x_820_ == 0)
{
if (v___x_818_ == 0)
{
lean_object* v___x_821_; 
lean_dec(v___x_816_);
lean_dec(v___f_812_);
lean_dec_ref(v_inst_811_);
lean_dec_ref(v_cs_810_);
v___x_821_ = lean_apply_2(v_toPure_814_, lean_box(0), v_b_813_);
return v___x_821_;
}
else
{
size_t v___x_822_; size_t v___x_823_; lean_object* v___x_824_; 
lean_dec(v_toPure_814_);
v___x_822_ = lean_usize_of_nat(v___x_816_);
lean_dec(v___x_816_);
v___x_823_ = lean_usize_of_nat(v___x_817_);
v___x_824_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_811_, v___f_812_, v_cs_810_, v___x_822_, v___x_823_, v_b_813_);
return v___x_824_;
}
}
else
{
size_t v___x_825_; size_t v___x_826_; lean_object* v___x_827_; 
lean_dec(v_toPure_814_);
v___x_825_ = lean_usize_of_nat(v___x_816_);
lean_dec(v___x_816_);
v___x_826_ = lean_usize_of_nat(v___x_817_);
v___x_827_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_811_, v___f_812_, v_cs_810_, v___x_825_, v___x_826_, v_b_813_);
return v___x_827_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1___boxed(lean_object* v_toApplicative_828_, lean_object* v_j_829_, lean_object* v_cs_830_, lean_object* v_inst_831_, lean_object* v___f_832_, lean_object* v_b_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1(v_toApplicative_828_, v_j_829_, v_cs_830_, v_inst_831_, v___f_832_, v_b_833_);
lean_dec(v_j_829_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(lean_object* v_inst_835_, lean_object* v_f_836_, lean_object* v_x_837_, size_t v_x_838_, size_t v_x_839_, lean_object* v_x_840_){
_start:
{
if (lean_obj_tag(v_x_837_) == 0)
{
lean_object* v_toApplicative_841_; lean_object* v_toBind_842_; lean_object* v_cs_843_; lean_object* v___f_844_; lean_object* v___x_845_; size_t v___x_846_; lean_object* v_j_847_; lean_object* v___f_848_; lean_object* v___x_849_; size_t v___x_850_; size_t v___x_851_; size_t v___x_852_; size_t v___x_853_; size_t v___x_854_; size_t v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_toApplicative_841_ = lean_ctor_get(v_inst_835_, 0);
v_toBind_842_ = lean_ctor_get(v_inst_835_, 1);
lean_inc(v_toBind_842_);
v_cs_843_ = lean_ctor_get(v_x_837_, 0);
lean_inc_ref_n(v_cs_843_, 2);
lean_dec_ref_known(v_x_837_, 1);
lean_inc(v_f_836_);
lean_inc_ref_n(v_inst_835_, 2);
v___f_844_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_844_, 0, v_inst_835_);
lean_closure_set(v___f_844_, 1, v_f_836_);
v___x_845_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_846_ = lean_usize_shift_right(v_x_838_, v_x_839_);
v_j_847_ = lean_usize_to_nat(v___x_846_);
lean_inc(v_j_847_);
lean_inc_ref(v_toApplicative_841_);
v___f_848_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_848_, 0, v_toApplicative_841_);
lean_closure_set(v___f_848_, 1, v_j_847_);
lean_closure_set(v___f_848_, 2, v_cs_843_);
lean_closure_set(v___f_848_, 3, v_inst_835_);
lean_closure_set(v___f_848_, 4, v___f_844_);
v___x_849_ = lean_array_get(v___x_845_, v_cs_843_, v_j_847_);
lean_dec(v_j_847_);
lean_dec_ref(v_cs_843_);
v___x_850_ = ((size_t)1ULL);
v___x_851_ = lean_usize_shift_left(v___x_850_, v_x_839_);
v___x_852_ = lean_usize_sub(v___x_851_, v___x_850_);
v___x_853_ = lean_usize_land(v_x_838_, v___x_852_);
v___x_854_ = ((size_t)5ULL);
v___x_855_ = lean_usize_sub(v_x_839_, v___x_854_);
v___x_856_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(v_inst_835_, v_f_836_, v___x_849_, v___x_853_, v___x_855_, v_x_840_);
v___x_857_ = lean_apply_4(v_toBind_842_, lean_box(0), lean_box(0), v___x_856_, v___f_848_);
return v___x_857_;
}
else
{
lean_object* v_toApplicative_858_; lean_object* v_vs_859_; lean_object* v_toPure_860_; lean_object* v___x_861_; lean_object* v___x_862_; uint8_t v___x_863_; 
v_toApplicative_858_ = lean_ctor_get(v_inst_835_, 0);
v_vs_859_ = lean_ctor_get(v_x_837_, 0);
lean_inc_ref(v_vs_859_);
lean_dec_ref_known(v_x_837_, 1);
v_toPure_860_ = lean_ctor_get(v_toApplicative_858_, 1);
v___x_861_ = lean_usize_to_nat(v_x_838_);
v___x_862_ = lean_array_get_size(v_vs_859_);
v___x_863_ = lean_nat_dec_lt(v___x_861_, v___x_862_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; 
lean_inc(v_toPure_860_);
lean_dec(v___x_861_);
lean_dec_ref(v_vs_859_);
lean_dec(v_f_836_);
lean_dec_ref(v_inst_835_);
v___x_864_ = lean_apply_2(v_toPure_860_, lean_box(0), v_x_840_);
return v___x_864_;
}
else
{
uint8_t v___x_865_; 
v___x_865_ = lean_nat_dec_le(v___x_862_, v___x_862_);
if (v___x_865_ == 0)
{
if (v___x_863_ == 0)
{
lean_object* v___x_866_; 
lean_inc(v_toPure_860_);
lean_dec(v___x_861_);
lean_dec_ref(v_vs_859_);
lean_dec(v_f_836_);
lean_dec_ref(v_inst_835_);
v___x_866_ = lean_apply_2(v_toPure_860_, lean_box(0), v_x_840_);
return v___x_866_;
}
else
{
size_t v___x_867_; size_t v___x_868_; lean_object* v___x_869_; 
v___x_867_ = lean_usize_of_nat(v___x_861_);
lean_dec(v___x_861_);
v___x_868_ = lean_usize_of_nat(v___x_862_);
v___x_869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_835_, v_f_836_, v_vs_859_, v___x_867_, v___x_868_, v_x_840_);
return v___x_869_;
}
}
else
{
size_t v___x_870_; size_t v___x_871_; lean_object* v___x_872_; 
v___x_870_ = lean_usize_of_nat(v___x_861_);
lean_dec(v___x_861_);
v___x_871_ = lean_usize_of_nat(v___x_862_);
v___x_872_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_835_, v_f_836_, v_vs_859_, v___x_870_, v___x_871_, v_x_840_);
return v___x_872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___boxed(lean_object* v_inst_873_, lean_object* v_f_874_, lean_object* v_x_875_, lean_object* v_x_876_, lean_object* v_x_877_, lean_object* v_x_878_){
_start:
{
size_t v_x_207__boxed_879_; size_t v_x_208__boxed_880_; lean_object* v_res_881_; 
v_x_207__boxed_879_ = lean_unbox_usize(v_x_876_);
lean_dec(v_x_876_);
v_x_208__boxed_880_ = lean_unbox_usize(v_x_877_);
lean_dec(v_x_877_);
v_res_881_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(v_inst_873_, v_f_874_, v_x_875_, v_x_207__boxed_879_, v_x_208__boxed_880_, v_x_878_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux(lean_object* v_00_u03b1_882_, lean_object* v_m_883_, lean_object* v_inst_884_, lean_object* v_00_u03b2_885_, lean_object* v_f_886_, lean_object* v_x_887_, size_t v_x_888_, size_t v_x_889_, lean_object* v_x_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(v_inst_884_, v_f_886_, v_x_887_, v_x_888_, v_x_889_, v_x_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___boxed(lean_object* v_00_u03b1_892_, lean_object* v_m_893_, lean_object* v_inst_894_, lean_object* v_00_u03b2_895_, lean_object* v_f_896_, lean_object* v_x_897_, lean_object* v_x_898_, lean_object* v_x_899_, lean_object* v_x_900_){
_start:
{
size_t v_x_276__boxed_901_; size_t v_x_277__boxed_902_; lean_object* v_res_903_; 
v_x_276__boxed_901_ = lean_unbox_usize(v_x_898_);
lean_dec(v_x_898_);
v_x_277__boxed_902_ = lean_unbox_usize(v_x_899_);
lean_dec(v_x_899_);
v_res_903_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux(v_00_u03b1_892_, v_m_893_, v_inst_894_, v_00_u03b2_895_, v_f_896_, v_x_897_, v_x_276__boxed_901_, v_x_277__boxed_902_, v_x_900_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg___lam__0(lean_object* v_toApplicative_904_, lean_object* v_tail_905_, lean_object* v___x_906_, lean_object* v_inst_907_, lean_object* v_f_908_, lean_object* v_b_909_){
_start:
{
lean_object* v_toPure_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v_toPure_910_ = lean_ctor_get(v_toApplicative_904_, 1);
lean_inc(v_toPure_910_);
lean_dec_ref(v_toApplicative_904_);
v___x_911_ = lean_array_get_size(v_tail_905_);
v___x_912_ = lean_nat_dec_lt(v___x_906_, v___x_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; 
lean_dec(v_f_908_);
lean_dec_ref(v_inst_907_);
lean_dec_ref(v_tail_905_);
v___x_913_ = lean_apply_2(v_toPure_910_, lean_box(0), v_b_909_);
return v___x_913_;
}
else
{
uint8_t v___x_914_; 
v___x_914_ = lean_nat_dec_le(v___x_911_, v___x_911_);
if (v___x_914_ == 0)
{
if (v___x_912_ == 0)
{
lean_object* v___x_915_; 
lean_dec(v_f_908_);
lean_dec_ref(v_inst_907_);
lean_dec_ref(v_tail_905_);
v___x_915_ = lean_apply_2(v_toPure_910_, lean_box(0), v_b_909_);
return v___x_915_;
}
else
{
size_t v___x_916_; size_t v___x_917_; lean_object* v___x_918_; 
lean_dec(v_toPure_910_);
v___x_916_ = ((size_t)0ULL);
v___x_917_ = lean_usize_of_nat(v___x_911_);
v___x_918_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_907_, v_f_908_, v_tail_905_, v___x_916_, v___x_917_, v_b_909_);
return v___x_918_;
}
}
else
{
size_t v___x_919_; size_t v___x_920_; lean_object* v___x_921_; 
lean_dec(v_toPure_910_);
v___x_919_ = ((size_t)0ULL);
v___x_920_ = lean_usize_of_nat(v___x_911_);
v___x_921_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_907_, v_f_908_, v_tail_905_, v___x_919_, v___x_920_, v_b_909_);
return v___x_921_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg___lam__0___boxed(lean_object* v_toApplicative_922_, lean_object* v_tail_923_, lean_object* v___x_924_, lean_object* v_inst_925_, lean_object* v_f_926_, lean_object* v_b_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l_Lean_PersistentArray_foldlM___redArg___lam__0(v_toApplicative_922_, v_tail_923_, v___x_924_, v_inst_925_, v_f_926_, v_b_927_);
lean_dec(v___x_924_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg(lean_object* v_inst_929_, lean_object* v_t_930_, lean_object* v_f_931_, lean_object* v_init_932_, lean_object* v_start_933_){
_start:
{
lean_object* v_toApplicative_934_; lean_object* v_toBind_935_; lean_object* v___x_936_; uint8_t v___x_937_; 
v_toApplicative_934_ = lean_ctor_get(v_inst_929_, 0);
v_toBind_935_ = lean_ctor_get(v_inst_929_, 1);
v___x_936_ = lean_unsigned_to_nat(0u);
v___x_937_ = lean_nat_dec_eq(v_start_933_, v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v_root_938_; lean_object* v_tail_939_; size_t v_shift_940_; lean_object* v_tailOff_941_; uint8_t v___x_942_; 
v_root_938_ = lean_ctor_get(v_t_930_, 0);
lean_inc_ref(v_root_938_);
v_tail_939_ = lean_ctor_get(v_t_930_, 1);
lean_inc_ref(v_tail_939_);
v_shift_940_ = lean_ctor_get_usize(v_t_930_, 4);
v_tailOff_941_ = lean_ctor_get(v_t_930_, 3);
lean_inc(v_tailOff_941_);
lean_dec_ref(v_t_930_);
v___x_942_ = lean_nat_dec_le(v_tailOff_941_, v_start_933_);
if (v___x_942_ == 0)
{
lean_object* v___f_943_; size_t v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
lean_inc(v_toBind_935_);
lean_dec(v_tailOff_941_);
lean_inc(v_f_931_);
lean_inc_ref(v_inst_929_);
lean_inc_ref(v_toApplicative_934_);
v___f_943_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldlM___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_943_, 0, v_toApplicative_934_);
lean_closure_set(v___f_943_, 1, v_tail_939_);
lean_closure_set(v___f_943_, 2, v___x_936_);
lean_closure_set(v___f_943_, 3, v_inst_929_);
lean_closure_set(v___f_943_, 4, v_f_931_);
v___x_944_ = lean_usize_of_nat(v_start_933_);
v___x_945_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(v_inst_929_, v_f_931_, v_root_938_, v___x_944_, v_shift_940_, v_init_932_);
v___x_946_ = lean_apply_4(v_toBind_935_, lean_box(0), lean_box(0), v___x_945_, v___f_943_);
return v___x_946_;
}
else
{
lean_object* v_toPure_947_; lean_object* v___x_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
lean_dec_ref(v_root_938_);
v_toPure_947_ = lean_ctor_get(v_toApplicative_934_, 1);
v___x_948_ = lean_nat_sub(v_start_933_, v_tailOff_941_);
lean_dec(v_tailOff_941_);
v___x_949_ = lean_array_get_size(v_tail_939_);
v___x_950_ = lean_nat_dec_lt(v___x_948_, v___x_949_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; 
lean_inc(v_toPure_947_);
lean_dec(v___x_948_);
lean_dec_ref(v_tail_939_);
lean_dec(v_f_931_);
lean_dec_ref(v_inst_929_);
v___x_951_ = lean_apply_2(v_toPure_947_, lean_box(0), v_init_932_);
return v___x_951_;
}
else
{
uint8_t v___x_952_; 
v___x_952_ = lean_nat_dec_le(v___x_949_, v___x_949_);
if (v___x_952_ == 0)
{
if (v___x_950_ == 0)
{
lean_object* v___x_953_; 
lean_inc(v_toPure_947_);
lean_dec(v___x_948_);
lean_dec_ref(v_tail_939_);
lean_dec(v_f_931_);
lean_dec_ref(v_inst_929_);
v___x_953_ = lean_apply_2(v_toPure_947_, lean_box(0), v_init_932_);
return v___x_953_;
}
else
{
size_t v___x_954_; size_t v___x_955_; lean_object* v___x_956_; 
v___x_954_ = lean_usize_of_nat(v___x_948_);
lean_dec(v___x_948_);
v___x_955_ = lean_usize_of_nat(v___x_949_);
v___x_956_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_929_, v_f_931_, v_tail_939_, v___x_954_, v___x_955_, v_init_932_);
return v___x_956_;
}
}
else
{
size_t v___x_957_; size_t v___x_958_; lean_object* v___x_959_; 
v___x_957_ = lean_usize_of_nat(v___x_948_);
lean_dec(v___x_948_);
v___x_958_ = lean_usize_of_nat(v___x_949_);
v___x_959_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_929_, v_f_931_, v_tail_939_, v___x_957_, v___x_958_, v_init_932_);
return v___x_959_;
}
}
}
}
else
{
lean_object* v_root_960_; lean_object* v_tail_961_; lean_object* v___f_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
lean_inc(v_toBind_935_);
v_root_960_ = lean_ctor_get(v_t_930_, 0);
lean_inc_ref(v_root_960_);
v_tail_961_ = lean_ctor_get(v_t_930_, 1);
lean_inc_ref(v_tail_961_);
lean_dec_ref(v_t_930_);
lean_inc(v_f_931_);
lean_inc_ref(v_inst_929_);
lean_inc_ref(v_toApplicative_934_);
v___f_962_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldlM___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_962_, 0, v_toApplicative_934_);
lean_closure_set(v___f_962_, 1, v_tail_961_);
lean_closure_set(v___f_962_, 2, v___x_936_);
lean_closure_set(v___f_962_, 3, v_inst_929_);
lean_closure_set(v___f_962_, 4, v_f_931_);
v___x_963_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg(v_inst_929_, v_f_931_, v_root_960_, v_init_932_);
v___x_964_ = lean_apply_4(v_toBind_935_, lean_box(0), lean_box(0), v___x_963_, v___f_962_);
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg___boxed(lean_object* v_inst_965_, lean_object* v_t_966_, lean_object* v_f_967_, lean_object* v_init_968_, lean_object* v_start_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lean_PersistentArray_foldlM___redArg(v_inst_965_, v_t_966_, v_f_967_, v_init_968_, v_start_969_);
lean_dec(v_start_969_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM(lean_object* v_00_u03b1_971_, lean_object* v_m_972_, lean_object* v_inst_973_, lean_object* v_00_u03b2_974_, lean_object* v_t_975_, lean_object* v_f_976_, lean_object* v_init_977_, lean_object* v_start_978_){
_start:
{
lean_object* v___x_979_; 
v___x_979_ = l_Lean_PersistentArray_foldlM___redArg(v_inst_973_, v_t_975_, v_f_976_, v_init_977_, v_start_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___boxed(lean_object* v_00_u03b1_980_, lean_object* v_m_981_, lean_object* v_inst_982_, lean_object* v_00_u03b2_983_, lean_object* v_t_984_, lean_object* v_f_985_, lean_object* v_init_986_, lean_object* v_start_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_Lean_PersistentArray_foldlM(v_00_u03b1_980_, v_m_981_, v_inst_982_, v_00_u03b2_983_, v_t_984_, v_f_985_, v_init_986_, v_start_987_);
lean_dec(v_start_987_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg(lean_object* v_inst_989_, lean_object* v_f_990_, lean_object* v_x_991_, lean_object* v_x_992_){
_start:
{
if (lean_obj_tag(v_x_991_) == 0)
{
lean_object* v_toApplicative_993_; lean_object* v_cs_994_; lean_object* v_toPure_995_; lean_object* v___x_996_; lean_object* v___x_997_; uint8_t v___x_998_; 
v_toApplicative_993_ = lean_ctor_get(v_inst_989_, 0);
v_cs_994_ = lean_ctor_get(v_x_991_, 0);
lean_inc_ref(v_cs_994_);
lean_dec_ref_known(v_x_991_, 1);
v_toPure_995_ = lean_ctor_get(v_toApplicative_993_, 1);
v___x_996_ = lean_array_get_size(v_cs_994_);
v___x_997_ = lean_unsigned_to_nat(0u);
v___x_998_ = lean_nat_dec_lt(v___x_997_, v___x_996_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; 
lean_inc(v_toPure_995_);
lean_dec_ref(v_cs_994_);
lean_dec(v_f_990_);
lean_dec_ref(v_inst_989_);
v___x_999_ = lean_apply_2(v_toPure_995_, lean_box(0), v_x_992_);
return v___x_999_;
}
else
{
lean_object* v___f_1000_; size_t v___x_1001_; size_t v___x_1002_; lean_object* v___x_1003_; 
lean_inc_ref(v_inst_989_);
v___f_1000_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1000_, 0, v_inst_989_);
lean_closure_set(v___f_1000_, 1, v_f_990_);
v___x_1001_ = lean_usize_of_nat(v___x_996_);
v___x_1002_ = ((size_t)0ULL);
v___x_1003_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_989_, v___f_1000_, v_cs_994_, v___x_1001_, v___x_1002_, v_x_992_);
return v___x_1003_;
}
}
else
{
lean_object* v_toApplicative_1004_; lean_object* v_vs_1005_; lean_object* v_toPure_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; uint8_t v___x_1009_; 
v_toApplicative_1004_ = lean_ctor_get(v_inst_989_, 0);
v_vs_1005_ = lean_ctor_get(v_x_991_, 0);
lean_inc_ref(v_vs_1005_);
lean_dec_ref_known(v_x_991_, 1);
v_toPure_1006_ = lean_ctor_get(v_toApplicative_1004_, 1);
v___x_1007_ = lean_array_get_size(v_vs_1005_);
v___x_1008_ = lean_unsigned_to_nat(0u);
v___x_1009_ = lean_nat_dec_lt(v___x_1008_, v___x_1007_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; 
lean_inc(v_toPure_1006_);
lean_dec_ref(v_vs_1005_);
lean_dec(v_f_990_);
lean_dec_ref(v_inst_989_);
v___x_1010_ = lean_apply_2(v_toPure_1006_, lean_box(0), v_x_992_);
return v___x_1010_;
}
else
{
size_t v___x_1011_; size_t v___x_1012_; lean_object* v___x_1013_; 
v___x_1011_ = lean_usize_of_nat(v___x_1007_);
v___x_1012_ = ((size_t)0ULL);
v___x_1013_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_989_, v_f_990_, v_vs_1005_, v___x_1011_, v___x_1012_, v_x_992_);
return v___x_1013_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg___lam__0(lean_object* v_inst_1014_, lean_object* v_f_1015_, lean_object* v_c_1016_, lean_object* v_b_1017_){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg(v_inst_1014_, v_f_1015_, v_c_1016_, v_b_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux(lean_object* v_00_u03b1_1019_, lean_object* v_m_1020_, lean_object* v_00_u03b2_1021_, lean_object* v_inst_1022_, lean_object* v_f_1023_, lean_object* v_x_1024_, lean_object* v_x_1025_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg(v_inst_1022_, v_f_1023_, v_x_1024_, v_x_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___redArg___lam__0(lean_object* v_inst_1027_, lean_object* v_f_1028_, lean_object* v_root_1029_, lean_object* v_____do__lift_1030_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg(v_inst_1027_, v_f_1028_, v_root_1029_, v_____do__lift_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___redArg(lean_object* v_inst_1032_, lean_object* v_t_1033_, lean_object* v_f_1034_, lean_object* v_init_1035_){
_start:
{
lean_object* v_toApplicative_1036_; lean_object* v_toBind_1037_; lean_object* v_root_1038_; lean_object* v_tail_1039_; lean_object* v_toPure_1040_; lean_object* v___f_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; uint8_t v___x_1044_; 
v_toApplicative_1036_ = lean_ctor_get(v_inst_1032_, 0);
v_toBind_1037_ = lean_ctor_get(v_inst_1032_, 1);
lean_inc(v_toBind_1037_);
v_root_1038_ = lean_ctor_get(v_t_1033_, 0);
lean_inc_ref(v_root_1038_);
v_tail_1039_ = lean_ctor_get(v_t_1033_, 1);
lean_inc_ref(v_tail_1039_);
lean_dec_ref(v_t_1033_);
v_toPure_1040_ = lean_ctor_get(v_toApplicative_1036_, 1);
lean_inc(v_f_1034_);
lean_inc_ref(v_inst_1032_);
v___f_1041_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldrM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1041_, 0, v_inst_1032_);
lean_closure_set(v___f_1041_, 1, v_f_1034_);
lean_closure_set(v___f_1041_, 2, v_root_1038_);
v___x_1042_ = lean_array_get_size(v_tail_1039_);
v___x_1043_ = lean_unsigned_to_nat(0u);
v___x_1044_ = lean_nat_dec_lt(v___x_1043_, v___x_1042_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
lean_inc(v_toPure_1040_);
lean_dec_ref(v_tail_1039_);
lean_dec(v_f_1034_);
lean_dec_ref(v_inst_1032_);
v___x_1045_ = lean_apply_2(v_toPure_1040_, lean_box(0), v_init_1035_);
v___x_1046_ = lean_apply_4(v_toBind_1037_, lean_box(0), lean_box(0), v___x_1045_, v___f_1041_);
return v___x_1046_;
}
else
{
size_t v___x_1047_; size_t v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1047_ = lean_usize_of_nat(v___x_1042_);
v___x_1048_ = ((size_t)0ULL);
v___x_1049_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1032_, v_f_1034_, v_tail_1039_, v___x_1047_, v___x_1048_, v_init_1035_);
v___x_1050_ = lean_apply_4(v_toBind_1037_, lean_box(0), lean_box(0), v___x_1049_, v___f_1041_);
return v___x_1050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM(lean_object* v_00_u03b1_1051_, lean_object* v_m_1052_, lean_object* v_00_u03b2_1053_, lean_object* v_inst_1054_, lean_object* v_t_1055_, lean_object* v_f_1056_, lean_object* v_init_1057_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lean_PersistentArray_foldrM___redArg(v_inst_1054_, v_t_1055_, v_f_1056_, v_init_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__0(lean_object* v_toPure_1059_, lean_object* v_____s_1060_){
_start:
{
lean_object* v_fst_1061_; 
v_fst_1061_ = lean_ctor_get(v_____s_1060_, 0);
if (lean_obj_tag(v_fst_1061_) == 0)
{
lean_object* v_snd_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v_snd_1062_ = lean_ctor_get(v_____s_1060_, 1);
lean_inc(v_snd_1062_);
lean_dec_ref(v_____s_1060_);
v___x_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1063_, 0, v_snd_1062_);
v___x_1064_ = lean_apply_2(v_toPure_1059_, lean_box(0), v___x_1063_);
return v___x_1064_;
}
else
{
lean_object* v_val_1065_; lean_object* v___x_1066_; 
lean_inc_ref(v_fst_1061_);
lean_dec_ref(v_____s_1060_);
v_val_1065_ = lean_ctor_get(v_fst_1061_, 0);
lean_inc(v_val_1065_);
lean_dec_ref_known(v_fst_1061_, 1);
v___x_1066_ = lean_apply_2(v_toPure_1059_, lean_box(0), v_val_1065_);
return v___x_1066_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__1(lean_object* v_snd_1067_, lean_object* v_toPure_1068_, lean_object* v___x_1069_, lean_object* v_____do__lift_1070_){
_start:
{
if (lean_obj_tag(v_____do__lift_1070_) == 0)
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
lean_dec(v___x_1069_);
v___x_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1071_, 0, v_____do__lift_1070_);
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
lean_ctor_set(v___x_1072_, 1, v_snd_1067_);
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
v___x_1074_ = lean_apply_2(v_toPure_1068_, lean_box(0), v___x_1073_);
return v___x_1074_;
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1084_; 
lean_dec(v_snd_1067_);
v_a_1075_ = lean_ctor_get(v_____do__lift_1070_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_____do__lift_1070_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1077_ = v_____do__lift_1070_;
v_isShared_1078_ = v_isSharedCheck_1084_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v_____do__lift_1070_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1084_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; lean_object* v___x_1081_; 
v___x_1079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1069_);
lean_ctor_set(v___x_1079_, 1, v_a_1075_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v___x_1079_);
v___x_1081_ = v___x_1077_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1079_);
v___x_1081_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
lean_object* v___x_1082_; 
v___x_1082_ = lean_apply_2(v_toPure_1068_, lean_box(0), v___x_1081_);
return v___x_1082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__5(lean_object* v_toPure_1085_, lean_object* v___x_1086_, lean_object* v_f_1087_, lean_object* v_toBind_1088_, lean_object* v_a_1089_, lean_object* v_x_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v_snd_1092_; lean_object* v___f_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_snd_1092_ = lean_ctor_get(v___y_1091_, 1);
lean_inc_n(v_snd_1092_, 2);
lean_dec_ref(v___y_1091_);
v___f_1093_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1093_, 0, v_snd_1092_);
lean_closure_set(v___f_1093_, 1, v_toPure_1085_);
lean_closure_set(v___f_1093_, 2, v___x_1086_);
v___x_1094_ = lean_apply_2(v_f_1087_, v_a_1089_, v_snd_1092_);
v___x_1095_ = lean_apply_4(v_toBind_1088_, lean_box(0), lean_box(0), v___x_1094_, v___f_1093_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__2___boxed(lean_object* v_toPure_1096_, lean_object* v___x_1097_, lean_object* v_inst_1098_, lean_object* v_f_1099_, lean_object* v_toBind_1100_, lean_object* v_a_1101_, lean_object* v_x_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lean_PersistentArray_forInAux___redArg___lam__2(v_toPure_1096_, v___x_1097_, v_inst_1098_, v_f_1099_, v_toBind_1100_, v_a_1101_, v_x_1102_, v___y_1103_);
lean_dec_ref(v_a_1101_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg(lean_object* v_inst_1105_, lean_object* v_f_1106_, lean_object* v_n_1107_, lean_object* v_b_1108_){
_start:
{
if (lean_obj_tag(v_n_1107_) == 0)
{
lean_object* v_toApplicative_1109_; lean_object* v_toBind_1110_; lean_object* v_toPure_1111_; lean_object* v_cs_1112_; lean_object* v___f_1113_; lean_object* v___x_1114_; lean_object* v___f_1115_; lean_object* v___x_1116_; size_t v_sz_1117_; size_t v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v_toApplicative_1109_ = lean_ctor_get(v_inst_1105_, 0);
v_toBind_1110_ = lean_ctor_get(v_inst_1105_, 1);
lean_inc_n(v_toBind_1110_, 2);
v_toPure_1111_ = lean_ctor_get(v_toApplicative_1109_, 1);
v_cs_1112_ = lean_ctor_get(v_n_1107_, 0);
lean_inc_n(v_toPure_1111_, 2);
v___f_1113_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1113_, 0, v_toPure_1111_);
v___x_1114_ = lean_box(0);
lean_inc_ref(v_inst_1105_);
v___f_1115_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__2___boxed), 8, 5);
lean_closure_set(v___f_1115_, 0, v_toPure_1111_);
lean_closure_set(v___f_1115_, 1, v___x_1114_);
lean_closure_set(v___f_1115_, 2, v_inst_1105_);
lean_closure_set(v___f_1115_, 3, v_f_1106_);
lean_closure_set(v___f_1115_, 4, v_toBind_1110_);
v___x_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1114_);
lean_ctor_set(v___x_1116_, 1, v_b_1108_);
v_sz_1117_ = lean_array_size(v_cs_1112_);
v___x_1118_ = ((size_t)0ULL);
lean_inc_ref(v_cs_1112_);
v___x_1119_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1105_, v_cs_1112_, v___f_1115_, v_sz_1117_, v___x_1118_, v___x_1116_);
v___x_1120_ = lean_apply_4(v_toBind_1110_, lean_box(0), lean_box(0), v___x_1119_, v___f_1113_);
return v___x_1120_;
}
else
{
lean_object* v_toApplicative_1121_; lean_object* v_toBind_1122_; lean_object* v_toPure_1123_; lean_object* v_vs_1124_; lean_object* v___f_1125_; lean_object* v___x_1126_; lean_object* v___f_1127_; lean_object* v___x_1128_; size_t v_sz_1129_; size_t v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v_toApplicative_1121_ = lean_ctor_get(v_inst_1105_, 0);
v_toBind_1122_ = lean_ctor_get(v_inst_1105_, 1);
lean_inc_n(v_toBind_1122_, 2);
v_toPure_1123_ = lean_ctor_get(v_toApplicative_1121_, 1);
v_vs_1124_ = lean_ctor_get(v_n_1107_, 0);
lean_inc_n(v_toPure_1123_, 2);
v___f_1125_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1125_, 0, v_toPure_1123_);
v___x_1126_ = lean_box(0);
v___f_1127_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__5), 7, 4);
lean_closure_set(v___f_1127_, 0, v_toPure_1123_);
lean_closure_set(v___f_1127_, 1, v___x_1126_);
lean_closure_set(v___f_1127_, 2, v_f_1106_);
lean_closure_set(v___f_1127_, 3, v_toBind_1122_);
v___x_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v_b_1108_);
v_sz_1129_ = lean_array_size(v_vs_1124_);
v___x_1130_ = ((size_t)0ULL);
lean_inc_ref(v_vs_1124_);
v___x_1131_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1105_, v_vs_1124_, v___f_1127_, v_sz_1129_, v___x_1130_, v___x_1128_);
v___x_1132_ = lean_apply_4(v_toBind_1122_, lean_box(0), lean_box(0), v___x_1131_, v___f_1125_);
return v___x_1132_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__2(lean_object* v_toPure_1133_, lean_object* v___x_1134_, lean_object* v_inst_1135_, lean_object* v_f_1136_, lean_object* v_toBind_1137_, lean_object* v_a_1138_, lean_object* v_x_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v_snd_1141_; lean_object* v___f_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v_snd_1141_ = lean_ctor_get(v___y_1140_, 1);
lean_inc_n(v_snd_1141_, 2);
lean_dec_ref(v___y_1140_);
v___f_1142_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1142_, 0, v_snd_1141_);
lean_closure_set(v___f_1142_, 1, v_toPure_1133_);
lean_closure_set(v___f_1142_, 2, v___x_1134_);
v___x_1143_ = l_Lean_PersistentArray_forInAux___redArg(v_inst_1135_, v_f_1136_, v_a_1138_, v_snd_1141_);
v___x_1144_ = lean_apply_4(v_toBind_1137_, lean_box(0), lean_box(0), v___x_1143_, v___f_1142_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___boxed(lean_object* v_inst_1145_, lean_object* v_f_1146_, lean_object* v_n_1147_, lean_object* v_b_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_PersistentArray_forInAux___redArg(v_inst_1145_, v_f_1146_, v_n_1147_, v_b_1148_);
lean_dec_ref(v_n_1147_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux(lean_object* v_00_u03b1_1150_, lean_object* v_00_u03b2_1151_, lean_object* v_m_1152_, lean_object* v_inst_1153_, lean_object* v_inh_1154_, lean_object* v_f_1155_, lean_object* v_n_1156_, lean_object* v_b_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Lean_PersistentArray_forInAux___redArg(v_inst_1153_, v_f_1155_, v_n_1156_, v_b_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___boxed(lean_object* v_00_u03b1_1159_, lean_object* v_00_u03b2_1160_, lean_object* v_m_1161_, lean_object* v_inst_1162_, lean_object* v_inh_1163_, lean_object* v_f_1164_, lean_object* v_n_1165_, lean_object* v_b_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lean_PersistentArray_forInAux(v_00_u03b1_1159_, v_00_u03b2_1160_, v_m_1161_, v_inst_1162_, v_inh_1163_, v_f_1164_, v_n_1165_, v_b_1166_);
lean_dec_ref(v_n_1165_);
lean_dec(v_inh_1163_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__0(lean_object* v_toPure_1168_, lean_object* v_____s_1169_){
_start:
{
lean_object* v_fst_1170_; 
v_fst_1170_ = lean_ctor_get(v_____s_1169_, 0);
if (lean_obj_tag(v_fst_1170_) == 0)
{
lean_object* v_snd_1171_; lean_object* v___x_1172_; 
v_snd_1171_ = lean_ctor_get(v_____s_1169_, 1);
lean_inc(v_snd_1171_);
lean_dec_ref(v_____s_1169_);
v___x_1172_ = lean_apply_2(v_toPure_1168_, lean_box(0), v_snd_1171_);
return v___x_1172_;
}
else
{
lean_object* v_val_1173_; lean_object* v___x_1174_; 
lean_inc_ref(v_fst_1170_);
lean_dec_ref(v_____s_1169_);
v_val_1173_ = lean_ctor_get(v_fst_1170_, 0);
lean_inc(v_val_1173_);
lean_dec_ref_known(v_fst_1170_, 1);
v___x_1174_ = lean_apply_2(v_toPure_1168_, lean_box(0), v_val_1173_);
return v___x_1174_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__1(lean_object* v_snd_1175_, lean_object* v_toPure_1176_, lean_object* v___x_1177_, lean_object* v_____do__lift_1178_){
_start:
{
if (lean_obj_tag(v_____do__lift_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1189_; 
lean_dec(v___x_1177_);
v_a_1179_ = lean_ctor_get(v_____do__lift_1178_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v_____do__lift_1178_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1181_ = v_____do__lift_1178_;
v_isShared_1182_ = v_isSharedCheck_1189_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v_____do__lift_1178_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1189_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1183_, 0, v_a_1179_);
v___x_1184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
lean_ctor_set(v___x_1184_, 1, v_snd_1175_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1184_);
v___x_1186_ = v___x_1181_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
lean_object* v___x_1187_; 
v___x_1187_ = lean_apply_2(v_toPure_1176_, lean_box(0), v___x_1186_);
return v___x_1187_;
}
}
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1199_; 
lean_dec(v_snd_1175_);
v_a_1190_ = lean_ctor_get(v_____do__lift_1178_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_____do__lift_1178_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1192_ = v_____do__lift_1178_;
v_isShared_1193_ = v_isSharedCheck_1199_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v_____do__lift_1178_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1199_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; lean_object* v___x_1196_; 
v___x_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1177_);
lean_ctor_set(v___x_1194_, 1, v_a_1190_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 0, v___x_1194_);
v___x_1196_ = v___x_1192_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1194_);
v___x_1196_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_apply_2(v_toPure_1176_, lean_box(0), v___x_1196_);
return v___x_1197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__2(lean_object* v_toPure_1200_, lean_object* v___x_1201_, lean_object* v_f_1202_, lean_object* v_toBind_1203_, lean_object* v_a_1204_, lean_object* v_x_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_snd_1207_; lean_object* v___f_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v_snd_1207_ = lean_ctor_get(v___y_1206_, 1);
lean_inc_n(v_snd_1207_, 2);
lean_dec_ref(v___y_1206_);
v___f_1208_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1208_, 0, v_snd_1207_);
lean_closure_set(v___f_1208_, 1, v_toPure_1200_);
lean_closure_set(v___f_1208_, 2, v___x_1201_);
v___x_1209_ = lean_apply_2(v_f_1202_, v_a_1204_, v_snd_1207_);
v___x_1210_ = lean_apply_4(v_toBind_1203_, lean_box(0), lean_box(0), v___x_1209_, v___f_1208_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__3(lean_object* v_toPure_1211_, lean_object* v_f_1212_, lean_object* v_toBind_1213_, lean_object* v_tail_1214_, lean_object* v_inst_1215_, lean_object* v___f_1216_, lean_object* v_____do__lift_1217_){
_start:
{
if (lean_obj_tag(v_____do__lift_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v___x_1219_; 
lean_dec(v___f_1216_);
lean_dec_ref(v_inst_1215_);
lean_dec_ref(v_tail_1214_);
lean_dec(v_toBind_1213_);
lean_dec(v_f_1212_);
v_a_1218_ = lean_ctor_get(v_____do__lift_1217_, 0);
lean_inc(v_a_1218_);
lean_dec_ref_known(v_____do__lift_1217_, 1);
v___x_1219_ = lean_apply_2(v_toPure_1211_, lean_box(0), v_a_1218_);
return v___x_1219_;
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1221_; lean_object* v___f_1222_; lean_object* v___x_1223_; size_t v_sz_1224_; size_t v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v_a_1220_ = lean_ctor_get(v_____do__lift_1217_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v_____do__lift_1217_, 1);
v___x_1221_ = lean_box(0);
lean_inc(v_toBind_1213_);
v___f_1222_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___redArg___lam__2), 7, 4);
lean_closure_set(v___f_1222_, 0, v_toPure_1211_);
lean_closure_set(v___f_1222_, 1, v___x_1221_);
lean_closure_set(v___f_1222_, 2, v_f_1212_);
lean_closure_set(v___f_1222_, 3, v_toBind_1213_);
v___x_1223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1221_);
lean_ctor_set(v___x_1223_, 1, v_a_1220_);
v_sz_1224_ = lean_array_size(v_tail_1214_);
v___x_1225_ = ((size_t)0ULL);
v___x_1226_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1215_, v_tail_1214_, v___f_1222_, v_sz_1224_, v___x_1225_, v___x_1223_);
v___x_1227_ = lean_apply_4(v_toBind_1213_, lean_box(0), lean_box(0), v___x_1226_, v___f_1216_);
return v___x_1227_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg(lean_object* v_inst_1228_, lean_object* v_t_1229_, lean_object* v_init_1230_, lean_object* v_f_1231_){
_start:
{
lean_object* v_toApplicative_1232_; lean_object* v_toBind_1233_; lean_object* v_root_1234_; lean_object* v_tail_1235_; lean_object* v_toPure_1236_; lean_object* v___x_1237_; lean_object* v___f_1238_; lean_object* v___f_1239_; lean_object* v___x_1240_; 
v_toApplicative_1232_ = lean_ctor_get(v_inst_1228_, 0);
v_toBind_1233_ = lean_ctor_get(v_inst_1228_, 1);
lean_inc_n(v_toBind_1233_, 2);
v_root_1234_ = lean_ctor_get(v_t_1229_, 0);
v_tail_1235_ = lean_ctor_get(v_t_1229_, 1);
v_toPure_1236_ = lean_ctor_get(v_toApplicative_1232_, 1);
lean_inc_n(v_toPure_1236_, 2);
lean_inc(v_f_1231_);
lean_inc_ref(v_inst_1228_);
v___x_1237_ = l_Lean_PersistentArray_forInAux___redArg(v_inst_1228_, v_f_1231_, v_root_1234_, v_init_1230_);
v___f_1238_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1238_, 0, v_toPure_1236_);
lean_inc_ref(v_tail_1235_);
v___f_1239_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___redArg___lam__3), 7, 6);
lean_closure_set(v___f_1239_, 0, v_toPure_1236_);
lean_closure_set(v___f_1239_, 1, v_f_1231_);
lean_closure_set(v___f_1239_, 2, v_toBind_1233_);
lean_closure_set(v___f_1239_, 3, v_tail_1235_);
lean_closure_set(v___f_1239_, 4, v_inst_1228_);
lean_closure_set(v___f_1239_, 5, v___f_1238_);
v___x_1240_ = lean_apply_4(v_toBind_1233_, lean_box(0), lean_box(0), v___x_1237_, v___f_1239_);
return v___x_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___boxed(lean_object* v_inst_1241_, lean_object* v_t_1242_, lean_object* v_init_1243_, lean_object* v_f_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l_Lean_PersistentArray_forIn___redArg(v_inst_1241_, v_t_1242_, v_init_1243_, v_f_1244_);
lean_dec_ref(v_t_1242_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn(lean_object* v_00_u03b1_1246_, lean_object* v_m_1247_, lean_object* v_inst_1248_, lean_object* v_00_u03b2_1249_, lean_object* v_t_1250_, lean_object* v_init_1251_, lean_object* v_f_1252_){
_start:
{
lean_object* v___x_1253_; 
v___x_1253_ = l_Lean_PersistentArray_forIn___redArg(v_inst_1248_, v_t_1250_, v_init_1251_, v_f_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___boxed(lean_object* v_00_u03b1_1254_, lean_object* v_m_1255_, lean_object* v_inst_1256_, lean_object* v_00_u03b2_1257_, lean_object* v_t_1258_, lean_object* v_init_1259_, lean_object* v_f_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lean_PersistentArray_forIn(v_00_u03b1_1254_, v_m_1255_, v_inst_1256_, v_00_u03b2_1257_, v_t_1258_, v_init_1259_, v_f_1260_);
lean_dec_ref(v_t_1258_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instForInOfMonad___redArg(lean_object* v_inst_1262_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___boxed), 7, 3);
lean_closure_set(v___x_1263_, 0, lean_box(0));
lean_closure_set(v___x_1263_, 1, lean_box(0));
lean_closure_set(v___x_1263_, 2, v_inst_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instForInOfMonad(lean_object* v_00_u03b1_1264_, lean_object* v_m_1265_, lean_object* v_inst_1266_){
_start:
{
lean_object* v___x_1267_; 
v___x_1267_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___boxed), 7, 3);
lean_closure_set(v___x_1267_, 0, lean_box(0));
lean_closure_set(v___x_1267_, 1, lean_box(0));
lean_closure_set(v___x_1267_, 2, v_inst_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__0(lean_object* v_toPure_1268_, lean_object* v_____s_1269_){
_start:
{
lean_object* v_fst_1270_; 
v_fst_1270_ = lean_ctor_get(v_____s_1269_, 0);
lean_inc(v_fst_1270_);
lean_dec_ref(v_____s_1269_);
if (lean_obj_tag(v_fst_1270_) == 0)
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = lean_box(0);
v___x_1272_ = lean_apply_2(v_toPure_1268_, lean_box(0), v___x_1271_);
return v___x_1272_;
}
else
{
lean_object* v_val_1273_; lean_object* v___x_1274_; 
v_val_1273_ = lean_ctor_get(v_fst_1270_, 0);
lean_inc(v_val_1273_);
lean_dec_ref_known(v_fst_1270_, 1);
v___x_1274_ = lean_apply_2(v_toPure_1268_, lean_box(0), v_val_1273_);
return v___x_1274_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__1(lean_object* v___x_1275_, lean_object* v_toPure_1276_, lean_object* v___x_1277_, lean_object* v_____do__lift_1278_){
_start:
{
if (lean_obj_tag(v_____do__lift_1278_) == 1)
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
lean_dec_ref(v___x_1277_);
v___x_1279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1279_, 0, v_____do__lift_1278_);
v___x_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
lean_ctor_set(v___x_1280_, 1, v___x_1275_);
v___x_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1280_);
v___x_1282_ = lean_apply_2(v_toPure_1276_, lean_box(0), v___x_1281_);
return v___x_1282_;
}
else
{
lean_object* v___x_1283_; lean_object* v___x_1284_; 
lean_dec(v_____do__lift_1278_);
v___x_1283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1277_);
v___x_1284_ = lean_apply_2(v_toPure_1276_, lean_box(0), v___x_1283_);
return v___x_1284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__5(lean_object* v_f_1285_, lean_object* v_toBind_1286_, lean_object* v___f_1287_, lean_object* v_a_1288_, lean_object* v_x_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = lean_apply_1(v_f_1285_, v_a_1288_);
v___x_1292_ = lean_apply_4(v_toBind_1286_, lean_box(0), lean_box(0), v___x_1291_, v___f_1287_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__5___boxed(lean_object* v_f_1293_, lean_object* v_toBind_1294_, lean_object* v___f_1295_, lean_object* v_a_1296_, lean_object* v_x_1297_, lean_object* v___y_1298_){
_start:
{
lean_object* v_res_1299_; 
v_res_1299_ = l_Lean_PersistentArray_findSomeMAux___redArg___lam__5(v_f_1293_, v_toBind_1294_, v___f_1295_, v_a_1296_, v_x_1297_, v___y_1298_);
lean_dec_ref(v___y_1298_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__2___boxed(lean_object* v_inst_1303_, lean_object* v_f_1304_, lean_object* v_toBind_1305_, lean_object* v___f_1306_, lean_object* v_a_1307_, lean_object* v_x_1308_, lean_object* v___y_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l_Lean_PersistentArray_findSomeMAux___redArg___lam__2(v_inst_1303_, v_f_1304_, v_toBind_1305_, v___f_1306_, v_a_1307_, v_x_1308_, v___y_1309_);
lean_dec_ref(v___y_1309_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg(lean_object* v_inst_1311_, lean_object* v_f_1312_, lean_object* v_x_1313_){
_start:
{
if (lean_obj_tag(v_x_1313_) == 0)
{
lean_object* v_toApplicative_1314_; lean_object* v_cs_1315_; lean_object* v_toBind_1316_; lean_object* v_toPure_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___f_1320_; lean_object* v___f_1321_; lean_object* v___f_1322_; size_t v_sz_1323_; size_t v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v_toApplicative_1314_ = lean_ctor_get(v_inst_1311_, 0);
v_cs_1315_ = lean_ctor_get(v_x_1313_, 0);
lean_inc_ref(v_cs_1315_);
lean_dec_ref_known(v_x_1313_, 1);
v_toBind_1316_ = lean_ctor_get(v_inst_1311_, 1);
lean_inc_n(v_toBind_1316_, 2);
v_toPure_1317_ = lean_ctor_get(v_toApplicative_1314_, 1);
v___x_1318_ = lean_box(0);
v___x_1319_ = ((lean_object*)(l_Lean_PersistentArray_findSomeMAux___redArg___closed__0));
lean_inc_n(v_toPure_1317_, 2);
v___f_1320_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1320_, 0, v_toPure_1317_);
v___f_1321_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1321_, 0, v___x_1318_);
lean_closure_set(v___f_1321_, 1, v_toPure_1317_);
lean_closure_set(v___f_1321_, 2, v___x_1319_);
lean_inc_ref(v_inst_1311_);
v___f_1322_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__2___boxed), 7, 4);
lean_closure_set(v___f_1322_, 0, v_inst_1311_);
lean_closure_set(v___f_1322_, 1, v_f_1312_);
lean_closure_set(v___f_1322_, 2, v_toBind_1316_);
lean_closure_set(v___f_1322_, 3, v___f_1321_);
v_sz_1323_ = lean_array_size(v_cs_1315_);
v___x_1324_ = ((size_t)0ULL);
v___x_1325_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1311_, v_cs_1315_, v___f_1322_, v_sz_1323_, v___x_1324_, v___x_1319_);
v___x_1326_ = lean_apply_4(v_toBind_1316_, lean_box(0), lean_box(0), v___x_1325_, v___f_1320_);
return v___x_1326_;
}
else
{
lean_object* v_toApplicative_1327_; lean_object* v_vs_1328_; lean_object* v_toBind_1329_; lean_object* v_toPure_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___f_1333_; lean_object* v___f_1334_; lean_object* v___f_1335_; size_t v_sz_1336_; size_t v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v_toApplicative_1327_ = lean_ctor_get(v_inst_1311_, 0);
v_vs_1328_ = lean_ctor_get(v_x_1313_, 0);
lean_inc_ref(v_vs_1328_);
lean_dec_ref_known(v_x_1313_, 1);
v_toBind_1329_ = lean_ctor_get(v_inst_1311_, 1);
lean_inc_n(v_toBind_1329_, 2);
v_toPure_1330_ = lean_ctor_get(v_toApplicative_1327_, 1);
v___x_1331_ = lean_box(0);
v___x_1332_ = ((lean_object*)(l_Lean_PersistentArray_findSomeMAux___redArg___closed__0));
lean_inc_n(v_toPure_1330_, 2);
v___f_1333_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1333_, 0, v_toPure_1330_);
v___f_1334_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1334_, 0, v___x_1331_);
lean_closure_set(v___f_1334_, 1, v_toPure_1330_);
lean_closure_set(v___f_1334_, 2, v___x_1332_);
v___f_1335_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__5___boxed), 6, 3);
lean_closure_set(v___f_1335_, 0, v_f_1312_);
lean_closure_set(v___f_1335_, 1, v_toBind_1329_);
lean_closure_set(v___f_1335_, 2, v___f_1334_);
v_sz_1336_ = lean_array_size(v_vs_1328_);
v___x_1337_ = ((size_t)0ULL);
v___x_1338_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1311_, v_vs_1328_, v___f_1335_, v_sz_1336_, v___x_1337_, v___x_1332_);
v___x_1339_ = lean_apply_4(v_toBind_1329_, lean_box(0), lean_box(0), v___x_1338_, v___f_1333_);
return v___x_1339_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__2(lean_object* v_inst_1340_, lean_object* v_f_1341_, lean_object* v_toBind_1342_, lean_object* v___f_1343_, lean_object* v_a_1344_, lean_object* v_x_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = l_Lean_PersistentArray_findSomeMAux___redArg(v_inst_1340_, v_f_1341_, v_a_1344_);
v___x_1348_ = lean_apply_4(v_toBind_1342_, lean_box(0), lean_box(0), v___x_1347_, v___f_1343_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux(lean_object* v_00_u03b1_1349_, lean_object* v_m_1350_, lean_object* v_inst_1351_, lean_object* v_00_u03b2_1352_, lean_object* v_f_1353_, lean_object* v_x_1354_){
_start:
{
lean_object* v___x_1355_; 
v___x_1355_ = l_Lean_PersistentArray_findSomeMAux___redArg(v_inst_1351_, v_f_1353_, v_x_1354_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__0(lean_object* v_toPure_1356_, lean_object* v_____do__lift_1357_, lean_object* v_____s_1358_){
_start:
{
lean_object* v_fst_1359_; 
v_fst_1359_ = lean_ctor_get(v_____s_1358_, 0);
lean_inc(v_fst_1359_);
lean_dec_ref(v_____s_1358_);
if (lean_obj_tag(v_fst_1359_) == 0)
{
lean_object* v___x_1360_; 
v___x_1360_ = lean_apply_2(v_toPure_1356_, lean_box(0), v_____do__lift_1357_);
return v___x_1360_;
}
else
{
lean_object* v_val_1361_; lean_object* v___x_1362_; 
lean_dec(v_____do__lift_1357_);
v_val_1361_ = lean_ctor_get(v_fst_1359_, 0);
lean_inc(v_val_1361_);
lean_dec_ref_known(v_fst_1359_, 1);
v___x_1362_ = lean_apply_2(v_toPure_1356_, lean_box(0), v_val_1361_);
return v___x_1362_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__1(lean_object* v___x_1363_, lean_object* v_toPure_1364_, lean_object* v___x_1365_, lean_object* v_____do__lift_1366_){
_start:
{
if (lean_obj_tag(v_____do__lift_1366_) == 1)
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
lean_dec_ref(v___x_1365_);
v___x_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1367_, 0, v_____do__lift_1366_);
v___x_1368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
lean_ctor_set(v___x_1368_, 1, v___x_1363_);
v___x_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1368_);
v___x_1370_ = lean_apply_2(v_toPure_1364_, lean_box(0), v___x_1369_);
return v___x_1370_;
}
else
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
lean_dec(v_____do__lift_1366_);
v___x_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1365_);
v___x_1372_ = lean_apply_2(v_toPure_1364_, lean_box(0), v___x_1371_);
return v___x_1372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2(lean_object* v_f_1373_, lean_object* v_toBind_1374_, lean_object* v___f_1375_, lean_object* v_a_1376_, lean_object* v_x_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = lean_apply_1(v_f_1373_, v_a_1376_);
v___x_1380_ = lean_apply_4(v_toBind_1374_, lean_box(0), lean_box(0), v___x_1379_, v___f_1375_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2___boxed(lean_object* v_f_1381_, lean_object* v_toBind_1382_, lean_object* v___f_1383_, lean_object* v_a_1384_, lean_object* v_x_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2(v_f_1381_, v_toBind_1382_, v___f_1383_, v_a_1384_, v_x_1385_, v___y_1386_);
lean_dec_ref(v___y_1386_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__3(lean_object* v_toPure_1388_, lean_object* v_f_1389_, lean_object* v_toBind_1390_, lean_object* v_tail_1391_, lean_object* v_inst_1392_, lean_object* v_____do__lift_1393_){
_start:
{
if (lean_obj_tag(v_____do__lift_1393_) == 0)
{
lean_object* v___f_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___f_1397_; lean_object* v___f_1398_; size_t v_sz_1399_; size_t v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
lean_inc(v_toPure_1388_);
v___f_1394_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1394_, 0, v_toPure_1388_);
lean_closure_set(v___f_1394_, 1, v_____do__lift_1393_);
v___x_1395_ = lean_box(0);
v___x_1396_ = ((lean_object*)(l_Lean_PersistentArray_findSomeMAux___redArg___closed__0));
v___f_1397_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1397_, 0, v___x_1395_);
lean_closure_set(v___f_1397_, 1, v_toPure_1388_);
lean_closure_set(v___f_1397_, 2, v___x_1396_);
lean_inc(v_toBind_1390_);
v___f_1398_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_1398_, 0, v_f_1389_);
lean_closure_set(v___f_1398_, 1, v_toBind_1390_);
lean_closure_set(v___f_1398_, 2, v___f_1397_);
v_sz_1399_ = lean_array_size(v_tail_1391_);
v___x_1400_ = ((size_t)0ULL);
v___x_1401_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1392_, v_tail_1391_, v___f_1398_, v_sz_1399_, v___x_1400_, v___x_1396_);
v___x_1402_ = lean_apply_4(v_toBind_1390_, lean_box(0), lean_box(0), v___x_1401_, v___f_1394_);
return v___x_1402_;
}
else
{
lean_object* v___x_1403_; 
lean_dec_ref(v_inst_1392_);
lean_dec_ref(v_tail_1391_);
lean_dec(v_toBind_1390_);
lean_dec(v_f_1389_);
v___x_1403_ = lean_apply_2(v_toPure_1388_, lean_box(0), v_____do__lift_1393_);
return v___x_1403_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg(lean_object* v_inst_1404_, lean_object* v_t_1405_, lean_object* v_f_1406_){
_start:
{
lean_object* v_toApplicative_1407_; lean_object* v_toBind_1408_; lean_object* v_root_1409_; lean_object* v_tail_1410_; lean_object* v_toPure_1411_; lean_object* v___x_1412_; lean_object* v___f_1413_; lean_object* v___x_1414_; 
v_toApplicative_1407_ = lean_ctor_get(v_inst_1404_, 0);
v_toBind_1408_ = lean_ctor_get(v_inst_1404_, 1);
lean_inc_n(v_toBind_1408_, 2);
v_root_1409_ = lean_ctor_get(v_t_1405_, 0);
lean_inc_ref(v_root_1409_);
v_tail_1410_ = lean_ctor_get(v_t_1405_, 1);
lean_inc_ref(v_tail_1410_);
lean_dec_ref(v_t_1405_);
v_toPure_1411_ = lean_ctor_get(v_toApplicative_1407_, 1);
lean_inc(v_toPure_1411_);
lean_inc(v_f_1406_);
lean_inc_ref(v_inst_1404_);
v___x_1412_ = l_Lean_PersistentArray_findSomeMAux___redArg(v_inst_1404_, v_f_1406_, v_root_1409_);
v___f_1413_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__3), 6, 5);
lean_closure_set(v___f_1413_, 0, v_toPure_1411_);
lean_closure_set(v___f_1413_, 1, v_f_1406_);
lean_closure_set(v___f_1413_, 2, v_toBind_1408_);
lean_closure_set(v___f_1413_, 3, v_tail_1410_);
lean_closure_set(v___f_1413_, 4, v_inst_1404_);
v___x_1414_ = lean_apply_4(v_toBind_1408_, lean_box(0), lean_box(0), v___x_1412_, v___f_1413_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f(lean_object* v_00_u03b1_1415_, lean_object* v_m_1416_, lean_object* v_inst_1417_, lean_object* v_00_u03b2_1418_, lean_object* v_t_1419_, lean_object* v_f_1420_){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Lean_PersistentArray_findSomeM_x3f___redArg(v_inst_1417_, v_t_1419_, v_f_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___redArg(lean_object* v_inst_1422_, lean_object* v_f_1423_, lean_object* v_x_1424_){
_start:
{
if (lean_obj_tag(v_x_1424_) == 0)
{
lean_object* v_cs_1425_; lean_object* v___f_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v_cs_1425_ = lean_ctor_get(v_x_1424_, 0);
lean_inc_ref(v_cs_1425_);
lean_dec_ref_known(v_x_1424_, 1);
lean_inc_ref(v_inst_1422_);
v___f_1426_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeRevMAux___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1426_, 0, v_inst_1422_);
lean_closure_set(v___f_1426_, 1, v_f_1423_);
v___x_1427_ = lean_array_get_size(v_cs_1425_);
v___x_1428_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v_inst_1422_, v___f_1426_, v_cs_1425_, v___x_1427_, lean_box(0));
return v___x_1428_;
}
else
{
lean_object* v_vs_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v_vs_1429_ = lean_ctor_get(v_x_1424_, 0);
lean_inc_ref(v_vs_1429_);
lean_dec_ref_known(v_x_1424_, 1);
v___x_1430_ = lean_array_get_size(v_vs_1429_);
v___x_1431_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v_inst_1422_, v_f_1423_, v_vs_1429_, v___x_1430_, lean_box(0));
return v___x_1431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___redArg___lam__0(lean_object* v_inst_1432_, lean_object* v_f_1433_, lean_object* v_c_1434_){
_start:
{
lean_object* v___x_1435_; 
v___x_1435_ = l_Lean_PersistentArray_findSomeRevMAux___redArg(v_inst_1432_, v_f_1433_, v_c_1434_);
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux(lean_object* v_00_u03b1_1436_, lean_object* v_m_1437_, lean_object* v_inst_1438_, lean_object* v_00_u03b2_1439_, lean_object* v_f_1440_, lean_object* v_x_1441_){
_start:
{
lean_object* v___x_1442_; 
v___x_1442_ = l_Lean_PersistentArray_findSomeRevMAux___redArg(v_inst_1438_, v_f_1440_, v_x_1441_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg___lam__0(lean_object* v_inst_1443_, lean_object* v_f_1444_, lean_object* v_root_1445_, lean_object* v_toPure_1446_, lean_object* v_____do__lift_1447_){
_start:
{
if (lean_obj_tag(v_____do__lift_1447_) == 0)
{
lean_object* v___x_1448_; 
lean_dec(v_toPure_1446_);
v___x_1448_ = l_Lean_PersistentArray_findSomeRevMAux___redArg(v_inst_1443_, v_f_1444_, v_root_1445_);
return v___x_1448_;
}
else
{
lean_object* v___x_1449_; 
lean_dec_ref(v_root_1445_);
lean_dec(v_f_1444_);
lean_dec_ref(v_inst_1443_);
v___x_1449_ = lean_apply_2(v_toPure_1446_, lean_box(0), v_____do__lift_1447_);
return v___x_1449_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg(lean_object* v_inst_1450_, lean_object* v_t_1451_, lean_object* v_f_1452_){
_start:
{
lean_object* v_toApplicative_1453_; lean_object* v_toBind_1454_; lean_object* v_root_1455_; lean_object* v_tail_1456_; lean_object* v_toPure_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___f_1460_; lean_object* v___x_1461_; 
v_toApplicative_1453_ = lean_ctor_get(v_inst_1450_, 0);
v_toBind_1454_ = lean_ctor_get(v_inst_1450_, 1);
lean_inc(v_toBind_1454_);
v_root_1455_ = lean_ctor_get(v_t_1451_, 0);
lean_inc_ref(v_root_1455_);
v_tail_1456_ = lean_ctor_get(v_t_1451_, 1);
lean_inc_ref(v_tail_1456_);
lean_dec_ref(v_t_1451_);
v_toPure_1457_ = lean_ctor_get(v_toApplicative_1453_, 1);
lean_inc(v_toPure_1457_);
v___x_1458_ = lean_array_get_size(v_tail_1456_);
lean_inc(v_f_1452_);
lean_inc_ref(v_inst_1450_);
v___x_1459_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v_inst_1450_, v_f_1452_, v_tail_1456_, v___x_1458_, lean_box(0));
v___f_1460_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeRevM_x3f___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1460_, 0, v_inst_1450_);
lean_closure_set(v___f_1460_, 1, v_f_1452_);
lean_closure_set(v___f_1460_, 2, v_root_1455_);
lean_closure_set(v___f_1460_, 3, v_toPure_1457_);
v___x_1461_ = lean_apply_4(v_toBind_1454_, lean_box(0), lean_box(0), v___x_1459_, v___f_1460_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f(lean_object* v_00_u03b1_1462_, lean_object* v_m_1463_, lean_object* v_inst_1464_, lean_object* v_00_u03b2_1465_, lean_object* v_t_1466_, lean_object* v_f_1467_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v_inst_1464_, v_t_1466_, v_f_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg___lam__1(lean_object* v_f_1469_, lean_object* v_x_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___x_1472_; 
v___x_1472_ = lean_apply_1(v_f_1469_, v___y_1471_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg(lean_object* v_inst_1473_, lean_object* v_f_1474_, lean_object* v_x_1475_){
_start:
{
if (lean_obj_tag(v_x_1475_) == 0)
{
lean_object* v_toApplicative_1476_; lean_object* v_cs_1477_; lean_object* v_toPure_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; uint8_t v___x_1482_; 
v_toApplicative_1476_ = lean_ctor_get(v_inst_1473_, 0);
v_cs_1477_ = lean_ctor_get(v_x_1475_, 0);
lean_inc_ref(v_cs_1477_);
lean_dec_ref_known(v_x_1475_, 1);
v_toPure_1478_ = lean_ctor_get(v_toApplicative_1476_, 1);
v___x_1479_ = lean_unsigned_to_nat(0u);
v___x_1480_ = lean_array_get_size(v_cs_1477_);
v___x_1481_ = lean_box(0);
v___x_1482_ = lean_nat_dec_lt(v___x_1479_, v___x_1480_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; 
lean_inc(v_toPure_1478_);
lean_dec_ref(v_cs_1477_);
lean_dec(v_f_1474_);
lean_dec_ref(v_inst_1473_);
v___x_1483_ = lean_apply_2(v_toPure_1478_, lean_box(0), v___x_1481_);
return v___x_1483_;
}
else
{
lean_object* v___f_1484_; uint8_t v___x_1485_; 
lean_inc_ref(v_inst_1473_);
v___f_1484_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1484_, 0, v_inst_1473_);
lean_closure_set(v___f_1484_, 1, v_f_1474_);
v___x_1485_ = lean_nat_dec_le(v___x_1480_, v___x_1480_);
if (v___x_1485_ == 0)
{
if (v___x_1482_ == 0)
{
lean_object* v___x_1486_; 
lean_inc(v_toPure_1478_);
lean_dec_ref(v___f_1484_);
lean_dec_ref(v_cs_1477_);
lean_dec_ref(v_inst_1473_);
v___x_1486_ = lean_apply_2(v_toPure_1478_, lean_box(0), v___x_1481_);
return v___x_1486_;
}
else
{
size_t v___x_1487_; size_t v___x_1488_; lean_object* v___x_1489_; 
v___x_1487_ = ((size_t)0ULL);
v___x_1488_ = lean_usize_of_nat(v___x_1480_);
v___x_1489_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1473_, v___f_1484_, v_cs_1477_, v___x_1487_, v___x_1488_, v___x_1481_);
return v___x_1489_;
}
}
else
{
size_t v___x_1490_; size_t v___x_1491_; lean_object* v___x_1492_; 
v___x_1490_ = ((size_t)0ULL);
v___x_1491_ = lean_usize_of_nat(v___x_1480_);
v___x_1492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1473_, v___f_1484_, v_cs_1477_, v___x_1490_, v___x_1491_, v___x_1481_);
return v___x_1492_;
}
}
}
else
{
lean_object* v_toApplicative_1493_; lean_object* v_vs_1494_; lean_object* v_toPure_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; uint8_t v___x_1499_; 
v_toApplicative_1493_ = lean_ctor_get(v_inst_1473_, 0);
v_vs_1494_ = lean_ctor_get(v_x_1475_, 0);
lean_inc_ref(v_vs_1494_);
lean_dec_ref_known(v_x_1475_, 1);
v_toPure_1495_ = lean_ctor_get(v_toApplicative_1493_, 1);
v___x_1496_ = lean_unsigned_to_nat(0u);
v___x_1497_ = lean_array_get_size(v_vs_1494_);
v___x_1498_ = lean_box(0);
v___x_1499_ = lean_nat_dec_lt(v___x_1496_, v___x_1497_);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; 
lean_inc(v_toPure_1495_);
lean_dec_ref(v_vs_1494_);
lean_dec(v_f_1474_);
lean_dec_ref(v_inst_1473_);
v___x_1500_ = lean_apply_2(v_toPure_1495_, lean_box(0), v___x_1498_);
return v___x_1500_;
}
else
{
lean_object* v___f_1501_; uint8_t v___x_1502_; 
v___f_1501_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMAux___redArg___lam__1), 3, 1);
lean_closure_set(v___f_1501_, 0, v_f_1474_);
v___x_1502_ = lean_nat_dec_le(v___x_1497_, v___x_1497_);
if (v___x_1502_ == 0)
{
if (v___x_1499_ == 0)
{
lean_object* v___x_1503_; 
lean_inc(v_toPure_1495_);
lean_dec_ref(v___f_1501_);
lean_dec_ref(v_vs_1494_);
lean_dec_ref(v_inst_1473_);
v___x_1503_ = lean_apply_2(v_toPure_1495_, lean_box(0), v___x_1498_);
return v___x_1503_;
}
else
{
size_t v___x_1504_; size_t v___x_1505_; lean_object* v___x_1506_; 
v___x_1504_ = ((size_t)0ULL);
v___x_1505_ = lean_usize_of_nat(v___x_1497_);
v___x_1506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1473_, v___f_1501_, v_vs_1494_, v___x_1504_, v___x_1505_, v___x_1498_);
return v___x_1506_;
}
}
else
{
size_t v___x_1507_; size_t v___x_1508_; lean_object* v___x_1509_; 
v___x_1507_ = ((size_t)0ULL);
v___x_1508_ = lean_usize_of_nat(v___x_1497_);
v___x_1509_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1473_, v___f_1501_, v_vs_1494_, v___x_1507_, v___x_1508_, v___x_1498_);
return v___x_1509_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg___lam__0(lean_object* v_inst_1510_, lean_object* v_f_1511_, lean_object* v_x_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l_Lean_PersistentArray_forMAux___redArg(v_inst_1510_, v_f_1511_, v___y_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux(lean_object* v_00_u03b1_1515_, lean_object* v_m_1516_, lean_object* v_inst_1517_, lean_object* v_f_1518_, lean_object* v_x_1519_){
_start:
{
lean_object* v___x_1520_; 
v___x_1520_ = l_Lean_PersistentArray_forMAux___redArg(v_inst_1517_, v_f_1518_, v_x_1519_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg___lam__0(lean_object* v_f_1521_, lean_object* v_x_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_apply_1(v_f_1521_, v___y_1523_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg___lam__1(lean_object* v_tail_1525_, lean_object* v_toPure_1526_, lean_object* v_inst_1527_, lean_object* v___f_1528_, lean_object* v_x_1529_){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; uint8_t v___x_1533_; 
v___x_1530_ = lean_unsigned_to_nat(0u);
v___x_1531_ = lean_array_get_size(v_tail_1525_);
v___x_1532_ = lean_box(0);
v___x_1533_ = lean_nat_dec_lt(v___x_1530_, v___x_1531_);
if (v___x_1533_ == 0)
{
lean_object* v___x_1534_; 
lean_dec(v___f_1528_);
lean_dec_ref(v_inst_1527_);
lean_dec_ref(v_tail_1525_);
v___x_1534_ = lean_apply_2(v_toPure_1526_, lean_box(0), v___x_1532_);
return v___x_1534_;
}
else
{
uint8_t v___x_1535_; 
v___x_1535_ = lean_nat_dec_le(v___x_1531_, v___x_1531_);
if (v___x_1535_ == 0)
{
if (v___x_1533_ == 0)
{
lean_object* v___x_1536_; 
lean_dec(v___f_1528_);
lean_dec_ref(v_inst_1527_);
lean_dec_ref(v_tail_1525_);
v___x_1536_ = lean_apply_2(v_toPure_1526_, lean_box(0), v___x_1532_);
return v___x_1536_;
}
else
{
size_t v___x_1537_; size_t v___x_1538_; lean_object* v___x_1539_; 
lean_dec(v_toPure_1526_);
v___x_1537_ = ((size_t)0ULL);
v___x_1538_ = lean_usize_of_nat(v___x_1531_);
v___x_1539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1527_, v___f_1528_, v_tail_1525_, v___x_1537_, v___x_1538_, v___x_1532_);
return v___x_1539_;
}
}
else
{
size_t v___x_1540_; size_t v___x_1541_; lean_object* v___x_1542_; 
lean_dec(v_toPure_1526_);
v___x_1540_ = ((size_t)0ULL);
v___x_1541_ = lean_usize_of_nat(v___x_1531_);
v___x_1542_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1527_, v___f_1528_, v_tail_1525_, v___x_1540_, v___x_1541_, v___x_1532_);
return v___x_1542_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg(lean_object* v_inst_1543_, lean_object* v_t_1544_, lean_object* v_f_1545_){
_start:
{
lean_object* v_toApplicative_1546_; lean_object* v_toPure_1547_; lean_object* v_toSeqRight_1548_; lean_object* v_root_1549_; lean_object* v_tail_1550_; lean_object* v___f_1551_; lean_object* v___f_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v_toApplicative_1546_ = lean_ctor_get(v_inst_1543_, 0);
v_toPure_1547_ = lean_ctor_get(v_toApplicative_1546_, 1);
v_toSeqRight_1548_ = lean_ctor_get(v_toApplicative_1546_, 4);
lean_inc(v_toSeqRight_1548_);
v_root_1549_ = lean_ctor_get(v_t_1544_, 0);
lean_inc_ref(v_root_1549_);
v_tail_1550_ = lean_ctor_get(v_t_1544_, 1);
lean_inc_ref(v_tail_1550_);
lean_dec_ref(v_t_1544_);
lean_inc(v_f_1545_);
v___f_1551_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMFrom0___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1551_, 0, v_f_1545_);
lean_inc_ref(v_inst_1543_);
lean_inc(v_toPure_1547_);
v___f_1552_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMFrom0___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1552_, 0, v_tail_1550_);
lean_closure_set(v___f_1552_, 1, v_toPure_1547_);
lean_closure_set(v___f_1552_, 2, v_inst_1543_);
lean_closure_set(v___f_1552_, 3, v___f_1551_);
v___x_1553_ = l_Lean_PersistentArray_forMAux___redArg(v_inst_1543_, v_f_1545_, v_root_1549_);
v___x_1554_ = lean_apply_4(v_toSeqRight_1548_, lean_box(0), lean_box(0), v___x_1553_, v___f_1552_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0(lean_object* v_00_u03b1_1555_, lean_object* v_m_1556_, lean_object* v_inst_1557_, lean_object* v_t_1558_, lean_object* v_f_1559_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = l_Lean_PersistentArray_forMFrom0___redArg(v_inst_1557_, v_t_1558_, v_f_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1(lean_object* v_toApplicative_1561_, lean_object* v_j_1562_, lean_object* v_cs_1563_, lean_object* v_inst_1564_, lean_object* v___f_1565_, lean_object* v_____r_1566_){
_start:
{
lean_object* v_toPure_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v_toPure_1567_ = lean_ctor_get(v_toApplicative_1561_, 1);
lean_inc(v_toPure_1567_);
lean_dec_ref(v_toApplicative_1561_);
v___x_1568_ = lean_unsigned_to_nat(1u);
v___x_1569_ = lean_nat_add(v_j_1562_, v___x_1568_);
v___x_1570_ = lean_array_get_size(v_cs_1563_);
v___x_1571_ = lean_box(0);
v___x_1572_ = lean_nat_dec_lt(v___x_1569_, v___x_1570_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1573_; 
lean_dec(v___x_1569_);
lean_dec(v___f_1565_);
lean_dec_ref(v_inst_1564_);
lean_dec_ref(v_cs_1563_);
v___x_1573_ = lean_apply_2(v_toPure_1567_, lean_box(0), v___x_1571_);
return v___x_1573_;
}
else
{
uint8_t v___x_1574_; 
v___x_1574_ = lean_nat_dec_le(v___x_1570_, v___x_1570_);
if (v___x_1574_ == 0)
{
if (v___x_1572_ == 0)
{
lean_object* v___x_1575_; 
lean_dec(v___x_1569_);
lean_dec(v___f_1565_);
lean_dec_ref(v_inst_1564_);
lean_dec_ref(v_cs_1563_);
v___x_1575_ = lean_apply_2(v_toPure_1567_, lean_box(0), v___x_1571_);
return v___x_1575_;
}
else
{
size_t v___x_1576_; size_t v___x_1577_; lean_object* v___x_1578_; 
lean_dec(v_toPure_1567_);
v___x_1576_ = lean_usize_of_nat(v___x_1569_);
lean_dec(v___x_1569_);
v___x_1577_ = lean_usize_of_nat(v___x_1570_);
v___x_1578_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1564_, v___f_1565_, v_cs_1563_, v___x_1576_, v___x_1577_, v___x_1571_);
return v___x_1578_;
}
}
else
{
size_t v___x_1579_; size_t v___x_1580_; lean_object* v___x_1581_; 
lean_dec(v_toPure_1567_);
v___x_1579_ = lean_usize_of_nat(v___x_1569_);
lean_dec(v___x_1569_);
v___x_1580_ = lean_usize_of_nat(v___x_1570_);
v___x_1581_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1564_, v___f_1565_, v_cs_1563_, v___x_1579_, v___x_1580_, v___x_1571_);
return v___x_1581_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1___boxed(lean_object* v_toApplicative_1582_, lean_object* v_j_1583_, lean_object* v_cs_1584_, lean_object* v_inst_1585_, lean_object* v___f_1586_, lean_object* v_____r_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1(v_toApplicative_1582_, v_j_1583_, v_cs_1584_, v_inst_1585_, v___f_1586_, v_____r_1587_);
lean_dec(v_j_1583_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(lean_object* v_inst_1589_, lean_object* v_f_1590_, lean_object* v_x_1591_, size_t v_x_1592_, size_t v_x_1593_){
_start:
{
if (lean_obj_tag(v_x_1591_) == 0)
{
lean_object* v_toApplicative_1594_; lean_object* v_toBind_1595_; lean_object* v_cs_1596_; lean_object* v___f_1597_; lean_object* v___x_1598_; size_t v___x_1599_; lean_object* v_j_1600_; lean_object* v___f_1601_; lean_object* v___x_1602_; size_t v___x_1603_; size_t v___x_1604_; size_t v___x_1605_; size_t v___x_1606_; size_t v___x_1607_; size_t v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v_toApplicative_1594_ = lean_ctor_get(v_inst_1589_, 0);
v_toBind_1595_ = lean_ctor_get(v_inst_1589_, 1);
lean_inc(v_toBind_1595_);
v_cs_1596_ = lean_ctor_get(v_x_1591_, 0);
lean_inc_ref_n(v_cs_1596_, 2);
lean_dec_ref_known(v_x_1591_, 1);
lean_inc(v_f_1590_);
lean_inc_ref_n(v_inst_1589_, 2);
v___f_1597_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1597_, 0, v_inst_1589_);
lean_closure_set(v___f_1597_, 1, v_f_1590_);
v___x_1598_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_1599_ = lean_usize_shift_right(v_x_1592_, v_x_1593_);
v_j_1600_ = lean_usize_to_nat(v___x_1599_);
lean_inc(v_j_1600_);
lean_inc_ref(v_toApplicative_1594_);
v___f_1601_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1601_, 0, v_toApplicative_1594_);
lean_closure_set(v___f_1601_, 1, v_j_1600_);
lean_closure_set(v___f_1601_, 2, v_cs_1596_);
lean_closure_set(v___f_1601_, 3, v_inst_1589_);
lean_closure_set(v___f_1601_, 4, v___f_1597_);
v___x_1602_ = lean_array_get(v___x_1598_, v_cs_1596_, v_j_1600_);
lean_dec(v_j_1600_);
lean_dec_ref(v_cs_1596_);
v___x_1603_ = ((size_t)1ULL);
v___x_1604_ = lean_usize_shift_left(v___x_1603_, v_x_1593_);
v___x_1605_ = lean_usize_sub(v___x_1604_, v___x_1603_);
v___x_1606_ = lean_usize_land(v_x_1592_, v___x_1605_);
v___x_1607_ = ((size_t)5ULL);
v___x_1608_ = lean_usize_sub(v_x_1593_, v___x_1607_);
v___x_1609_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(v_inst_1589_, v_f_1590_, v___x_1602_, v___x_1606_, v___x_1608_);
v___x_1610_ = lean_apply_4(v_toBind_1595_, lean_box(0), lean_box(0), v___x_1609_, v___f_1601_);
return v___x_1610_;
}
else
{
lean_object* v_toApplicative_1611_; lean_object* v_vs_1612_; lean_object* v_toPure_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; uint8_t v___x_1617_; 
v_toApplicative_1611_ = lean_ctor_get(v_inst_1589_, 0);
v_vs_1612_ = lean_ctor_get(v_x_1591_, 0);
lean_inc_ref(v_vs_1612_);
lean_dec_ref_known(v_x_1591_, 1);
v_toPure_1613_ = lean_ctor_get(v_toApplicative_1611_, 1);
v___x_1614_ = lean_usize_to_nat(v_x_1592_);
v___x_1615_ = lean_array_get_size(v_vs_1612_);
v___x_1616_ = lean_box(0);
v___x_1617_ = lean_nat_dec_lt(v___x_1614_, v___x_1615_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; 
lean_inc(v_toPure_1613_);
lean_dec(v___x_1614_);
lean_dec_ref(v_vs_1612_);
lean_dec(v_f_1590_);
lean_dec_ref(v_inst_1589_);
v___x_1618_ = lean_apply_2(v_toPure_1613_, lean_box(0), v___x_1616_);
return v___x_1618_;
}
else
{
lean_object* v___f_1619_; uint8_t v___x_1620_; 
v___f_1619_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMAux___redArg___lam__1), 3, 1);
lean_closure_set(v___f_1619_, 0, v_f_1590_);
v___x_1620_ = lean_nat_dec_le(v___x_1615_, v___x_1615_);
if (v___x_1620_ == 0)
{
if (v___x_1617_ == 0)
{
lean_object* v___x_1621_; 
lean_inc(v_toPure_1613_);
lean_dec_ref(v___f_1619_);
lean_dec(v___x_1614_);
lean_dec_ref(v_vs_1612_);
lean_dec_ref(v_inst_1589_);
v___x_1621_ = lean_apply_2(v_toPure_1613_, lean_box(0), v___x_1616_);
return v___x_1621_;
}
else
{
size_t v___x_1622_; size_t v___x_1623_; lean_object* v___x_1624_; 
v___x_1622_ = lean_usize_of_nat(v___x_1614_);
lean_dec(v___x_1614_);
v___x_1623_ = lean_usize_of_nat(v___x_1615_);
v___x_1624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1589_, v___f_1619_, v_vs_1612_, v___x_1622_, v___x_1623_, v___x_1616_);
return v___x_1624_;
}
}
else
{
size_t v___x_1625_; size_t v___x_1626_; lean_object* v___x_1627_; 
v___x_1625_ = lean_usize_of_nat(v___x_1614_);
lean_dec(v___x_1614_);
v___x_1626_ = lean_usize_of_nat(v___x_1615_);
v___x_1627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1589_, v___f_1619_, v_vs_1612_, v___x_1625_, v___x_1626_, v___x_1616_);
return v___x_1627_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___boxed(lean_object* v_inst_1628_, lean_object* v_f_1629_, lean_object* v_x_1630_, lean_object* v_x_1631_, lean_object* v_x_1632_){
_start:
{
size_t v_x_272__boxed_1633_; size_t v_x_273__boxed_1634_; lean_object* v_res_1635_; 
v_x_272__boxed_1633_ = lean_unbox_usize(v_x_1631_);
lean_dec(v_x_1631_);
v_x_273__boxed_1634_ = lean_unbox_usize(v_x_1632_);
lean_dec(v_x_1632_);
v_res_1635_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(v_inst_1628_, v_f_1629_, v_x_1630_, v_x_272__boxed_1633_, v_x_273__boxed_1634_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux(lean_object* v_00_u03b1_1636_, lean_object* v_m_1637_, lean_object* v_inst_1638_, lean_object* v_f_1639_, lean_object* v_x_1640_, size_t v_x_1641_, size_t v_x_1642_){
_start:
{
lean_object* v___x_1643_; 
v___x_1643_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(v_inst_1638_, v_f_1639_, v_x_1640_, v_x_1641_, v_x_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___boxed(lean_object* v_00_u03b1_1644_, lean_object* v_m_1645_, lean_object* v_inst_1646_, lean_object* v_f_1647_, lean_object* v_x_1648_, lean_object* v_x_1649_, lean_object* v_x_1650_){
_start:
{
size_t v_x_342__boxed_1651_; size_t v_x_343__boxed_1652_; lean_object* v_res_1653_; 
v_x_342__boxed_1651_ = lean_unbox_usize(v_x_1649_);
lean_dec(v_x_1649_);
v_x_343__boxed_1652_ = lean_unbox_usize(v_x_1650_);
lean_dec(v_x_1650_);
v_res_1653_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux(v_00_u03b1_1644_, v_m_1645_, v_inst_1646_, v_f_1647_, v_x_1648_, v_x_342__boxed_1651_, v_x_343__boxed_1652_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg___lam__1(lean_object* v_toApplicative_1654_, lean_object* v_tail_1655_, lean_object* v___x_1656_, lean_object* v_inst_1657_, lean_object* v___f_1658_, lean_object* v_____r_1659_){
_start:
{
lean_object* v_toPure_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; uint8_t v___x_1663_; 
v_toPure_1660_ = lean_ctor_get(v_toApplicative_1654_, 1);
lean_inc(v_toPure_1660_);
lean_dec_ref(v_toApplicative_1654_);
v___x_1661_ = lean_array_get_size(v_tail_1655_);
v___x_1662_ = lean_box(0);
v___x_1663_ = lean_nat_dec_lt(v___x_1656_, v___x_1661_);
if (v___x_1663_ == 0)
{
lean_object* v___x_1664_; 
lean_dec(v___f_1658_);
lean_dec_ref(v_inst_1657_);
lean_dec_ref(v_tail_1655_);
v___x_1664_ = lean_apply_2(v_toPure_1660_, lean_box(0), v___x_1662_);
return v___x_1664_;
}
else
{
uint8_t v___x_1665_; 
v___x_1665_ = lean_nat_dec_le(v___x_1661_, v___x_1661_);
if (v___x_1665_ == 0)
{
if (v___x_1663_ == 0)
{
lean_object* v___x_1666_; 
lean_dec(v___f_1658_);
lean_dec_ref(v_inst_1657_);
lean_dec_ref(v_tail_1655_);
v___x_1666_ = lean_apply_2(v_toPure_1660_, lean_box(0), v___x_1662_);
return v___x_1666_;
}
else
{
size_t v___x_1667_; size_t v___x_1668_; lean_object* v___x_1669_; 
lean_dec(v_toPure_1660_);
v___x_1667_ = ((size_t)0ULL);
v___x_1668_ = lean_usize_of_nat(v___x_1661_);
v___x_1669_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1657_, v___f_1658_, v_tail_1655_, v___x_1667_, v___x_1668_, v___x_1662_);
return v___x_1669_;
}
}
else
{
size_t v___x_1670_; size_t v___x_1671_; lean_object* v___x_1672_; 
lean_dec(v_toPure_1660_);
v___x_1670_ = ((size_t)0ULL);
v___x_1671_ = lean_usize_of_nat(v___x_1661_);
v___x_1672_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1657_, v___f_1658_, v_tail_1655_, v___x_1670_, v___x_1671_, v___x_1662_);
return v___x_1672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg___lam__1___boxed(lean_object* v_toApplicative_1673_, lean_object* v_tail_1674_, lean_object* v___x_1675_, lean_object* v_inst_1676_, lean_object* v___f_1677_, lean_object* v_____r_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l_Lean_PersistentArray_forM___redArg___lam__1(v_toApplicative_1673_, v_tail_1674_, v___x_1675_, v_inst_1676_, v___f_1677_, v_____r_1678_);
lean_dec(v___x_1675_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg(lean_object* v_inst_1680_, lean_object* v_t_1681_, lean_object* v_f_1682_, lean_object* v_start_1683_){
_start:
{
lean_object* v_toApplicative_1684_; lean_object* v_toBind_1685_; lean_object* v___x_1686_; uint8_t v___x_1687_; 
v_toApplicative_1684_ = lean_ctor_get(v_inst_1680_, 0);
v_toBind_1685_ = lean_ctor_get(v_inst_1680_, 1);
v___x_1686_ = lean_unsigned_to_nat(0u);
v___x_1687_ = lean_nat_dec_eq(v_start_1683_, v___x_1686_);
if (v___x_1687_ == 0)
{
lean_object* v_root_1688_; lean_object* v_tail_1689_; size_t v_shift_1690_; lean_object* v_tailOff_1691_; uint8_t v___x_1692_; 
v_root_1688_ = lean_ctor_get(v_t_1681_, 0);
lean_inc_ref(v_root_1688_);
v_tail_1689_ = lean_ctor_get(v_t_1681_, 1);
lean_inc_ref(v_tail_1689_);
v_shift_1690_ = lean_ctor_get_usize(v_t_1681_, 4);
v_tailOff_1691_ = lean_ctor_get(v_t_1681_, 3);
lean_inc(v_tailOff_1691_);
lean_dec_ref(v_t_1681_);
v___x_1692_ = lean_nat_dec_le(v_tailOff_1691_, v_start_1683_);
if (v___x_1692_ == 0)
{
lean_object* v___f_1693_; lean_object* v___f_1694_; size_t v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
lean_inc(v_toBind_1685_);
lean_dec(v_tailOff_1691_);
lean_inc(v_f_1682_);
v___f_1693_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMFrom0___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1693_, 0, v_f_1682_);
lean_inc_ref(v_inst_1680_);
lean_inc_ref(v_toApplicative_1684_);
v___f_1694_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forM___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1694_, 0, v_toApplicative_1684_);
lean_closure_set(v___f_1694_, 1, v_tail_1689_);
lean_closure_set(v___f_1694_, 2, v___x_1686_);
lean_closure_set(v___f_1694_, 3, v_inst_1680_);
lean_closure_set(v___f_1694_, 4, v___f_1693_);
v___x_1695_ = lean_usize_of_nat(v_start_1683_);
v___x_1696_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(v_inst_1680_, v_f_1682_, v_root_1688_, v___x_1695_, v_shift_1690_);
v___x_1697_ = lean_apply_4(v_toBind_1685_, lean_box(0), lean_box(0), v___x_1696_, v___f_1694_);
return v___x_1697_;
}
else
{
lean_object* v_toPure_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; uint8_t v___x_1702_; 
lean_dec_ref(v_root_1688_);
v_toPure_1698_ = lean_ctor_get(v_toApplicative_1684_, 1);
v___x_1699_ = lean_nat_sub(v_start_1683_, v_tailOff_1691_);
lean_dec(v_tailOff_1691_);
v___x_1700_ = lean_array_get_size(v_tail_1689_);
v___x_1701_ = lean_box(0);
v___x_1702_ = lean_nat_dec_lt(v___x_1699_, v___x_1700_);
if (v___x_1702_ == 0)
{
lean_object* v___x_1703_; 
lean_inc(v_toPure_1698_);
lean_dec(v___x_1699_);
lean_dec_ref(v_tail_1689_);
lean_dec(v_f_1682_);
lean_dec_ref(v_inst_1680_);
v___x_1703_ = lean_apply_2(v_toPure_1698_, lean_box(0), v___x_1701_);
return v___x_1703_;
}
else
{
lean_object* v___f_1704_; uint8_t v___x_1705_; 
v___f_1704_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMFrom0___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1704_, 0, v_f_1682_);
v___x_1705_ = lean_nat_dec_le(v___x_1700_, v___x_1700_);
if (v___x_1705_ == 0)
{
if (v___x_1702_ == 0)
{
lean_object* v___x_1706_; 
lean_inc(v_toPure_1698_);
lean_dec_ref(v___f_1704_);
lean_dec(v___x_1699_);
lean_dec_ref(v_tail_1689_);
lean_dec_ref(v_inst_1680_);
v___x_1706_ = lean_apply_2(v_toPure_1698_, lean_box(0), v___x_1701_);
return v___x_1706_;
}
else
{
size_t v___x_1707_; size_t v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = lean_usize_of_nat(v___x_1699_);
lean_dec(v___x_1699_);
v___x_1708_ = lean_usize_of_nat(v___x_1700_);
v___x_1709_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1680_, v___f_1704_, v_tail_1689_, v___x_1707_, v___x_1708_, v___x_1701_);
return v___x_1709_;
}
}
else
{
size_t v___x_1710_; size_t v___x_1711_; lean_object* v___x_1712_; 
v___x_1710_ = lean_usize_of_nat(v___x_1699_);
lean_dec(v___x_1699_);
v___x_1711_ = lean_usize_of_nat(v___x_1700_);
v___x_1712_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1680_, v___f_1704_, v_tail_1689_, v___x_1710_, v___x_1711_, v___x_1701_);
return v___x_1712_;
}
}
}
}
else
{
lean_object* v___x_1713_; 
v___x_1713_ = l_Lean_PersistentArray_forMFrom0___redArg(v_inst_1680_, v_t_1681_, v_f_1682_);
return v___x_1713_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg___boxed(lean_object* v_inst_1714_, lean_object* v_t_1715_, lean_object* v_f_1716_, lean_object* v_start_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Lean_PersistentArray_forM___redArg(v_inst_1714_, v_t_1715_, v_f_1716_, v_start_1717_);
lean_dec(v_start_1717_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM(lean_object* v_00_u03b1_1719_, lean_object* v_m_1720_, lean_object* v_inst_1721_, lean_object* v_t_1722_, lean_object* v_f_1723_, lean_object* v_start_1724_){
_start:
{
lean_object* v___x_1725_; 
v___x_1725_ = l_Lean_PersistentArray_forM___redArg(v_inst_1721_, v_t_1722_, v_f_1723_, v_start_1724_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___boxed(lean_object* v_00_u03b1_1726_, lean_object* v_m_1727_, lean_object* v_inst_1728_, lean_object* v_t_1729_, lean_object* v_f_1730_, lean_object* v_start_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = l_Lean_PersistentArray_forM(v_00_u03b1_1726_, v_m_1727_, v_inst_1728_, v_t_1729_, v_f_1730_, v_start_1731_);
lean_dec(v_start_1731_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg___lam__0(lean_object* v_f_1733_, lean_object* v_x1_1734_, lean_object* v_x2_1735_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = lean_apply_2(v_f_1733_, v_x1_1734_, v_x2_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg(lean_object* v_t_1756_, lean_object* v_f_1757_, lean_object* v_init_1758_, lean_object* v_start_1759_){
_start:
{
lean_object* v___f_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___f_1760_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1760_, 0, v_f_1757_);
v___x_1761_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1762_ = l_Lean_PersistentArray_foldlM___redArg(v___x_1761_, v_t_1756_, v___f_1760_, v_init_1758_, v_start_1759_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg___boxed(lean_object* v_t_1763_, lean_object* v_f_1764_, lean_object* v_init_1765_, lean_object* v_start_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l_Lean_PersistentArray_foldl___redArg(v_t_1763_, v_f_1764_, v_init_1765_, v_start_1766_);
lean_dec(v_start_1766_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl(lean_object* v_00_u03b1_1768_, lean_object* v_00_u03b2_1769_, lean_object* v_t_1770_, lean_object* v_f_1771_, lean_object* v_init_1772_, lean_object* v_start_1773_){
_start:
{
lean_object* v___f_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___f_1774_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1774_, 0, v_f_1771_);
v___x_1775_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1776_ = l_Lean_PersistentArray_foldlM___redArg(v___x_1775_, v_t_1770_, v___f_1774_, v_init_1772_, v_start_1773_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___boxed(lean_object* v_00_u03b1_1777_, lean_object* v_00_u03b2_1778_, lean_object* v_t_1779_, lean_object* v_f_1780_, lean_object* v_init_1781_, lean_object* v_start_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l_Lean_PersistentArray_foldl(v_00_u03b1_1777_, v_00_u03b2_1778_, v_t_1779_, v_f_1780_, v_init_1781_, v_start_1782_);
lean_dec(v_start_1782_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldr___redArg(lean_object* v_t_1784_, lean_object* v_f_1785_, lean_object* v_init_1786_){
_start:
{
lean_object* v___f_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___f_1787_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1787_, 0, v_f_1785_);
v___x_1788_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1789_ = l_Lean_PersistentArray_foldrM___redArg(v___x_1788_, v_t_1784_, v___f_1787_, v_init_1786_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldr(lean_object* v_00_u03b1_1790_, lean_object* v_00_u03b2_1791_, lean_object* v_t_1792_, lean_object* v_f_1793_, lean_object* v_init_1794_){
_start:
{
lean_object* v___f_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___f_1795_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1795_, 0, v_f_1793_);
v___x_1796_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1797_ = l_Lean_PersistentArray_foldrM___redArg(v___x_1796_, v_t_1792_, v___f_1795_, v_init_1794_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter___redArg___lam__0(lean_object* v_p_1798_, lean_object* v_x1_1799_, lean_object* v_x2_1800_){
_start:
{
lean_object* v___x_1801_; uint8_t v___x_1802_; 
lean_inc(v_x2_1800_);
v___x_1801_ = lean_apply_1(v_p_1798_, v_x2_1800_);
v___x_1802_ = lean_unbox(v___x_1801_);
if (v___x_1802_ == 0)
{
lean_dec(v_x2_1800_);
return v_x1_1799_;
}
else
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Lean_PersistentArray_push___redArg(v_x1_1799_, v_x2_1800_);
return v___x_1803_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter___redArg(lean_object* v_as_1804_, lean_object* v_p_1805_){
_start:
{
lean_object* v___f_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___f_1806_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_filter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1806_, 0, v_p_1805_);
v___x_1807_ = lean_unsigned_to_nat(32u);
v___x_1808_ = lean_mk_empty_array_with_capacity(v___x_1807_);
lean_dec_ref(v___x_1808_);
v___x_1809_ = lean_unsigned_to_nat(0u);
v___x_1810_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__1, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1);
v___x_1811_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1812_ = l_Lean_PersistentArray_foldlM___redArg(v___x_1811_, v_as_1804_, v___f_1806_, v___x_1810_, v___x_1809_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter(lean_object* v_00_u03b1_1813_, lean_object* v_as_1814_, lean_object* v_p_1815_){
_start:
{
lean_object* v___f_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___f_1816_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_filter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1816_, 0, v_p_1815_);
v___x_1817_ = lean_unsigned_to_nat(32u);
v___x_1818_ = lean_mk_empty_array_with_capacity(v___x_1817_);
lean_dec_ref(v___x_1818_);
v___x_1819_ = lean_unsigned_to_nat(0u);
v___x_1820_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__1, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1);
v___x_1821_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1822_ = l_Lean_PersistentArray_foldlM___redArg(v___x_1821_, v_as_1814_, v___f_1816_, v___x_1820_, v___x_1819_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(lean_object* v_as_1823_, size_t v_i_1824_, size_t v_stop_1825_, lean_object* v_b_1826_){
_start:
{
uint8_t v___x_1827_; 
v___x_1827_ = lean_usize_dec_eq(v_i_1824_, v_stop_1825_);
if (v___x_1827_ == 0)
{
lean_object* v___x_1828_; lean_object* v___x_1829_; size_t v___x_1830_; size_t v___x_1831_; 
v___x_1828_ = lean_array_uget_borrowed(v_as_1823_, v_i_1824_);
lean_inc(v___x_1828_);
v___x_1829_ = lean_array_push(v_b_1826_, v___x_1828_);
v___x_1830_ = ((size_t)1ULL);
v___x_1831_ = lean_usize_add(v_i_1824_, v___x_1830_);
v_i_1824_ = v___x_1831_;
v_b_1826_ = v___x_1829_;
goto _start;
}
else
{
return v_b_1826_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg___boxed(lean_object* v_as_1833_, lean_object* v_i_1834_, lean_object* v_stop_1835_, lean_object* v_b_1836_){
_start:
{
size_t v_i_boxed_1837_; size_t v_stop_boxed_1838_; lean_object* v_res_1839_; 
v_i_boxed_1837_ = lean_unbox_usize(v_i_1834_);
lean_dec(v_i_1834_);
v_stop_boxed_1838_ = lean_unbox_usize(v_stop_1835_);
lean_dec(v_stop_1835_);
v_res_1839_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_as_1833_, v_i_boxed_1837_, v_stop_boxed_1838_, v_b_1836_);
lean_dec_ref(v_as_1833_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(lean_object* v_x_1840_, lean_object* v_x_1841_){
_start:
{
if (lean_obj_tag(v_x_1840_) == 0)
{
lean_object* v_cs_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; uint8_t v___x_1845_; 
v_cs_1842_ = lean_ctor_get(v_x_1840_, 0);
v___x_1843_ = lean_unsigned_to_nat(0u);
v___x_1844_ = lean_array_get_size(v_cs_1842_);
v___x_1845_ = lean_nat_dec_lt(v___x_1843_, v___x_1844_);
if (v___x_1845_ == 0)
{
return v_x_1841_;
}
else
{
size_t v___x_1846_; size_t v___x_1847_; lean_object* v___x_1848_; 
v___x_1846_ = ((size_t)0ULL);
v___x_1847_ = lean_usize_of_nat(v___x_1844_);
v___x_1848_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(v_cs_1842_, v___x_1846_, v___x_1847_, v_x_1841_);
return v___x_1848_;
}
}
else
{
lean_object* v_vs_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; uint8_t v___x_1852_; 
v_vs_1849_ = lean_ctor_get(v_x_1840_, 0);
v___x_1850_ = lean_unsigned_to_nat(0u);
v___x_1851_ = lean_array_get_size(v_vs_1849_);
v___x_1852_ = lean_nat_dec_lt(v___x_1850_, v___x_1851_);
if (v___x_1852_ == 0)
{
return v_x_1841_;
}
else
{
size_t v___x_1853_; size_t v___x_1854_; lean_object* v___x_1855_; 
v___x_1853_ = ((size_t)0ULL);
v___x_1854_ = lean_usize_of_nat(v___x_1851_);
v___x_1855_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_vs_1849_, v___x_1853_, v___x_1854_, v_x_1841_);
return v___x_1855_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(lean_object* v_as_1856_, size_t v_i_1857_, size_t v_stop_1858_, lean_object* v_b_1859_){
_start:
{
uint8_t v___x_1860_; 
v___x_1860_ = lean_usize_dec_eq(v_i_1857_, v_stop_1858_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; lean_object* v___x_1862_; size_t v___x_1863_; size_t v___x_1864_; 
v___x_1861_ = lean_array_uget_borrowed(v_as_1856_, v_i_1857_);
v___x_1862_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(v___x_1861_, v_b_1859_);
v___x_1863_ = ((size_t)1ULL);
v___x_1864_ = lean_usize_add(v_i_1857_, v___x_1863_);
v_i_1857_ = v___x_1864_;
v_b_1859_ = v___x_1862_;
goto _start;
}
else
{
return v_b_1859_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_1866_, lean_object* v_i_1867_, lean_object* v_stop_1868_, lean_object* v_b_1869_){
_start:
{
size_t v_i_boxed_1870_; size_t v_stop_boxed_1871_; lean_object* v_res_1872_; 
v_i_boxed_1870_ = lean_unbox_usize(v_i_1867_);
lean_dec(v_i_1867_);
v_stop_boxed_1871_ = lean_unbox_usize(v_stop_1868_);
lean_dec(v_stop_1868_);
v_res_1872_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(v_as_1866_, v_i_boxed_1870_, v_stop_boxed_1871_, v_b_1869_);
lean_dec_ref(v_as_1866_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg___boxed(lean_object* v_x_1873_, lean_object* v_x_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(v_x_1873_, v_x_1874_);
lean_dec_ref(v_x_1873_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(lean_object* v_x_1876_, size_t v_x_1877_, size_t v_x_1878_, lean_object* v_x_1879_){
_start:
{
if (lean_obj_tag(v_x_1876_) == 0)
{
lean_object* v_cs_1880_; lean_object* v___x_1881_; size_t v___x_1882_; lean_object* v_j_1883_; lean_object* v___x_1884_; size_t v___x_1885_; size_t v___x_1886_; size_t v___x_1887_; size_t v___x_1888_; size_t v___x_1889_; size_t v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; uint8_t v___x_1895_; 
v_cs_1880_ = lean_ctor_get(v_x_1876_, 0);
v___x_1881_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_1882_ = lean_usize_shift_right(v_x_1877_, v_x_1878_);
v_j_1883_ = lean_usize_to_nat(v___x_1882_);
v___x_1884_ = lean_array_get_borrowed(v___x_1881_, v_cs_1880_, v_j_1883_);
v___x_1885_ = ((size_t)1ULL);
v___x_1886_ = lean_usize_shift_left(v___x_1885_, v_x_1878_);
v___x_1887_ = lean_usize_sub(v___x_1886_, v___x_1885_);
v___x_1888_ = lean_usize_land(v_x_1877_, v___x_1887_);
v___x_1889_ = ((size_t)5ULL);
v___x_1890_ = lean_usize_sub(v_x_1878_, v___x_1889_);
v___x_1891_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(v___x_1884_, v___x_1888_, v___x_1890_, v_x_1879_);
v___x_1892_ = lean_unsigned_to_nat(1u);
v___x_1893_ = lean_nat_add(v_j_1883_, v___x_1892_);
lean_dec(v_j_1883_);
v___x_1894_ = lean_array_get_size(v_cs_1880_);
v___x_1895_ = lean_nat_dec_lt(v___x_1893_, v___x_1894_);
if (v___x_1895_ == 0)
{
lean_dec(v___x_1893_);
return v___x_1891_;
}
else
{
size_t v___x_1896_; size_t v___x_1897_; lean_object* v___x_1898_; 
v___x_1896_ = lean_usize_of_nat(v___x_1893_);
lean_dec(v___x_1893_);
v___x_1897_ = lean_usize_of_nat(v___x_1894_);
v___x_1898_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(v_cs_1880_, v___x_1896_, v___x_1897_, v___x_1891_);
return v___x_1898_;
}
}
else
{
lean_object* v_vs_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; uint8_t v___x_1902_; 
v_vs_1899_ = lean_ctor_get(v_x_1876_, 0);
v___x_1900_ = lean_usize_to_nat(v_x_1877_);
v___x_1901_ = lean_array_get_size(v_vs_1899_);
v___x_1902_ = lean_nat_dec_lt(v___x_1900_, v___x_1901_);
if (v___x_1902_ == 0)
{
lean_dec(v___x_1900_);
return v_x_1879_;
}
else
{
size_t v___x_1903_; size_t v___x_1904_; lean_object* v___x_1905_; 
v___x_1903_ = lean_usize_of_nat(v___x_1900_);
lean_dec(v___x_1900_);
v___x_1904_ = lean_usize_of_nat(v___x_1901_);
v___x_1905_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_vs_1899_, v___x_1903_, v___x_1904_, v_x_1879_);
return v___x_1905_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg___boxed(lean_object* v_x_1906_, lean_object* v_x_1907_, lean_object* v_x_1908_, lean_object* v_x_1909_){
_start:
{
size_t v_x_1118__boxed_1910_; size_t v_x_1119__boxed_1911_; lean_object* v_res_1912_; 
v_x_1118__boxed_1910_ = lean_unbox_usize(v_x_1907_);
lean_dec(v_x_1907_);
v_x_1119__boxed_1911_ = lean_unbox_usize(v_x_1908_);
lean_dec(v_x_1908_);
v_res_1912_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(v_x_1906_, v_x_1118__boxed_1910_, v_x_1119__boxed_1911_, v_x_1909_);
lean_dec_ref(v_x_1906_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg(lean_object* v_t_1913_, lean_object* v_init_1914_, lean_object* v_start_1915_){
_start:
{
lean_object* v___x_1916_; uint8_t v___x_1917_; 
v___x_1916_ = lean_unsigned_to_nat(0u);
v___x_1917_ = lean_nat_dec_eq(v_start_1915_, v___x_1916_);
if (v___x_1917_ == 0)
{
lean_object* v_root_1918_; lean_object* v_tail_1919_; size_t v_shift_1920_; lean_object* v_tailOff_1921_; uint8_t v___x_1922_; 
v_root_1918_ = lean_ctor_get(v_t_1913_, 0);
v_tail_1919_ = lean_ctor_get(v_t_1913_, 1);
v_shift_1920_ = lean_ctor_get_usize(v_t_1913_, 4);
v_tailOff_1921_ = lean_ctor_get(v_t_1913_, 3);
v___x_1922_ = lean_nat_dec_le(v_tailOff_1921_, v_start_1915_);
if (v___x_1922_ == 0)
{
size_t v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; uint8_t v___x_1926_; 
v___x_1923_ = lean_usize_of_nat(v_start_1915_);
v___x_1924_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(v_root_1918_, v___x_1923_, v_shift_1920_, v_init_1914_);
v___x_1925_ = lean_array_get_size(v_tail_1919_);
v___x_1926_ = lean_nat_dec_lt(v___x_1916_, v___x_1925_);
if (v___x_1926_ == 0)
{
return v___x_1924_;
}
else
{
size_t v___x_1927_; size_t v___x_1928_; lean_object* v___x_1929_; 
v___x_1927_ = ((size_t)0ULL);
v___x_1928_ = lean_usize_of_nat(v___x_1925_);
v___x_1929_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_tail_1919_, v___x_1927_, v___x_1928_, v___x_1924_);
return v___x_1929_;
}
}
else
{
lean_object* v___x_1930_; lean_object* v___x_1931_; uint8_t v___x_1932_; 
v___x_1930_ = lean_nat_sub(v_start_1915_, v_tailOff_1921_);
v___x_1931_ = lean_array_get_size(v_tail_1919_);
v___x_1932_ = lean_nat_dec_lt(v___x_1930_, v___x_1931_);
if (v___x_1932_ == 0)
{
lean_dec(v___x_1930_);
return v_init_1914_;
}
else
{
size_t v___x_1933_; size_t v___x_1934_; lean_object* v___x_1935_; 
v___x_1933_ = lean_usize_of_nat(v___x_1930_);
lean_dec(v___x_1930_);
v___x_1934_ = lean_usize_of_nat(v___x_1931_);
v___x_1935_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_tail_1919_, v___x_1933_, v___x_1934_, v_init_1914_);
return v___x_1935_;
}
}
}
else
{
lean_object* v_root_1936_; lean_object* v_tail_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; uint8_t v___x_1940_; 
v_root_1936_ = lean_ctor_get(v_t_1913_, 0);
v_tail_1937_ = lean_ctor_get(v_t_1913_, 1);
v___x_1938_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(v_root_1936_, v_init_1914_);
v___x_1939_ = lean_array_get_size(v_tail_1937_);
v___x_1940_ = lean_nat_dec_lt(v___x_1916_, v___x_1939_);
if (v___x_1940_ == 0)
{
return v___x_1938_;
}
else
{
size_t v___x_1941_; size_t v___x_1942_; lean_object* v___x_1943_; 
v___x_1941_ = ((size_t)0ULL);
v___x_1942_ = lean_usize_of_nat(v___x_1939_);
v___x_1943_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_tail_1937_, v___x_1941_, v___x_1942_, v___x_1938_);
return v___x_1943_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg___boxed(lean_object* v_t_1944_, lean_object* v_init_1945_, lean_object* v_start_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg(v_t_1944_, v_init_1945_, v_start_1946_);
lean_dec(v_start_1946_);
lean_dec_ref(v_t_1944_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object* v_t_1948_){
_start:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1949_ = lean_unsigned_to_nat(0u);
v___x_1950_ = ((lean_object*)(l_Lean_PersistentArray_mkNewTail___redArg___closed__0));
v___x_1951_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg(v_t_1948_, v___x_1950_, v___x_1949_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___redArg___boxed(lean_object* v_t_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Lean_PersistentArray_toArray___redArg(v_t_1952_);
lean_dec_ref(v_t_1952_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray(lean_object* v_00_u03b1_1954_, lean_object* v_t_1955_){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = l_Lean_PersistentArray_toArray___redArg(v_t_1955_);
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___boxed(lean_object* v_00_u03b1_1957_, lean_object* v_t_1958_){
_start:
{
lean_object* v_res_1959_; 
v_res_1959_ = l_Lean_PersistentArray_toArray(v_00_u03b1_1957_, v_t_1958_);
lean_dec_ref(v_t_1958_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0(lean_object* v_00_u03b1_1960_, lean_object* v_t_1961_, lean_object* v_init_1962_, lean_object* v_start_1963_){
_start:
{
lean_object* v___x_1964_; 
v___x_1964_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg(v_t_1961_, v_init_1962_, v_start_1963_);
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___boxed(lean_object* v_00_u03b1_1965_, lean_object* v_t_1966_, lean_object* v_init_1967_, lean_object* v_start_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0(v_00_u03b1_1965_, v_t_1966_, v_init_1967_, v_start_1968_);
lean_dec(v_start_1968_);
lean_dec_ref(v_t_1966_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0(lean_object* v_00_u03b1_1970_, lean_object* v_x_1971_, size_t v_x_1972_, size_t v_x_1973_, lean_object* v_x_1974_){
_start:
{
lean_object* v___x_1975_; 
v___x_1975_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(v_x_1971_, v_x_1972_, v_x_1973_, v_x_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1976_, lean_object* v_x_1977_, lean_object* v_x_1978_, lean_object* v_x_1979_, lean_object* v_x_1980_){
_start:
{
size_t v_x_1236__boxed_1981_; size_t v_x_1237__boxed_1982_; lean_object* v_res_1983_; 
v_x_1236__boxed_1981_ = lean_unbox_usize(v_x_1978_);
lean_dec(v_x_1978_);
v_x_1237__boxed_1982_ = lean_unbox_usize(v_x_1979_);
lean_dec(v_x_1979_);
v_res_1983_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0(v_00_u03b1_1976_, v_x_1977_, v_x_1236__boxed_1981_, v_x_1237__boxed_1982_, v_x_1980_);
lean_dec_ref(v_x_1977_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1(lean_object* v_00_u03b1_1984_, lean_object* v_as_1985_, size_t v_i_1986_, size_t v_stop_1987_, lean_object* v_b_1988_){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_as_1985_, v_i_1986_, v_stop_1987_, v_b_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1990_, lean_object* v_as_1991_, lean_object* v_i_1992_, lean_object* v_stop_1993_, lean_object* v_b_1994_){
_start:
{
size_t v_i_boxed_1995_; size_t v_stop_boxed_1996_; lean_object* v_res_1997_; 
v_i_boxed_1995_ = lean_unbox_usize(v_i_1992_);
lean_dec(v_i_1992_);
v_stop_boxed_1996_ = lean_unbox_usize(v_stop_1993_);
lean_dec(v_stop_1993_);
v_res_1997_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1(v_00_u03b1_1990_, v_as_1991_, v_i_boxed_1995_, v_stop_boxed_1996_, v_b_1994_);
lean_dec_ref(v_as_1991_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2(lean_object* v_00_u03b1_1998_, lean_object* v_x_1999_, lean_object* v_x_2000_){
_start:
{
lean_object* v___x_2001_; 
v___x_2001_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(v_x_1999_, v_x_2000_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2002_, lean_object* v_x_2003_, lean_object* v_x_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2(v_00_u03b1_2002_, v_x_2003_, v_x_2004_);
lean_dec_ref(v_x_2003_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2006_, lean_object* v_as_2007_, size_t v_i_2008_, size_t v_stop_2009_, lean_object* v_b_2010_){
_start:
{
lean_object* v___x_2011_; 
v___x_2011_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(v_as_2007_, v_i_2008_, v_stop_2009_, v_b_2010_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2012_, lean_object* v_as_2013_, lean_object* v_i_2014_, lean_object* v_stop_2015_, lean_object* v_b_2016_){
_start:
{
size_t v_i_boxed_2017_; size_t v_stop_boxed_2018_; lean_object* v_res_2019_; 
v_i_boxed_2017_ = lean_unbox_usize(v_i_2014_);
lean_dec(v_i_2014_);
v_stop_boxed_2018_ = lean_unbox_usize(v_stop_2015_);
lean_dec(v_stop_2015_);
v_res_2019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1(v_00_u03b1_2012_, v_as_2013_, v_i_boxed_2017_, v_stop_boxed_2018_, v_b_2016_);
lean_dec_ref(v_as_2013_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(lean_object* v_as_2020_, size_t v_i_2021_, size_t v_stop_2022_, lean_object* v_b_2023_){
_start:
{
uint8_t v___x_2024_; 
v___x_2024_ = lean_usize_dec_eq(v_i_2021_, v_stop_2022_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; lean_object* v___x_2026_; size_t v___x_2027_; size_t v___x_2028_; 
v___x_2025_ = lean_array_uget_borrowed(v_as_2020_, v_i_2021_);
lean_inc(v___x_2025_);
v___x_2026_ = l_Lean_PersistentArray_push___redArg(v_b_2023_, v___x_2025_);
v___x_2027_ = ((size_t)1ULL);
v___x_2028_ = lean_usize_add(v_i_2021_, v___x_2027_);
v_i_2021_ = v___x_2028_;
v_b_2023_ = v___x_2026_;
goto _start;
}
else
{
return v_b_2023_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg___boxed(lean_object* v_as_2030_, lean_object* v_i_2031_, lean_object* v_stop_2032_, lean_object* v_b_2033_){
_start:
{
size_t v_i_boxed_2034_; size_t v_stop_boxed_2035_; lean_object* v_res_2036_; 
v_i_boxed_2034_ = lean_unbox_usize(v_i_2031_);
lean_dec(v_i_2031_);
v_stop_boxed_2035_ = lean_unbox_usize(v_stop_2032_);
lean_dec(v_stop_2032_);
v_res_2036_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_as_2030_, v_i_boxed_2034_, v_stop_boxed_2035_, v_b_2033_);
lean_dec_ref(v_as_2030_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(lean_object* v_x_2037_, lean_object* v_x_2038_){
_start:
{
if (lean_obj_tag(v_x_2037_) == 0)
{
lean_object* v_cs_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; 
v_cs_2039_ = lean_ctor_get(v_x_2037_, 0);
v___x_2040_ = lean_unsigned_to_nat(0u);
v___x_2041_ = lean_array_get_size(v_cs_2039_);
v___x_2042_ = lean_nat_dec_lt(v___x_2040_, v___x_2041_);
if (v___x_2042_ == 0)
{
return v_x_2038_;
}
else
{
size_t v___x_2043_; size_t v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = ((size_t)0ULL);
v___x_2044_ = lean_usize_of_nat(v___x_2041_);
v___x_2045_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(v_cs_2039_, v___x_2043_, v___x_2044_, v_x_2038_);
return v___x_2045_;
}
}
else
{
lean_object* v_vs_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; uint8_t v___x_2049_; 
v_vs_2046_ = lean_ctor_get(v_x_2037_, 0);
v___x_2047_ = lean_unsigned_to_nat(0u);
v___x_2048_ = lean_array_get_size(v_vs_2046_);
v___x_2049_ = lean_nat_dec_lt(v___x_2047_, v___x_2048_);
if (v___x_2049_ == 0)
{
return v_x_2038_;
}
else
{
size_t v___x_2050_; size_t v___x_2051_; lean_object* v___x_2052_; 
v___x_2050_ = ((size_t)0ULL);
v___x_2051_ = lean_usize_of_nat(v___x_2048_);
v___x_2052_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_vs_2046_, v___x_2050_, v___x_2051_, v_x_2038_);
return v___x_2052_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(lean_object* v_as_2053_, size_t v_i_2054_, size_t v_stop_2055_, lean_object* v_b_2056_){
_start:
{
uint8_t v___x_2057_; 
v___x_2057_ = lean_usize_dec_eq(v_i_2054_, v_stop_2055_);
if (v___x_2057_ == 0)
{
lean_object* v___x_2058_; lean_object* v___x_2059_; size_t v___x_2060_; size_t v___x_2061_; 
v___x_2058_ = lean_array_uget_borrowed(v_as_2053_, v_i_2054_);
v___x_2059_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(v___x_2058_, v_b_2056_);
v___x_2060_ = ((size_t)1ULL);
v___x_2061_ = lean_usize_add(v_i_2054_, v___x_2060_);
v_i_2054_ = v___x_2061_;
v_b_2056_ = v___x_2059_;
goto _start;
}
else
{
return v_b_2056_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_2063_, lean_object* v_i_2064_, lean_object* v_stop_2065_, lean_object* v_b_2066_){
_start:
{
size_t v_i_boxed_2067_; size_t v_stop_boxed_2068_; lean_object* v_res_2069_; 
v_i_boxed_2067_ = lean_unbox_usize(v_i_2064_);
lean_dec(v_i_2064_);
v_stop_boxed_2068_ = lean_unbox_usize(v_stop_2065_);
lean_dec(v_stop_2065_);
v_res_2069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(v_as_2063_, v_i_boxed_2067_, v_stop_boxed_2068_, v_b_2066_);
lean_dec_ref(v_as_2063_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg___boxed(lean_object* v_x_2070_, lean_object* v_x_2071_){
_start:
{
lean_object* v_res_2072_; 
v_res_2072_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(v_x_2070_, v_x_2071_);
lean_dec_ref(v_x_2070_);
return v_res_2072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(lean_object* v_x_2073_, size_t v_x_2074_, size_t v_x_2075_, lean_object* v_x_2076_){
_start:
{
if (lean_obj_tag(v_x_2073_) == 0)
{
lean_object* v_cs_2077_; lean_object* v___x_2078_; size_t v___x_2079_; lean_object* v_j_2080_; lean_object* v___x_2081_; size_t v___x_2082_; size_t v___x_2083_; size_t v___x_2084_; size_t v___x_2085_; size_t v___x_2086_; size_t v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; uint8_t v___x_2092_; 
v_cs_2077_ = lean_ctor_get(v_x_2073_, 0);
v___x_2078_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_2079_ = lean_usize_shift_right(v_x_2074_, v_x_2075_);
v_j_2080_ = lean_usize_to_nat(v___x_2079_);
v___x_2081_ = lean_array_get_borrowed(v___x_2078_, v_cs_2077_, v_j_2080_);
v___x_2082_ = ((size_t)1ULL);
v___x_2083_ = lean_usize_shift_left(v___x_2082_, v_x_2075_);
v___x_2084_ = lean_usize_sub(v___x_2083_, v___x_2082_);
v___x_2085_ = lean_usize_land(v_x_2074_, v___x_2084_);
v___x_2086_ = ((size_t)5ULL);
v___x_2087_ = lean_usize_sub(v_x_2075_, v___x_2086_);
v___x_2088_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(v___x_2081_, v___x_2085_, v___x_2087_, v_x_2076_);
v___x_2089_ = lean_unsigned_to_nat(1u);
v___x_2090_ = lean_nat_add(v_j_2080_, v___x_2089_);
lean_dec(v_j_2080_);
v___x_2091_ = lean_array_get_size(v_cs_2077_);
v___x_2092_ = lean_nat_dec_lt(v___x_2090_, v___x_2091_);
if (v___x_2092_ == 0)
{
lean_dec(v___x_2090_);
return v___x_2088_;
}
else
{
size_t v___x_2093_; size_t v___x_2094_; lean_object* v___x_2095_; 
v___x_2093_ = lean_usize_of_nat(v___x_2090_);
lean_dec(v___x_2090_);
v___x_2094_ = lean_usize_of_nat(v___x_2091_);
v___x_2095_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(v_cs_2077_, v___x_2093_, v___x_2094_, v___x_2088_);
return v___x_2095_;
}
}
else
{
lean_object* v_vs_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; uint8_t v___x_2099_; 
v_vs_2096_ = lean_ctor_get(v_x_2073_, 0);
v___x_2097_ = lean_usize_to_nat(v_x_2074_);
v___x_2098_ = lean_array_get_size(v_vs_2096_);
v___x_2099_ = lean_nat_dec_lt(v___x_2097_, v___x_2098_);
if (v___x_2099_ == 0)
{
lean_dec(v___x_2097_);
return v_x_2076_;
}
else
{
size_t v___x_2100_; size_t v___x_2101_; lean_object* v___x_2102_; 
v___x_2100_ = lean_usize_of_nat(v___x_2097_);
lean_dec(v___x_2097_);
v___x_2101_ = lean_usize_of_nat(v___x_2098_);
v___x_2102_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_vs_2096_, v___x_2100_, v___x_2101_, v_x_2076_);
return v___x_2102_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg___boxed(lean_object* v_x_2103_, lean_object* v_x_2104_, lean_object* v_x_2105_, lean_object* v_x_2106_){
_start:
{
size_t v_x_1125__boxed_2107_; size_t v_x_1126__boxed_2108_; lean_object* v_res_2109_; 
v_x_1125__boxed_2107_ = lean_unbox_usize(v_x_2104_);
lean_dec(v_x_2104_);
v_x_1126__boxed_2108_ = lean_unbox_usize(v_x_2105_);
lean_dec(v_x_2105_);
v_res_2109_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(v_x_2103_, v_x_1125__boxed_2107_, v_x_1126__boxed_2108_, v_x_2106_);
lean_dec_ref(v_x_2103_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg(lean_object* v_t_2110_, lean_object* v_init_2111_, lean_object* v_start_2112_){
_start:
{
lean_object* v___x_2113_; uint8_t v___x_2114_; 
v___x_2113_ = lean_unsigned_to_nat(0u);
v___x_2114_ = lean_nat_dec_eq(v_start_2112_, v___x_2113_);
if (v___x_2114_ == 0)
{
lean_object* v_root_2115_; lean_object* v_tail_2116_; size_t v_shift_2117_; lean_object* v_tailOff_2118_; uint8_t v___x_2119_; 
v_root_2115_ = lean_ctor_get(v_t_2110_, 0);
v_tail_2116_ = lean_ctor_get(v_t_2110_, 1);
v_shift_2117_ = lean_ctor_get_usize(v_t_2110_, 4);
v_tailOff_2118_ = lean_ctor_get(v_t_2110_, 3);
v___x_2119_ = lean_nat_dec_le(v_tailOff_2118_, v_start_2112_);
if (v___x_2119_ == 0)
{
size_t v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; uint8_t v___x_2123_; 
v___x_2120_ = lean_usize_of_nat(v_start_2112_);
v___x_2121_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(v_root_2115_, v___x_2120_, v_shift_2117_, v_init_2111_);
v___x_2122_ = lean_array_get_size(v_tail_2116_);
v___x_2123_ = lean_nat_dec_lt(v___x_2113_, v___x_2122_);
if (v___x_2123_ == 0)
{
return v___x_2121_;
}
else
{
size_t v___x_2124_; size_t v___x_2125_; lean_object* v___x_2126_; 
v___x_2124_ = ((size_t)0ULL);
v___x_2125_ = lean_usize_of_nat(v___x_2122_);
v___x_2126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_tail_2116_, v___x_2124_, v___x_2125_, v___x_2121_);
return v___x_2126_;
}
}
else
{
lean_object* v___x_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; 
v___x_2127_ = lean_nat_sub(v_start_2112_, v_tailOff_2118_);
v___x_2128_ = lean_array_get_size(v_tail_2116_);
v___x_2129_ = lean_nat_dec_lt(v___x_2127_, v___x_2128_);
if (v___x_2129_ == 0)
{
lean_dec(v___x_2127_);
return v_init_2111_;
}
else
{
size_t v___x_2130_; size_t v___x_2131_; lean_object* v___x_2132_; 
v___x_2130_ = lean_usize_of_nat(v___x_2127_);
lean_dec(v___x_2127_);
v___x_2131_ = lean_usize_of_nat(v___x_2128_);
v___x_2132_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_tail_2116_, v___x_2130_, v___x_2131_, v_init_2111_);
return v___x_2132_;
}
}
}
else
{
lean_object* v_root_2133_; lean_object* v_tail_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; uint8_t v___x_2137_; 
v_root_2133_ = lean_ctor_get(v_t_2110_, 0);
v_tail_2134_ = lean_ctor_get(v_t_2110_, 1);
v___x_2135_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(v_root_2133_, v_init_2111_);
v___x_2136_ = lean_array_get_size(v_tail_2134_);
v___x_2137_ = lean_nat_dec_lt(v___x_2113_, v___x_2136_);
if (v___x_2137_ == 0)
{
return v___x_2135_;
}
else
{
size_t v___x_2138_; size_t v___x_2139_; lean_object* v___x_2140_; 
v___x_2138_ = ((size_t)0ULL);
v___x_2139_ = lean_usize_of_nat(v___x_2136_);
v___x_2140_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_tail_2134_, v___x_2138_, v___x_2139_, v___x_2135_);
return v___x_2140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg___boxed(lean_object* v_t_2141_, lean_object* v_init_2142_, lean_object* v_start_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg(v_t_2141_, v_init_2142_, v_start_2143_);
lean_dec(v_start_2143_);
lean_dec_ref(v_t_2141_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___redArg(lean_object* v_t_u2081_2145_, lean_object* v_t_u2082_2146_){
_start:
{
uint8_t v___x_2147_; 
v___x_2147_ = l_Lean_PersistentArray_isEmpty___redArg(v_t_u2081_2145_);
if (v___x_2147_ == 0)
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2148_ = lean_unsigned_to_nat(0u);
v___x_2149_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg(v_t_u2082_2146_, v_t_u2081_2145_, v___x_2148_);
return v___x_2149_;
}
else
{
lean_dec_ref(v_t_u2081_2145_);
lean_inc_ref(v_t_u2082_2146_);
return v_t_u2082_2146_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___redArg___boxed(lean_object* v_t_u2081_2150_, lean_object* v_t_u2082_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_PersistentArray_append___redArg(v_t_u2081_2150_, v_t_u2082_2151_);
lean_dec_ref(v_t_u2082_2151_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append(lean_object* v_00_u03b1_2153_, lean_object* v_t_u2081_2154_, lean_object* v_t_u2082_2155_){
_start:
{
lean_object* v___x_2156_; 
v___x_2156_ = l_Lean_PersistentArray_append___redArg(v_t_u2081_2154_, v_t_u2082_2155_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___boxed(lean_object* v_00_u03b1_2157_, lean_object* v_t_u2081_2158_, lean_object* v_t_u2082_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_Lean_PersistentArray_append(v_00_u03b1_2157_, v_t_u2081_2158_, v_t_u2082_2159_);
lean_dec_ref(v_t_u2082_2159_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0(lean_object* v_00_u03b1_2161_, lean_object* v_t_2162_, lean_object* v_init_2163_, lean_object* v_start_2164_){
_start:
{
lean_object* v___x_2165_; 
v___x_2165_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg(v_t_2162_, v_init_2163_, v_start_2164_);
return v___x_2165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___boxed(lean_object* v_00_u03b1_2166_, lean_object* v_t_2167_, lean_object* v_init_2168_, lean_object* v_start_2169_){
_start:
{
lean_object* v_res_2170_; 
v_res_2170_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0(v_00_u03b1_2166_, v_t_2167_, v_init_2168_, v_start_2169_);
lean_dec(v_start_2169_);
lean_dec_ref(v_t_2167_);
return v_res_2170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0(lean_object* v_00_u03b1_2171_, lean_object* v_x_2172_, size_t v_x_2173_, size_t v_x_2174_, lean_object* v_x_2175_){
_start:
{
lean_object* v___x_2176_; 
v___x_2176_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(v_x_2172_, v_x_2173_, v_x_2174_, v_x_2175_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_, lean_object* v_x_2181_){
_start:
{
size_t v_x_1241__boxed_2182_; size_t v_x_1242__boxed_2183_; lean_object* v_res_2184_; 
v_x_1241__boxed_2182_ = lean_unbox_usize(v_x_2179_);
lean_dec(v_x_2179_);
v_x_1242__boxed_2183_ = lean_unbox_usize(v_x_2180_);
lean_dec(v_x_2180_);
v_res_2184_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0(v_00_u03b1_2177_, v_x_2178_, v_x_1241__boxed_2182_, v_x_1242__boxed_2183_, v_x_2181_);
lean_dec_ref(v_x_2178_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1(lean_object* v_00_u03b1_2185_, lean_object* v_as_2186_, size_t v_i_2187_, size_t v_stop_2188_, lean_object* v_b_2189_){
_start:
{
lean_object* v___x_2190_; 
v___x_2190_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_as_2186_, v_i_2187_, v_stop_2188_, v_b_2189_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2191_, lean_object* v_as_2192_, lean_object* v_i_2193_, lean_object* v_stop_2194_, lean_object* v_b_2195_){
_start:
{
size_t v_i_boxed_2196_; size_t v_stop_boxed_2197_; lean_object* v_res_2198_; 
v_i_boxed_2196_ = lean_unbox_usize(v_i_2193_);
lean_dec(v_i_2193_);
v_stop_boxed_2197_ = lean_unbox_usize(v_stop_2194_);
lean_dec(v_stop_2194_);
v_res_2198_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1(v_00_u03b1_2191_, v_as_2192_, v_i_boxed_2196_, v_stop_boxed_2197_, v_b_2195_);
lean_dec_ref(v_as_2192_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2(lean_object* v_00_u03b1_2199_, lean_object* v_x_2200_, lean_object* v_x_2201_){
_start:
{
lean_object* v___x_2202_; 
v___x_2202_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(v_x_2200_, v_x_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2203_, lean_object* v_x_2204_, lean_object* v_x_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2(v_00_u03b1_2203_, v_x_2204_, v_x_2205_);
lean_dec_ref(v_x_2204_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2207_, lean_object* v_as_2208_, size_t v_i_2209_, size_t v_stop_2210_, lean_object* v_b_2211_){
_start:
{
lean_object* v___x_2212_; 
v___x_2212_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(v_as_2208_, v_i_2209_, v_stop_2210_, v_b_2211_);
return v___x_2212_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2213_, lean_object* v_as_2214_, lean_object* v_i_2215_, lean_object* v_stop_2216_, lean_object* v_b_2217_){
_start:
{
size_t v_i_boxed_2218_; size_t v_stop_boxed_2219_; lean_object* v_res_2220_; 
v_i_boxed_2218_ = lean_unbox_usize(v_i_2215_);
lean_dec(v_i_2215_);
v_stop_boxed_2219_ = lean_unbox_usize(v_stop_2216_);
lean_dec(v_stop_2216_);
v_res_2220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1(v_00_u03b1_2213_, v_as_2214_, v_i_boxed_2218_, v_stop_boxed_2219_, v_b_2217_);
lean_dec_ref(v_as_2214_);
return v_res_2220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend___redArg(){
_start:
{
lean_object* v___x_2223_; 
v___x_2223_ = ((lean_object*)(l_Lean_PersistentArray_instAppend___redArg___closed__0));
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend___redArg___boxed(lean_object* v___dummy_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lean_PersistentArray_instAppend___redArg();
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend(lean_object* v_00_u03b1_2226_){
_start:
{
lean_object* v___x_2227_; 
v___x_2227_ = ((lean_object*)(l_Lean_PersistentArray_instAppend___redArg___closed__0));
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f___redArg___lam__0(lean_object* v_f_2228_, lean_object* v_x_2229_){
_start:
{
lean_object* v___x_2230_; 
v___x_2230_ = lean_apply_1(v_f_2228_, v_x_2229_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f___redArg(lean_object* v_t_2231_, lean_object* v_f_2232_){
_start:
{
lean_object* v___f_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___f_2233_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSome_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2233_, 0, v_f_2232_);
v___x_2234_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2235_ = l_Lean_PersistentArray_findSomeM_x3f___redArg(v___x_2234_, v_t_2231_, v___f_2233_);
return v___x_2235_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f(lean_object* v_00_u03b1_2236_, lean_object* v_00_u03b2_2237_, lean_object* v_t_2238_, lean_object* v_f_2239_){
_start:
{
lean_object* v___f_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___f_2240_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSome_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2240_, 0, v_f_2239_);
v___x_2241_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2242_ = l_Lean_PersistentArray_findSomeM_x3f___redArg(v___x_2241_, v_t_2238_, v___f_2240_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRev_x3f___redArg(lean_object* v_t_2243_, lean_object* v_f_2244_){
_start:
{
lean_object* v___f_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___f_2245_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSome_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2245_, 0, v_f_2244_);
v___x_2246_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2247_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2246_, v_t_2243_, v___f_2245_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRev_x3f(lean_object* v_00_u03b1_2248_, lean_object* v_00_u03b2_2249_, lean_object* v_t_2250_, lean_object* v_f_2251_){
_start:
{
lean_object* v___f_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___f_2252_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSome_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2252_, 0, v_f_2251_);
v___x_2253_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2254_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2253_, v_t_2250_, v___f_2252_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(lean_object* v_as_2255_, size_t v_i_2256_, size_t v_stop_2257_, lean_object* v_b_2258_){
_start:
{
uint8_t v___x_2259_; 
v___x_2259_ = lean_usize_dec_eq(v_i_2256_, v_stop_2257_);
if (v___x_2259_ == 0)
{
lean_object* v___x_2260_; lean_object* v___x_2261_; size_t v___x_2262_; size_t v___x_2263_; 
v___x_2260_ = lean_array_uget_borrowed(v_as_2255_, v_i_2256_);
lean_inc(v___x_2260_);
v___x_2261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2260_);
lean_ctor_set(v___x_2261_, 1, v_b_2258_);
v___x_2262_ = ((size_t)1ULL);
v___x_2263_ = lean_usize_add(v_i_2256_, v___x_2262_);
v_i_2256_ = v___x_2263_;
v_b_2258_ = v___x_2261_;
goto _start;
}
else
{
return v_b_2258_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg___boxed(lean_object* v_as_2265_, lean_object* v_i_2266_, lean_object* v_stop_2267_, lean_object* v_b_2268_){
_start:
{
size_t v_i_boxed_2269_; size_t v_stop_boxed_2270_; lean_object* v_res_2271_; 
v_i_boxed_2269_ = lean_unbox_usize(v_i_2266_);
lean_dec(v_i_2266_);
v_stop_boxed_2270_ = lean_unbox_usize(v_stop_2267_);
lean_dec(v_stop_2267_);
v_res_2271_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_as_2265_, v_i_boxed_2269_, v_stop_boxed_2270_, v_b_2268_);
lean_dec_ref(v_as_2265_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(lean_object* v_x_2272_, lean_object* v_x_2273_){
_start:
{
if (lean_obj_tag(v_x_2272_) == 0)
{
lean_object* v_cs_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; 
v_cs_2274_ = lean_ctor_get(v_x_2272_, 0);
v___x_2275_ = lean_unsigned_to_nat(0u);
v___x_2276_ = lean_array_get_size(v_cs_2274_);
v___x_2277_ = lean_nat_dec_lt(v___x_2275_, v___x_2276_);
if (v___x_2277_ == 0)
{
return v_x_2273_;
}
else
{
size_t v___x_2278_; size_t v___x_2279_; lean_object* v___x_2280_; 
v___x_2278_ = ((size_t)0ULL);
v___x_2279_ = lean_usize_of_nat(v___x_2276_);
v___x_2280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(v_cs_2274_, v___x_2278_, v___x_2279_, v_x_2273_);
return v___x_2280_;
}
}
else
{
lean_object* v_vs_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; uint8_t v___x_2284_; 
v_vs_2281_ = lean_ctor_get(v_x_2272_, 0);
v___x_2282_ = lean_unsigned_to_nat(0u);
v___x_2283_ = lean_array_get_size(v_vs_2281_);
v___x_2284_ = lean_nat_dec_lt(v___x_2282_, v___x_2283_);
if (v___x_2284_ == 0)
{
return v_x_2273_;
}
else
{
size_t v___x_2285_; size_t v___x_2286_; lean_object* v___x_2287_; 
v___x_2285_ = ((size_t)0ULL);
v___x_2286_ = lean_usize_of_nat(v___x_2283_);
v___x_2287_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_vs_2281_, v___x_2285_, v___x_2286_, v_x_2273_);
return v___x_2287_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(lean_object* v_as_2288_, size_t v_i_2289_, size_t v_stop_2290_, lean_object* v_b_2291_){
_start:
{
uint8_t v___x_2292_; 
v___x_2292_ = lean_usize_dec_eq(v_i_2289_, v_stop_2290_);
if (v___x_2292_ == 0)
{
lean_object* v___x_2293_; lean_object* v___x_2294_; size_t v___x_2295_; size_t v___x_2296_; 
v___x_2293_ = lean_array_uget_borrowed(v_as_2288_, v_i_2289_);
v___x_2294_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(v___x_2293_, v_b_2291_);
v___x_2295_ = ((size_t)1ULL);
v___x_2296_ = lean_usize_add(v_i_2289_, v___x_2295_);
v_i_2289_ = v___x_2296_;
v_b_2291_ = v___x_2294_;
goto _start;
}
else
{
return v_b_2291_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_2298_, lean_object* v_i_2299_, lean_object* v_stop_2300_, lean_object* v_b_2301_){
_start:
{
size_t v_i_boxed_2302_; size_t v_stop_boxed_2303_; lean_object* v_res_2304_; 
v_i_boxed_2302_ = lean_unbox_usize(v_i_2299_);
lean_dec(v_i_2299_);
v_stop_boxed_2303_ = lean_unbox_usize(v_stop_2300_);
lean_dec(v_stop_2300_);
v_res_2304_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(v_as_2298_, v_i_boxed_2302_, v_stop_boxed_2303_, v_b_2301_);
lean_dec_ref(v_as_2298_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg___boxed(lean_object* v_x_2305_, lean_object* v_x_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(v_x_2305_, v_x_2306_);
lean_dec_ref(v_x_2305_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(lean_object* v_x_2308_, size_t v_x_2309_, size_t v_x_2310_, lean_object* v_x_2311_){
_start:
{
if (lean_obj_tag(v_x_2308_) == 0)
{
lean_object* v_cs_2312_; lean_object* v___x_2313_; size_t v___x_2314_; lean_object* v_j_2315_; lean_object* v___x_2316_; size_t v___x_2317_; size_t v___x_2318_; size_t v___x_2319_; size_t v___x_2320_; size_t v___x_2321_; size_t v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; uint8_t v___x_2327_; 
v_cs_2312_ = lean_ctor_get(v_x_2308_, 0);
v___x_2313_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_2314_ = lean_usize_shift_right(v_x_2309_, v_x_2310_);
v_j_2315_ = lean_usize_to_nat(v___x_2314_);
v___x_2316_ = lean_array_get_borrowed(v___x_2313_, v_cs_2312_, v_j_2315_);
v___x_2317_ = ((size_t)1ULL);
v___x_2318_ = lean_usize_shift_left(v___x_2317_, v_x_2310_);
v___x_2319_ = lean_usize_sub(v___x_2318_, v___x_2317_);
v___x_2320_ = lean_usize_land(v_x_2309_, v___x_2319_);
v___x_2321_ = ((size_t)5ULL);
v___x_2322_ = lean_usize_sub(v_x_2310_, v___x_2321_);
v___x_2323_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(v___x_2316_, v___x_2320_, v___x_2322_, v_x_2311_);
v___x_2324_ = lean_unsigned_to_nat(1u);
v___x_2325_ = lean_nat_add(v_j_2315_, v___x_2324_);
lean_dec(v_j_2315_);
v___x_2326_ = lean_array_get_size(v_cs_2312_);
v___x_2327_ = lean_nat_dec_lt(v___x_2325_, v___x_2326_);
if (v___x_2327_ == 0)
{
lean_dec(v___x_2325_);
return v___x_2323_;
}
else
{
size_t v___x_2328_; size_t v___x_2329_; lean_object* v___x_2330_; 
v___x_2328_ = lean_usize_of_nat(v___x_2325_);
lean_dec(v___x_2325_);
v___x_2329_ = lean_usize_of_nat(v___x_2326_);
v___x_2330_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(v_cs_2312_, v___x_2328_, v___x_2329_, v___x_2323_);
return v___x_2330_;
}
}
else
{
lean_object* v_vs_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; uint8_t v___x_2334_; 
v_vs_2331_ = lean_ctor_get(v_x_2308_, 0);
v___x_2332_ = lean_usize_to_nat(v_x_2309_);
v___x_2333_ = lean_array_get_size(v_vs_2331_);
v___x_2334_ = lean_nat_dec_lt(v___x_2332_, v___x_2333_);
if (v___x_2334_ == 0)
{
lean_dec(v___x_2332_);
return v_x_2311_;
}
else
{
size_t v___x_2335_; size_t v___x_2336_; lean_object* v___x_2337_; 
v___x_2335_ = lean_usize_of_nat(v___x_2332_);
lean_dec(v___x_2332_);
v___x_2336_ = lean_usize_of_nat(v___x_2333_);
v___x_2337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_vs_2331_, v___x_2335_, v___x_2336_, v_x_2311_);
return v___x_2337_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg___boxed(lean_object* v_x_2338_, lean_object* v_x_2339_, lean_object* v_x_2340_, lean_object* v_x_2341_){
_start:
{
size_t v_x_1119__boxed_2342_; size_t v_x_1120__boxed_2343_; lean_object* v_res_2344_; 
v_x_1119__boxed_2342_ = lean_unbox_usize(v_x_2339_);
lean_dec(v_x_2339_);
v_x_1120__boxed_2343_ = lean_unbox_usize(v_x_2340_);
lean_dec(v_x_2340_);
v_res_2344_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(v_x_2338_, v_x_1119__boxed_2342_, v_x_1120__boxed_2343_, v_x_2341_);
lean_dec_ref(v_x_2338_);
return v_res_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg(lean_object* v_t_2345_, lean_object* v_init_2346_, lean_object* v_start_2347_){
_start:
{
lean_object* v___x_2348_; uint8_t v___x_2349_; 
v___x_2348_ = lean_unsigned_to_nat(0u);
v___x_2349_ = lean_nat_dec_eq(v_start_2347_, v___x_2348_);
if (v___x_2349_ == 0)
{
lean_object* v_root_2350_; lean_object* v_tail_2351_; size_t v_shift_2352_; lean_object* v_tailOff_2353_; uint8_t v___x_2354_; 
v_root_2350_ = lean_ctor_get(v_t_2345_, 0);
v_tail_2351_ = lean_ctor_get(v_t_2345_, 1);
v_shift_2352_ = lean_ctor_get_usize(v_t_2345_, 4);
v_tailOff_2353_ = lean_ctor_get(v_t_2345_, 3);
v___x_2354_ = lean_nat_dec_le(v_tailOff_2353_, v_start_2347_);
if (v___x_2354_ == 0)
{
size_t v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; uint8_t v___x_2358_; 
v___x_2355_ = lean_usize_of_nat(v_start_2347_);
v___x_2356_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(v_root_2350_, v___x_2355_, v_shift_2352_, v_init_2346_);
v___x_2357_ = lean_array_get_size(v_tail_2351_);
v___x_2358_ = lean_nat_dec_lt(v___x_2348_, v___x_2357_);
if (v___x_2358_ == 0)
{
return v___x_2356_;
}
else
{
size_t v___x_2359_; size_t v___x_2360_; lean_object* v___x_2361_; 
v___x_2359_ = ((size_t)0ULL);
v___x_2360_ = lean_usize_of_nat(v___x_2357_);
v___x_2361_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_tail_2351_, v___x_2359_, v___x_2360_, v___x_2356_);
return v___x_2361_;
}
}
else
{
lean_object* v___x_2362_; lean_object* v___x_2363_; uint8_t v___x_2364_; 
v___x_2362_ = lean_nat_sub(v_start_2347_, v_tailOff_2353_);
v___x_2363_ = lean_array_get_size(v_tail_2351_);
v___x_2364_ = lean_nat_dec_lt(v___x_2362_, v___x_2363_);
if (v___x_2364_ == 0)
{
lean_dec(v___x_2362_);
return v_init_2346_;
}
else
{
size_t v___x_2365_; size_t v___x_2366_; lean_object* v___x_2367_; 
v___x_2365_ = lean_usize_of_nat(v___x_2362_);
lean_dec(v___x_2362_);
v___x_2366_ = lean_usize_of_nat(v___x_2363_);
v___x_2367_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_tail_2351_, v___x_2365_, v___x_2366_, v_init_2346_);
return v___x_2367_;
}
}
}
else
{
lean_object* v_root_2368_; lean_object* v_tail_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; uint8_t v___x_2372_; 
v_root_2368_ = lean_ctor_get(v_t_2345_, 0);
v_tail_2369_ = lean_ctor_get(v_t_2345_, 1);
v___x_2370_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(v_root_2368_, v_init_2346_);
v___x_2371_ = lean_array_get_size(v_tail_2369_);
v___x_2372_ = lean_nat_dec_lt(v___x_2348_, v___x_2371_);
if (v___x_2372_ == 0)
{
return v___x_2370_;
}
else
{
size_t v___x_2373_; size_t v___x_2374_; lean_object* v___x_2375_; 
v___x_2373_ = ((size_t)0ULL);
v___x_2374_ = lean_usize_of_nat(v___x_2371_);
v___x_2375_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_tail_2369_, v___x_2373_, v___x_2374_, v___x_2370_);
return v___x_2375_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg___boxed(lean_object* v_t_2376_, lean_object* v_init_2377_, lean_object* v_start_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg(v_t_2376_, v_init_2377_, v_start_2378_);
lean_dec(v_start_2378_);
lean_dec_ref(v_t_2376_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___redArg(lean_object* v_t_2380_){
_start:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2381_ = lean_box(0);
v___x_2382_ = lean_unsigned_to_nat(0u);
v___x_2383_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg(v_t_2380_, v___x_2381_, v___x_2382_);
v___x_2384_ = l_List_reverse___redArg(v___x_2383_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___redArg___boxed(lean_object* v_t_2385_){
_start:
{
lean_object* v_res_2386_; 
v_res_2386_ = l_Lean_PersistentArray_toList___redArg(v_t_2385_);
lean_dec_ref(v_t_2385_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList(lean_object* v_00_u03b1_2387_, lean_object* v_t_2388_){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = l_Lean_PersistentArray_toList___redArg(v_t_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___boxed(lean_object* v_00_u03b1_2390_, lean_object* v_t_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l_Lean_PersistentArray_toList(v_00_u03b1_2390_, v_t_2391_);
lean_dec_ref(v_t_2391_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0(lean_object* v_00_u03b1_2393_, lean_object* v_t_2394_, lean_object* v_init_2395_, lean_object* v_start_2396_){
_start:
{
lean_object* v___x_2397_; 
v___x_2397_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg(v_t_2394_, v_init_2395_, v_start_2396_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___boxed(lean_object* v_00_u03b1_2398_, lean_object* v_t_2399_, lean_object* v_init_2400_, lean_object* v_start_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0(v_00_u03b1_2398_, v_t_2399_, v_init_2400_, v_start_2401_);
lean_dec(v_start_2401_);
lean_dec_ref(v_t_2399_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0(lean_object* v_00_u03b1_2403_, lean_object* v_x_2404_, size_t v_x_2405_, size_t v_x_2406_, lean_object* v_x_2407_){
_start:
{
lean_object* v___x_2408_; 
v___x_2408_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(v_x_2404_, v_x_2405_, v_x_2406_, v_x_2407_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2409_, lean_object* v_x_2410_, lean_object* v_x_2411_, lean_object* v_x_2412_, lean_object* v_x_2413_){
_start:
{
size_t v_x_1237__boxed_2414_; size_t v_x_1238__boxed_2415_; lean_object* v_res_2416_; 
v_x_1237__boxed_2414_ = lean_unbox_usize(v_x_2411_);
lean_dec(v_x_2411_);
v_x_1238__boxed_2415_ = lean_unbox_usize(v_x_2412_);
lean_dec(v_x_2412_);
v_res_2416_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0(v_00_u03b1_2409_, v_x_2410_, v_x_1237__boxed_2414_, v_x_1238__boxed_2415_, v_x_2413_);
lean_dec_ref(v_x_2410_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1(lean_object* v_00_u03b1_2417_, lean_object* v_as_2418_, size_t v_i_2419_, size_t v_stop_2420_, lean_object* v_b_2421_){
_start:
{
lean_object* v___x_2422_; 
v___x_2422_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_as_2418_, v_i_2419_, v_stop_2420_, v_b_2421_);
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2423_, lean_object* v_as_2424_, lean_object* v_i_2425_, lean_object* v_stop_2426_, lean_object* v_b_2427_){
_start:
{
size_t v_i_boxed_2428_; size_t v_stop_boxed_2429_; lean_object* v_res_2430_; 
v_i_boxed_2428_ = lean_unbox_usize(v_i_2425_);
lean_dec(v_i_2425_);
v_stop_boxed_2429_ = lean_unbox_usize(v_stop_2426_);
lean_dec(v_stop_2426_);
v_res_2430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1(v_00_u03b1_2423_, v_as_2424_, v_i_boxed_2428_, v_stop_boxed_2429_, v_b_2427_);
lean_dec_ref(v_as_2424_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2(lean_object* v_00_u03b1_2431_, lean_object* v_x_2432_, lean_object* v_x_2433_){
_start:
{
lean_object* v___x_2434_; 
v___x_2434_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(v_x_2432_, v_x_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2435_, lean_object* v_x_2436_, lean_object* v_x_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2(v_00_u03b1_2435_, v_x_2436_, v_x_2437_);
lean_dec_ref(v_x_2436_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2439_, lean_object* v_as_2440_, size_t v_i_2441_, size_t v_stop_2442_, lean_object* v_b_2443_){
_start:
{
lean_object* v___x_2444_; 
v___x_2444_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(v_as_2440_, v_i_2441_, v_stop_2442_, v_b_2443_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2445_, lean_object* v_as_2446_, lean_object* v_i_2447_, lean_object* v_stop_2448_, lean_object* v_b_2449_){
_start:
{
size_t v_i_boxed_2450_; size_t v_stop_boxed_2451_; lean_object* v_res_2452_; 
v_i_boxed_2450_ = lean_unbox_usize(v_i_2447_);
lean_dec(v_i_2447_);
v_stop_boxed_2451_ = lean_unbox_usize(v_stop_2448_);
lean_dec(v_stop_2448_);
v_res_2452_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1(v_00_u03b1_2445_, v_as_2446_, v_i_boxed_2450_, v_stop_boxed_2451_, v_b_2449_);
lean_dec_ref(v_as_2446_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___redArg(lean_object* v_inst_2453_, lean_object* v_p_2454_, lean_object* v_x_2455_){
_start:
{
if (lean_obj_tag(v_x_2455_) == 0)
{
lean_object* v_toApplicative_2456_; lean_object* v_cs_2457_; lean_object* v_toPure_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint8_t v___x_2461_; 
v_toApplicative_2456_ = lean_ctor_get(v_inst_2453_, 0);
v_cs_2457_ = lean_ctor_get(v_x_2455_, 0);
lean_inc_ref(v_cs_2457_);
lean_dec_ref_known(v_x_2455_, 1);
v_toPure_2458_ = lean_ctor_get(v_toApplicative_2456_, 1);
v___x_2459_ = lean_unsigned_to_nat(0u);
v___x_2460_ = lean_array_get_size(v_cs_2457_);
v___x_2461_ = lean_nat_dec_lt(v___x_2459_, v___x_2460_);
if (v___x_2461_ == 0)
{
lean_object* v___x_2462_; lean_object* v___x_2463_; 
lean_inc(v_toPure_2458_);
lean_dec_ref(v_cs_2457_);
lean_dec(v_p_2454_);
lean_dec_ref(v_inst_2453_);
v___x_2462_ = lean_box(v___x_2461_);
v___x_2463_ = lean_apply_2(v_toPure_2458_, lean_box(0), v___x_2462_);
return v___x_2463_;
}
else
{
if (v___x_2461_ == 0)
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
lean_inc(v_toPure_2458_);
lean_dec_ref(v_cs_2457_);
lean_dec(v_p_2454_);
lean_dec_ref(v_inst_2453_);
v___x_2464_ = lean_box(v___x_2461_);
v___x_2465_ = lean_apply_2(v_toPure_2458_, lean_box(0), v___x_2464_);
return v___x_2465_;
}
else
{
lean_object* v___f_2466_; size_t v___x_2467_; size_t v___x_2468_; lean_object* v___x_2469_; 
lean_inc_ref(v_inst_2453_);
v___f_2466_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_anyMAux___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2466_, 0, v_inst_2453_);
lean_closure_set(v___f_2466_, 1, v_p_2454_);
v___x_2467_ = ((size_t)0ULL);
v___x_2468_ = lean_usize_of_nat(v___x_2460_);
v___x_2469_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2453_, v___f_2466_, v_cs_2457_, v___x_2467_, v___x_2468_);
return v___x_2469_;
}
}
}
else
{
lean_object* v_toApplicative_2470_; lean_object* v_vs_2471_; lean_object* v_toPure_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; uint8_t v___x_2475_; 
v_toApplicative_2470_ = lean_ctor_get(v_inst_2453_, 0);
v_vs_2471_ = lean_ctor_get(v_x_2455_, 0);
lean_inc_ref(v_vs_2471_);
lean_dec_ref_known(v_x_2455_, 1);
v_toPure_2472_ = lean_ctor_get(v_toApplicative_2470_, 1);
v___x_2473_ = lean_unsigned_to_nat(0u);
v___x_2474_ = lean_array_get_size(v_vs_2471_);
v___x_2475_ = lean_nat_dec_lt(v___x_2473_, v___x_2474_);
if (v___x_2475_ == 0)
{
lean_object* v___x_2476_; lean_object* v___x_2477_; 
lean_inc(v_toPure_2472_);
lean_dec_ref(v_vs_2471_);
lean_dec(v_p_2454_);
lean_dec_ref(v_inst_2453_);
v___x_2476_ = lean_box(v___x_2475_);
v___x_2477_ = lean_apply_2(v_toPure_2472_, lean_box(0), v___x_2476_);
return v___x_2477_;
}
else
{
if (v___x_2475_ == 0)
{
lean_object* v___x_2478_; lean_object* v___x_2479_; 
lean_inc(v_toPure_2472_);
lean_dec_ref(v_vs_2471_);
lean_dec(v_p_2454_);
lean_dec_ref(v_inst_2453_);
v___x_2478_ = lean_box(v___x_2475_);
v___x_2479_ = lean_apply_2(v_toPure_2472_, lean_box(0), v___x_2478_);
return v___x_2479_;
}
else
{
size_t v___x_2480_; size_t v___x_2481_; lean_object* v___x_2482_; 
v___x_2480_ = ((size_t)0ULL);
v___x_2481_ = lean_usize_of_nat(v___x_2474_);
v___x_2482_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2453_, v_p_2454_, v_vs_2471_, v___x_2480_, v___x_2481_);
return v___x_2482_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___redArg___lam__0(lean_object* v_inst_2483_, lean_object* v_p_2484_, lean_object* v_c_2485_){
_start:
{
lean_object* v___x_2486_; 
v___x_2486_ = l_Lean_PersistentArray_anyMAux___redArg(v_inst_2483_, v_p_2484_, v_c_2485_);
return v___x_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux(lean_object* v_00_u03b1_2487_, lean_object* v_m_2488_, lean_object* v_inst_2489_, lean_object* v_p_2490_, lean_object* v_x_2491_){
_start:
{
lean_object* v___x_2492_; 
v___x_2492_ = l_Lean_PersistentArray_anyMAux___redArg(v_inst_2489_, v_p_2490_, v_x_2491_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg___lam__0(lean_object* v_tail_2493_, lean_object* v_toPure_2494_, lean_object* v_inst_2495_, lean_object* v_p_2496_, uint8_t v_b_2497_){
_start:
{
if (v_b_2497_ == 0)
{
lean_object* v___x_2498_; lean_object* v___x_2499_; uint8_t v___x_2500_; 
v___x_2498_ = lean_unsigned_to_nat(0u);
v___x_2499_ = lean_array_get_size(v_tail_2493_);
v___x_2500_ = lean_nat_dec_lt(v___x_2498_, v___x_2499_);
if (v___x_2500_ == 0)
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
lean_dec(v_p_2496_);
lean_dec_ref(v_inst_2495_);
lean_dec_ref(v_tail_2493_);
v___x_2501_ = lean_box(v___x_2500_);
v___x_2502_ = lean_apply_2(v_toPure_2494_, lean_box(0), v___x_2501_);
return v___x_2502_;
}
else
{
if (v___x_2500_ == 0)
{
lean_object* v___x_2503_; lean_object* v___x_2504_; 
lean_dec(v_p_2496_);
lean_dec_ref(v_inst_2495_);
lean_dec_ref(v_tail_2493_);
v___x_2503_ = lean_box(v___x_2500_);
v___x_2504_ = lean_apply_2(v_toPure_2494_, lean_box(0), v___x_2503_);
return v___x_2504_;
}
else
{
size_t v___x_2505_; size_t v___x_2506_; lean_object* v___x_2507_; 
lean_dec(v_toPure_2494_);
v___x_2505_ = ((size_t)0ULL);
v___x_2506_ = lean_usize_of_nat(v___x_2499_);
v___x_2507_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2495_, v_p_2496_, v_tail_2493_, v___x_2505_, v___x_2506_);
return v___x_2507_;
}
}
}
else
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
lean_dec(v_p_2496_);
lean_dec_ref(v_inst_2495_);
lean_dec_ref(v_tail_2493_);
v___x_2508_ = lean_box(v_b_2497_);
v___x_2509_ = lean_apply_2(v_toPure_2494_, lean_box(0), v___x_2508_);
return v___x_2509_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg___lam__0___boxed(lean_object* v_tail_2510_, lean_object* v_toPure_2511_, lean_object* v_inst_2512_, lean_object* v_p_2513_, lean_object* v_b_2514_){
_start:
{
uint8_t v_b_boxed_2515_; lean_object* v_res_2516_; 
v_b_boxed_2515_ = lean_unbox(v_b_2514_);
v_res_2516_ = l_Lean_PersistentArray_anyM___redArg___lam__0(v_tail_2510_, v_toPure_2511_, v_inst_2512_, v_p_2513_, v_b_boxed_2515_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg(lean_object* v_inst_2517_, lean_object* v_t_2518_, lean_object* v_p_2519_){
_start:
{
lean_object* v_toApplicative_2520_; lean_object* v_toBind_2521_; lean_object* v_root_2522_; lean_object* v_tail_2523_; lean_object* v_toPure_2524_; lean_object* v___x_2525_; lean_object* v___f_2526_; lean_object* v___x_2527_; 
v_toApplicative_2520_ = lean_ctor_get(v_inst_2517_, 0);
v_toBind_2521_ = lean_ctor_get(v_inst_2517_, 1);
lean_inc(v_toBind_2521_);
v_root_2522_ = lean_ctor_get(v_t_2518_, 0);
lean_inc_ref(v_root_2522_);
v_tail_2523_ = lean_ctor_get(v_t_2518_, 1);
lean_inc_ref(v_tail_2523_);
lean_dec_ref(v_t_2518_);
v_toPure_2524_ = lean_ctor_get(v_toApplicative_2520_, 1);
lean_inc(v_toPure_2524_);
lean_inc(v_p_2519_);
lean_inc_ref(v_inst_2517_);
v___x_2525_ = l_Lean_PersistentArray_anyMAux___redArg(v_inst_2517_, v_p_2519_, v_root_2522_);
v___f_2526_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_anyM___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2526_, 0, v_tail_2523_);
lean_closure_set(v___f_2526_, 1, v_toPure_2524_);
lean_closure_set(v___f_2526_, 2, v_inst_2517_);
lean_closure_set(v___f_2526_, 3, v_p_2519_);
v___x_2527_ = lean_apply_4(v_toBind_2521_, lean_box(0), lean_box(0), v___x_2525_, v___f_2526_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM(lean_object* v_00_u03b1_2528_, lean_object* v_m_2529_, lean_object* v_inst_2530_, lean_object* v_t_2531_, lean_object* v_p_2532_){
_start:
{
lean_object* v___x_2533_; 
v___x_2533_ = l_Lean_PersistentArray_anyM___redArg(v_inst_2530_, v_t_2531_, v_p_2532_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__0(lean_object* v_toPure_2534_, uint8_t v_b_2535_){
_start:
{
if (v_b_2535_ == 0)
{
uint8_t v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2536_ = 1;
v___x_2537_ = lean_box(v___x_2536_);
v___x_2538_ = lean_apply_2(v_toPure_2534_, lean_box(0), v___x_2537_);
return v___x_2538_;
}
else
{
uint8_t v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2539_ = 0;
v___x_2540_ = lean_box(v___x_2539_);
v___x_2541_ = lean_apply_2(v_toPure_2534_, lean_box(0), v___x_2540_);
return v___x_2541_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__0___boxed(lean_object* v_toPure_2542_, lean_object* v_b_2543_){
_start:
{
uint8_t v_b_boxed_2544_; lean_object* v_res_2545_; 
v_b_boxed_2544_ = lean_unbox(v_b_2543_);
v_res_2545_ = l_Lean_PersistentArray_allM___redArg___lam__0(v_toPure_2542_, v_b_boxed_2544_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__1(lean_object* v_p_2546_, lean_object* v_toBind_2547_, lean_object* v___f_2548_, lean_object* v_v_2549_){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = lean_apply_1(v_p_2546_, v_v_2549_);
v___x_2551_ = lean_apply_4(v_toBind_2547_, lean_box(0), lean_box(0), v___x_2550_, v___f_2548_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg(lean_object* v_inst_2552_, lean_object* v_a_2553_, lean_object* v_p_2554_){
_start:
{
lean_object* v_toApplicative_2555_; lean_object* v_toBind_2556_; lean_object* v_toPure_2557_; lean_object* v___f_2558_; lean_object* v___f_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v_toApplicative_2555_ = lean_ctor_get(v_inst_2552_, 0);
v_toBind_2556_ = lean_ctor_get(v_inst_2552_, 1);
lean_inc_n(v_toBind_2556_, 2);
v_toPure_2557_ = lean_ctor_get(v_toApplicative_2555_, 1);
lean_inc(v_toPure_2557_);
v___f_2558_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2558_, 0, v_toPure_2557_);
lean_inc_ref(v___f_2558_);
v___f_2559_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_allM___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2559_, 0, v_p_2554_);
lean_closure_set(v___f_2559_, 1, v_toBind_2556_);
lean_closure_set(v___f_2559_, 2, v___f_2558_);
v___x_2560_ = l_Lean_PersistentArray_anyM___redArg(v_inst_2552_, v_a_2553_, v___f_2559_);
v___x_2561_ = lean_apply_4(v_toBind_2556_, lean_box(0), lean_box(0), v___x_2560_, v___f_2558_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM(lean_object* v_00_u03b1_2562_, lean_object* v_m_2563_, lean_object* v_inst_2564_, lean_object* v_a_2565_, lean_object* v_p_2566_){
_start:
{
lean_object* v_toApplicative_2567_; lean_object* v_toBind_2568_; lean_object* v_toPure_2569_; lean_object* v___f_2570_; lean_object* v___f_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v_toApplicative_2567_ = lean_ctor_get(v_inst_2564_, 0);
v_toBind_2568_ = lean_ctor_get(v_inst_2564_, 1);
lean_inc_n(v_toBind_2568_, 2);
v_toPure_2569_ = lean_ctor_get(v_toApplicative_2567_, 1);
lean_inc(v_toPure_2569_);
v___f_2570_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2570_, 0, v_toPure_2569_);
lean_inc_ref(v___f_2570_);
v___f_2571_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_allM___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2571_, 0, v_p_2566_);
lean_closure_set(v___f_2571_, 1, v_toBind_2568_);
lean_closure_set(v___f_2571_, 2, v___f_2570_);
v___x_2572_ = l_Lean_PersistentArray_anyM___redArg(v_inst_2564_, v_a_2565_, v___f_2571_);
v___x_2573_ = lean_apply_4(v_toBind_2568_, lean_box(0), lean_box(0), v___x_2572_, v___f_2570_);
return v___x_2573_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_any___redArg___lam__0(lean_object* v_p_2574_, lean_object* v_x_2575_){
_start:
{
lean_object* v___x_2576_; uint8_t v___x_2577_; 
v___x_2576_ = lean_apply_1(v_p_2574_, v_x_2575_);
v___x_2577_ = lean_unbox(v___x_2576_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___redArg___lam__0___boxed(lean_object* v_p_2578_, lean_object* v_x_2579_){
_start:
{
uint8_t v_res_2580_; lean_object* v_r_2581_; 
v_res_2580_ = l_Lean_PersistentArray_any___redArg___lam__0(v_p_2578_, v_x_2579_);
v_r_2581_ = lean_box(v_res_2580_);
return v_r_2581_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___redArg(lean_object* v_a_2582_, lean_object* v_p_2583_){
_start:
{
lean_object* v___f_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___f_2584_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2584_, 0, v_p_2583_);
v___x_2585_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2586_ = l_Lean_PersistentArray_anyM___redArg(v___x_2585_, v_a_2582_, v___f_2584_);
return v___x_2586_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_any(lean_object* v_00_u03b1_2587_, lean_object* v_a_2588_, lean_object* v_p_2589_){
_start:
{
lean_object* v___f_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; uint8_t v___x_2593_; 
v___f_2590_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2590_, 0, v_p_2589_);
v___x_2591_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2592_ = l_Lean_PersistentArray_anyM___redArg(v___x_2591_, v_a_2588_, v___f_2590_);
v___x_2593_ = lean_unbox(v___x_2592_);
lean_dec(v___x_2592_);
return v___x_2593_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___boxed(lean_object* v_00_u03b1_2594_, lean_object* v_a_2595_, lean_object* v_p_2596_){
_start:
{
uint8_t v_res_2597_; lean_object* v_r_2598_; 
v_res_2597_ = l_Lean_PersistentArray_any(v_00_u03b1_2594_, v_a_2595_, v_p_2596_);
v_r_2598_ = lean_box(v_res_2597_);
return v_r_2598_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all___redArg___lam__0(lean_object* v_p_2599_, lean_object* v_x_2600_){
_start:
{
lean_object* v___x_2601_; uint8_t v___x_2602_; 
v___x_2601_ = lean_apply_1(v_p_2599_, v_x_2600_);
v___x_2602_ = lean_unbox(v___x_2601_);
if (v___x_2602_ == 0)
{
uint8_t v___x_2603_; 
v___x_2603_ = 1;
return v___x_2603_;
}
else
{
uint8_t v___x_2604_; 
v___x_2604_ = 0;
return v___x_2604_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___redArg___lam__0___boxed(lean_object* v_p_2605_, lean_object* v_x_2606_){
_start:
{
uint8_t v_res_2607_; lean_object* v_r_2608_; 
v_res_2607_ = l_Lean_PersistentArray_all___redArg___lam__0(v_p_2605_, v_x_2606_);
v_r_2608_ = lean_box(v_res_2607_);
return v_r_2608_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all___redArg(lean_object* v_a_2609_, lean_object* v_p_2610_){
_start:
{
lean_object* v___f_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; uint8_t v___x_2614_; 
v___f_2611_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_all___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2611_, 0, v_p_2610_);
v___x_2612_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2613_ = l_Lean_PersistentArray_anyM___redArg(v___x_2612_, v_a_2609_, v___f_2611_);
v___x_2614_ = lean_unbox(v___x_2613_);
lean_dec(v___x_2613_);
if (v___x_2614_ == 0)
{
uint8_t v___x_2615_; 
v___x_2615_ = 1;
return v___x_2615_;
}
else
{
uint8_t v___x_2616_; 
v___x_2616_ = 0;
return v___x_2616_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___redArg___boxed(lean_object* v_a_2617_, lean_object* v_p_2618_){
_start:
{
uint8_t v_res_2619_; lean_object* v_r_2620_; 
v_res_2619_ = l_Lean_PersistentArray_all___redArg(v_a_2617_, v_p_2618_);
v_r_2620_ = lean_box(v_res_2619_);
return v_r_2620_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all(lean_object* v_00_u03b1_2621_, lean_object* v_a_2622_, lean_object* v_p_2623_){
_start:
{
lean_object* v___f_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; uint8_t v___x_2627_; 
v___f_2624_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_all___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2624_, 0, v_p_2623_);
v___x_2625_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2626_ = l_Lean_PersistentArray_anyM___redArg(v___x_2625_, v_a_2622_, v___f_2624_);
v___x_2627_ = lean_unbox(v___x_2626_);
lean_dec(v___x_2626_);
if (v___x_2627_ == 0)
{
uint8_t v___x_2628_; 
v___x_2628_ = 1;
return v___x_2628_;
}
else
{
uint8_t v___x_2629_; 
v___x_2629_ = 0;
return v___x_2629_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___boxed(lean_object* v_00_u03b1_2630_, lean_object* v_a_2631_, lean_object* v_p_2632_){
_start:
{
uint8_t v_res_2633_; lean_object* v_r_2634_; 
v_res_2633_ = l_Lean_PersistentArray_all(v_00_u03b1_2630_, v_a_2631_, v_p_2632_);
v_r_2634_ = lean_box(v_res_2633_);
return v_r_2634_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__0(lean_object* v_cs_2635_){
_start:
{
lean_object* v___x_2636_; 
v___x_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2636_, 0, v_cs_2635_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__2(lean_object* v_vs_2637_){
_start:
{
lean_object* v___x_2638_; 
v___x_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2638_, 0, v_vs_2637_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__1___boxed(lean_object* v_inst_2640_, lean_object* v_f_2641_, lean_object* v_c_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_Lean_PersistentArray_mapMAux___redArg___lam__1(v_inst_2640_, v_f_2641_, v_c_2642_);
lean_dec_ref(v_c_2642_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg(lean_object* v_inst_2645_, lean_object* v_f_2646_, lean_object* v_x_2647_){
_start:
{
if (lean_obj_tag(v_x_2647_) == 0)
{
lean_object* v_toApplicative_2648_; lean_object* v_toFunctor_2649_; lean_object* v_cs_2650_; lean_object* v_map_2651_; lean_object* v___f_2652_; lean_object* v___f_2653_; size_t v_sz_2654_; size_t v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v_toApplicative_2648_ = lean_ctor_get(v_inst_2645_, 0);
v_toFunctor_2649_ = lean_ctor_get(v_toApplicative_2648_, 0);
v_cs_2650_ = lean_ctor_get(v_x_2647_, 0);
v_map_2651_ = lean_ctor_get(v_toFunctor_2649_, 0);
lean_inc(v_map_2651_);
v___f_2652_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___redArg___closed__0));
lean_inc_ref(v_inst_2645_);
v___f_2653_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_mapMAux___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2653_, 0, v_inst_2645_);
lean_closure_set(v___f_2653_, 1, v_f_2646_);
v_sz_2654_ = lean_array_size(v_cs_2650_);
v___x_2655_ = ((size_t)0ULL);
v___x_2656_ = l_unsafeCast___redArg(v_cs_2650_);
v___x_2657_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_2645_, v___f_2653_, v_sz_2654_, v___x_2655_, v___x_2656_);
v___x_2658_ = l_unsafeCast___redArg(v___x_2657_);
lean_dec(v___x_2657_);
v___x_2659_ = lean_apply_4(v_map_2651_, lean_box(0), lean_box(0), v___f_2652_, v___x_2658_);
return v___x_2659_;
}
else
{
lean_object* v_toApplicative_2660_; lean_object* v_toFunctor_2661_; lean_object* v_vs_2662_; lean_object* v_map_2663_; lean_object* v___f_2664_; size_t v_sz_2665_; size_t v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v_toApplicative_2660_ = lean_ctor_get(v_inst_2645_, 0);
v_toFunctor_2661_ = lean_ctor_get(v_toApplicative_2660_, 0);
v_vs_2662_ = lean_ctor_get(v_x_2647_, 0);
v_map_2663_ = lean_ctor_get(v_toFunctor_2661_, 0);
lean_inc(v_map_2663_);
v___f_2664_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___redArg___closed__1));
v_sz_2665_ = lean_array_size(v_vs_2662_);
v___x_2666_ = ((size_t)0ULL);
v___x_2667_ = l_unsafeCast___redArg(v_vs_2662_);
v___x_2668_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_2645_, v_f_2646_, v_sz_2665_, v___x_2666_, v___x_2667_);
v___x_2669_ = l_unsafeCast___redArg(v___x_2668_);
lean_dec(v___x_2668_);
v___x_2670_ = lean_apply_4(v_map_2663_, lean_box(0), lean_box(0), v___f_2664_, v___x_2669_);
return v___x_2670_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__1(lean_object* v_inst_2671_, lean_object* v_f_2672_, lean_object* v_c_2673_){
_start:
{
lean_object* v___x_2674_; 
v___x_2674_ = l_Lean_PersistentArray_mapMAux___redArg(v_inst_2671_, v_f_2672_, v_c_2673_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___boxed(lean_object* v_inst_2675_, lean_object* v_f_2676_, lean_object* v_x_2677_){
_start:
{
lean_object* v_res_2678_; 
v_res_2678_ = l_Lean_PersistentArray_mapMAux___redArg(v_inst_2675_, v_f_2676_, v_x_2677_);
lean_dec_ref(v_x_2677_);
return v_res_2678_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux(lean_object* v_00_u03b1_2679_, lean_object* v_m_2680_, lean_object* v_inst_2681_, lean_object* v_00_u03b2_2682_, lean_object* v_f_2683_, lean_object* v_x_2684_){
_start:
{
lean_object* v___x_2685_; 
v___x_2685_ = l_Lean_PersistentArray_mapMAux___redArg(v_inst_2681_, v_f_2683_, v_x_2684_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___boxed(lean_object* v_00_u03b1_2686_, lean_object* v_m_2687_, lean_object* v_inst_2688_, lean_object* v_00_u03b2_2689_, lean_object* v_f_2690_, lean_object* v_x_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l_Lean_PersistentArray_mapMAux(v_00_u03b1_2686_, v_m_2687_, v_inst_2688_, v_00_u03b2_2689_, v_f_2690_, v_x_2691_);
lean_dec_ref(v_x_2691_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__0(lean_object* v_root_2693_, lean_object* v_size_2694_, size_t v_shift_2695_, lean_object* v_tailOff_2696_, lean_object* v_toPure_2697_, lean_object* v_tail_2698_){
_start:
{
lean_object* v___x_2699_; lean_object* v___x_2700_; 
v___x_2699_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2699_, 0, v_root_2693_);
lean_ctor_set(v___x_2699_, 1, v_tail_2698_);
lean_ctor_set(v___x_2699_, 2, v_size_2694_);
lean_ctor_set(v___x_2699_, 3, v_tailOff_2696_);
lean_ctor_set_usize(v___x_2699_, 4, v_shift_2695_);
v___x_2700_ = lean_apply_2(v_toPure_2697_, lean_box(0), v___x_2699_);
return v___x_2700_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__0___boxed(lean_object* v_root_2701_, lean_object* v_size_2702_, lean_object* v_shift_2703_, lean_object* v_tailOff_2704_, lean_object* v_toPure_2705_, lean_object* v_tail_2706_){
_start:
{
size_t v_shift_boxed_2707_; lean_object* v_res_2708_; 
v_shift_boxed_2707_ = lean_unbox_usize(v_shift_2703_);
lean_dec(v_shift_2703_);
v_res_2708_ = l_Lean_PersistentArray_mapM___redArg___lam__0(v_root_2701_, v_size_2702_, v_shift_boxed_2707_, v_tailOff_2704_, v_toPure_2705_, v_tail_2706_);
return v_res_2708_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__1(lean_object* v_size_2709_, size_t v_shift_2710_, lean_object* v_tailOff_2711_, lean_object* v_toPure_2712_, lean_object* v_tail_2713_, lean_object* v_inst_2714_, lean_object* v_f_2715_, lean_object* v_toBind_2716_, lean_object* v_root_2717_){
_start:
{
lean_object* v___x_2718_; lean_object* v___f_2719_; size_t v_sz_2720_; size_t v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2718_ = lean_box_usize(v_shift_2710_);
v___f_2719_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_mapM___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2719_, 0, v_root_2717_);
lean_closure_set(v___f_2719_, 1, v_size_2709_);
lean_closure_set(v___f_2719_, 2, v___x_2718_);
lean_closure_set(v___f_2719_, 3, v_tailOff_2711_);
lean_closure_set(v___f_2719_, 4, v_toPure_2712_);
v_sz_2720_ = lean_array_size(v_tail_2713_);
v___x_2721_ = ((size_t)0ULL);
v___x_2722_ = l_unsafeCast___redArg(v_tail_2713_);
v___x_2723_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_2714_, v_f_2715_, v_sz_2720_, v___x_2721_, v___x_2722_);
v___x_2724_ = l_unsafeCast___redArg(v___x_2723_);
lean_dec(v___x_2723_);
v___x_2725_ = lean_apply_4(v_toBind_2716_, lean_box(0), lean_box(0), v___x_2724_, v___f_2719_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__1___boxed(lean_object* v_size_2726_, lean_object* v_shift_2727_, lean_object* v_tailOff_2728_, lean_object* v_toPure_2729_, lean_object* v_tail_2730_, lean_object* v_inst_2731_, lean_object* v_f_2732_, lean_object* v_toBind_2733_, lean_object* v_root_2734_){
_start:
{
size_t v_shift_boxed_2735_; lean_object* v_res_2736_; 
v_shift_boxed_2735_ = lean_unbox_usize(v_shift_2727_);
lean_dec(v_shift_2727_);
v_res_2736_ = l_Lean_PersistentArray_mapM___redArg___lam__1(v_size_2726_, v_shift_boxed_2735_, v_tailOff_2728_, v_toPure_2729_, v_tail_2730_, v_inst_2731_, v_f_2732_, v_toBind_2733_, v_root_2734_);
lean_dec_ref(v_tail_2730_);
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg(lean_object* v_inst_2737_, lean_object* v_f_2738_, lean_object* v_t_2739_){
_start:
{
lean_object* v_toApplicative_2740_; lean_object* v_toBind_2741_; lean_object* v_root_2742_; lean_object* v_tail_2743_; lean_object* v_size_2744_; size_t v_shift_2745_; lean_object* v_tailOff_2746_; lean_object* v_toPure_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___f_2750_; lean_object* v___x_2751_; 
v_toApplicative_2740_ = lean_ctor_get(v_inst_2737_, 0);
v_toBind_2741_ = lean_ctor_get(v_inst_2737_, 1);
lean_inc_n(v_toBind_2741_, 2);
v_root_2742_ = lean_ctor_get(v_t_2739_, 0);
lean_inc_ref(v_root_2742_);
v_tail_2743_ = lean_ctor_get(v_t_2739_, 1);
lean_inc_ref(v_tail_2743_);
v_size_2744_ = lean_ctor_get(v_t_2739_, 2);
lean_inc(v_size_2744_);
v_shift_2745_ = lean_ctor_get_usize(v_t_2739_, 4);
v_tailOff_2746_ = lean_ctor_get(v_t_2739_, 3);
lean_inc(v_tailOff_2746_);
lean_dec_ref(v_t_2739_);
v_toPure_2747_ = lean_ctor_get(v_toApplicative_2740_, 1);
lean_inc(v_toPure_2747_);
lean_inc(v_f_2738_);
lean_inc_ref(v_inst_2737_);
v___x_2748_ = l_Lean_PersistentArray_mapMAux___redArg(v_inst_2737_, v_f_2738_, v_root_2742_);
lean_dec_ref(v_root_2742_);
v___x_2749_ = lean_box_usize(v_shift_2745_);
v___f_2750_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_mapM___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_2750_, 0, v_size_2744_);
lean_closure_set(v___f_2750_, 1, v___x_2749_);
lean_closure_set(v___f_2750_, 2, v_tailOff_2746_);
lean_closure_set(v___f_2750_, 3, v_toPure_2747_);
lean_closure_set(v___f_2750_, 4, v_tail_2743_);
lean_closure_set(v___f_2750_, 5, v_inst_2737_);
lean_closure_set(v___f_2750_, 6, v_f_2738_);
lean_closure_set(v___f_2750_, 7, v_toBind_2741_);
v___x_2751_ = lean_apply_4(v_toBind_2741_, lean_box(0), lean_box(0), v___x_2748_, v___f_2750_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM(lean_object* v_00_u03b1_2752_, lean_object* v_m_2753_, lean_object* v_inst_2754_, lean_object* v_00_u03b2_2755_, lean_object* v_f_2756_, lean_object* v_t_2757_){
_start:
{
lean_object* v___x_2758_; 
v___x_2758_ = l_Lean_PersistentArray_mapM___redArg(v_inst_2754_, v_f_2756_, v_t_2757_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map___redArg___lam__0(lean_object* v_f_2759_, lean_object* v_x_2760_){
_start:
{
lean_object* v___x_2761_; 
v___x_2761_ = lean_apply_1(v_f_2759_, v_x_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map___redArg(lean_object* v_f_2762_, lean_object* v_t_2763_){
_start:
{
lean_object* v___f_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
v___f_2764_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2764_, 0, v_f_2762_);
v___x_2765_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2766_ = l_Lean_PersistentArray_mapM___redArg(v___x_2765_, v___f_2764_, v_t_2763_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map(lean_object* v_00_u03b1_2767_, lean_object* v_00_u03b2_2768_, lean_object* v_f_2769_, lean_object* v_t_2770_){
_start:
{
lean_object* v___f_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___f_2771_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2771_, 0, v_f_2769_);
v___x_2772_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2773_ = l_Lean_PersistentArray_mapM___redArg(v___x_2772_, v___f_2771_, v_t_2770_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___redArg(lean_object* v_x_2774_, lean_object* v_x_2775_, lean_object* v_x_2776_){
_start:
{
if (lean_obj_tag(v_x_2774_) == 0)
{
lean_object* v_cs_2777_; lean_object* v_numNodes_2778_; lean_object* v_depth_2779_; lean_object* v_tailSize_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2802_; 
v_cs_2777_ = lean_ctor_get(v_x_2774_, 0);
v_numNodes_2778_ = lean_ctor_get(v_x_2775_, 0);
v_depth_2779_ = lean_ctor_get(v_x_2775_, 1);
v_tailSize_2780_ = lean_ctor_get(v_x_2775_, 2);
v_isSharedCheck_2802_ = !lean_is_exclusive(v_x_2775_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2782_ = v_x_2775_;
v_isShared_2783_ = v_isSharedCheck_2802_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_tailSize_2780_);
lean_inc(v_depth_2779_);
lean_inc(v_numNodes_2778_);
lean_dec(v_x_2775_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2802_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___y_2787_; uint8_t v___x_2801_; 
v___x_2784_ = lean_unsigned_to_nat(1u);
v___x_2785_ = lean_nat_add(v_numNodes_2778_, v___x_2784_);
lean_dec(v_numNodes_2778_);
v___x_2801_ = lean_nat_dec_le(v_x_2776_, v_depth_2779_);
if (v___x_2801_ == 0)
{
lean_dec(v_depth_2779_);
lean_inc(v_x_2776_);
v___y_2787_ = v_x_2776_;
goto v___jp_2786_;
}
else
{
v___y_2787_ = v_depth_2779_;
goto v___jp_2786_;
}
v___jp_2786_:
{
lean_object* v___x_2789_; 
if (v_isShared_2783_ == 0)
{
lean_ctor_set(v___x_2782_, 1, v___y_2787_);
lean_ctor_set(v___x_2782_, 0, v___x_2785_);
v___x_2789_ = v___x_2782_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v___x_2785_);
lean_ctor_set(v_reuseFailAlloc_2800_, 1, v___y_2787_);
lean_ctor_set(v_reuseFailAlloc_2800_, 2, v_tailSize_2780_);
v___x_2789_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; 
v___x_2790_ = lean_unsigned_to_nat(0u);
v___x_2791_ = lean_array_get_size(v_cs_2777_);
v___x_2792_ = lean_nat_dec_lt(v___x_2790_, v___x_2791_);
if (v___x_2792_ == 0)
{
lean_dec(v_x_2776_);
return v___x_2789_;
}
else
{
uint8_t v___x_2793_; 
v___x_2793_ = lean_nat_dec_le(v___x_2791_, v___x_2791_);
if (v___x_2793_ == 0)
{
if (v___x_2792_ == 0)
{
lean_dec(v_x_2776_);
return v___x_2789_;
}
else
{
size_t v___x_2794_; size_t v___x_2795_; lean_object* v___x_2796_; 
v___x_2794_ = ((size_t)0ULL);
v___x_2795_ = lean_usize_of_nat(v___x_2791_);
v___x_2796_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(v_x_2776_, v_cs_2777_, v___x_2794_, v___x_2795_, v___x_2789_);
lean_dec(v_x_2776_);
return v___x_2796_;
}
}
else
{
size_t v___x_2797_; size_t v___x_2798_; lean_object* v___x_2799_; 
v___x_2797_ = ((size_t)0ULL);
v___x_2798_ = lean_usize_of_nat(v___x_2791_);
v___x_2799_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(v_x_2776_, v_cs_2777_, v___x_2797_, v___x_2798_, v___x_2789_);
lean_dec(v_x_2776_);
return v___x_2799_;
}
}
}
}
}
}
else
{
lean_object* v_numNodes_2803_; lean_object* v_depth_2804_; lean_object* v_tailSize_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2818_; 
v_numNodes_2803_ = lean_ctor_get(v_x_2775_, 0);
v_depth_2804_ = lean_ctor_get(v_x_2775_, 1);
v_tailSize_2805_ = lean_ctor_get(v_x_2775_, 2);
v_isSharedCheck_2818_ = !lean_is_exclusive(v_x_2775_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2807_ = v_x_2775_;
v_isShared_2808_ = v_isSharedCheck_2818_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_tailSize_2805_);
lean_inc(v_depth_2804_);
lean_inc(v_numNodes_2803_);
lean_dec(v_x_2775_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2818_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2809_; lean_object* v___x_2810_; uint8_t v___x_2811_; 
v___x_2809_ = lean_unsigned_to_nat(1u);
v___x_2810_ = lean_nat_add(v_numNodes_2803_, v___x_2809_);
lean_dec(v_numNodes_2803_);
v___x_2811_ = lean_nat_dec_le(v_x_2776_, v_depth_2804_);
if (v___x_2811_ == 0)
{
lean_object* v___x_2813_; 
lean_dec(v_depth_2804_);
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 1, v_x_2776_);
lean_ctor_set(v___x_2807_, 0, v___x_2810_);
v___x_2813_ = v___x_2807_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2810_);
lean_ctor_set(v_reuseFailAlloc_2814_, 1, v_x_2776_);
lean_ctor_set(v_reuseFailAlloc_2814_, 2, v_tailSize_2805_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
else
{
lean_object* v___x_2816_; 
lean_dec(v_x_2776_);
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 0, v___x_2810_);
v___x_2816_ = v___x_2807_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v___x_2810_);
lean_ctor_set(v_reuseFailAlloc_2817_, 1, v_depth_2804_);
lean_ctor_set(v_reuseFailAlloc_2817_, 2, v_tailSize_2805_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(lean_object* v_x_2819_, lean_object* v_as_2820_, size_t v_i_2821_, size_t v_stop_2822_, lean_object* v_b_2823_){
_start:
{
uint8_t v___x_2824_; 
v___x_2824_ = lean_usize_dec_eq(v_i_2821_, v_stop_2822_);
if (v___x_2824_ == 0)
{
lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; size_t v___x_2829_; size_t v___x_2830_; 
v___x_2825_ = lean_array_uget_borrowed(v_as_2820_, v_i_2821_);
v___x_2826_ = lean_unsigned_to_nat(1u);
v___x_2827_ = lean_nat_add(v_x_2819_, v___x_2826_);
v___x_2828_ = l_Lean_PersistentArray_collectStats___redArg(v___x_2825_, v_b_2823_, v___x_2827_);
v___x_2829_ = ((size_t)1ULL);
v___x_2830_ = lean_usize_add(v_i_2821_, v___x_2829_);
v_i_2821_ = v___x_2830_;
v_b_2823_ = v___x_2828_;
goto _start;
}
else
{
return v_b_2823_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg___boxed(lean_object* v_x_2832_, lean_object* v_as_2833_, lean_object* v_i_2834_, lean_object* v_stop_2835_, lean_object* v_b_2836_){
_start:
{
size_t v_i_boxed_2837_; size_t v_stop_boxed_2838_; lean_object* v_res_2839_; 
v_i_boxed_2837_ = lean_unbox_usize(v_i_2834_);
lean_dec(v_i_2834_);
v_stop_boxed_2838_ = lean_unbox_usize(v_stop_2835_);
lean_dec(v_stop_2835_);
v_res_2839_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(v_x_2832_, v_as_2833_, v_i_boxed_2837_, v_stop_boxed_2838_, v_b_2836_);
lean_dec_ref(v_as_2833_);
lean_dec(v_x_2832_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___redArg___boxed(lean_object* v_x_2840_, lean_object* v_x_2841_, lean_object* v_x_2842_){
_start:
{
lean_object* v_res_2843_; 
v_res_2843_ = l_Lean_PersistentArray_collectStats___redArg(v_x_2840_, v_x_2841_, v_x_2842_);
lean_dec_ref(v_x_2840_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats(lean_object* v_00_u03b1_2844_, lean_object* v_x_2845_, lean_object* v_x_2846_, lean_object* v_x_2847_){
_start:
{
lean_object* v___x_2848_; 
v___x_2848_ = l_Lean_PersistentArray_collectStats___redArg(v_x_2845_, v_x_2846_, v_x_2847_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___boxed(lean_object* v_00_u03b1_2849_, lean_object* v_x_2850_, lean_object* v_x_2851_, lean_object* v_x_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l_Lean_PersistentArray_collectStats(v_00_u03b1_2849_, v_x_2850_, v_x_2851_, v_x_2852_);
lean_dec_ref(v_x_2850_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0(lean_object* v_00_u03b1_2854_, lean_object* v_x_2855_, lean_object* v_as_2856_, size_t v_i_2857_, size_t v_stop_2858_, lean_object* v_b_2859_){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(v_x_2855_, v_as_2856_, v_i_2857_, v_stop_2858_, v_b_2859_);
return v___x_2860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___boxed(lean_object* v_00_u03b1_2861_, lean_object* v_x_2862_, lean_object* v_as_2863_, lean_object* v_i_2864_, lean_object* v_stop_2865_, lean_object* v_b_2866_){
_start:
{
size_t v_i_boxed_2867_; size_t v_stop_boxed_2868_; lean_object* v_res_2869_; 
v_i_boxed_2867_ = lean_unbox_usize(v_i_2864_);
lean_dec(v_i_2864_);
v_stop_boxed_2868_ = lean_unbox_usize(v_stop_2865_);
lean_dec(v_stop_2865_);
v_res_2869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0(v_00_u03b1_2861_, v_x_2862_, v_as_2863_, v_i_boxed_2867_, v_stop_boxed_2868_, v_b_2866_);
lean_dec_ref(v_as_2863_);
lean_dec(v_x_2862_);
return v_res_2869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___redArg(lean_object* v_r_2870_){
_start:
{
lean_object* v_root_2871_; lean_object* v_tail_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; 
v_root_2871_ = lean_ctor_get(v_r_2870_, 0);
v_tail_2872_ = lean_ctor_get(v_r_2870_, 1);
v___x_2873_ = lean_unsigned_to_nat(0u);
v___x_2874_ = lean_array_get_size(v_tail_2872_);
v___x_2875_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2873_);
lean_ctor_set(v___x_2875_, 1, v___x_2873_);
lean_ctor_set(v___x_2875_, 2, v___x_2874_);
v___x_2876_ = l_Lean_PersistentArray_collectStats___redArg(v_root_2871_, v___x_2875_, v___x_2873_);
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___redArg___boxed(lean_object* v_r_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Lean_PersistentArray_stats___redArg(v_r_2877_);
lean_dec_ref(v_r_2877_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats(lean_object* v_00_u03b1_2879_, lean_object* v_r_2880_){
_start:
{
lean_object* v___x_2881_; 
v___x_2881_ = l_Lean_PersistentArray_stats___redArg(v_r_2880_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___boxed(lean_object* v_00_u03b1_2882_, lean_object* v_r_2883_){
_start:
{
lean_object* v_res_2884_; 
v_res_2884_ = l_Lean_PersistentArray_stats(v_00_u03b1_2882_, v_r_2883_);
lean_dec_ref(v_r_2883_);
return v_res_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_Stats_toString(lean_object* v_s_2889_){
_start:
{
lean_object* v_numNodes_2890_; lean_object* v_depth_2891_; lean_object* v_tailSize_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v_numNodes_2890_ = lean_ctor_get(v_s_2889_, 0);
lean_inc(v_numNodes_2890_);
v_depth_2891_ = lean_ctor_get(v_s_2889_, 1);
lean_inc(v_depth_2891_);
v_tailSize_2892_ = lean_ctor_get(v_s_2889_, 2);
lean_inc(v_tailSize_2892_);
lean_dec_ref(v_s_2889_);
v___x_2893_ = ((lean_object*)(l_Lean_PersistentArray_Stats_toString___closed__0));
v___x_2894_ = l_Nat_reprFast(v_numNodes_2890_);
v___x_2895_ = lean_string_append(v___x_2893_, v___x_2894_);
lean_dec_ref(v___x_2894_);
v___x_2896_ = ((lean_object*)(l_Lean_PersistentArray_Stats_toString___closed__1));
v___x_2897_ = lean_string_append(v___x_2895_, v___x_2896_);
v___x_2898_ = l_Nat_reprFast(v_depth_2891_);
v___x_2899_ = lean_string_append(v___x_2897_, v___x_2898_);
lean_dec_ref(v___x_2898_);
v___x_2900_ = ((lean_object*)(l_Lean_PersistentArray_Stats_toString___closed__2));
v___x_2901_ = lean_string_append(v___x_2899_, v___x_2900_);
v___x_2902_ = l_Nat_reprFast(v_tailSize_2892_);
v___x_2903_ = lean_string_append(v___x_2901_, v___x_2902_);
lean_dec_ref(v___x_2902_);
v___x_2904_ = ((lean_object*)(l_Lean_PersistentArray_Stats_toString___closed__3));
v___x_2905_ = lean_string_append(v___x_2903_, v___x_2904_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___redArg(lean_object* v_v_2908_, lean_object* v_j_2909_, lean_object* v_a_2910_){
_start:
{
lean_object* v_zero_2911_; uint8_t v_isZero_2912_; 
v_zero_2911_ = lean_unsigned_to_nat(0u);
v_isZero_2912_ = lean_nat_dec_eq(v_j_2909_, v_zero_2911_);
if (v_isZero_2912_ == 1)
{
lean_dec(v_j_2909_);
lean_dec(v_v_2908_);
return v_a_2910_;
}
else
{
lean_object* v_one_2913_; lean_object* v_n_2914_; lean_object* v___x_2915_; 
v_one_2913_ = lean_unsigned_to_nat(1u);
v_n_2914_ = lean_nat_sub(v_j_2909_, v_one_2913_);
lean_dec(v_j_2909_);
lean_inc(v_v_2908_);
v___x_2915_ = l_Lean_PersistentArray_push___redArg(v_a_2910_, v_v_2908_);
v_j_2909_ = v_n_2914_;
v_a_2910_ = v___x_2915_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkPersistentArray___redArg(lean_object* v_n_2917_, lean_object* v_v_2918_){
_start:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2919_ = lean_obj_once(&l_Lean_PersistentArray_empty___closed__0, &l_Lean_PersistentArray_empty___closed__0_once, _init_l_Lean_PersistentArray_empty___closed__0);
v___x_2920_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___redArg(v_v_2918_, v_n_2917_, v___x_2919_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPersistentArray(lean_object* v_00_u03b1_2921_, lean_object* v_n_2922_, lean_object* v_v_2923_){
_start:
{
lean_object* v___x_2924_; 
v___x_2924_ = l_Lean_mkPersistentArray___redArg(v_n_2922_, v_v_2923_);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0(lean_object* v_00_u03b1_2925_, lean_object* v_v_2926_, lean_object* v_n_2927_, lean_object* v_j_2928_, lean_object* v_a_2929_, lean_object* v_a_2930_){
_start:
{
lean_object* v___x_2931_; 
v___x_2931_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___redArg(v_v_2926_, v_j_2928_, v_a_2930_);
return v___x_2931_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___boxed(lean_object* v_00_u03b1_2932_, lean_object* v_v_2933_, lean_object* v_n_2934_, lean_object* v_j_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_){
_start:
{
lean_object* v_res_2938_; 
v_res_2938_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0(v_00_u03b1_2932_, v_v_2933_, v_n_2934_, v_j_2935_, v_a_2936_, v_a_2937_);
lean_dec(v_n_2934_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPArray___redArg(lean_object* v_n_2939_, lean_object* v_v_2940_){
_start:
{
lean_object* v___x_2941_; 
v___x_2941_ = l_Lean_mkPersistentArray___redArg(v_n_2939_, v_v_2940_);
return v___x_2941_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPArray(lean_object* v_00_u03b1_2942_, lean_object* v_n_2943_, lean_object* v_v_2944_){
_start:
{
lean_object* v___x_2945_; 
v___x_2945_ = l_Lean_mkPersistentArray___redArg(v_n_2943_, v_v_2944_);
return v___x_2945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop___redArg(lean_object* v_a_2946_, lean_object* v_a_2947_){
_start:
{
if (lean_obj_tag(v_a_2946_) == 0)
{
return v_a_2947_;
}
else
{
lean_object* v_head_2948_; lean_object* v_tail_2949_; lean_object* v___x_2950_; 
v_head_2948_ = lean_ctor_get(v_a_2946_, 0);
lean_inc(v_head_2948_);
v_tail_2949_ = lean_ctor_get(v_a_2946_, 1);
lean_inc(v_tail_2949_);
lean_dec_ref_known(v_a_2946_, 2);
v___x_2950_ = l_Lean_PersistentArray_push___redArg(v_a_2947_, v_head_2948_);
v_a_2946_ = v_tail_2949_;
v_a_2947_ = v___x_2950_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop(lean_object* v_00_u03b1_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_){
_start:
{
lean_object* v___x_2955_; 
v___x_2955_ = l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop___redArg(v_a_2953_, v_a_2954_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toPArray_x27___redArg(lean_object* v_xs_2956_){
_start:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2957_ = lean_unsigned_to_nat(32u);
v___x_2958_ = lean_mk_empty_array_with_capacity(v___x_2957_);
lean_dec_ref(v___x_2958_);
v___x_2959_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__1, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1);
v___x_2960_ = l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop___redArg(v_xs_2956_, v___x_2959_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toPArray_x27(lean_object* v_00_u03b1_2961_, lean_object* v_xs_2962_){
_start:
{
lean_object* v___x_2963_; 
v___x_2963_ = l_Lean_List_toPArray_x27___redArg(v_xs_2962_);
return v___x_2963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object* v_xs_2964_){
_start:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; uint8_t v___x_2968_; 
v___x_2965_ = lean_obj_once(&l_Lean_PersistentArray_empty___closed__0, &l_Lean_PersistentArray_empty___closed__0_once, _init_l_Lean_PersistentArray_empty___closed__0);
v___x_2966_ = lean_unsigned_to_nat(0u);
v___x_2967_ = lean_array_get_size(v_xs_2964_);
v___x_2968_ = lean_nat_dec_lt(v___x_2966_, v___x_2967_);
if (v___x_2968_ == 0)
{
return v___x_2965_;
}
else
{
uint8_t v___x_2969_; 
v___x_2969_ = lean_nat_dec_le(v___x_2967_, v___x_2967_);
if (v___x_2969_ == 0)
{
if (v___x_2968_ == 0)
{
return v___x_2965_;
}
else
{
size_t v___x_2970_; size_t v___x_2971_; lean_object* v___x_2972_; 
v___x_2970_ = ((size_t)0ULL);
v___x_2971_ = lean_usize_of_nat(v___x_2967_);
v___x_2972_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_xs_2964_, v___x_2970_, v___x_2971_, v___x_2965_);
return v___x_2972_;
}
}
else
{
size_t v___x_2973_; size_t v___x_2974_; lean_object* v___x_2975_; 
v___x_2973_ = ((size_t)0ULL);
v___x_2974_ = lean_usize_of_nat(v___x_2967_);
v___x_2975_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_xs_2964_, v___x_2973_, v___x_2974_, v___x_2965_);
return v___x_2975_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___redArg___boxed(lean_object* v_xs_2976_){
_start:
{
lean_object* v_res_2977_; 
v_res_2977_ = l_Lean_Array_toPArray_x27___redArg(v_xs_2976_);
lean_dec_ref(v_xs_2976_);
return v_res_2977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27(lean_object* v_00_u03b1_2978_, lean_object* v_xs_2979_){
_start:
{
lean_object* v___x_2980_; 
v___x_2980_ = l_Lean_Array_toPArray_x27___redArg(v_xs_2979_);
return v___x_2980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___boxed(lean_object* v_00_u03b1_2981_, lean_object* v_xs_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l_Lean_Array_toPArray_x27(v_00_u03b1_2981_, v_xs_2982_);
lean_dec_ref(v_xs_2982_);
return v_res_2983_;
}
}
lean_object* runtime_initialize_Init_Data_Nat_Fold(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_PersistentArray(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_PersistentArray_initShift = _init_l_Lean_PersistentArray_initShift();
l_Lean_PersistentArray_branching = _init_l_Lean_PersistentArray_branching();
l_Lean_PersistentArray_tooBig = _init_l_Lean_PersistentArray_tooBig();
lean_mark_persistent(l_Lean_PersistentArray_tooBig);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_PersistentArray(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Nat_Fold(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_PersistentArray(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_PersistentArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_PersistentArray(builtin);
}
#ifdef __cplusplus
}
#endif

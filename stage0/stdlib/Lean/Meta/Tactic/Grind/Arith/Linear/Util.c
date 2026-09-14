// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Linear.Util
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Linear.LinearM import Lean.Meta.Tactic.Grind.Arith.Util import Init.Data.Int.Gcd
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
lean_object* l_Rat_ofInt(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_instInhabitedRat;
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Linear_linearExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Rat_instDecidableLe(lean_object*, lean_object*);
uint8_t l_Lean_Bool_toLBool(uint8_t);
uint8_t l_Rat_blt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Int_gcd(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_shrink(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableEqRat_decEq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_throwNotRing___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isLinearOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "expression in two different structure in linarith module"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "`grind linarith` internal error, structure does not implement `NoNatZeroDivisors`"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "`grind linarith` internal error, structure does not support LE"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "`grind linarith` internal error, structure does not support LT"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "`grind linarith` internal error, structure does not have a lawful LT instance"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "`grind linarith` internal error, structure is not a preorder"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "`grind linarith` internal error, structure is not an ordered module"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "`grind linarith` internal error, structure is not an ordered int module"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "`grind linarith` internal error, structure is not a linear order"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "`grind linarith` internal error, structure is not a ring"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "`grind linarith` internal error, structure is not a commutative ring"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "`grind linarith` internal error, structure is not an ordered ring"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Grind_Linarith_Poly_eval_x3f_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_eval_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_eval_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Lean_Grind_Linarith_Poly_eval_x3f_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_inconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_inconsistent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_eliminated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_eliminated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOccursOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOccursOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Grind_Linarith_Poly_updateOccs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "`grind linarith` internal error, unexpected constant polynomial"};
static const lean_object* l_Lean_Grind_Linarith_Poly_updateOccs___closed__0 = (const lean_object*)&l_Lean_Grind_Linarith_Poly_updateOccs___closed__0_value;
static lean_once_cell_t l_Lean_Grind_Linarith_Poly_updateOccs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Linarith_Poly_updateOccs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_updateOccs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_updateOccs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_findVarToSubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_findVarToSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffsAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_div___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_pickVarToElim_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getZero(lean_object* v_a_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_22_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_22_ == 0)
{
v___x_16_ = v___x_13_;
v_isShared_17_ = v_isSharedCheck_22_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_a_14_);
lean_dec(v___x_13_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_22_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v_zero_18_; lean_object* v___x_20_; 
v_zero_18_ = lean_ctor_get(v_a_14_, 17);
lean_inc_ref(v_zero_18_);
lean_dec(v_a_14_);
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v_zero_18_);
v___x_20_ = v___x_16_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_zero_18_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
else
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_30_; 
v_a_23_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_30_ == 0)
{
v___x_25_ = v___x_13_;
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_13_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_28_; 
if (v_isShared_26_ == 0)
{
v___x_28_ = v___x_25_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_23_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getZero___boxed(lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Meta_Grind_Arith_Linear_getZero(v_a_31_, v_a_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_);
lean_dec(v_a_41_);
lean_dec_ref(v_a_40_);
lean_dec(v_a_39_);
lean_dec_ref(v_a_38_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
lean_dec(v_a_35_);
lean_dec_ref(v_a_34_);
lean_dec(v_a_33_);
lean_dec(v_a_32_);
lean_dec(v_a_31_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOne(lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
if (lean_obj_tag(v___x_56_) == 0)
{
lean_object* v_a_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_67_; 
v_a_57_ = lean_ctor_get(v___x_56_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_56_);
if (v_isSharedCheck_67_ == 0)
{
v___x_59_ = v___x_56_;
v_isShared_60_ = v_isSharedCheck_67_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_a_57_);
lean_dec(v___x_56_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_67_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v_one_x3f_61_; 
v_one_x3f_61_ = lean_ctor_get(v_a_57_, 19);
lean_inc(v_one_x3f_61_);
lean_dec(v_a_57_);
if (lean_obj_tag(v_one_x3f_61_) == 1)
{
lean_object* v_val_62_; lean_object* v___x_64_; 
v_val_62_ = lean_ctor_get(v_one_x3f_61_, 0);
lean_inc(v_val_62_);
lean_dec_ref_known(v_one_x3f_61_, 1);
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 0, v_val_62_);
v___x_64_ = v___x_59_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v_val_62_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
else
{
lean_object* v___x_66_; 
lean_dec(v_one_x3f_61_);
lean_del_object(v___x_59_);
v___x_66_ = l_Lean_Meta_Grind_Arith_Linear_throwNotRing___redArg(v_a_51_, v_a_52_, v_a_53_, v_a_54_);
return v___x_66_;
}
}
}
else
{
lean_object* v_a_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_75_; 
v_a_68_ = lean_ctor_get(v___x_56_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_56_);
if (v_isSharedCheck_75_ == 0)
{
v___x_70_ = v___x_56_;
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_a_68_);
lean_dec(v___x_56_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_73_; 
if (v_isShared_71_ == 0)
{
v___x_73_ = v___x_70_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_a_68_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOne___boxed(lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Meta_Grind_Arith_Linear_getOne(v_a_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec(v_a_84_);
lean_dec_ref(v_a_83_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec_ref(v_a_79_);
lean_dec(v_a_78_);
lean_dec(v_a_77_);
lean_dec(v_a_76_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isCommRing(lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_117_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_117_ == 0)
{
v___x_104_ = v___x_101_;
v_isShared_105_ = v_isSharedCheck_117_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v___x_101_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_117_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v_ringId_x3f_106_; 
v_ringId_x3f_106_ = lean_ctor_get(v_a_102_, 1);
lean_inc(v_ringId_x3f_106_);
lean_dec(v_a_102_);
if (lean_obj_tag(v_ringId_x3f_106_) == 0)
{
uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_107_ = 0;
v___x_108_ = lean_box(v___x_107_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v___x_108_);
v___x_110_ = v___x_104_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_108_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
else
{
uint8_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_115_; 
lean_dec_ref_known(v_ringId_x3f_106_, 1);
v___x_112_ = 1;
v___x_113_ = lean_box(v___x_112_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v___x_113_);
v___x_115_ = v___x_104_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v___x_113_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
}
else
{
lean_object* v_a_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_125_; 
v_a_118_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_125_ == 0)
{
v___x_120_ = v___x_101_;
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_a_118_);
lean_dec(v___x_101_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_123_; 
if (v_isShared_121_ == 0)
{
v___x_123_ = v___x_120_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_a_118_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isCommRing___boxed(lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Meta_Grind_Arith_Linear_isCommRing(v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_);
lean_dec(v_a_136_);
lean_dec_ref(v_a_135_);
lean_dec(v_a_134_);
lean_dec_ref(v_a_133_);
lean_dec(v_a_132_);
lean_dec_ref(v_a_131_);
lean_dec(v_a_130_);
lean_dec_ref(v_a_129_);
lean_dec(v_a_128_);
lean_dec(v_a_127_);
lean_dec(v_a_126_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing(lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Meta_Grind_Arith_Linear_isCommRing(v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; lean_object* v___x_153_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_a_152_);
lean_dec_ref_known(v___x_151_, 1);
v___x_153_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_153_) == 0)
{
uint8_t v___x_154_; 
v___x_154_ = lean_unbox(v_a_152_);
if (v___x_154_ == 0)
{
lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; 
v_unused_162_ = lean_ctor_get(v___x_153_, 0);
lean_dec(v_unused_162_);
v___x_156_ = v___x_153_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_dec(v___x_153_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
lean_ctor_set(v___x_156_, 0, v_a_152_);
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_152_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
else
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_176_; 
v_a_163_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_176_ == 0)
{
v___x_165_ = v___x_153_;
v_isShared_166_ = v_isSharedCheck_176_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_153_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_176_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v_orderedRingInst_x3f_167_; 
v_orderedRingInst_x3f_167_ = lean_ctor_get(v_a_163_, 14);
lean_inc(v_orderedRingInst_x3f_167_);
lean_dec(v_a_163_);
if (lean_obj_tag(v_orderedRingInst_x3f_167_) == 0)
{
uint8_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_171_; 
lean_dec(v_a_152_);
v___x_168_ = 0;
v___x_169_ = lean_box(v___x_168_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_169_);
v___x_171_ = v___x_165_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
else
{
lean_object* v___x_174_; 
lean_dec_ref_known(v_orderedRingInst_x3f_167_, 1);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v_a_152_);
v___x_174_ = v___x_165_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_152_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
}
else
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
lean_dec(v_a_152_);
v_a_177_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_184_ == 0)
{
v___x_179_ = v___x_153_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___x_153_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_a_177_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
else
{
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing___boxed(lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing(v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_);
lean_dec(v_a_195_);
lean_dec_ref(v_a_194_);
lean_dec(v_a_193_);
lean_dec_ref(v_a_192_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec_ref(v_a_188_);
lean_dec(v_a_187_);
lean_dec(v_a_186_);
lean_dec(v_a_185_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_226_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_226_ == 0)
{
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_226_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_226_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v_isLinearInst_x3f_215_; 
v_isLinearInst_x3f_215_ = lean_ctor_get(v_a_211_, 10);
lean_inc(v_isLinearInst_x3f_215_);
lean_dec(v_a_211_);
if (lean_obj_tag(v_isLinearInst_x3f_215_) == 0)
{
uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_216_ = 0;
v___x_217_ = lean_box(v___x_216_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_217_);
v___x_219_ = v___x_213_;
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
else
{
uint8_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_224_; 
lean_dec_ref_known(v_isLinearInst_x3f_215_, 1);
v___x_221_ = 1;
v___x_222_ = lean_box(v___x_221_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_222_);
v___x_224_ = v___x_213_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_234_; 
v_a_227_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_234_ == 0)
{
v___x_229_ = v___x_210_;
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_210_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isLinearOrder___boxed(lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
lean_dec(v_a_237_);
lean_dec(v_a_236_);
lean_dec(v_a_235_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors(lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_276_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_276_ == 0)
{
v___x_263_ = v___x_260_;
v_isShared_264_ = v_isSharedCheck_276_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_260_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_276_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v_noNatDivInst_x3f_265_; 
v_noNatDivInst_x3f_265_ = lean_ctor_get(v_a_261_, 11);
lean_inc(v_noNatDivInst_x3f_265_);
lean_dec(v_a_261_);
if (lean_obj_tag(v_noNatDivInst_x3f_265_) == 0)
{
uint8_t v___x_266_; lean_object* v___x_267_; lean_object* v___x_269_; 
v___x_266_ = 0;
v___x_267_ = lean_box(v___x_266_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_267_);
v___x_269_ = v___x_263_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v___x_267_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
else
{
uint8_t v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
lean_dec_ref_known(v_noNatDivInst_x3f_265_, 1);
v___x_271_ = 1;
v___x_272_ = lean_box(v___x_271_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_272_);
v___x_274_ = v___x_263_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
v_a_277_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_260_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_260_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors___boxed(lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors(v_a_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_);
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
lean_dec(v_a_285_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_298_, lean_object* v_vals_299_, lean_object* v_i_300_, lean_object* v_k_301_){
_start:
{
lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_array_get_size(v_keys_298_);
v___x_303_ = lean_nat_dec_lt(v_i_300_, v___x_302_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; 
lean_dec(v_i_300_);
v___x_304_ = lean_box(0);
return v___x_304_;
}
else
{
lean_object* v_k_x27_305_; size_t v___x_306_; size_t v___x_307_; uint8_t v___x_308_; 
v_k_x27_305_ = lean_array_fget_borrowed(v_keys_298_, v_i_300_);
v___x_306_ = lean_ptr_addr(v_k_301_);
v___x_307_ = lean_ptr_addr(v_k_x27_305_);
v___x_308_ = lean_usize_dec_eq(v___x_306_, v___x_307_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_unsigned_to_nat(1u);
v___x_310_ = lean_nat_add(v_i_300_, v___x_309_);
lean_dec(v_i_300_);
v_i_300_ = v___x_310_;
goto _start;
}
else
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = lean_array_fget_borrowed(v_vals_299_, v_i_300_);
lean_dec(v_i_300_);
lean_inc(v___x_312_);
v___x_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
return v___x_313_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_314_, lean_object* v_vals_315_, lean_object* v_i_316_, lean_object* v_k_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_314_, v_vals_315_, v_i_316_, v_k_317_);
lean_dec_ref(v_k_317_);
lean_dec_ref(v_vals_315_);
lean_dec_ref(v_keys_314_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg(lean_object* v_x_319_, size_t v_x_320_, lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_319_) == 0)
{
lean_object* v_es_322_; lean_object* v___x_323_; size_t v___x_324_; size_t v___x_325_; lean_object* v_j_326_; lean_object* v___x_327_; 
v_es_322_ = lean_ctor_get(v_x_319_, 0);
v___x_323_ = lean_box(2);
v___x_324_ = ((size_t)31ULL);
v___x_325_ = lean_usize_land(v_x_320_, v___x_324_);
v_j_326_ = lean_usize_to_nat(v___x_325_);
v___x_327_ = lean_array_get_borrowed(v___x_323_, v_es_322_, v_j_326_);
lean_dec(v_j_326_);
switch(lean_obj_tag(v___x_327_))
{
case 0:
{
lean_object* v_key_328_; lean_object* v_val_329_; size_t v___x_330_; size_t v___x_331_; uint8_t v___x_332_; 
v_key_328_ = lean_ctor_get(v___x_327_, 0);
v_val_329_ = lean_ctor_get(v___x_327_, 1);
v___x_330_ = lean_ptr_addr(v_x_321_);
v___x_331_ = lean_ptr_addr(v_key_328_);
v___x_332_ = lean_usize_dec_eq(v___x_330_, v___x_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; 
v___x_333_ = lean_box(0);
return v___x_333_;
}
else
{
lean_object* v___x_334_; 
lean_inc(v_val_329_);
v___x_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_334_, 0, v_val_329_);
return v___x_334_;
}
}
case 1:
{
lean_object* v_node_335_; size_t v___x_336_; size_t v___x_337_; 
v_node_335_ = lean_ctor_get(v___x_327_, 0);
v___x_336_ = ((size_t)5ULL);
v___x_337_ = lean_usize_shift_right(v_x_320_, v___x_336_);
v_x_319_ = v_node_335_;
v_x_320_ = v___x_337_;
goto _start;
}
default: 
{
lean_object* v___x_339_; 
v___x_339_ = lean_box(0);
return v___x_339_;
}
}
}
else
{
lean_object* v_ks_340_; lean_object* v_vs_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_ks_340_ = lean_ctor_get(v_x_319_, 0);
v_vs_341_ = lean_ctor_get(v_x_319_, 1);
v___x_342_ = lean_unsigned_to_nat(0u);
v___x_343_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_340_, v_vs_341_, v___x_342_, v_x_321_);
return v___x_343_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_344_, lean_object* v_x_345_, lean_object* v_x_346_){
_start:
{
size_t v_x_905__boxed_347_; lean_object* v_res_348_; 
v_x_905__boxed_347_ = lean_unbox_usize(v_x_345_);
lean_dec(v_x_345_);
v_res_348_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg(v_x_344_, v_x_905__boxed_347_, v_x_346_);
lean_dec_ref(v_x_346_);
lean_dec_ref(v_x_344_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg(lean_object* v_x_349_, lean_object* v_x_350_){
_start:
{
size_t v___x_351_; size_t v___x_352_; size_t v___x_353_; uint64_t v___x_354_; size_t v___x_355_; lean_object* v___x_356_; 
v___x_351_ = lean_ptr_addr(v_x_350_);
v___x_352_ = ((size_t)3ULL);
v___x_353_ = lean_usize_shift_right(v___x_351_, v___x_352_);
v___x_354_ = lean_usize_to_uint64(v___x_353_);
v___x_355_ = lean_uint64_to_usize(v___x_354_);
v___x_356_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg(v_x_349_, v___x_355_, v_x_350_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg___boxed(lean_object* v_x_357_, lean_object* v_x_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg(v_x_357_, v_x_358_);
lean_dec_ref(v_x_358_);
lean_dec_ref(v_x_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(lean_object* v_e_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_361_, v_a_362_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_374_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_374_ == 0)
{
v___x_367_ = v___x_364_;
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v_exprToStructId_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v_exprToStructId_369_ = lean_ctor_get(v_a_365_, 2);
lean_inc_ref(v_exprToStructId_369_);
lean_dec(v_a_365_);
v___x_370_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg(v_exprToStructId_369_, v_e_360_);
lean_dec_ref(v_exprToStructId_369_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_370_);
v___x_372_ = v___x_367_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
v_a_375_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_364_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_364_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg___boxed(lean_object* v_e_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(v_e_383_, v_a_384_, v_a_385_);
lean_dec_ref(v_a_385_);
lean_dec(v_a_384_);
lean_dec_ref(v_e_383_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f(lean_object* v_e_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(v_e_388_, v_a_389_, v_a_397_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___boxed(lean_object* v_e_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f(v_e_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
lean_dec(v_a_409_);
lean_dec_ref(v_a_408_);
lean_dec(v_a_407_);
lean_dec_ref(v_a_406_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_404_);
lean_dec(v_a_403_);
lean_dec(v_a_402_);
lean_dec_ref(v_e_401_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0(lean_object* v_00_u03b2_414_, lean_object* v_x_415_, lean_object* v_x_416_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg(v_x_415_, v_x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___boxed(lean_object* v_00_u03b2_418_, lean_object* v_x_419_, lean_object* v_x_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0(v_00_u03b2_418_, v_x_419_, v_x_420_);
lean_dec_ref(v_x_420_);
lean_dec_ref(v_x_419_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_422_, lean_object* v_x_423_, size_t v_x_424_, lean_object* v_x_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg(v_x_423_, v_x_424_, v_x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_427_, lean_object* v_x_428_, lean_object* v_x_429_, lean_object* v_x_430_){
_start:
{
size_t v_x_1026__boxed_431_; lean_object* v_res_432_; 
v_x_1026__boxed_431_ = lean_unbox_usize(v_x_429_);
lean_dec(v_x_429_);
v_res_432_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0(v_00_u03b2_427_, v_x_428_, v_x_1026__boxed_431_, v_x_430_);
lean_dec_ref(v_x_430_);
lean_dec_ref(v_x_428_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_433_, lean_object* v_keys_434_, lean_object* v_vals_435_, lean_object* v_heq_436_, lean_object* v_i_437_, lean_object* v_k_438_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_434_, v_vals_435_, v_i_437_, v_k_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_440_, lean_object* v_keys_441_, lean_object* v_vals_442_, lean_object* v_heq_443_, lean_object* v_i_444_, lean_object* v_k_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_440_, v_keys_441_, v_vals_442_, v_heq_443_, v_i_444_, v_k_445_);
lean_dec_ref(v_k_445_);
lean_dec_ref(v_vals_442_);
lean_dec_ref(v_keys_441_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_447_, lean_object* v_x_448_, lean_object* v_x_449_, lean_object* v_x_450_){
_start:
{
lean_object* v_ks_451_; lean_object* v_vs_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_478_; 
v_ks_451_ = lean_ctor_get(v_x_447_, 0);
v_vs_452_ = lean_ctor_get(v_x_447_, 1);
v_isSharedCheck_478_ = !lean_is_exclusive(v_x_447_);
if (v_isSharedCheck_478_ == 0)
{
v___x_454_ = v_x_447_;
v_isShared_455_ = v_isSharedCheck_478_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_vs_452_);
lean_inc(v_ks_451_);
lean_dec(v_x_447_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_478_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = lean_array_get_size(v_ks_451_);
v___x_457_ = lean_nat_dec_lt(v_x_448_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_461_; 
lean_dec(v_x_448_);
v___x_458_ = lean_array_push(v_ks_451_, v_x_449_);
v___x_459_ = lean_array_push(v_vs_452_, v_x_450_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v___x_459_);
lean_ctor_set(v___x_454_, 0, v___x_458_);
v___x_461_ = v___x_454_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v___x_459_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
else
{
lean_object* v_k_x27_463_; size_t v___x_464_; size_t v___x_465_; uint8_t v___x_466_; 
v_k_x27_463_ = lean_array_fget_borrowed(v_ks_451_, v_x_448_);
v___x_464_ = lean_ptr_addr(v_x_449_);
v___x_465_ = lean_ptr_addr(v_k_x27_463_);
v___x_466_ = lean_usize_dec_eq(v___x_464_, v___x_465_);
if (v___x_466_ == 0)
{
lean_object* v___x_468_; 
if (v_isShared_455_ == 0)
{
v___x_468_ = v___x_454_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_ks_451_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_vs_452_);
v___x_468_ = v_reuseFailAlloc_472_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = lean_unsigned_to_nat(1u);
v___x_470_ = lean_nat_add(v_x_448_, v___x_469_);
lean_dec(v_x_448_);
v_x_447_ = v___x_468_;
v_x_448_ = v___x_470_;
goto _start;
}
}
else
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_473_ = lean_array_fset(v_ks_451_, v_x_448_, v_x_449_);
v___x_474_ = lean_array_fset(v_vs_452_, v_x_448_, v_x_450_);
lean_dec(v_x_448_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v___x_474_);
lean_ctor_set(v___x_454_, 0, v___x_473_);
v___x_476_ = v___x_454_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_473_);
lean_ctor_set(v_reuseFailAlloc_477_, 1, v___x_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1___redArg(lean_object* v_n_479_, lean_object* v_k_480_, lean_object* v_v_481_){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2___redArg(v_n_479_, v___x_482_, v_k_480_, v_v_481_);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_box(0);
v___x_485_ = l_unsafeCast___redArg(v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(lean_object* v_x_487_, size_t v_x_488_, size_t v_x_489_, lean_object* v_x_490_, lean_object* v_x_491_){
_start:
{
if (lean_obj_tag(v_x_487_) == 0)
{
lean_object* v_es_492_; size_t v___x_493_; size_t v___x_494_; lean_object* v_j_495_; lean_object* v___x_496_; uint8_t v___x_497_; 
v_es_492_ = lean_ctor_get(v_x_487_, 0);
v___x_493_ = ((size_t)31ULL);
v___x_494_ = lean_usize_land(v_x_488_, v___x_493_);
v_j_495_ = lean_usize_to_nat(v___x_494_);
v___x_496_ = lean_array_get_size(v_es_492_);
v___x_497_ = lean_nat_dec_lt(v_j_495_, v___x_496_);
if (v___x_497_ == 0)
{
lean_dec(v_j_495_);
lean_dec(v_x_491_);
lean_dec_ref(v_x_490_);
return v_x_487_;
}
else
{
lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_538_; 
lean_inc_ref(v_es_492_);
v_isSharedCheck_538_ = !lean_is_exclusive(v_x_487_);
if (v_isSharedCheck_538_ == 0)
{
lean_object* v_unused_539_; 
v_unused_539_ = lean_ctor_get(v_x_487_, 0);
lean_dec(v_unused_539_);
v___x_499_ = v_x_487_;
v_isShared_500_ = v_isSharedCheck_538_;
goto v_resetjp_498_;
}
else
{
lean_dec(v_x_487_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_538_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v_v_501_; lean_object* v___x_502_; lean_object* v_xs_x27_503_; lean_object* v___y_505_; 
v_v_501_ = lean_array_fget(v_es_492_, v_j_495_);
v___x_502_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0);
v_xs_x27_503_ = lean_array_fset(v_es_492_, v_j_495_, v___x_502_);
switch(lean_obj_tag(v_v_501_))
{
case 0:
{
lean_object* v_key_510_; lean_object* v_val_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_523_; 
v_key_510_ = lean_ctor_get(v_v_501_, 0);
v_val_511_ = lean_ctor_get(v_v_501_, 1);
v_isSharedCheck_523_ = !lean_is_exclusive(v_v_501_);
if (v_isSharedCheck_523_ == 0)
{
v___x_513_ = v_v_501_;
v_isShared_514_ = v_isSharedCheck_523_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_val_511_);
lean_inc(v_key_510_);
lean_dec(v_v_501_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_523_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
size_t v___x_515_; size_t v___x_516_; uint8_t v___x_517_; 
v___x_515_ = lean_ptr_addr(v_x_490_);
v___x_516_ = lean_ptr_addr(v_key_510_);
v___x_517_ = lean_usize_dec_eq(v___x_515_, v___x_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; lean_object* v___x_519_; 
lean_del_object(v___x_513_);
v___x_518_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_510_, v_val_511_, v_x_490_, v_x_491_);
v___x_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
v___y_505_ = v___x_519_;
goto v___jp_504_;
}
else
{
lean_object* v___x_521_; 
lean_dec(v_val_511_);
lean_dec(v_key_510_);
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 1, v_x_491_);
lean_ctor_set(v___x_513_, 0, v_x_490_);
v___x_521_ = v___x_513_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_x_490_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v_x_491_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
v___y_505_ = v___x_521_;
goto v___jp_504_;
}
}
}
}
case 1:
{
lean_object* v_node_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_536_; 
v_node_524_ = lean_ctor_get(v_v_501_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v_v_501_);
if (v_isSharedCheck_536_ == 0)
{
v___x_526_ = v_v_501_;
v_isShared_527_ = v_isSharedCheck_536_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_node_524_);
lean_dec(v_v_501_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_536_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
size_t v___x_528_; size_t v___x_529_; size_t v___x_530_; size_t v___x_531_; lean_object* v___x_532_; lean_object* v___x_534_; 
v___x_528_ = ((size_t)5ULL);
v___x_529_ = lean_usize_shift_right(v_x_488_, v___x_528_);
v___x_530_ = ((size_t)1ULL);
v___x_531_ = lean_usize_add(v_x_489_, v___x_530_);
v___x_532_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(v_node_524_, v___x_529_, v___x_531_, v_x_490_, v_x_491_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_532_);
v___x_534_ = v___x_526_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
v___y_505_ = v___x_534_;
goto v___jp_504_;
}
}
}
default: 
{
lean_object* v___x_537_; 
v___x_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_537_, 0, v_x_490_);
lean_ctor_set(v___x_537_, 1, v_x_491_);
v___y_505_ = v___x_537_;
goto v___jp_504_;
}
}
v___jp_504_:
{
lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_506_ = lean_array_fset(v_xs_x27_503_, v_j_495_, v___y_505_);
lean_dec(v_j_495_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_506_);
v___x_508_ = v___x_499_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
}
else
{
lean_object* v_ks_540_; lean_object* v_vs_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_559_; 
v_ks_540_ = lean_ctor_get(v_x_487_, 0);
v_vs_541_ = lean_ctor_get(v_x_487_, 1);
v_isSharedCheck_559_ = !lean_is_exclusive(v_x_487_);
if (v_isSharedCheck_559_ == 0)
{
v___x_543_ = v_x_487_;
v_isShared_544_ = v_isSharedCheck_559_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_vs_541_);
lean_inc(v_ks_540_);
lean_dec(v_x_487_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_559_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_ks_540_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v_vs_541_);
v___x_546_ = v_reuseFailAlloc_558_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
lean_object* v_newNode_547_; size_t v___x_548_; uint8_t v___x_549_; 
v_newNode_547_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1___redArg(v___x_546_, v_x_490_, v_x_491_);
v___x_548_ = ((size_t)7ULL);
v___x_549_ = lean_usize_dec_le(v___x_548_, v_x_489_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v___x_550_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_547_);
v___x_551_ = lean_unsigned_to_nat(4u);
v___x_552_ = lean_nat_dec_lt(v___x_550_, v___x_551_);
lean_dec(v___x_550_);
if (v___x_552_ == 0)
{
lean_object* v_ks_553_; lean_object* v_vs_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v_ks_553_ = lean_ctor_get(v_newNode_547_, 0);
lean_inc_ref(v_ks_553_);
v_vs_554_ = lean_ctor_get(v_newNode_547_, 1);
lean_inc_ref(v_vs_554_);
lean_dec_ref(v_newNode_547_);
v___x_555_ = lean_unsigned_to_nat(0u);
v___x_556_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__1);
v___x_557_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg(v_x_489_, v_ks_553_, v_vs_554_, v___x_555_, v___x_556_);
lean_dec_ref(v_vs_554_);
lean_dec_ref(v_ks_553_);
return v___x_557_;
}
else
{
return v_newNode_547_;
}
}
else
{
return v_newNode_547_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg(size_t v_depth_560_, lean_object* v_keys_561_, lean_object* v_vals_562_, lean_object* v_i_563_, lean_object* v_entries_564_){
_start:
{
lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_565_ = lean_array_get_size(v_keys_561_);
v___x_566_ = lean_nat_dec_lt(v_i_563_, v___x_565_);
if (v___x_566_ == 0)
{
lean_dec(v_i_563_);
return v_entries_564_;
}
else
{
lean_object* v_k_567_; lean_object* v_v_568_; size_t v___x_569_; size_t v___x_570_; size_t v___x_571_; uint64_t v___x_572_; size_t v_h_573_; size_t v___x_574_; lean_object* v___x_575_; size_t v___x_576_; size_t v___x_577_; size_t v___x_578_; size_t v_h_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v_k_567_ = lean_array_fget_borrowed(v_keys_561_, v_i_563_);
v_v_568_ = lean_array_fget_borrowed(v_vals_562_, v_i_563_);
v___x_569_ = lean_ptr_addr(v_k_567_);
v___x_570_ = ((size_t)3ULL);
v___x_571_ = lean_usize_shift_right(v___x_569_, v___x_570_);
v___x_572_ = lean_usize_to_uint64(v___x_571_);
v_h_573_ = lean_uint64_to_usize(v___x_572_);
v___x_574_ = ((size_t)5ULL);
v___x_575_ = lean_unsigned_to_nat(1u);
v___x_576_ = ((size_t)1ULL);
v___x_577_ = lean_usize_sub(v_depth_560_, v___x_576_);
v___x_578_ = lean_usize_mul(v___x_574_, v___x_577_);
v_h_579_ = lean_usize_shift_right(v_h_573_, v___x_578_);
v___x_580_ = lean_nat_add(v_i_563_, v___x_575_);
lean_dec(v_i_563_);
lean_inc(v_v_568_);
lean_inc(v_k_567_);
v___x_581_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(v_entries_564_, v_h_579_, v_depth_560_, v_k_567_, v_v_568_);
v_i_563_ = v___x_580_;
v_entries_564_ = v___x_581_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_583_, lean_object* v_keys_584_, lean_object* v_vals_585_, lean_object* v_i_586_, lean_object* v_entries_587_){
_start:
{
size_t v_depth_boxed_588_; lean_object* v_res_589_; 
v_depth_boxed_588_ = lean_unbox_usize(v_depth_583_);
lean_dec(v_depth_583_);
v_res_589_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg(v_depth_boxed_588_, v_keys_584_, v_vals_585_, v_i_586_, v_entries_587_);
lean_dec_ref(v_vals_585_);
lean_dec_ref(v_keys_584_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___boxed(lean_object* v_x_590_, lean_object* v_x_591_, lean_object* v_x_592_, lean_object* v_x_593_, lean_object* v_x_594_){
_start:
{
size_t v_x_6475__boxed_595_; size_t v_x_6476__boxed_596_; lean_object* v_res_597_; 
v_x_6475__boxed_595_ = lean_unbox_usize(v_x_591_);
lean_dec(v_x_591_);
v_x_6476__boxed_596_ = lean_unbox_usize(v_x_592_);
lean_dec(v_x_592_);
v_res_597_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(v_x_590_, v_x_6475__boxed_595_, v_x_6476__boxed_596_, v_x_593_, v_x_594_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0___redArg(lean_object* v_x_598_, lean_object* v_x_599_, lean_object* v_x_600_){
_start:
{
size_t v___x_601_; size_t v___x_602_; size_t v___x_603_; uint64_t v___x_604_; size_t v___x_605_; size_t v___x_606_; lean_object* v___x_607_; 
v___x_601_ = lean_ptr_addr(v_x_599_);
v___x_602_ = ((size_t)3ULL);
v___x_603_ = lean_usize_shift_right(v___x_601_, v___x_602_);
v___x_604_ = lean_usize_to_uint64(v___x_603_);
v___x_605_ = lean_uint64_to_usize(v___x_604_);
v___x_606_ = ((size_t)1ULL);
v___x_607_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(v_x_598_, v___x_605_, v___x_606_, v_x_599_, v_x_600_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0(lean_object* v_e_608_, lean_object* v_a_609_, lean_object* v_s_610_){
_start:
{
lean_object* v_structs_611_; lean_object* v_typeIdOf_612_; lean_object* v_exprToStructId_613_; lean_object* v_exprToStructIdEntries_614_; lean_object* v_forbiddenNatModules_615_; lean_object* v_natStructs_616_; lean_object* v_natTypeIdOf_617_; lean_object* v_exprToNatStructId_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_628_; 
v_structs_611_ = lean_ctor_get(v_s_610_, 0);
v_typeIdOf_612_ = lean_ctor_get(v_s_610_, 1);
v_exprToStructId_613_ = lean_ctor_get(v_s_610_, 2);
v_exprToStructIdEntries_614_ = lean_ctor_get(v_s_610_, 3);
v_forbiddenNatModules_615_ = lean_ctor_get(v_s_610_, 4);
v_natStructs_616_ = lean_ctor_get(v_s_610_, 5);
v_natTypeIdOf_617_ = lean_ctor_get(v_s_610_, 6);
v_exprToNatStructId_618_ = lean_ctor_get(v_s_610_, 7);
v_isSharedCheck_628_ = !lean_is_exclusive(v_s_610_);
if (v_isSharedCheck_628_ == 0)
{
v___x_620_ = v_s_610_;
v_isShared_621_ = v_isSharedCheck_628_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_exprToNatStructId_618_);
lean_inc(v_natTypeIdOf_617_);
lean_inc(v_natStructs_616_);
lean_inc(v_forbiddenNatModules_615_);
lean_inc(v_exprToStructIdEntries_614_);
lean_inc(v_exprToStructId_613_);
lean_inc(v_typeIdOf_612_);
lean_inc(v_structs_611_);
lean_dec(v_s_610_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_628_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
lean_inc_n(v_a_609_, 2);
lean_inc_ref(v_e_608_);
v___x_622_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0___redArg(v_exprToStructId_613_, v_e_608_, v_a_609_);
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v_e_608_);
lean_ctor_set(v___x_623_, 1, v_a_609_);
v___x_624_ = l_Lean_PersistentArray_push___redArg(v_exprToStructIdEntries_614_, v___x_623_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 3, v___x_624_);
lean_ctor_set(v___x_620_, 2, v___x_622_);
v___x_626_ = v___x_620_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_structs_611_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_typeIdOf_612_);
lean_ctor_set(v_reuseFailAlloc_627_, 2, v___x_622_);
lean_ctor_set(v_reuseFailAlloc_627_, 3, v___x_624_);
lean_ctor_set(v_reuseFailAlloc_627_, 4, v_forbiddenNatModules_615_);
lean_ctor_set(v_reuseFailAlloc_627_, 5, v_natStructs_616_);
lean_ctor_set(v_reuseFailAlloc_627_, 6, v_natTypeIdOf_617_);
lean_ctor_set(v_reuseFailAlloc_627_, 7, v_exprToNatStructId_618_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0___boxed(lean_object* v_e_629_, lean_object* v_a_630_, lean_object* v_s_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0(v_e_629_, v_a_630_, v_s_631_);
lean_dec(v_a_630_);
return v_res_632_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__0));
v___x_635_ = l_Lean_stringToMessageData(v___x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg(lean_object* v_e_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_){
_start:
{
lean_object* v___f_649_; lean_object* v___x_650_; 
lean_inc(v_a_637_);
lean_inc_ref(v_e_636_);
v___f_649_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_649_, 0, v_e_636_);
lean_closure_set(v___f_649_, 1, v_a_637_);
v___x_650_ = l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(v_e_636_, v_a_638_, v_a_643_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_a_651_; 
v_a_651_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_a_651_);
lean_dec_ref_known(v___x_650_, 1);
if (lean_obj_tag(v_a_651_) == 1)
{
lean_object* v_val_652_; uint8_t v___x_653_; 
lean_dec_ref(v___f_649_);
v_val_652_ = lean_ctor_get(v_a_651_, 0);
lean_inc(v_val_652_);
lean_dec_ref_known(v_a_651_, 1);
v___x_653_ = lean_nat_dec_eq(v_val_652_, v_a_637_);
lean_dec(v_val_652_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_654_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1);
v___x_655_ = l_Lean_indentExpr(v_e_636_);
v___x_656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_654_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v___x_657_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_639_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; uint8_t v_verbose_659_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_a_658_);
lean_dec_ref_known(v___x_657_, 1);
v_verbose_659_ = lean_ctor_get_uint8(v_a_658_, 0);
lean_dec(v_a_658_);
if (v_verbose_659_ == 0)
{
lean_dec_ref_known(v___x_656_, 2);
goto v___jp_646_;
}
else
{
lean_object* v___x_660_; 
v___x_660_ = l_Lean_Meta_Sym_reportIssue(v___x_656_, v_a_639_, v_a_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_dec_ref_known(v___x_660_, 1);
goto v___jp_646_;
}
else
{
return v___x_660_;
}
}
}
else
{
lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_668_; 
lean_dec_ref_known(v___x_656_, 2);
v_a_661_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_668_ == 0)
{
v___x_663_ = v___x_657_;
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_657_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_666_; 
if (v_isShared_664_ == 0)
{
v___x_666_ = v___x_663_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_a_661_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
return v___x_666_;
}
}
}
}
else
{
lean_dec_ref(v_e_636_);
goto v___jp_646_;
}
}
else
{
lean_object* v___x_669_; lean_object* v___x_670_; 
lean_dec(v_a_651_);
lean_dec_ref(v_e_636_);
v___x_669_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_670_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_669_, v___f_649_, v_a_638_);
return v___x_670_;
}
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
lean_dec_ref(v___f_649_);
lean_dec_ref(v_e_636_);
v_a_671_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_650_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_650_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
v___jp_646_:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_box(0);
v___x_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
return v___x_648_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___boxed(lean_object* v_e_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg(v_e_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_);
lean_dec(v_a_687_);
lean_dec_ref(v_a_686_);
lean_dec(v_a_685_);
lean_dec_ref(v_a_684_);
lean_dec(v_a_683_);
lean_dec_ref(v_a_682_);
lean_dec(v_a_681_);
lean_dec(v_a_680_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId(lean_object* v_e_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg(v_e_690_, v_a_691_, v_a_692_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___boxed(lean_object* v_e_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lean_Meta_Grind_Arith_Linear_setTermStructId(v_e_704_, v_a_705_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
lean_dec(v_a_713_);
lean_dec_ref(v_a_712_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_a_709_);
lean_dec_ref(v_a_708_);
lean_dec(v_a_707_);
lean_dec(v_a_706_);
lean_dec(v_a_705_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0(lean_object* v_00_u03b2_718_, lean_object* v_x_719_, lean_object* v_x_720_, lean_object* v_x_721_){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0___redArg(v_x_719_, v_x_720_, v_x_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0(lean_object* v_00_u03b2_723_, lean_object* v_x_724_, size_t v_x_725_, size_t v_x_726_, lean_object* v_x_727_, lean_object* v_x_728_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(v_x_724_, v_x_725_, v_x_726_, v_x_727_, v_x_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___boxed(lean_object* v_00_u03b2_730_, lean_object* v_x_731_, lean_object* v_x_732_, lean_object* v_x_733_, lean_object* v_x_734_, lean_object* v_x_735_){
_start:
{
size_t v_x_6767__boxed_736_; size_t v_x_6768__boxed_737_; lean_object* v_res_738_; 
v_x_6767__boxed_736_ = lean_unbox_usize(v_x_732_);
lean_dec(v_x_732_);
v_x_6768__boxed_737_ = lean_unbox_usize(v_x_733_);
lean_dec(v_x_733_);
v_res_738_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0(v_00_u03b2_730_, v_x_731_, v_x_6767__boxed_736_, v_x_6768__boxed_737_, v_x_734_, v_x_735_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_739_, lean_object* v_n_740_, lean_object* v_k_741_, lean_object* v_v_742_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1___redArg(v_n_740_, v_k_741_, v_v_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_744_, size_t v_depth_745_, lean_object* v_keys_746_, lean_object* v_vals_747_, lean_object* v_heq_748_, lean_object* v_i_749_, lean_object* v_entries_750_){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg(v_depth_745_, v_keys_746_, v_vals_747_, v_i_749_, v_entries_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_752_, lean_object* v_depth_753_, lean_object* v_keys_754_, lean_object* v_vals_755_, lean_object* v_heq_756_, lean_object* v_i_757_, lean_object* v_entries_758_){
_start:
{
size_t v_depth_boxed_759_; lean_object* v_res_760_; 
v_depth_boxed_759_ = lean_unbox_usize(v_depth_753_);
lean_dec(v_depth_753_);
v_res_760_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2(v_00_u03b2_752_, v_depth_boxed_759_, v_keys_754_, v_vals_755_, v_heq_756_, v_i_757_, v_entries_758_);
lean_dec_ref(v_vals_755_);
lean_dec_ref(v_keys_754_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_761_, lean_object* v_x_762_, lean_object* v_x_763_, lean_object* v_x_764_, lean_object* v_x_765_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2___redArg(v_x_762_, v_x_763_, v_x_764_, v_x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0(lean_object* v_msgData_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v___x_773_; lean_object* v_env_774_; lean_object* v___x_775_; lean_object* v_toCold_776_; lean_object* v_mctx_777_; lean_object* v_lctx_778_; lean_object* v_options_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_773_ = lean_st_ref_get(v___y_771_);
v_env_774_ = lean_ctor_get(v___x_773_, 0);
lean_inc_ref(v_env_774_);
lean_dec(v___x_773_);
v___x_775_ = lean_st_ref_get(v___y_769_);
v_toCold_776_ = lean_ctor_get(v___y_770_, 0);
v_mctx_777_ = lean_ctor_get(v___x_775_, 0);
lean_inc_ref(v_mctx_777_);
lean_dec(v___x_775_);
v_lctx_778_ = lean_ctor_get(v___y_768_, 2);
v_options_779_ = lean_ctor_get(v_toCold_776_, 2);
lean_inc_ref(v_options_779_);
lean_inc_ref(v_lctx_778_);
v___x_780_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_780_, 0, v_env_774_);
lean_ctor_set(v___x_780_, 1, v_mctx_777_);
lean_ctor_set(v___x_780_, 2, v_lctx_778_);
lean_ctor_set(v___x_780_, 3, v_options_779_);
v___x_781_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
lean_ctor_set(v___x_781_, 1, v_msgData_767_);
v___x_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_782_, 0, v___x_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0___boxed(lean_object* v_msgData_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
lean_object* v_res_789_; 
v_res_789_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0(v_msgData_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(lean_object* v_msg_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v_ref_796_; lean_object* v___x_797_; lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_806_; 
v_ref_796_ = lean_ctor_get(v___y_793_, 2);
v___x_797_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0(v_msg_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_);
v_a_798_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_806_ == 0)
{
v___x_800_ = v___x_797_;
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_797_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_804_; 
lean_inc(v_ref_796_);
v___x_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_802_, 0, v_ref_796_);
lean_ctor_set(v___x_802_, 1, v_a_798_);
if (v_isShared_801_ == 0)
{
lean_ctor_set_tag(v___x_800_, 1);
lean_ctor_set(v___x_800_, 0, v___x_802_);
v___x_804_ = v___x_800_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg___boxed(lean_object* v_msg_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v_msg_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
return v_res_813_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__0));
v___x_816_ = l_Lean_stringToMessageData(v___x_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst(lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_841_; 
v_a_830_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_841_ == 0)
{
v___x_832_ = v___x_829_;
v_isShared_833_ = v_isSharedCheck_841_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_829_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_841_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v_noNatDivInst_x3f_834_; 
v_noNatDivInst_x3f_834_ = lean_ctor_get(v_a_830_, 11);
lean_inc(v_noNatDivInst_x3f_834_);
lean_dec(v_a_830_);
if (lean_obj_tag(v_noNatDivInst_x3f_834_) == 1)
{
lean_object* v_val_835_; lean_object* v___x_837_; 
v_val_835_ = lean_ctor_get(v_noNatDivInst_x3f_834_, 0);
lean_inc(v_val_835_);
lean_dec_ref_known(v_noNatDivInst_x3f_834_, 1);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 0, v_val_835_);
v___x_837_ = v___x_832_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_val_835_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
else
{
lean_object* v___x_839_; lean_object* v___x_840_; 
lean_dec(v_noNatDivInst_x3f_834_);
lean_del_object(v___x_832_);
v___x_839_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1);
v___x_840_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_839_, v_a_824_, v_a_825_, v_a_826_, v_a_827_);
return v___x_840_;
}
}
}
else
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
v_a_842_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_829_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_829_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___boxed(lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst(v_a_850_, v_a_851_, v_a_852_, v_a_853_, v_a_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_);
lean_dec(v_a_860_);
lean_dec_ref(v_a_859_);
lean_dec(v_a_858_);
lean_dec_ref(v_a_857_);
lean_dec(v_a_856_);
lean_dec_ref(v_a_855_);
lean_dec(v_a_854_);
lean_dec_ref(v_a_853_);
lean_dec(v_a_852_);
lean_dec(v_a_851_);
lean_dec(v_a_850_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0(lean_object* v_00_u03b1_863_, lean_object* v_msg_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v_msg_864_, v___y_872_, v___y_873_, v___y_874_, v___y_875_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___boxed(lean_object* v_00_u03b1_878_, lean_object* v_msg_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0(v_00_u03b1_878_, v_msg_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec(v___y_884_);
lean_dec_ref(v___y_883_);
lean_dec(v___y_882_);
lean_dec(v___y_881_);
lean_dec(v___y_880_);
return v_res_892_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__0));
v___x_895_ = l_Lean_stringToMessageData(v___x_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst(lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_896_, v_a_897_, v_a_898_, v_a_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_920_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_920_ == 0)
{
v___x_911_ = v___x_908_;
v_isShared_912_ = v_isSharedCheck_920_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_908_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_920_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v_leInst_x3f_913_; 
v_leInst_x3f_913_ = lean_ctor_get(v_a_909_, 5);
lean_inc(v_leInst_x3f_913_);
lean_dec(v_a_909_);
if (lean_obj_tag(v_leInst_x3f_913_) == 1)
{
lean_object* v_val_914_; lean_object* v___x_916_; 
v_val_914_ = lean_ctor_get(v_leInst_x3f_913_, 0);
lean_inc(v_val_914_);
lean_dec_ref_known(v_leInst_x3f_913_, 1);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 0, v_val_914_);
v___x_916_ = v___x_911_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_val_914_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
else
{
lean_object* v___x_918_; lean_object* v___x_919_; 
lean_dec(v_leInst_x3f_913_);
lean_del_object(v___x_911_);
v___x_918_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1);
v___x_919_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_918_, v_a_903_, v_a_904_, v_a_905_, v_a_906_);
return v___x_919_;
}
}
}
else
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
v_a_921_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_908_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_908_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst___boxed(lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lean_Meta_Grind_Arith_Linear_getLEInst(v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_);
lean_dec(v_a_939_);
lean_dec_ref(v_a_938_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
lean_dec(v_a_933_);
lean_dec_ref(v_a_932_);
lean_dec(v_a_931_);
lean_dec(v_a_930_);
lean_dec(v_a_929_);
return v_res_941_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1(void){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__0));
v___x_944_ = l_Lean_stringToMessageData(v___x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst(lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_945_, v_a_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_969_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_969_ == 0)
{
v___x_960_ = v___x_957_;
v_isShared_961_ = v_isSharedCheck_969_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_957_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_969_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v_ltInst_x3f_962_; 
v_ltInst_x3f_962_ = lean_ctor_get(v_a_958_, 6);
lean_inc(v_ltInst_x3f_962_);
lean_dec(v_a_958_);
if (lean_obj_tag(v_ltInst_x3f_962_) == 1)
{
lean_object* v_val_963_; lean_object* v___x_965_; 
v_val_963_ = lean_ctor_get(v_ltInst_x3f_962_, 0);
lean_inc(v_val_963_);
lean_dec_ref_known(v_ltInst_x3f_962_, 1);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 0, v_val_963_);
v___x_965_ = v___x_960_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_val_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
else
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec(v_ltInst_x3f_962_);
lean_del_object(v___x_960_);
v___x_967_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1);
v___x_968_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_967_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
return v___x_968_;
}
}
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
v_a_970_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_957_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_957_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst___boxed(lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lean_Meta_Grind_Arith_Linear_getLTInst(v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
lean_dec(v_a_988_);
lean_dec_ref(v_a_987_);
lean_dec(v_a_986_);
lean_dec_ref(v_a_985_);
lean_dec(v_a_984_);
lean_dec_ref(v_a_983_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
lean_dec(v_a_980_);
lean_dec(v_a_979_);
lean_dec(v_a_978_);
return v_res_990_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__0));
v___x_993_ = l_Lean_stringToMessageData(v___x_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst(lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1018_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1009_ = v___x_1006_;
v_isShared_1010_ = v_isSharedCheck_1018_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1018_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v_lawfulOrderLTInst_x3f_1011_; 
v_lawfulOrderLTInst_x3f_1011_ = lean_ctor_get(v_a_1007_, 7);
lean_inc(v_lawfulOrderLTInst_x3f_1011_);
lean_dec(v_a_1007_);
if (lean_obj_tag(v_lawfulOrderLTInst_x3f_1011_) == 1)
{
lean_object* v_val_1012_; lean_object* v___x_1014_; 
v_val_1012_ = lean_ctor_get(v_lawfulOrderLTInst_x3f_1011_, 0);
lean_inc(v_val_1012_);
lean_dec_ref_known(v_lawfulOrderLTInst_x3f_1011_, 1);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 0, v_val_1012_);
v___x_1014_ = v___x_1009_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_val_1012_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
else
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
lean_dec(v_lawfulOrderLTInst_x3f_1011_);
lean_del_object(v___x_1009_);
v___x_1016_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1);
v___x_1017_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1016_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_);
return v___x_1017_;
}
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
v_a_1019_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_1006_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1006_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___boxed(lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst(v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_);
lean_dec(v_a_1037_);
lean_dec_ref(v_a_1036_);
lean_dec(v_a_1035_);
lean_dec_ref(v_a_1034_);
lean_dec(v_a_1033_);
lean_dec_ref(v_a_1032_);
lean_dec(v_a_1031_);
lean_dec_ref(v_a_1030_);
lean_dec(v_a_1029_);
lean_dec(v_a_1028_);
lean_dec(v_a_1027_);
return v_res_1039_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__0));
v___x_1042_ = l_Lean_stringToMessageData(v___x_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst(lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1043_, v_a_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1067_; 
v_a_1056_ = lean_ctor_get(v___x_1055_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1058_ = v___x_1055_;
v_isShared_1059_ = v_isSharedCheck_1067_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1055_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1067_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v_isPreorderInst_x3f_1060_; 
v_isPreorderInst_x3f_1060_ = lean_ctor_get(v_a_1056_, 8);
lean_inc(v_isPreorderInst_x3f_1060_);
lean_dec(v_a_1056_);
if (lean_obj_tag(v_isPreorderInst_x3f_1060_) == 1)
{
lean_object* v_val_1061_; lean_object* v___x_1063_; 
v_val_1061_ = lean_ctor_get(v_isPreorderInst_x3f_1060_, 0);
lean_inc(v_val_1061_);
lean_dec_ref_known(v_isPreorderInst_x3f_1060_, 1);
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 0, v_val_1061_);
v___x_1063_ = v___x_1058_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_val_1061_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
else
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
lean_dec(v_isPreorderInst_x3f_1060_);
lean_del_object(v___x_1058_);
v___x_1065_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1);
v___x_1066_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1065_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_);
return v___x_1066_;
}
}
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
v_a_1068_ = lean_ctor_get(v___x_1055_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1055_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1055_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___boxed(lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst(v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_);
lean_dec(v_a_1086_);
lean_dec_ref(v_a_1085_);
lean_dec(v_a_1084_);
lean_dec_ref(v_a_1083_);
lean_dec(v_a_1082_);
lean_dec_ref(v_a_1081_);
lean_dec(v_a_1080_);
lean_dec_ref(v_a_1079_);
lean_dec(v_a_1078_);
lean_dec(v_a_1077_);
lean_dec(v_a_1076_);
return v_res_1088_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__0));
v___x_1091_ = l_Lean_stringToMessageData(v___x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst(lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1116_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1107_ = v___x_1104_;
v_isShared_1108_ = v_isSharedCheck_1116_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1104_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1116_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v_orderedAddInst_x3f_1109_; 
v_orderedAddInst_x3f_1109_ = lean_ctor_get(v_a_1105_, 9);
lean_inc(v_orderedAddInst_x3f_1109_);
lean_dec(v_a_1105_);
if (lean_obj_tag(v_orderedAddInst_x3f_1109_) == 1)
{
lean_object* v_val_1110_; lean_object* v___x_1112_; 
v_val_1110_ = lean_ctor_get(v_orderedAddInst_x3f_1109_, 0);
lean_inc(v_val_1110_);
lean_dec_ref_known(v_orderedAddInst_x3f_1109_, 1);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v_val_1110_);
v___x_1112_ = v___x_1107_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_val_1110_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
else
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
lean_dec(v_orderedAddInst_x3f_1109_);
lean_del_object(v___x_1107_);
v___x_1114_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1);
v___x_1115_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1114_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_);
return v___x_1115_;
}
}
}
else
{
lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
v_a_1117_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1119_ = v___x_1104_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_dec(v___x_1104_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1117_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___boxed(lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst(v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_);
lean_dec(v_a_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_a_1133_);
lean_dec_ref(v_a_1132_);
lean_dec(v_a_1131_);
lean_dec_ref(v_a_1130_);
lean_dec(v_a_1129_);
lean_dec_ref(v_a_1128_);
lean_dec(v_a_1127_);
lean_dec(v_a_1126_);
lean_dec(v_a_1125_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd(lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v___x_1150_; 
v___x_1150_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_);
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1166_; 
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1153_ = v___x_1150_;
v_isShared_1154_ = v_isSharedCheck_1166_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1150_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1166_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v_orderedAddInst_x3f_1155_; 
v_orderedAddInst_x3f_1155_ = lean_ctor_get(v_a_1151_, 9);
lean_inc(v_orderedAddInst_x3f_1155_);
lean_dec(v_a_1151_);
if (lean_obj_tag(v_orderedAddInst_x3f_1155_) == 0)
{
uint8_t v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1159_; 
v___x_1156_ = 0;
v___x_1157_ = lean_box(v___x_1156_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 0, v___x_1157_);
v___x_1159_ = v___x_1153_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1157_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
else
{
uint8_t v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1164_; 
lean_dec_ref_known(v_orderedAddInst_x3f_1155_, 1);
v___x_1161_ = 1;
v___x_1162_ = lean_box(v___x_1161_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 0, v___x_1162_);
v___x_1164_ = v___x_1153_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v___x_1162_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
v_a_1167_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1150_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1150_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd___boxed(lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd(v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
lean_dec(v_a_1183_);
lean_dec_ref(v_a_1182_);
lean_dec(v_a_1181_);
lean_dec_ref(v_a_1180_);
lean_dec(v_a_1179_);
lean_dec_ref(v_a_1178_);
lean_dec(v_a_1177_);
lean_dec(v_a_1176_);
lean_dec(v_a_1175_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg___lam__0(lean_object* v_toPure_1188_, lean_object* v_inst_1189_, lean_object* v_inst_1190_, lean_object* v_____do__lift_1191_){
_start:
{
lean_object* v_ltFn_x3f_1192_; 
v_ltFn_x3f_1192_ = lean_ctor_get(v_____do__lift_1191_, 21);
lean_inc(v_ltFn_x3f_1192_);
lean_dec_ref(v_____do__lift_1191_);
if (lean_obj_tag(v_ltFn_x3f_1192_) == 1)
{
lean_object* v_val_1193_; lean_object* v___x_1194_; 
lean_dec_ref(v_inst_1190_);
lean_dec_ref(v_inst_1189_);
v_val_1193_ = lean_ctor_get(v_ltFn_x3f_1192_, 0);
lean_inc(v_val_1193_);
lean_dec_ref_known(v_ltFn_x3f_1192_, 1);
v___x_1194_ = lean_apply_2(v_toPure_1188_, lean_box(0), v_val_1193_);
return v___x_1194_;
}
else
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
lean_dec(v_ltFn_x3f_1192_);
lean_dec(v_toPure_1188_);
v___x_1195_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1);
v___x_1196_ = l_Lean_throwError___redArg(v_inst_1189_, v_inst_1190_, v___x_1195_);
return v___x_1196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg(lean_object* v_inst_1197_, lean_object* v_inst_1198_, lean_object* v_inst_1199_){
_start:
{
lean_object* v_toApplicative_1200_; lean_object* v_toBind_1201_; lean_object* v_toPure_1202_; lean_object* v___f_1203_; lean_object* v___x_1204_; 
v_toApplicative_1200_ = lean_ctor_get(v_inst_1197_, 0);
v_toBind_1201_ = lean_ctor_get(v_inst_1197_, 1);
lean_inc(v_toBind_1201_);
v_toPure_1202_ = lean_ctor_get(v_toApplicative_1200_, 1);
lean_inc(v_toPure_1202_);
v___f_1203_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1203_, 0, v_toPure_1202_);
lean_closure_set(v___f_1203_, 1, v_inst_1197_);
lean_closure_set(v___f_1203_, 2, v_inst_1198_);
v___x_1204_ = lean_apply_4(v_toBind_1201_, lean_box(0), lean_box(0), v_inst_1199_, v___f_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn(lean_object* v_m_1205_, lean_object* v_inst_1206_, lean_object* v_inst_1207_, lean_object* v_inst_1208_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg(v_inst_1206_, v_inst_1207_, v_inst_1208_);
return v___x_1209_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__0));
v___x_1212_ = l_Lean_stringToMessageData(v___x_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0(lean_object* v_toPure_1213_, lean_object* v_inst_1214_, lean_object* v_inst_1215_, lean_object* v_____do__lift_1216_){
_start:
{
lean_object* v_leFn_x3f_1217_; 
v_leFn_x3f_1217_ = lean_ctor_get(v_____do__lift_1216_, 20);
lean_inc(v_leFn_x3f_1217_);
lean_dec_ref(v_____do__lift_1216_);
if (lean_obj_tag(v_leFn_x3f_1217_) == 1)
{
lean_object* v_val_1218_; lean_object* v___x_1219_; 
lean_dec_ref(v_inst_1215_);
lean_dec_ref(v_inst_1214_);
v_val_1218_ = lean_ctor_get(v_leFn_x3f_1217_, 0);
lean_inc(v_val_1218_);
lean_dec_ref_known(v_leFn_x3f_1217_, 1);
v___x_1219_ = lean_apply_2(v_toPure_1213_, lean_box(0), v_val_1218_);
return v___x_1219_;
}
else
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
lean_dec(v_leFn_x3f_1217_);
lean_dec(v_toPure_1213_);
v___x_1220_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1);
v___x_1221_ = l_Lean_throwError___redArg(v_inst_1214_, v_inst_1215_, v___x_1220_);
return v___x_1221_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg(lean_object* v_inst_1222_, lean_object* v_inst_1223_, lean_object* v_inst_1224_){
_start:
{
lean_object* v_toApplicative_1225_; lean_object* v_toBind_1226_; lean_object* v_toPure_1227_; lean_object* v___f_1228_; lean_object* v___x_1229_; 
v_toApplicative_1225_ = lean_ctor_get(v_inst_1222_, 0);
v_toBind_1226_ = lean_ctor_get(v_inst_1222_, 1);
lean_inc(v_toBind_1226_);
v_toPure_1227_ = lean_ctor_get(v_toApplicative_1225_, 1);
lean_inc(v_toPure_1227_);
v___f_1228_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1228_, 0, v_toPure_1227_);
lean_closure_set(v___f_1228_, 1, v_inst_1222_);
lean_closure_set(v___f_1228_, 2, v_inst_1223_);
v___x_1229_ = lean_apply_4(v_toBind_1226_, lean_box(0), lean_box(0), v_inst_1224_, v___f_1228_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn(lean_object* v_m_1230_, lean_object* v_inst_1231_, lean_object* v_inst_1232_, lean_object* v_inst_1233_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg(v_inst_1231_, v_inst_1232_, v_inst_1233_);
return v___x_1234_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__0));
v___x_1237_ = l_Lean_stringToMessageData(v___x_1236_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst(lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1262_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1253_ = v___x_1250_;
v_isShared_1254_ = v_isSharedCheck_1262_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1250_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1262_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v_isLinearInst_x3f_1255_; 
v_isLinearInst_x3f_1255_ = lean_ctor_get(v_a_1251_, 10);
lean_inc(v_isLinearInst_x3f_1255_);
lean_dec(v_a_1251_);
if (lean_obj_tag(v_isLinearInst_x3f_1255_) == 1)
{
lean_object* v_val_1256_; lean_object* v___x_1258_; 
v_val_1256_ = lean_ctor_get(v_isLinearInst_x3f_1255_, 0);
lean_inc(v_val_1256_);
lean_dec_ref_known(v_isLinearInst_x3f_1255_, 1);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v_val_1256_);
v___x_1258_ = v___x_1253_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_val_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
lean_dec(v_isLinearInst_x3f_1255_);
lean_del_object(v___x_1253_);
v___x_1260_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1);
v___x_1261_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1260_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_);
return v___x_1261_;
}
}
}
else
{
lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1270_; 
v_a_1263_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1265_ = v___x_1250_;
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1250_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_a_1263_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___boxed(lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst(v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_);
lean_dec(v_a_1281_);
lean_dec_ref(v_a_1280_);
lean_dec(v_a_1279_);
lean_dec_ref(v_a_1278_);
lean_dec(v_a_1277_);
lean_dec_ref(v_a_1276_);
lean_dec(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec(v_a_1273_);
lean_dec(v_a_1272_);
lean_dec(v_a_1271_);
return v_res_1283_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1(void){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__0));
v___x_1286_ = l_Lean_stringToMessageData(v___x_1285_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst(lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_){
_start:
{
lean_object* v___x_1299_; 
v___x_1299_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_);
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_object* v_a_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1311_; 
v_a_1300_ = lean_ctor_get(v___x_1299_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1302_ = v___x_1299_;
v_isShared_1303_ = v_isSharedCheck_1311_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_a_1300_);
lean_dec(v___x_1299_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1311_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v_ringInst_x3f_1304_; 
v_ringInst_x3f_1304_ = lean_ctor_get(v_a_1300_, 12);
lean_inc(v_ringInst_x3f_1304_);
lean_dec(v_a_1300_);
if (lean_obj_tag(v_ringInst_x3f_1304_) == 1)
{
lean_object* v_val_1305_; lean_object* v___x_1307_; 
v_val_1305_ = lean_ctor_get(v_ringInst_x3f_1304_, 0);
lean_inc(v_val_1305_);
lean_dec_ref_known(v_ringInst_x3f_1304_, 1);
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 0, v_val_1305_);
v___x_1307_ = v___x_1302_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_val_1305_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
else
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_dec(v_ringInst_x3f_1304_);
lean_del_object(v___x_1302_);
v___x_1309_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1);
v___x_1310_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1309_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_);
return v___x_1310_;
}
}
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
v_a_1312_ = lean_ctor_get(v___x_1299_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1299_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1299_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst___boxed(lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_Meta_Grind_Arith_Linear_getRingInst(v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_, v_a_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec_ref(v_a_1325_);
lean_dec(v_a_1324_);
lean_dec_ref(v_a_1323_);
lean_dec(v_a_1322_);
lean_dec(v_a_1321_);
lean_dec(v_a_1320_);
return v_res_1332_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1(void){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__0));
v___x_1335_ = l_Lean_stringToMessageData(v___x_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst(lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_){
_start:
{
lean_object* v___x_1348_; 
v___x_1348_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1360_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1351_ = v___x_1348_;
v_isShared_1352_ = v_isSharedCheck_1360_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1348_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1360_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v_commRingInst_x3f_1353_; 
v_commRingInst_x3f_1353_ = lean_ctor_get(v_a_1349_, 13);
lean_inc(v_commRingInst_x3f_1353_);
lean_dec(v_a_1349_);
if (lean_obj_tag(v_commRingInst_x3f_1353_) == 1)
{
lean_object* v_val_1354_; lean_object* v___x_1356_; 
v_val_1354_ = lean_ctor_get(v_commRingInst_x3f_1353_, 0);
lean_inc(v_val_1354_);
lean_dec_ref_known(v_commRingInst_x3f_1353_, 1);
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 0, v_val_1354_);
v___x_1356_ = v___x_1351_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_val_1354_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
else
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
lean_dec(v_commRingInst_x3f_1353_);
lean_del_object(v___x_1351_);
v___x_1358_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1);
v___x_1359_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1358_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_);
return v___x_1359_;
}
}
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
v_a_1361_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1348_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1348_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___boxed(lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_Lean_Meta_Grind_Arith_Linear_getCommRingInst(v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_);
lean_dec(v_a_1379_);
lean_dec_ref(v_a_1378_);
lean_dec(v_a_1377_);
lean_dec_ref(v_a_1376_);
lean_dec(v_a_1375_);
lean_dec_ref(v_a_1374_);
lean_dec(v_a_1373_);
lean_dec_ref(v_a_1372_);
lean_dec(v_a_1371_);
lean_dec(v_a_1370_);
lean_dec(v_a_1369_);
return v_res_1381_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__0));
v___x_1384_ = l_Lean_stringToMessageData(v___x_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst(lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_){
_start:
{
lean_object* v___x_1397_; 
v___x_1397_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_);
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1409_; 
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1409_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1400_ = v___x_1397_;
v_isShared_1401_ = v_isSharedCheck_1409_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1397_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1409_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v_orderedRingInst_x3f_1402_; 
v_orderedRingInst_x3f_1402_ = lean_ctor_get(v_a_1398_, 14);
lean_inc(v_orderedRingInst_x3f_1402_);
lean_dec(v_a_1398_);
if (lean_obj_tag(v_orderedRingInst_x3f_1402_) == 1)
{
lean_object* v_val_1403_; lean_object* v___x_1405_; 
v_val_1403_ = lean_ctor_get(v_orderedRingInst_x3f_1402_, 0);
lean_inc(v_val_1403_);
lean_dec_ref_known(v_orderedRingInst_x3f_1402_, 1);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v_val_1403_);
v___x_1405_ = v___x_1400_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v_val_1403_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
else
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
lean_dec(v_orderedRingInst_x3f_1402_);
lean_del_object(v___x_1400_);
v___x_1407_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1);
v___x_1408_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1407_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_);
return v___x_1408_;
}
}
}
else
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1417_; 
v_a_1410_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1412_ = v___x_1397_;
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1397_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_a_1410_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___boxed(lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst(v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_);
lean_dec(v_a_1428_);
lean_dec_ref(v_a_1427_);
lean_dec(v_a_1426_);
lean_dec_ref(v_a_1425_);
lean_dec(v_a_1424_);
lean_dec_ref(v_a_1423_);
lean_dec(v_a_1422_);
lean_dec_ref(v_a_1421_);
lean_dec(v_a_1420_);
lean_dec(v_a_1419_);
lean_dec(v_a_1418_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go_spec__0(lean_object* v_a_1431_){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = l_Rat_ofInt(v_a_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go(lean_object* v_a_1433_, lean_object* v_v_1434_, lean_object* v_a_1435_){
_start:
{
if (lean_obj_tag(v_a_1435_) == 0)
{
lean_object* v___x_1436_; 
v___x_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1436_, 0, v_v_1434_);
return v___x_1436_;
}
else
{
lean_object* v_k_1437_; lean_object* v_v_1438_; lean_object* v_p_1439_; lean_object* v_size_1440_; uint8_t v___x_1441_; 
v_k_1437_ = lean_ctor_get(v_a_1435_, 0);
lean_inc(v_k_1437_);
v_v_1438_ = lean_ctor_get(v_a_1435_, 1);
lean_inc(v_v_1438_);
v_p_1439_ = lean_ctor_get(v_a_1435_, 2);
lean_inc(v_p_1439_);
lean_dec_ref_known(v_a_1435_, 3);
v_size_1440_ = lean_ctor_get(v_a_1433_, 2);
v___x_1441_ = lean_nat_dec_lt(v_v_1438_, v_size_1440_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1442_; 
lean_dec(v_p_1439_);
lean_dec(v_v_1438_);
lean_dec(v_k_1437_);
lean_dec_ref(v_v_1434_);
v___x_1442_ = lean_box(0);
return v___x_1442_;
}
else
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1443_ = l_instInhabitedRat;
v___x_1444_ = l_Rat_ofInt(v_k_1437_);
v___x_1445_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1443_, v_a_1433_, v_v_1438_);
lean_dec(v_v_1438_);
v___x_1446_ = l_Rat_mul(v___x_1444_, v___x_1445_);
lean_dec_ref(v___x_1444_);
v___x_1447_ = l_Rat_add(v_v_1434_, v___x_1446_);
v_v_1434_ = v___x_1447_;
v_a_1435_ = v_p_1439_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go___boxed(lean_object* v_a_1449_, lean_object* v_v_1450_, lean_object* v_a_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go(v_a_1449_, v_v_1450_, v_a_1451_);
lean_dec_ref(v_a_1449_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Grind_Linarith_Poly_eval_x3f_spec__0(lean_object* v_a_1453_){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = lean_nat_to_int(v_a_1453_);
v___x_1455_ = l_Rat_ofInt(v___x_1454_);
return v___x_1455_;
}
}
static lean_object* _init_l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0(void){
_start:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1456_ = lean_unsigned_to_nat(0u);
v___x_1457_ = l_Nat_cast___at___00Lean_Grind_Linarith_Poly_eval_x3f_spec__0(v___x_1456_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_eval_x3f(lean_object* v_p_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v___x_1471_; 
v___x_1471_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1459_, v_a_1460_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_, v_a_1469_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1482_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1474_ = v___x_1471_;
v_isShared_1475_ = v_isSharedCheck_1482_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1471_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1482_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v_assignment_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1480_; 
v_assignment_1476_ = lean_ctor_get(v_a_1472_, 35);
lean_inc_ref(v_assignment_1476_);
lean_dec(v_a_1472_);
v___x_1477_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0, &l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0_once, _init_l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0);
v___x_1478_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go(v_assignment_1476_, v___x_1477_, v_p_1458_);
lean_dec_ref(v_assignment_1476_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 0, v___x_1478_);
v___x_1480_ = v___x_1474_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v___x_1478_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_dec(v_p_1458_);
v_a_1483_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1471_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1471_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_eval_x3f___boxed(lean_object* v_p_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_){
_start:
{
lean_object* v_res_1504_; 
v_res_1504_ = l_Lean_Grind_Linarith_Poly_eval_x3f(v_p_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_);
lean_dec(v_a_1502_);
lean_dec_ref(v_a_1501_);
lean_dec(v_a_1500_);
lean_dec_ref(v_a_1499_);
lean_dec(v_a_1498_);
lean_dec_ref(v_a_1497_);
lean_dec(v_a_1496_);
lean_dec_ref(v_a_1495_);
lean_dec(v_a_1494_);
lean_dec(v_a_1493_);
lean_dec(v_a_1492_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Lean_Grind_Linarith_Poly_eval_x3f_spec__0_spec__0(lean_object* v_a_1505_){
_start:
{
lean_object* v___x_1506_; 
v___x_1506_ = lean_nat_to_int(v_a_1505_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied(lean_object* v_c_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v_p_1520_; uint8_t v_strict_1521_; lean_object* v___x_1522_; 
v_p_1520_ = lean_ctor_get(v_c_1507_, 0);
lean_inc(v_p_1520_);
v_strict_1521_ = lean_ctor_get_uint8(v_c_1507_, sizeof(void*)*2);
lean_dec_ref(v_c_1507_);
v___x_1522_ = l_Lean_Grind_Linarith_Poly_eval_x3f(v_p_1520_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1548_; 
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1525_ = v___x_1522_;
v_isShared_1526_ = v_isSharedCheck_1548_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1548_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
if (lean_obj_tag(v_a_1523_) == 1)
{
if (v_strict_1521_ == 0)
{
lean_object* v_val_1527_; lean_object* v___x_1528_; uint8_t v___x_1529_; uint8_t v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1533_; 
v_val_1527_ = lean_ctor_get(v_a_1523_, 0);
lean_inc(v_val_1527_);
lean_dec_ref_known(v_a_1523_, 1);
v___x_1528_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0, &l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0_once, _init_l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0);
v___x_1529_ = l_Rat_instDecidableLe(v_val_1527_, v___x_1528_);
v___x_1530_ = l_Lean_Bool_toLBool(v___x_1529_);
v___x_1531_ = lean_box(v___x_1530_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___x_1531_);
v___x_1533_ = v___x_1525_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v___x_1531_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
else
{
lean_object* v_val_1535_; lean_object* v___x_1536_; uint8_t v___x_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1541_; 
v_val_1535_ = lean_ctor_get(v_a_1523_, 0);
lean_inc(v_val_1535_);
lean_dec_ref_known(v_a_1523_, 1);
v___x_1536_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0, &l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0_once, _init_l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0);
v___x_1537_ = l_Rat_blt(v_val_1535_, v___x_1536_);
v___x_1538_ = l_Lean_Bool_toLBool(v___x_1537_);
v___x_1539_ = lean_box(v___x_1538_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___x_1539_);
v___x_1541_ = v___x_1525_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
else
{
uint8_t v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1546_; 
lean_dec(v_a_1523_);
v___x_1543_ = 2;
v___x_1544_ = lean_box(v___x_1543_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___x_1544_);
v___x_1546_ = v___x_1525_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1544_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
else
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
v_a_1549_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v___x_1522_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1522_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1549_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied___boxed(lean_object* v_c_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied(v_c_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_, v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_);
lean_dec(v_a_1568_);
lean_dec_ref(v_a_1567_);
lean_dec(v_a_1566_);
lean_dec_ref(v_a_1565_);
lean_dec(v_a_1564_);
lean_dec_ref(v_a_1563_);
lean_dec(v_a_1562_);
lean_dec_ref(v_a_1561_);
lean_dec(v_a_1560_);
lean_dec(v_a_1559_);
lean_dec(v_a_1558_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied(lean_object* v_c_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_){
_start:
{
lean_object* v_p_1584_; lean_object* v___x_1585_; 
v_p_1584_ = lean_ctor_get(v_c_1571_, 0);
lean_inc(v_p_1584_);
lean_dec_ref(v_c_1571_);
v___x_1585_ = l_Lean_Grind_Linarith_Poly_eval_x3f(v_p_1584_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_, v_a_1582_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1605_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1588_ = v___x_1585_;
v_isShared_1589_ = v_isSharedCheck_1605_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1585_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1605_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
uint8_t v___y_1591_; 
if (lean_obj_tag(v_a_1586_) == 1)
{
lean_object* v_val_1597_; lean_object* v___x_1598_; uint8_t v___x_1599_; 
v_val_1597_ = lean_ctor_get(v_a_1586_, 0);
lean_inc(v_val_1597_);
lean_dec_ref_known(v_a_1586_, 1);
v___x_1598_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0, &l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0_once, _init_l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0);
v___x_1599_ = l_instDecidableEqRat_decEq(v_val_1597_, v___x_1598_);
lean_dec(v_val_1597_);
if (v___x_1599_ == 0)
{
uint8_t v___x_1600_; 
v___x_1600_ = 1;
v___y_1591_ = v___x_1600_;
goto v___jp_1590_;
}
else
{
uint8_t v___x_1601_; 
v___x_1601_ = 0;
v___y_1591_ = v___x_1601_;
goto v___jp_1590_;
}
}
else
{
uint8_t v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
lean_del_object(v___x_1588_);
lean_dec(v_a_1586_);
v___x_1602_ = 2;
v___x_1603_ = lean_box(v___x_1602_);
v___x_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
return v___x_1604_;
}
v___jp_1590_:
{
uint8_t v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1595_; 
v___x_1592_ = l_Lean_Bool_toLBool(v___y_1591_);
v___x_1593_ = lean_box(v___x_1592_);
if (v_isShared_1589_ == 0)
{
lean_ctor_set(v___x_1588_, 0, v___x_1593_);
v___x_1595_ = v___x_1588_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v___x_1593_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
v_a_1606_ = lean_ctor_get(v___x_1585_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1585_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1585_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied___boxed(lean_object* v_c_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied(v_c_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_);
lean_dec(v_a_1625_);
lean_dec_ref(v_a_1624_);
lean_dec(v_a_1623_);
lean_dec_ref(v_a_1622_);
lean_dec(v_a_1621_);
lean_dec_ref(v_a_1620_);
lean_dec(v_a_1619_);
lean_dec_ref(v_a_1618_);
lean_dec(v_a_1617_);
lean_dec(v_a_1616_);
lean_dec(v_a_1615_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0(lean_object* v_a_1628_, lean_object* v_x_1629_, lean_object* v_s_1630_){
_start:
{
lean_object* v_structs_1631_; lean_object* v_typeIdOf_1632_; lean_object* v_exprToStructId_1633_; lean_object* v_exprToStructIdEntries_1634_; lean_object* v_forbiddenNatModules_1635_; lean_object* v_natStructs_1636_; lean_object* v_natTypeIdOf_1637_; lean_object* v_exprToNatStructId_1638_; lean_object* v___x_1639_; uint8_t v___x_1640_; 
v_structs_1631_ = lean_ctor_get(v_s_1630_, 0);
v_typeIdOf_1632_ = lean_ctor_get(v_s_1630_, 1);
v_exprToStructId_1633_ = lean_ctor_get(v_s_1630_, 2);
v_exprToStructIdEntries_1634_ = lean_ctor_get(v_s_1630_, 3);
v_forbiddenNatModules_1635_ = lean_ctor_get(v_s_1630_, 4);
v_natStructs_1636_ = lean_ctor_get(v_s_1630_, 5);
v_natTypeIdOf_1637_ = lean_ctor_get(v_s_1630_, 6);
v_exprToNatStructId_1638_ = lean_ctor_get(v_s_1630_, 7);
v___x_1639_ = lean_array_get_size(v_structs_1631_);
v___x_1640_ = lean_nat_dec_lt(v_a_1628_, v___x_1639_);
if (v___x_1640_ == 0)
{
return v_s_1630_;
}
else
{
lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1702_; 
lean_inc_ref(v_exprToNatStructId_1638_);
lean_inc_ref(v_natTypeIdOf_1637_);
lean_inc_ref(v_natStructs_1636_);
lean_inc_ref(v_forbiddenNatModules_1635_);
lean_inc_ref(v_exprToStructIdEntries_1634_);
lean_inc_ref(v_exprToStructId_1633_);
lean_inc_ref(v_typeIdOf_1632_);
lean_inc_ref(v_structs_1631_);
v_isSharedCheck_1702_ = !lean_is_exclusive(v_s_1630_);
if (v_isSharedCheck_1702_ == 0)
{
lean_object* v_unused_1703_; lean_object* v_unused_1704_; lean_object* v_unused_1705_; lean_object* v_unused_1706_; lean_object* v_unused_1707_; lean_object* v_unused_1708_; lean_object* v_unused_1709_; lean_object* v_unused_1710_; 
v_unused_1703_ = lean_ctor_get(v_s_1630_, 7);
lean_dec(v_unused_1703_);
v_unused_1704_ = lean_ctor_get(v_s_1630_, 6);
lean_dec(v_unused_1704_);
v_unused_1705_ = lean_ctor_get(v_s_1630_, 5);
lean_dec(v_unused_1705_);
v_unused_1706_ = lean_ctor_get(v_s_1630_, 4);
lean_dec(v_unused_1706_);
v_unused_1707_ = lean_ctor_get(v_s_1630_, 3);
lean_dec(v_unused_1707_);
v_unused_1708_ = lean_ctor_get(v_s_1630_, 2);
lean_dec(v_unused_1708_);
v_unused_1709_ = lean_ctor_get(v_s_1630_, 1);
lean_dec(v_unused_1709_);
v_unused_1710_ = lean_ctor_get(v_s_1630_, 0);
lean_dec(v_unused_1710_);
v___x_1642_ = v_s_1630_;
v_isShared_1643_ = v_isSharedCheck_1702_;
goto v_resetjp_1641_;
}
else
{
lean_dec(v_s_1630_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1702_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v_v_1644_; lean_object* v_id_1645_; lean_object* v_ringId_x3f_1646_; lean_object* v_type_1647_; lean_object* v_u_1648_; lean_object* v_intModuleInst_1649_; lean_object* v_leInst_x3f_1650_; lean_object* v_ltInst_x3f_1651_; lean_object* v_lawfulOrderLTInst_x3f_1652_; lean_object* v_isPreorderInst_x3f_1653_; lean_object* v_orderedAddInst_x3f_1654_; lean_object* v_isLinearInst_x3f_1655_; lean_object* v_noNatDivInst_x3f_1656_; lean_object* v_ringInst_x3f_1657_; lean_object* v_commRingInst_x3f_1658_; lean_object* v_orderedRingInst_x3f_1659_; lean_object* v_fieldInst_x3f_1660_; lean_object* v_charInst_x3f_1661_; lean_object* v_zero_1662_; lean_object* v_ofNatZero_1663_; lean_object* v_one_x3f_1664_; lean_object* v_leFn_x3f_1665_; lean_object* v_ltFn_x3f_1666_; lean_object* v_addFn_1667_; lean_object* v_zsmulFn_1668_; lean_object* v_nsmulFn_1669_; lean_object* v_zsmulFn_x3f_1670_; lean_object* v_nsmulFn_x3f_1671_; lean_object* v_homomulFn_x3f_1672_; lean_object* v_subFn_1673_; lean_object* v_negFn_1674_; lean_object* v_vars_1675_; lean_object* v_varMap_1676_; lean_object* v_lowers_1677_; lean_object* v_uppers_1678_; lean_object* v_diseqs_1679_; lean_object* v_assignment_1680_; uint8_t v_caseSplits_1681_; lean_object* v_conflict_x3f_1682_; lean_object* v_diseqSplits_1683_; lean_object* v_elimEqs_1684_; lean_object* v_elimStack_1685_; lean_object* v_occurs_1686_; lean_object* v_ignored_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1701_; 
v_v_1644_ = lean_array_fget(v_structs_1631_, v_a_1628_);
v_id_1645_ = lean_ctor_get(v_v_1644_, 0);
v_ringId_x3f_1646_ = lean_ctor_get(v_v_1644_, 1);
v_type_1647_ = lean_ctor_get(v_v_1644_, 2);
v_u_1648_ = lean_ctor_get(v_v_1644_, 3);
v_intModuleInst_1649_ = lean_ctor_get(v_v_1644_, 4);
v_leInst_x3f_1650_ = lean_ctor_get(v_v_1644_, 5);
v_ltInst_x3f_1651_ = lean_ctor_get(v_v_1644_, 6);
v_lawfulOrderLTInst_x3f_1652_ = lean_ctor_get(v_v_1644_, 7);
v_isPreorderInst_x3f_1653_ = lean_ctor_get(v_v_1644_, 8);
v_orderedAddInst_x3f_1654_ = lean_ctor_get(v_v_1644_, 9);
v_isLinearInst_x3f_1655_ = lean_ctor_get(v_v_1644_, 10);
v_noNatDivInst_x3f_1656_ = lean_ctor_get(v_v_1644_, 11);
v_ringInst_x3f_1657_ = lean_ctor_get(v_v_1644_, 12);
v_commRingInst_x3f_1658_ = lean_ctor_get(v_v_1644_, 13);
v_orderedRingInst_x3f_1659_ = lean_ctor_get(v_v_1644_, 14);
v_fieldInst_x3f_1660_ = lean_ctor_get(v_v_1644_, 15);
v_charInst_x3f_1661_ = lean_ctor_get(v_v_1644_, 16);
v_zero_1662_ = lean_ctor_get(v_v_1644_, 17);
v_ofNatZero_1663_ = lean_ctor_get(v_v_1644_, 18);
v_one_x3f_1664_ = lean_ctor_get(v_v_1644_, 19);
v_leFn_x3f_1665_ = lean_ctor_get(v_v_1644_, 20);
v_ltFn_x3f_1666_ = lean_ctor_get(v_v_1644_, 21);
v_addFn_1667_ = lean_ctor_get(v_v_1644_, 22);
v_zsmulFn_1668_ = lean_ctor_get(v_v_1644_, 23);
v_nsmulFn_1669_ = lean_ctor_get(v_v_1644_, 24);
v_zsmulFn_x3f_1670_ = lean_ctor_get(v_v_1644_, 25);
v_nsmulFn_x3f_1671_ = lean_ctor_get(v_v_1644_, 26);
v_homomulFn_x3f_1672_ = lean_ctor_get(v_v_1644_, 27);
v_subFn_1673_ = lean_ctor_get(v_v_1644_, 28);
v_negFn_1674_ = lean_ctor_get(v_v_1644_, 29);
v_vars_1675_ = lean_ctor_get(v_v_1644_, 30);
v_varMap_1676_ = lean_ctor_get(v_v_1644_, 31);
v_lowers_1677_ = lean_ctor_get(v_v_1644_, 32);
v_uppers_1678_ = lean_ctor_get(v_v_1644_, 33);
v_diseqs_1679_ = lean_ctor_get(v_v_1644_, 34);
v_assignment_1680_ = lean_ctor_get(v_v_1644_, 35);
v_caseSplits_1681_ = lean_ctor_get_uint8(v_v_1644_, sizeof(void*)*42);
v_conflict_x3f_1682_ = lean_ctor_get(v_v_1644_, 36);
v_diseqSplits_1683_ = lean_ctor_get(v_v_1644_, 37);
v_elimEqs_1684_ = lean_ctor_get(v_v_1644_, 38);
v_elimStack_1685_ = lean_ctor_get(v_v_1644_, 39);
v_occurs_1686_ = lean_ctor_get(v_v_1644_, 40);
v_ignored_1687_ = lean_ctor_get(v_v_1644_, 41);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_v_1644_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1689_ = v_v_1644_;
v_isShared_1690_ = v_isSharedCheck_1701_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_ignored_1687_);
lean_inc(v_occurs_1686_);
lean_inc(v_elimStack_1685_);
lean_inc(v_elimEqs_1684_);
lean_inc(v_diseqSplits_1683_);
lean_inc(v_conflict_x3f_1682_);
lean_inc(v_assignment_1680_);
lean_inc(v_diseqs_1679_);
lean_inc(v_uppers_1678_);
lean_inc(v_lowers_1677_);
lean_inc(v_varMap_1676_);
lean_inc(v_vars_1675_);
lean_inc(v_negFn_1674_);
lean_inc(v_subFn_1673_);
lean_inc(v_homomulFn_x3f_1672_);
lean_inc(v_nsmulFn_x3f_1671_);
lean_inc(v_zsmulFn_x3f_1670_);
lean_inc(v_nsmulFn_1669_);
lean_inc(v_zsmulFn_1668_);
lean_inc(v_addFn_1667_);
lean_inc(v_ltFn_x3f_1666_);
lean_inc(v_leFn_x3f_1665_);
lean_inc(v_one_x3f_1664_);
lean_inc(v_ofNatZero_1663_);
lean_inc(v_zero_1662_);
lean_inc(v_charInst_x3f_1661_);
lean_inc(v_fieldInst_x3f_1660_);
lean_inc(v_orderedRingInst_x3f_1659_);
lean_inc(v_commRingInst_x3f_1658_);
lean_inc(v_ringInst_x3f_1657_);
lean_inc(v_noNatDivInst_x3f_1656_);
lean_inc(v_isLinearInst_x3f_1655_);
lean_inc(v_orderedAddInst_x3f_1654_);
lean_inc(v_isPreorderInst_x3f_1653_);
lean_inc(v_lawfulOrderLTInst_x3f_1652_);
lean_inc(v_ltInst_x3f_1651_);
lean_inc(v_leInst_x3f_1650_);
lean_inc(v_intModuleInst_1649_);
lean_inc(v_u_1648_);
lean_inc(v_type_1647_);
lean_inc(v_ringId_x3f_1646_);
lean_inc(v_id_1645_);
lean_dec(v_v_1644_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1701_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1691_; lean_object* v_xs_x27_1692_; lean_object* v___x_1693_; lean_object* v___x_1695_; 
v___x_1691_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0);
v_xs_x27_1692_ = lean_array_fset(v_structs_1631_, v_a_1628_, v___x_1691_);
v___x_1693_ = l_Lean_Meta_Grind_Arith_shrink(v_assignment_1680_, v_x_1629_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 35, v___x_1693_);
v___x_1695_ = v___x_1689_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_id_1645_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v_ringId_x3f_1646_);
lean_ctor_set(v_reuseFailAlloc_1700_, 2, v_type_1647_);
lean_ctor_set(v_reuseFailAlloc_1700_, 3, v_u_1648_);
lean_ctor_set(v_reuseFailAlloc_1700_, 4, v_intModuleInst_1649_);
lean_ctor_set(v_reuseFailAlloc_1700_, 5, v_leInst_x3f_1650_);
lean_ctor_set(v_reuseFailAlloc_1700_, 6, v_ltInst_x3f_1651_);
lean_ctor_set(v_reuseFailAlloc_1700_, 7, v_lawfulOrderLTInst_x3f_1652_);
lean_ctor_set(v_reuseFailAlloc_1700_, 8, v_isPreorderInst_x3f_1653_);
lean_ctor_set(v_reuseFailAlloc_1700_, 9, v_orderedAddInst_x3f_1654_);
lean_ctor_set(v_reuseFailAlloc_1700_, 10, v_isLinearInst_x3f_1655_);
lean_ctor_set(v_reuseFailAlloc_1700_, 11, v_noNatDivInst_x3f_1656_);
lean_ctor_set(v_reuseFailAlloc_1700_, 12, v_ringInst_x3f_1657_);
lean_ctor_set(v_reuseFailAlloc_1700_, 13, v_commRingInst_x3f_1658_);
lean_ctor_set(v_reuseFailAlloc_1700_, 14, v_orderedRingInst_x3f_1659_);
lean_ctor_set(v_reuseFailAlloc_1700_, 15, v_fieldInst_x3f_1660_);
lean_ctor_set(v_reuseFailAlloc_1700_, 16, v_charInst_x3f_1661_);
lean_ctor_set(v_reuseFailAlloc_1700_, 17, v_zero_1662_);
lean_ctor_set(v_reuseFailAlloc_1700_, 18, v_ofNatZero_1663_);
lean_ctor_set(v_reuseFailAlloc_1700_, 19, v_one_x3f_1664_);
lean_ctor_set(v_reuseFailAlloc_1700_, 20, v_leFn_x3f_1665_);
lean_ctor_set(v_reuseFailAlloc_1700_, 21, v_ltFn_x3f_1666_);
lean_ctor_set(v_reuseFailAlloc_1700_, 22, v_addFn_1667_);
lean_ctor_set(v_reuseFailAlloc_1700_, 23, v_zsmulFn_1668_);
lean_ctor_set(v_reuseFailAlloc_1700_, 24, v_nsmulFn_1669_);
lean_ctor_set(v_reuseFailAlloc_1700_, 25, v_zsmulFn_x3f_1670_);
lean_ctor_set(v_reuseFailAlloc_1700_, 26, v_nsmulFn_x3f_1671_);
lean_ctor_set(v_reuseFailAlloc_1700_, 27, v_homomulFn_x3f_1672_);
lean_ctor_set(v_reuseFailAlloc_1700_, 28, v_subFn_1673_);
lean_ctor_set(v_reuseFailAlloc_1700_, 29, v_negFn_1674_);
lean_ctor_set(v_reuseFailAlloc_1700_, 30, v_vars_1675_);
lean_ctor_set(v_reuseFailAlloc_1700_, 31, v_varMap_1676_);
lean_ctor_set(v_reuseFailAlloc_1700_, 32, v_lowers_1677_);
lean_ctor_set(v_reuseFailAlloc_1700_, 33, v_uppers_1678_);
lean_ctor_set(v_reuseFailAlloc_1700_, 34, v_diseqs_1679_);
lean_ctor_set(v_reuseFailAlloc_1700_, 35, v___x_1693_);
lean_ctor_set(v_reuseFailAlloc_1700_, 36, v_conflict_x3f_1682_);
lean_ctor_set(v_reuseFailAlloc_1700_, 37, v_diseqSplits_1683_);
lean_ctor_set(v_reuseFailAlloc_1700_, 38, v_elimEqs_1684_);
lean_ctor_set(v_reuseFailAlloc_1700_, 39, v_elimStack_1685_);
lean_ctor_set(v_reuseFailAlloc_1700_, 40, v_occurs_1686_);
lean_ctor_set(v_reuseFailAlloc_1700_, 41, v_ignored_1687_);
lean_ctor_set_uint8(v_reuseFailAlloc_1700_, sizeof(void*)*42, v_caseSplits_1681_);
v___x_1695_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
lean_object* v___x_1696_; lean_object* v___x_1698_; 
v___x_1696_ = lean_array_fset(v_xs_x27_1692_, v_a_1628_, v___x_1695_);
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 0, v___x_1696_);
v___x_1698_ = v___x_1642_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v___x_1696_);
lean_ctor_set(v_reuseFailAlloc_1699_, 1, v_typeIdOf_1632_);
lean_ctor_set(v_reuseFailAlloc_1699_, 2, v_exprToStructId_1633_);
lean_ctor_set(v_reuseFailAlloc_1699_, 3, v_exprToStructIdEntries_1634_);
lean_ctor_set(v_reuseFailAlloc_1699_, 4, v_forbiddenNatModules_1635_);
lean_ctor_set(v_reuseFailAlloc_1699_, 5, v_natStructs_1636_);
lean_ctor_set(v_reuseFailAlloc_1699_, 6, v_natTypeIdOf_1637_);
lean_ctor_set(v_reuseFailAlloc_1699_, 7, v_exprToNatStructId_1638_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0___boxed(lean_object* v_a_1711_, lean_object* v_x_1712_, lean_object* v_s_1713_){
_start:
{
lean_object* v_res_1714_; 
v_res_1714_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0(v_a_1711_, v_x_1712_, v_s_1713_);
lean_dec(v_x_1712_);
lean_dec(v_a_1711_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(lean_object* v_x_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_){
_start:
{
lean_object* v___f_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
lean_inc(v_a_1716_);
v___f_1719_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1719_, 0, v_a_1716_);
lean_closure_set(v___f_1719_, 1, v_x_1715_);
v___x_1720_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_1721_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1720_, v___f_1719_, v_a_1717_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___boxed(lean_object* v_x_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(v_x_1722_, v_a_1723_, v_a_1724_);
lean_dec(v_a_1724_);
lean_dec(v_a_1723_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom(lean_object* v_x_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(v_x_1727_, v_a_1728_, v_a_1729_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___boxed(lean_object* v_x_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom(v_x_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_, v_a_1746_, v_a_1747_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_);
lean_dec(v_a_1752_);
lean_dec_ref(v_a_1751_);
lean_dec(v_a_1750_);
lean_dec_ref(v_a_1749_);
lean_dec(v_a_1748_);
lean_dec_ref(v_a_1747_);
lean_dec(v_a_1746_);
lean_dec_ref(v_a_1745_);
lean_dec(v_a_1744_);
lean_dec(v_a_1743_);
lean_dec(v_a_1742_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getVar(lean_object* v_x_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_){
_start:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1768_ = l_Lean_instInhabitedExpr;
v___x_1769_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1756_, v_a_1757_, v_a_1758_, v_a_1759_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1785_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1772_ = v___x_1769_;
v_isShared_1773_ = v_isSharedCheck_1785_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1769_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1785_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v_vars_1774_; lean_object* v_size_1775_; uint8_t v___x_1776_; 
v_vars_1774_ = lean_ctor_get(v_a_1770_, 30);
lean_inc_ref(v_vars_1774_);
lean_dec(v_a_1770_);
v_size_1775_ = lean_ctor_get(v_vars_1774_, 2);
v___x_1776_ = lean_nat_dec_lt(v_x_1755_, v_size_1775_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; lean_object* v___x_1779_; 
lean_dec_ref(v_vars_1774_);
v___x_1777_ = l_outOfBounds___redArg(v___x_1768_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v___x_1777_);
v___x_1779_ = v___x_1772_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v___x_1777_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
else
{
lean_object* v___x_1781_; lean_object* v___x_1783_; 
v___x_1781_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1768_, v_vars_1774_, v_x_1755_);
lean_dec_ref(v_vars_1774_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v___x_1781_);
v___x_1783_ = v___x_1772_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1781_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1793_; 
v_a_1786_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1788_ = v___x_1769_;
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___x_1769_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1791_; 
if (v_isShared_1789_ == 0)
{
v___x_1791_ = v___x_1788_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_a_1786_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getVar___boxed(lean_object* v_x_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l_Lean_Meta_Grind_Arith_Linear_getVar(v_x_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
lean_dec(v_a_1805_);
lean_dec_ref(v_a_1804_);
lean_dec(v_a_1803_);
lean_dec_ref(v_a_1802_);
lean_dec(v_a_1801_);
lean_dec_ref(v_a_1800_);
lean_dec(v_a_1799_);
lean_dec_ref(v_a_1798_);
lean_dec(v_a_1797_);
lean_dec(v_a_1796_);
lean_dec(v_a_1795_);
lean_dec(v_x_1794_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_inconsistent(lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v___x_1820_; 
v___x_1820_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_1809_);
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; uint8_t v___x_1822_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
v___x_1822_ = lean_unbox(v_a_1821_);
if (v___x_1822_ == 0)
{
lean_object* v___x_1823_; 
lean_dec_ref_known(v___x_1820_, 1);
v___x_1823_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1808_, v_a_1809_, v_a_1810_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1837_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1826_ = v___x_1823_;
v_isShared_1827_ = v_isSharedCheck_1837_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_a_1824_);
lean_dec(v___x_1823_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1837_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v_conflict_x3f_1828_; 
v_conflict_x3f_1828_ = lean_ctor_get(v_a_1824_, 36);
lean_inc(v_conflict_x3f_1828_);
lean_dec(v_a_1824_);
if (lean_obj_tag(v_conflict_x3f_1828_) == 0)
{
lean_object* v___x_1830_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v_a_1821_);
v___x_1830_ = v___x_1826_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_a_1821_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
return v___x_1830_;
}
}
else
{
uint8_t v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1835_; 
lean_dec_ref_known(v_conflict_x3f_1828_, 1);
lean_dec(v_a_1821_);
v___x_1832_ = 1;
v___x_1833_ = lean_box(v___x_1832_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1833_);
v___x_1835_ = v___x_1826_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v___x_1833_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
lean_dec(v_a_1821_);
v_a_1838_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1823_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1823_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
else
{
lean_dec(v_a_1821_);
return v___x_1820_;
}
}
else
{
return v___x_1820_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_inconsistent___boxed(lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l_Lean_Meta_Grind_Arith_Linear_inconsistent(v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_);
lean_dec(v_a_1856_);
lean_dec_ref(v_a_1855_);
lean_dec(v_a_1854_);
lean_dec_ref(v_a_1853_);
lean_dec(v_a_1852_);
lean_dec_ref(v_a_1851_);
lean_dec(v_a_1850_);
lean_dec_ref(v_a_1849_);
lean_dec(v_a_1848_);
lean_dec(v_a_1847_);
lean_dec(v_a_1846_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_eliminated(lean_object* v_x_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = lean_box(0);
v___x_1873_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1895_; 
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1876_ = v___x_1873_;
v_isShared_1877_ = v_isSharedCheck_1895_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1895_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___y_1879_; lean_object* v_elimEqs_1890_; lean_object* v_size_1891_; uint8_t v___x_1892_; 
v_elimEqs_1890_ = lean_ctor_get(v_a_1874_, 38);
lean_inc_ref(v_elimEqs_1890_);
lean_dec(v_a_1874_);
v_size_1891_ = lean_ctor_get(v_elimEqs_1890_, 2);
v___x_1892_ = lean_nat_dec_lt(v_x_1859_, v_size_1891_);
if (v___x_1892_ == 0)
{
lean_object* v___x_1893_; 
lean_dec_ref(v_elimEqs_1890_);
v___x_1893_ = l_outOfBounds___redArg(v___x_1872_);
v___y_1879_ = v___x_1893_;
goto v___jp_1878_;
}
else
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1872_, v_elimEqs_1890_, v_x_1859_);
lean_dec_ref(v_elimEqs_1890_);
v___y_1879_ = v___x_1894_;
goto v___jp_1878_;
}
v___jp_1878_:
{
if (lean_obj_tag(v___y_1879_) == 0)
{
uint8_t v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1883_; 
v___x_1880_ = 0;
v___x_1881_ = lean_box(v___x_1880_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1881_);
v___x_1883_ = v___x_1876_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v___x_1881_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
else
{
uint8_t v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1888_; 
lean_dec_ref_known(v___y_1879_, 1);
v___x_1885_ = 1;
v___x_1886_ = lean_box(v___x_1885_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1886_);
v___x_1888_ = v___x_1876_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v___x_1886_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
}
}
else
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1903_; 
v_a_1896_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1898_ = v___x_1873_;
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1873_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1901_; 
if (v_isShared_1899_ == 0)
{
v___x_1901_ = v___x_1898_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v_a_1896_);
v___x_1901_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
return v___x_1901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_eliminated___boxed(lean_object* v_x_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lean_Meta_Grind_Arith_Linear_eliminated(v_x_1904_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_);
lean_dec(v_a_1915_);
lean_dec_ref(v_a_1914_);
lean_dec(v_a_1913_);
lean_dec_ref(v_a_1912_);
lean_dec(v_a_1911_);
lean_dec_ref(v_a_1910_);
lean_dec(v_a_1909_);
lean_dec_ref(v_a_1908_);
lean_dec(v_a_1907_);
lean_dec(v_a_1906_);
lean_dec(v_a_1905_);
lean_dec(v_x_1904_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOccursOf(lean_object* v_x_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_){
_start:
{
lean_object* v___x_1931_; 
v___x_1931_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_, v_a_1927_, v_a_1928_, v_a_1929_);
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1948_; 
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1934_ = v___x_1931_;
v_isShared_1935_ = v_isSharedCheck_1948_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1931_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1948_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v_occurs_1936_; lean_object* v_size_1937_; lean_object* v___x_1938_; uint8_t v___x_1939_; 
v_occurs_1936_ = lean_ctor_get(v_a_1932_, 40);
lean_inc_ref(v_occurs_1936_);
lean_dec(v_a_1932_);
v_size_1937_ = lean_ctor_get(v_occurs_1936_, 2);
v___x_1938_ = lean_box(1);
v___x_1939_ = lean_nat_dec_lt(v_x_1918_, v_size_1937_);
if (v___x_1939_ == 0)
{
lean_object* v___x_1940_; lean_object* v___x_1942_; 
lean_dec_ref(v_occurs_1936_);
v___x_1940_ = l_outOfBounds___redArg(v___x_1938_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 0, v___x_1940_);
v___x_1942_ = v___x_1934_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
else
{
lean_object* v___x_1944_; lean_object* v___x_1946_; 
v___x_1944_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1938_, v_occurs_1936_, v_x_1918_);
lean_dec_ref(v_occurs_1936_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 0, v___x_1944_);
v___x_1946_ = v___x_1934_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1944_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
else
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1956_; 
v_a_1949_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1951_ = v___x_1931_;
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1931_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1954_; 
if (v_isShared_1952_ == 0)
{
v___x_1954_ = v___x_1951_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_a_1949_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOccursOf___boxed(lean_object* v_x_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Lean_Meta_Grind_Arith_Linear_getOccursOf(v_x_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_, v_a_1965_, v_a_1966_, v_a_1967_, v_a_1968_);
lean_dec(v_a_1968_);
lean_dec_ref(v_a_1967_);
lean_dec(v_a_1966_);
lean_dec_ref(v_a_1965_);
lean_dec(v_a_1964_);
lean_dec_ref(v_a_1963_);
lean_dec(v_a_1962_);
lean_dec_ref(v_a_1961_);
lean_dec(v_a_1960_);
lean_dec(v_a_1959_);
lean_dec(v_a_1958_);
lean_dec(v_x_1957_);
return v_res_1970_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(lean_object* v_k_1971_, lean_object* v_t_1972_){
_start:
{
if (lean_obj_tag(v_t_1972_) == 0)
{
lean_object* v_k_1973_; lean_object* v_l_1974_; lean_object* v_r_1975_; uint8_t v___x_1976_; 
v_k_1973_ = lean_ctor_get(v_t_1972_, 1);
v_l_1974_ = lean_ctor_get(v_t_1972_, 3);
v_r_1975_ = lean_ctor_get(v_t_1972_, 4);
v___x_1976_ = lean_nat_dec_lt(v_k_1971_, v_k_1973_);
if (v___x_1976_ == 0)
{
uint8_t v___x_1977_; 
v___x_1977_ = lean_nat_dec_eq(v_k_1971_, v_k_1973_);
if (v___x_1977_ == 0)
{
v_t_1972_ = v_r_1975_;
goto _start;
}
else
{
return v___x_1977_;
}
}
else
{
v_t_1972_ = v_l_1974_;
goto _start;
}
}
else
{
uint8_t v___x_1980_; 
v___x_1980_ = 0;
return v___x_1980_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg___boxed(lean_object* v_k_1981_, lean_object* v_t_1982_){
_start:
{
uint8_t v_res_1983_; lean_object* v_r_1984_; 
v_res_1983_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(v_k_1981_, v_t_1982_);
lean_dec(v_t_1982_);
lean_dec(v_k_1981_);
v_r_1984_ = lean_box(v_res_1983_);
return v_r_1984_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(lean_object* v_k_1985_, lean_object* v_v_1986_, lean_object* v_t_1987_){
_start:
{
if (lean_obj_tag(v_t_1987_) == 0)
{
lean_object* v_size_1988_; lean_object* v_k_1989_; lean_object* v_v_1990_; lean_object* v_l_1991_; lean_object* v_r_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2273_; 
v_size_1988_ = lean_ctor_get(v_t_1987_, 0);
v_k_1989_ = lean_ctor_get(v_t_1987_, 1);
v_v_1990_ = lean_ctor_get(v_t_1987_, 2);
v_l_1991_ = lean_ctor_get(v_t_1987_, 3);
v_r_1992_ = lean_ctor_get(v_t_1987_, 4);
v_isSharedCheck_2273_ = !lean_is_exclusive(v_t_1987_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_1994_ = v_t_1987_;
v_isShared_1995_ = v_isSharedCheck_2273_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_r_1992_);
lean_inc(v_l_1991_);
lean_inc(v_v_1990_);
lean_inc(v_k_1989_);
lean_inc(v_size_1988_);
lean_dec(v_t_1987_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2273_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
uint8_t v___x_1996_; 
v___x_1996_ = lean_nat_dec_lt(v_k_1985_, v_k_1989_);
if (v___x_1996_ == 0)
{
uint8_t v___x_1997_; 
v___x_1997_ = lean_nat_dec_eq(v_k_1985_, v_k_1989_);
if (v___x_1997_ == 0)
{
lean_object* v_impl_1998_; lean_object* v___x_1999_; 
lean_dec(v_size_1988_);
v_impl_1998_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(v_k_1985_, v_v_1986_, v_r_1992_);
v___x_1999_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1991_) == 0)
{
lean_object* v_size_2000_; lean_object* v_size_2001_; lean_object* v_k_2002_; lean_object* v_v_2003_; lean_object* v_l_2004_; lean_object* v_r_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; uint8_t v___x_2008_; 
v_size_2000_ = lean_ctor_get(v_l_1991_, 0);
v_size_2001_ = lean_ctor_get(v_impl_1998_, 0);
lean_inc(v_size_2001_);
v_k_2002_ = lean_ctor_get(v_impl_1998_, 1);
lean_inc(v_k_2002_);
v_v_2003_ = lean_ctor_get(v_impl_1998_, 2);
lean_inc(v_v_2003_);
v_l_2004_ = lean_ctor_get(v_impl_1998_, 3);
lean_inc(v_l_2004_);
v_r_2005_ = lean_ctor_get(v_impl_1998_, 4);
lean_inc(v_r_2005_);
v___x_2006_ = lean_unsigned_to_nat(3u);
v___x_2007_ = lean_nat_mul(v___x_2006_, v_size_2000_);
v___x_2008_ = lean_nat_dec_lt(v___x_2007_, v_size_2001_);
lean_dec(v___x_2007_);
if (v___x_2008_ == 0)
{
lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2012_; 
lean_dec(v_r_2005_);
lean_dec(v_l_2004_);
lean_dec(v_v_2003_);
lean_dec(v_k_2002_);
v___x_2009_ = lean_nat_add(v___x_1999_, v_size_2000_);
v___x_2010_ = lean_nat_add(v___x_2009_, v_size_2001_);
lean_dec(v_size_2001_);
lean_dec(v___x_2009_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v_impl_1998_);
lean_ctor_set(v___x_1994_, 0, v___x_2010_);
v___x_2012_ = v___x_1994_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2010_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2013_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2013_, 3, v_l_1991_);
lean_ctor_set(v_reuseFailAlloc_2013_, 4, v_impl_1998_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
else
{
lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2077_; 
v_isSharedCheck_2077_ = !lean_is_exclusive(v_impl_1998_);
if (v_isSharedCheck_2077_ == 0)
{
lean_object* v_unused_2078_; lean_object* v_unused_2079_; lean_object* v_unused_2080_; lean_object* v_unused_2081_; lean_object* v_unused_2082_; 
v_unused_2078_ = lean_ctor_get(v_impl_1998_, 4);
lean_dec(v_unused_2078_);
v_unused_2079_ = lean_ctor_get(v_impl_1998_, 3);
lean_dec(v_unused_2079_);
v_unused_2080_ = lean_ctor_get(v_impl_1998_, 2);
lean_dec(v_unused_2080_);
v_unused_2081_ = lean_ctor_get(v_impl_1998_, 1);
lean_dec(v_unused_2081_);
v_unused_2082_ = lean_ctor_get(v_impl_1998_, 0);
lean_dec(v_unused_2082_);
v___x_2015_ = v_impl_1998_;
v_isShared_2016_ = v_isSharedCheck_2077_;
goto v_resetjp_2014_;
}
else
{
lean_dec(v_impl_1998_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2077_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v_size_2017_; lean_object* v_k_2018_; lean_object* v_v_2019_; lean_object* v_l_2020_; lean_object* v_r_2021_; lean_object* v_size_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; uint8_t v___x_2025_; 
v_size_2017_ = lean_ctor_get(v_l_2004_, 0);
v_k_2018_ = lean_ctor_get(v_l_2004_, 1);
v_v_2019_ = lean_ctor_get(v_l_2004_, 2);
v_l_2020_ = lean_ctor_get(v_l_2004_, 3);
v_r_2021_ = lean_ctor_get(v_l_2004_, 4);
v_size_2022_ = lean_ctor_get(v_r_2005_, 0);
v___x_2023_ = lean_unsigned_to_nat(2u);
v___x_2024_ = lean_nat_mul(v___x_2023_, v_size_2022_);
v___x_2025_ = lean_nat_dec_lt(v_size_2017_, v___x_2024_);
lean_dec(v___x_2024_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2053_; 
lean_inc(v_r_2021_);
lean_inc(v_l_2020_);
lean_inc(v_v_2019_);
lean_inc(v_k_2018_);
v_isSharedCheck_2053_ = !lean_is_exclusive(v_l_2004_);
if (v_isSharedCheck_2053_ == 0)
{
lean_object* v_unused_2054_; lean_object* v_unused_2055_; lean_object* v_unused_2056_; lean_object* v_unused_2057_; lean_object* v_unused_2058_; 
v_unused_2054_ = lean_ctor_get(v_l_2004_, 4);
lean_dec(v_unused_2054_);
v_unused_2055_ = lean_ctor_get(v_l_2004_, 3);
lean_dec(v_unused_2055_);
v_unused_2056_ = lean_ctor_get(v_l_2004_, 2);
lean_dec(v_unused_2056_);
v_unused_2057_ = lean_ctor_get(v_l_2004_, 1);
lean_dec(v_unused_2057_);
v_unused_2058_ = lean_ctor_get(v_l_2004_, 0);
lean_dec(v_unused_2058_);
v___x_2027_ = v_l_2004_;
v_isShared_2028_ = v_isSharedCheck_2053_;
goto v_resetjp_2026_;
}
else
{
lean_dec(v_l_2004_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2053_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___y_2032_; lean_object* v___y_2033_; lean_object* v___y_2034_; lean_object* v___y_2043_; 
v___x_2029_ = lean_nat_add(v___x_1999_, v_size_2000_);
v___x_2030_ = lean_nat_add(v___x_2029_, v_size_2001_);
lean_dec(v_size_2001_);
if (lean_obj_tag(v_l_2020_) == 0)
{
lean_object* v_size_2051_; 
v_size_2051_ = lean_ctor_get(v_l_2020_, 0);
lean_inc(v_size_2051_);
v___y_2043_ = v_size_2051_;
goto v___jp_2042_;
}
else
{
lean_object* v___x_2052_; 
v___x_2052_ = lean_unsigned_to_nat(0u);
v___y_2043_ = v___x_2052_;
goto v___jp_2042_;
}
v___jp_2031_:
{
lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2035_ = lean_nat_add(v___y_2032_, v___y_2034_);
lean_dec(v___y_2034_);
lean_dec(v___y_2032_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 4, v_r_2005_);
lean_ctor_set(v___x_2027_, 3, v_r_2021_);
lean_ctor_set(v___x_2027_, 2, v_v_2003_);
lean_ctor_set(v___x_2027_, 1, v_k_2002_);
lean_ctor_set(v___x_2027_, 0, v___x_2035_);
v___x_2037_ = v___x_2027_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v___x_2035_);
lean_ctor_set(v_reuseFailAlloc_2041_, 1, v_k_2002_);
lean_ctor_set(v_reuseFailAlloc_2041_, 2, v_v_2003_);
lean_ctor_set(v_reuseFailAlloc_2041_, 3, v_r_2021_);
lean_ctor_set(v_reuseFailAlloc_2041_, 4, v_r_2005_);
v___x_2037_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
lean_object* v___x_2039_; 
if (v_isShared_2016_ == 0)
{
lean_ctor_set(v___x_2015_, 4, v___x_2037_);
lean_ctor_set(v___x_2015_, 3, v___y_2033_);
lean_ctor_set(v___x_2015_, 2, v_v_2019_);
lean_ctor_set(v___x_2015_, 1, v_k_2018_);
lean_ctor_set(v___x_2015_, 0, v___x_2030_);
v___x_2039_ = v___x_2015_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v___x_2030_);
lean_ctor_set(v_reuseFailAlloc_2040_, 1, v_k_2018_);
lean_ctor_set(v_reuseFailAlloc_2040_, 2, v_v_2019_);
lean_ctor_set(v_reuseFailAlloc_2040_, 3, v___y_2033_);
lean_ctor_set(v_reuseFailAlloc_2040_, 4, v___x_2037_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
v___jp_2042_:
{
lean_object* v___x_2044_; lean_object* v___x_2046_; 
v___x_2044_ = lean_nat_add(v___x_2029_, v___y_2043_);
lean_dec(v___y_2043_);
lean_dec(v___x_2029_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v_l_2020_);
lean_ctor_set(v___x_1994_, 0, v___x_2044_);
v___x_2046_ = v___x_1994_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v___x_2044_);
lean_ctor_set(v_reuseFailAlloc_2050_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2050_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2050_, 3, v_l_1991_);
lean_ctor_set(v_reuseFailAlloc_2050_, 4, v_l_2020_);
v___x_2046_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
lean_object* v___x_2047_; 
v___x_2047_ = lean_nat_add(v___x_1999_, v_size_2022_);
if (lean_obj_tag(v_r_2021_) == 0)
{
lean_object* v_size_2048_; 
v_size_2048_ = lean_ctor_get(v_r_2021_, 0);
lean_inc(v_size_2048_);
v___y_2032_ = v___x_2047_;
v___y_2033_ = v___x_2046_;
v___y_2034_ = v_size_2048_;
goto v___jp_2031_;
}
else
{
lean_object* v___x_2049_; 
v___x_2049_ = lean_unsigned_to_nat(0u);
v___y_2032_ = v___x_2047_;
v___y_2033_ = v___x_2046_;
v___y_2034_ = v___x_2049_;
goto v___jp_2031_;
}
}
}
}
}
else
{
lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2063_; 
lean_del_object(v___x_1994_);
v___x_2059_ = lean_nat_add(v___x_1999_, v_size_2000_);
v___x_2060_ = lean_nat_add(v___x_2059_, v_size_2001_);
lean_dec(v_size_2001_);
v___x_2061_ = lean_nat_add(v___x_2059_, v_size_2017_);
lean_dec(v___x_2059_);
lean_inc_ref(v_l_1991_);
if (v_isShared_2016_ == 0)
{
lean_ctor_set(v___x_2015_, 4, v_l_2004_);
lean_ctor_set(v___x_2015_, 3, v_l_1991_);
lean_ctor_set(v___x_2015_, 2, v_v_1990_);
lean_ctor_set(v___x_2015_, 1, v_k_1989_);
lean_ctor_set(v___x_2015_, 0, v___x_2061_);
v___x_2063_ = v___x_2015_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v___x_2061_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2076_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2076_, 3, v_l_1991_);
lean_ctor_set(v_reuseFailAlloc_2076_, 4, v_l_2004_);
v___x_2063_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
v_isSharedCheck_2070_ = !lean_is_exclusive(v_l_1991_);
if (v_isSharedCheck_2070_ == 0)
{
lean_object* v_unused_2071_; lean_object* v_unused_2072_; lean_object* v_unused_2073_; lean_object* v_unused_2074_; lean_object* v_unused_2075_; 
v_unused_2071_ = lean_ctor_get(v_l_1991_, 4);
lean_dec(v_unused_2071_);
v_unused_2072_ = lean_ctor_get(v_l_1991_, 3);
lean_dec(v_unused_2072_);
v_unused_2073_ = lean_ctor_get(v_l_1991_, 2);
lean_dec(v_unused_2073_);
v_unused_2074_ = lean_ctor_get(v_l_1991_, 1);
lean_dec(v_unused_2074_);
v_unused_2075_ = lean_ctor_get(v_l_1991_, 0);
lean_dec(v_unused_2075_);
v___x_2065_ = v_l_1991_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_dec(v_l_1991_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 4, v_r_2005_);
lean_ctor_set(v___x_2065_, 3, v___x_2063_);
lean_ctor_set(v___x_2065_, 2, v_v_2003_);
lean_ctor_set(v___x_2065_, 1, v_k_2002_);
lean_ctor_set(v___x_2065_, 0, v___x_2060_);
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2060_);
lean_ctor_set(v_reuseFailAlloc_2069_, 1, v_k_2002_);
lean_ctor_set(v_reuseFailAlloc_2069_, 2, v_v_2003_);
lean_ctor_set(v_reuseFailAlloc_2069_, 3, v___x_2063_);
lean_ctor_set(v_reuseFailAlloc_2069_, 4, v_r_2005_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2083_; 
v_l_2083_ = lean_ctor_get(v_impl_1998_, 3);
lean_inc(v_l_2083_);
if (lean_obj_tag(v_l_2083_) == 0)
{
lean_object* v_r_2084_; lean_object* v_k_2085_; lean_object* v_v_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2109_; 
v_r_2084_ = lean_ctor_get(v_impl_1998_, 4);
v_k_2085_ = lean_ctor_get(v_impl_1998_, 1);
v_v_2086_ = lean_ctor_get(v_impl_1998_, 2);
v_isSharedCheck_2109_ = !lean_is_exclusive(v_impl_1998_);
if (v_isSharedCheck_2109_ == 0)
{
lean_object* v_unused_2110_; lean_object* v_unused_2111_; 
v_unused_2110_ = lean_ctor_get(v_impl_1998_, 3);
lean_dec(v_unused_2110_);
v_unused_2111_ = lean_ctor_get(v_impl_1998_, 0);
lean_dec(v_unused_2111_);
v___x_2088_ = v_impl_1998_;
v_isShared_2089_ = v_isSharedCheck_2109_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_r_2084_);
lean_inc(v_v_2086_);
lean_inc(v_k_2085_);
lean_dec(v_impl_1998_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2109_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v_k_2090_; lean_object* v_v_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2105_; 
v_k_2090_ = lean_ctor_get(v_l_2083_, 1);
v_v_2091_ = lean_ctor_get(v_l_2083_, 2);
v_isSharedCheck_2105_ = !lean_is_exclusive(v_l_2083_);
if (v_isSharedCheck_2105_ == 0)
{
lean_object* v_unused_2106_; lean_object* v_unused_2107_; lean_object* v_unused_2108_; 
v_unused_2106_ = lean_ctor_get(v_l_2083_, 4);
lean_dec(v_unused_2106_);
v_unused_2107_ = lean_ctor_get(v_l_2083_, 3);
lean_dec(v_unused_2107_);
v_unused_2108_ = lean_ctor_get(v_l_2083_, 0);
lean_dec(v_unused_2108_);
v___x_2093_ = v_l_2083_;
v_isShared_2094_ = v_isSharedCheck_2105_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_v_2091_);
lean_inc(v_k_2090_);
lean_dec(v_l_2083_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2105_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2095_; lean_object* v___x_2097_; 
v___x_2095_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2084_, 2);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 4, v_r_2084_);
lean_ctor_set(v___x_2093_, 3, v_r_2084_);
lean_ctor_set(v___x_2093_, 2, v_v_1990_);
lean_ctor_set(v___x_2093_, 1, v_k_1989_);
lean_ctor_set(v___x_2093_, 0, v___x_1999_);
v___x_2097_ = v___x_2093_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v___x_1999_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2104_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2104_, 3, v_r_2084_);
lean_ctor_set(v_reuseFailAlloc_2104_, 4, v_r_2084_);
v___x_2097_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
lean_object* v___x_2099_; 
lean_inc(v_r_2084_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 3, v_r_2084_);
lean_ctor_set(v___x_2088_, 0, v___x_1999_);
v___x_2099_ = v___x_2088_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_1999_);
lean_ctor_set(v_reuseFailAlloc_2103_, 1, v_k_2085_);
lean_ctor_set(v_reuseFailAlloc_2103_, 2, v_v_2086_);
lean_ctor_set(v_reuseFailAlloc_2103_, 3, v_r_2084_);
lean_ctor_set(v_reuseFailAlloc_2103_, 4, v_r_2084_);
v___x_2099_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2101_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v___x_2099_);
lean_ctor_set(v___x_1994_, 3, v___x_2097_);
lean_ctor_set(v___x_1994_, 2, v_v_2091_);
lean_ctor_set(v___x_1994_, 1, v_k_2090_);
lean_ctor_set(v___x_1994_, 0, v___x_2095_);
v___x_2101_ = v___x_1994_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2095_);
lean_ctor_set(v_reuseFailAlloc_2102_, 1, v_k_2090_);
lean_ctor_set(v_reuseFailAlloc_2102_, 2, v_v_2091_);
lean_ctor_set(v_reuseFailAlloc_2102_, 3, v___x_2097_);
lean_ctor_set(v_reuseFailAlloc_2102_, 4, v___x_2099_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
}
}
}
}
}
}
else
{
lean_object* v_r_2112_; 
v_r_2112_ = lean_ctor_get(v_impl_1998_, 4);
lean_inc(v_r_2112_);
if (lean_obj_tag(v_r_2112_) == 0)
{
lean_object* v_k_2113_; lean_object* v_v_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2125_; 
v_k_2113_ = lean_ctor_get(v_impl_1998_, 1);
v_v_2114_ = lean_ctor_get(v_impl_1998_, 2);
v_isSharedCheck_2125_ = !lean_is_exclusive(v_impl_1998_);
if (v_isSharedCheck_2125_ == 0)
{
lean_object* v_unused_2126_; lean_object* v_unused_2127_; lean_object* v_unused_2128_; 
v_unused_2126_ = lean_ctor_get(v_impl_1998_, 4);
lean_dec(v_unused_2126_);
v_unused_2127_ = lean_ctor_get(v_impl_1998_, 3);
lean_dec(v_unused_2127_);
v_unused_2128_ = lean_ctor_get(v_impl_1998_, 0);
lean_dec(v_unused_2128_);
v___x_2116_ = v_impl_1998_;
v_isShared_2117_ = v_isSharedCheck_2125_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_v_2114_);
lean_inc(v_k_2113_);
lean_dec(v_impl_1998_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2125_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2118_; lean_object* v___x_2120_; 
v___x_2118_ = lean_unsigned_to_nat(3u);
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 4, v_l_2083_);
lean_ctor_set(v___x_2116_, 2, v_v_1990_);
lean_ctor_set(v___x_2116_, 1, v_k_1989_);
lean_ctor_set(v___x_2116_, 0, v___x_1999_);
v___x_2120_ = v___x_2116_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v___x_1999_);
lean_ctor_set(v_reuseFailAlloc_2124_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2124_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2124_, 3, v_l_2083_);
lean_ctor_set(v_reuseFailAlloc_2124_, 4, v_l_2083_);
v___x_2120_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
lean_object* v___x_2122_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v_r_2112_);
lean_ctor_set(v___x_1994_, 3, v___x_2120_);
lean_ctor_set(v___x_1994_, 2, v_v_2114_);
lean_ctor_set(v___x_1994_, 1, v_k_2113_);
lean_ctor_set(v___x_1994_, 0, v___x_2118_);
v___x_2122_ = v___x_1994_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v___x_2118_);
lean_ctor_set(v_reuseFailAlloc_2123_, 1, v_k_2113_);
lean_ctor_set(v_reuseFailAlloc_2123_, 2, v_v_2114_);
lean_ctor_set(v_reuseFailAlloc_2123_, 3, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2123_, 4, v_r_2112_);
v___x_2122_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
return v___x_2122_;
}
}
}
}
else
{
lean_object* v___x_2129_; lean_object* v___x_2131_; 
v___x_2129_ = lean_unsigned_to_nat(2u);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v_impl_1998_);
lean_ctor_set(v___x_1994_, 3, v_r_2112_);
lean_ctor_set(v___x_1994_, 0, v___x_2129_);
v___x_2131_ = v___x_1994_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v___x_2129_);
lean_ctor_set(v_reuseFailAlloc_2132_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2132_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2132_, 3, v_r_2112_);
lean_ctor_set(v_reuseFailAlloc_2132_, 4, v_impl_1998_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
}
else
{
lean_object* v___x_2134_; 
lean_dec(v_v_1990_);
lean_dec(v_k_1989_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 2, v_v_1986_);
lean_ctor_set(v___x_1994_, 1, v_k_1985_);
v___x_2134_ = v___x_1994_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_size_1988_);
lean_ctor_set(v_reuseFailAlloc_2135_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2135_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2135_, 3, v_l_1991_);
lean_ctor_set(v_reuseFailAlloc_2135_, 4, v_r_1992_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
else
{
lean_object* v_impl_2136_; lean_object* v___x_2137_; 
lean_dec(v_size_1988_);
v_impl_2136_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(v_k_1985_, v_v_1986_, v_l_1991_);
v___x_2137_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1992_) == 0)
{
lean_object* v_size_2138_; lean_object* v_size_2139_; lean_object* v_k_2140_; lean_object* v_v_2141_; lean_object* v_l_2142_; lean_object* v_r_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; uint8_t v___x_2146_; 
v_size_2138_ = lean_ctor_get(v_r_1992_, 0);
v_size_2139_ = lean_ctor_get(v_impl_2136_, 0);
lean_inc(v_size_2139_);
v_k_2140_ = lean_ctor_get(v_impl_2136_, 1);
lean_inc(v_k_2140_);
v_v_2141_ = lean_ctor_get(v_impl_2136_, 2);
lean_inc(v_v_2141_);
v_l_2142_ = lean_ctor_get(v_impl_2136_, 3);
lean_inc(v_l_2142_);
v_r_2143_ = lean_ctor_get(v_impl_2136_, 4);
lean_inc(v_r_2143_);
v___x_2144_ = lean_unsigned_to_nat(3u);
v___x_2145_ = lean_nat_mul(v___x_2144_, v_size_2138_);
v___x_2146_ = lean_nat_dec_lt(v___x_2145_, v_size_2139_);
lean_dec(v___x_2145_);
if (v___x_2146_ == 0)
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2150_; 
lean_dec(v_r_2143_);
lean_dec(v_l_2142_);
lean_dec(v_v_2141_);
lean_dec(v_k_2140_);
v___x_2147_ = lean_nat_add(v___x_2137_, v_size_2139_);
lean_dec(v_size_2139_);
v___x_2148_ = lean_nat_add(v___x_2147_, v_size_2138_);
lean_dec(v___x_2147_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 3, v_impl_2136_);
lean_ctor_set(v___x_1994_, 0, v___x_2148_);
v___x_2150_ = v___x_1994_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2148_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2151_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2151_, 3, v_impl_2136_);
lean_ctor_set(v_reuseFailAlloc_2151_, 4, v_r_1992_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
else
{
lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2217_; 
v_isSharedCheck_2217_ = !lean_is_exclusive(v_impl_2136_);
if (v_isSharedCheck_2217_ == 0)
{
lean_object* v_unused_2218_; lean_object* v_unused_2219_; lean_object* v_unused_2220_; lean_object* v_unused_2221_; lean_object* v_unused_2222_; 
v_unused_2218_ = lean_ctor_get(v_impl_2136_, 4);
lean_dec(v_unused_2218_);
v_unused_2219_ = lean_ctor_get(v_impl_2136_, 3);
lean_dec(v_unused_2219_);
v_unused_2220_ = lean_ctor_get(v_impl_2136_, 2);
lean_dec(v_unused_2220_);
v_unused_2221_ = lean_ctor_get(v_impl_2136_, 1);
lean_dec(v_unused_2221_);
v_unused_2222_ = lean_ctor_get(v_impl_2136_, 0);
lean_dec(v_unused_2222_);
v___x_2153_ = v_impl_2136_;
v_isShared_2154_ = v_isSharedCheck_2217_;
goto v_resetjp_2152_;
}
else
{
lean_dec(v_impl_2136_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2217_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v_size_2155_; lean_object* v_size_2156_; lean_object* v_k_2157_; lean_object* v_v_2158_; lean_object* v_l_2159_; lean_object* v_r_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; uint8_t v___x_2163_; 
v_size_2155_ = lean_ctor_get(v_l_2142_, 0);
v_size_2156_ = lean_ctor_get(v_r_2143_, 0);
v_k_2157_ = lean_ctor_get(v_r_2143_, 1);
v_v_2158_ = lean_ctor_get(v_r_2143_, 2);
v_l_2159_ = lean_ctor_get(v_r_2143_, 3);
v_r_2160_ = lean_ctor_get(v_r_2143_, 4);
v___x_2161_ = lean_unsigned_to_nat(2u);
v___x_2162_ = lean_nat_mul(v___x_2161_, v_size_2155_);
v___x_2163_ = lean_nat_dec_lt(v_size_2156_, v___x_2162_);
lean_dec(v___x_2162_);
if (v___x_2163_ == 0)
{
lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2192_; 
lean_inc(v_r_2160_);
lean_inc(v_l_2159_);
lean_inc(v_v_2158_);
lean_inc(v_k_2157_);
v_isSharedCheck_2192_ = !lean_is_exclusive(v_r_2143_);
if (v_isSharedCheck_2192_ == 0)
{
lean_object* v_unused_2193_; lean_object* v_unused_2194_; lean_object* v_unused_2195_; lean_object* v_unused_2196_; lean_object* v_unused_2197_; 
v_unused_2193_ = lean_ctor_get(v_r_2143_, 4);
lean_dec(v_unused_2193_);
v_unused_2194_ = lean_ctor_get(v_r_2143_, 3);
lean_dec(v_unused_2194_);
v_unused_2195_ = lean_ctor_get(v_r_2143_, 2);
lean_dec(v_unused_2195_);
v_unused_2196_ = lean_ctor_get(v_r_2143_, 1);
lean_dec(v_unused_2196_);
v_unused_2197_ = lean_ctor_get(v_r_2143_, 0);
lean_dec(v_unused_2197_);
v___x_2165_ = v_r_2143_;
v_isShared_2166_ = v_isSharedCheck_2192_;
goto v_resetjp_2164_;
}
else
{
lean_dec(v_r_2143_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2192_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___y_2170_; lean_object* v___y_2171_; lean_object* v___y_2172_; lean_object* v___x_2180_; lean_object* v___y_2182_; 
v___x_2167_ = lean_nat_add(v___x_2137_, v_size_2139_);
lean_dec(v_size_2139_);
v___x_2168_ = lean_nat_add(v___x_2167_, v_size_2138_);
lean_dec(v___x_2167_);
v___x_2180_ = lean_nat_add(v___x_2137_, v_size_2155_);
if (lean_obj_tag(v_l_2159_) == 0)
{
lean_object* v_size_2190_; 
v_size_2190_ = lean_ctor_get(v_l_2159_, 0);
lean_inc(v_size_2190_);
v___y_2182_ = v_size_2190_;
goto v___jp_2181_;
}
else
{
lean_object* v___x_2191_; 
v___x_2191_ = lean_unsigned_to_nat(0u);
v___y_2182_ = v___x_2191_;
goto v___jp_2181_;
}
v___jp_2169_:
{
lean_object* v___x_2173_; lean_object* v___x_2175_; 
v___x_2173_ = lean_nat_add(v___y_2171_, v___y_2172_);
lean_dec(v___y_2172_);
lean_dec(v___y_2171_);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 4, v_r_1992_);
lean_ctor_set(v___x_2165_, 3, v_r_2160_);
lean_ctor_set(v___x_2165_, 2, v_v_1990_);
lean_ctor_set(v___x_2165_, 1, v_k_1989_);
lean_ctor_set(v___x_2165_, 0, v___x_2173_);
v___x_2175_ = v___x_2165_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2173_);
lean_ctor_set(v_reuseFailAlloc_2179_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2179_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2179_, 3, v_r_2160_);
lean_ctor_set(v_reuseFailAlloc_2179_, 4, v_r_1992_);
v___x_2175_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
lean_object* v___x_2177_; 
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 4, v___x_2175_);
lean_ctor_set(v___x_2153_, 3, v___y_2170_);
lean_ctor_set(v___x_2153_, 2, v_v_2158_);
lean_ctor_set(v___x_2153_, 1, v_k_2157_);
lean_ctor_set(v___x_2153_, 0, v___x_2168_);
v___x_2177_ = v___x_2153_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v___x_2168_);
lean_ctor_set(v_reuseFailAlloc_2178_, 1, v_k_2157_);
lean_ctor_set(v_reuseFailAlloc_2178_, 2, v_v_2158_);
lean_ctor_set(v_reuseFailAlloc_2178_, 3, v___y_2170_);
lean_ctor_set(v_reuseFailAlloc_2178_, 4, v___x_2175_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
v___jp_2181_:
{
lean_object* v___x_2183_; lean_object* v___x_2185_; 
v___x_2183_ = lean_nat_add(v___x_2180_, v___y_2182_);
lean_dec(v___y_2182_);
lean_dec(v___x_2180_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v_l_2159_);
lean_ctor_set(v___x_1994_, 3, v_l_2142_);
lean_ctor_set(v___x_1994_, 2, v_v_2141_);
lean_ctor_set(v___x_1994_, 1, v_k_2140_);
lean_ctor_set(v___x_1994_, 0, v___x_2183_);
v___x_2185_ = v___x_1994_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v___x_2183_);
lean_ctor_set(v_reuseFailAlloc_2189_, 1, v_k_2140_);
lean_ctor_set(v_reuseFailAlloc_2189_, 2, v_v_2141_);
lean_ctor_set(v_reuseFailAlloc_2189_, 3, v_l_2142_);
lean_ctor_set(v_reuseFailAlloc_2189_, 4, v_l_2159_);
v___x_2185_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
lean_object* v___x_2186_; 
v___x_2186_ = lean_nat_add(v___x_2137_, v_size_2138_);
if (lean_obj_tag(v_r_2160_) == 0)
{
lean_object* v_size_2187_; 
v_size_2187_ = lean_ctor_get(v_r_2160_, 0);
lean_inc(v_size_2187_);
v___y_2170_ = v___x_2185_;
v___y_2171_ = v___x_2186_;
v___y_2172_ = v_size_2187_;
goto v___jp_2169_;
}
else
{
lean_object* v___x_2188_; 
v___x_2188_ = lean_unsigned_to_nat(0u);
v___y_2170_ = v___x_2185_;
v___y_2171_ = v___x_2186_;
v___y_2172_ = v___x_2188_;
goto v___jp_2169_;
}
}
}
}
}
else
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2203_; 
lean_del_object(v___x_1994_);
v___x_2198_ = lean_nat_add(v___x_2137_, v_size_2139_);
lean_dec(v_size_2139_);
v___x_2199_ = lean_nat_add(v___x_2198_, v_size_2138_);
lean_dec(v___x_2198_);
v___x_2200_ = lean_nat_add(v___x_2137_, v_size_2138_);
v___x_2201_ = lean_nat_add(v___x_2200_, v_size_2156_);
lean_dec(v___x_2200_);
lean_inc_ref(v_r_1992_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 4, v_r_1992_);
lean_ctor_set(v___x_2153_, 3, v_r_2143_);
lean_ctor_set(v___x_2153_, 2, v_v_1990_);
lean_ctor_set(v___x_2153_, 1, v_k_1989_);
lean_ctor_set(v___x_2153_, 0, v___x_2201_);
v___x_2203_ = v___x_2153_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v___x_2201_);
lean_ctor_set(v_reuseFailAlloc_2216_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2216_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2216_, 3, v_r_2143_);
lean_ctor_set(v_reuseFailAlloc_2216_, 4, v_r_1992_);
v___x_2203_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
v_isSharedCheck_2210_ = !lean_is_exclusive(v_r_1992_);
if (v_isSharedCheck_2210_ == 0)
{
lean_object* v_unused_2211_; lean_object* v_unused_2212_; lean_object* v_unused_2213_; lean_object* v_unused_2214_; lean_object* v_unused_2215_; 
v_unused_2211_ = lean_ctor_get(v_r_1992_, 4);
lean_dec(v_unused_2211_);
v_unused_2212_ = lean_ctor_get(v_r_1992_, 3);
lean_dec(v_unused_2212_);
v_unused_2213_ = lean_ctor_get(v_r_1992_, 2);
lean_dec(v_unused_2213_);
v_unused_2214_ = lean_ctor_get(v_r_1992_, 1);
lean_dec(v_unused_2214_);
v_unused_2215_ = lean_ctor_get(v_r_1992_, 0);
lean_dec(v_unused_2215_);
v___x_2205_ = v_r_1992_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_dec(v_r_1992_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 4, v___x_2203_);
lean_ctor_set(v___x_2205_, 3, v_l_2142_);
lean_ctor_set(v___x_2205_, 2, v_v_2141_);
lean_ctor_set(v___x_2205_, 1, v_k_2140_);
lean_ctor_set(v___x_2205_, 0, v___x_2199_);
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2199_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v_k_2140_);
lean_ctor_set(v_reuseFailAlloc_2209_, 2, v_v_2141_);
lean_ctor_set(v_reuseFailAlloc_2209_, 3, v_l_2142_);
lean_ctor_set(v_reuseFailAlloc_2209_, 4, v___x_2203_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2223_; 
v_l_2223_ = lean_ctor_get(v_impl_2136_, 3);
lean_inc(v_l_2223_);
if (lean_obj_tag(v_l_2223_) == 0)
{
lean_object* v_r_2224_; lean_object* v_k_2225_; lean_object* v_v_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2237_; 
v_r_2224_ = lean_ctor_get(v_impl_2136_, 4);
v_k_2225_ = lean_ctor_get(v_impl_2136_, 1);
v_v_2226_ = lean_ctor_get(v_impl_2136_, 2);
v_isSharedCheck_2237_ = !lean_is_exclusive(v_impl_2136_);
if (v_isSharedCheck_2237_ == 0)
{
lean_object* v_unused_2238_; lean_object* v_unused_2239_; 
v_unused_2238_ = lean_ctor_get(v_impl_2136_, 3);
lean_dec(v_unused_2238_);
v_unused_2239_ = lean_ctor_get(v_impl_2136_, 0);
lean_dec(v_unused_2239_);
v___x_2228_ = v_impl_2136_;
v_isShared_2229_ = v_isSharedCheck_2237_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_r_2224_);
lean_inc(v_v_2226_);
lean_inc(v_k_2225_);
lean_dec(v_impl_2136_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2237_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2230_; lean_object* v___x_2232_; 
v___x_2230_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2224_);
if (v_isShared_2229_ == 0)
{
lean_ctor_set(v___x_2228_, 3, v_r_2224_);
lean_ctor_set(v___x_2228_, 2, v_v_1990_);
lean_ctor_set(v___x_2228_, 1, v_k_1989_);
lean_ctor_set(v___x_2228_, 0, v___x_2137_);
v___x_2232_ = v___x_2228_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v___x_2137_);
lean_ctor_set(v_reuseFailAlloc_2236_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2236_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2236_, 3, v_r_2224_);
lean_ctor_set(v_reuseFailAlloc_2236_, 4, v_r_2224_);
v___x_2232_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
lean_object* v___x_2234_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v___x_2232_);
lean_ctor_set(v___x_1994_, 3, v_l_2223_);
lean_ctor_set(v___x_1994_, 2, v_v_2226_);
lean_ctor_set(v___x_1994_, 1, v_k_2225_);
lean_ctor_set(v___x_1994_, 0, v___x_2230_);
v___x_2234_ = v___x_1994_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v___x_2230_);
lean_ctor_set(v_reuseFailAlloc_2235_, 1, v_k_2225_);
lean_ctor_set(v_reuseFailAlloc_2235_, 2, v_v_2226_);
lean_ctor_set(v_reuseFailAlloc_2235_, 3, v_l_2223_);
lean_ctor_set(v_reuseFailAlloc_2235_, 4, v___x_2232_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
}
else
{
lean_object* v_r_2240_; 
v_r_2240_ = lean_ctor_get(v_impl_2136_, 4);
lean_inc(v_r_2240_);
if (lean_obj_tag(v_r_2240_) == 0)
{
lean_object* v_k_2241_; lean_object* v_v_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2265_; 
v_k_2241_ = lean_ctor_get(v_impl_2136_, 1);
v_v_2242_ = lean_ctor_get(v_impl_2136_, 2);
v_isSharedCheck_2265_ = !lean_is_exclusive(v_impl_2136_);
if (v_isSharedCheck_2265_ == 0)
{
lean_object* v_unused_2266_; lean_object* v_unused_2267_; lean_object* v_unused_2268_; 
v_unused_2266_ = lean_ctor_get(v_impl_2136_, 4);
lean_dec(v_unused_2266_);
v_unused_2267_ = lean_ctor_get(v_impl_2136_, 3);
lean_dec(v_unused_2267_);
v_unused_2268_ = lean_ctor_get(v_impl_2136_, 0);
lean_dec(v_unused_2268_);
v___x_2244_ = v_impl_2136_;
v_isShared_2245_ = v_isSharedCheck_2265_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_v_2242_);
lean_inc(v_k_2241_);
lean_dec(v_impl_2136_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2265_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v_k_2246_; lean_object* v_v_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2261_; 
v_k_2246_ = lean_ctor_get(v_r_2240_, 1);
v_v_2247_ = lean_ctor_get(v_r_2240_, 2);
v_isSharedCheck_2261_ = !lean_is_exclusive(v_r_2240_);
if (v_isSharedCheck_2261_ == 0)
{
lean_object* v_unused_2262_; lean_object* v_unused_2263_; lean_object* v_unused_2264_; 
v_unused_2262_ = lean_ctor_get(v_r_2240_, 4);
lean_dec(v_unused_2262_);
v_unused_2263_ = lean_ctor_get(v_r_2240_, 3);
lean_dec(v_unused_2263_);
v_unused_2264_ = lean_ctor_get(v_r_2240_, 0);
lean_dec(v_unused_2264_);
v___x_2249_ = v_r_2240_;
v_isShared_2250_ = v_isSharedCheck_2261_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_v_2247_);
lean_inc(v_k_2246_);
lean_dec(v_r_2240_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2261_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2251_; lean_object* v___x_2253_; 
v___x_2251_ = lean_unsigned_to_nat(3u);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 4, v_l_2223_);
lean_ctor_set(v___x_2249_, 3, v_l_2223_);
lean_ctor_set(v___x_2249_, 2, v_v_2242_);
lean_ctor_set(v___x_2249_, 1, v_k_2241_);
lean_ctor_set(v___x_2249_, 0, v___x_2137_);
v___x_2253_ = v___x_2249_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v___x_2137_);
lean_ctor_set(v_reuseFailAlloc_2260_, 1, v_k_2241_);
lean_ctor_set(v_reuseFailAlloc_2260_, 2, v_v_2242_);
lean_ctor_set(v_reuseFailAlloc_2260_, 3, v_l_2223_);
lean_ctor_set(v_reuseFailAlloc_2260_, 4, v_l_2223_);
v___x_2253_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
lean_object* v___x_2255_; 
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 4, v_l_2223_);
lean_ctor_set(v___x_2244_, 2, v_v_1990_);
lean_ctor_set(v___x_2244_, 1, v_k_1989_);
lean_ctor_set(v___x_2244_, 0, v___x_2137_);
v___x_2255_ = v___x_2244_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2137_);
lean_ctor_set(v_reuseFailAlloc_2259_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2259_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2259_, 3, v_l_2223_);
lean_ctor_set(v_reuseFailAlloc_2259_, 4, v_l_2223_);
v___x_2255_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
lean_object* v___x_2257_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v___x_2255_);
lean_ctor_set(v___x_1994_, 3, v___x_2253_);
lean_ctor_set(v___x_1994_, 2, v_v_2247_);
lean_ctor_set(v___x_1994_, 1, v_k_2246_);
lean_ctor_set(v___x_1994_, 0, v___x_2251_);
v___x_2257_ = v___x_1994_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v___x_2251_);
lean_ctor_set(v_reuseFailAlloc_2258_, 1, v_k_2246_);
lean_ctor_set(v_reuseFailAlloc_2258_, 2, v_v_2247_);
lean_ctor_set(v_reuseFailAlloc_2258_, 3, v___x_2253_);
lean_ctor_set(v_reuseFailAlloc_2258_, 4, v___x_2255_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
return v___x_2257_;
}
}
}
}
}
}
else
{
lean_object* v___x_2269_; lean_object* v___x_2271_; 
v___x_2269_ = lean_unsigned_to_nat(2u);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v_r_2240_);
lean_ctor_set(v___x_1994_, 3, v_impl_2136_);
lean_ctor_set(v___x_1994_, 0, v___x_2269_);
v___x_2271_ = v___x_1994_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v___x_2269_);
lean_ctor_set(v_reuseFailAlloc_2272_, 1, v_k_1989_);
lean_ctor_set(v_reuseFailAlloc_2272_, 2, v_v_1990_);
lean_ctor_set(v_reuseFailAlloc_2272_, 3, v_impl_2136_);
lean_ctor_set(v_reuseFailAlloc_2272_, 4, v_r_2240_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2274_ = lean_unsigned_to_nat(1u);
v___x_2275_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
lean_ctor_set(v___x_2275_, 1, v_k_1985_);
lean_ctor_set(v___x_2275_, 2, v_v_1986_);
lean_ctor_set(v___x_2275_, 3, v_t_1987_);
lean_ctor_set(v___x_2275_, 4, v_t_1987_);
return v___x_2275_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2(lean_object* v_y_2276_, lean_object* v_x_2277_, size_t v_x_2278_, size_t v_x_2279_){
_start:
{
if (lean_obj_tag(v_x_2277_) == 0)
{
lean_object* v_cs_2280_; size_t v_j_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; uint8_t v___x_2284_; 
v_cs_2280_ = lean_ctor_get(v_x_2277_, 0);
v_j_2281_ = lean_usize_shift_right(v_x_2278_, v_x_2279_);
v___x_2282_ = lean_usize_to_nat(v_j_2281_);
v___x_2283_ = lean_array_get_size(v_cs_2280_);
v___x_2284_ = lean_nat_dec_lt(v___x_2282_, v___x_2283_);
if (v___x_2284_ == 0)
{
lean_dec(v___x_2282_);
lean_dec(v_y_2276_);
return v_x_2277_;
}
else
{
lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2302_; 
lean_inc_ref(v_cs_2280_);
v_isSharedCheck_2302_ = !lean_is_exclusive(v_x_2277_);
if (v_isSharedCheck_2302_ == 0)
{
lean_object* v_unused_2303_; 
v_unused_2303_ = lean_ctor_get(v_x_2277_, 0);
lean_dec(v_unused_2303_);
v___x_2286_ = v_x_2277_;
v_isShared_2287_ = v_isSharedCheck_2302_;
goto v_resetjp_2285_;
}
else
{
lean_dec(v_x_2277_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2302_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
size_t v___x_2288_; size_t v___x_2289_; size_t v___x_2290_; size_t v_i_2291_; size_t v___x_2292_; size_t v_shift_2293_; lean_object* v_v_2294_; lean_object* v___x_2295_; lean_object* v_xs_x27_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2300_; 
v___x_2288_ = ((size_t)1ULL);
v___x_2289_ = lean_usize_shift_left(v___x_2288_, v_x_2279_);
v___x_2290_ = lean_usize_sub(v___x_2289_, v___x_2288_);
v_i_2291_ = lean_usize_land(v_x_2278_, v___x_2290_);
v___x_2292_ = ((size_t)5ULL);
v_shift_2293_ = lean_usize_sub(v_x_2279_, v___x_2292_);
v_v_2294_ = lean_array_fget(v_cs_2280_, v___x_2282_);
v___x_2295_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0);
v_xs_x27_2296_ = lean_array_fset(v_cs_2280_, v___x_2282_, v___x_2295_);
v___x_2297_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2(v_y_2276_, v_v_2294_, v_i_2291_, v_shift_2293_);
v___x_2298_ = lean_array_fset(v_xs_x27_2296_, v___x_2282_, v___x_2297_);
lean_dec(v___x_2282_);
if (v_isShared_2287_ == 0)
{
lean_ctor_set(v___x_2286_, 0, v___x_2298_);
v___x_2300_ = v___x_2286_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v___x_2298_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
}
else
{
lean_object* v_vs_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; uint8_t v___x_2307_; 
v_vs_2304_ = lean_ctor_get(v_x_2277_, 0);
v___x_2305_ = lean_usize_to_nat(v_x_2278_);
v___x_2306_ = lean_array_get_size(v_vs_2304_);
v___x_2307_ = lean_nat_dec_lt(v___x_2305_, v___x_2306_);
if (v___x_2307_ == 0)
{
lean_dec(v___x_2305_);
lean_dec(v_y_2276_);
return v_x_2277_;
}
else
{
lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2323_; 
lean_inc_ref(v_vs_2304_);
v_isSharedCheck_2323_ = !lean_is_exclusive(v_x_2277_);
if (v_isSharedCheck_2323_ == 0)
{
lean_object* v_unused_2324_; 
v_unused_2324_ = lean_ctor_get(v_x_2277_, 0);
lean_dec(v_unused_2324_);
v___x_2309_ = v_x_2277_;
v_isShared_2310_ = v_isSharedCheck_2323_;
goto v_resetjp_2308_;
}
else
{
lean_dec(v_x_2277_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2323_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v_v_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v_xs_x27_2314_; lean_object* v___y_2316_; uint8_t v___x_2321_; 
v_v_2311_ = lean_array_fget(v_vs_2304_, v___x_2305_);
v___x_2312_ = lean_box(0);
v___x_2313_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0);
v_xs_x27_2314_ = lean_array_fset(v_vs_2304_, v___x_2305_, v___x_2313_);
v___x_2321_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(v_y_2276_, v_v_2311_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2322_; 
v___x_2322_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(v_y_2276_, v___x_2312_, v_v_2311_);
v___y_2316_ = v___x_2322_;
goto v___jp_2315_;
}
else
{
lean_dec(v_y_2276_);
v___y_2316_ = v_v_2311_;
goto v___jp_2315_;
}
v___jp_2315_:
{
lean_object* v___x_2317_; lean_object* v___x_2319_; 
v___x_2317_ = lean_array_fset(v_xs_x27_2314_, v___x_2305_, v___y_2316_);
lean_dec(v___x_2305_);
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 0, v___x_2317_);
v___x_2319_ = v___x_2309_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v___x_2317_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2___boxed(lean_object* v_y_2325_, lean_object* v_x_2326_, lean_object* v_x_2327_, lean_object* v_x_2328_){
_start:
{
size_t v_x_5182__boxed_2329_; size_t v_x_5183__boxed_2330_; lean_object* v_res_2331_; 
v_x_5182__boxed_2329_ = lean_unbox_usize(v_x_2327_);
lean_dec(v_x_2327_);
v_x_5183__boxed_2330_ = lean_unbox_usize(v_x_2328_);
lean_dec(v_x_2328_);
v_res_2331_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2(v_y_2325_, v_x_2326_, v_x_5182__boxed_2329_, v_x_5183__boxed_2330_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2(lean_object* v_y_2332_, lean_object* v_t_2333_, lean_object* v_i_2334_){
_start:
{
lean_object* v_root_2335_; lean_object* v_tail_2336_; lean_object* v_size_2337_; size_t v_shift_2338_; lean_object* v_tailOff_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2367_; 
v_root_2335_ = lean_ctor_get(v_t_2333_, 0);
v_tail_2336_ = lean_ctor_get(v_t_2333_, 1);
v_size_2337_ = lean_ctor_get(v_t_2333_, 2);
v_shift_2338_ = lean_ctor_get_usize(v_t_2333_, 4);
v_tailOff_2339_ = lean_ctor_get(v_t_2333_, 3);
v_isSharedCheck_2367_ = !lean_is_exclusive(v_t_2333_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2341_ = v_t_2333_;
v_isShared_2342_ = v_isSharedCheck_2367_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_tailOff_2339_);
lean_inc(v_size_2337_);
lean_inc(v_tail_2336_);
lean_inc(v_root_2335_);
lean_dec(v_t_2333_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2367_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
uint8_t v___x_2343_; 
v___x_2343_ = lean_nat_dec_le(v_tailOff_2339_, v_i_2334_);
if (v___x_2343_ == 0)
{
size_t v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2347_; 
v___x_2344_ = lean_usize_of_nat(v_i_2334_);
v___x_2345_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2(v_y_2332_, v_root_2335_, v___x_2344_, v_shift_2338_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v___x_2345_);
v___x_2347_ = v___x_2341_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v___x_2345_);
lean_ctor_set(v_reuseFailAlloc_2348_, 1, v_tail_2336_);
lean_ctor_set(v_reuseFailAlloc_2348_, 2, v_size_2337_);
lean_ctor_set(v_reuseFailAlloc_2348_, 3, v_tailOff_2339_);
lean_ctor_set_usize(v_reuseFailAlloc_2348_, 4, v_shift_2338_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
else
{
lean_object* v___x_2349_; lean_object* v___x_2350_; uint8_t v___x_2351_; 
v___x_2349_ = lean_nat_sub(v_i_2334_, v_tailOff_2339_);
v___x_2350_ = lean_array_get_size(v_tail_2336_);
v___x_2351_ = lean_nat_dec_lt(v___x_2349_, v___x_2350_);
if (v___x_2351_ == 0)
{
lean_object* v___x_2353_; 
lean_dec(v___x_2349_);
lean_dec(v_y_2332_);
if (v_isShared_2342_ == 0)
{
v___x_2353_ = v___x_2341_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_root_2335_);
lean_ctor_set(v_reuseFailAlloc_2354_, 1, v_tail_2336_);
lean_ctor_set(v_reuseFailAlloc_2354_, 2, v_size_2337_);
lean_ctor_set(v_reuseFailAlloc_2354_, 3, v_tailOff_2339_);
lean_ctor_set_usize(v_reuseFailAlloc_2354_, 4, v_shift_2338_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
else
{
lean_object* v_v_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v_xs_x27_2358_; lean_object* v___y_2360_; uint8_t v___x_2365_; 
v_v_2355_ = lean_array_fget(v_tail_2336_, v___x_2349_);
v___x_2356_ = lean_box(0);
v___x_2357_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0);
v_xs_x27_2358_ = lean_array_fset(v_tail_2336_, v___x_2349_, v___x_2357_);
v___x_2365_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(v_y_2332_, v_v_2355_);
if (v___x_2365_ == 0)
{
lean_object* v___x_2366_; 
v___x_2366_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(v_y_2332_, v___x_2356_, v_v_2355_);
v___y_2360_ = v___x_2366_;
goto v___jp_2359_;
}
else
{
lean_dec(v_y_2332_);
v___y_2360_ = v_v_2355_;
goto v___jp_2359_;
}
v___jp_2359_:
{
lean_object* v___x_2361_; lean_object* v___x_2363_; 
v___x_2361_ = lean_array_fset(v_xs_x27_2358_, v___x_2349_, v___y_2360_);
lean_dec(v___x_2349_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 1, v___x_2361_);
v___x_2363_ = v___x_2341_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_root_2335_);
lean_ctor_set(v_reuseFailAlloc_2364_, 1, v___x_2361_);
lean_ctor_set(v_reuseFailAlloc_2364_, 2, v_size_2337_);
lean_ctor_set(v_reuseFailAlloc_2364_, 3, v_tailOff_2339_);
lean_ctor_set_usize(v_reuseFailAlloc_2364_, 4, v_shift_2338_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2___boxed(lean_object* v_y_2368_, lean_object* v_t_2369_, lean_object* v_i_2370_){
_start:
{
lean_object* v_res_2371_; 
v_res_2371_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2(v_y_2368_, v_t_2369_, v_i_2370_);
lean_dec(v_i_2370_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0(lean_object* v_a_2372_, lean_object* v_y_2373_, lean_object* v_x_2374_, lean_object* v_s_2375_){
_start:
{
lean_object* v_structs_2376_; lean_object* v_typeIdOf_2377_; lean_object* v_exprToStructId_2378_; lean_object* v_exprToStructIdEntries_2379_; lean_object* v_forbiddenNatModules_2380_; lean_object* v_natStructs_2381_; lean_object* v_natTypeIdOf_2382_; lean_object* v_exprToNatStructId_2383_; lean_object* v___x_2384_; uint8_t v___x_2385_; 
v_structs_2376_ = lean_ctor_get(v_s_2375_, 0);
v_typeIdOf_2377_ = lean_ctor_get(v_s_2375_, 1);
v_exprToStructId_2378_ = lean_ctor_get(v_s_2375_, 2);
v_exprToStructIdEntries_2379_ = lean_ctor_get(v_s_2375_, 3);
v_forbiddenNatModules_2380_ = lean_ctor_get(v_s_2375_, 4);
v_natStructs_2381_ = lean_ctor_get(v_s_2375_, 5);
v_natTypeIdOf_2382_ = lean_ctor_get(v_s_2375_, 6);
v_exprToNatStructId_2383_ = lean_ctor_get(v_s_2375_, 7);
v___x_2384_ = lean_array_get_size(v_structs_2376_);
v___x_2385_ = lean_nat_dec_lt(v_a_2372_, v___x_2384_);
if (v___x_2385_ == 0)
{
lean_dec(v_y_2373_);
return v_s_2375_;
}
else
{
lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2447_; 
lean_inc_ref(v_exprToNatStructId_2383_);
lean_inc_ref(v_natTypeIdOf_2382_);
lean_inc_ref(v_natStructs_2381_);
lean_inc_ref(v_forbiddenNatModules_2380_);
lean_inc_ref(v_exprToStructIdEntries_2379_);
lean_inc_ref(v_exprToStructId_2378_);
lean_inc_ref(v_typeIdOf_2377_);
lean_inc_ref(v_structs_2376_);
v_isSharedCheck_2447_ = !lean_is_exclusive(v_s_2375_);
if (v_isSharedCheck_2447_ == 0)
{
lean_object* v_unused_2448_; lean_object* v_unused_2449_; lean_object* v_unused_2450_; lean_object* v_unused_2451_; lean_object* v_unused_2452_; lean_object* v_unused_2453_; lean_object* v_unused_2454_; lean_object* v_unused_2455_; 
v_unused_2448_ = lean_ctor_get(v_s_2375_, 7);
lean_dec(v_unused_2448_);
v_unused_2449_ = lean_ctor_get(v_s_2375_, 6);
lean_dec(v_unused_2449_);
v_unused_2450_ = lean_ctor_get(v_s_2375_, 5);
lean_dec(v_unused_2450_);
v_unused_2451_ = lean_ctor_get(v_s_2375_, 4);
lean_dec(v_unused_2451_);
v_unused_2452_ = lean_ctor_get(v_s_2375_, 3);
lean_dec(v_unused_2452_);
v_unused_2453_ = lean_ctor_get(v_s_2375_, 2);
lean_dec(v_unused_2453_);
v_unused_2454_ = lean_ctor_get(v_s_2375_, 1);
lean_dec(v_unused_2454_);
v_unused_2455_ = lean_ctor_get(v_s_2375_, 0);
lean_dec(v_unused_2455_);
v___x_2387_ = v_s_2375_;
v_isShared_2388_ = v_isSharedCheck_2447_;
goto v_resetjp_2386_;
}
else
{
lean_dec(v_s_2375_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2447_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v_v_2389_; lean_object* v_id_2390_; lean_object* v_ringId_x3f_2391_; lean_object* v_type_2392_; lean_object* v_u_2393_; lean_object* v_intModuleInst_2394_; lean_object* v_leInst_x3f_2395_; lean_object* v_ltInst_x3f_2396_; lean_object* v_lawfulOrderLTInst_x3f_2397_; lean_object* v_isPreorderInst_x3f_2398_; lean_object* v_orderedAddInst_x3f_2399_; lean_object* v_isLinearInst_x3f_2400_; lean_object* v_noNatDivInst_x3f_2401_; lean_object* v_ringInst_x3f_2402_; lean_object* v_commRingInst_x3f_2403_; lean_object* v_orderedRingInst_x3f_2404_; lean_object* v_fieldInst_x3f_2405_; lean_object* v_charInst_x3f_2406_; lean_object* v_zero_2407_; lean_object* v_ofNatZero_2408_; lean_object* v_one_x3f_2409_; lean_object* v_leFn_x3f_2410_; lean_object* v_ltFn_x3f_2411_; lean_object* v_addFn_2412_; lean_object* v_zsmulFn_2413_; lean_object* v_nsmulFn_2414_; lean_object* v_zsmulFn_x3f_2415_; lean_object* v_nsmulFn_x3f_2416_; lean_object* v_homomulFn_x3f_2417_; lean_object* v_subFn_2418_; lean_object* v_negFn_2419_; lean_object* v_vars_2420_; lean_object* v_varMap_2421_; lean_object* v_lowers_2422_; lean_object* v_uppers_2423_; lean_object* v_diseqs_2424_; lean_object* v_assignment_2425_; uint8_t v_caseSplits_2426_; lean_object* v_conflict_x3f_2427_; lean_object* v_diseqSplits_2428_; lean_object* v_elimEqs_2429_; lean_object* v_elimStack_2430_; lean_object* v_occurs_2431_; lean_object* v_ignored_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2446_; 
v_v_2389_ = lean_array_fget(v_structs_2376_, v_a_2372_);
v_id_2390_ = lean_ctor_get(v_v_2389_, 0);
v_ringId_x3f_2391_ = lean_ctor_get(v_v_2389_, 1);
v_type_2392_ = lean_ctor_get(v_v_2389_, 2);
v_u_2393_ = lean_ctor_get(v_v_2389_, 3);
v_intModuleInst_2394_ = lean_ctor_get(v_v_2389_, 4);
v_leInst_x3f_2395_ = lean_ctor_get(v_v_2389_, 5);
v_ltInst_x3f_2396_ = lean_ctor_get(v_v_2389_, 6);
v_lawfulOrderLTInst_x3f_2397_ = lean_ctor_get(v_v_2389_, 7);
v_isPreorderInst_x3f_2398_ = lean_ctor_get(v_v_2389_, 8);
v_orderedAddInst_x3f_2399_ = lean_ctor_get(v_v_2389_, 9);
v_isLinearInst_x3f_2400_ = lean_ctor_get(v_v_2389_, 10);
v_noNatDivInst_x3f_2401_ = lean_ctor_get(v_v_2389_, 11);
v_ringInst_x3f_2402_ = lean_ctor_get(v_v_2389_, 12);
v_commRingInst_x3f_2403_ = lean_ctor_get(v_v_2389_, 13);
v_orderedRingInst_x3f_2404_ = lean_ctor_get(v_v_2389_, 14);
v_fieldInst_x3f_2405_ = lean_ctor_get(v_v_2389_, 15);
v_charInst_x3f_2406_ = lean_ctor_get(v_v_2389_, 16);
v_zero_2407_ = lean_ctor_get(v_v_2389_, 17);
v_ofNatZero_2408_ = lean_ctor_get(v_v_2389_, 18);
v_one_x3f_2409_ = lean_ctor_get(v_v_2389_, 19);
v_leFn_x3f_2410_ = lean_ctor_get(v_v_2389_, 20);
v_ltFn_x3f_2411_ = lean_ctor_get(v_v_2389_, 21);
v_addFn_2412_ = lean_ctor_get(v_v_2389_, 22);
v_zsmulFn_2413_ = lean_ctor_get(v_v_2389_, 23);
v_nsmulFn_2414_ = lean_ctor_get(v_v_2389_, 24);
v_zsmulFn_x3f_2415_ = lean_ctor_get(v_v_2389_, 25);
v_nsmulFn_x3f_2416_ = lean_ctor_get(v_v_2389_, 26);
v_homomulFn_x3f_2417_ = lean_ctor_get(v_v_2389_, 27);
v_subFn_2418_ = lean_ctor_get(v_v_2389_, 28);
v_negFn_2419_ = lean_ctor_get(v_v_2389_, 29);
v_vars_2420_ = lean_ctor_get(v_v_2389_, 30);
v_varMap_2421_ = lean_ctor_get(v_v_2389_, 31);
v_lowers_2422_ = lean_ctor_get(v_v_2389_, 32);
v_uppers_2423_ = lean_ctor_get(v_v_2389_, 33);
v_diseqs_2424_ = lean_ctor_get(v_v_2389_, 34);
v_assignment_2425_ = lean_ctor_get(v_v_2389_, 35);
v_caseSplits_2426_ = lean_ctor_get_uint8(v_v_2389_, sizeof(void*)*42);
v_conflict_x3f_2427_ = lean_ctor_get(v_v_2389_, 36);
v_diseqSplits_2428_ = lean_ctor_get(v_v_2389_, 37);
v_elimEqs_2429_ = lean_ctor_get(v_v_2389_, 38);
v_elimStack_2430_ = lean_ctor_get(v_v_2389_, 39);
v_occurs_2431_ = lean_ctor_get(v_v_2389_, 40);
v_ignored_2432_ = lean_ctor_get(v_v_2389_, 41);
v_isSharedCheck_2446_ = !lean_is_exclusive(v_v_2389_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2434_ = v_v_2389_;
v_isShared_2435_ = v_isSharedCheck_2446_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_ignored_2432_);
lean_inc(v_occurs_2431_);
lean_inc(v_elimStack_2430_);
lean_inc(v_elimEqs_2429_);
lean_inc(v_diseqSplits_2428_);
lean_inc(v_conflict_x3f_2427_);
lean_inc(v_assignment_2425_);
lean_inc(v_diseqs_2424_);
lean_inc(v_uppers_2423_);
lean_inc(v_lowers_2422_);
lean_inc(v_varMap_2421_);
lean_inc(v_vars_2420_);
lean_inc(v_negFn_2419_);
lean_inc(v_subFn_2418_);
lean_inc(v_homomulFn_x3f_2417_);
lean_inc(v_nsmulFn_x3f_2416_);
lean_inc(v_zsmulFn_x3f_2415_);
lean_inc(v_nsmulFn_2414_);
lean_inc(v_zsmulFn_2413_);
lean_inc(v_addFn_2412_);
lean_inc(v_ltFn_x3f_2411_);
lean_inc(v_leFn_x3f_2410_);
lean_inc(v_one_x3f_2409_);
lean_inc(v_ofNatZero_2408_);
lean_inc(v_zero_2407_);
lean_inc(v_charInst_x3f_2406_);
lean_inc(v_fieldInst_x3f_2405_);
lean_inc(v_orderedRingInst_x3f_2404_);
lean_inc(v_commRingInst_x3f_2403_);
lean_inc(v_ringInst_x3f_2402_);
lean_inc(v_noNatDivInst_x3f_2401_);
lean_inc(v_isLinearInst_x3f_2400_);
lean_inc(v_orderedAddInst_x3f_2399_);
lean_inc(v_isPreorderInst_x3f_2398_);
lean_inc(v_lawfulOrderLTInst_x3f_2397_);
lean_inc(v_ltInst_x3f_2396_);
lean_inc(v_leInst_x3f_2395_);
lean_inc(v_intModuleInst_2394_);
lean_inc(v_u_2393_);
lean_inc(v_type_2392_);
lean_inc(v_ringId_x3f_2391_);
lean_inc(v_id_2390_);
lean_dec(v_v_2389_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2446_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2436_; lean_object* v_xs_x27_2437_; lean_object* v___x_2438_; lean_object* v___x_2440_; 
v___x_2436_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0);
v_xs_x27_2437_ = lean_array_fset(v_structs_2376_, v_a_2372_, v___x_2436_);
v___x_2438_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2(v_y_2373_, v_occurs_2431_, v_x_2374_);
if (v_isShared_2435_ == 0)
{
lean_ctor_set(v___x_2434_, 40, v___x_2438_);
v___x_2440_ = v___x_2434_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v_id_2390_);
lean_ctor_set(v_reuseFailAlloc_2445_, 1, v_ringId_x3f_2391_);
lean_ctor_set(v_reuseFailAlloc_2445_, 2, v_type_2392_);
lean_ctor_set(v_reuseFailAlloc_2445_, 3, v_u_2393_);
lean_ctor_set(v_reuseFailAlloc_2445_, 4, v_intModuleInst_2394_);
lean_ctor_set(v_reuseFailAlloc_2445_, 5, v_leInst_x3f_2395_);
lean_ctor_set(v_reuseFailAlloc_2445_, 6, v_ltInst_x3f_2396_);
lean_ctor_set(v_reuseFailAlloc_2445_, 7, v_lawfulOrderLTInst_x3f_2397_);
lean_ctor_set(v_reuseFailAlloc_2445_, 8, v_isPreorderInst_x3f_2398_);
lean_ctor_set(v_reuseFailAlloc_2445_, 9, v_orderedAddInst_x3f_2399_);
lean_ctor_set(v_reuseFailAlloc_2445_, 10, v_isLinearInst_x3f_2400_);
lean_ctor_set(v_reuseFailAlloc_2445_, 11, v_noNatDivInst_x3f_2401_);
lean_ctor_set(v_reuseFailAlloc_2445_, 12, v_ringInst_x3f_2402_);
lean_ctor_set(v_reuseFailAlloc_2445_, 13, v_commRingInst_x3f_2403_);
lean_ctor_set(v_reuseFailAlloc_2445_, 14, v_orderedRingInst_x3f_2404_);
lean_ctor_set(v_reuseFailAlloc_2445_, 15, v_fieldInst_x3f_2405_);
lean_ctor_set(v_reuseFailAlloc_2445_, 16, v_charInst_x3f_2406_);
lean_ctor_set(v_reuseFailAlloc_2445_, 17, v_zero_2407_);
lean_ctor_set(v_reuseFailAlloc_2445_, 18, v_ofNatZero_2408_);
lean_ctor_set(v_reuseFailAlloc_2445_, 19, v_one_x3f_2409_);
lean_ctor_set(v_reuseFailAlloc_2445_, 20, v_leFn_x3f_2410_);
lean_ctor_set(v_reuseFailAlloc_2445_, 21, v_ltFn_x3f_2411_);
lean_ctor_set(v_reuseFailAlloc_2445_, 22, v_addFn_2412_);
lean_ctor_set(v_reuseFailAlloc_2445_, 23, v_zsmulFn_2413_);
lean_ctor_set(v_reuseFailAlloc_2445_, 24, v_nsmulFn_2414_);
lean_ctor_set(v_reuseFailAlloc_2445_, 25, v_zsmulFn_x3f_2415_);
lean_ctor_set(v_reuseFailAlloc_2445_, 26, v_nsmulFn_x3f_2416_);
lean_ctor_set(v_reuseFailAlloc_2445_, 27, v_homomulFn_x3f_2417_);
lean_ctor_set(v_reuseFailAlloc_2445_, 28, v_subFn_2418_);
lean_ctor_set(v_reuseFailAlloc_2445_, 29, v_negFn_2419_);
lean_ctor_set(v_reuseFailAlloc_2445_, 30, v_vars_2420_);
lean_ctor_set(v_reuseFailAlloc_2445_, 31, v_varMap_2421_);
lean_ctor_set(v_reuseFailAlloc_2445_, 32, v_lowers_2422_);
lean_ctor_set(v_reuseFailAlloc_2445_, 33, v_uppers_2423_);
lean_ctor_set(v_reuseFailAlloc_2445_, 34, v_diseqs_2424_);
lean_ctor_set(v_reuseFailAlloc_2445_, 35, v_assignment_2425_);
lean_ctor_set(v_reuseFailAlloc_2445_, 36, v_conflict_x3f_2427_);
lean_ctor_set(v_reuseFailAlloc_2445_, 37, v_diseqSplits_2428_);
lean_ctor_set(v_reuseFailAlloc_2445_, 38, v_elimEqs_2429_);
lean_ctor_set(v_reuseFailAlloc_2445_, 39, v_elimStack_2430_);
lean_ctor_set(v_reuseFailAlloc_2445_, 40, v___x_2438_);
lean_ctor_set(v_reuseFailAlloc_2445_, 41, v_ignored_2432_);
lean_ctor_set_uint8(v_reuseFailAlloc_2445_, sizeof(void*)*42, v_caseSplits_2426_);
v___x_2440_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
lean_object* v___x_2441_; lean_object* v___x_2443_; 
v___x_2441_ = lean_array_fset(v_xs_x27_2437_, v_a_2372_, v___x_2440_);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 0, v___x_2441_);
v___x_2443_ = v___x_2387_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2441_);
lean_ctor_set(v_reuseFailAlloc_2444_, 1, v_typeIdOf_2377_);
lean_ctor_set(v_reuseFailAlloc_2444_, 2, v_exprToStructId_2378_);
lean_ctor_set(v_reuseFailAlloc_2444_, 3, v_exprToStructIdEntries_2379_);
lean_ctor_set(v_reuseFailAlloc_2444_, 4, v_forbiddenNatModules_2380_);
lean_ctor_set(v_reuseFailAlloc_2444_, 5, v_natStructs_2381_);
lean_ctor_set(v_reuseFailAlloc_2444_, 6, v_natTypeIdOf_2382_);
lean_ctor_set(v_reuseFailAlloc_2444_, 7, v_exprToNatStructId_2383_);
v___x_2443_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
return v___x_2443_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0___boxed(lean_object* v_a_2456_, lean_object* v_y_2457_, lean_object* v_x_2458_, lean_object* v_s_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0(v_a_2456_, v_y_2457_, v_x_2458_, v_s_2459_);
lean_dec(v_x_2458_);
lean_dec(v_a_2456_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc(lean_object* v_x_2461_, lean_object* v_y_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_){
_start:
{
lean_object* v___f_2475_; lean_object* v___x_2476_; 
lean_inc(v_x_2461_);
lean_inc(v_y_2462_);
lean_inc(v_a_2463_);
v___f_2475_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2475_, 0, v_a_2463_);
lean_closure_set(v___f_2475_, 1, v_y_2462_);
lean_closure_set(v___f_2475_, 2, v_x_2461_);
v___x_2476_ = l_Lean_Meta_Grind_Arith_Linear_getOccursOf(v_x_2461_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_);
lean_dec(v_x_2461_);
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_object* v_a_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2488_; 
v_a_2477_ = lean_ctor_get(v___x_2476_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2476_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2479_ = v___x_2476_;
v_isShared_2480_ = v_isSharedCheck_2488_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_a_2477_);
lean_dec(v___x_2476_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2488_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
uint8_t v___x_2481_; 
v___x_2481_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(v_y_2462_, v_a_2477_);
lean_dec(v_a_2477_);
lean_dec(v_y_2462_);
if (v___x_2481_ == 0)
{
lean_object* v___x_2482_; lean_object* v___x_2483_; 
lean_del_object(v___x_2479_);
v___x_2482_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_2483_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2482_, v___f_2475_, v_a_2464_);
return v___x_2483_;
}
else
{
lean_object* v___x_2484_; lean_object* v___x_2486_; 
lean_dec_ref(v___f_2475_);
v___x_2484_ = lean_box(0);
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 0, v___x_2484_);
v___x_2486_ = v___x_2479_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2484_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
else
{
lean_object* v_a_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2496_; 
lean_dec_ref(v___f_2475_);
lean_dec(v_y_2462_);
v_a_2489_ = lean_ctor_get(v___x_2476_, 0);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2476_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2491_ = v___x_2476_;
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_a_2489_);
lean_dec(v___x_2476_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2494_; 
if (v_isShared_2492_ == 0)
{
v___x_2494_ = v___x_2491_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_a_2489_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___boxed(lean_object* v_x_2497_, lean_object* v_y_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_, lean_object* v_a_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l_Lean_Meta_Grind_Arith_Linear_addOcc(v_x_2497_, v_y_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_, v_a_2509_);
lean_dec(v_a_2509_);
lean_dec_ref(v_a_2508_);
lean_dec(v_a_2507_);
lean_dec_ref(v_a_2506_);
lean_dec(v_a_2505_);
lean_dec_ref(v_a_2504_);
lean_dec(v_a_2503_);
lean_dec_ref(v_a_2502_);
lean_dec(v_a_2501_);
lean_dec(v_a_2500_);
lean_dec(v_a_2499_);
return v_res_2511_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0(lean_object* v_00_u03b2_2512_, lean_object* v_k_2513_, lean_object* v_t_2514_){
_start:
{
uint8_t v___x_2515_; 
v___x_2515_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(v_k_2513_, v_t_2514_);
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___boxed(lean_object* v_00_u03b2_2516_, lean_object* v_k_2517_, lean_object* v_t_2518_){
_start:
{
uint8_t v_res_2519_; lean_object* v_r_2520_; 
v_res_2519_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0(v_00_u03b2_2516_, v_k_2517_, v_t_2518_);
lean_dec(v_t_2518_);
lean_dec(v_k_2517_);
v_r_2520_ = lean_box(v_res_2519_);
return v_r_2520_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1(lean_object* v_00_u03b2_2521_, lean_object* v_k_2522_, lean_object* v_v_2523_, lean_object* v_t_2524_, lean_object* v_hl_2525_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(v_k_2522_, v_v_2523_, v_t_2524_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go(lean_object* v_y_2527_, lean_object* v_p_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_){
_start:
{
if (lean_obj_tag(v_p_2528_) == 1)
{
lean_object* v_v_2541_; lean_object* v_p_2542_; lean_object* v___x_2543_; 
v_v_2541_ = lean_ctor_get(v_p_2528_, 1);
lean_inc(v_v_2541_);
v_p_2542_ = lean_ctor_get(v_p_2528_, 2);
lean_inc(v_p_2542_);
lean_dec_ref_known(v_p_2528_, 3);
lean_inc(v_y_2527_);
v___x_2543_ = l_Lean_Meta_Grind_Arith_Linear_addOcc(v_v_2541_, v_y_2527_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_dec_ref_known(v___x_2543_, 1);
v_p_2528_ = v_p_2542_;
goto _start;
}
else
{
lean_dec(v_p_2542_);
lean_dec(v_y_2527_);
return v___x_2543_;
}
}
else
{
lean_object* v___x_2545_; lean_object* v___x_2546_; 
lean_dec(v_p_2528_);
lean_dec(v_y_2527_);
v___x_2545_ = lean_box(0);
v___x_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
return v___x_2546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go___boxed(lean_object* v_y_2547_, lean_object* v_p_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go(v_y_2547_, v_p_2548_, v_a_2549_, v_a_2550_, v_a_2551_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_, v_a_2559_);
lean_dec(v_a_2559_);
lean_dec_ref(v_a_2558_);
lean_dec(v_a_2557_);
lean_dec_ref(v_a_2556_);
lean_dec(v_a_2555_);
lean_dec_ref(v_a_2554_);
lean_dec(v_a_2553_);
lean_dec_ref(v_a_2552_);
lean_dec(v_a_2551_);
lean_dec(v_a_2550_);
lean_dec(v_a_2549_);
return v_res_2561_;
}
}
static lean_object* _init_l_Lean_Grind_Linarith_Poly_updateOccs___closed__1(void){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2563_ = ((lean_object*)(l_Lean_Grind_Linarith_Poly_updateOccs___closed__0));
v___x_2564_ = l_Lean_stringToMessageData(v___x_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_updateOccs(lean_object* v_p_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_){
_start:
{
if (lean_obj_tag(v_p_2565_) == 1)
{
lean_object* v_v_2578_; lean_object* v_p_2579_; lean_object* v___x_2580_; 
v_v_2578_ = lean_ctor_get(v_p_2565_, 1);
lean_inc(v_v_2578_);
v_p_2579_ = lean_ctor_get(v_p_2565_, 2);
lean_inc(v_p_2579_);
lean_dec_ref_known(v_p_2565_, 3);
v___x_2580_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go(v_v_2578_, v_p_2579_, v_a_2566_, v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_);
return v___x_2580_;
}
else
{
lean_object* v___x_2581_; lean_object* v___x_2582_; 
lean_dec(v_p_2565_);
v___x_2581_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_updateOccs___closed__1, &l_Lean_Grind_Linarith_Poly_updateOccs___closed__1_once, _init_l_Lean_Grind_Linarith_Poly_updateOccs___closed__1);
v___x_2582_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_2581_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_);
return v___x_2582_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_updateOccs___boxed(lean_object* v_p_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_, lean_object* v_a_2587_, lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Lean_Grind_Linarith_Poly_updateOccs(v_p_2583_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, v_a_2588_, v_a_2589_, v_a_2590_, v_a_2591_, v_a_2592_, v_a_2593_, v_a_2594_);
lean_dec(v_a_2594_);
lean_dec_ref(v_a_2593_);
lean_dec(v_a_2592_);
lean_dec_ref(v_a_2591_);
lean_dec(v_a_2590_);
lean_dec_ref(v_a_2589_);
lean_dec(v_a_2588_);
lean_dec_ref(v_a_2587_);
lean_dec(v_a_2586_);
lean_dec(v_a_2585_);
lean_dec(v_a_2584_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_findVarToSubst(lean_object* v_p_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_){
_start:
{
if (lean_obj_tag(v_p_2597_) == 0)
{
lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2610_ = lean_box(0);
v___x_2611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2610_);
return v___x_2611_;
}
else
{
lean_object* v_k_2612_; lean_object* v_v_2613_; lean_object* v_p_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v_k_2612_ = lean_ctor_get(v_p_2597_, 0);
v_v_2613_ = lean_ctor_get(v_p_2597_, 1);
v_p_2614_ = lean_ctor_get(v_p_2597_, 2);
v___x_2615_ = lean_box(0);
v___x_2616_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_);
if (lean_obj_tag(v___x_2616_) == 0)
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2642_; 
v_a_2617_ = lean_ctor_get(v___x_2616_, 0);
v_isSharedCheck_2642_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2619_ = v___x_2616_;
v_isShared_2620_ = v_isSharedCheck_2642_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2616_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2642_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___y_2622_; lean_object* v_elimEqs_2637_; lean_object* v_size_2638_; uint8_t v___x_2639_; 
v_elimEqs_2637_ = lean_ctor_get(v_a_2617_, 38);
lean_inc_ref(v_elimEqs_2637_);
lean_dec(v_a_2617_);
v_size_2638_ = lean_ctor_get(v_elimEqs_2637_, 2);
v___x_2639_ = lean_nat_dec_lt(v_v_2613_, v_size_2638_);
if (v___x_2639_ == 0)
{
lean_object* v___x_2640_; 
lean_dec_ref(v_elimEqs_2637_);
v___x_2640_ = l_outOfBounds___redArg(v___x_2615_);
v___y_2622_ = v___x_2640_;
goto v___jp_2621_;
}
else
{
lean_object* v___x_2641_; 
v___x_2641_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2615_, v_elimEqs_2637_, v_v_2613_);
lean_dec_ref(v_elimEqs_2637_);
v___y_2622_ = v___x_2641_;
goto v___jp_2621_;
}
v___jp_2621_:
{
if (lean_obj_tag(v___y_2622_) == 1)
{
lean_object* v_val_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2635_; 
v_val_2623_ = lean_ctor_get(v___y_2622_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___y_2622_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2625_ = v___y_2622_;
v_isShared_2626_ = v_isSharedCheck_2635_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_val_2623_);
lean_dec(v___y_2622_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2635_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2630_; 
lean_inc(v_v_2613_);
v___x_2627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2627_, 0, v_v_2613_);
lean_ctor_set(v___x_2627_, 1, v_val_2623_);
lean_inc(v_k_2612_);
v___x_2628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2628_, 0, v_k_2612_);
lean_ctor_set(v___x_2628_, 1, v___x_2627_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v___x_2628_);
v___x_2630_ = v___x_2625_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v___x_2628_);
v___x_2630_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
lean_object* v___x_2632_; 
if (v_isShared_2620_ == 0)
{
lean_ctor_set(v___x_2619_, 0, v___x_2630_);
v___x_2632_ = v___x_2619_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v___x_2630_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
}
else
{
lean_dec(v___y_2622_);
lean_del_object(v___x_2619_);
v_p_2597_ = v_p_2614_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
v_a_2643_ = lean_ctor_get(v___x_2616_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2616_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2616_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_findVarToSubst___boxed(lean_object* v_p_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_){
_start:
{
lean_object* v_res_2664_; 
v_res_2664_ = l_Lean_Grind_Linarith_Poly_findVarToSubst(v_p_2651_, v_a_2652_, v_a_2653_, v_a_2654_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_, v_a_2662_);
lean_dec(v_a_2662_);
lean_dec_ref(v_a_2661_);
lean_dec(v_a_2660_);
lean_dec_ref(v_a_2659_);
lean_dec(v_a_2658_);
lean_dec_ref(v_a_2657_);
lean_dec(v_a_2656_);
lean_dec_ref(v_a_2655_);
lean_dec(v_a_2654_);
lean_dec(v_a_2653_);
lean_dec(v_a_2652_);
lean_dec(v_p_2651_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffsAux(lean_object* v_x_2665_, lean_object* v_x_2666_){
_start:
{
if (lean_obj_tag(v_x_2665_) == 0)
{
return v_x_2666_;
}
else
{
lean_object* v_k_2667_; lean_object* v_p_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v_k_2667_ = lean_ctor_get(v_x_2665_, 0);
v_p_2668_ = lean_ctor_get(v_x_2665_, 2);
v___x_2669_ = lean_nat_to_int(v_x_2666_);
v___x_2670_ = l_Int_gcd(v_k_2667_, v___x_2669_);
lean_dec(v___x_2669_);
v_x_2665_ = v_p_2668_;
v_x_2666_ = v___x_2670_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffsAux___boxed(lean_object* v_x_2672_, lean_object* v_x_2673_){
_start:
{
lean_object* v_res_2674_; 
v_res_2674_ = l_Lean_Grind_Linarith_Poly_gcdCoeffsAux(v_x_2672_, v_x_2673_);
lean_dec(v_x_2672_);
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffs(lean_object* v_p_2675_){
_start:
{
if (lean_obj_tag(v_p_2675_) == 0)
{
lean_object* v___x_2676_; 
v___x_2676_ = lean_unsigned_to_nat(1u);
return v___x_2676_;
}
else
{
lean_object* v_k_2677_; lean_object* v_p_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
v_k_2677_ = lean_ctor_get(v_p_2675_, 0);
v_p_2678_ = lean_ctor_get(v_p_2675_, 2);
v___x_2679_ = lean_nat_abs(v_k_2677_);
v___x_2680_ = l_Lean_Grind_Linarith_Poly_gcdCoeffsAux(v_p_2678_, v___x_2679_);
return v___x_2680_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffs___boxed(lean_object* v_p_2681_){
_start:
{
lean_object* v_res_2682_; 
v_res_2682_ = l_Lean_Grind_Linarith_Poly_gcdCoeffs(v_p_2681_);
lean_dec(v_p_2681_);
return v_res_2682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_div(lean_object* v_p_2683_, lean_object* v_k_2684_){
_start:
{
if (lean_obj_tag(v_p_2683_) == 0)
{
return v_p_2683_;
}
else
{
lean_object* v_k_2685_; lean_object* v_v_2686_; lean_object* v_p_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2696_; 
v_k_2685_ = lean_ctor_get(v_p_2683_, 0);
v_v_2686_ = lean_ctor_get(v_p_2683_, 1);
v_p_2687_ = lean_ctor_get(v_p_2683_, 2);
v_isSharedCheck_2696_ = !lean_is_exclusive(v_p_2683_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2689_ = v_p_2683_;
v_isShared_2690_ = v_isSharedCheck_2696_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_p_2687_);
lean_inc(v_v_2686_);
lean_inc(v_k_2685_);
lean_dec(v_p_2683_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2696_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2694_; 
v___x_2691_ = lean_int_ediv(v_k_2685_, v_k_2684_);
lean_dec(v_k_2685_);
v___x_2692_ = l_Lean_Grind_Linarith_Poly_div(v_p_2687_, v_k_2684_);
if (v_isShared_2690_ == 0)
{
lean_ctor_set(v___x_2689_, 2, v___x_2692_);
lean_ctor_set(v___x_2689_, 0, v___x_2691_);
v___x_2694_ = v___x_2689_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v___x_2691_);
lean_ctor_set(v_reuseFailAlloc_2695_, 1, v_v_2686_);
lean_ctor_set(v_reuseFailAlloc_2695_, 2, v___x_2692_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_div___boxed(lean_object* v_p_2697_, lean_object* v_k_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lean_Grind_Linarith_Poly_div(v_p_2697_, v_k_2698_);
lean_dec(v_k_2698_);
return v_res_2699_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0(void){
_start:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2700_ = lean_unsigned_to_nat(1u);
v___x_2701_ = lean_nat_to_int(v___x_2700_);
return v___x_2701_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1(void){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___x_2702_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0);
v___x_2703_ = lean_int_neg(v___x_2702_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go(lean_object* v_k_2704_, lean_object* v_x_2705_, lean_object* v_p_2706_){
_start:
{
lean_object* v___x_2707_; uint8_t v___x_2708_; 
v___x_2707_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0);
v___x_2708_ = lean_int_dec_eq(v_k_2704_, v___x_2707_);
if (v___x_2708_ == 0)
{
lean_object* v___x_2709_; uint8_t v___x_2710_; 
v___x_2709_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1);
v___x_2710_ = lean_int_dec_eq(v_k_2704_, v___x_2709_);
if (v___x_2710_ == 0)
{
if (lean_obj_tag(v_p_2706_) == 0)
{
lean_object* v___x_2711_; 
v___x_2711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2711_, 0, v_k_2704_);
lean_ctor_set(v___x_2711_, 1, v_x_2705_);
return v___x_2711_;
}
else
{
lean_object* v_k_2712_; lean_object* v_v_2713_; lean_object* v_p_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; uint8_t v___x_2717_; 
v_k_2712_ = lean_ctor_get(v_p_2706_, 0);
lean_inc(v_k_2712_);
v_v_2713_ = lean_ctor_get(v_p_2706_, 1);
lean_inc(v_v_2713_);
v_p_2714_ = lean_ctor_get(v_p_2706_, 2);
lean_inc(v_p_2714_);
lean_dec_ref_known(v_p_2706_, 3);
v___x_2715_ = lean_nat_abs(v_k_2712_);
v___x_2716_ = lean_nat_abs(v_k_2704_);
v___x_2717_ = lean_nat_dec_lt(v___x_2715_, v___x_2716_);
lean_dec(v___x_2716_);
lean_dec(v___x_2715_);
if (v___x_2717_ == 0)
{
lean_dec(v_v_2713_);
lean_dec(v_k_2712_);
v_p_2706_ = v_p_2714_;
goto _start;
}
else
{
lean_dec(v_x_2705_);
lean_dec(v_k_2704_);
v_k_2704_ = v_k_2712_;
v_x_2705_ = v_v_2713_;
v_p_2706_ = v_p_2714_;
goto _start;
}
}
}
else
{
lean_object* v___x_2720_; 
lean_dec(v_p_2706_);
v___x_2720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2720_, 0, v_k_2704_);
lean_ctor_set(v___x_2720_, 1, v_x_2705_);
return v___x_2720_;
}
}
else
{
lean_object* v___x_2721_; 
lean_dec(v_p_2706_);
v___x_2721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2721_, 0, v_k_2704_);
lean_ctor_set(v___x_2721_, 1, v_x_2705_);
return v___x_2721_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_pickVarToElim_x3f(lean_object* v_p_2722_){
_start:
{
if (lean_obj_tag(v_p_2722_) == 0)
{
lean_object* v___x_2723_; 
v___x_2723_ = lean_box(0);
return v___x_2723_;
}
else
{
lean_object* v_k_2724_; lean_object* v_v_2725_; lean_object* v_p_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
v_k_2724_ = lean_ctor_get(v_p_2722_, 0);
lean_inc(v_k_2724_);
v_v_2725_ = lean_ctor_get(v_p_2722_, 1);
lean_inc(v_v_2725_);
v_p_2726_ = lean_ctor_get(v_p_2722_, 2);
lean_inc(v_p_2726_);
lean_dec_ref_known(v_p_2722_, 3);
v___x_2727_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go(v_k_2724_, v_v_2725_, v_p_2726_);
v___x_2728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2727_);
return v___x_2728_;
}
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Gcd(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Gcd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Gcd(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Gcd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(builtin);
}
#ifdef __cplusplus
}
#endif

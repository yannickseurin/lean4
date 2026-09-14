// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.CommRing.NonCommSemiringM
// Imports: public import Lean.Meta.Tactic.Grind.Arith.CommRing.SemiringM
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
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_CommRing_ringExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__1___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__0_value),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__1_value)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "`grind` internal error, invalid semiringId"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "expression in two different semirings"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_run___redArg(lean_object* v_semiringId_1_, lean_object* v_x_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc_ref(v_a_9_);
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
lean_inc(v_a_3_);
v___x_14_ = lean_apply_12(v_x_2_, v_semiringId_1_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_run___redArg___boxed(lean_object* v_semiringId_15_, lean_object* v_x_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_run___redArg(v_semiringId_15_, v_x_16_, v_a_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_, v_a_25_, v_a_26_);
lean_dec(v_a_26_);
lean_dec_ref(v_a_25_);
lean_dec(v_a_24_);
lean_dec_ref(v_a_23_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec(v_a_20_);
lean_dec_ref(v_a_19_);
lean_dec(v_a_18_);
lean_dec(v_a_17_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_run(lean_object* v_00_u03b1_29_, lean_object* v_semiringId_30_, lean_object* v_x_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_43_; 
lean_inc(v_a_41_);
lean_inc_ref(v_a_40_);
lean_inc(v_a_39_);
lean_inc_ref(v_a_38_);
lean_inc(v_a_37_);
lean_inc_ref(v_a_36_);
lean_inc(v_a_35_);
lean_inc_ref(v_a_34_);
lean_inc(v_a_33_);
lean_inc(v_a_32_);
v___x_43_ = lean_apply_12(v_x_31_, v_semiringId_30_, v_a_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, lean_box(0));
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_run___boxed(lean_object* v_00_u03b1_44_, lean_object* v_semiringId_45_, lean_object* v_x_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_run(v_00_u03b1_44_, v_semiringId_45_, v_x_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_);
lean_dec(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec(v_a_47_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__0(lean_object* v_e_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Meta_Sym_canon(v_e_59_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_);
if (lean_obj_tag(v___x_72_) == 0)
{
lean_object* v_a_73_; lean_object* v___x_74_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
lean_inc(v_a_73_);
lean_dec_ref_known(v___x_72_, 1);
v___x_74_ = l_Lean_Meta_Sym_shareCommon(v_a_73_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_);
return v___x_74_;
}
else
{
return v___x_72_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__0___boxed(lean_object* v_e_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__0(v_e_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec(v___y_78_);
lean_dec(v___y_77_);
lean_dec(v___y_76_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__1(lean_object* v_e_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_e_89_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__1___boxed(lean_object* v_e_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonNonCommSemiringM___lam__1(v_e_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
lean_dec(v___y_110_);
lean_dec_ref(v___y_109_);
lean_dec(v___y_108_);
lean_dec_ref(v___y_107_);
lean_dec(v___y_106_);
lean_dec(v___y_105_);
lean_dec(v___y_104_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0_spec__0(lean_object* v_msgData_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
lean_object* v___x_129_; lean_object* v_env_130_; lean_object* v___x_131_; lean_object* v_toCold_132_; lean_object* v_mctx_133_; lean_object* v_lctx_134_; lean_object* v_options_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_129_ = lean_st_ref_get(v___y_127_);
v_env_130_ = lean_ctor_get(v___x_129_, 0);
lean_inc_ref(v_env_130_);
lean_dec(v___x_129_);
v___x_131_ = lean_st_ref_get(v___y_125_);
v_toCold_132_ = lean_ctor_get(v___y_126_, 0);
v_mctx_133_ = lean_ctor_get(v___x_131_, 0);
lean_inc_ref(v_mctx_133_);
lean_dec(v___x_131_);
v_lctx_134_ = lean_ctor_get(v___y_124_, 2);
v_options_135_ = lean_ctor_get(v_toCold_132_, 2);
lean_inc_ref(v_options_135_);
lean_inc_ref(v_lctx_134_);
v___x_136_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_136_, 0, v_env_130_);
lean_ctor_set(v___x_136_, 1, v_mctx_133_);
lean_ctor_set(v___x_136_, 2, v_lctx_134_);
lean_ctor_set(v___x_136_, 3, v_options_135_);
v___x_137_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v_msgData_123_);
v___x_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0_spec__0___boxed(lean_object* v_msgData_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0_spec__0(v_msgData_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0___redArg(lean_object* v_msg_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
lean_object* v_ref_152_; lean_object* v___x_153_; lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_162_; 
v_ref_152_ = lean_ctor_get(v___y_149_, 2);
v___x_153_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0_spec__0(v_msg_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
v_a_154_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_162_ == 0)
{
v___x_156_ = v___x_153_;
v_isShared_157_ = v_isSharedCheck_162_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_153_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_162_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_158_; lean_object* v___x_160_; 
lean_inc(v_ref_152_);
v___x_158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_158_, 0, v_ref_152_);
lean_ctor_set(v___x_158_, 1, v_a_154_);
if (v_isShared_157_ == 0)
{
lean_ctor_set_tag(v___x_156_, 1);
lean_ctor_set(v___x_156_, 0, v___x_158_);
v___x_160_ = v___x_156_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0___redArg___boxed(lean_object* v_msg_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0___redArg(v_msg_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
return v_res_169_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___closed__1(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___closed__0));
v___x_172_ = l_Lean_stringToMessageData(v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring(lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_174_, v_a_182_);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_199_; 
v_a_186_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_199_ == 0)
{
v___x_188_ = v___x_185_;
v_isShared_189_ = v_isSharedCheck_199_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_185_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_199_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v_ncSemirings_190_; lean_object* v___x_191_; uint8_t v___x_192_; 
v_ncSemirings_190_ = lean_ctor_get(v_a_186_, 9);
lean_inc_ref(v_ncSemirings_190_);
lean_dec(v_a_186_);
v___x_191_ = lean_array_get_size(v_ncSemirings_190_);
v___x_192_ = lean_nat_dec_lt(v_a_173_, v___x_191_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; 
lean_dec_ref(v_ncSemirings_190_);
lean_del_object(v___x_188_);
v___x_193_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___closed__1);
v___x_194_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0___redArg(v___x_193_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
return v___x_194_;
}
else
{
lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_195_ = lean_array_fget(v_ncSemirings_190_, v_a_173_);
lean_dec_ref(v_ncSemirings_190_);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 0, v___x_195_);
v___x_197_ = v___x_188_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_195_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
else
{
lean_object* v_a_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_207_; 
v_a_200_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_207_ == 0)
{
v___x_202_ = v___x_185_;
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_a_200_);
lean_dec(v___x_185_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_205_; 
if (v_isShared_203_ == 0)
{
v___x_205_ = v___x_202_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_a_200_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___boxed(lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring(v_a_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_, v_a_217_, v_a_218_);
lean_dec(v_a_218_);
lean_dec_ref(v_a_217_);
lean_dec(v_a_216_);
lean_dec_ref(v_a_215_);
lean_dec(v_a_214_);
lean_dec_ref(v_a_213_);
lean_dec(v_a_212_);
lean_dec_ref(v_a_211_);
lean_dec(v_a_210_);
lean_dec(v_a_209_);
lean_dec(v_a_208_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0(lean_object* v_00_u03b1_221_, lean_object* v_msg_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0___redArg(v_msg_222_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0___boxed(lean_object* v_00_u03b1_236_, lean_object* v_msg_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring_spec__0(v_00_u03b1_236_, v_msg_237_, v___y_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec(v___y_239_);
lean_dec(v___y_238_);
return v_res_250_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = lean_box(0);
v___x_252_ = l_unsafeCast___redArg(v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0(lean_object* v_a_253_, lean_object* v_f_254_, lean_object* v_s_255_){
_start:
{
lean_object* v_rings_256_; lean_object* v_typeIdOf_257_; lean_object* v_exprToRingId_258_; lean_object* v_semirings_259_; lean_object* v_stypeIdOf_260_; lean_object* v_exprToSemiringId_261_; lean_object* v_ncRings_262_; lean_object* v_exprToNCRingId_263_; lean_object* v_nctypeIdOf_264_; lean_object* v_ncSemirings_265_; lean_object* v_exprToNCSemiringId_266_; lean_object* v_ncstypeIdOf_267_; lean_object* v_steps_268_; uint8_t v_reportedMaxDegreeIssue_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v_rings_256_ = lean_ctor_get(v_s_255_, 0);
v_typeIdOf_257_ = lean_ctor_get(v_s_255_, 1);
v_exprToRingId_258_ = lean_ctor_get(v_s_255_, 2);
v_semirings_259_ = lean_ctor_get(v_s_255_, 3);
v_stypeIdOf_260_ = lean_ctor_get(v_s_255_, 4);
v_exprToSemiringId_261_ = lean_ctor_get(v_s_255_, 5);
v_ncRings_262_ = lean_ctor_get(v_s_255_, 6);
v_exprToNCRingId_263_ = lean_ctor_get(v_s_255_, 7);
v_nctypeIdOf_264_ = lean_ctor_get(v_s_255_, 8);
v_ncSemirings_265_ = lean_ctor_get(v_s_255_, 9);
v_exprToNCSemiringId_266_ = lean_ctor_get(v_s_255_, 10);
v_ncstypeIdOf_267_ = lean_ctor_get(v_s_255_, 11);
v_steps_268_ = lean_ctor_get(v_s_255_, 12);
v_reportedMaxDegreeIssue_269_ = lean_ctor_get_uint8(v_s_255_, sizeof(void*)*13);
v___x_270_ = lean_array_get_size(v_ncSemirings_265_);
v___x_271_ = lean_nat_dec_lt(v_a_253_, v___x_270_);
if (v___x_271_ == 0)
{
lean_dec_ref(v_f_254_);
return v_s_255_;
}
else
{
lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_283_; 
lean_inc(v_steps_268_);
lean_inc_ref(v_ncstypeIdOf_267_);
lean_inc_ref(v_exprToNCSemiringId_266_);
lean_inc_ref(v_ncSemirings_265_);
lean_inc_ref(v_nctypeIdOf_264_);
lean_inc_ref(v_exprToNCRingId_263_);
lean_inc_ref(v_ncRings_262_);
lean_inc_ref(v_exprToSemiringId_261_);
lean_inc_ref(v_stypeIdOf_260_);
lean_inc_ref(v_semirings_259_);
lean_inc_ref(v_exprToRingId_258_);
lean_inc_ref(v_typeIdOf_257_);
lean_inc_ref(v_rings_256_);
v_isSharedCheck_283_ = !lean_is_exclusive(v_s_255_);
if (v_isSharedCheck_283_ == 0)
{
lean_object* v_unused_284_; lean_object* v_unused_285_; lean_object* v_unused_286_; lean_object* v_unused_287_; lean_object* v_unused_288_; lean_object* v_unused_289_; lean_object* v_unused_290_; lean_object* v_unused_291_; lean_object* v_unused_292_; lean_object* v_unused_293_; lean_object* v_unused_294_; lean_object* v_unused_295_; lean_object* v_unused_296_; 
v_unused_284_ = lean_ctor_get(v_s_255_, 12);
lean_dec(v_unused_284_);
v_unused_285_ = lean_ctor_get(v_s_255_, 11);
lean_dec(v_unused_285_);
v_unused_286_ = lean_ctor_get(v_s_255_, 10);
lean_dec(v_unused_286_);
v_unused_287_ = lean_ctor_get(v_s_255_, 9);
lean_dec(v_unused_287_);
v_unused_288_ = lean_ctor_get(v_s_255_, 8);
lean_dec(v_unused_288_);
v_unused_289_ = lean_ctor_get(v_s_255_, 7);
lean_dec(v_unused_289_);
v_unused_290_ = lean_ctor_get(v_s_255_, 6);
lean_dec(v_unused_290_);
v_unused_291_ = lean_ctor_get(v_s_255_, 5);
lean_dec(v_unused_291_);
v_unused_292_ = lean_ctor_get(v_s_255_, 4);
lean_dec(v_unused_292_);
v_unused_293_ = lean_ctor_get(v_s_255_, 3);
lean_dec(v_unused_293_);
v_unused_294_ = lean_ctor_get(v_s_255_, 2);
lean_dec(v_unused_294_);
v_unused_295_ = lean_ctor_get(v_s_255_, 1);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_s_255_, 0);
lean_dec(v_unused_296_);
v___x_273_ = v_s_255_;
v_isShared_274_ = v_isSharedCheck_283_;
goto v_resetjp_272_;
}
else
{
lean_dec(v_s_255_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_283_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v_v_275_; lean_object* v___x_276_; lean_object* v_xs_x27_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_281_; 
v_v_275_ = lean_array_fget(v_ncSemirings_265_, v_a_253_);
v___x_276_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___closed__0);
v_xs_x27_277_ = lean_array_fset(v_ncSemirings_265_, v_a_253_, v___x_276_);
v___x_278_ = lean_apply_1(v_f_254_, v_v_275_);
v___x_279_ = lean_array_fset(v_xs_x27_277_, v_a_253_, v___x_278_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 9, v___x_279_);
v___x_281_ = v___x_273_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_rings_256_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_typeIdOf_257_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_exprToRingId_258_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_semirings_259_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v_stypeIdOf_260_);
lean_ctor_set(v_reuseFailAlloc_282_, 5, v_exprToSemiringId_261_);
lean_ctor_set(v_reuseFailAlloc_282_, 6, v_ncRings_262_);
lean_ctor_set(v_reuseFailAlloc_282_, 7, v_exprToNCRingId_263_);
lean_ctor_set(v_reuseFailAlloc_282_, 8, v_nctypeIdOf_264_);
lean_ctor_set(v_reuseFailAlloc_282_, 9, v___x_279_);
lean_ctor_set(v_reuseFailAlloc_282_, 10, v_exprToNCSemiringId_266_);
lean_ctor_set(v_reuseFailAlloc_282_, 11, v_ncstypeIdOf_267_);
lean_ctor_set(v_reuseFailAlloc_282_, 12, v_steps_268_);
lean_ctor_set_uint8(v_reuseFailAlloc_282_, sizeof(void*)*13, v_reportedMaxDegreeIssue_269_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___boxed(lean_object* v_a_297_, lean_object* v_f_298_, lean_object* v_s_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0(v_a_297_, v_f_298_, v_s_299_);
lean_dec(v_a_297_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg(lean_object* v_f_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v___f_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
lean_inc(v_a_302_);
v___f_305_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_305_, 0, v_a_302_);
lean_closure_set(v___f_305_, 1, v_f_301_);
v___x_306_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_307_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_306_, v___f_305_, v_a_303_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___boxed(lean_object* v_f_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg(v_f_308_, v_a_309_, v_a_310_);
lean_dec(v_a_310_);
lean_dec(v_a_309_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring(lean_object* v_f_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg(v_f_313_, v_a_314_, v_a_315_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___boxed(lean_object* v_f_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring(v_f_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_, v_a_338_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
lean_dec(v_a_329_);
lean_dec(v_a_328_);
return v_res_340_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM___closed__1(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM___closed__0));
v___x_343_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_getSemiring___boxed), 12, 0);
v___x_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_343_);
lean_ctor_set(v___x_344_, 1, v___x_342_);
return v___x_344_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM(void){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM___closed__1);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_346_, lean_object* v_vals_347_, lean_object* v_i_348_, lean_object* v_k_349_){
_start:
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = lean_array_get_size(v_keys_346_);
v___x_351_ = lean_nat_dec_lt(v_i_348_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; 
lean_dec(v_i_348_);
v___x_352_ = lean_box(0);
return v___x_352_;
}
else
{
lean_object* v_k_x27_353_; size_t v___x_354_; size_t v___x_355_; uint8_t v___x_356_; 
v_k_x27_353_ = lean_array_fget_borrowed(v_keys_346_, v_i_348_);
v___x_354_ = lean_ptr_addr(v_k_349_);
v___x_355_ = lean_ptr_addr(v_k_x27_353_);
v___x_356_ = lean_usize_dec_eq(v___x_354_, v___x_355_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lean_unsigned_to_nat(1u);
v___x_358_ = lean_nat_add(v_i_348_, v___x_357_);
lean_dec(v_i_348_);
v_i_348_ = v___x_358_;
goto _start;
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = lean_array_fget_borrowed(v_vals_347_, v_i_348_);
lean_dec(v_i_348_);
lean_inc(v___x_360_);
v___x_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
return v___x_361_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_362_, lean_object* v_vals_363_, lean_object* v_i_364_, lean_object* v_k_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_362_, v_vals_363_, v_i_364_, v_k_365_);
lean_dec_ref(v_k_365_);
lean_dec_ref(v_vals_363_);
lean_dec_ref(v_keys_362_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0___redArg(lean_object* v_x_367_, size_t v_x_368_, lean_object* v_x_369_){
_start:
{
if (lean_obj_tag(v_x_367_) == 0)
{
lean_object* v_es_370_; lean_object* v___x_371_; size_t v___x_372_; size_t v___x_373_; lean_object* v_j_374_; lean_object* v___x_375_; 
v_es_370_ = lean_ctor_get(v_x_367_, 0);
v___x_371_ = lean_box(2);
v___x_372_ = ((size_t)31ULL);
v___x_373_ = lean_usize_land(v_x_368_, v___x_372_);
v_j_374_ = lean_usize_to_nat(v___x_373_);
v___x_375_ = lean_array_get_borrowed(v___x_371_, v_es_370_, v_j_374_);
lean_dec(v_j_374_);
switch(lean_obj_tag(v___x_375_))
{
case 0:
{
lean_object* v_key_376_; lean_object* v_val_377_; size_t v___x_378_; size_t v___x_379_; uint8_t v___x_380_; 
v_key_376_ = lean_ctor_get(v___x_375_, 0);
v_val_377_ = lean_ctor_get(v___x_375_, 1);
v___x_378_ = lean_ptr_addr(v_x_369_);
v___x_379_ = lean_ptr_addr(v_key_376_);
v___x_380_ = lean_usize_dec_eq(v___x_378_, v___x_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; 
v___x_381_ = lean_box(0);
return v___x_381_;
}
else
{
lean_object* v___x_382_; 
lean_inc(v_val_377_);
v___x_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_382_, 0, v_val_377_);
return v___x_382_;
}
}
case 1:
{
lean_object* v_node_383_; size_t v___x_384_; size_t v___x_385_; 
v_node_383_ = lean_ctor_get(v___x_375_, 0);
v___x_384_ = ((size_t)5ULL);
v___x_385_ = lean_usize_shift_right(v_x_368_, v___x_384_);
v_x_367_ = v_node_383_;
v_x_368_ = v___x_385_;
goto _start;
}
default: 
{
lean_object* v___x_387_; 
v___x_387_ = lean_box(0);
return v___x_387_;
}
}
}
else
{
lean_object* v_ks_388_; lean_object* v_vs_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v_ks_388_ = lean_ctor_get(v_x_367_, 0);
v_vs_389_ = lean_ctor_get(v_x_367_, 1);
v___x_390_ = lean_unsigned_to_nat(0u);
v___x_391_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_388_, v_vs_389_, v___x_390_, v_x_369_);
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_392_, lean_object* v_x_393_, lean_object* v_x_394_){
_start:
{
size_t v_x_905__boxed_395_; lean_object* v_res_396_; 
v_x_905__boxed_395_ = lean_unbox_usize(v_x_393_);
lean_dec(v_x_393_);
v_res_396_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0___redArg(v_x_392_, v_x_905__boxed_395_, v_x_394_);
lean_dec_ref(v_x_394_);
lean_dec_ref(v_x_392_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0___redArg(lean_object* v_x_397_, lean_object* v_x_398_){
_start:
{
size_t v___x_399_; size_t v___x_400_; size_t v___x_401_; uint64_t v___x_402_; size_t v___x_403_; lean_object* v___x_404_; 
v___x_399_ = lean_ptr_addr(v_x_398_);
v___x_400_ = ((size_t)3ULL);
v___x_401_ = lean_usize_shift_right(v___x_399_, v___x_400_);
v___x_402_ = lean_usize_to_uint64(v___x_401_);
v___x_403_ = lean_uint64_to_usize(v___x_402_);
v___x_404_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0___redArg(v_x_397_, v___x_403_, v_x_398_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0___redArg___boxed(lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0___redArg(v_x_405_, v_x_406_);
lean_dec_ref(v_x_406_);
lean_dec_ref(v_x_405_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f___redArg(lean_object* v_e_408_, lean_object* v_a_409_, lean_object* v_a_410_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_409_, v_a_410_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_422_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_422_ == 0)
{
v___x_415_ = v___x_412_;
v_isShared_416_ = v_isSharedCheck_422_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_412_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_422_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v_exprToNCSemiringId_417_; lean_object* v___x_418_; lean_object* v___x_420_; 
v_exprToNCSemiringId_417_ = lean_ctor_get(v_a_413_, 10);
lean_inc_ref(v_exprToNCSemiringId_417_);
lean_dec(v_a_413_);
v___x_418_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0___redArg(v_exprToNCSemiringId_417_, v_e_408_);
lean_dec_ref(v_exprToNCSemiringId_417_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v___x_418_);
v___x_420_ = v___x_415_;
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
else
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
v_a_423_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v___x_412_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_412_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f___redArg___boxed(lean_object* v_e_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f___redArg(v_e_431_, v_a_432_, v_a_433_);
lean_dec_ref(v_a_433_);
lean_dec(v_a_432_);
lean_dec_ref(v_e_431_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f(lean_object* v_e_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f___redArg(v_e_436_, v_a_437_, v_a_445_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f___boxed(lean_object* v_e_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f(v_e_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_, v_a_459_);
lean_dec(v_a_459_);
lean_dec_ref(v_a_458_);
lean_dec(v_a_457_);
lean_dec_ref(v_a_456_);
lean_dec(v_a_455_);
lean_dec_ref(v_a_454_);
lean_dec(v_a_453_);
lean_dec_ref(v_a_452_);
lean_dec(v_a_451_);
lean_dec(v_a_450_);
lean_dec_ref(v_e_449_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0(lean_object* v_00_u03b2_462_, lean_object* v_x_463_, lean_object* v_x_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0___redArg(v_x_463_, v_x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0___boxed(lean_object* v_00_u03b2_466_, lean_object* v_x_467_, lean_object* v_x_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0(v_00_u03b2_466_, v_x_467_, v_x_468_);
lean_dec_ref(v_x_468_);
lean_dec_ref(v_x_467_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_470_, lean_object* v_x_471_, size_t v_x_472_, lean_object* v_x_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0___redArg(v_x_471_, v_x_472_, v_x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_475_, lean_object* v_x_476_, lean_object* v_x_477_, lean_object* v_x_478_){
_start:
{
size_t v_x_1026__boxed_479_; lean_object* v_res_480_; 
v_x_1026__boxed_479_ = lean_unbox_usize(v_x_477_);
lean_dec(v_x_477_);
v_res_480_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0(v_00_u03b2_475_, v_x_476_, v_x_1026__boxed_479_, v_x_478_);
lean_dec_ref(v_x_478_);
lean_dec_ref(v_x_476_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_481_, lean_object* v_keys_482_, lean_object* v_vals_483_, lean_object* v_heq_484_, lean_object* v_i_485_, lean_object* v_k_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_482_, v_vals_483_, v_i_485_, v_k_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_488_, lean_object* v_keys_489_, lean_object* v_vals_490_, lean_object* v_heq_491_, lean_object* v_i_492_, lean_object* v_k_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_488_, v_keys_489_, v_vals_490_, v_heq_491_, v_i_492_, v_k_493_);
lean_dec_ref(v_k_493_);
lean_dec_ref(v_vals_490_);
lean_dec_ref(v_keys_489_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_495_, lean_object* v_x_496_, lean_object* v_x_497_, lean_object* v_x_498_){
_start:
{
lean_object* v_ks_499_; lean_object* v_vs_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_526_; 
v_ks_499_ = lean_ctor_get(v_x_495_, 0);
v_vs_500_ = lean_ctor_get(v_x_495_, 1);
v_isSharedCheck_526_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_526_ == 0)
{
v___x_502_ = v_x_495_;
v_isShared_503_ = v_isSharedCheck_526_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_vs_500_);
lean_inc(v_ks_499_);
lean_dec(v_x_495_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_526_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_504_ = lean_array_get_size(v_ks_499_);
v___x_505_ = lean_nat_dec_lt(v_x_496_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_509_; 
lean_dec(v_x_496_);
v___x_506_ = lean_array_push(v_ks_499_, v_x_497_);
v___x_507_ = lean_array_push(v_vs_500_, v_x_498_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 1, v___x_507_);
lean_ctor_set(v___x_502_, 0, v___x_506_);
v___x_509_ = v___x_502_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_506_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v___x_507_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
else
{
lean_object* v_k_x27_511_; size_t v___x_512_; size_t v___x_513_; uint8_t v___x_514_; 
v_k_x27_511_ = lean_array_fget_borrowed(v_ks_499_, v_x_496_);
v___x_512_ = lean_ptr_addr(v_x_497_);
v___x_513_ = lean_ptr_addr(v_k_x27_511_);
v___x_514_ = lean_usize_dec_eq(v___x_512_, v___x_513_);
if (v___x_514_ == 0)
{
lean_object* v___x_516_; 
if (v_isShared_503_ == 0)
{
v___x_516_ = v___x_502_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_ks_499_);
lean_ctor_set(v_reuseFailAlloc_520_, 1, v_vs_500_);
v___x_516_ = v_reuseFailAlloc_520_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = lean_nat_add(v_x_496_, v___x_517_);
lean_dec(v_x_496_);
v_x_495_ = v___x_516_;
v_x_496_ = v___x_518_;
goto _start;
}
}
else
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_521_ = lean_array_fset(v_ks_499_, v_x_496_, v_x_497_);
v___x_522_ = lean_array_fset(v_vs_500_, v_x_496_, v_x_498_);
lean_dec(v_x_496_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 1, v___x_522_);
lean_ctor_set(v___x_502_, 0, v___x_521_);
v___x_524_ = v___x_502_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v___x_522_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1___redArg(lean_object* v_n_527_, lean_object* v_k_528_, lean_object* v_v_529_){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = lean_unsigned_to_nat(0u);
v___x_531_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(v_n_527_, v___x_530_, v_k_528_, v_v_529_);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg(lean_object* v_x_533_, size_t v_x_534_, size_t v_x_535_, lean_object* v_x_536_, lean_object* v_x_537_){
_start:
{
if (lean_obj_tag(v_x_533_) == 0)
{
lean_object* v_es_538_; size_t v___x_539_; size_t v___x_540_; lean_object* v_j_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
v_es_538_ = lean_ctor_get(v_x_533_, 0);
v___x_539_ = ((size_t)31ULL);
v___x_540_ = lean_usize_land(v_x_534_, v___x_539_);
v_j_541_ = lean_usize_to_nat(v___x_540_);
v___x_542_ = lean_array_get_size(v_es_538_);
v___x_543_ = lean_nat_dec_lt(v_j_541_, v___x_542_);
if (v___x_543_ == 0)
{
lean_dec(v_j_541_);
lean_dec(v_x_537_);
lean_dec_ref(v_x_536_);
return v_x_533_;
}
else
{
lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_584_; 
lean_inc_ref(v_es_538_);
v_isSharedCheck_584_ = !lean_is_exclusive(v_x_533_);
if (v_isSharedCheck_584_ == 0)
{
lean_object* v_unused_585_; 
v_unused_585_ = lean_ctor_get(v_x_533_, 0);
lean_dec(v_unused_585_);
v___x_545_ = v_x_533_;
v_isShared_546_ = v_isSharedCheck_584_;
goto v_resetjp_544_;
}
else
{
lean_dec(v_x_533_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_584_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v_v_547_; lean_object* v___x_548_; lean_object* v_xs_x27_549_; lean_object* v___y_551_; 
v_v_547_ = lean_array_fget(v_es_538_, v_j_541_);
v___x_548_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg___lam__0___closed__0);
v_xs_x27_549_ = lean_array_fset(v_es_538_, v_j_541_, v___x_548_);
switch(lean_obj_tag(v_v_547_))
{
case 0:
{
lean_object* v_key_556_; lean_object* v_val_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_569_; 
v_key_556_ = lean_ctor_get(v_v_547_, 0);
v_val_557_ = lean_ctor_get(v_v_547_, 1);
v_isSharedCheck_569_ = !lean_is_exclusive(v_v_547_);
if (v_isSharedCheck_569_ == 0)
{
v___x_559_ = v_v_547_;
v_isShared_560_ = v_isSharedCheck_569_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_val_557_);
lean_inc(v_key_556_);
lean_dec(v_v_547_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_569_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
size_t v___x_561_; size_t v___x_562_; uint8_t v___x_563_; 
v___x_561_ = lean_ptr_addr(v_x_536_);
v___x_562_ = lean_ptr_addr(v_key_556_);
v___x_563_ = lean_usize_dec_eq(v___x_561_, v___x_562_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; lean_object* v___x_565_; 
lean_del_object(v___x_559_);
v___x_564_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_556_, v_val_557_, v_x_536_, v_x_537_);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
v___y_551_ = v___x_565_;
goto v___jp_550_;
}
else
{
lean_object* v___x_567_; 
lean_dec(v_val_557_);
lean_dec(v_key_556_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 1, v_x_537_);
lean_ctor_set(v___x_559_, 0, v_x_536_);
v___x_567_ = v___x_559_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_x_536_);
lean_ctor_set(v_reuseFailAlloc_568_, 1, v_x_537_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
v___y_551_ = v___x_567_;
goto v___jp_550_;
}
}
}
}
case 1:
{
lean_object* v_node_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_582_; 
v_node_570_ = lean_ctor_get(v_v_547_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v_v_547_);
if (v_isSharedCheck_582_ == 0)
{
v___x_572_ = v_v_547_;
v_isShared_573_ = v_isSharedCheck_582_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_node_570_);
lean_dec(v_v_547_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_582_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
size_t v___x_574_; size_t v___x_575_; size_t v___x_576_; size_t v___x_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_574_ = ((size_t)5ULL);
v___x_575_ = lean_usize_shift_right(v_x_534_, v___x_574_);
v___x_576_ = ((size_t)1ULL);
v___x_577_ = lean_usize_add(v_x_535_, v___x_576_);
v___x_578_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg(v_node_570_, v___x_575_, v___x_577_, v_x_536_, v_x_537_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 0, v___x_578_);
v___x_580_ = v___x_572_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_578_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
v___y_551_ = v___x_580_;
goto v___jp_550_;
}
}
}
default: 
{
lean_object* v___x_583_; 
v___x_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_583_, 0, v_x_536_);
lean_ctor_set(v___x_583_, 1, v_x_537_);
v___y_551_ = v___x_583_;
goto v___jp_550_;
}
}
v___jp_550_:
{
lean_object* v___x_552_; lean_object* v___x_554_; 
v___x_552_ = lean_array_fset(v_xs_x27_549_, v_j_541_, v___y_551_);
lean_dec(v_j_541_);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 0, v___x_552_);
v___x_554_ = v___x_545_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_552_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
}
else
{
lean_object* v_ks_586_; lean_object* v_vs_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_605_; 
v_ks_586_ = lean_ctor_get(v_x_533_, 0);
v_vs_587_ = lean_ctor_get(v_x_533_, 1);
v_isSharedCheck_605_ = !lean_is_exclusive(v_x_533_);
if (v_isSharedCheck_605_ == 0)
{
v___x_589_ = v_x_533_;
v_isShared_590_ = v_isSharedCheck_605_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_vs_587_);
lean_inc(v_ks_586_);
lean_dec(v_x_533_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_605_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_ks_586_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v_vs_587_);
v___x_592_ = v_reuseFailAlloc_604_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_object* v_newNode_593_; size_t v___x_594_; uint8_t v___x_595_; 
v_newNode_593_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1___redArg(v___x_592_, v_x_536_, v_x_537_);
v___x_594_ = ((size_t)7ULL);
v___x_595_ = lean_usize_dec_le(v___x_594_, v_x_535_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; 
v___x_596_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_593_);
v___x_597_ = lean_unsigned_to_nat(4u);
v___x_598_ = lean_nat_dec_lt(v___x_596_, v___x_597_);
lean_dec(v___x_596_);
if (v___x_598_ == 0)
{
lean_object* v_ks_599_; lean_object* v_vs_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_ks_599_ = lean_ctor_get(v_newNode_593_, 0);
lean_inc_ref(v_ks_599_);
v_vs_600_ = lean_ctor_get(v_newNode_593_, 1);
lean_inc_ref(v_vs_600_);
lean_dec_ref(v_newNode_593_);
v___x_601_ = lean_unsigned_to_nat(0u);
v___x_602_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg___closed__0);
v___x_603_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2___redArg(v_x_535_, v_ks_599_, v_vs_600_, v___x_601_, v___x_602_);
lean_dec_ref(v_vs_600_);
lean_dec_ref(v_ks_599_);
return v___x_603_;
}
else
{
return v_newNode_593_;
}
}
else
{
return v_newNode_593_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2___redArg(size_t v_depth_606_, lean_object* v_keys_607_, lean_object* v_vals_608_, lean_object* v_i_609_, lean_object* v_entries_610_){
_start:
{
lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_611_ = lean_array_get_size(v_keys_607_);
v___x_612_ = lean_nat_dec_lt(v_i_609_, v___x_611_);
if (v___x_612_ == 0)
{
lean_dec(v_i_609_);
return v_entries_610_;
}
else
{
lean_object* v_k_613_; lean_object* v_v_614_; size_t v___x_615_; size_t v___x_616_; size_t v___x_617_; uint64_t v___x_618_; size_t v_h_619_; size_t v___x_620_; lean_object* v___x_621_; size_t v___x_622_; size_t v___x_623_; size_t v___x_624_; size_t v_h_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v_k_613_ = lean_array_fget_borrowed(v_keys_607_, v_i_609_);
v_v_614_ = lean_array_fget_borrowed(v_vals_608_, v_i_609_);
v___x_615_ = lean_ptr_addr(v_k_613_);
v___x_616_ = ((size_t)3ULL);
v___x_617_ = lean_usize_shift_right(v___x_615_, v___x_616_);
v___x_618_ = lean_usize_to_uint64(v___x_617_);
v_h_619_ = lean_uint64_to_usize(v___x_618_);
v___x_620_ = ((size_t)5ULL);
v___x_621_ = lean_unsigned_to_nat(1u);
v___x_622_ = ((size_t)1ULL);
v___x_623_ = lean_usize_sub(v_depth_606_, v___x_622_);
v___x_624_ = lean_usize_mul(v___x_620_, v___x_623_);
v_h_625_ = lean_usize_shift_right(v_h_619_, v___x_624_);
v___x_626_ = lean_nat_add(v_i_609_, v___x_621_);
lean_dec(v_i_609_);
lean_inc(v_v_614_);
lean_inc(v_k_613_);
v___x_627_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg(v_entries_610_, v_h_625_, v_depth_606_, v_k_613_, v_v_614_);
v_i_609_ = v___x_626_;
v_entries_610_ = v___x_627_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_629_, lean_object* v_keys_630_, lean_object* v_vals_631_, lean_object* v_i_632_, lean_object* v_entries_633_){
_start:
{
size_t v_depth_boxed_634_; lean_object* v_res_635_; 
v_depth_boxed_634_ = lean_unbox_usize(v_depth_629_);
lean_dec(v_depth_629_);
v_res_635_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2___redArg(v_depth_boxed_634_, v_keys_630_, v_vals_631_, v_i_632_, v_entries_633_);
lean_dec_ref(v_vals_631_);
lean_dec_ref(v_keys_630_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg___boxed(lean_object* v_x_636_, lean_object* v_x_637_, lean_object* v_x_638_, lean_object* v_x_639_, lean_object* v_x_640_){
_start:
{
size_t v_x_7715__boxed_641_; size_t v_x_7716__boxed_642_; lean_object* v_res_643_; 
v_x_7715__boxed_641_ = lean_unbox_usize(v_x_637_);
lean_dec(v_x_637_);
v_x_7716__boxed_642_ = lean_unbox_usize(v_x_638_);
lean_dec(v_x_638_);
v_res_643_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg(v_x_636_, v_x_7715__boxed_641_, v_x_7716__boxed_642_, v_x_639_, v_x_640_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0___redArg(lean_object* v_x_644_, lean_object* v_x_645_, lean_object* v_x_646_){
_start:
{
size_t v___x_647_; size_t v___x_648_; size_t v___x_649_; uint64_t v___x_650_; size_t v___x_651_; size_t v___x_652_; lean_object* v___x_653_; 
v___x_647_ = lean_ptr_addr(v_x_645_);
v___x_648_ = ((size_t)3ULL);
v___x_649_ = lean_usize_shift_right(v___x_647_, v___x_648_);
v___x_650_ = lean_usize_to_uint64(v___x_649_);
v___x_651_ = lean_uint64_to_usize(v___x_650_);
v___x_652_ = ((size_t)1ULL);
v___x_653_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg(v_x_644_, v___x_651_, v___x_652_, v_x_645_, v_x_646_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___lam__0(lean_object* v_e_654_, lean_object* v_a_655_, lean_object* v_s_656_){
_start:
{
lean_object* v_rings_657_; lean_object* v_typeIdOf_658_; lean_object* v_exprToRingId_659_; lean_object* v_semirings_660_; lean_object* v_stypeIdOf_661_; lean_object* v_exprToSemiringId_662_; lean_object* v_ncRings_663_; lean_object* v_exprToNCRingId_664_; lean_object* v_nctypeIdOf_665_; lean_object* v_ncSemirings_666_; lean_object* v_exprToNCSemiringId_667_; lean_object* v_ncstypeIdOf_668_; lean_object* v_steps_669_; uint8_t v_reportedMaxDegreeIssue_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_678_; 
v_rings_657_ = lean_ctor_get(v_s_656_, 0);
v_typeIdOf_658_ = lean_ctor_get(v_s_656_, 1);
v_exprToRingId_659_ = lean_ctor_get(v_s_656_, 2);
v_semirings_660_ = lean_ctor_get(v_s_656_, 3);
v_stypeIdOf_661_ = lean_ctor_get(v_s_656_, 4);
v_exprToSemiringId_662_ = lean_ctor_get(v_s_656_, 5);
v_ncRings_663_ = lean_ctor_get(v_s_656_, 6);
v_exprToNCRingId_664_ = lean_ctor_get(v_s_656_, 7);
v_nctypeIdOf_665_ = lean_ctor_get(v_s_656_, 8);
v_ncSemirings_666_ = lean_ctor_get(v_s_656_, 9);
v_exprToNCSemiringId_667_ = lean_ctor_get(v_s_656_, 10);
v_ncstypeIdOf_668_ = lean_ctor_get(v_s_656_, 11);
v_steps_669_ = lean_ctor_get(v_s_656_, 12);
v_reportedMaxDegreeIssue_670_ = lean_ctor_get_uint8(v_s_656_, sizeof(void*)*13);
v_isSharedCheck_678_ = !lean_is_exclusive(v_s_656_);
if (v_isSharedCheck_678_ == 0)
{
v___x_672_ = v_s_656_;
v_isShared_673_ = v_isSharedCheck_678_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_steps_669_);
lean_inc(v_ncstypeIdOf_668_);
lean_inc(v_exprToNCSemiringId_667_);
lean_inc(v_ncSemirings_666_);
lean_inc(v_nctypeIdOf_665_);
lean_inc(v_exprToNCRingId_664_);
lean_inc(v_ncRings_663_);
lean_inc(v_exprToSemiringId_662_);
lean_inc(v_stypeIdOf_661_);
lean_inc(v_semirings_660_);
lean_inc(v_exprToRingId_659_);
lean_inc(v_typeIdOf_658_);
lean_inc(v_rings_657_);
lean_dec(v_s_656_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_678_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_674_; lean_object* v___x_676_; 
lean_inc(v_a_655_);
v___x_674_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0___redArg(v_exprToNCSemiringId_667_, v_e_654_, v_a_655_);
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 10, v___x_674_);
v___x_676_ = v___x_672_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_rings_657_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v_typeIdOf_658_);
lean_ctor_set(v_reuseFailAlloc_677_, 2, v_exprToRingId_659_);
lean_ctor_set(v_reuseFailAlloc_677_, 3, v_semirings_660_);
lean_ctor_set(v_reuseFailAlloc_677_, 4, v_stypeIdOf_661_);
lean_ctor_set(v_reuseFailAlloc_677_, 5, v_exprToSemiringId_662_);
lean_ctor_set(v_reuseFailAlloc_677_, 6, v_ncRings_663_);
lean_ctor_set(v_reuseFailAlloc_677_, 7, v_exprToNCRingId_664_);
lean_ctor_set(v_reuseFailAlloc_677_, 8, v_nctypeIdOf_665_);
lean_ctor_set(v_reuseFailAlloc_677_, 9, v_ncSemirings_666_);
lean_ctor_set(v_reuseFailAlloc_677_, 10, v___x_674_);
lean_ctor_set(v_reuseFailAlloc_677_, 11, v_ncstypeIdOf_668_);
lean_ctor_set(v_reuseFailAlloc_677_, 12, v_steps_669_);
lean_ctor_set_uint8(v_reuseFailAlloc_677_, sizeof(void*)*13, v_reportedMaxDegreeIssue_670_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___lam__0___boxed(lean_object* v_e_679_, lean_object* v_a_680_, lean_object* v_s_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___lam__0(v_e_679_, v_a_680_, v_s_681_);
lean_dec(v_a_680_);
return v_res_682_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___closed__1(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___closed__0));
v___x_685_ = l_Lean_stringToMessageData(v___x_684_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg(lean_object* v_e_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
lean_object* v___f_699_; lean_object* v___x_700_; 
lean_inc(v_a_687_);
lean_inc_ref(v_e_686_);
v___f_699_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_699_, 0, v_e_686_);
lean_closure_set(v___f_699_, 1, v_a_687_);
v___x_700_ = l_Lean_Meta_Grind_Arith_CommRing_getTermNonCommSemiringId_x3f___redArg(v_e_686_, v_a_688_, v_a_693_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref_known(v___x_700_, 1);
if (lean_obj_tag(v_a_701_) == 1)
{
lean_object* v_val_702_; uint8_t v___x_703_; 
lean_dec_ref(v___f_699_);
v_val_702_ = lean_ctor_get(v_a_701_, 0);
lean_inc(v_val_702_);
lean_dec_ref_known(v_a_701_, 1);
v___x_703_ = lean_nat_dec_eq(v_val_702_, v_a_687_);
lean_dec(v_val_702_);
if (v___x_703_ == 0)
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_704_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___closed__1);
v___x_705_ = l_Lean_indentExpr(v_e_686_);
v___x_706_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_704_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
v___x_707_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_689_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v_a_708_; uint8_t v_verbose_709_; 
v_a_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_708_);
lean_dec_ref_known(v___x_707_, 1);
v_verbose_709_ = lean_ctor_get_uint8(v_a_708_, 0);
lean_dec(v_a_708_);
if (v_verbose_709_ == 0)
{
lean_dec_ref_known(v___x_706_, 2);
goto v___jp_696_;
}
else
{
lean_object* v___x_710_; 
v___x_710_ = l_Lean_Meta_Sym_reportIssue(v___x_706_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_dec_ref_known(v___x_710_, 1);
goto v___jp_696_;
}
else
{
return v___x_710_;
}
}
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
lean_dec_ref_known(v___x_706_, 2);
v_a_711_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_707_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_707_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
else
{
lean_dec_ref(v_e_686_);
goto v___jp_696_;
}
}
else
{
lean_object* v___x_719_; lean_object* v___x_720_; 
lean_dec(v_a_701_);
lean_dec_ref(v_e_686_);
v___x_719_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_720_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_719_, v___f_699_, v_a_688_);
return v___x_720_;
}
}
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_728_; 
lean_dec_ref(v___f_699_);
lean_dec_ref(v_e_686_);
v_a_721_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_728_ == 0)
{
v___x_723_ = v___x_700_;
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_700_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_721_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
v___jp_696_:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = lean_box(0);
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg___boxed(lean_object* v_e_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg(v_e_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_, v_a_737_);
lean_dec(v_a_737_);
lean_dec_ref(v_a_736_);
lean_dec(v_a_735_);
lean_dec_ref(v_a_734_);
lean_dec(v_a_733_);
lean_dec_ref(v_a_732_);
lean_dec(v_a_731_);
lean_dec(v_a_730_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId(lean_object* v_e_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg(v_e_740_, v_a_741_, v_a_742_, v_a_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_, v_a_751_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___boxed(lean_object* v_e_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId(v_e_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_, v_a_760_, v_a_761_, v_a_762_, v_a_763_, v_a_764_, v_a_765_);
lean_dec(v_a_765_);
lean_dec_ref(v_a_764_);
lean_dec(v_a_763_);
lean_dec_ref(v_a_762_);
lean_dec(v_a_761_);
lean_dec_ref(v_a_760_);
lean_dec(v_a_759_);
lean_dec_ref(v_a_758_);
lean_dec(v_a_757_);
lean_dec(v_a_756_);
lean_dec(v_a_755_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0(lean_object* v_00_u03b2_768_, lean_object* v_x_769_, lean_object* v_x_770_, lean_object* v_x_771_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0___redArg(v_x_769_, v_x_770_, v_x_771_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0(lean_object* v_00_u03b2_773_, lean_object* v_x_774_, size_t v_x_775_, size_t v_x_776_, lean_object* v_x_777_, lean_object* v_x_778_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___redArg(v_x_774_, v_x_775_, v_x_776_, v_x_777_, v_x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0___boxed(lean_object* v_00_u03b2_780_, lean_object* v_x_781_, lean_object* v_x_782_, lean_object* v_x_783_, lean_object* v_x_784_, lean_object* v_x_785_){
_start:
{
size_t v_x_8001__boxed_786_; size_t v_x_8002__boxed_787_; lean_object* v_res_788_; 
v_x_8001__boxed_786_ = lean_unbox_usize(v_x_782_);
lean_dec(v_x_782_);
v_x_8002__boxed_787_ = lean_unbox_usize(v_x_783_);
lean_dec(v_x_783_);
v_res_788_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0(v_00_u03b2_780_, v_x_781_, v_x_8001__boxed_786_, v_x_8002__boxed_787_, v_x_784_, v_x_785_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_789_, lean_object* v_n_790_, lean_object* v_k_791_, lean_object* v_v_792_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1___redArg(v_n_790_, v_k_791_, v_v_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_794_, size_t v_depth_795_, lean_object* v_keys_796_, lean_object* v_vals_797_, lean_object* v_heq_798_, lean_object* v_i_799_, lean_object* v_entries_800_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2___redArg(v_depth_795_, v_keys_796_, v_vals_797_, v_i_799_, v_entries_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_802_, lean_object* v_depth_803_, lean_object* v_keys_804_, lean_object* v_vals_805_, lean_object* v_heq_806_, lean_object* v_i_807_, lean_object* v_entries_808_){
_start:
{
size_t v_depth_boxed_809_; lean_object* v_res_810_; 
v_depth_boxed_809_ = lean_unbox_usize(v_depth_803_);
lean_dec(v_depth_803_);
v_res_810_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__2(v_00_u03b2_802_, v_depth_boxed_809_, v_keys_804_, v_vals_805_, v_heq_806_, v_i_807_, v_entries_808_);
lean_dec_ref(v_vals_805_);
lean_dec_ref(v_keys_804_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_811_, lean_object* v_x_812_, lean_object* v_x_813_, lean_object* v_x_814_, lean_object* v_x_815_){
_start:
{
lean_object* v___x_816_; 
v___x_816_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(v_x_812_, v_x_813_, v_x_814_, v_x_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM___lam__0(lean_object* v_e_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg(v_e_817_, v___y_818_, v___y_819_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM___lam__0___boxed(lean_object* v_e_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdNonCommSemiringM___lam__0(v_e_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec(v___y_833_);
lean_dec(v___y_832_);
return v_res_844_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_NonCommSemiringM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadSemiringNonCommSemiringM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_NonCommSemiringM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_NonCommSemiringM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_NonCommSemiringM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_NonCommSemiringM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_NonCommSemiringM(builtin);
}
#ifdef __cplusplus
}
#endif

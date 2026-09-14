// Lean compiler output
// Module: Lean.Elab.Tactic.AsAuxLemma
// Imports: public import Lean.Elab.Tactic.Meta
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
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxTheorem(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
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
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "Cannot abstract term into auxiliary lemma because there are open goals."};
static const lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_elabAsAuxLemma___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_elabAsAuxLemma___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_elabAsAuxLemma___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_elabAsAuxLemma___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "as_aux_lemma"};
static const lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__3_value),LEAN_SCALAR_PTR_LITERAL(248, 107, 244, 71, 211, 100, 179, 147)}};
static const lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_elabAsAuxLemma___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Invalid as_aux_lemma syntax"};
static const lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_elabAsAuxLemma___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabAsAuxLemma"};
static const lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(18, 164, 209, 194, 176, 214, 145, 116)}};
static const lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1___redArg(v_e_30_, v___y_36_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1___boxed(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1(v_e_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(lean_object* v_x_52_, lean_object* v_x_53_, lean_object* v_x_54_, lean_object* v_x_55_){
_start:
{
lean_object* v_ks_56_; lean_object* v_vs_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_81_; 
v_ks_56_ = lean_ctor_get(v_x_52_, 0);
v_vs_57_ = lean_ctor_get(v_x_52_, 1);
v_isSharedCheck_81_ = !lean_is_exclusive(v_x_52_);
if (v_isSharedCheck_81_ == 0)
{
v___x_59_ = v_x_52_;
v_isShared_60_ = v_isSharedCheck_81_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_vs_57_);
lean_inc(v_ks_56_);
lean_dec(v_x_52_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_81_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_61_ = lean_array_get_size(v_ks_56_);
v___x_62_ = lean_nat_dec_lt(v_x_53_, v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
lean_dec(v_x_53_);
v___x_63_ = lean_array_push(v_ks_56_, v_x_54_);
v___x_64_ = lean_array_push(v_vs_57_, v_x_55_);
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 1, v___x_64_);
lean_ctor_set(v___x_59_, 0, v___x_63_);
v___x_66_ = v___x_59_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_63_);
lean_ctor_set(v_reuseFailAlloc_67_, 1, v___x_64_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
return v___x_66_;
}
}
else
{
lean_object* v_k_x27_68_; uint8_t v___x_69_; 
v_k_x27_68_ = lean_array_fget_borrowed(v_ks_56_, v_x_53_);
v___x_69_ = l_Lean_instBEqMVarId_beq(v_x_54_, v_k_x27_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_71_; 
if (v_isShared_60_ == 0)
{
v___x_71_ = v___x_59_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v_ks_56_);
lean_ctor_set(v_reuseFailAlloc_75_, 1, v_vs_57_);
v___x_71_ = v_reuseFailAlloc_75_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_unsigned_to_nat(1u);
v___x_73_ = lean_nat_add(v_x_53_, v___x_72_);
lean_dec(v_x_53_);
v_x_52_ = v___x_71_;
v_x_53_ = v___x_73_;
goto _start;
}
}
else
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_79_; 
v___x_76_ = lean_array_fset(v_ks_56_, v_x_53_, v_x_54_);
v___x_77_ = lean_array_fset(v_vs_57_, v_x_53_, v_x_55_);
lean_dec(v_x_53_);
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 1, v___x_77_);
lean_ctor_set(v___x_59_, 0, v___x_76_);
v___x_79_ = v___x_59_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___x_76_);
lean_ctor_set(v_reuseFailAlloc_80_, 1, v___x_77_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_n_82_, lean_object* v_k_83_, lean_object* v_v_84_){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_unsigned_to_nat(0u);
v___x_86_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(v_n_82_, v___x_85_, v_k_83_, v_v_84_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_box(0);
v___x_88_ = l_unsafeCast___redArg(v___x_87_);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(lean_object* v_x_90_, size_t v_x_91_, size_t v_x_92_, lean_object* v_x_93_, lean_object* v_x_94_){
_start:
{
if (lean_obj_tag(v_x_90_) == 0)
{
lean_object* v_es_95_; size_t v___x_96_; size_t v___x_97_; lean_object* v_j_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
v_es_95_ = lean_ctor_get(v_x_90_, 0);
v___x_96_ = ((size_t)31ULL);
v___x_97_ = lean_usize_land(v_x_91_, v___x_96_);
v_j_98_ = lean_usize_to_nat(v___x_97_);
v___x_99_ = lean_array_get_size(v_es_95_);
v___x_100_ = lean_nat_dec_lt(v_j_98_, v___x_99_);
if (v___x_100_ == 0)
{
lean_dec(v_j_98_);
lean_dec(v_x_94_);
lean_dec(v_x_93_);
return v_x_90_;
}
else
{
lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_139_; 
lean_inc_ref(v_es_95_);
v_isSharedCheck_139_ = !lean_is_exclusive(v_x_90_);
if (v_isSharedCheck_139_ == 0)
{
lean_object* v_unused_140_; 
v_unused_140_ = lean_ctor_get(v_x_90_, 0);
lean_dec(v_unused_140_);
v___x_102_ = v_x_90_;
v_isShared_103_ = v_isSharedCheck_139_;
goto v_resetjp_101_;
}
else
{
lean_dec(v_x_90_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_139_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v_v_104_; lean_object* v___x_105_; lean_object* v_xs_x27_106_; lean_object* v___y_108_; 
v_v_104_ = lean_array_fget(v_es_95_, v_j_98_);
v___x_105_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0);
v_xs_x27_106_ = lean_array_fset(v_es_95_, v_j_98_, v___x_105_);
switch(lean_obj_tag(v_v_104_))
{
case 0:
{
lean_object* v_key_113_; lean_object* v_val_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_124_; 
v_key_113_ = lean_ctor_get(v_v_104_, 0);
v_val_114_ = lean_ctor_get(v_v_104_, 1);
v_isSharedCheck_124_ = !lean_is_exclusive(v_v_104_);
if (v_isSharedCheck_124_ == 0)
{
v___x_116_ = v_v_104_;
v_isShared_117_ = v_isSharedCheck_124_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_val_114_);
lean_inc(v_key_113_);
lean_dec(v_v_104_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_124_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
uint8_t v___x_118_; 
v___x_118_ = l_Lean_instBEqMVarId_beq(v_x_93_, v_key_113_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; 
lean_del_object(v___x_116_);
v___x_119_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_113_, v_val_114_, v_x_93_, v_x_94_);
v___x_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
v___y_108_ = v___x_120_;
goto v___jp_107_;
}
else
{
lean_object* v___x_122_; 
lean_dec(v_val_114_);
lean_dec(v_key_113_);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 1, v_x_94_);
lean_ctor_set(v___x_116_, 0, v_x_93_);
v___x_122_ = v___x_116_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_x_93_);
lean_ctor_set(v_reuseFailAlloc_123_, 1, v_x_94_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
v___y_108_ = v___x_122_;
goto v___jp_107_;
}
}
}
}
case 1:
{
lean_object* v_node_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_137_; 
v_node_125_ = lean_ctor_get(v_v_104_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v_v_104_);
if (v_isSharedCheck_137_ == 0)
{
v___x_127_ = v_v_104_;
v_isShared_128_ = v_isSharedCheck_137_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_node_125_);
lean_dec(v_v_104_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_137_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
size_t v___x_129_; size_t v___x_130_; size_t v___x_131_; size_t v___x_132_; lean_object* v___x_133_; lean_object* v___x_135_; 
v___x_129_ = ((size_t)5ULL);
v___x_130_ = lean_usize_shift_right(v_x_91_, v___x_129_);
v___x_131_ = ((size_t)1ULL);
v___x_132_ = lean_usize_add(v_x_92_, v___x_131_);
v___x_133_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(v_node_125_, v___x_130_, v___x_132_, v_x_93_, v_x_94_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_133_);
v___x_135_ = v___x_127_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v___x_133_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
v___y_108_ = v___x_135_;
goto v___jp_107_;
}
}
}
default: 
{
lean_object* v___x_138_; 
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v_x_93_);
lean_ctor_set(v___x_138_, 1, v_x_94_);
v___y_108_ = v___x_138_;
goto v___jp_107_;
}
}
v___jp_107_:
{
lean_object* v___x_109_; lean_object* v___x_111_; 
v___x_109_ = lean_array_fset(v_xs_x27_106_, v_j_98_, v___y_108_);
lean_dec(v_j_98_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 0, v___x_109_);
v___x_111_ = v___x_102_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v___x_109_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
}
}
else
{
lean_object* v_ks_141_; lean_object* v_vs_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_160_; 
v_ks_141_ = lean_ctor_get(v_x_90_, 0);
v_vs_142_ = lean_ctor_get(v_x_90_, 1);
v_isSharedCheck_160_ = !lean_is_exclusive(v_x_90_);
if (v_isSharedCheck_160_ == 0)
{
v___x_144_ = v_x_90_;
v_isShared_145_ = v_isSharedCheck_160_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_vs_142_);
lean_inc(v_ks_141_);
lean_dec(v_x_90_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_160_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_ks_141_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v_vs_142_);
v___x_147_ = v_reuseFailAlloc_159_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
lean_object* v_newNode_148_; size_t v___x_149_; uint8_t v___x_150_; 
v_newNode_148_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5___redArg(v___x_147_, v_x_93_, v_x_94_);
v___x_149_ = ((size_t)7ULL);
v___x_150_ = lean_usize_dec_le(v___x_149_, v_x_92_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_151_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_148_);
v___x_152_ = lean_unsigned_to_nat(4u);
v___x_153_ = lean_nat_dec_lt(v___x_151_, v___x_152_);
lean_dec(v___x_151_);
if (v___x_153_ == 0)
{
lean_object* v_ks_154_; lean_object* v_vs_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_ks_154_ = lean_ctor_get(v_newNode_148_, 0);
lean_inc_ref(v_ks_154_);
v_vs_155_ = lean_ctor_get(v_newNode_148_, 1);
lean_inc_ref(v_vs_155_);
lean_dec_ref(v_newNode_148_);
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_158_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg(v_x_92_, v_ks_154_, v_vs_155_, v___x_156_, v___x_157_);
lean_dec_ref(v_vs_155_);
lean_dec_ref(v_ks_154_);
return v___x_158_;
}
else
{
return v_newNode_148_;
}
}
else
{
return v_newNode_148_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg(size_t v_depth_161_, lean_object* v_keys_162_, lean_object* v_vals_163_, lean_object* v_i_164_, lean_object* v_entries_165_){
_start:
{
lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_166_ = lean_array_get_size(v_keys_162_);
v___x_167_ = lean_nat_dec_lt(v_i_164_, v___x_166_);
if (v___x_167_ == 0)
{
lean_dec(v_i_164_);
return v_entries_165_;
}
else
{
lean_object* v_k_168_; lean_object* v_v_169_; uint64_t v___x_170_; size_t v_h_171_; size_t v___x_172_; lean_object* v___x_173_; size_t v___x_174_; size_t v___x_175_; size_t v___x_176_; size_t v_h_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v_k_168_ = lean_array_fget_borrowed(v_keys_162_, v_i_164_);
v_v_169_ = lean_array_fget_borrowed(v_vals_163_, v_i_164_);
v___x_170_ = l_Lean_instHashableMVarId_hash(v_k_168_);
v_h_171_ = lean_uint64_to_usize(v___x_170_);
v___x_172_ = ((size_t)5ULL);
v___x_173_ = lean_unsigned_to_nat(1u);
v___x_174_ = ((size_t)1ULL);
v___x_175_ = lean_usize_sub(v_depth_161_, v___x_174_);
v___x_176_ = lean_usize_mul(v___x_172_, v___x_175_);
v_h_177_ = lean_usize_shift_right(v_h_171_, v___x_176_);
v___x_178_ = lean_nat_add(v_i_164_, v___x_173_);
lean_dec(v_i_164_);
lean_inc(v_v_169_);
lean_inc(v_k_168_);
v___x_179_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(v_entries_165_, v_h_177_, v_depth_161_, v_k_168_, v_v_169_);
v_i_164_ = v___x_178_;
v_entries_165_ = v___x_179_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_depth_181_, lean_object* v_keys_182_, lean_object* v_vals_183_, lean_object* v_i_184_, lean_object* v_entries_185_){
_start:
{
size_t v_depth_boxed_186_; lean_object* v_res_187_; 
v_depth_boxed_186_ = lean_unbox_usize(v_depth_181_);
lean_dec(v_depth_181_);
v_res_187_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg(v_depth_boxed_186_, v_keys_182_, v_vals_183_, v_i_184_, v_entries_185_);
lean_dec_ref(v_vals_183_);
lean_dec_ref(v_keys_182_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_x_188_, lean_object* v_x_189_, lean_object* v_x_190_, lean_object* v_x_191_, lean_object* v_x_192_){
_start:
{
size_t v_x_4146__boxed_193_; size_t v_x_4147__boxed_194_; lean_object* v_res_195_; 
v_x_4146__boxed_193_ = lean_unbox_usize(v_x_189_);
lean_dec(v_x_189_);
v_x_4147__boxed_194_ = lean_unbox_usize(v_x_190_);
lean_dec(v_x_190_);
v_res_195_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(v_x_188_, v_x_4146__boxed_193_, v_x_4147__boxed_194_, v_x_191_, v_x_192_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3___redArg(lean_object* v_x_196_, lean_object* v_x_197_, lean_object* v_x_198_){
_start:
{
uint64_t v___x_199_; size_t v___x_200_; size_t v___x_201_; lean_object* v___x_202_; 
v___x_199_ = l_Lean_instHashableMVarId_hash(v_x_197_);
v___x_200_ = lean_uint64_to_usize(v___x_199_);
v___x_201_ = ((size_t)1ULL);
v___x_202_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(v_x_196_, v___x_200_, v___x_201_, v_x_197_, v_x_198_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2___redArg(lean_object* v_mvarId_203_, lean_object* v_val_204_, lean_object* v___y_205_){
_start:
{
lean_object* v___x_207_; lean_object* v_mctx_208_; lean_object* v_cache_209_; lean_object* v_zetaDeltaFVarIds_210_; lean_object* v_postponed_211_; lean_object* v_diag_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_241_; 
v___x_207_ = lean_st_ref_take(v___y_205_);
v_mctx_208_ = lean_ctor_get(v___x_207_, 0);
v_cache_209_ = lean_ctor_get(v___x_207_, 1);
v_zetaDeltaFVarIds_210_ = lean_ctor_get(v___x_207_, 2);
v_postponed_211_ = lean_ctor_get(v___x_207_, 3);
v_diag_212_ = lean_ctor_get(v___x_207_, 4);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_241_ == 0)
{
v___x_214_ = v___x_207_;
v_isShared_215_ = v_isSharedCheck_241_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_diag_212_);
lean_inc(v_postponed_211_);
lean_inc(v_zetaDeltaFVarIds_210_);
lean_inc(v_cache_209_);
lean_inc(v_mctx_208_);
lean_dec(v___x_207_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_241_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v_depth_216_; lean_object* v_levelAssignDepth_217_; lean_object* v_lmvarCounter_218_; lean_object* v_mvarCounter_219_; lean_object* v_lDecls_220_; lean_object* v_decls_221_; lean_object* v_userNames_222_; lean_object* v_lAssignment_223_; lean_object* v_eAssignment_224_; lean_object* v_dAssignment_225_; lean_object* v_instanceTypedMVars_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_240_; 
v_depth_216_ = lean_ctor_get(v_mctx_208_, 0);
v_levelAssignDepth_217_ = lean_ctor_get(v_mctx_208_, 1);
v_lmvarCounter_218_ = lean_ctor_get(v_mctx_208_, 2);
v_mvarCounter_219_ = lean_ctor_get(v_mctx_208_, 3);
v_lDecls_220_ = lean_ctor_get(v_mctx_208_, 4);
v_decls_221_ = lean_ctor_get(v_mctx_208_, 5);
v_userNames_222_ = lean_ctor_get(v_mctx_208_, 6);
v_lAssignment_223_ = lean_ctor_get(v_mctx_208_, 7);
v_eAssignment_224_ = lean_ctor_get(v_mctx_208_, 8);
v_dAssignment_225_ = lean_ctor_get(v_mctx_208_, 9);
v_instanceTypedMVars_226_ = lean_ctor_get(v_mctx_208_, 10);
v_isSharedCheck_240_ = !lean_is_exclusive(v_mctx_208_);
if (v_isSharedCheck_240_ == 0)
{
v___x_228_ = v_mctx_208_;
v_isShared_229_ = v_isSharedCheck_240_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_instanceTypedMVars_226_);
lean_inc(v_dAssignment_225_);
lean_inc(v_eAssignment_224_);
lean_inc(v_lAssignment_223_);
lean_inc(v_userNames_222_);
lean_inc(v_decls_221_);
lean_inc(v_lDecls_220_);
lean_inc(v_mvarCounter_219_);
lean_inc(v_lmvarCounter_218_);
lean_inc(v_levelAssignDepth_217_);
lean_inc(v_depth_216_);
lean_dec(v_mctx_208_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_240_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_230_ = lean_box(0);
v___x_231_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3___redArg(v_eAssignment_224_, v_mvarId_203_, v_val_204_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 8, v___x_231_);
v___x_233_ = v___x_228_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_depth_216_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v_levelAssignDepth_217_);
lean_ctor_set(v_reuseFailAlloc_239_, 2, v_lmvarCounter_218_);
lean_ctor_set(v_reuseFailAlloc_239_, 3, v_mvarCounter_219_);
lean_ctor_set(v_reuseFailAlloc_239_, 4, v_lDecls_220_);
lean_ctor_set(v_reuseFailAlloc_239_, 5, v_decls_221_);
lean_ctor_set(v_reuseFailAlloc_239_, 6, v_userNames_222_);
lean_ctor_set(v_reuseFailAlloc_239_, 7, v_lAssignment_223_);
lean_ctor_set(v_reuseFailAlloc_239_, 8, v___x_231_);
lean_ctor_set(v_reuseFailAlloc_239_, 9, v_dAssignment_225_);
lean_ctor_set(v_reuseFailAlloc_239_, 10, v_instanceTypedMVars_226_);
v___x_233_ = v_reuseFailAlloc_239_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v___x_235_; 
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_233_);
v___x_235_ = v___x_214_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_233_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_cache_209_);
lean_ctor_set(v_reuseFailAlloc_238_, 2, v_zetaDeltaFVarIds_210_);
lean_ctor_set(v_reuseFailAlloc_238_, 3, v_postponed_211_);
lean_ctor_set(v_reuseFailAlloc_238_, 4, v_diag_212_);
v___x_235_ = v_reuseFailAlloc_238_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = lean_st_ref_put(v___y_205_, v___x_235_);
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_230_);
return v___x_237_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2___redArg___boxed(lean_object* v_mvarId_242_, lean_object* v_val_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2___redArg(v_mvarId_242_, v_val_243_, v___y_244_);
lean_dec(v___y_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0_spec__0(lean_object* v_msgData_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v___x_253_; lean_object* v_env_254_; lean_object* v___x_255_; lean_object* v_toCold_256_; lean_object* v_mctx_257_; lean_object* v_lctx_258_; lean_object* v_options_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_253_ = lean_st_ref_get(v___y_251_);
v_env_254_ = lean_ctor_get(v___x_253_, 0);
lean_inc_ref(v_env_254_);
lean_dec(v___x_253_);
v___x_255_ = lean_st_ref_get(v___y_249_);
v_toCold_256_ = lean_ctor_get(v___y_250_, 0);
v_mctx_257_ = lean_ctor_get(v___x_255_, 0);
lean_inc_ref(v_mctx_257_);
lean_dec(v___x_255_);
v_lctx_258_ = lean_ctor_get(v___y_248_, 2);
v_options_259_ = lean_ctor_get(v_toCold_256_, 2);
lean_inc_ref(v_options_259_);
lean_inc_ref(v_lctx_258_);
v___x_260_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_260_, 0, v_env_254_);
lean_ctor_set(v___x_260_, 1, v_mctx_257_);
lean_ctor_set(v___x_260_, 2, v_lctx_258_);
lean_ctor_set(v___x_260_, 3, v_options_259_);
v___x_261_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v_msgData_247_);
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0_spec__0___boxed(lean_object* v_msgData_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0_spec__0(v_msgData_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0___redArg(lean_object* v_msg_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_ref_276_; lean_object* v___x_277_; lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_286_; 
v_ref_276_ = lean_ctor_get(v___y_273_, 2);
v___x_277_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0_spec__0(v_msg_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
v_a_278_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_286_ == 0)
{
v___x_280_ = v___x_277_;
v_isShared_281_ = v_isSharedCheck_286_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_277_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_286_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_282_; lean_object* v___x_284_; 
lean_inc(v_ref_276_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v_ref_276_);
lean_ctor_set(v___x_282_, 1, v_a_278_);
if (v_isShared_281_ == 0)
{
lean_ctor_set_tag(v___x_280_, 1);
lean_ctor_set(v___x_280_, 0, v___x_282_);
v___x_284_ = v___x_280_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_282_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0___redArg___boxed(lean_object* v_msg_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0___redArg(v_msg_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
lean_dec(v___y_289_);
lean_dec_ref(v___y_288_);
return v_res_293_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___closed__1(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = ((lean_object*)(l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___closed__0));
v___x_296_ = l_Lean_stringToMessageData(v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0(uint8_t v___x_297_, lean_object* v___x_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_300_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___y_311_; lean_object* v___y_312_; lean_object* v___y_313_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v___y_317_; lean_object* v___y_318_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc_n(v_a_309_, 2);
lean_dec_ref_known(v___x_308_, 1);
v___x_345_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_345_, 0, v___x_298_);
v___x_346_ = l_Lean_Elab_Tactic_run(v_a_309_, v___x_345_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; uint8_t v___x_348_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_a_347_);
lean_dec_ref_known(v___x_346_, 1);
v___x_348_ = l_List_isEmpty___redArg(v_a_347_);
lean_dec(v_a_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; lean_object* v___x_350_; 
lean_dec(v_a_309_);
v___x_349_ = lean_obj_once(&l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___closed__1, &l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___closed__1);
v___x_350_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0___redArg(v___x_349_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
return v___x_350_;
}
else
{
v___y_311_ = v___y_299_;
v___y_312_ = v___y_300_;
v___y_313_ = v___y_301_;
v___y_314_ = v___y_302_;
v___y_315_ = v___y_303_;
v___y_316_ = v___y_304_;
v___y_317_ = v___y_305_;
v___y_318_ = v___y_306_;
goto v___jp_310_;
}
}
else
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_358_; 
lean_dec(v_a_309_);
v_a_351_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_358_ == 0)
{
v___x_353_ = v___x_346_;
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_346_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_a_351_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
v___jp_310_:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v_a_321_; lean_object* v___x_322_; 
lean_inc_n(v_a_309_, 2);
v___x_319_ = l_Lean_mkMVar(v_a_309_);
v___x_320_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__1___redArg(v___x_319_, v___y_316_);
v_a_321_ = lean_ctor_get(v___x_320_, 0);
lean_inc(v_a_321_);
lean_dec_ref(v___x_320_);
v___x_322_ = l_Lean_MVarId_getType(v_a_309_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v_a_323_; uint8_t v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v_a_323_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_322_, 1);
v___x_324_ = 0;
v___x_325_ = lean_box(0);
v___x_326_ = l_Lean_Meta_mkAuxTheorem(v_a_323_, v_a_321_, v___x_324_, v___x_325_, v___x_297_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_328_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
lean_dec_ref_known(v___x_326_, 1);
v___x_328_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2___redArg(v_a_309_, v_a_327_, v___y_316_);
return v___x_328_;
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
lean_dec(v_a_309_);
v_a_329_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___x_326_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_326_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_329_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
else
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
lean_dec(v_a_321_);
lean_dec(v_a_309_);
v_a_337_ = lean_ctor_get(v___x_322_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_322_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_322_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
lean_dec(v___x_298_);
v_a_359_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_308_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_308_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___boxed(lean_object* v___x_367_, lean_object* v___x_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
uint8_t v___x_4424__boxed_378_; lean_object* v_res_379_; 
v___x_4424__boxed_378_ = lean_unbox(v___x_367_);
v_res_379_ = l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0(v___x_4424__boxed_378_, v___x_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
return v_res_379_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabAsAuxLemma___closed__6(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = ((lean_object*)(l_Lean_Elab_Tactic_elabAsAuxLemma___closed__5));
v___x_391_ = l_Lean_stringToMessageData(v___x_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma(lean_object* v_x_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_){
_start:
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = ((lean_object*)(l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4));
lean_inc(v_x_392_);
v___x_403_ = l_Lean_Syntax_isOfKind(v_x_392_, v___x_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec(v_x_392_);
v___x_404_ = lean_obj_once(&l_Lean_Elab_Tactic_elabAsAuxLemma___closed__6, &l_Lean_Elab_Tactic_elabAsAuxLemma___closed__6_once, _init_l_Lean_Elab_Tactic_elabAsAuxLemma___closed__6);
v___x_405_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0___redArg(v___x_404_, v_a_397_, v_a_398_, v_a_399_, v_a_400_);
return v___x_405_;
}
else
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___f_409_; lean_object* v___x_410_; 
v___x_406_ = lean_unsigned_to_nat(2u);
v___x_407_ = l_Lean_Syntax_getArg(v_x_392_, v___x_406_);
lean_dec(v_x_392_);
v___x_408_ = lean_box(v___x_403_);
v___f_409_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabAsAuxLemma___lam__0___boxed), 11, 2);
lean_closure_set(v___f_409_, 0, v___x_408_);
lean_closure_set(v___f_409_, 1, v___x_407_);
v___x_410_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_409_, v_a_393_, v_a_394_, v_a_395_, v_a_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_);
return v___x_410_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsAuxLemma___boxed(lean_object* v_x_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_Elab_Tactic_elabAsAuxLemma(v_x_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0(lean_object* v_00_u03b1_422_, lean_object* v_msg_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0___redArg(v_msg_423_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0___boxed(lean_object* v_00_u03b1_434_, lean_object* v_msg_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__0(v_00_u03b1_434_, v_msg_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2(lean_object* v_mvarId_446_, lean_object* v_val_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2___redArg(v_mvarId_446_, v_val_447_, v___y_453_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2___boxed(lean_object* v_mvarId_458_, lean_object* v_val_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2(v_mvarId_458_, v_val_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3(lean_object* v_00_u03b2_470_, lean_object* v_x_471_, lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3___redArg(v_x_471_, v_x_472_, v_x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_475_, lean_object* v_x_476_, size_t v_x_477_, size_t v_x_478_, lean_object* v_x_479_, lean_object* v_x_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(v_x_476_, v_x_477_, v_x_478_, v_x_479_, v_x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_482_, lean_object* v_x_483_, lean_object* v_x_484_, lean_object* v_x_485_, lean_object* v_x_486_, lean_object* v_x_487_){
_start:
{
size_t v_x_4708__boxed_488_; size_t v_x_4709__boxed_489_; lean_object* v_res_490_; 
v_x_4708__boxed_488_ = lean_unbox_usize(v_x_484_);
lean_dec(v_x_484_);
v_x_4709__boxed_489_ = lean_unbox_usize(v_x_485_);
lean_dec(v_x_485_);
v_res_490_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4(v_00_u03b2_482_, v_x_483_, v_x_4708__boxed_488_, v_x_4709__boxed_489_, v_x_486_, v_x_487_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_491_, lean_object* v_n_492_, lean_object* v_k_493_, lean_object* v_v_494_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5___redArg(v_n_492_, v_k_493_, v_v_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_496_, size_t v_depth_497_, lean_object* v_keys_498_, lean_object* v_vals_499_, lean_object* v_heq_500_, lean_object* v_i_501_, lean_object* v_entries_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg(v_depth_497_, v_keys_498_, v_vals_499_, v_i_501_, v_entries_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03b2_504_, lean_object* v_depth_505_, lean_object* v_keys_506_, lean_object* v_vals_507_, lean_object* v_heq_508_, lean_object* v_i_509_, lean_object* v_entries_510_){
_start:
{
size_t v_depth_boxed_511_; lean_object* v_res_512_; 
v_depth_boxed_511_ = lean_unbox_usize(v_depth_505_);
lean_dec(v_depth_505_);
v_res_512_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6(v_00_u03b2_504_, v_depth_boxed_511_, v_keys_506_, v_vals_507_, v_heq_508_, v_i_509_, v_entries_510_);
lean_dec_ref(v_vals_507_);
lean_dec_ref(v_keys_506_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_513_, lean_object* v_x_514_, lean_object* v_x_515_, lean_object* v_x_516_, lean_object* v_x_517_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(v_x_514_, v_x_515_, v_x_516_, v_x_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1(){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_527_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_528_ = ((lean_object*)(l_Lean_Elab_Tactic_elabAsAuxLemma___closed__4));
v___x_529_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___closed__2));
v___x_530_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabAsAuxLemma___boxed), 10, 0);
v___x_531_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_527_, v___x_528_, v___x_529_, v___x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1___boxed(lean_object* v_a_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1();
return v_res_533_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_AsAuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AsAuxLemma_0__Lean_Elab_Tactic_elabAsAuxLemma___regBuiltin_Lean_Elab_Tactic_elabAsAuxLemma__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_AsAuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_AsAuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_AsAuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_AsAuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_AsAuxLemma(builtin);
}
#ifdef __cplusplus
}
#endif

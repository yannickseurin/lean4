// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Clear
// Imports: public import Std.Tactic.Do.Syntax public import Lean.Elab.Tactic.Do.ProofMode.Focus
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
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
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_restGoal(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__0;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Clear"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "clear"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mclear"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__3_value),LEAN_SCALAR_PTR_LITERAL(107, 161, 32, 25, 224, 212, 229, 174)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabMClear"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(92, 83, 226, 112, 28, 79, 201, 237)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
lean_dec(v___y_26_);
lean_dec_ref(v___y_25_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1___redArg(lean_object* v_e_31_, lean_object* v___y_32_){
_start:
{
uint8_t v___x_34_; 
v___x_34_ = l_Lean_Expr_hasMVar(v_e_31_);
if (v___x_34_ == 0)
{
lean_object* v___x_35_; 
v___x_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_35_, 0, v_e_31_);
return v___x_35_;
}
else
{
lean_object* v___x_36_; lean_object* v_mctx_37_; lean_object* v___x_38_; lean_object* v_fst_39_; lean_object* v_snd_40_; lean_object* v___x_41_; lean_object* v_cache_42_; lean_object* v_zetaDeltaFVarIds_43_; lean_object* v_postponed_44_; lean_object* v_diag_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_54_; 
v___x_36_ = lean_st_ref_get(v___y_32_);
v_mctx_37_ = lean_ctor_get(v___x_36_, 0);
lean_inc_ref(v_mctx_37_);
lean_dec(v___x_36_);
v___x_38_ = l_Lean_instantiateMVarsCore(v_mctx_37_, v_e_31_);
v_fst_39_ = lean_ctor_get(v___x_38_, 0);
lean_inc(v_fst_39_);
v_snd_40_ = lean_ctor_get(v___x_38_, 1);
lean_inc(v_snd_40_);
lean_dec_ref(v___x_38_);
v___x_41_ = lean_st_ref_take(v___y_32_);
v_cache_42_ = lean_ctor_get(v___x_41_, 1);
v_zetaDeltaFVarIds_43_ = lean_ctor_get(v___x_41_, 2);
v_postponed_44_ = lean_ctor_get(v___x_41_, 3);
v_diag_45_ = lean_ctor_get(v___x_41_, 4);
v_isSharedCheck_54_ = !lean_is_exclusive(v___x_41_);
if (v_isSharedCheck_54_ == 0)
{
lean_object* v_unused_55_; 
v_unused_55_ = lean_ctor_get(v___x_41_, 0);
lean_dec(v_unused_55_);
v___x_47_ = v___x_41_;
v_isShared_48_ = v_isSharedCheck_54_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_diag_45_);
lean_inc(v_postponed_44_);
lean_inc(v_zetaDeltaFVarIds_43_);
lean_inc(v_cache_42_);
lean_dec(v___x_41_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_54_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 0, v_snd_40_);
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v_snd_40_);
lean_ctor_set(v_reuseFailAlloc_53_, 1, v_cache_42_);
lean_ctor_set(v_reuseFailAlloc_53_, 2, v_zetaDeltaFVarIds_43_);
lean_ctor_set(v_reuseFailAlloc_53_, 3, v_postponed_44_);
lean_ctor_set(v_reuseFailAlloc_53_, 4, v_diag_45_);
v___x_50_ = v_reuseFailAlloc_53_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_st_ref_put(v___y_32_, v___x_50_);
v___x_52_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_52_, 0, v_fst_39_);
return v___x_52_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1___redArg___boxed(lean_object* v_e_56_, lean_object* v___y_57_, lean_object* v___y_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1___redArg(v_e_56_, v___y_57_);
lean_dec(v___y_57_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1(lean_object* v_e_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1___redArg(v_e_60_, v___y_66_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1___boxed(lean_object* v_e_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1(v_e_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg___lam__0(lean_object* v_x_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v___x_92_; 
lean_inc(v___y_86_);
lean_inc_ref(v___y_85_);
lean_inc(v___y_84_);
lean_inc_ref(v___y_83_);
v___x_92_ = lean_apply_9(v_x_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, lean_box(0));
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg___lam__0___boxed(lean_object* v_x_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg___lam__0(v_x_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg(lean_object* v_mvarId_104_, lean_object* v_x_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___f_115_; lean_object* v___x_116_; 
lean_inc(v___y_109_);
lean_inc_ref(v___y_108_);
lean_inc(v___y_107_);
lean_inc_ref(v___y_106_);
v___f_115_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_115_, 0, v_x_105_);
lean_closure_set(v___f_115_, 1, v___y_106_);
lean_closure_set(v___f_115_, 2, v___y_107_);
lean_closure_set(v___f_115_, 3, v___y_108_);
lean_closure_set(v___f_115_, 4, v___y_109_);
v___x_116_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_104_, v___f_115_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
if (lean_obj_tag(v___x_116_) == 0)
{
return v___x_116_;
}
else
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_124_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_a_117_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg___boxed(lean_object* v_mvarId_125_, lean_object* v_x_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg(v_mvarId_125_, v_x_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4(lean_object* v_00_u03b1_137_, lean_object* v_mvarId_138_, lean_object* v_x_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg(v_mvarId_138_, v_x_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___boxed(lean_object* v_00_u03b1_150_, lean_object* v_mvarId_151_, lean_object* v_x_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4(v_00_u03b1_150_, v_mvarId_151_, v_x_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(lean_object* v_x_163_, lean_object* v_x_164_, lean_object* v_x_165_, lean_object* v_x_166_){
_start:
{
lean_object* v_ks_167_; lean_object* v_vs_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_192_; 
v_ks_167_ = lean_ctor_get(v_x_163_, 0);
v_vs_168_ = lean_ctor_get(v_x_163_, 1);
v_isSharedCheck_192_ = !lean_is_exclusive(v_x_163_);
if (v_isSharedCheck_192_ == 0)
{
v___x_170_ = v_x_163_;
v_isShared_171_ = v_isSharedCheck_192_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_vs_168_);
lean_inc(v_ks_167_);
lean_dec(v_x_163_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_192_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_172_ = lean_array_get_size(v_ks_167_);
v___x_173_ = lean_nat_dec_lt(v_x_164_, v___x_172_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
lean_dec(v_x_164_);
v___x_174_ = lean_array_push(v_ks_167_, v_x_165_);
v___x_175_ = lean_array_push(v_vs_168_, v_x_166_);
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 1, v___x_175_);
lean_ctor_set(v___x_170_, 0, v___x_174_);
v___x_177_ = v___x_170_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
else
{
lean_object* v_k_x27_179_; uint8_t v___x_180_; 
v_k_x27_179_ = lean_array_fget_borrowed(v_ks_167_, v_x_164_);
v___x_180_ = l_Lean_instBEqMVarId_beq(v_x_165_, v_k_x27_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_182_; 
if (v_isShared_171_ == 0)
{
v___x_182_ = v___x_170_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_ks_167_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v_vs_168_);
v___x_182_ = v_reuseFailAlloc_186_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_nat_add(v_x_164_, v___x_183_);
lean_dec(v_x_164_);
v_x_163_ = v___x_182_;
v_x_164_ = v___x_184_;
goto _start;
}
}
else
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_190_; 
v___x_187_ = lean_array_fset(v_ks_167_, v_x_164_, v_x_165_);
v___x_188_ = lean_array_fset(v_vs_168_, v_x_164_, v_x_166_);
lean_dec(v_x_164_);
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 1, v___x_188_);
lean_ctor_set(v___x_170_, 0, v___x_187_);
v___x_190_ = v___x_170_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_187_);
lean_ctor_set(v_reuseFailAlloc_191_, 1, v___x_188_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7___redArg(lean_object* v_n_193_, lean_object* v_k_194_, lean_object* v_v_195_){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(0u);
v___x_197_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(v_n_193_, v___x_196_, v_k_194_, v_v_195_);
return v___x_197_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_box(0);
v___x_199_ = l_unsafeCast___redArg(v___x_198_);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg(lean_object* v_x_201_, size_t v_x_202_, size_t v_x_203_, lean_object* v_x_204_, lean_object* v_x_205_){
_start:
{
if (lean_obj_tag(v_x_201_) == 0)
{
lean_object* v_es_206_; size_t v___x_207_; size_t v___x_208_; lean_object* v_j_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v_es_206_ = lean_ctor_get(v_x_201_, 0);
v___x_207_ = ((size_t)31ULL);
v___x_208_ = lean_usize_land(v_x_202_, v___x_207_);
v_j_209_ = lean_usize_to_nat(v___x_208_);
v___x_210_ = lean_array_get_size(v_es_206_);
v___x_211_ = lean_nat_dec_lt(v_j_209_, v___x_210_);
if (v___x_211_ == 0)
{
lean_dec(v_j_209_);
lean_dec(v_x_205_);
lean_dec(v_x_204_);
return v_x_201_;
}
else
{
lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_250_; 
lean_inc_ref(v_es_206_);
v_isSharedCheck_250_ = !lean_is_exclusive(v_x_201_);
if (v_isSharedCheck_250_ == 0)
{
lean_object* v_unused_251_; 
v_unused_251_ = lean_ctor_get(v_x_201_, 0);
lean_dec(v_unused_251_);
v___x_213_ = v_x_201_;
v_isShared_214_ = v_isSharedCheck_250_;
goto v_resetjp_212_;
}
else
{
lean_dec(v_x_201_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_250_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v_v_215_; lean_object* v___x_216_; lean_object* v_xs_x27_217_; lean_object* v___y_219_; 
v_v_215_ = lean_array_fget(v_es_206_, v_j_209_);
v___x_216_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__0);
v_xs_x27_217_ = lean_array_fset(v_es_206_, v_j_209_, v___x_216_);
switch(lean_obj_tag(v_v_215_))
{
case 0:
{
lean_object* v_key_224_; lean_object* v_val_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_235_; 
v_key_224_ = lean_ctor_get(v_v_215_, 0);
v_val_225_ = lean_ctor_get(v_v_215_, 1);
v_isSharedCheck_235_ = !lean_is_exclusive(v_v_215_);
if (v_isSharedCheck_235_ == 0)
{
v___x_227_ = v_v_215_;
v_isShared_228_ = v_isSharedCheck_235_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_val_225_);
lean_inc(v_key_224_);
lean_dec(v_v_215_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_235_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
uint8_t v___x_229_; 
v___x_229_ = l_Lean_instBEqMVarId_beq(v_x_204_, v_key_224_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; lean_object* v___x_231_; 
lean_del_object(v___x_227_);
v___x_230_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_224_, v_val_225_, v_x_204_, v_x_205_);
v___x_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
v___y_219_ = v___x_231_;
goto v___jp_218_;
}
else
{
lean_object* v___x_233_; 
lean_dec(v_val_225_);
lean_dec(v_key_224_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 1, v_x_205_);
lean_ctor_set(v___x_227_, 0, v_x_204_);
v___x_233_ = v___x_227_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_x_204_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v_x_205_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
v___y_219_ = v___x_233_;
goto v___jp_218_;
}
}
}
}
case 1:
{
lean_object* v_node_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_248_; 
v_node_236_ = lean_ctor_get(v_v_215_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v_v_215_);
if (v_isSharedCheck_248_ == 0)
{
v___x_238_ = v_v_215_;
v_isShared_239_ = v_isSharedCheck_248_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_node_236_);
lean_dec(v_v_215_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_248_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
size_t v___x_240_; size_t v___x_241_; size_t v___x_242_; size_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_246_; 
v___x_240_ = ((size_t)5ULL);
v___x_241_ = lean_usize_shift_right(v_x_202_, v___x_240_);
v___x_242_ = ((size_t)1ULL);
v___x_243_ = lean_usize_add(v_x_203_, v___x_242_);
v___x_244_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg(v_node_236_, v___x_241_, v___x_243_, v_x_204_, v_x_205_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_244_);
v___x_246_ = v___x_238_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_244_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
v___y_219_ = v___x_246_;
goto v___jp_218_;
}
}
}
default: 
{
lean_object* v___x_249_; 
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v_x_204_);
lean_ctor_set(v___x_249_, 1, v_x_205_);
v___y_219_ = v___x_249_;
goto v___jp_218_;
}
}
v___jp_218_:
{
lean_object* v___x_220_; lean_object* v___x_222_; 
v___x_220_ = lean_array_fset(v_xs_x27_217_, v_j_209_, v___y_219_);
lean_dec(v_j_209_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_220_);
v___x_222_ = v___x_213_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
}
else
{
lean_object* v_ks_252_; lean_object* v_vs_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_271_; 
v_ks_252_ = lean_ctor_get(v_x_201_, 0);
v_vs_253_ = lean_ctor_get(v_x_201_, 1);
v_isSharedCheck_271_ = !lean_is_exclusive(v_x_201_);
if (v_isSharedCheck_271_ == 0)
{
v___x_255_ = v_x_201_;
v_isShared_256_ = v_isSharedCheck_271_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_vs_253_);
lean_inc(v_ks_252_);
lean_dec(v_x_201_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_271_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_ks_252_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v_vs_253_);
v___x_258_ = v_reuseFailAlloc_270_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v_newNode_259_; size_t v___x_260_; uint8_t v___x_261_; 
v_newNode_259_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7___redArg(v___x_258_, v_x_204_, v_x_205_);
v___x_260_ = ((size_t)7ULL);
v___x_261_ = lean_usize_dec_le(v___x_260_, v_x_203_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_262_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_259_);
v___x_263_ = lean_unsigned_to_nat(4u);
v___x_264_ = lean_nat_dec_lt(v___x_262_, v___x_263_);
lean_dec(v___x_262_);
if (v___x_264_ == 0)
{
lean_object* v_ks_265_; lean_object* v_vs_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v_ks_265_ = lean_ctor_get(v_newNode_259_, 0);
lean_inc_ref(v_ks_265_);
v_vs_266_ = lean_ctor_get(v_newNode_259_, 1);
lean_inc_ref(v_vs_266_);
lean_dec_ref(v_newNode_259_);
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___closed__1);
v___x_269_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8___redArg(v_x_203_, v_ks_265_, v_vs_266_, v___x_267_, v___x_268_);
lean_dec_ref(v_vs_266_);
lean_dec_ref(v_ks_265_);
return v___x_269_;
}
else
{
return v_newNode_259_;
}
}
else
{
return v_newNode_259_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8___redArg(size_t v_depth_272_, lean_object* v_keys_273_, lean_object* v_vals_274_, lean_object* v_i_275_, lean_object* v_entries_276_){
_start:
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = lean_array_get_size(v_keys_273_);
v___x_278_ = lean_nat_dec_lt(v_i_275_, v___x_277_);
if (v___x_278_ == 0)
{
lean_dec(v_i_275_);
return v_entries_276_;
}
else
{
lean_object* v_k_279_; lean_object* v_v_280_; uint64_t v___x_281_; size_t v_h_282_; size_t v___x_283_; lean_object* v___x_284_; size_t v___x_285_; size_t v___x_286_; size_t v___x_287_; size_t v_h_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v_k_279_ = lean_array_fget_borrowed(v_keys_273_, v_i_275_);
v_v_280_ = lean_array_fget_borrowed(v_vals_274_, v_i_275_);
v___x_281_ = l_Lean_instHashableMVarId_hash(v_k_279_);
v_h_282_ = lean_uint64_to_usize(v___x_281_);
v___x_283_ = ((size_t)5ULL);
v___x_284_ = lean_unsigned_to_nat(1u);
v___x_285_ = ((size_t)1ULL);
v___x_286_ = lean_usize_sub(v_depth_272_, v___x_285_);
v___x_287_ = lean_usize_mul(v___x_283_, v___x_286_);
v_h_288_ = lean_usize_shift_right(v_h_282_, v___x_287_);
v___x_289_ = lean_nat_add(v_i_275_, v___x_284_);
lean_dec(v_i_275_);
lean_inc(v_v_280_);
lean_inc(v_k_279_);
v___x_290_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg(v_entries_276_, v_h_288_, v_depth_272_, v_k_279_, v_v_280_);
v_i_275_ = v___x_289_;
v_entries_276_ = v___x_290_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_292_, lean_object* v_keys_293_, lean_object* v_vals_294_, lean_object* v_i_295_, lean_object* v_entries_296_){
_start:
{
size_t v_depth_boxed_297_; lean_object* v_res_298_; 
v_depth_boxed_297_ = lean_unbox_usize(v_depth_292_);
lean_dec(v_depth_292_);
v_res_298_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8___redArg(v_depth_boxed_297_, v_keys_293_, v_vals_294_, v_i_295_, v_entries_296_);
lean_dec_ref(v_vals_294_);
lean_dec_ref(v_keys_293_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v_x_299_, lean_object* v_x_300_, lean_object* v_x_301_, lean_object* v_x_302_, lean_object* v_x_303_){
_start:
{
size_t v_x_6456__boxed_304_; size_t v_x_6457__boxed_305_; lean_object* v_res_306_; 
v_x_6456__boxed_304_ = lean_unbox_usize(v_x_300_);
lean_dec(v_x_300_);
v_x_6457__boxed_305_ = lean_unbox_usize(v_x_301_);
lean_dec(v_x_301_);
v_res_306_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg(v_x_299_, v_x_6456__boxed_304_, v_x_6457__boxed_305_, v_x_302_, v_x_303_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2___redArg(lean_object* v_x_307_, lean_object* v_x_308_, lean_object* v_x_309_){
_start:
{
uint64_t v___x_310_; size_t v___x_311_; size_t v___x_312_; lean_object* v___x_313_; 
v___x_310_ = l_Lean_instHashableMVarId_hash(v_x_308_);
v___x_311_ = lean_uint64_to_usize(v___x_310_);
v___x_312_ = ((size_t)1ULL);
v___x_313_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg(v_x_307_, v___x_311_, v___x_312_, v_x_308_, v_x_309_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2___redArg(lean_object* v_mvarId_314_, lean_object* v_val_315_, lean_object* v___y_316_){
_start:
{
lean_object* v___x_318_; lean_object* v_mctx_319_; lean_object* v_cache_320_; lean_object* v_zetaDeltaFVarIds_321_; lean_object* v_postponed_322_; lean_object* v_diag_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_352_; 
v___x_318_ = lean_st_ref_take(v___y_316_);
v_mctx_319_ = lean_ctor_get(v___x_318_, 0);
v_cache_320_ = lean_ctor_get(v___x_318_, 1);
v_zetaDeltaFVarIds_321_ = lean_ctor_get(v___x_318_, 2);
v_postponed_322_ = lean_ctor_get(v___x_318_, 3);
v_diag_323_ = lean_ctor_get(v___x_318_, 4);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_352_ == 0)
{
v___x_325_ = v___x_318_;
v_isShared_326_ = v_isSharedCheck_352_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_diag_323_);
lean_inc(v_postponed_322_);
lean_inc(v_zetaDeltaFVarIds_321_);
lean_inc(v_cache_320_);
lean_inc(v_mctx_319_);
lean_dec(v___x_318_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_352_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v_depth_327_; lean_object* v_levelAssignDepth_328_; lean_object* v_lmvarCounter_329_; lean_object* v_mvarCounter_330_; lean_object* v_lDecls_331_; lean_object* v_decls_332_; lean_object* v_userNames_333_; lean_object* v_lAssignment_334_; lean_object* v_eAssignment_335_; lean_object* v_dAssignment_336_; lean_object* v_instanceTypedMVars_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_351_; 
v_depth_327_ = lean_ctor_get(v_mctx_319_, 0);
v_levelAssignDepth_328_ = lean_ctor_get(v_mctx_319_, 1);
v_lmvarCounter_329_ = lean_ctor_get(v_mctx_319_, 2);
v_mvarCounter_330_ = lean_ctor_get(v_mctx_319_, 3);
v_lDecls_331_ = lean_ctor_get(v_mctx_319_, 4);
v_decls_332_ = lean_ctor_get(v_mctx_319_, 5);
v_userNames_333_ = lean_ctor_get(v_mctx_319_, 6);
v_lAssignment_334_ = lean_ctor_get(v_mctx_319_, 7);
v_eAssignment_335_ = lean_ctor_get(v_mctx_319_, 8);
v_dAssignment_336_ = lean_ctor_get(v_mctx_319_, 9);
v_instanceTypedMVars_337_ = lean_ctor_get(v_mctx_319_, 10);
v_isSharedCheck_351_ = !lean_is_exclusive(v_mctx_319_);
if (v_isSharedCheck_351_ == 0)
{
v___x_339_ = v_mctx_319_;
v_isShared_340_ = v_isSharedCheck_351_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_instanceTypedMVars_337_);
lean_inc(v_dAssignment_336_);
lean_inc(v_eAssignment_335_);
lean_inc(v_lAssignment_334_);
lean_inc(v_userNames_333_);
lean_inc(v_decls_332_);
lean_inc(v_lDecls_331_);
lean_inc(v_mvarCounter_330_);
lean_inc(v_lmvarCounter_329_);
lean_inc(v_levelAssignDepth_328_);
lean_inc(v_depth_327_);
lean_dec(v_mctx_319_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_351_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_344_; 
v___x_341_ = lean_box(0);
v___x_342_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2___redArg(v_eAssignment_335_, v_mvarId_314_, v_val_315_);
if (v_isShared_340_ == 0)
{
lean_ctor_set(v___x_339_, 8, v___x_342_);
v___x_344_ = v___x_339_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_depth_327_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_levelAssignDepth_328_);
lean_ctor_set(v_reuseFailAlloc_350_, 2, v_lmvarCounter_329_);
lean_ctor_set(v_reuseFailAlloc_350_, 3, v_mvarCounter_330_);
lean_ctor_set(v_reuseFailAlloc_350_, 4, v_lDecls_331_);
lean_ctor_set(v_reuseFailAlloc_350_, 5, v_decls_332_);
lean_ctor_set(v_reuseFailAlloc_350_, 6, v_userNames_333_);
lean_ctor_set(v_reuseFailAlloc_350_, 7, v_lAssignment_334_);
lean_ctor_set(v_reuseFailAlloc_350_, 8, v___x_342_);
lean_ctor_set(v_reuseFailAlloc_350_, 9, v_dAssignment_336_);
lean_ctor_set(v_reuseFailAlloc_350_, 10, v_instanceTypedMVars_337_);
v___x_344_ = v_reuseFailAlloc_350_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_346_; 
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 0, v___x_344_);
v___x_346_ = v___x_325_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_344_);
lean_ctor_set(v_reuseFailAlloc_349_, 1, v_cache_320_);
lean_ctor_set(v_reuseFailAlloc_349_, 2, v_zetaDeltaFVarIds_321_);
lean_ctor_set(v_reuseFailAlloc_349_, 3, v_postponed_322_);
lean_ctor_set(v_reuseFailAlloc_349_, 4, v_diag_323_);
v___x_346_ = v_reuseFailAlloc_349_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_st_ref_put(v___y_316_, v___x_346_);
v___x_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_341_);
return v___x_348_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2___redArg___boxed(lean_object* v_mvarId_353_, lean_object* v_val_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2___redArg(v_mvarId_353_, v_val_354_, v___y_355_);
lean_dec(v___y_355_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3_spec__4(lean_object* v_msgData_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v___x_364_; lean_object* v_env_365_; lean_object* v___x_366_; lean_object* v_toCold_367_; lean_object* v_mctx_368_; lean_object* v_lctx_369_; lean_object* v_options_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_364_ = lean_st_ref_get(v___y_362_);
v_env_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc_ref(v_env_365_);
lean_dec(v___x_364_);
v___x_366_ = lean_st_ref_get(v___y_360_);
v_toCold_367_ = lean_ctor_get(v___y_361_, 0);
v_mctx_368_ = lean_ctor_get(v___x_366_, 0);
lean_inc_ref(v_mctx_368_);
lean_dec(v___x_366_);
v_lctx_369_ = lean_ctor_get(v___y_359_, 2);
v_options_370_ = lean_ctor_get(v_toCold_367_, 2);
lean_inc_ref(v_options_370_);
lean_inc_ref(v_lctx_369_);
v___x_371_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_371_, 0, v_env_365_);
lean_ctor_set(v___x_371_, 1, v_mctx_368_);
lean_ctor_set(v___x_371_, 2, v_lctx_369_);
lean_ctor_set(v___x_371_, 3, v_options_370_);
v___x_372_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v_msgData_358_);
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3_spec__4___boxed(lean_object* v_msgData_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3_spec__4(v_msgData_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3___redArg(lean_object* v_msg_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v_ref_387_; lean_object* v___x_388_; lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_397_; 
v_ref_387_ = lean_ctor_get(v___y_384_, 2);
v___x_388_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3_spec__4(v_msg_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_);
v_a_389_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_397_ == 0)
{
v___x_391_ = v___x_388_;
v_isShared_392_ = v_isSharedCheck_397_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_388_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_397_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_395_; 
lean_inc(v_ref_387_);
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v_ref_387_);
lean_ctor_set(v___x_393_, 1, v_a_389_);
if (v_isShared_392_ == 0)
{
lean_ctor_set_tag(v___x_391_, 1);
lean_ctor_set(v___x_391_, 0, v___x_393_);
v___x_395_ = v___x_391_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v___x_393_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3___redArg___boxed(lean_object* v_msg_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3___redArg(v_msg_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
return v_res_404_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__0(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_box(0);
v___x_406_ = l_unsafeCast___redArg(v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__7(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__6));
v___x_414_ = l_Lean_stringToMessageData(v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0(lean_object* v_a_415_, lean_object* v_hyp_416_, lean_object* v___x_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v___x_427_; 
lean_inc(v_a_415_);
v___x_427_ = l_Lean_MVarId_getType(v_a_415_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_429_; lean_object* v_a_430_; lean_object* v___x_431_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_a_428_);
lean_dec_ref_known(v___x_427_, 1);
v___x_429_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__1___redArg(v_a_428_, v___y_423_);
v_a_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_430_);
lean_dec_ref(v___x_429_);
v___x_431_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_430_);
lean_dec(v_a_430_);
if (lean_obj_tag(v___x_431_) == 1)
{
lean_object* v_val_432_; lean_object* v___x_433_; 
v_val_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc_n(v_val_432_, 2);
lean_dec_ref_known(v___x_431_, 1);
v___x_433_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(v_val_432_, v_hyp_416_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_434_);
lean_dec_ref_known(v___x_433_, 1);
lean_inc(v_val_432_);
v___x_435_ = l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_restGoal(v_a_434_, v_val_432_);
v___x_436_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_435_);
v___x_437_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__0);
v___x_438_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_436_, v___x_437_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v_u_440_; lean_object* v_00_u03c3s_441_; lean_object* v_hyps_442_; lean_object* v_target_443_; lean_object* v_focusHyp_444_; lean_object* v_restHyps_445_; lean_object* v_proof_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc_n(v_a_439_, 2);
lean_dec_ref_known(v___x_438_, 1);
v_u_440_ = lean_ctor_get(v_val_432_, 0);
lean_inc(v_u_440_);
v_00_u03c3s_441_ = lean_ctor_get(v_val_432_, 1);
lean_inc_ref(v_00_u03c3s_441_);
v_hyps_442_ = lean_ctor_get(v_val_432_, 2);
lean_inc_ref(v_hyps_442_);
v_target_443_ = lean_ctor_get(v_val_432_, 3);
lean_inc_ref(v_target_443_);
lean_dec(v_val_432_);
v_focusHyp_444_ = lean_ctor_get(v_a_434_, 0);
lean_inc_ref(v_focusHyp_444_);
v_restHyps_445_ = lean_ctor_get(v_a_434_, 1);
lean_inc_ref(v_restHyps_445_);
v_proof_446_ = lean_ctor_get(v_a_434_, 2);
lean_inc_ref(v_proof_446_);
lean_dec(v_a_434_);
v___x_447_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__1));
v___x_448_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__2));
v___x_449_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__3));
v___x_450_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__4));
v___x_451_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__5));
v___x_452_ = l_Lean_Name_mkStr6(v___x_447_, v___x_448_, v___x_449_, v___x_417_, v___x_450_, v___x_451_);
v___x_453_ = lean_box(0);
v___x_454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_454_, 0, v_u_440_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
v___x_455_ = l_Lean_mkConst(v___x_452_, v___x_454_);
v___x_456_ = l_Lean_mkApp7(v___x_455_, v_00_u03c3s_441_, v_hyps_442_, v_restHyps_445_, v_focusHyp_444_, v_target_443_, v_proof_446_, v_a_439_);
v___x_457_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2___redArg(v_a_415_, v___x_456_, v___y_423_);
lean_dec_ref(v___x_457_);
v___x_458_ = l_Lean_Expr_mvarId_x21(v_a_439_);
lean_dec(v_a_439_);
v___x_459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v___x_453_);
v___x_460_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_459_, v___y_419_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
return v___x_460_;
}
else
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
lean_dec(v_a_434_);
lean_dec(v_val_432_);
lean_dec_ref(v___x_417_);
lean_dec(v_a_415_);
v_a_461_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_438_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_438_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
else
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
lean_dec(v_val_432_);
lean_dec_ref(v___x_417_);
lean_dec(v_a_415_);
v_a_469_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v___x_433_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_433_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
else
{
lean_object* v___x_477_; lean_object* v___x_478_; 
lean_dec(v___x_431_);
lean_dec_ref(v___x_417_);
lean_dec(v_hyp_416_);
lean_dec(v_a_415_);
v___x_477_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___closed__7);
v___x_478_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3___redArg(v___x_477_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
return v___x_478_;
}
}
else
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
lean_dec_ref(v___x_417_);
lean_dec(v_hyp_416_);
lean_dec(v_a_415_);
v_a_479_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___x_427_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_427_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___boxed(lean_object* v_a_487_, lean_object* v_hyp_488_, lean_object* v___x_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0(v_a_487_, v_hyp_488_, v___x_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear(lean_object* v_x_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_522_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__2));
v___x_523_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4));
lean_inc(v_x_512_);
v___x_524_ = l_Lean_Syntax_isOfKind(v_x_512_, v___x_523_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; 
lean_dec(v_x_512_);
v___x_525_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg();
return v___x_525_;
}
else
{
lean_object* v___x_526_; lean_object* v_hyp_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_526_ = lean_unsigned_to_nat(1u);
v_hyp_527_ = l_Lean_Syntax_getArg(v_x_512_, v___x_526_);
lean_dec(v_x_512_);
v___x_528_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__6));
lean_inc(v_hyp_527_);
v___x_529_ = l_Lean_Syntax_isOfKind(v_hyp_527_, v___x_528_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
lean_dec(v_hyp_527_);
v___x_530_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__0___redArg();
return v___x_530_;
}
else
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_514_, v_a_517_, v_a_518_, v_a_519_, v_a_520_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___f_533_; lean_object* v___x_534_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc_n(v_a_532_, 2);
lean_dec_ref_known(v___x_531_, 1);
v___f_533_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___lam__0___boxed), 12, 3);
lean_closure_set(v___f_533_, 0, v_a_532_);
lean_closure_set(v___f_533_, 1, v_hyp_527_);
lean_closure_set(v___f_533_, 2, v___x_522_);
v___x_534_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__4___redArg(v_a_532_, v___f_533_, v_a_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_);
return v___x_534_;
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
lean_dec(v_hyp_527_);
v_a_535_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_531_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_531_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___boxed(lean_object* v_x_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMClear(v_x_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_, v_a_551_);
lean_dec(v_a_551_);
lean_dec_ref(v_a_550_);
lean_dec(v_a_549_);
lean_dec_ref(v_a_548_);
lean_dec(v_a_547_);
lean_dec_ref(v_a_546_);
lean_dec(v_a_545_);
lean_dec_ref(v_a_544_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2(lean_object* v_mvarId_554_, lean_object* v_val_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2___redArg(v_mvarId_554_, v_val_555_, v___y_561_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2___boxed(lean_object* v_mvarId_566_, lean_object* v_val_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2(v_mvarId_566_, v_val_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3(lean_object* v_00_u03b1_578_, lean_object* v_msg_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3___redArg(v_msg_579_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3___boxed(lean_object* v_00_u03b1_590_, lean_object* v_msg_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__3(v_00_u03b1_590_, v_msg_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2(lean_object* v_00_u03b2_602_, lean_object* v_x_603_, lean_object* v_x_604_, lean_object* v_x_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2___redArg(v_x_603_, v_x_604_, v_x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4(lean_object* v_00_u03b2_607_, lean_object* v_x_608_, size_t v_x_609_, size_t v_x_610_, lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___redArg(v_x_608_, v_x_609_, v_x_610_, v_x_611_, v_x_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4___boxed(lean_object* v_00_u03b2_614_, lean_object* v_x_615_, lean_object* v_x_616_, lean_object* v_x_617_, lean_object* v_x_618_, lean_object* v_x_619_){
_start:
{
size_t v_x_7049__boxed_620_; size_t v_x_7050__boxed_621_; lean_object* v_res_622_; 
v_x_7049__boxed_620_ = lean_unbox_usize(v_x_616_);
lean_dec(v_x_616_);
v_x_7050__boxed_621_ = lean_unbox_usize(v_x_617_);
lean_dec(v_x_617_);
v_res_622_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4(v_00_u03b2_614_, v_x_615_, v_x_7049__boxed_620_, v_x_7050__boxed_621_, v_x_618_, v_x_619_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_623_, lean_object* v_n_624_, lean_object* v_k_625_, lean_object* v_v_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7___redArg(v_n_624_, v_k_625_, v_v_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_628_, size_t v_depth_629_, lean_object* v_keys_630_, lean_object* v_vals_631_, lean_object* v_heq_632_, lean_object* v_i_633_, lean_object* v_entries_634_){
_start:
{
lean_object* v___x_635_; 
v___x_635_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8___redArg(v_depth_629_, v_keys_630_, v_vals_631_, v_i_633_, v_entries_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_636_, lean_object* v_depth_637_, lean_object* v_keys_638_, lean_object* v_vals_639_, lean_object* v_heq_640_, lean_object* v_i_641_, lean_object* v_entries_642_){
_start:
{
size_t v_depth_boxed_643_; lean_object* v_res_644_; 
v_depth_boxed_643_ = lean_unbox_usize(v_depth_637_);
lean_dec(v_depth_637_);
v_res_644_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__8(v_00_u03b2_636_, v_depth_boxed_643_, v_keys_638_, v_vals_639_, v_heq_640_, v_i_641_, v_entries_642_);
lean_dec_ref(v_vals_639_);
lean_dec_ref(v_keys_638_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7_spec__8(lean_object* v_00_u03b2_645_, lean_object* v_x_646_, lean_object* v_x_647_, lean_object* v_x_648_, lean_object* v_x_649_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMClear_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(v_x_646_, v_x_647_, v_x_648_, v_x_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1(){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_662_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_663_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___closed__4));
v___x_664_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___closed__3));
v___x_665_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMClear___boxed), 10, 0);
v___x_666_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_662_, v___x_663_, v___x_664_, v___x_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1___boxed(lean_object* v_a_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1();
return v_res_668_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Clear(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Clear_0__Lean_Elab_Tactic_Do_ProofMode_elabMClear___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMClear__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Clear(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Clear(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Clear(builtin);
}
#ifdef __cplusplus
}
#endif

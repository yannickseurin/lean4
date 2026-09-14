// Lean compiler output
// Module: Lean.Elab.Tactic.Conv.Lets
// Imports: public import Lean.Elab.Tactic.Lets public import Lean.Elab.Tactic.Conv.Basic
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
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_getNameOfIdent_x27(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getLhsRhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_mkConvGoalFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_extractLetsAddVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getLhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_changeLhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "(internal error) non-defeq in assignment"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "made no progress"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2(lean_object*, lean_object*, lean_object*, size_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extract_lets"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 33, 143, 120, 246, 234, 114, 64)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3(lean_object*, lean_object*, size_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Conv"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "extractLets"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__4_value),LEAN_SCALAR_PTR_LITERAL(84, 111, 123, 142, 92, 98, 88, 43)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__6_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "evalExtractLets"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 244, 234, 55, 146, 240, 50, 65)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lift_lets"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 227, 82, 255, 128, 171, 101)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "liftLets"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 68, 102, 93, 72, 158, 25, 211)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "evalLiftLets"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 101, 191, 197, 167, 255, 65, 77)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "let_to_have"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 121, 21, 93, 142, 174, 18, 85)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letToHave"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 168, 69, 201, 229, 158, 224, 21)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalLetToHave"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(46, 117, 55, 170, 83, 87, 254, 102)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg(lean_object* v_mvarId_31_, lean_object* v_x_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_31_, v_x_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_);
if (lean_obj_tag(v___x_38_) == 0)
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_38_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_38_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_38_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_38_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_44_; 
if (v_isShared_42_ == 0)
{
v___x_44_ = v___x_41_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_a_39_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
else
{
lean_object* v_a_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_54_; 
v_a_47_ = lean_ctor_get(v___x_38_, 0);
v_isSharedCheck_54_ = !lean_is_exclusive(v___x_38_);
if (v_isSharedCheck_54_ == 0)
{
v___x_49_ = v___x_38_;
v_isShared_50_ = v_isSharedCheck_54_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_a_47_);
lean_dec(v___x_38_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_54_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_52_; 
if (v_isShared_50_ == 0)
{
v___x_52_ = v___x_49_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v_a_47_);
v___x_52_ = v_reuseFailAlloc_53_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
return v___x_52_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg___boxed(lean_object* v_mvarId_55_, lean_object* v_x_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg(v_mvarId_55_, v_x_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4(lean_object* v_00_u03b1_63_, lean_object* v_mvarId_64_, lean_object* v_x_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg(v_mvarId_64_, v_x_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___boxed(lean_object* v_00_u03b1_72_, lean_object* v_mvarId_73_, lean_object* v_x_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4(v_00_u03b1_72_, v_mvarId_73_, v_x_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0(lean_object* v_k_81_, lean_object* v_b_82_, lean_object* v_c_83_, lean_object* v_d_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v___x_90_; 
lean_inc(v___y_88_);
lean_inc_ref(v___y_87_);
lean_inc(v___y_86_);
lean_inc_ref(v___y_85_);
v___x_90_ = lean_apply_8(v_k_81_, v_b_82_, v_c_83_, v_d_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, lean_box(0));
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0___boxed(lean_object* v_k_91_, lean_object* v_b_92_, lean_object* v_c_93_, lean_object* v_d_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0(v_k_91_, v_b_92_, v_c_93_, v_d_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg(lean_object* v_es_101_, lean_object* v_givenNames_102_, lean_object* v_k_103_, lean_object* v_config_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___f_110_; lean_object* v___x_111_; 
v___f_110_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_110_, 0, v_k_103_);
v___x_111_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_box(0), v_es_101_, v_givenNames_102_, v___f_110_, v_config_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
if (lean_obj_tag(v___x_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
v_a_112_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___x_111_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_111_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
v_a_120_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_111_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_111_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___boxed(lean_object* v_es_128_, lean_object* v_givenNames_129_, lean_object* v_k_130_, lean_object* v_config_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg(v_es_128_, v_givenNames_129_, v_k_130_, v_config_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec_ref(v_config_131_);
lean_dec_ref(v_es_128_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5(lean_object* v_00_u03b1_138_, lean_object* v_es_139_, lean_object* v_givenNames_140_, lean_object* v_k_141_, lean_object* v_config_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg(v_es_139_, v_givenNames_140_, v_k_141_, v_config_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___boxed(lean_object* v_00_u03b1_149_, lean_object* v_es_150_, lean_object* v_givenNames_151_, lean_object* v_k_152_, lean_object* v_config_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5(v_00_u03b1_149_, v_es_150_, v_givenNames_151_, v_k_152_, v_config_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec_ref(v_config_153_);
lean_dec_ref(v_es_150_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8___redArg(lean_object* v_x_160_, lean_object* v_x_161_, lean_object* v_x_162_, lean_object* v_x_163_){
_start:
{
lean_object* v_ks_164_; lean_object* v_vs_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_189_; 
v_ks_164_ = lean_ctor_get(v_x_160_, 0);
v_vs_165_ = lean_ctor_get(v_x_160_, 1);
v_isSharedCheck_189_ = !lean_is_exclusive(v_x_160_);
if (v_isSharedCheck_189_ == 0)
{
v___x_167_ = v_x_160_;
v_isShared_168_ = v_isSharedCheck_189_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_vs_165_);
lean_inc(v_ks_164_);
lean_dec(v_x_160_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_189_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = lean_array_get_size(v_ks_164_);
v___x_170_ = lean_nat_dec_lt(v_x_161_, v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_174_; 
lean_dec(v_x_161_);
v___x_171_ = lean_array_push(v_ks_164_, v_x_162_);
v___x_172_ = lean_array_push(v_vs_165_, v_x_163_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v___x_172_);
lean_ctor_set(v___x_167_, 0, v___x_171_);
v___x_174_ = v___x_167_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v___x_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
else
{
lean_object* v_k_x27_176_; uint8_t v___x_177_; 
v_k_x27_176_ = lean_array_fget_borrowed(v_ks_164_, v_x_161_);
v___x_177_ = l_Lean_instBEqMVarId_beq(v_x_162_, v_k_x27_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_179_; 
if (v_isShared_168_ == 0)
{
v___x_179_ = v___x_167_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_ks_164_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_vs_165_);
v___x_179_ = v_reuseFailAlloc_183_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = lean_nat_add(v_x_161_, v___x_180_);
lean_dec(v_x_161_);
v_x_160_ = v___x_179_;
v_x_161_ = v___x_181_;
goto _start;
}
}
else
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_187_; 
v___x_184_ = lean_array_fset(v_ks_164_, v_x_161_, v_x_162_);
v___x_185_ = lean_array_fset(v_vs_165_, v_x_161_, v_x_163_);
lean_dec(v_x_161_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v___x_185_);
lean_ctor_set(v___x_167_, 0, v___x_184_);
v___x_187_ = v___x_167_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v___x_185_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7___redArg(lean_object* v_n_190_, lean_object* v_k_191_, lean_object* v_v_192_){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_unsigned_to_nat(0u);
v___x_194_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8___redArg(v_n_190_, v___x_193_, v_k_191_, v_v_192_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_box(0);
v___x_196_ = l_unsafeCast___redArg(v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(lean_object* v_x_198_, size_t v_x_199_, size_t v_x_200_, lean_object* v_x_201_, lean_object* v_x_202_){
_start:
{
if (lean_obj_tag(v_x_198_) == 0)
{
lean_object* v_es_203_; size_t v___x_204_; size_t v___x_205_; lean_object* v_j_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v_es_203_ = lean_ctor_get(v_x_198_, 0);
v___x_204_ = ((size_t)31ULL);
v___x_205_ = lean_usize_land(v_x_199_, v___x_204_);
v_j_206_ = lean_usize_to_nat(v___x_205_);
v___x_207_ = lean_array_get_size(v_es_203_);
v___x_208_ = lean_nat_dec_lt(v_j_206_, v___x_207_);
if (v___x_208_ == 0)
{
lean_dec(v_j_206_);
lean_dec(v_x_202_);
lean_dec(v_x_201_);
return v_x_198_;
}
else
{
lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_247_; 
lean_inc_ref(v_es_203_);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_198_);
if (v_isSharedCheck_247_ == 0)
{
lean_object* v_unused_248_; 
v_unused_248_ = lean_ctor_get(v_x_198_, 0);
lean_dec(v_unused_248_);
v___x_210_ = v_x_198_;
v_isShared_211_ = v_isSharedCheck_247_;
goto v_resetjp_209_;
}
else
{
lean_dec(v_x_198_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_247_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v_v_212_; lean_object* v___x_213_; lean_object* v_xs_x27_214_; lean_object* v___y_216_; 
v_v_212_ = lean_array_fget(v_es_203_, v_j_206_);
v___x_213_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0);
v_xs_x27_214_ = lean_array_fset(v_es_203_, v_j_206_, v___x_213_);
switch(lean_obj_tag(v_v_212_))
{
case 0:
{
lean_object* v_key_221_; lean_object* v_val_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_232_; 
v_key_221_ = lean_ctor_get(v_v_212_, 0);
v_val_222_ = lean_ctor_get(v_v_212_, 1);
v_isSharedCheck_232_ = !lean_is_exclusive(v_v_212_);
if (v_isSharedCheck_232_ == 0)
{
v___x_224_ = v_v_212_;
v_isShared_225_ = v_isSharedCheck_232_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_val_222_);
lean_inc(v_key_221_);
lean_dec(v_v_212_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_232_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
uint8_t v___x_226_; 
v___x_226_ = l_Lean_instBEqMVarId_beq(v_x_201_, v_key_221_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; 
lean_del_object(v___x_224_);
v___x_227_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_221_, v_val_222_, v_x_201_, v_x_202_);
v___x_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
v___y_216_ = v___x_228_;
goto v___jp_215_;
}
else
{
lean_object* v___x_230_; 
lean_dec(v_val_222_);
lean_dec(v_key_221_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v_x_202_);
lean_ctor_set(v___x_224_, 0, v_x_201_);
v___x_230_ = v___x_224_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_x_201_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v_x_202_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
v___y_216_ = v___x_230_;
goto v___jp_215_;
}
}
}
}
case 1:
{
lean_object* v_node_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_245_; 
v_node_233_ = lean_ctor_get(v_v_212_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v_v_212_);
if (v_isSharedCheck_245_ == 0)
{
v___x_235_ = v_v_212_;
v_isShared_236_ = v_isSharedCheck_245_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_node_233_);
lean_dec(v_v_212_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_245_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
size_t v___x_237_; size_t v___x_238_; size_t v___x_239_; size_t v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_237_ = ((size_t)5ULL);
v___x_238_ = lean_usize_shift_right(v_x_199_, v___x_237_);
v___x_239_ = ((size_t)1ULL);
v___x_240_ = lean_usize_add(v_x_200_, v___x_239_);
v___x_241_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(v_node_233_, v___x_238_, v___x_240_, v_x_201_, v_x_202_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 0, v___x_241_);
v___x_243_ = v___x_235_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_241_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
v___y_216_ = v___x_243_;
goto v___jp_215_;
}
}
}
default: 
{
lean_object* v___x_246_; 
v___x_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_246_, 0, v_x_201_);
lean_ctor_set(v___x_246_, 1, v_x_202_);
v___y_216_ = v___x_246_;
goto v___jp_215_;
}
}
v___jp_215_:
{
lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_217_ = lean_array_fset(v_xs_x27_214_, v_j_206_, v___y_216_);
lean_dec(v_j_206_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 0, v___x_217_);
v___x_219_ = v___x_210_;
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
}
else
{
lean_object* v_ks_249_; lean_object* v_vs_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_268_; 
v_ks_249_ = lean_ctor_get(v_x_198_, 0);
v_vs_250_ = lean_ctor_get(v_x_198_, 1);
v_isSharedCheck_268_ = !lean_is_exclusive(v_x_198_);
if (v_isSharedCheck_268_ == 0)
{
v___x_252_ = v_x_198_;
v_isShared_253_ = v_isSharedCheck_268_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_vs_250_);
lean_inc(v_ks_249_);
lean_dec(v_x_198_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_268_;
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
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_ks_249_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v_vs_250_);
v___x_255_ = v_reuseFailAlloc_267_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v_newNode_256_; size_t v___x_257_; uint8_t v___x_258_; 
v_newNode_256_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7___redArg(v___x_255_, v_x_201_, v_x_202_);
v___x_257_ = ((size_t)7ULL);
v___x_258_ = lean_usize_dec_le(v___x_257_, v_x_200_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_259_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_256_);
v___x_260_ = lean_unsigned_to_nat(4u);
v___x_261_ = lean_nat_dec_lt(v___x_259_, v___x_260_);
lean_dec(v___x_259_);
if (v___x_261_ == 0)
{
lean_object* v_ks_262_; lean_object* v_vs_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_ks_262_ = lean_ctor_get(v_newNode_256_, 0);
lean_inc_ref(v_ks_262_);
v_vs_263_ = lean_ctor_get(v_newNode_256_, 1);
lean_inc_ref(v_vs_263_);
lean_dec_ref(v_newNode_256_);
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1);
v___x_266_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg(v_x_200_, v_ks_262_, v_vs_263_, v___x_264_, v___x_265_);
lean_dec_ref(v_vs_263_);
lean_dec_ref(v_ks_262_);
return v___x_266_;
}
else
{
return v_newNode_256_;
}
}
else
{
return v_newNode_256_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg(size_t v_depth_269_, lean_object* v_keys_270_, lean_object* v_vals_271_, lean_object* v_i_272_, lean_object* v_entries_273_){
_start:
{
lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_274_ = lean_array_get_size(v_keys_270_);
v___x_275_ = lean_nat_dec_lt(v_i_272_, v___x_274_);
if (v___x_275_ == 0)
{
lean_dec(v_i_272_);
return v_entries_273_;
}
else
{
lean_object* v_k_276_; lean_object* v_v_277_; uint64_t v___x_278_; size_t v_h_279_; size_t v___x_280_; lean_object* v___x_281_; size_t v___x_282_; size_t v___x_283_; size_t v___x_284_; size_t v_h_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v_k_276_ = lean_array_fget_borrowed(v_keys_270_, v_i_272_);
v_v_277_ = lean_array_fget_borrowed(v_vals_271_, v_i_272_);
v___x_278_ = l_Lean_instHashableMVarId_hash(v_k_276_);
v_h_279_ = lean_uint64_to_usize(v___x_278_);
v___x_280_ = ((size_t)5ULL);
v___x_281_ = lean_unsigned_to_nat(1u);
v___x_282_ = ((size_t)1ULL);
v___x_283_ = lean_usize_sub(v_depth_269_, v___x_282_);
v___x_284_ = lean_usize_mul(v___x_280_, v___x_283_);
v_h_285_ = lean_usize_shift_right(v_h_279_, v___x_284_);
v___x_286_ = lean_nat_add(v_i_272_, v___x_281_);
lean_dec(v_i_272_);
lean_inc(v_v_277_);
lean_inc(v_k_276_);
v___x_287_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(v_entries_273_, v_h_285_, v_depth_269_, v_k_276_, v_v_277_);
v_i_272_ = v___x_286_;
v_entries_273_ = v___x_287_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg___boxed(lean_object* v_depth_289_, lean_object* v_keys_290_, lean_object* v_vals_291_, lean_object* v_i_292_, lean_object* v_entries_293_){
_start:
{
size_t v_depth_boxed_294_; lean_object* v_res_295_; 
v_depth_boxed_294_ = lean_unbox_usize(v_depth_289_);
lean_dec(v_depth_289_);
v_res_295_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg(v_depth_boxed_294_, v_keys_290_, v_vals_291_, v_i_292_, v_entries_293_);
lean_dec_ref(v_vals_291_);
lean_dec_ref(v_keys_290_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___boxed(lean_object* v_x_296_, lean_object* v_x_297_, lean_object* v_x_298_, lean_object* v_x_299_, lean_object* v_x_300_){
_start:
{
size_t v_x_5179__boxed_301_; size_t v_x_5180__boxed_302_; lean_object* v_res_303_; 
v_x_5179__boxed_301_ = lean_unbox_usize(v_x_297_);
lean_dec(v_x_297_);
v_x_5180__boxed_302_ = lean_unbox_usize(v_x_298_);
lean_dec(v_x_298_);
v_res_303_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(v_x_296_, v_x_5179__boxed_301_, v_x_5180__boxed_302_, v_x_299_, v_x_300_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3___redArg(lean_object* v_x_304_, lean_object* v_x_305_, lean_object* v_x_306_){
_start:
{
uint64_t v___x_307_; size_t v___x_308_; size_t v___x_309_; lean_object* v___x_310_; 
v___x_307_ = l_Lean_instHashableMVarId_hash(v_x_305_);
v___x_308_ = lean_uint64_to_usize(v___x_307_);
v___x_309_ = ((size_t)1ULL);
v___x_310_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(v_x_304_, v___x_308_, v___x_309_, v_x_305_, v_x_306_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(lean_object* v_mvarId_311_, lean_object* v_val_312_, lean_object* v___y_313_){
_start:
{
lean_object* v___x_315_; lean_object* v_mctx_316_; lean_object* v_cache_317_; lean_object* v_zetaDeltaFVarIds_318_; lean_object* v_postponed_319_; lean_object* v_diag_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_349_; 
v___x_315_ = lean_st_ref_take(v___y_313_);
v_mctx_316_ = lean_ctor_get(v___x_315_, 0);
v_cache_317_ = lean_ctor_get(v___x_315_, 1);
v_zetaDeltaFVarIds_318_ = lean_ctor_get(v___x_315_, 2);
v_postponed_319_ = lean_ctor_get(v___x_315_, 3);
v_diag_320_ = lean_ctor_get(v___x_315_, 4);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_349_ == 0)
{
v___x_322_ = v___x_315_;
v_isShared_323_ = v_isSharedCheck_349_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_diag_320_);
lean_inc(v_postponed_319_);
lean_inc(v_zetaDeltaFVarIds_318_);
lean_inc(v_cache_317_);
lean_inc(v_mctx_316_);
lean_dec(v___x_315_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_349_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v_depth_324_; lean_object* v_levelAssignDepth_325_; lean_object* v_lmvarCounter_326_; lean_object* v_mvarCounter_327_; lean_object* v_lDecls_328_; lean_object* v_decls_329_; lean_object* v_userNames_330_; lean_object* v_lAssignment_331_; lean_object* v_eAssignment_332_; lean_object* v_dAssignment_333_; lean_object* v_instanceTypedMVars_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_348_; 
v_depth_324_ = lean_ctor_get(v_mctx_316_, 0);
v_levelAssignDepth_325_ = lean_ctor_get(v_mctx_316_, 1);
v_lmvarCounter_326_ = lean_ctor_get(v_mctx_316_, 2);
v_mvarCounter_327_ = lean_ctor_get(v_mctx_316_, 3);
v_lDecls_328_ = lean_ctor_get(v_mctx_316_, 4);
v_decls_329_ = lean_ctor_get(v_mctx_316_, 5);
v_userNames_330_ = lean_ctor_get(v_mctx_316_, 6);
v_lAssignment_331_ = lean_ctor_get(v_mctx_316_, 7);
v_eAssignment_332_ = lean_ctor_get(v_mctx_316_, 8);
v_dAssignment_333_ = lean_ctor_get(v_mctx_316_, 9);
v_instanceTypedMVars_334_ = lean_ctor_get(v_mctx_316_, 10);
v_isSharedCheck_348_ = !lean_is_exclusive(v_mctx_316_);
if (v_isSharedCheck_348_ == 0)
{
v___x_336_ = v_mctx_316_;
v_isShared_337_ = v_isSharedCheck_348_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_instanceTypedMVars_334_);
lean_inc(v_dAssignment_333_);
lean_inc(v_eAssignment_332_);
lean_inc(v_lAssignment_331_);
lean_inc(v_userNames_330_);
lean_inc(v_decls_329_);
lean_inc(v_lDecls_328_);
lean_inc(v_mvarCounter_327_);
lean_inc(v_lmvarCounter_326_);
lean_inc(v_levelAssignDepth_325_);
lean_inc(v_depth_324_);
lean_dec(v_mctx_316_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_348_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_338_ = lean_box(0);
v___x_339_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3___redArg(v_eAssignment_332_, v_mvarId_311_, v_val_312_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 8, v___x_339_);
v___x_341_ = v___x_336_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_depth_324_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v_levelAssignDepth_325_);
lean_ctor_set(v_reuseFailAlloc_347_, 2, v_lmvarCounter_326_);
lean_ctor_set(v_reuseFailAlloc_347_, 3, v_mvarCounter_327_);
lean_ctor_set(v_reuseFailAlloc_347_, 4, v_lDecls_328_);
lean_ctor_set(v_reuseFailAlloc_347_, 5, v_decls_329_);
lean_ctor_set(v_reuseFailAlloc_347_, 6, v_userNames_330_);
lean_ctor_set(v_reuseFailAlloc_347_, 7, v_lAssignment_331_);
lean_ctor_set(v_reuseFailAlloc_347_, 8, v___x_339_);
lean_ctor_set(v_reuseFailAlloc_347_, 9, v_dAssignment_333_);
lean_ctor_set(v_reuseFailAlloc_347_, 10, v_instanceTypedMVars_334_);
v___x_341_ = v_reuseFailAlloc_347_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_343_; 
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_341_);
v___x_343_ = v___x_322_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_341_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v_cache_317_);
lean_ctor_set(v_reuseFailAlloc_346_, 2, v_zetaDeltaFVarIds_318_);
lean_ctor_set(v_reuseFailAlloc_346_, 3, v_postponed_319_);
lean_ctor_set(v_reuseFailAlloc_346_, 4, v_diag_320_);
v___x_343_ = v_reuseFailAlloc_346_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = lean_st_ref_put(v___y_313_, v___x_343_);
v___x_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_345_, 0, v___x_338_);
return v___x_345_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg___boxed(lean_object* v_mvarId_350_, lean_object* v_val_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(v_mvarId_350_, v_val_351_, v___y_352_);
lean_dec(v___y_352_);
return v_res_354_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__0));
v___x_357_ = l_Lean_stringToMessageData(v___x_356_);
return v___x_357_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1);
v___x_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0(lean_object* v___x_360_, lean_object* v_a_361_, lean_object* v___x_362_, lean_object* v_a_363_, lean_object* v_mvar_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v___x_370_; 
lean_inc_ref(v_a_361_);
v___x_370_ = l_Lean_Meta_isExprDefEq(v___x_360_, v_a_361_, v___y_365_, v___y_366_, v___y_367_, v___y_368_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; uint8_t v___x_372_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_370_, 1);
v___x_372_ = lean_unbox(v_a_371_);
lean_dec(v_a_371_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2);
v___x_374_ = l_Lean_Meta_throwTacticEx___redArg(v___x_362_, v_a_363_, v___x_373_, v___y_365_, v___y_366_, v___y_367_, v___y_368_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v___x_375_; 
lean_dec_ref_known(v___x_374_, 1);
v___x_375_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(v_mvar_364_, v_a_361_, v___y_366_);
return v___x_375_;
}
else
{
lean_dec(v_mvar_364_);
lean_dec_ref(v_a_361_);
return v___x_374_;
}
}
else
{
lean_object* v___x_376_; 
lean_dec(v_a_363_);
lean_dec(v___x_362_);
v___x_376_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(v_mvar_364_, v_a_361_, v___y_366_);
return v___x_376_;
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec(v_mvar_364_);
lean_dec(v_a_363_);
lean_dec(v___x_362_);
lean_dec_ref(v_a_361_);
v_a_377_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_370_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_370_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___boxed(lean_object* v___x_385_, lean_object* v_a_386_, lean_object* v___x_387_, lean_object* v_a_388_, lean_object* v_mvar_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0(v___x_385_, v_a_386_, v___x_387_, v_a_388_, v_mvar_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1(lean_object* v___x_396_, uint8_t v___x_397_, uint8_t v___x_398_, lean_object* v___x_399_, lean_object* v_a_400_, lean_object* v_mvar_401_, lean_object* v_e_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
uint8_t v___x_408_; lean_object* v___x_409_; 
v___x_408_ = 1;
v___x_409_ = l_Lean_Meta_mkLetFVars(v___x_396_, v_e_402_, v___x_397_, v___x_398_, v___x_408_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_411_; lean_object* v___f_412_; lean_object* v___x_413_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_410_);
lean_dec_ref_known(v___x_409_, 1);
lean_inc_n(v_mvar_401_, 2);
v___x_411_ = l_Lean_Expr_mvar___override(v_mvar_401_);
v___f_412_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___boxed), 10, 5);
lean_closure_set(v___f_412_, 0, v___x_411_);
lean_closure_set(v___f_412_, 1, v_a_410_);
lean_closure_set(v___f_412_, 2, v___x_399_);
lean_closure_set(v___f_412_, 3, v_a_400_);
lean_closure_set(v___f_412_, 4, v_mvar_401_);
v___x_413_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg(v_mvar_401_, v___f_412_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
return v___x_413_;
}
else
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
lean_dec(v_mvar_401_);
lean_dec(v_a_400_);
lean_dec(v___x_399_);
v_a_414_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v___x_409_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_409_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_414_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1___boxed(lean_object* v___x_422_, lean_object* v___x_423_, lean_object* v___x_424_, lean_object* v___x_425_, lean_object* v_a_426_, lean_object* v_mvar_427_, lean_object* v_e_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
uint8_t v___x_5465__boxed_434_; uint8_t v___x_5466__boxed_435_; lean_object* v_res_436_; 
v___x_5465__boxed_434_ = lean_unbox(v___x_423_);
v___x_5466__boxed_435_ = lean_unbox(v___x_424_);
v_res_436_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1(v___x_422_, v___x_5465__boxed_434_, v___x_5466__boxed_435_, v___x_425_, v_a_426_, v_mvar_427_, v_e_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_);
lean_dec(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2(size_t v_sz_437_, size_t v_i_438_, lean_object* v_bs_439_){
_start:
{
uint8_t v___x_440_; 
v___x_440_ = lean_usize_dec_lt(v_i_438_, v_sz_437_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; 
v___x_441_ = l_unsafeCast___redArg(v_bs_439_);
lean_dec_ref(v_bs_439_);
return v___x_441_;
}
else
{
lean_object* v_v_442_; lean_object* v___x_443_; lean_object* v_bs_x27_444_; lean_object* v___x_445_; lean_object* v___x_446_; size_t v___x_447_; size_t v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_v_442_ = lean_array_uget(v_bs_439_, v_i_438_);
v___x_443_ = lean_unsigned_to_nat(0u);
v_bs_x27_444_ = lean_array_uset(v_bs_439_, v_i_438_, v___x_443_);
v___x_445_ = l_unsafeCast___redArg(v_v_442_);
lean_dec(v_v_442_);
v___x_446_ = l_Lean_Expr_fvar___override(v___x_445_);
v___x_447_ = ((size_t)1ULL);
v___x_448_ = lean_usize_add(v_i_438_, v___x_447_);
v___x_449_ = l_unsafeCast___redArg(v___x_446_);
lean_dec_ref(v___x_446_);
v___x_450_ = lean_array_uset(v_bs_x27_444_, v_i_438_, v___x_449_);
v_i_438_ = v___x_448_;
v_bs_439_ = v___x_450_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2___boxed(lean_object* v_sz_452_, lean_object* v_i_453_, lean_object* v_bs_454_){
_start:
{
size_t v_sz_boxed_455_; size_t v_i_boxed_456_; lean_object* v_res_457_; 
v_sz_boxed_455_ = lean_unbox_usize(v_sz_452_);
lean_dec(v_sz_452_);
v_i_boxed_456_ = lean_unbox_usize(v_i_453_);
lean_dec(v_i_453_);
v_res_457_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2(v_sz_boxed_455_, v_i_boxed_456_, v_bs_454_);
return v_res_457_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__0));
v___x_460_ = l_Lean_stringToMessageData(v___x_459_);
return v___x_460_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1);
v___x_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2(lean_object* v___x_463_, lean_object* v___x_464_, lean_object* v_a_465_, size_t v___x_466_, uint8_t v___x_467_, uint8_t v___x_468_, lean_object* v___x_469_, lean_object* v_snd_470_, lean_object* v_fst_471_, lean_object* v_fvarIds_472_, lean_object* v_es_473_, lean_object* v_x_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v___x_480_; lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_480_ = lean_array_get_borrowed(v___x_463_, v_es_473_, v___x_464_);
v___x_545_ = lean_array_get_size(v_fvarIds_472_);
v___x_546_ = lean_nat_dec_eq(v___x_545_, v___x_464_);
if (v___x_546_ == 0)
{
goto v___jp_481_;
}
else
{
uint8_t v___x_547_; 
v___x_547_ = lean_expr_eqv(v_fst_471_, v___x_480_);
if (v___x_547_ == 0)
{
goto v___jp_481_;
}
else
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2);
lean_inc(v_a_465_);
lean_inc(v___x_469_);
v___x_549_ = l_Lean_Meta_throwTacticEx___redArg(v___x_469_, v_a_465_, v___x_548_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_dec_ref_known(v___x_549_, 1);
goto v___jp_481_;
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref(v_fvarIds_472_);
lean_dec_ref(v_snd_470_);
lean_dec(v___x_469_);
lean_dec(v_a_465_);
v_a_550_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_549_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_549_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
v___jp_481_:
{
lean_object* v___x_482_; 
lean_inc(v_a_465_);
v___x_482_ = l_Lean_MVarId_getTag(v_a_465_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v___x_484_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref_known(v___x_482_, 1);
lean_inc(v___x_480_);
v___x_484_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v___x_480_, v_a_483_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v_fst_486_; lean_object* v_snd_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_528_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_a_485_);
lean_dec_ref_known(v___x_484_, 1);
v_fst_486_ = lean_ctor_get(v_a_485_, 0);
v_snd_487_ = lean_ctor_get(v_a_485_, 1);
v_isSharedCheck_528_ = !lean_is_exclusive(v_a_485_);
if (v_isSharedCheck_528_ == 0)
{
v___x_489_ = v_a_485_;
v_isShared_490_ = v_isSharedCheck_528_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_snd_487_);
lean_inc(v_fst_486_);
lean_dec(v_a_485_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_528_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
size_t v_sz_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v_sz_491_ = lean_array_size(v_fvarIds_472_);
v___x_492_ = l_unsafeCast___redArg(v_fvarIds_472_);
v___x_493_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2(v_sz_491_, v___x_466_, v___x_492_);
v___x_494_ = l_unsafeCast___redArg(v___x_493_);
lean_dec_ref(v___x_493_);
v___x_495_ = l_Lean_Expr_mvarId_x21(v_fst_486_);
lean_dec(v_fst_486_);
lean_inc(v_a_465_);
lean_inc(v___x_469_);
lean_inc(v___x_494_);
v___x_496_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1(v___x_494_, v___x_467_, v___x_468_, v___x_469_, v_a_465_, v___x_495_, v_snd_470_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v___x_497_; 
lean_dec_ref_known(v___x_496_, 1);
lean_inc(v_snd_487_);
lean_inc(v_a_465_);
v___x_497_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1(v___x_494_, v___x_467_, v___x_468_, v___x_469_, v_a_465_, v_a_465_, v_snd_487_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_510_; 
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_510_ == 0)
{
lean_object* v_unused_511_; 
v_unused_511_ = lean_ctor_get(v___x_497_, 0);
lean_dec(v_unused_511_);
v___x_499_ = v___x_497_;
v_isShared_500_ = v_isSharedCheck_510_;
goto v_resetjp_498_;
}
else
{
lean_dec(v___x_497_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_510_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_501_ = l_Lean_Expr_mvarId_x21(v_snd_487_);
lean_dec(v_snd_487_);
v___x_502_ = lean_box(0);
v___x_503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 1, v___x_503_);
lean_ctor_set(v___x_489_, 0, v_fvarIds_472_);
v___x_505_ = v___x_489_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_fvarIds_472_);
lean_ctor_set(v_reuseFailAlloc_509_, 1, v___x_503_);
v___x_505_ = v_reuseFailAlloc_509_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
lean_object* v___x_507_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_505_);
v___x_507_ = v___x_499_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v___x_505_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
lean_del_object(v___x_489_);
lean_dec(v_snd_487_);
lean_dec_ref(v_fvarIds_472_);
v_a_512_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_497_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_497_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
lean_dec(v___x_494_);
lean_del_object(v___x_489_);
lean_dec(v_snd_487_);
lean_dec_ref(v_fvarIds_472_);
lean_dec(v___x_469_);
lean_dec(v_a_465_);
v_a_520_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_496_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_496_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec_ref(v_fvarIds_472_);
lean_dec_ref(v_snd_470_);
lean_dec(v___x_469_);
lean_dec(v_a_465_);
v_a_529_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_484_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_484_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec_ref(v_fvarIds_472_);
lean_dec_ref(v_snd_470_);
lean_dec(v___x_469_);
lean_dec(v_a_465_);
v_a_537_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_482_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_482_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___boxed(lean_object** _args){
lean_object* v___x_558_ = _args[0];
lean_object* v___x_559_ = _args[1];
lean_object* v_a_560_ = _args[2];
lean_object* v___x_561_ = _args[3];
lean_object* v___x_562_ = _args[4];
lean_object* v___x_563_ = _args[5];
lean_object* v___x_564_ = _args[6];
lean_object* v_snd_565_ = _args[7];
lean_object* v_fst_566_ = _args[8];
lean_object* v_fvarIds_567_ = _args[9];
lean_object* v_es_568_ = _args[10];
lean_object* v_x_569_ = _args[11];
lean_object* v___y_570_ = _args[12];
lean_object* v___y_571_ = _args[13];
lean_object* v___y_572_ = _args[14];
lean_object* v___y_573_ = _args[15];
lean_object* v___y_574_ = _args[16];
_start:
{
size_t v___x_5555__boxed_575_; uint8_t v___x_5556__boxed_576_; uint8_t v___x_5557__boxed_577_; lean_object* v_res_578_; 
v___x_5555__boxed_575_ = lean_unbox_usize(v___x_561_);
lean_dec(v___x_561_);
v___x_5556__boxed_576_ = lean_unbox(v___x_562_);
v___x_5557__boxed_577_ = lean_unbox(v___x_563_);
v_res_578_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2(v___x_558_, v___x_559_, v_a_560_, v___x_5555__boxed_575_, v___x_5556__boxed_576_, v___x_5557__boxed_577_, v___x_564_, v_snd_565_, v_fst_566_, v_fvarIds_567_, v_es_568_, v_x_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v_x_569_);
lean_dec_ref(v_es_568_);
lean_dec_ref(v_fst_566_);
lean_dec(v___x_559_);
lean_dec_ref(v___x_558_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3(lean_object* v___x_582_, lean_object* v___x_583_, size_t v___x_584_, uint8_t v___x_585_, uint8_t v___x_586_, lean_object* v_snd_587_, lean_object* v_fst_588_, lean_object* v___x_589_, lean_object* v___x_590_, lean_object* v_a_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_593_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___f_607_; lean_object* v___x_608_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc_n(v_a_602_, 2);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__1));
v___x_604_ = lean_box_usize(v___x_584_);
v___x_605_ = lean_box(v___x_585_);
v___x_606_ = lean_box(v___x_586_);
lean_inc_ref(v_fst_588_);
v___f_607_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___boxed), 17, 9);
lean_closure_set(v___f_607_, 0, v___x_582_);
lean_closure_set(v___f_607_, 1, v___x_583_);
lean_closure_set(v___f_607_, 2, v_a_602_);
lean_closure_set(v___f_607_, 3, v___x_604_);
lean_closure_set(v___f_607_, 4, v___x_605_);
lean_closure_set(v___f_607_, 5, v___x_606_);
lean_closure_set(v___f_607_, 6, v___x_603_);
lean_closure_set(v___f_607_, 7, v_snd_587_);
lean_closure_set(v___f_607_, 8, v_fst_588_);
v___x_608_ = l_Lean_MVarId_checkNotAssigned(v_a_602_, v___x_603_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
lean_dec_ref_known(v___x_608_, 1);
v___x_609_ = lean_mk_empty_array_with_capacity(v___x_589_);
v___x_610_ = lean_array_push(v___x_609_, v_fst_588_);
v___x_611_ = l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg(v___x_610_, v___x_590_, v___f_607_, v_a_591_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
lean_dec_ref(v___x_610_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v_fst_613_; lean_object* v_snd_614_; lean_object* v___x_615_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 1);
v_fst_613_ = lean_ctor_get(v_a_612_, 0);
lean_inc(v_fst_613_);
v_snd_614_ = lean_ctor_get(v_a_612_, 1);
lean_inc(v_snd_614_);
lean_dec(v_a_612_);
v___x_615_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_snd_614_, v___y_593_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_622_ == 0)
{
lean_object* v_unused_623_; 
v_unused_623_ = lean_ctor_get(v___x_615_, 0);
lean_dec(v_unused_623_);
v___x_617_ = v___x_615_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_dec(v___x_615_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v_fst_613_);
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_fst_613_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
else
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
lean_dec(v_fst_613_);
v_a_624_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_615_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_615_);
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
else
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
v_a_632_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_611_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_611_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
else
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
lean_dec_ref(v___f_607_);
lean_dec(v___x_590_);
lean_dec_ref(v_fst_588_);
v_a_640_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_647_ == 0)
{
v___x_642_ = v___x_608_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_608_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_640_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
}
else
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
lean_dec(v___x_590_);
lean_dec_ref(v_fst_588_);
lean_dec_ref(v_snd_587_);
lean_dec(v___x_583_);
lean_dec_ref(v___x_582_);
v_a_648_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_601_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_601_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___boxed(lean_object** _args){
lean_object* v___x_656_ = _args[0];
lean_object* v___x_657_ = _args[1];
lean_object* v___x_658_ = _args[2];
lean_object* v___x_659_ = _args[3];
lean_object* v___x_660_ = _args[4];
lean_object* v_snd_661_ = _args[5];
lean_object* v_fst_662_ = _args[6];
lean_object* v___x_663_ = _args[7];
lean_object* v___x_664_ = _args[8];
lean_object* v_a_665_ = _args[9];
lean_object* v___y_666_ = _args[10];
lean_object* v___y_667_ = _args[11];
lean_object* v___y_668_ = _args[12];
lean_object* v___y_669_ = _args[13];
lean_object* v___y_670_ = _args[14];
lean_object* v___y_671_ = _args[15];
lean_object* v___y_672_ = _args[16];
lean_object* v___y_673_ = _args[17];
lean_object* v___y_674_ = _args[18];
_start:
{
size_t v___x_5767__boxed_675_; uint8_t v___x_5768__boxed_676_; uint8_t v___x_5769__boxed_677_; lean_object* v_res_678_; 
v___x_5767__boxed_675_ = lean_unbox_usize(v___x_658_);
lean_dec(v___x_658_);
v___x_5768__boxed_676_ = lean_unbox(v___x_659_);
v___x_5769__boxed_677_ = lean_unbox(v___x_660_);
v_res_678_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3(v___x_656_, v___x_657_, v___x_5767__boxed_675_, v___x_5768__boxed_676_, v___x_5769__boxed_677_, v_snd_661_, v_fst_662_, v___x_663_, v___x_664_, v_a_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec_ref(v_a_665_);
lean_dec(v___x_663_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1(size_t v_sz_679_, size_t v_i_680_, lean_object* v_bs_681_){
_start:
{
uint8_t v___x_682_; 
v___x_682_ = lean_usize_dec_lt(v_i_680_, v_sz_679_);
if (v___x_682_ == 0)
{
lean_object* v___x_683_; 
v___x_683_ = l_unsafeCast___redArg(v_bs_681_);
lean_dec_ref(v_bs_681_);
return v___x_683_;
}
else
{
lean_object* v_v_684_; lean_object* v___x_685_; lean_object* v_bs_x27_686_; lean_object* v___x_687_; lean_object* v___x_688_; size_t v___x_689_; size_t v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v_v_684_ = lean_array_uget(v_bs_681_, v_i_680_);
v___x_685_ = lean_unsigned_to_nat(0u);
v_bs_x27_686_ = lean_array_uset(v_bs_681_, v_i_680_, v___x_685_);
v___x_687_ = l_unsafeCast___redArg(v_v_684_);
lean_dec(v_v_684_);
v___x_688_ = l_Lean_Elab_Tactic_getNameOfIdent_x27(v___x_687_);
lean_dec(v___x_687_);
v___x_689_ = ((size_t)1ULL);
v___x_690_ = lean_usize_add(v_i_680_, v___x_689_);
v___x_691_ = l_unsafeCast___redArg(v___x_688_);
lean_dec(v___x_688_);
v___x_692_ = lean_array_uset(v_bs_x27_686_, v_i_680_, v___x_691_);
v_i_680_ = v___x_690_;
v_bs_681_ = v___x_692_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1___boxed(lean_object* v_sz_694_, lean_object* v_i_695_, lean_object* v_bs_696_){
_start:
{
size_t v_sz_boxed_697_; size_t v_i_boxed_698_; lean_object* v_res_699_; 
v_sz_boxed_697_ = lean_unbox_usize(v_sz_694_);
lean_dec(v_sz_694_);
v_i_boxed_698_ = lean_unbox_usize(v_i_695_);
lean_dec(v_i_695_);
v_res_699_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1(v_sz_boxed_697_, v_i_boxed_698_, v_bs_696_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets(lean_object* v_x_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_){
_start:
{
lean_object* v___x_729_; uint8_t v___x_730_; 
v___x_729_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5));
lean_inc(v_x_719_);
v___x_730_ = l_Lean_Syntax_isOfKind(v_x_719_, v___x_729_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; 
lean_dec(v_x_719_);
v___x_731_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_731_;
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_732_ = lean_unsigned_to_nat(1u);
v___x_733_ = l_Lean_Syntax_getArg(v_x_719_, v___x_732_);
v___x_734_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7));
lean_inc(v___x_733_);
v___x_735_ = l_Lean_Syntax_isOfKind(v___x_733_, v___x_734_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; 
lean_dec(v___x_733_);
lean_dec(v_x_719_);
v___x_736_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_736_;
}
else
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v_ids_742_; uint8_t v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_737_ = l_Lean_instInhabitedExpr;
v___x_738_ = lean_unsigned_to_nat(0u);
v___x_739_ = lean_unsigned_to_nat(2u);
v___x_740_ = l_Lean_Syntax_getArg(v_x_719_, v___x_739_);
lean_dec(v_x_719_);
v___x_741_ = l_Lean_Syntax_getArgs(v___x_740_);
lean_dec(v___x_740_);
v_ids_742_ = l_unsafeCast___redArg(v___x_741_);
lean_dec_ref(v___x_741_);
v___x_743_ = 0;
v___x_744_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v___x_744_, 0, v___x_743_);
lean_ctor_set_uint8(v___x_744_, 1, v___x_735_);
lean_ctor_set_uint8(v___x_744_, 2, v___x_743_);
lean_ctor_set_uint8(v___x_744_, 3, v___x_735_);
lean_ctor_set_uint8(v___x_744_, 4, v___x_735_);
lean_ctor_set_uint8(v___x_744_, 5, v___x_743_);
lean_ctor_set_uint8(v___x_744_, 6, v___x_735_);
lean_ctor_set_uint8(v___x_744_, 7, v___x_735_);
lean_ctor_set_uint8(v___x_744_, 8, v___x_743_);
lean_ctor_set_uint8(v___x_744_, 9, v___x_743_);
lean_ctor_set_uint8(v___x_744_, 10, v___x_743_);
v___x_745_ = l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg(v___x_733_, v___x_744_, v___x_735_, v_a_720_, v_a_726_, v_a_727_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_a_746_; lean_object* v___x_747_; size_t v_sz_748_; size_t v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_a_746_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_a_746_);
lean_dec_ref_known(v___x_745_, 1);
v___x_747_ = l_unsafeCast___redArg(v_ids_742_);
lean_dec(v_ids_742_);
v_sz_748_ = lean_array_size(v___x_747_);
v___x_749_ = ((size_t)0ULL);
v___x_750_ = l_unsafeCast___redArg(v___x_747_);
v___x_751_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1(v_sz_748_, v___x_749_, v___x_750_);
v___x_752_ = l_unsafeCast___redArg(v___x_751_);
lean_dec_ref(v___x_751_);
v___x_753_ = lean_array_to_list(v___x_752_);
v___x_754_ = l_Lean_Elab_Tactic_Conv_getLhsRhs___redArg(v_a_721_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_755_; lean_object* v_fst_756_; lean_object* v_snd_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___f_761_; lean_object* v___x_762_; 
v_a_755_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_a_755_);
lean_dec_ref_known(v___x_754_, 1);
v_fst_756_ = lean_ctor_get(v_a_755_, 0);
lean_inc(v_fst_756_);
v_snd_757_ = lean_ctor_get(v_a_755_, 1);
lean_inc(v_snd_757_);
lean_dec(v_a_755_);
v___x_758_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed__const__1));
v___x_759_ = lean_box(v___x_743_);
v___x_760_ = lean_box(v___x_735_);
v___f_761_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___boxed), 19, 10);
lean_closure_set(v___f_761_, 0, v___x_737_);
lean_closure_set(v___f_761_, 1, v___x_738_);
lean_closure_set(v___f_761_, 2, v___x_758_);
lean_closure_set(v___f_761_, 3, v___x_759_);
lean_closure_set(v___f_761_, 4, v___x_760_);
lean_closure_set(v___f_761_, 5, v_snd_757_);
lean_closure_set(v___f_761_, 6, v_fst_756_);
lean_closure_set(v___f_761_, 7, v___x_732_);
lean_closure_set(v___f_761_, 8, v___x_753_);
lean_closure_set(v___f_761_, 9, v_a_746_);
v___x_762_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_761_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; lean_object* v___x_764_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_763_);
lean_dec_ref_known(v___x_762_, 1);
v___x_764_ = l_Lean_Elab_Tactic_extractLetsAddVarInfo(v___x_747_, v_a_763_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
return v___x_764_;
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
lean_dec(v___x_747_);
v_a_765_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_762_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_762_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
else
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
lean_dec(v___x_753_);
lean_dec(v___x_747_);
lean_dec(v_a_746_);
v_a_773_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v___x_754_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_754_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
lean_dec(v_ids_742_);
v_a_781_ = lean_ctor_get(v___x_745_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_745_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_745_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed(lean_object* v_x_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lean_Elab_Tactic_Conv_evalExtractLets(v_x_789_, v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_);
lean_dec(v_a_797_);
lean_dec_ref(v_a_796_);
lean_dec(v_a_795_);
lean_dec_ref(v_a_794_);
lean_dec(v_a_793_);
lean_dec_ref(v_a_792_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3(lean_object* v_mvarId_800_, lean_object* v_val_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(v_mvarId_800_, v_val_801_, v___y_803_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___boxed(lean_object* v_mvarId_808_, lean_object* v_val_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3(v_mvarId_808_, v_val_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3(lean_object* v_00_u03b2_816_, lean_object* v_x_817_, lean_object* v_x_818_, lean_object* v_x_819_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3___redArg(v_x_817_, v_x_818_, v_x_819_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6(lean_object* v_00_u03b2_821_, lean_object* v_x_822_, size_t v_x_823_, size_t v_x_824_, lean_object* v_x_825_, lean_object* v_x_826_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(v_x_822_, v_x_823_, v_x_824_, v_x_825_, v_x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___boxed(lean_object* v_00_u03b2_828_, lean_object* v_x_829_, lean_object* v_x_830_, lean_object* v_x_831_, lean_object* v_x_832_, lean_object* v_x_833_){
_start:
{
size_t v_x_6160__boxed_834_; size_t v_x_6161__boxed_835_; lean_object* v_res_836_; 
v_x_6160__boxed_834_ = lean_unbox_usize(v_x_830_);
lean_dec(v_x_830_);
v_x_6161__boxed_835_ = lean_unbox_usize(v_x_831_);
lean_dec(v_x_831_);
v_res_836_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6(v_00_u03b2_828_, v_x_829_, v_x_6160__boxed_834_, v_x_6161__boxed_835_, v_x_832_, v_x_833_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7(lean_object* v_00_u03b2_837_, lean_object* v_n_838_, lean_object* v_k_839_, lean_object* v_v_840_){
_start:
{
lean_object* v___x_841_; 
v___x_841_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7___redArg(v_n_838_, v_k_839_, v_v_840_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_842_, size_t v_depth_843_, lean_object* v_keys_844_, lean_object* v_vals_845_, lean_object* v_heq_846_, lean_object* v_i_847_, lean_object* v_entries_848_){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg(v_depth_843_, v_keys_844_, v_vals_845_, v_i_847_, v_entries_848_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___boxed(lean_object* v_00_u03b2_850_, lean_object* v_depth_851_, lean_object* v_keys_852_, lean_object* v_vals_853_, lean_object* v_heq_854_, lean_object* v_i_855_, lean_object* v_entries_856_){
_start:
{
size_t v_depth_boxed_857_; lean_object* v_res_858_; 
v_depth_boxed_857_ = lean_unbox_usize(v_depth_851_);
lean_dec(v_depth_851_);
v_res_858_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8(v_00_u03b2_850_, v_depth_boxed_857_, v_keys_852_, v_vals_853_, v_heq_854_, v_i_855_, v_entries_856_);
lean_dec_ref(v_vals_853_);
lean_dec_ref(v_keys_852_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8(lean_object* v_00_u03b2_859_, lean_object* v_x_860_, lean_object* v_x_861_, lean_object* v_x_862_, lean_object* v_x_863_){
_start:
{
lean_object* v___x_864_; 
v___x_864_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8___redArg(v_x_860_, v_x_861_, v_x_862_, v_x_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1(){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_874_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_875_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5));
v___x_876_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2));
v___x_877_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed), 10, 0);
v___x_878_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_874_, v___x_875_, v___x_876_, v___x_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___boxed(lean_object* v_a_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1();
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0(lean_object* v_a_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lean_Elab_Tactic_Conv_getLhs___redArg(v___y_886_, v___y_889_, v___y_890_, v___y_891_, v___y_892_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_896_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc_n(v_a_895_, 2);
lean_dec_ref_known(v___x_894_, 1);
v___x_896_ = l_Lean_Meta_liftLets(v_a_895_, v_a_884_, v___y_889_, v___y_890_, v___y_891_, v___y_892_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; uint8_t v___x_898_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_896_, 1);
v___x_898_ = lean_expr_eqv(v_a_895_, v_a_897_);
lean_dec(v_a_895_);
if (v___x_898_ == 0)
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_Elab_Tactic_Conv_changeLhs(v_a_897_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_);
return v___x_899_;
}
else
{
lean_object* v___x_900_; 
v___x_900_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_886_, v___y_889_, v___y_890_, v___y_891_, v___y_892_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_900_, 1);
v___x_902_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__1));
v___x_903_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2);
v___x_904_ = l_Lean_Meta_throwTacticEx___redArg(v___x_902_, v_a_901_, v___x_903_, v___y_889_, v___y_890_, v___y_891_, v___y_892_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v___x_905_; 
lean_dec_ref_known(v___x_904_, 1);
v___x_905_ = l_Lean_Elab_Tactic_Conv_changeLhs(v_a_897_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_);
return v___x_905_;
}
else
{
lean_dec(v_a_897_);
return v___x_904_;
}
}
else
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
lean_dec(v_a_897_);
v_a_906_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_900_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_900_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_a_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
}
else
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
lean_dec(v_a_895_);
v_a_914_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_896_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_896_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
lean_dec_ref(v_a_884_);
v_a_922_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_894_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_894_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___boxed(lean_object* v_a_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0(v_a_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets(lean_object* v_x_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_){
_start:
{
lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_958_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1));
lean_inc(v_x_948_);
v___x_959_ = l_Lean_Syntax_isOfKind(v_x_948_, v___x_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; 
lean_dec(v_x_948_);
v___x_960_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_960_;
}
else
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; uint8_t v___x_964_; 
v___x_961_ = lean_unsigned_to_nat(1u);
v___x_962_ = l_Lean_Syntax_getArg(v_x_948_, v___x_961_);
lean_dec(v_x_948_);
v___x_963_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7));
lean_inc(v___x_962_);
v___x_964_ = l_Lean_Syntax_isOfKind(v___x_962_, v___x_963_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; 
lean_dec(v___x_962_);
v___x_965_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_965_;
}
else
{
uint8_t v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_966_ = 0;
v___x_967_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v___x_967_, 0, v___x_966_);
lean_ctor_set_uint8(v___x_967_, 1, v___x_964_);
lean_ctor_set_uint8(v___x_967_, 2, v___x_966_);
lean_ctor_set_uint8(v___x_967_, 3, v___x_964_);
lean_ctor_set_uint8(v___x_967_, 4, v___x_964_);
lean_ctor_set_uint8(v___x_967_, 5, v___x_966_);
lean_ctor_set_uint8(v___x_967_, 6, v___x_964_);
lean_ctor_set_uint8(v___x_967_, 7, v___x_964_);
lean_ctor_set_uint8(v___x_967_, 8, v___x_966_);
lean_ctor_set_uint8(v___x_967_, 9, v___x_964_);
lean_ctor_set_uint8(v___x_967_, 10, v___x_964_);
v___x_968_ = l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg(v___x_962_, v___x_967_, v___x_964_, v_a_949_, v_a_955_, v_a_956_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___f_970_; lean_object* v___x_971_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 1);
v___f_970_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___boxed), 10, 1);
lean_closure_set(v___f_970_, 0, v_a_969_);
v___x_971_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_970_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_);
return v___x_971_;
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
v_a_972_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_968_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_968_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___boxed(lean_object* v_x_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lean_Elab_Tactic_Conv_evalLiftLets(v_x_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
lean_dec(v_a_988_);
lean_dec_ref(v_a_987_);
lean_dec(v_a_986_);
lean_dec_ref(v_a_985_);
lean_dec(v_a_984_);
lean_dec_ref(v_a_983_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1(){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_999_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1000_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1));
v___x_1001_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1));
v___x_1002_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLiftLets___boxed), 10, 0);
v___x_1003_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_999_, v___x_1000_, v___x_1001_, v___x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___boxed(lean_object* v_a_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1();
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0(lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = l_Lean_Elab_Tactic_Conv_getLhs___redArg(v___y_1010_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1020_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc_n(v_a_1019_, 2);
lean_dec_ref_known(v___x_1018_, 1);
v___x_1020_ = l_Lean_Meta_letToHave(v_a_1019_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; uint8_t v___x_1022_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_a_1021_);
lean_dec_ref_known(v___x_1020_, 1);
v___x_1022_ = lean_expr_eqv(v_a_1019_, v_a_1021_);
lean_dec(v_a_1019_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lean_Elab_Tactic_Conv_changeLhs(v_a_1021_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
return v___x_1023_;
}
else
{
lean_object* v___x_1024_; 
v___x_1024_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_1010_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_a_1025_);
lean_dec_ref_known(v___x_1024_, 1);
v___x_1026_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__1));
v___x_1027_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2);
v___x_1028_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1026_, v_a_1025_, v___x_1027_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v___x_1029_; 
lean_dec_ref_known(v___x_1028_, 1);
v___x_1029_ = l_Lean_Elab_Tactic_Conv_changeLhs(v_a_1021_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
return v___x_1029_;
}
else
{
lean_dec(v_a_1021_);
return v___x_1028_;
}
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
lean_dec(v_a_1021_);
v_a_1030_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_1024_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_1024_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
lean_dec(v_a_1019_);
v_a_1038_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___x_1020_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_1020_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1038_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
v_a_1046_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1018_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1018_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___boxed(lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0(v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave(lean_object* v_x_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_){
_start:
{
lean_object* v___x_1082_; uint8_t v___x_1083_; 
v___x_1082_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1));
v___x_1083_ = l_Lean_Syntax_isOfKind(v_x_1072_, v___x_1082_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; 
v___x_1084_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_1084_;
}
else
{
lean_object* v___f_1085_; lean_object* v___x_1086_; 
v___f_1085_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__2));
v___x_1086_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_1085_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_);
return v___x_1086_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___boxed(lean_object* v_x_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_Lean_Elab_Tactic_Conv_evalLetToHave(v_x_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_);
lean_dec(v_a_1095_);
lean_dec_ref(v_a_1094_);
lean_dec(v_a_1093_);
lean_dec_ref(v_a_1092_);
lean_dec(v_a_1091_);
lean_dec_ref(v_a_1090_);
lean_dec(v_a_1089_);
lean_dec_ref(v_a_1088_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1(){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1106_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1107_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1));
v___x_1108_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1));
v___x_1109_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLetToHave___boxed), 10, 0);
v___x_1110_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1106_, v___x_1107_, v___x_1108_, v___x_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___boxed(lean_object* v_a_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1();
return v_res_1112_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Lets(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Lets(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Conv_Lets(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Lets(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Conv_Lets(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Conv_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Conv_Lets(builtin);
}
#ifdef __cplusplus
}
#endif
